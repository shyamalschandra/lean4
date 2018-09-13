/*
Copyright (c) 2013-14 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once
#include <unordered_set>
#include <memory>
#include <utility>
#include <algorithm>
#include "util/lbool.h"
#include "util/name_set.h"
#include "util/name_generator.h"
#include "kernel/environment.h"
#include "kernel/local_ctx.h"
#include "kernel/expr_maps.h"
#include "kernel/equiv_manager.h"

namespace lean {
/** \brief Lean Type Checker. It can also be used to infer types, check whether a
    type \c A is convertible to a type \c B, etc. */
class type_checker {
public:
    class context {
        /* In the cache, we must take into account binder information.
           Examples:
           The type of (lambda x : A, t)   is (Pi x : A, typeof(t))
           The type of (lambda {x : A}, t) is (Pi {x : A}, typeof(t)) */
        typedef expr_bi_map<expr> infer_cache;
        typedef std::unordered_set<expr_pair, expr_pair_hash, expr_pair_eq> expr_pair_set;
        environment               m_env;
        name_generator            m_ngen;
        infer_cache               m_infer_type[2];
        expr_map<expr>            m_whnf_core;
        expr_map<expr>            m_whnf;
        equiv_manager             m_eqv_manager;
        expr_pair_set             m_failure;
        friend type_checker;
    public:
        context(environment const & env);
        environment & env() { return m_env; }
        environment const & env() const { return m_env; }
        name_generator & ngen() { return m_ngen; }
    };
private:
    bool                      m_ctx_owner;
    context *                 m_ctx;
    local_ctx                 m_lctx;
    bool                      m_non_meta_only;
    /* When `m_lparams != nullptr, the `check` method makes sure all level parameters
       are in `m_lparams`. */
    names const *             m_lparams;

    expr ensure_sort_core(expr e, expr const & s);
    expr ensure_pi_core(expr e, expr const & s);
    void check_level(level const & l);
    expr infer_fvar(expr const & e);
    expr infer_constant(expr const & e, bool infer_only);
    expr infer_lambda(expr const & e, bool infer_only);
    expr infer_pi(expr const & e, bool infer_only);
    expr infer_app(expr const & e, bool infer_only);
    expr infer_proj(expr const & e, bool infer_only);
    expr infer_let(expr const & e, bool infer_only);
    expr infer_type_core(expr const & e, bool infer_only);
    expr infer_type(expr const & e);

    enum class reduction_status { Continue, DefUnknown, DefEqual, DefDiff };
    optional<expr> reduce_recursor(expr const & e);
    optional<expr> reduce_proj(expr const & e);
    expr whnf_fvar(expr const & e);
    expr whnf_core(expr const & e);
    optional<constant_info> is_delta(expr const & e) const;
    optional<expr> unfold_definition_core(expr const & e);
    optional<expr> unfold_definition(expr const & e);

    bool is_def_eq_binding(expr t, expr s);
    bool is_def_eq(level const & l1, level const & l2);
    bool is_def_eq(levels const & ls1, levels const & ls2);
    lbool quick_is_def_eq(expr const & t, expr const & s, bool use_hash = false);
    bool is_def_eq_args(expr t, expr s);
    bool try_eta_expansion_core(expr const & t, expr const & s);
    bool try_eta_expansion(expr const & t, expr const & s) {
        return try_eta_expansion_core(t, s) || try_eta_expansion_core(s, t);
    }
    bool is_def_eq_app(expr const & t, expr const & s);
    bool is_def_eq_proof_irrel(expr const & t, expr const & s);
    bool failed_before(expr const & t, expr const & s) const;
    void cache_failure(expr const & t, expr const & s);
    reduction_status lazy_delta_reduction_step(expr & t_n, expr & s_n);
    lbool lazy_delta_reduction(expr & t_n, expr & s_n);
    bool is_def_eq_core(expr const & t, expr const & s);
    /** \brief Like \c check, but ignores undefined universes */
    expr check_ignore_undefined_universes(expr const & e);

public:
    /** \brief Create a type checker for the given environment. */
    type_checker(context & ctx, local_ctx const & lctx, bool non_meta_only = true);
    type_checker(environment const & env, local_ctx const & lctx, bool non_meta_only = true);
    type_checker(environment const & env, bool non_meta_only = true):type_checker(env, local_ctx(), non_meta_only) {}
    type_checker(context & ctx, bool non_meta_only = true):type_checker(ctx, local_ctx(), non_meta_only) {}
    type_checker(type_checker &&);
    type_checker(type_checker const &) = delete;
    ~type_checker();

    environment const & env() const { return m_ctx->m_env; }

    /** \brief Return the type of \c t.
        It does not check whether the input expression is type correct or not.
        The contract is: IF the input expression is type correct, then the inferred
        type is correct.
        Throw an exception if a type error is found. */
    expr infer(expr const & t) { return infer_type(t); }

    /** \brief Type check the given expression, and return the type of \c t.
        Throw an exception if a type error is found.  */
    expr check(expr const & t, names const & ps);
    /** \brief Like \c check, but ignores undefined universes */
    expr check(expr const & t) { return check_ignore_undefined_universes(t); }

    /** \brief Return true iff t is definitionally equal to s. */
    bool is_def_eq(expr const & t, expr const & s);
    /** \brief Return true iff t is a proposition. */
    bool is_prop(expr const & t);
    /** \brief Return the weak head normal form of \c t. */
    expr whnf(expr const & t);
    /** \brief Return a Pi if \c t is convertible to a Pi type. Throw an exception otherwise.
        The argument \c s is used when reporting errors */
    expr ensure_pi(expr const & t, expr const & s);
    expr ensure_pi(expr const & t) { return ensure_pi(t, t); }
    /** \brief Mare sure type of \c e is a Pi, and return it. Throw an exception otherwise. */
    expr ensure_fun(expr const & e) { return ensure_pi(infer(e), e); }
    /** \brief Return a Sort if \c t is convertible to Sort. Throw an exception otherwise.
        The argument \c s is used when reporting errors. */
    expr ensure_sort(expr const & t, expr const & s);
    /** \brief Return a Sort if \c t is convertible to Sort. Throw an exception otherwise. */
    expr ensure_sort(expr const & t) { return ensure_sort(t, t); }
    /** \brief Mare sure type of \c e is a sort, and return it. Throw an exception otherwise. */
    expr ensure_type(expr const & e) { return ensure_sort(infer(e), e); }
};

void initialize_type_checker();
void finalize_type_checker();
}
