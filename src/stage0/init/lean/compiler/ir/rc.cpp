// Lean compiler output
// Module: init.lean.compiler.ir.rc
// Imports: init.lean.runtime init.lean.compiler.ir.compilerm init.lean.compiler.ir.livevars
#include "runtime/object.h"
#include "runtime/apply.h"
typedef lean::object obj;    typedef lean::usize  usize;
typedef lean::uint8  uint8;  typedef lean::uint16 uint16;
typedef lean::uint32 uint32; typedef lean::uint64 uint64;
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
obj* l_RBNode_setBlack___main___rarg(obj*);
obj* l_unsafeCast(obj*, obj*, obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_11__addDecForDeadParams___boxed(obj*, obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_8__addIncBefore(obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_9__addDecAfterFullApp(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_explicitRC___boxed(obj*, obj*, obj*);
extern obj* l_Array_empty___closed__1;
namespace lean {
obj* nat_sub(obj*, obj*);
}
obj* l_Lean_IR_ExplicitRC_getJPParams(obj*, obj*);
obj* l_Lean_IR_ExplicitRC_getVarInfo___boxed(obj*, obj*);
obj* l_RBNode_find___main___at___private_init_lean_compiler_ir_livevars_7__collectJP___spec__1(obj*, obj*);
obj* l_Lean_IR_ExplicitRC_visitFnBody___main(obj*, obj*);
obj* l_Nat_anyAux___main___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__5___boxed(obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_7__addIncBeforeAux___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__1___boxed(obj*, obj*, obj*, obj*);
obj* l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_7__addIncBeforeAux___spec__1(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_13__consumeExpr___main___boxed(obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_2__addDecForAlt___boxed(obj*, obj*, obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_7__addIncBeforeAux___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__1(obj*, obj*, obj*, obj*, obj*);
obj* l_Nat_anyAux___main___at___private_init_lean_compiler_ir_rc_5__isBorrowParam___spec__2___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_7__addIncBeforeAux___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__1(obj*, obj*, obj*, obj*);
uint8 l_Lean_IR_IRType_isObj___main(uint8);
obj* l___private_init_lean_compiler_ir_rc_14__isScalarBoxedInTaggedPtr___boxed(obj*);
obj* l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__3___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Array_mkEmpty(obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_1__updateRefUsingCtorInfo(obj*, obj*, obj*);
uint8 l___private_init_lean_compiler_ir_rc_3__isFirstOcc(obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_17__processVDecl(obj*, obj*, uint8, obj*, obj*, obj*);
obj* l_RBNode_fold___main___at___private_init_lean_compiler_ir_rc_2__addDecForAlt___spec__2(obj*, obj*, obj*, obj*, obj*);
uint8 l___private_init_lean_compiler_ir_rc_4__isBorrowParamAux___at___private_init_lean_compiler_ir_rc_5__isBorrowParam___spec__1(obj*, obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_4__isBorrowParamAux___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__4___rarg___boxed(obj*);
obj* l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__3(obj*, obj*, obj*, obj*, obj*);
uint8 l___private_init_lean_compiler_ir_rc_14__isScalarBoxedInTaggedPtr(obj*);
uint8 l_Nat_anyAux___main___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__5(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_findEnvDecl_x27(obj*, obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_7__addIncBeforeAux(obj*, obj*, obj*, obj*, obj*);
obj* l_Array_miterateAux___main___at_Lean_IR_ExplicitRC_updateVarInfoWithParams___spec__1(obj*, obj*, obj*, obj*);
obj* l_Array_ummapAux___main___at_Lean_IR_ExplicitRC_visitFnBody___main___spec__1(obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_8__addIncBefore___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_ExplicitRC_addDec(obj*, obj*);
uint8 l___private_init_lean_compiler_ir_rc_4__isBorrowParamAux___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__4(obj*, obj*, obj*);
obj* l_RBNode_fold___main___at___private_init_lean_compiler_ir_rc_2__addDecForAlt___spec__2___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_ExplicitRC_getDecl___closed__1;
obj* l___private_init_lean_compiler_ir_rc_7__addIncBeforeAux___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__6(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_RBNode_erase___at___private_init_lean_compiler_ir_livevars_8__bindVar___spec__1(obj*, obj*);
obj* l_Lean_IR_ExplicitRC_getJPLiveVars___boxed(obj*, obj*);
obj* l_Array_ummapAux___main___at_Lean_IR_ExplicitRC_visitFnBody___main___spec__1___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_RBNode_find___main___at_Lean_IR_ExplicitRC_getVarInfo___spec__1___boxed(obj*, obj*);
obj* l_Lean_IR_ExplicitRC_visitDecl___main(obj*, obj*, obj*);
obj* l_Nat_anyAux___main___at___private_init_lean_compiler_ir_rc_4__isBorrowParamAux___spec__1___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Nat_anyAux___main___at___private_init_lean_compiler_ir_rc_3__isFirstOcc___spec__1___boxed(obj*, obj*, obj*, obj*);
namespace lean {
uint8 nat_dec_lt(obj*, obj*);
}
obj* l___private_init_lean_compiler_ir_rc_6__getNumConsumptions___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__2(obj*, obj*, obj*);
obj* l_Lean_IR_ExplicitRC_mustConsume___boxed(obj*, obj*);
obj* l_Lean_IR_LiveVars_updateJPLiveVarMap(obj*, obj*, obj*, obj*);
obj* l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__3___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_4__isBorrowParamAux___at___private_init_lean_compiler_ir_rc_5__isBorrowParam___spec__1___boxed(obj*, obj*, obj*);
obj* l_Lean_IR_ExplicitRC_getVarInfo___closed__1;
obj* l_Array_fget(obj*, obj*, obj*);
extern obj* l___private_init_lean_compiler_ir_livevars_6__accumulate___closed__1;
obj* l_Lean_IR_LiveVars_collectExpr___main(obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___boxed(obj*, obj*, obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll(obj*, obj*, obj*, obj*);
namespace lean {
obj* nat_add(obj*, obj*);
}
uint8 l_Lean_IR_ExplicitRC_mustConsume(obj*, obj*);
obj* l_RBNode_find___main___at_Lean_IR_ExplicitRC_getVarInfo___spec__1(obj*, obj*);
namespace lean {
uint8 nat_dec_eq(obj*, obj*);
}
extern obj* l_Lean_IR_paramInh;
uint8 l_Array_isEmpty___rarg(obj*);
obj* l_Array_push(obj*, obj*, obj*);
uint8 l_RBNode_isRed___main___rarg(obj*);
uint8 l_Lean_IR_CtorInfo_isRef(obj*);
obj* l___private_init_lean_compiler_ir_rc_12__isPersistent___boxed(obj*);
obj* l___private_init_lean_compiler_ir_rc_4__isBorrowParamAux___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__4___boxed(obj*);
obj* l___private_init_lean_compiler_ir_rc_6__getNumConsumptions___boxed(obj*, obj*, obj*);
obj* l_RBNode_insert___at___private_init_lean_compiler_ir_livevars_2__collectVar___spec__1(obj*, obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_6__getNumConsumptions___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__2___boxed(obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_11__addDecForDeadParams(obj*, obj*, obj*);
obj* l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_9__addDecAfterFullApp___spec__1(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_4__isBorrowParamAux___boxed(obj*, obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_7__addIncBeforeAux___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__1___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_LocalContext_getJPParams(obj*, obj*);
obj* l_Lean_IR_ExplicitRC_visitFnBody(obj*, obj*);
uint8 l_Nat_anyAux___main___at___private_init_lean_compiler_ir_rc_4__isBorrowParamAux___spec__1(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_ExplicitRC_getDecl(obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_3__isFirstOcc___boxed(obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_5__isBorrowParam___boxed(obj*, obj*, obj*);
uint8 l_Nat_anyAux___main___at___private_init_lean_compiler_ir_rc_5__isBorrowParam___spec__2(obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_6__getNumConsumptions___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__2___boxed(obj*, obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_15__updateVarInfo___boxed(obj*, obj*, obj*, obj*);
uint8 l___private_init_lean_compiler_ir_rc_4__isBorrowParamAux___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__4___rarg(obj*);
uint8 l___private_init_lean_compiler_ir_rc_12__isPersistent___main(obj*);
obj* l_Nat_anyAux___main___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__5___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_RBNode_ins___main___at___private_init_lean_compiler_ir_rc_1__updateRefUsingCtorInfo___spec__2(obj*, obj*, obj*);
obj* l_Lean_IR_ExplicitRC_getJPParams___boxed(obj*, obj*);
obj* l_Lean_IR_ExplicitRC_addInc(obj*, obj*, obj*);
uint8 l___private_init_lean_compiler_ir_rc_4__isBorrowParamAux(obj*, obj*, obj*);
extern obj* l_Lean_maxSmallNat;
obj* l_Lean_IR_LiveVars_collectFnBody___main(obj*, obj*, obj*);
uint8 l___private_init_lean_compiler_ir_rc_12__isPersistent(obj*);
obj* l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_7__addIncBeforeAux___spec__1___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_16__addDecIfNeeded___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_IR_getEnv___rarg(obj*);
obj* l_Lean_IR_Decl_params___main(obj*);
uint8 l_Nat_anyAux___main___at___private_init_lean_compiler_ir_rc_3__isFirstOcc___spec__1(obj*, obj*, obj*, obj*);
obj* l_Array_size(obj*, obj*);
obj* l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_9__addDecAfterFullApp___spec__1___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_RBNode_findCore___main___at___private_init_lean_compiler_ir_rc_2__addDecForAlt___spec__1___boxed(obj*, obj*);
uint8 l_Lean_IR_Arg_beq___main(obj*, obj*);
obj* l_Array_fset(obj*, obj*, obj*, obj*);
obj* l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_6__getNumConsumptions___spec__1(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Array_get(obj*, obj*, obj*, obj*);
obj* l_Array_miterateAux___main___at_Lean_IR_ExplicitRC_updateVarInfoWithParams___spec__1___boxed(obj*, obj*, obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_9__addDecAfterFullApp___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Array_miterateAux___main___at___private_init_lean_compiler_ir_rc_11__addDecForDeadParams___spec__1(obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_2__addDecForAlt(obj*, obj*, obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_6__getNumConsumptions___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__2(obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_6__getNumConsumptions(obj*, obj*, obj*);
uint8 l_Nat_anyAux___main___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__5(obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_17__processVDecl___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_12__isPersistent___main___boxed(obj*);
uint8 l___private_init_lean_compiler_ir_rc_13__consumeExpr___main(obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_13__consumeExpr___boxed(obj*, obj*);
obj* l_Lean_IR_ExplicitRC_visitDecl(obj*, obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_4__isBorrowParamAux___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__4(obj*);
obj* l___private_init_lean_compiler_ir_rc_16__addDecIfNeeded(obj*, obj*, obj*, obj*);
namespace lean {
uint8 nat_dec_le(obj*, obj*);
}
obj* l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_6__getNumConsumptions___spec__1___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_4__isBorrowParamAux___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__4___boxed(obj*, obj*, obj*);
uint8 l___private_init_lean_compiler_ir_rc_5__isBorrowParam(obj*, obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_1__updateRefUsingCtorInfo___boxed(obj*, obj*, obj*);
obj* l_RBNode_insert___at___private_init_lean_compiler_ir_rc_1__updateRefUsingCtorInfo___spec__1(obj*, obj*, obj*);
obj* l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__3(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__6(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_ExplicitRC_updateVarInfoWithParams___boxed(obj*, obj*);
obj* l___private_init_lean_compiler_ir_rc_15__updateVarInfo(obj*, obj*, uint8, obj*);
obj* l_Lean_IR_ExplicitRC_getDecl___boxed(obj*, obj*);
obj* l_Lean_IR_explicitRC(obj*, obj*, obj*);
obj* l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__6___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_ExplicitRC_updateVarInfoWithParams(obj*, obj*);
uint8 l___private_init_lean_compiler_ir_rc_13__consumeExpr(obj*, obj*);
obj* l_Lean_IR_ExplicitRC_getJPLiveVars(obj*, obj*);
obj* l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__6___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_ExplicitRC_getVarInfo(obj*, obj*);
obj* l_Array_miterateAux___main___at___private_init_lean_compiler_ir_rc_11__addDecForDeadParams___spec__1___boxed(obj*, obj*, obj*, obj*, obj*);
extern obj* l_Lean_IR_Arg_Inhabited;
obj* l_RBNode_findCore___main___at___private_init_lean_compiler_ir_rc_2__addDecForAlt___spec__1(obj*, obj*);
obj* l_Array_ummapAux___main___at_Lean_IR_explicitRC___spec__1(obj*, obj*, obj*, obj*);
obj* _init_l_Lean_IR_ExplicitRC_getDecl___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; uint8 x_4; obj* x_5; obj* x_6; 
x_1 = lean::mk_nat_obj(0u);
x_2 = lean::mk_empty_array(x_1);
x_3 = lean::box(0);
x_4 = 6;
x_5 = lean::box(13);
x_6 = lean::alloc_cnstr(0, 3, 1);
lean::cnstr_set(x_6, 0, x_3);
lean::cnstr_set(x_6, 1, x_2);
lean::cnstr_set(x_6, 2, x_5);
lean::cnstr_set_scalar(x_6, sizeof(void*)*3, x_4);
return x_6;
}
}
obj* l_Lean_IR_ExplicitRC_getDecl(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; 
x_3 = lean::cnstr_get(x_1, 0);
x_4 = lean::cnstr_get(x_1, 1);
x_5 = l_Lean_IR_findEnvDecl_x27(x_3, x_2, x_4);
if (lean::obj_tag(x_5) == 0)
{
obj* x_6; 
x_6 = l_Lean_IR_ExplicitRC_getDecl___closed__1;
return x_6;
}
else
{
obj* x_7; 
x_7 = lean::cnstr_get(x_5, 0);
lean::inc(x_7);
lean::dec(x_5);
return x_7;
}
}
}
obj* l_Lean_IR_ExplicitRC_getDecl___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_IR_ExplicitRC_getDecl(x_1, x_2);
lean::dec(x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_RBNode_find___main___at_Lean_IR_ExplicitRC_getVarInfo___spec__1(obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; 
x_3 = lean::box(0);
return x_3;
}
else
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; uint8 x_8; 
x_4 = lean::cnstr_get(x_1, 0);
x_5 = lean::cnstr_get(x_1, 1);
x_6 = lean::cnstr_get(x_1, 2);
x_7 = lean::cnstr_get(x_1, 3);
x_8 = lean::nat_dec_lt(x_2, x_5);
if (x_8 == 0)
{
uint8 x_9; 
x_9 = lean::nat_dec_lt(x_5, x_2);
if (x_9 == 0)
{
obj* x_10; 
lean::inc(x_6);
x_10 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_10, 0, x_6);
return x_10;
}
else
{
x_1 = x_7;
goto _start;
}
}
else
{
x_1 = x_4;
goto _start;
}
}
}
}
obj* _init_l_Lean_IR_ExplicitRC_getVarInfo___closed__1() {
_start:
{
uint8 x_1; uint8 x_2; obj* x_3; 
x_1 = 1;
x_2 = 0;
x_3 = lean::alloc_cnstr(0, 0, 3);
lean::cnstr_set_scalar(x_3, 0, x_1);
lean::cnstr_set_scalar(x_3, 1, x_2);
lean::cnstr_set_scalar(x_3, 2, x_2);
return x_3;
}
}
obj* l_Lean_IR_ExplicitRC_getVarInfo(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::cnstr_get(x_1, 2);
x_4 = l_RBNode_find___main___at_Lean_IR_ExplicitRC_getVarInfo___spec__1(x_3, x_2);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_Lean_IR_ExplicitRC_getVarInfo___closed__1;
return x_5;
}
else
{
obj* x_6; 
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
lean::dec(x_4);
return x_6;
}
}
}
obj* l_RBNode_find___main___at_Lean_IR_ExplicitRC_getVarInfo___spec__1___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_RBNode_find___main___at_Lean_IR_ExplicitRC_getVarInfo___spec__1(x_1, x_2);
lean::dec(x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_Lean_IR_ExplicitRC_getVarInfo___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_IR_ExplicitRC_getVarInfo(x_1, x_2);
lean::dec(x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_Lean_IR_ExplicitRC_getJPParams(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::cnstr_get(x_1, 4);
x_4 = l_Lean_IR_LocalContext_getJPParams(x_3, x_2);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_Array_empty___closed__1;
return x_5;
}
else
{
obj* x_6; 
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
lean::dec(x_4);
return x_6;
}
}
}
obj* l_Lean_IR_ExplicitRC_getJPParams___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_IR_ExplicitRC_getJPParams(x_1, x_2);
lean::dec(x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_Lean_IR_ExplicitRC_getJPLiveVars(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::cnstr_get(x_1, 3);
x_4 = l_RBNode_find___main___at___private_init_lean_compiler_ir_livevars_7__collectJP___spec__1(x_3, x_2);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = lean::box(0);
return x_5;
}
else
{
obj* x_6; 
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
lean::dec(x_4);
return x_6;
}
}
}
obj* l_Lean_IR_ExplicitRC_getJPLiveVars___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_IR_ExplicitRC_getJPLiveVars(x_1, x_2);
lean::dec(x_2);
lean::dec(x_1);
return x_3;
}
}
uint8 l_Lean_IR_ExplicitRC_mustConsume(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = l_Lean_IR_ExplicitRC_getVarInfo(x_1, x_2);
x_4 = lean::cnstr_get_scalar<uint8>(x_3, 0);
if (x_4 == 0)
{
uint8 x_5; 
lean::dec(x_3);
x_5 = 0;
return x_5;
}
else
{
uint8 x_6; 
x_6 = lean::cnstr_get_scalar<uint8>(x_3, 1);
if (x_6 == 0)
{
uint8 x_7; 
x_7 = lean::cnstr_get_scalar<uint8>(x_3, 2);
lean::dec(x_3);
return x_7;
}
else
{
uint8 x_8; 
lean::dec(x_3);
x_8 = 0;
return x_8;
}
}
}
}
obj* l_Lean_IR_ExplicitRC_mustConsume___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; obj* x_4; 
x_3 = l_Lean_IR_ExplicitRC_mustConsume(x_1, x_2);
lean::dec(x_2);
lean::dec(x_1);
x_4 = lean::box(x_3);
return x_4;
}
}
obj* l_Lean_IR_ExplicitRC_addInc(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; uint8 x_5; 
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::nat_dec_eq(x_3, x_4);
if (x_5 == 0)
{
uint8 x_6; obj* x_7; 
x_6 = 1;
x_7 = lean::alloc_cnstr(6, 3, 1);
lean::cnstr_set(x_7, 0, x_1);
lean::cnstr_set(x_7, 1, x_3);
lean::cnstr_set(x_7, 2, x_2);
lean::cnstr_set_scalar(x_7, sizeof(void*)*3, x_6);
return x_7;
}
else
{
lean::dec(x_3);
lean::dec(x_1);
return x_2;
}
}
}
obj* l_Lean_IR_ExplicitRC_addDec(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; obj* x_5; 
x_3 = lean::mk_nat_obj(1u);
x_4 = 1;
x_5 = lean::alloc_cnstr(7, 3, 1);
lean::cnstr_set(x_5, 0, x_1);
lean::cnstr_set(x_5, 1, x_3);
lean::cnstr_set(x_5, 2, x_2);
lean::cnstr_set_scalar(x_5, sizeof(void*)*3, x_4);
return x_5;
}
}
obj* l_RBNode_ins___main___at___private_init_lean_compiler_ir_rc_1__updateRefUsingCtorInfo___spec__2(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
uint8 x_4; obj* x_5; 
x_4 = 0;
x_5 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_5, 0, x_1);
lean::cnstr_set(x_5, 1, x_2);
lean::cnstr_set(x_5, 2, x_3);
lean::cnstr_set(x_5, 3, x_1);
lean::cnstr_set_scalar(x_5, sizeof(void*)*4, x_4);
return x_5;
}
else
{
uint8 x_6; 
x_6 = lean::cnstr_get_scalar<uint8>(x_1, sizeof(void*)*4);
if (x_6 == 0)
{
uint8 x_7; 
x_7 = !lean::is_exclusive(x_1);
if (x_7 == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; uint8 x_12; 
x_8 = lean::cnstr_get(x_1, 0);
x_9 = lean::cnstr_get(x_1, 1);
x_10 = lean::cnstr_get(x_1, 2);
x_11 = lean::cnstr_get(x_1, 3);
x_12 = lean::nat_dec_lt(x_2, x_9);
if (x_12 == 0)
{
uint8 x_13; 
x_13 = lean::nat_dec_lt(x_9, x_2);
if (x_13 == 0)
{
lean::dec(x_10);
lean::dec(x_9);
lean::cnstr_set(x_1, 2, x_3);
lean::cnstr_set(x_1, 1, x_2);
return x_1;
}
else
{
obj* x_14; 
x_14 = l_RBNode_ins___main___at___private_init_lean_compiler_ir_rc_1__updateRefUsingCtorInfo___spec__2(x_11, x_2, x_3);
lean::cnstr_set(x_1, 3, x_14);
return x_1;
}
}
else
{
obj* x_15; 
x_15 = l_RBNode_ins___main___at___private_init_lean_compiler_ir_rc_1__updateRefUsingCtorInfo___spec__2(x_8, x_2, x_3);
lean::cnstr_set(x_1, 0, x_15);
return x_1;
}
}
else
{
obj* x_16; obj* x_17; obj* x_18; obj* x_19; uint8 x_20; 
x_16 = lean::cnstr_get(x_1, 0);
x_17 = lean::cnstr_get(x_1, 1);
x_18 = lean::cnstr_get(x_1, 2);
x_19 = lean::cnstr_get(x_1, 3);
lean::inc(x_19);
lean::inc(x_18);
lean::inc(x_17);
lean::inc(x_16);
lean::dec(x_1);
x_20 = lean::nat_dec_lt(x_2, x_17);
if (x_20 == 0)
{
uint8 x_21; 
x_21 = lean::nat_dec_lt(x_17, x_2);
if (x_21 == 0)
{
obj* x_22; 
lean::dec(x_18);
lean::dec(x_17);
x_22 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_22, 0, x_16);
lean::cnstr_set(x_22, 1, x_2);
lean::cnstr_set(x_22, 2, x_3);
lean::cnstr_set(x_22, 3, x_19);
lean::cnstr_set_scalar(x_22, sizeof(void*)*4, x_6);
return x_22;
}
else
{
obj* x_23; obj* x_24; 
x_23 = l_RBNode_ins___main___at___private_init_lean_compiler_ir_rc_1__updateRefUsingCtorInfo___spec__2(x_19, x_2, x_3);
x_24 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_24, 0, x_16);
lean::cnstr_set(x_24, 1, x_17);
lean::cnstr_set(x_24, 2, x_18);
lean::cnstr_set(x_24, 3, x_23);
lean::cnstr_set_scalar(x_24, sizeof(void*)*4, x_6);
return x_24;
}
}
else
{
obj* x_25; obj* x_26; 
x_25 = l_RBNode_ins___main___at___private_init_lean_compiler_ir_rc_1__updateRefUsingCtorInfo___spec__2(x_16, x_2, x_3);
x_26 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_17);
lean::cnstr_set(x_26, 2, x_18);
lean::cnstr_set(x_26, 3, x_19);
lean::cnstr_set_scalar(x_26, sizeof(void*)*4, x_6);
return x_26;
}
}
}
else
{
uint8 x_27; 
x_27 = !lean::is_exclusive(x_1);
if (x_27 == 0)
{
obj* x_28; obj* x_29; obj* x_30; obj* x_31; uint8 x_32; 
x_28 = lean::cnstr_get(x_1, 0);
x_29 = lean::cnstr_get(x_1, 1);
x_30 = lean::cnstr_get(x_1, 2);
x_31 = lean::cnstr_get(x_1, 3);
x_32 = lean::nat_dec_lt(x_2, x_29);
if (x_32 == 0)
{
uint8 x_33; 
x_33 = lean::nat_dec_lt(x_29, x_2);
if (x_33 == 0)
{
lean::dec(x_30);
lean::dec(x_29);
lean::cnstr_set(x_1, 2, x_3);
lean::cnstr_set(x_1, 1, x_2);
return x_1;
}
else
{
uint8 x_34; 
x_34 = l_RBNode_isRed___main___rarg(x_31);
if (x_34 == 0)
{
obj* x_35; 
x_35 = l_RBNode_ins___main___at___private_init_lean_compiler_ir_rc_1__updateRefUsingCtorInfo___spec__2(x_31, x_2, x_3);
lean::cnstr_set(x_1, 3, x_35);
return x_1;
}
else
{
obj* x_36; 
x_36 = l_RBNode_ins___main___at___private_init_lean_compiler_ir_rc_1__updateRefUsingCtorInfo___spec__2(x_31, x_2, x_3);
if (lean::obj_tag(x_36) == 0)
{
lean::free_heap_obj(x_1);
lean::dec(x_30);
lean::dec(x_29);
lean::dec(x_28);
return x_36;
}
else
{
obj* x_37; 
x_37 = lean::cnstr_get(x_36, 0);
lean::inc(x_37);
if (lean::obj_tag(x_37) == 0)
{
obj* x_38; 
x_38 = lean::cnstr_get(x_36, 3);
lean::inc(x_38);
if (lean::obj_tag(x_38) == 0)
{
uint8 x_39; 
x_39 = !lean::is_exclusive(x_36);
if (x_39 == 0)
{
obj* x_40; obj* x_41; uint8 x_42; uint8 x_43; 
x_40 = lean::cnstr_get(x_36, 3);
lean::dec(x_40);
x_41 = lean::cnstr_get(x_36, 0);
lean::dec(x_41);
x_42 = 0;
lean::cnstr_set(x_36, 0, x_38);
lean::cnstr_set_scalar(x_36, sizeof(void*)*4, x_42);
x_43 = 1;
lean::cnstr_set(x_1, 3, x_36);
lean::cnstr_set_scalar(x_1, sizeof(void*)*4, x_43);
return x_1;
}
else
{
obj* x_44; obj* x_45; uint8 x_46; obj* x_47; uint8 x_48; 
x_44 = lean::cnstr_get(x_36, 1);
x_45 = lean::cnstr_get(x_36, 2);
lean::inc(x_45);
lean::inc(x_44);
lean::dec(x_36);
x_46 = 0;
x_47 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_47, 0, x_38);
lean::cnstr_set(x_47, 1, x_44);
lean::cnstr_set(x_47, 2, x_45);
lean::cnstr_set(x_47, 3, x_38);
lean::cnstr_set_scalar(x_47, sizeof(void*)*4, x_46);
x_48 = 1;
lean::cnstr_set(x_1, 3, x_47);
lean::cnstr_set_scalar(x_1, sizeof(void*)*4, x_48);
return x_1;
}
}
else
{
uint8 x_49; 
x_49 = lean::cnstr_get_scalar<uint8>(x_38, sizeof(void*)*4);
if (x_49 == 0)
{
uint8 x_50; 
x_50 = !lean::is_exclusive(x_36);
if (x_50 == 0)
{
obj* x_51; obj* x_52; obj* x_53; obj* x_54; uint8 x_55; 
x_51 = lean::cnstr_get(x_36, 1);
x_52 = lean::cnstr_get(x_36, 2);
x_53 = lean::cnstr_get(x_36, 3);
lean::dec(x_53);
x_54 = lean::cnstr_get(x_36, 0);
lean::dec(x_54);
x_55 = !lean::is_exclusive(x_38);
if (x_55 == 0)
{
obj* x_56; obj* x_57; obj* x_58; obj* x_59; uint8 x_60; 
x_56 = lean::cnstr_get(x_38, 0);
x_57 = lean::cnstr_get(x_38, 1);
x_58 = lean::cnstr_get(x_38, 2);
x_59 = lean::cnstr_get(x_38, 3);
x_60 = 1;
lean::cnstr_set(x_38, 3, x_37);
lean::cnstr_set(x_38, 2, x_30);
lean::cnstr_set(x_38, 1, x_29);
lean::cnstr_set(x_38, 0, x_28);
lean::cnstr_set_scalar(x_38, sizeof(void*)*4, x_60);
lean::cnstr_set(x_36, 3, x_59);
lean::cnstr_set(x_36, 2, x_58);
lean::cnstr_set(x_36, 1, x_57);
lean::cnstr_set(x_36, 0, x_56);
lean::cnstr_set_scalar(x_36, sizeof(void*)*4, x_60);
lean::cnstr_set(x_1, 3, x_36);
lean::cnstr_set(x_1, 2, x_52);
lean::cnstr_set(x_1, 1, x_51);
lean::cnstr_set(x_1, 0, x_38);
lean::cnstr_set_scalar(x_1, sizeof(void*)*4, x_49);
return x_1;
}
else
{
obj* x_61; obj* x_62; obj* x_63; obj* x_64; uint8 x_65; obj* x_66; 
x_61 = lean::cnstr_get(x_38, 0);
x_62 = lean::cnstr_get(x_38, 1);
x_63 = lean::cnstr_get(x_38, 2);
x_64 = lean::cnstr_get(x_38, 3);
lean::inc(x_64);
lean::inc(x_63);
lean::inc(x_62);
lean::inc(x_61);
lean::dec(x_38);
x_65 = 1;
x_66 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_66, 0, x_28);
lean::cnstr_set(x_66, 1, x_29);
lean::cnstr_set(x_66, 2, x_30);
lean::cnstr_set(x_66, 3, x_37);
lean::cnstr_set_scalar(x_66, sizeof(void*)*4, x_65);
lean::cnstr_set(x_36, 3, x_64);
lean::cnstr_set(x_36, 2, x_63);
lean::cnstr_set(x_36, 1, x_62);
lean::cnstr_set(x_36, 0, x_61);
lean::cnstr_set_scalar(x_36, sizeof(void*)*4, x_65);
lean::cnstr_set(x_1, 3, x_36);
lean::cnstr_set(x_1, 2, x_52);
lean::cnstr_set(x_1, 1, x_51);
lean::cnstr_set(x_1, 0, x_66);
lean::cnstr_set_scalar(x_1, sizeof(void*)*4, x_49);
return x_1;
}
}
else
{
obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_73; uint8 x_74; obj* x_75; obj* x_76; 
x_67 = lean::cnstr_get(x_36, 1);
x_68 = lean::cnstr_get(x_36, 2);
lean::inc(x_68);
lean::inc(x_67);
lean::dec(x_36);
x_69 = lean::cnstr_get(x_38, 0);
lean::inc(x_69);
x_70 = lean::cnstr_get(x_38, 1);
lean::inc(x_70);
x_71 = lean::cnstr_get(x_38, 2);
lean::inc(x_71);
x_72 = lean::cnstr_get(x_38, 3);
lean::inc(x_72);
if (lean::is_exclusive(x_38)) {
 lean::cnstr_release(x_38, 0);
 lean::cnstr_release(x_38, 1);
 lean::cnstr_release(x_38, 2);
 lean::cnstr_release(x_38, 3);
 x_73 = x_38;
} else {
 lean::dec_ref(x_38);
 x_73 = lean::box(0);
}
x_74 = 1;
if (lean::is_scalar(x_73)) {
 x_75 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_75 = x_73;
}
lean::cnstr_set(x_75, 0, x_28);
lean::cnstr_set(x_75, 1, x_29);
lean::cnstr_set(x_75, 2, x_30);
lean::cnstr_set(x_75, 3, x_37);
lean::cnstr_set_scalar(x_75, sizeof(void*)*4, x_74);
x_76 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_76, 0, x_69);
lean::cnstr_set(x_76, 1, x_70);
lean::cnstr_set(x_76, 2, x_71);
lean::cnstr_set(x_76, 3, x_72);
lean::cnstr_set_scalar(x_76, sizeof(void*)*4, x_74);
lean::cnstr_set(x_1, 3, x_76);
lean::cnstr_set(x_1, 2, x_68);
lean::cnstr_set(x_1, 1, x_67);
lean::cnstr_set(x_1, 0, x_75);
lean::cnstr_set_scalar(x_1, sizeof(void*)*4, x_49);
return x_1;
}
}
else
{
uint8 x_77; 
x_77 = !lean::is_exclusive(x_36);
if (x_77 == 0)
{
obj* x_78; obj* x_79; uint8 x_80; 
x_78 = lean::cnstr_get(x_36, 3);
lean::dec(x_78);
x_79 = lean::cnstr_get(x_36, 0);
lean::dec(x_79);
x_80 = 0;
lean::cnstr_set_scalar(x_36, sizeof(void*)*4, x_80);
lean::cnstr_set(x_1, 3, x_36);
lean::cnstr_set_scalar(x_1, sizeof(void*)*4, x_49);
return x_1;
}
else
{
obj* x_81; obj* x_82; uint8 x_83; obj* x_84; 
x_81 = lean::cnstr_get(x_36, 1);
x_82 = lean::cnstr_get(x_36, 2);
lean::inc(x_82);
lean::inc(x_81);
lean::dec(x_36);
x_83 = 0;
x_84 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_84, 0, x_37);
lean::cnstr_set(x_84, 1, x_81);
lean::cnstr_set(x_84, 2, x_82);
lean::cnstr_set(x_84, 3, x_38);
lean::cnstr_set_scalar(x_84, sizeof(void*)*4, x_83);
lean::cnstr_set(x_1, 3, x_84);
lean::cnstr_set_scalar(x_1, sizeof(void*)*4, x_49);
return x_1;
}
}
}
}
else
{
uint8 x_85; 
x_85 = lean::cnstr_get_scalar<uint8>(x_37, sizeof(void*)*4);
if (x_85 == 0)
{
uint8 x_86; 
x_86 = !lean::is_exclusive(x_36);
if (x_86 == 0)
{
obj* x_87; uint8 x_88; 
x_87 = lean::cnstr_get(x_36, 0);
lean::dec(x_87);
x_88 = !lean::is_exclusive(x_37);
if (x_88 == 0)
{
obj* x_89; obj* x_90; obj* x_91; obj* x_92; uint8 x_93; 
x_89 = lean::cnstr_get(x_37, 0);
x_90 = lean::cnstr_get(x_37, 1);
x_91 = lean::cnstr_get(x_37, 2);
x_92 = lean::cnstr_get(x_37, 3);
x_93 = 1;
lean::cnstr_set(x_37, 3, x_89);
lean::cnstr_set(x_37, 2, x_30);
lean::cnstr_set(x_37, 1, x_29);
lean::cnstr_set(x_37, 0, x_28);
lean::cnstr_set_scalar(x_37, sizeof(void*)*4, x_93);
lean::cnstr_set(x_36, 0, x_92);
lean::cnstr_set_scalar(x_36, sizeof(void*)*4, x_93);
lean::cnstr_set(x_1, 3, x_36);
lean::cnstr_set(x_1, 2, x_91);
lean::cnstr_set(x_1, 1, x_90);
lean::cnstr_set(x_1, 0, x_37);
lean::cnstr_set_scalar(x_1, sizeof(void*)*4, x_85);
return x_1;
}
else
{
obj* x_94; obj* x_95; obj* x_96; obj* x_97; uint8 x_98; obj* x_99; 
x_94 = lean::cnstr_get(x_37, 0);
x_95 = lean::cnstr_get(x_37, 1);
x_96 = lean::cnstr_get(x_37, 2);
x_97 = lean::cnstr_get(x_37, 3);
lean::inc(x_97);
lean::inc(x_96);
lean::inc(x_95);
lean::inc(x_94);
lean::dec(x_37);
x_98 = 1;
x_99 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_99, 0, x_28);
lean::cnstr_set(x_99, 1, x_29);
lean::cnstr_set(x_99, 2, x_30);
lean::cnstr_set(x_99, 3, x_94);
lean::cnstr_set_scalar(x_99, sizeof(void*)*4, x_98);
lean::cnstr_set(x_36, 0, x_97);
lean::cnstr_set_scalar(x_36, sizeof(void*)*4, x_98);
lean::cnstr_set(x_1, 3, x_36);
lean::cnstr_set(x_1, 2, x_96);
lean::cnstr_set(x_1, 1, x_95);
lean::cnstr_set(x_1, 0, x_99);
lean::cnstr_set_scalar(x_1, sizeof(void*)*4, x_85);
return x_1;
}
}
else
{
obj* x_100; obj* x_101; obj* x_102; obj* x_103; obj* x_104; obj* x_105; obj* x_106; obj* x_107; uint8 x_108; obj* x_109; obj* x_110; 
x_100 = lean::cnstr_get(x_36, 1);
x_101 = lean::cnstr_get(x_36, 2);
x_102 = lean::cnstr_get(x_36, 3);
lean::inc(x_102);
lean::inc(x_101);
lean::inc(x_100);
lean::dec(x_36);
x_103 = lean::cnstr_get(x_37, 0);
lean::inc(x_103);
x_104 = lean::cnstr_get(x_37, 1);
lean::inc(x_104);
x_105 = lean::cnstr_get(x_37, 2);
lean::inc(x_105);
x_106 = lean::cnstr_get(x_37, 3);
lean::inc(x_106);
if (lean::is_exclusive(x_37)) {
 lean::cnstr_release(x_37, 0);
 lean::cnstr_release(x_37, 1);
 lean::cnstr_release(x_37, 2);
 lean::cnstr_release(x_37, 3);
 x_107 = x_37;
} else {
 lean::dec_ref(x_37);
 x_107 = lean::box(0);
}
x_108 = 1;
if (lean::is_scalar(x_107)) {
 x_109 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_109 = x_107;
}
lean::cnstr_set(x_109, 0, x_28);
lean::cnstr_set(x_109, 1, x_29);
lean::cnstr_set(x_109, 2, x_30);
lean::cnstr_set(x_109, 3, x_103);
lean::cnstr_set_scalar(x_109, sizeof(void*)*4, x_108);
x_110 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_110, 0, x_106);
lean::cnstr_set(x_110, 1, x_100);
lean::cnstr_set(x_110, 2, x_101);
lean::cnstr_set(x_110, 3, x_102);
lean::cnstr_set_scalar(x_110, sizeof(void*)*4, x_108);
lean::cnstr_set(x_1, 3, x_110);
lean::cnstr_set(x_1, 2, x_105);
lean::cnstr_set(x_1, 1, x_104);
lean::cnstr_set(x_1, 0, x_109);
lean::cnstr_set_scalar(x_1, sizeof(void*)*4, x_85);
return x_1;
}
}
else
{
obj* x_111; 
x_111 = lean::cnstr_get(x_36, 3);
lean::inc(x_111);
if (lean::obj_tag(x_111) == 0)
{
uint8 x_112; 
x_112 = !lean::is_exclusive(x_36);
if (x_112 == 0)
{
obj* x_113; obj* x_114; uint8 x_115; 
x_113 = lean::cnstr_get(x_36, 3);
lean::dec(x_113);
x_114 = lean::cnstr_get(x_36, 0);
lean::dec(x_114);
x_115 = 0;
lean::cnstr_set_scalar(x_36, sizeof(void*)*4, x_115);
lean::cnstr_set(x_1, 3, x_36);
lean::cnstr_set_scalar(x_1, sizeof(void*)*4, x_85);
return x_1;
}
else
{
obj* x_116; obj* x_117; uint8 x_118; obj* x_119; 
x_116 = lean::cnstr_get(x_36, 1);
x_117 = lean::cnstr_get(x_36, 2);
lean::inc(x_117);
lean::inc(x_116);
lean::dec(x_36);
x_118 = 0;
x_119 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_119, 0, x_37);
lean::cnstr_set(x_119, 1, x_116);
lean::cnstr_set(x_119, 2, x_117);
lean::cnstr_set(x_119, 3, x_111);
lean::cnstr_set_scalar(x_119, sizeof(void*)*4, x_118);
lean::cnstr_set(x_1, 3, x_119);
lean::cnstr_set_scalar(x_1, sizeof(void*)*4, x_85);
return x_1;
}
}
else
{
uint8 x_120; 
x_120 = lean::cnstr_get_scalar<uint8>(x_111, sizeof(void*)*4);
if (x_120 == 0)
{
uint8 x_121; 
lean::free_heap_obj(x_1);
x_121 = !lean::is_exclusive(x_36);
if (x_121 == 0)
{
obj* x_122; obj* x_123; uint8 x_124; 
x_122 = lean::cnstr_get(x_36, 3);
lean::dec(x_122);
x_123 = lean::cnstr_get(x_36, 0);
lean::dec(x_123);
x_124 = !lean::is_exclusive(x_111);
if (x_124 == 0)
{
obj* x_125; obj* x_126; obj* x_127; obj* x_128; uint8 x_129; 
x_125 = lean::cnstr_get(x_111, 0);
x_126 = lean::cnstr_get(x_111, 1);
x_127 = lean::cnstr_get(x_111, 2);
x_128 = lean::cnstr_get(x_111, 3);
lean::inc(x_37);
lean::cnstr_set(x_111, 3, x_37);
lean::cnstr_set(x_111, 2, x_30);
lean::cnstr_set(x_111, 1, x_29);
lean::cnstr_set(x_111, 0, x_28);
x_129 = !lean::is_exclusive(x_37);
if (x_129 == 0)
{
obj* x_130; obj* x_131; obj* x_132; obj* x_133; 
x_130 = lean::cnstr_get(x_37, 3);
lean::dec(x_130);
x_131 = lean::cnstr_get(x_37, 2);
lean::dec(x_131);
x_132 = lean::cnstr_get(x_37, 1);
lean::dec(x_132);
x_133 = lean::cnstr_get(x_37, 0);
lean::dec(x_133);
lean::cnstr_set_scalar(x_111, sizeof(void*)*4, x_85);
lean::cnstr_set(x_37, 3, x_128);
lean::cnstr_set(x_37, 2, x_127);
lean::cnstr_set(x_37, 1, x_126);
lean::cnstr_set(x_37, 0, x_125);
lean::cnstr_set(x_36, 3, x_37);
lean::cnstr_set(x_36, 0, x_111);
lean::cnstr_set_scalar(x_36, sizeof(void*)*4, x_120);
return x_36;
}
else
{
obj* x_134; 
lean::dec(x_37);
lean::cnstr_set_scalar(x_111, sizeof(void*)*4, x_85);
x_134 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_134, 0, x_125);
lean::cnstr_set(x_134, 1, x_126);
lean::cnstr_set(x_134, 2, x_127);
lean::cnstr_set(x_134, 3, x_128);
lean::cnstr_set_scalar(x_134, sizeof(void*)*4, x_85);
lean::cnstr_set(x_36, 3, x_134);
lean::cnstr_set(x_36, 0, x_111);
lean::cnstr_set_scalar(x_36, sizeof(void*)*4, x_120);
return x_36;
}
}
else
{
obj* x_135; obj* x_136; obj* x_137; obj* x_138; obj* x_139; obj* x_140; obj* x_141; 
x_135 = lean::cnstr_get(x_111, 0);
x_136 = lean::cnstr_get(x_111, 1);
x_137 = lean::cnstr_get(x_111, 2);
x_138 = lean::cnstr_get(x_111, 3);
lean::inc(x_138);
lean::inc(x_137);
lean::inc(x_136);
lean::inc(x_135);
lean::dec(x_111);
lean::inc(x_37);
x_139 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_139, 0, x_28);
lean::cnstr_set(x_139, 1, x_29);
lean::cnstr_set(x_139, 2, x_30);
lean::cnstr_set(x_139, 3, x_37);
if (lean::is_exclusive(x_37)) {
 lean::cnstr_release(x_37, 0);
 lean::cnstr_release(x_37, 1);
 lean::cnstr_release(x_37, 2);
 lean::cnstr_release(x_37, 3);
 x_140 = x_37;
} else {
 lean::dec_ref(x_37);
 x_140 = lean::box(0);
}
lean::cnstr_set_scalar(x_139, sizeof(void*)*4, x_85);
if (lean::is_scalar(x_140)) {
 x_141 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_141 = x_140;
}
lean::cnstr_set(x_141, 0, x_135);
lean::cnstr_set(x_141, 1, x_136);
lean::cnstr_set(x_141, 2, x_137);
lean::cnstr_set(x_141, 3, x_138);
lean::cnstr_set_scalar(x_141, sizeof(void*)*4, x_85);
lean::cnstr_set(x_36, 3, x_141);
lean::cnstr_set(x_36, 0, x_139);
lean::cnstr_set_scalar(x_36, sizeof(void*)*4, x_120);
return x_36;
}
}
else
{
obj* x_142; obj* x_143; obj* x_144; obj* x_145; obj* x_146; obj* x_147; obj* x_148; obj* x_149; obj* x_150; obj* x_151; obj* x_152; 
x_142 = lean::cnstr_get(x_36, 1);
x_143 = lean::cnstr_get(x_36, 2);
lean::inc(x_143);
lean::inc(x_142);
lean::dec(x_36);
x_144 = lean::cnstr_get(x_111, 0);
lean::inc(x_144);
x_145 = lean::cnstr_get(x_111, 1);
lean::inc(x_145);
x_146 = lean::cnstr_get(x_111, 2);
lean::inc(x_146);
x_147 = lean::cnstr_get(x_111, 3);
lean::inc(x_147);
if (lean::is_exclusive(x_111)) {
 lean::cnstr_release(x_111, 0);
 lean::cnstr_release(x_111, 1);
 lean::cnstr_release(x_111, 2);
 lean::cnstr_release(x_111, 3);
 x_148 = x_111;
} else {
 lean::dec_ref(x_111);
 x_148 = lean::box(0);
}
lean::inc(x_37);
if (lean::is_scalar(x_148)) {
 x_149 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_149 = x_148;
}
lean::cnstr_set(x_149, 0, x_28);
lean::cnstr_set(x_149, 1, x_29);
lean::cnstr_set(x_149, 2, x_30);
lean::cnstr_set(x_149, 3, x_37);
if (lean::is_exclusive(x_37)) {
 lean::cnstr_release(x_37, 0);
 lean::cnstr_release(x_37, 1);
 lean::cnstr_release(x_37, 2);
 lean::cnstr_release(x_37, 3);
 x_150 = x_37;
} else {
 lean::dec_ref(x_37);
 x_150 = lean::box(0);
}
lean::cnstr_set_scalar(x_149, sizeof(void*)*4, x_85);
if (lean::is_scalar(x_150)) {
 x_151 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_151 = x_150;
}
lean::cnstr_set(x_151, 0, x_144);
lean::cnstr_set(x_151, 1, x_145);
lean::cnstr_set(x_151, 2, x_146);
lean::cnstr_set(x_151, 3, x_147);
lean::cnstr_set_scalar(x_151, sizeof(void*)*4, x_85);
x_152 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_152, 0, x_149);
lean::cnstr_set(x_152, 1, x_142);
lean::cnstr_set(x_152, 2, x_143);
lean::cnstr_set(x_152, 3, x_151);
lean::cnstr_set_scalar(x_152, sizeof(void*)*4, x_120);
return x_152;
}
}
else
{
uint8 x_153; 
x_153 = !lean::is_exclusive(x_36);
if (x_153 == 0)
{
obj* x_154; obj* x_155; uint8 x_156; 
x_154 = lean::cnstr_get(x_36, 3);
lean::dec(x_154);
x_155 = lean::cnstr_get(x_36, 0);
lean::dec(x_155);
x_156 = !lean::is_exclusive(x_37);
if (x_156 == 0)
{
uint8 x_157; 
lean::cnstr_set_scalar(x_37, sizeof(void*)*4, x_120);
x_157 = 0;
lean::cnstr_set_scalar(x_36, sizeof(void*)*4, x_157);
lean::cnstr_set(x_1, 3, x_36);
lean::cnstr_set_scalar(x_1, sizeof(void*)*4, x_120);
return x_1;
}
else
{
obj* x_158; obj* x_159; obj* x_160; obj* x_161; obj* x_162; uint8 x_163; 
x_158 = lean::cnstr_get(x_37, 0);
x_159 = lean::cnstr_get(x_37, 1);
x_160 = lean::cnstr_get(x_37, 2);
x_161 = lean::cnstr_get(x_37, 3);
lean::inc(x_161);
lean::inc(x_160);
lean::inc(x_159);
lean::inc(x_158);
lean::dec(x_37);
x_162 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_162, 0, x_158);
lean::cnstr_set(x_162, 1, x_159);
lean::cnstr_set(x_162, 2, x_160);
lean::cnstr_set(x_162, 3, x_161);
lean::cnstr_set_scalar(x_162, sizeof(void*)*4, x_120);
x_163 = 0;
lean::cnstr_set(x_36, 0, x_162);
lean::cnstr_set_scalar(x_36, sizeof(void*)*4, x_163);
lean::cnstr_set(x_1, 3, x_36);
lean::cnstr_set_scalar(x_1, sizeof(void*)*4, x_120);
return x_1;
}
}
else
{
obj* x_164; obj* x_165; obj* x_166; obj* x_167; obj* x_168; obj* x_169; obj* x_170; obj* x_171; uint8 x_172; obj* x_173; 
x_164 = lean::cnstr_get(x_36, 1);
x_165 = lean::cnstr_get(x_36, 2);
lean::inc(x_165);
lean::inc(x_164);
lean::dec(x_36);
x_166 = lean::cnstr_get(x_37, 0);
lean::inc(x_166);
x_167 = lean::cnstr_get(x_37, 1);
lean::inc(x_167);
x_168 = lean::cnstr_get(x_37, 2);
lean::inc(x_168);
x_169 = lean::cnstr_get(x_37, 3);
lean::inc(x_169);
if (lean::is_exclusive(x_37)) {
 lean::cnstr_release(x_37, 0);
 lean::cnstr_release(x_37, 1);
 lean::cnstr_release(x_37, 2);
 lean::cnstr_release(x_37, 3);
 x_170 = x_37;
} else {
 lean::dec_ref(x_37);
 x_170 = lean::box(0);
}
if (lean::is_scalar(x_170)) {
 x_171 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_171 = x_170;
}
lean::cnstr_set(x_171, 0, x_166);
lean::cnstr_set(x_171, 1, x_167);
lean::cnstr_set(x_171, 2, x_168);
lean::cnstr_set(x_171, 3, x_169);
lean::cnstr_set_scalar(x_171, sizeof(void*)*4, x_120);
x_172 = 0;
x_173 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_173, 0, x_171);
lean::cnstr_set(x_173, 1, x_164);
lean::cnstr_set(x_173, 2, x_165);
lean::cnstr_set(x_173, 3, x_111);
lean::cnstr_set_scalar(x_173, sizeof(void*)*4, x_172);
lean::cnstr_set(x_1, 3, x_173);
lean::cnstr_set_scalar(x_1, sizeof(void*)*4, x_120);
return x_1;
}
}
}
}
}
}
}
}
}
else
{
uint8 x_174; 
x_174 = l_RBNode_isRed___main___rarg(x_28);
if (x_174 == 0)
{
obj* x_175; 
x_175 = l_RBNode_ins___main___at___private_init_lean_compiler_ir_rc_1__updateRefUsingCtorInfo___spec__2(x_28, x_2, x_3);
lean::cnstr_set(x_1, 0, x_175);
return x_1;
}
else
{
obj* x_176; 
x_176 = l_RBNode_ins___main___at___private_init_lean_compiler_ir_rc_1__updateRefUsingCtorInfo___spec__2(x_28, x_2, x_3);
if (lean::obj_tag(x_176) == 0)
{
lean::free_heap_obj(x_1);
lean::dec(x_31);
lean::dec(x_30);
lean::dec(x_29);
return x_176;
}
else
{
obj* x_177; 
x_177 = lean::cnstr_get(x_176, 0);
lean::inc(x_177);
if (lean::obj_tag(x_177) == 0)
{
obj* x_178; 
x_178 = lean::cnstr_get(x_176, 3);
lean::inc(x_178);
if (lean::obj_tag(x_178) == 0)
{
uint8 x_179; 
x_179 = !lean::is_exclusive(x_176);
if (x_179 == 0)
{
obj* x_180; obj* x_181; uint8 x_182; uint8 x_183; 
x_180 = lean::cnstr_get(x_176, 3);
lean::dec(x_180);
x_181 = lean::cnstr_get(x_176, 0);
lean::dec(x_181);
x_182 = 0;
lean::cnstr_set(x_176, 0, x_178);
lean::cnstr_set_scalar(x_176, sizeof(void*)*4, x_182);
x_183 = 1;
lean::cnstr_set(x_1, 0, x_176);
lean::cnstr_set_scalar(x_1, sizeof(void*)*4, x_183);
return x_1;
}
else
{
obj* x_184; obj* x_185; uint8 x_186; obj* x_187; uint8 x_188; 
x_184 = lean::cnstr_get(x_176, 1);
x_185 = lean::cnstr_get(x_176, 2);
lean::inc(x_185);
lean::inc(x_184);
lean::dec(x_176);
x_186 = 0;
x_187 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_187, 0, x_178);
lean::cnstr_set(x_187, 1, x_184);
lean::cnstr_set(x_187, 2, x_185);
lean::cnstr_set(x_187, 3, x_178);
lean::cnstr_set_scalar(x_187, sizeof(void*)*4, x_186);
x_188 = 1;
lean::cnstr_set(x_1, 0, x_187);
lean::cnstr_set_scalar(x_1, sizeof(void*)*4, x_188);
return x_1;
}
}
else
{
uint8 x_189; 
x_189 = lean::cnstr_get_scalar<uint8>(x_178, sizeof(void*)*4);
if (x_189 == 0)
{
uint8 x_190; 
x_190 = !lean::is_exclusive(x_176);
if (x_190 == 0)
{
obj* x_191; obj* x_192; obj* x_193; obj* x_194; uint8 x_195; 
x_191 = lean::cnstr_get(x_176, 1);
x_192 = lean::cnstr_get(x_176, 2);
x_193 = lean::cnstr_get(x_176, 3);
lean::dec(x_193);
x_194 = lean::cnstr_get(x_176, 0);
lean::dec(x_194);
x_195 = !lean::is_exclusive(x_178);
if (x_195 == 0)
{
obj* x_196; obj* x_197; obj* x_198; obj* x_199; uint8 x_200; 
x_196 = lean::cnstr_get(x_178, 0);
x_197 = lean::cnstr_get(x_178, 1);
x_198 = lean::cnstr_get(x_178, 2);
x_199 = lean::cnstr_get(x_178, 3);
x_200 = 1;
lean::cnstr_set(x_178, 3, x_196);
lean::cnstr_set(x_178, 2, x_192);
lean::cnstr_set(x_178, 1, x_191);
lean::cnstr_set(x_178, 0, x_177);
lean::cnstr_set_scalar(x_178, sizeof(void*)*4, x_200);
lean::cnstr_set(x_176, 3, x_31);
lean::cnstr_set(x_176, 2, x_30);
lean::cnstr_set(x_176, 1, x_29);
lean::cnstr_set(x_176, 0, x_199);
lean::cnstr_set_scalar(x_176, sizeof(void*)*4, x_200);
lean::cnstr_set(x_1, 3, x_176);
lean::cnstr_set(x_1, 2, x_198);
lean::cnstr_set(x_1, 1, x_197);
lean::cnstr_set(x_1, 0, x_178);
lean::cnstr_set_scalar(x_1, sizeof(void*)*4, x_189);
return x_1;
}
else
{
obj* x_201; obj* x_202; obj* x_203; obj* x_204; uint8 x_205; obj* x_206; 
x_201 = lean::cnstr_get(x_178, 0);
x_202 = lean::cnstr_get(x_178, 1);
x_203 = lean::cnstr_get(x_178, 2);
x_204 = lean::cnstr_get(x_178, 3);
lean::inc(x_204);
lean::inc(x_203);
lean::inc(x_202);
lean::inc(x_201);
lean::dec(x_178);
x_205 = 1;
x_206 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_206, 0, x_177);
lean::cnstr_set(x_206, 1, x_191);
lean::cnstr_set(x_206, 2, x_192);
lean::cnstr_set(x_206, 3, x_201);
lean::cnstr_set_scalar(x_206, sizeof(void*)*4, x_205);
lean::cnstr_set(x_176, 3, x_31);
lean::cnstr_set(x_176, 2, x_30);
lean::cnstr_set(x_176, 1, x_29);
lean::cnstr_set(x_176, 0, x_204);
lean::cnstr_set_scalar(x_176, sizeof(void*)*4, x_205);
lean::cnstr_set(x_1, 3, x_176);
lean::cnstr_set(x_1, 2, x_203);
lean::cnstr_set(x_1, 1, x_202);
lean::cnstr_set(x_1, 0, x_206);
lean::cnstr_set_scalar(x_1, sizeof(void*)*4, x_189);
return x_1;
}
}
else
{
obj* x_207; obj* x_208; obj* x_209; obj* x_210; obj* x_211; obj* x_212; obj* x_213; uint8 x_214; obj* x_215; obj* x_216; 
x_207 = lean::cnstr_get(x_176, 1);
x_208 = lean::cnstr_get(x_176, 2);
lean::inc(x_208);
lean::inc(x_207);
lean::dec(x_176);
x_209 = lean::cnstr_get(x_178, 0);
lean::inc(x_209);
x_210 = lean::cnstr_get(x_178, 1);
lean::inc(x_210);
x_211 = lean::cnstr_get(x_178, 2);
lean::inc(x_211);
x_212 = lean::cnstr_get(x_178, 3);
lean::inc(x_212);
if (lean::is_exclusive(x_178)) {
 lean::cnstr_release(x_178, 0);
 lean::cnstr_release(x_178, 1);
 lean::cnstr_release(x_178, 2);
 lean::cnstr_release(x_178, 3);
 x_213 = x_178;
} else {
 lean::dec_ref(x_178);
 x_213 = lean::box(0);
}
x_214 = 1;
if (lean::is_scalar(x_213)) {
 x_215 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_215 = x_213;
}
lean::cnstr_set(x_215, 0, x_177);
lean::cnstr_set(x_215, 1, x_207);
lean::cnstr_set(x_215, 2, x_208);
lean::cnstr_set(x_215, 3, x_209);
lean::cnstr_set_scalar(x_215, sizeof(void*)*4, x_214);
x_216 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_216, 0, x_212);
lean::cnstr_set(x_216, 1, x_29);
lean::cnstr_set(x_216, 2, x_30);
lean::cnstr_set(x_216, 3, x_31);
lean::cnstr_set_scalar(x_216, sizeof(void*)*4, x_214);
lean::cnstr_set(x_1, 3, x_216);
lean::cnstr_set(x_1, 2, x_211);
lean::cnstr_set(x_1, 1, x_210);
lean::cnstr_set(x_1, 0, x_215);
lean::cnstr_set_scalar(x_1, sizeof(void*)*4, x_189);
return x_1;
}
}
else
{
uint8 x_217; 
x_217 = !lean::is_exclusive(x_176);
if (x_217 == 0)
{
obj* x_218; obj* x_219; uint8 x_220; 
x_218 = lean::cnstr_get(x_176, 3);
lean::dec(x_218);
x_219 = lean::cnstr_get(x_176, 0);
lean::dec(x_219);
x_220 = 0;
lean::cnstr_set_scalar(x_176, sizeof(void*)*4, x_220);
lean::cnstr_set(x_1, 0, x_176);
lean::cnstr_set_scalar(x_1, sizeof(void*)*4, x_189);
return x_1;
}
else
{
obj* x_221; obj* x_222; uint8 x_223; obj* x_224; 
x_221 = lean::cnstr_get(x_176, 1);
x_222 = lean::cnstr_get(x_176, 2);
lean::inc(x_222);
lean::inc(x_221);
lean::dec(x_176);
x_223 = 0;
x_224 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_224, 0, x_177);
lean::cnstr_set(x_224, 1, x_221);
lean::cnstr_set(x_224, 2, x_222);
lean::cnstr_set(x_224, 3, x_178);
lean::cnstr_set_scalar(x_224, sizeof(void*)*4, x_223);
lean::cnstr_set(x_1, 0, x_224);
lean::cnstr_set_scalar(x_1, sizeof(void*)*4, x_189);
return x_1;
}
}
}
}
else
{
uint8 x_225; 
x_225 = lean::cnstr_get_scalar<uint8>(x_177, sizeof(void*)*4);
if (x_225 == 0)
{
uint8 x_226; 
x_226 = !lean::is_exclusive(x_176);
if (x_226 == 0)
{
obj* x_227; obj* x_228; obj* x_229; obj* x_230; uint8 x_231; 
x_227 = lean::cnstr_get(x_176, 1);
x_228 = lean::cnstr_get(x_176, 2);
x_229 = lean::cnstr_get(x_176, 3);
x_230 = lean::cnstr_get(x_176, 0);
lean::dec(x_230);
x_231 = !lean::is_exclusive(x_177);
if (x_231 == 0)
{
uint8 x_232; 
x_232 = 1;
lean::cnstr_set_scalar(x_177, sizeof(void*)*4, x_232);
lean::cnstr_set(x_176, 3, x_31);
lean::cnstr_set(x_176, 2, x_30);
lean::cnstr_set(x_176, 1, x_29);
lean::cnstr_set(x_176, 0, x_229);
lean::cnstr_set_scalar(x_176, sizeof(void*)*4, x_232);
lean::cnstr_set(x_1, 3, x_176);
lean::cnstr_set(x_1, 2, x_228);
lean::cnstr_set(x_1, 1, x_227);
lean::cnstr_set(x_1, 0, x_177);
lean::cnstr_set_scalar(x_1, sizeof(void*)*4, x_225);
return x_1;
}
else
{
obj* x_233; obj* x_234; obj* x_235; obj* x_236; uint8 x_237; obj* x_238; 
x_233 = lean::cnstr_get(x_177, 0);
x_234 = lean::cnstr_get(x_177, 1);
x_235 = lean::cnstr_get(x_177, 2);
x_236 = lean::cnstr_get(x_177, 3);
lean::inc(x_236);
lean::inc(x_235);
lean::inc(x_234);
lean::inc(x_233);
lean::dec(x_177);
x_237 = 1;
x_238 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_238, 0, x_233);
lean::cnstr_set(x_238, 1, x_234);
lean::cnstr_set(x_238, 2, x_235);
lean::cnstr_set(x_238, 3, x_236);
lean::cnstr_set_scalar(x_238, sizeof(void*)*4, x_237);
lean::cnstr_set(x_176, 3, x_31);
lean::cnstr_set(x_176, 2, x_30);
lean::cnstr_set(x_176, 1, x_29);
lean::cnstr_set(x_176, 0, x_229);
lean::cnstr_set_scalar(x_176, sizeof(void*)*4, x_237);
lean::cnstr_set(x_1, 3, x_176);
lean::cnstr_set(x_1, 2, x_228);
lean::cnstr_set(x_1, 1, x_227);
lean::cnstr_set(x_1, 0, x_238);
lean::cnstr_set_scalar(x_1, sizeof(void*)*4, x_225);
return x_1;
}
}
else
{
obj* x_239; obj* x_240; obj* x_241; obj* x_242; obj* x_243; obj* x_244; obj* x_245; obj* x_246; uint8 x_247; obj* x_248; obj* x_249; 
x_239 = lean::cnstr_get(x_176, 1);
x_240 = lean::cnstr_get(x_176, 2);
x_241 = lean::cnstr_get(x_176, 3);
lean::inc(x_241);
lean::inc(x_240);
lean::inc(x_239);
lean::dec(x_176);
x_242 = lean::cnstr_get(x_177, 0);
lean::inc(x_242);
x_243 = lean::cnstr_get(x_177, 1);
lean::inc(x_243);
x_244 = lean::cnstr_get(x_177, 2);
lean::inc(x_244);
x_245 = lean::cnstr_get(x_177, 3);
lean::inc(x_245);
if (lean::is_exclusive(x_177)) {
 lean::cnstr_release(x_177, 0);
 lean::cnstr_release(x_177, 1);
 lean::cnstr_release(x_177, 2);
 lean::cnstr_release(x_177, 3);
 x_246 = x_177;
} else {
 lean::dec_ref(x_177);
 x_246 = lean::box(0);
}
x_247 = 1;
if (lean::is_scalar(x_246)) {
 x_248 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_248 = x_246;
}
lean::cnstr_set(x_248, 0, x_242);
lean::cnstr_set(x_248, 1, x_243);
lean::cnstr_set(x_248, 2, x_244);
lean::cnstr_set(x_248, 3, x_245);
lean::cnstr_set_scalar(x_248, sizeof(void*)*4, x_247);
x_249 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_249, 0, x_241);
lean::cnstr_set(x_249, 1, x_29);
lean::cnstr_set(x_249, 2, x_30);
lean::cnstr_set(x_249, 3, x_31);
lean::cnstr_set_scalar(x_249, sizeof(void*)*4, x_247);
lean::cnstr_set(x_1, 3, x_249);
lean::cnstr_set(x_1, 2, x_240);
lean::cnstr_set(x_1, 1, x_239);
lean::cnstr_set(x_1, 0, x_248);
lean::cnstr_set_scalar(x_1, sizeof(void*)*4, x_225);
return x_1;
}
}
else
{
obj* x_250; 
x_250 = lean::cnstr_get(x_176, 3);
lean::inc(x_250);
if (lean::obj_tag(x_250) == 0)
{
uint8 x_251; 
x_251 = !lean::is_exclusive(x_176);
if (x_251 == 0)
{
obj* x_252; obj* x_253; uint8 x_254; 
x_252 = lean::cnstr_get(x_176, 3);
lean::dec(x_252);
x_253 = lean::cnstr_get(x_176, 0);
lean::dec(x_253);
x_254 = 0;
lean::cnstr_set_scalar(x_176, sizeof(void*)*4, x_254);
lean::cnstr_set(x_1, 0, x_176);
lean::cnstr_set_scalar(x_1, sizeof(void*)*4, x_225);
return x_1;
}
else
{
obj* x_255; obj* x_256; uint8 x_257; obj* x_258; 
x_255 = lean::cnstr_get(x_176, 1);
x_256 = lean::cnstr_get(x_176, 2);
lean::inc(x_256);
lean::inc(x_255);
lean::dec(x_176);
x_257 = 0;
x_258 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_258, 0, x_177);
lean::cnstr_set(x_258, 1, x_255);
lean::cnstr_set(x_258, 2, x_256);
lean::cnstr_set(x_258, 3, x_250);
lean::cnstr_set_scalar(x_258, sizeof(void*)*4, x_257);
lean::cnstr_set(x_1, 0, x_258);
lean::cnstr_set_scalar(x_1, sizeof(void*)*4, x_225);
return x_1;
}
}
else
{
uint8 x_259; 
x_259 = lean::cnstr_get_scalar<uint8>(x_250, sizeof(void*)*4);
if (x_259 == 0)
{
uint8 x_260; 
lean::free_heap_obj(x_1);
x_260 = !lean::is_exclusive(x_176);
if (x_260 == 0)
{
obj* x_261; obj* x_262; obj* x_263; obj* x_264; uint8 x_265; 
x_261 = lean::cnstr_get(x_176, 1);
x_262 = lean::cnstr_get(x_176, 2);
x_263 = lean::cnstr_get(x_176, 3);
lean::dec(x_263);
x_264 = lean::cnstr_get(x_176, 0);
lean::dec(x_264);
x_265 = !lean::is_exclusive(x_250);
if (x_265 == 0)
{
obj* x_266; obj* x_267; obj* x_268; obj* x_269; uint8 x_270; 
x_266 = lean::cnstr_get(x_250, 0);
x_267 = lean::cnstr_get(x_250, 1);
x_268 = lean::cnstr_get(x_250, 2);
x_269 = lean::cnstr_get(x_250, 3);
lean::inc(x_177);
lean::cnstr_set(x_250, 3, x_266);
lean::cnstr_set(x_250, 2, x_262);
lean::cnstr_set(x_250, 1, x_261);
lean::cnstr_set(x_250, 0, x_177);
x_270 = !lean::is_exclusive(x_177);
if (x_270 == 0)
{
obj* x_271; obj* x_272; obj* x_273; obj* x_274; 
x_271 = lean::cnstr_get(x_177, 3);
lean::dec(x_271);
x_272 = lean::cnstr_get(x_177, 2);
lean::dec(x_272);
x_273 = lean::cnstr_get(x_177, 1);
lean::dec(x_273);
x_274 = lean::cnstr_get(x_177, 0);
lean::dec(x_274);
lean::cnstr_set_scalar(x_250, sizeof(void*)*4, x_225);
lean::cnstr_set(x_177, 3, x_31);
lean::cnstr_set(x_177, 2, x_30);
lean::cnstr_set(x_177, 1, x_29);
lean::cnstr_set(x_177, 0, x_269);
lean::cnstr_set(x_176, 3, x_177);
lean::cnstr_set(x_176, 2, x_268);
lean::cnstr_set(x_176, 1, x_267);
lean::cnstr_set(x_176, 0, x_250);
lean::cnstr_set_scalar(x_176, sizeof(void*)*4, x_259);
return x_176;
}
else
{
obj* x_275; 
lean::dec(x_177);
lean::cnstr_set_scalar(x_250, sizeof(void*)*4, x_225);
x_275 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_275, 0, x_269);
lean::cnstr_set(x_275, 1, x_29);
lean::cnstr_set(x_275, 2, x_30);
lean::cnstr_set(x_275, 3, x_31);
lean::cnstr_set_scalar(x_275, sizeof(void*)*4, x_225);
lean::cnstr_set(x_176, 3, x_275);
lean::cnstr_set(x_176, 2, x_268);
lean::cnstr_set(x_176, 1, x_267);
lean::cnstr_set(x_176, 0, x_250);
lean::cnstr_set_scalar(x_176, sizeof(void*)*4, x_259);
return x_176;
}
}
else
{
obj* x_276; obj* x_277; obj* x_278; obj* x_279; obj* x_280; obj* x_281; obj* x_282; 
x_276 = lean::cnstr_get(x_250, 0);
x_277 = lean::cnstr_get(x_250, 1);
x_278 = lean::cnstr_get(x_250, 2);
x_279 = lean::cnstr_get(x_250, 3);
lean::inc(x_279);
lean::inc(x_278);
lean::inc(x_277);
lean::inc(x_276);
lean::dec(x_250);
lean::inc(x_177);
x_280 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_280, 0, x_177);
lean::cnstr_set(x_280, 1, x_261);
lean::cnstr_set(x_280, 2, x_262);
lean::cnstr_set(x_280, 3, x_276);
if (lean::is_exclusive(x_177)) {
 lean::cnstr_release(x_177, 0);
 lean::cnstr_release(x_177, 1);
 lean::cnstr_release(x_177, 2);
 lean::cnstr_release(x_177, 3);
 x_281 = x_177;
} else {
 lean::dec_ref(x_177);
 x_281 = lean::box(0);
}
lean::cnstr_set_scalar(x_280, sizeof(void*)*4, x_225);
if (lean::is_scalar(x_281)) {
 x_282 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_282 = x_281;
}
lean::cnstr_set(x_282, 0, x_279);
lean::cnstr_set(x_282, 1, x_29);
lean::cnstr_set(x_282, 2, x_30);
lean::cnstr_set(x_282, 3, x_31);
lean::cnstr_set_scalar(x_282, sizeof(void*)*4, x_225);
lean::cnstr_set(x_176, 3, x_282);
lean::cnstr_set(x_176, 2, x_278);
lean::cnstr_set(x_176, 1, x_277);
lean::cnstr_set(x_176, 0, x_280);
lean::cnstr_set_scalar(x_176, sizeof(void*)*4, x_259);
return x_176;
}
}
else
{
obj* x_283; obj* x_284; obj* x_285; obj* x_286; obj* x_287; obj* x_288; obj* x_289; obj* x_290; obj* x_291; obj* x_292; obj* x_293; 
x_283 = lean::cnstr_get(x_176, 1);
x_284 = lean::cnstr_get(x_176, 2);
lean::inc(x_284);
lean::inc(x_283);
lean::dec(x_176);
x_285 = lean::cnstr_get(x_250, 0);
lean::inc(x_285);
x_286 = lean::cnstr_get(x_250, 1);
lean::inc(x_286);
x_287 = lean::cnstr_get(x_250, 2);
lean::inc(x_287);
x_288 = lean::cnstr_get(x_250, 3);
lean::inc(x_288);
if (lean::is_exclusive(x_250)) {
 lean::cnstr_release(x_250, 0);
 lean::cnstr_release(x_250, 1);
 lean::cnstr_release(x_250, 2);
 lean::cnstr_release(x_250, 3);
 x_289 = x_250;
} else {
 lean::dec_ref(x_250);
 x_289 = lean::box(0);
}
lean::inc(x_177);
if (lean::is_scalar(x_289)) {
 x_290 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_290 = x_289;
}
lean::cnstr_set(x_290, 0, x_177);
lean::cnstr_set(x_290, 1, x_283);
lean::cnstr_set(x_290, 2, x_284);
lean::cnstr_set(x_290, 3, x_285);
if (lean::is_exclusive(x_177)) {
 lean::cnstr_release(x_177, 0);
 lean::cnstr_release(x_177, 1);
 lean::cnstr_release(x_177, 2);
 lean::cnstr_release(x_177, 3);
 x_291 = x_177;
} else {
 lean::dec_ref(x_177);
 x_291 = lean::box(0);
}
lean::cnstr_set_scalar(x_290, sizeof(void*)*4, x_225);
if (lean::is_scalar(x_291)) {
 x_292 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_292 = x_291;
}
lean::cnstr_set(x_292, 0, x_288);
lean::cnstr_set(x_292, 1, x_29);
lean::cnstr_set(x_292, 2, x_30);
lean::cnstr_set(x_292, 3, x_31);
lean::cnstr_set_scalar(x_292, sizeof(void*)*4, x_225);
x_293 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_293, 0, x_290);
lean::cnstr_set(x_293, 1, x_286);
lean::cnstr_set(x_293, 2, x_287);
lean::cnstr_set(x_293, 3, x_292);
lean::cnstr_set_scalar(x_293, sizeof(void*)*4, x_259);
return x_293;
}
}
else
{
uint8 x_294; 
x_294 = !lean::is_exclusive(x_176);
if (x_294 == 0)
{
obj* x_295; obj* x_296; uint8 x_297; 
x_295 = lean::cnstr_get(x_176, 3);
lean::dec(x_295);
x_296 = lean::cnstr_get(x_176, 0);
lean::dec(x_296);
x_297 = !lean::is_exclusive(x_177);
if (x_297 == 0)
{
uint8 x_298; 
lean::cnstr_set_scalar(x_177, sizeof(void*)*4, x_259);
x_298 = 0;
lean::cnstr_set_scalar(x_176, sizeof(void*)*4, x_298);
lean::cnstr_set(x_1, 0, x_176);
lean::cnstr_set_scalar(x_1, sizeof(void*)*4, x_259);
return x_1;
}
else
{
obj* x_299; obj* x_300; obj* x_301; obj* x_302; obj* x_303; uint8 x_304; 
x_299 = lean::cnstr_get(x_177, 0);
x_300 = lean::cnstr_get(x_177, 1);
x_301 = lean::cnstr_get(x_177, 2);
x_302 = lean::cnstr_get(x_177, 3);
lean::inc(x_302);
lean::inc(x_301);
lean::inc(x_300);
lean::inc(x_299);
lean::dec(x_177);
x_303 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_303, 0, x_299);
lean::cnstr_set(x_303, 1, x_300);
lean::cnstr_set(x_303, 2, x_301);
lean::cnstr_set(x_303, 3, x_302);
lean::cnstr_set_scalar(x_303, sizeof(void*)*4, x_259);
x_304 = 0;
lean::cnstr_set(x_176, 0, x_303);
lean::cnstr_set_scalar(x_176, sizeof(void*)*4, x_304);
lean::cnstr_set(x_1, 0, x_176);
lean::cnstr_set_scalar(x_1, sizeof(void*)*4, x_259);
return x_1;
}
}
else
{
obj* x_305; obj* x_306; obj* x_307; obj* x_308; obj* x_309; obj* x_310; obj* x_311; obj* x_312; uint8 x_313; obj* x_314; 
x_305 = lean::cnstr_get(x_176, 1);
x_306 = lean::cnstr_get(x_176, 2);
lean::inc(x_306);
lean::inc(x_305);
lean::dec(x_176);
x_307 = lean::cnstr_get(x_177, 0);
lean::inc(x_307);
x_308 = lean::cnstr_get(x_177, 1);
lean::inc(x_308);
x_309 = lean::cnstr_get(x_177, 2);
lean::inc(x_309);
x_310 = lean::cnstr_get(x_177, 3);
lean::inc(x_310);
if (lean::is_exclusive(x_177)) {
 lean::cnstr_release(x_177, 0);
 lean::cnstr_release(x_177, 1);
 lean::cnstr_release(x_177, 2);
 lean::cnstr_release(x_177, 3);
 x_311 = x_177;
} else {
 lean::dec_ref(x_177);
 x_311 = lean::box(0);
}
if (lean::is_scalar(x_311)) {
 x_312 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_312 = x_311;
}
lean::cnstr_set(x_312, 0, x_307);
lean::cnstr_set(x_312, 1, x_308);
lean::cnstr_set(x_312, 2, x_309);
lean::cnstr_set(x_312, 3, x_310);
lean::cnstr_set_scalar(x_312, sizeof(void*)*4, x_259);
x_313 = 0;
x_314 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_314, 0, x_312);
lean::cnstr_set(x_314, 1, x_305);
lean::cnstr_set(x_314, 2, x_306);
lean::cnstr_set(x_314, 3, x_250);
lean::cnstr_set_scalar(x_314, sizeof(void*)*4, x_313);
lean::cnstr_set(x_1, 0, x_314);
lean::cnstr_set_scalar(x_1, sizeof(void*)*4, x_259);
return x_1;
}
}
}
}
}
}
}
}
}
else
{
obj* x_315; obj* x_316; obj* x_317; obj* x_318; uint8 x_319; 
x_315 = lean::cnstr_get(x_1, 0);
x_316 = lean::cnstr_get(x_1, 1);
x_317 = lean::cnstr_get(x_1, 2);
x_318 = lean::cnstr_get(x_1, 3);
lean::inc(x_318);
lean::inc(x_317);
lean::inc(x_316);
lean::inc(x_315);
lean::dec(x_1);
x_319 = lean::nat_dec_lt(x_2, x_316);
if (x_319 == 0)
{
uint8 x_320; 
x_320 = lean::nat_dec_lt(x_316, x_2);
if (x_320 == 0)
{
obj* x_321; 
lean::dec(x_317);
lean::dec(x_316);
x_321 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_321, 0, x_315);
lean::cnstr_set(x_321, 1, x_2);
lean::cnstr_set(x_321, 2, x_3);
lean::cnstr_set(x_321, 3, x_318);
lean::cnstr_set_scalar(x_321, sizeof(void*)*4, x_6);
return x_321;
}
else
{
uint8 x_322; 
x_322 = l_RBNode_isRed___main___rarg(x_318);
if (x_322 == 0)
{
obj* x_323; obj* x_324; 
x_323 = l_RBNode_ins___main___at___private_init_lean_compiler_ir_rc_1__updateRefUsingCtorInfo___spec__2(x_318, x_2, x_3);
x_324 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_324, 0, x_315);
lean::cnstr_set(x_324, 1, x_316);
lean::cnstr_set(x_324, 2, x_317);
lean::cnstr_set(x_324, 3, x_323);
lean::cnstr_set_scalar(x_324, sizeof(void*)*4, x_6);
return x_324;
}
else
{
obj* x_325; 
x_325 = l_RBNode_ins___main___at___private_init_lean_compiler_ir_rc_1__updateRefUsingCtorInfo___spec__2(x_318, x_2, x_3);
if (lean::obj_tag(x_325) == 0)
{
lean::dec(x_317);
lean::dec(x_316);
lean::dec(x_315);
return x_325;
}
else
{
obj* x_326; 
x_326 = lean::cnstr_get(x_325, 0);
lean::inc(x_326);
if (lean::obj_tag(x_326) == 0)
{
obj* x_327; 
x_327 = lean::cnstr_get(x_325, 3);
lean::inc(x_327);
if (lean::obj_tag(x_327) == 0)
{
obj* x_328; obj* x_329; obj* x_330; uint8 x_331; obj* x_332; uint8 x_333; obj* x_334; 
x_328 = lean::cnstr_get(x_325, 1);
lean::inc(x_328);
x_329 = lean::cnstr_get(x_325, 2);
lean::inc(x_329);
if (lean::is_exclusive(x_325)) {
 lean::cnstr_release(x_325, 0);
 lean::cnstr_release(x_325, 1);
 lean::cnstr_release(x_325, 2);
 lean::cnstr_release(x_325, 3);
 x_330 = x_325;
} else {
 lean::dec_ref(x_325);
 x_330 = lean::box(0);
}
x_331 = 0;
if (lean::is_scalar(x_330)) {
 x_332 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_332 = x_330;
}
lean::cnstr_set(x_332, 0, x_327);
lean::cnstr_set(x_332, 1, x_328);
lean::cnstr_set(x_332, 2, x_329);
lean::cnstr_set(x_332, 3, x_327);
lean::cnstr_set_scalar(x_332, sizeof(void*)*4, x_331);
x_333 = 1;
x_334 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_334, 0, x_315);
lean::cnstr_set(x_334, 1, x_316);
lean::cnstr_set(x_334, 2, x_317);
lean::cnstr_set(x_334, 3, x_332);
lean::cnstr_set_scalar(x_334, sizeof(void*)*4, x_333);
return x_334;
}
else
{
uint8 x_335; 
x_335 = lean::cnstr_get_scalar<uint8>(x_327, sizeof(void*)*4);
if (x_335 == 0)
{
obj* x_336; obj* x_337; obj* x_338; obj* x_339; obj* x_340; obj* x_341; obj* x_342; obj* x_343; uint8 x_344; obj* x_345; obj* x_346; obj* x_347; 
x_336 = lean::cnstr_get(x_325, 1);
lean::inc(x_336);
x_337 = lean::cnstr_get(x_325, 2);
lean::inc(x_337);
if (lean::is_exclusive(x_325)) {
 lean::cnstr_release(x_325, 0);
 lean::cnstr_release(x_325, 1);
 lean::cnstr_release(x_325, 2);
 lean::cnstr_release(x_325, 3);
 x_338 = x_325;
} else {
 lean::dec_ref(x_325);
 x_338 = lean::box(0);
}
x_339 = lean::cnstr_get(x_327, 0);
lean::inc(x_339);
x_340 = lean::cnstr_get(x_327, 1);
lean::inc(x_340);
x_341 = lean::cnstr_get(x_327, 2);
lean::inc(x_341);
x_342 = lean::cnstr_get(x_327, 3);
lean::inc(x_342);
if (lean::is_exclusive(x_327)) {
 lean::cnstr_release(x_327, 0);
 lean::cnstr_release(x_327, 1);
 lean::cnstr_release(x_327, 2);
 lean::cnstr_release(x_327, 3);
 x_343 = x_327;
} else {
 lean::dec_ref(x_327);
 x_343 = lean::box(0);
}
x_344 = 1;
if (lean::is_scalar(x_343)) {
 x_345 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_345 = x_343;
}
lean::cnstr_set(x_345, 0, x_315);
lean::cnstr_set(x_345, 1, x_316);
lean::cnstr_set(x_345, 2, x_317);
lean::cnstr_set(x_345, 3, x_326);
lean::cnstr_set_scalar(x_345, sizeof(void*)*4, x_344);
if (lean::is_scalar(x_338)) {
 x_346 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_346 = x_338;
}
lean::cnstr_set(x_346, 0, x_339);
lean::cnstr_set(x_346, 1, x_340);
lean::cnstr_set(x_346, 2, x_341);
lean::cnstr_set(x_346, 3, x_342);
lean::cnstr_set_scalar(x_346, sizeof(void*)*4, x_344);
x_347 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_347, 0, x_345);
lean::cnstr_set(x_347, 1, x_336);
lean::cnstr_set(x_347, 2, x_337);
lean::cnstr_set(x_347, 3, x_346);
lean::cnstr_set_scalar(x_347, sizeof(void*)*4, x_335);
return x_347;
}
else
{
obj* x_348; obj* x_349; obj* x_350; uint8 x_351; obj* x_352; obj* x_353; 
x_348 = lean::cnstr_get(x_325, 1);
lean::inc(x_348);
x_349 = lean::cnstr_get(x_325, 2);
lean::inc(x_349);
if (lean::is_exclusive(x_325)) {
 lean::cnstr_release(x_325, 0);
 lean::cnstr_release(x_325, 1);
 lean::cnstr_release(x_325, 2);
 lean::cnstr_release(x_325, 3);
 x_350 = x_325;
} else {
 lean::dec_ref(x_325);
 x_350 = lean::box(0);
}
x_351 = 0;
if (lean::is_scalar(x_350)) {
 x_352 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_352 = x_350;
}
lean::cnstr_set(x_352, 0, x_326);
lean::cnstr_set(x_352, 1, x_348);
lean::cnstr_set(x_352, 2, x_349);
lean::cnstr_set(x_352, 3, x_327);
lean::cnstr_set_scalar(x_352, sizeof(void*)*4, x_351);
x_353 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_353, 0, x_315);
lean::cnstr_set(x_353, 1, x_316);
lean::cnstr_set(x_353, 2, x_317);
lean::cnstr_set(x_353, 3, x_352);
lean::cnstr_set_scalar(x_353, sizeof(void*)*4, x_335);
return x_353;
}
}
}
else
{
uint8 x_354; 
x_354 = lean::cnstr_get_scalar<uint8>(x_326, sizeof(void*)*4);
if (x_354 == 0)
{
obj* x_355; obj* x_356; obj* x_357; obj* x_358; obj* x_359; obj* x_360; obj* x_361; obj* x_362; obj* x_363; uint8 x_364; obj* x_365; obj* x_366; obj* x_367; 
x_355 = lean::cnstr_get(x_325, 1);
lean::inc(x_355);
x_356 = lean::cnstr_get(x_325, 2);
lean::inc(x_356);
x_357 = lean::cnstr_get(x_325, 3);
lean::inc(x_357);
if (lean::is_exclusive(x_325)) {
 lean::cnstr_release(x_325, 0);
 lean::cnstr_release(x_325, 1);
 lean::cnstr_release(x_325, 2);
 lean::cnstr_release(x_325, 3);
 x_358 = x_325;
} else {
 lean::dec_ref(x_325);
 x_358 = lean::box(0);
}
x_359 = lean::cnstr_get(x_326, 0);
lean::inc(x_359);
x_360 = lean::cnstr_get(x_326, 1);
lean::inc(x_360);
x_361 = lean::cnstr_get(x_326, 2);
lean::inc(x_361);
x_362 = lean::cnstr_get(x_326, 3);
lean::inc(x_362);
if (lean::is_exclusive(x_326)) {
 lean::cnstr_release(x_326, 0);
 lean::cnstr_release(x_326, 1);
 lean::cnstr_release(x_326, 2);
 lean::cnstr_release(x_326, 3);
 x_363 = x_326;
} else {
 lean::dec_ref(x_326);
 x_363 = lean::box(0);
}
x_364 = 1;
if (lean::is_scalar(x_363)) {
 x_365 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_365 = x_363;
}
lean::cnstr_set(x_365, 0, x_315);
lean::cnstr_set(x_365, 1, x_316);
lean::cnstr_set(x_365, 2, x_317);
lean::cnstr_set(x_365, 3, x_359);
lean::cnstr_set_scalar(x_365, sizeof(void*)*4, x_364);
if (lean::is_scalar(x_358)) {
 x_366 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_366 = x_358;
}
lean::cnstr_set(x_366, 0, x_362);
lean::cnstr_set(x_366, 1, x_355);
lean::cnstr_set(x_366, 2, x_356);
lean::cnstr_set(x_366, 3, x_357);
lean::cnstr_set_scalar(x_366, sizeof(void*)*4, x_364);
x_367 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_367, 0, x_365);
lean::cnstr_set(x_367, 1, x_360);
lean::cnstr_set(x_367, 2, x_361);
lean::cnstr_set(x_367, 3, x_366);
lean::cnstr_set_scalar(x_367, sizeof(void*)*4, x_354);
return x_367;
}
else
{
obj* x_368; 
x_368 = lean::cnstr_get(x_325, 3);
lean::inc(x_368);
if (lean::obj_tag(x_368) == 0)
{
obj* x_369; obj* x_370; obj* x_371; uint8 x_372; obj* x_373; obj* x_374; 
x_369 = lean::cnstr_get(x_325, 1);
lean::inc(x_369);
x_370 = lean::cnstr_get(x_325, 2);
lean::inc(x_370);
if (lean::is_exclusive(x_325)) {
 lean::cnstr_release(x_325, 0);
 lean::cnstr_release(x_325, 1);
 lean::cnstr_release(x_325, 2);
 lean::cnstr_release(x_325, 3);
 x_371 = x_325;
} else {
 lean::dec_ref(x_325);
 x_371 = lean::box(0);
}
x_372 = 0;
if (lean::is_scalar(x_371)) {
 x_373 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_373 = x_371;
}
lean::cnstr_set(x_373, 0, x_326);
lean::cnstr_set(x_373, 1, x_369);
lean::cnstr_set(x_373, 2, x_370);
lean::cnstr_set(x_373, 3, x_368);
lean::cnstr_set_scalar(x_373, sizeof(void*)*4, x_372);
x_374 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_374, 0, x_315);
lean::cnstr_set(x_374, 1, x_316);
lean::cnstr_set(x_374, 2, x_317);
lean::cnstr_set(x_374, 3, x_373);
lean::cnstr_set_scalar(x_374, sizeof(void*)*4, x_354);
return x_374;
}
else
{
uint8 x_375; 
x_375 = lean::cnstr_get_scalar<uint8>(x_368, sizeof(void*)*4);
if (x_375 == 0)
{
obj* x_376; obj* x_377; obj* x_378; obj* x_379; obj* x_380; obj* x_381; obj* x_382; obj* x_383; obj* x_384; obj* x_385; obj* x_386; obj* x_387; 
x_376 = lean::cnstr_get(x_325, 1);
lean::inc(x_376);
x_377 = lean::cnstr_get(x_325, 2);
lean::inc(x_377);
if (lean::is_exclusive(x_325)) {
 lean::cnstr_release(x_325, 0);
 lean::cnstr_release(x_325, 1);
 lean::cnstr_release(x_325, 2);
 lean::cnstr_release(x_325, 3);
 x_378 = x_325;
} else {
 lean::dec_ref(x_325);
 x_378 = lean::box(0);
}
x_379 = lean::cnstr_get(x_368, 0);
lean::inc(x_379);
x_380 = lean::cnstr_get(x_368, 1);
lean::inc(x_380);
x_381 = lean::cnstr_get(x_368, 2);
lean::inc(x_381);
x_382 = lean::cnstr_get(x_368, 3);
lean::inc(x_382);
if (lean::is_exclusive(x_368)) {
 lean::cnstr_release(x_368, 0);
 lean::cnstr_release(x_368, 1);
 lean::cnstr_release(x_368, 2);
 lean::cnstr_release(x_368, 3);
 x_383 = x_368;
} else {
 lean::dec_ref(x_368);
 x_383 = lean::box(0);
}
lean::inc(x_326);
if (lean::is_scalar(x_383)) {
 x_384 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_384 = x_383;
}
lean::cnstr_set(x_384, 0, x_315);
lean::cnstr_set(x_384, 1, x_316);
lean::cnstr_set(x_384, 2, x_317);
lean::cnstr_set(x_384, 3, x_326);
if (lean::is_exclusive(x_326)) {
 lean::cnstr_release(x_326, 0);
 lean::cnstr_release(x_326, 1);
 lean::cnstr_release(x_326, 2);
 lean::cnstr_release(x_326, 3);
 x_385 = x_326;
} else {
 lean::dec_ref(x_326);
 x_385 = lean::box(0);
}
lean::cnstr_set_scalar(x_384, sizeof(void*)*4, x_354);
if (lean::is_scalar(x_385)) {
 x_386 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_386 = x_385;
}
lean::cnstr_set(x_386, 0, x_379);
lean::cnstr_set(x_386, 1, x_380);
lean::cnstr_set(x_386, 2, x_381);
lean::cnstr_set(x_386, 3, x_382);
lean::cnstr_set_scalar(x_386, sizeof(void*)*4, x_354);
if (lean::is_scalar(x_378)) {
 x_387 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_387 = x_378;
}
lean::cnstr_set(x_387, 0, x_384);
lean::cnstr_set(x_387, 1, x_376);
lean::cnstr_set(x_387, 2, x_377);
lean::cnstr_set(x_387, 3, x_386);
lean::cnstr_set_scalar(x_387, sizeof(void*)*4, x_375);
return x_387;
}
else
{
obj* x_388; obj* x_389; obj* x_390; obj* x_391; obj* x_392; obj* x_393; obj* x_394; obj* x_395; obj* x_396; uint8 x_397; obj* x_398; obj* x_399; 
x_388 = lean::cnstr_get(x_325, 1);
lean::inc(x_388);
x_389 = lean::cnstr_get(x_325, 2);
lean::inc(x_389);
if (lean::is_exclusive(x_325)) {
 lean::cnstr_release(x_325, 0);
 lean::cnstr_release(x_325, 1);
 lean::cnstr_release(x_325, 2);
 lean::cnstr_release(x_325, 3);
 x_390 = x_325;
} else {
 lean::dec_ref(x_325);
 x_390 = lean::box(0);
}
x_391 = lean::cnstr_get(x_326, 0);
lean::inc(x_391);
x_392 = lean::cnstr_get(x_326, 1);
lean::inc(x_392);
x_393 = lean::cnstr_get(x_326, 2);
lean::inc(x_393);
x_394 = lean::cnstr_get(x_326, 3);
lean::inc(x_394);
if (lean::is_exclusive(x_326)) {
 lean::cnstr_release(x_326, 0);
 lean::cnstr_release(x_326, 1);
 lean::cnstr_release(x_326, 2);
 lean::cnstr_release(x_326, 3);
 x_395 = x_326;
} else {
 lean::dec_ref(x_326);
 x_395 = lean::box(0);
}
if (lean::is_scalar(x_395)) {
 x_396 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_396 = x_395;
}
lean::cnstr_set(x_396, 0, x_391);
lean::cnstr_set(x_396, 1, x_392);
lean::cnstr_set(x_396, 2, x_393);
lean::cnstr_set(x_396, 3, x_394);
lean::cnstr_set_scalar(x_396, sizeof(void*)*4, x_375);
x_397 = 0;
if (lean::is_scalar(x_390)) {
 x_398 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_398 = x_390;
}
lean::cnstr_set(x_398, 0, x_396);
lean::cnstr_set(x_398, 1, x_388);
lean::cnstr_set(x_398, 2, x_389);
lean::cnstr_set(x_398, 3, x_368);
lean::cnstr_set_scalar(x_398, sizeof(void*)*4, x_397);
x_399 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_399, 0, x_315);
lean::cnstr_set(x_399, 1, x_316);
lean::cnstr_set(x_399, 2, x_317);
lean::cnstr_set(x_399, 3, x_398);
lean::cnstr_set_scalar(x_399, sizeof(void*)*4, x_375);
return x_399;
}
}
}
}
}
}
}
}
else
{
uint8 x_400; 
x_400 = l_RBNode_isRed___main___rarg(x_315);
if (x_400 == 0)
{
obj* x_401; obj* x_402; 
x_401 = l_RBNode_ins___main___at___private_init_lean_compiler_ir_rc_1__updateRefUsingCtorInfo___spec__2(x_315, x_2, x_3);
x_402 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_402, 0, x_401);
lean::cnstr_set(x_402, 1, x_316);
lean::cnstr_set(x_402, 2, x_317);
lean::cnstr_set(x_402, 3, x_318);
lean::cnstr_set_scalar(x_402, sizeof(void*)*4, x_6);
return x_402;
}
else
{
obj* x_403; 
x_403 = l_RBNode_ins___main___at___private_init_lean_compiler_ir_rc_1__updateRefUsingCtorInfo___spec__2(x_315, x_2, x_3);
if (lean::obj_tag(x_403) == 0)
{
lean::dec(x_318);
lean::dec(x_317);
lean::dec(x_316);
return x_403;
}
else
{
obj* x_404; 
x_404 = lean::cnstr_get(x_403, 0);
lean::inc(x_404);
if (lean::obj_tag(x_404) == 0)
{
obj* x_405; 
x_405 = lean::cnstr_get(x_403, 3);
lean::inc(x_405);
if (lean::obj_tag(x_405) == 0)
{
obj* x_406; obj* x_407; obj* x_408; uint8 x_409; obj* x_410; uint8 x_411; obj* x_412; 
x_406 = lean::cnstr_get(x_403, 1);
lean::inc(x_406);
x_407 = lean::cnstr_get(x_403, 2);
lean::inc(x_407);
if (lean::is_exclusive(x_403)) {
 lean::cnstr_release(x_403, 0);
 lean::cnstr_release(x_403, 1);
 lean::cnstr_release(x_403, 2);
 lean::cnstr_release(x_403, 3);
 x_408 = x_403;
} else {
 lean::dec_ref(x_403);
 x_408 = lean::box(0);
}
x_409 = 0;
if (lean::is_scalar(x_408)) {
 x_410 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_410 = x_408;
}
lean::cnstr_set(x_410, 0, x_405);
lean::cnstr_set(x_410, 1, x_406);
lean::cnstr_set(x_410, 2, x_407);
lean::cnstr_set(x_410, 3, x_405);
lean::cnstr_set_scalar(x_410, sizeof(void*)*4, x_409);
x_411 = 1;
x_412 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_412, 0, x_410);
lean::cnstr_set(x_412, 1, x_316);
lean::cnstr_set(x_412, 2, x_317);
lean::cnstr_set(x_412, 3, x_318);
lean::cnstr_set_scalar(x_412, sizeof(void*)*4, x_411);
return x_412;
}
else
{
uint8 x_413; 
x_413 = lean::cnstr_get_scalar<uint8>(x_405, sizeof(void*)*4);
if (x_413 == 0)
{
obj* x_414; obj* x_415; obj* x_416; obj* x_417; obj* x_418; obj* x_419; obj* x_420; obj* x_421; uint8 x_422; obj* x_423; obj* x_424; obj* x_425; 
x_414 = lean::cnstr_get(x_403, 1);
lean::inc(x_414);
x_415 = lean::cnstr_get(x_403, 2);
lean::inc(x_415);
if (lean::is_exclusive(x_403)) {
 lean::cnstr_release(x_403, 0);
 lean::cnstr_release(x_403, 1);
 lean::cnstr_release(x_403, 2);
 lean::cnstr_release(x_403, 3);
 x_416 = x_403;
} else {
 lean::dec_ref(x_403);
 x_416 = lean::box(0);
}
x_417 = lean::cnstr_get(x_405, 0);
lean::inc(x_417);
x_418 = lean::cnstr_get(x_405, 1);
lean::inc(x_418);
x_419 = lean::cnstr_get(x_405, 2);
lean::inc(x_419);
x_420 = lean::cnstr_get(x_405, 3);
lean::inc(x_420);
if (lean::is_exclusive(x_405)) {
 lean::cnstr_release(x_405, 0);
 lean::cnstr_release(x_405, 1);
 lean::cnstr_release(x_405, 2);
 lean::cnstr_release(x_405, 3);
 x_421 = x_405;
} else {
 lean::dec_ref(x_405);
 x_421 = lean::box(0);
}
x_422 = 1;
if (lean::is_scalar(x_421)) {
 x_423 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_423 = x_421;
}
lean::cnstr_set(x_423, 0, x_404);
lean::cnstr_set(x_423, 1, x_414);
lean::cnstr_set(x_423, 2, x_415);
lean::cnstr_set(x_423, 3, x_417);
lean::cnstr_set_scalar(x_423, sizeof(void*)*4, x_422);
if (lean::is_scalar(x_416)) {
 x_424 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_424 = x_416;
}
lean::cnstr_set(x_424, 0, x_420);
lean::cnstr_set(x_424, 1, x_316);
lean::cnstr_set(x_424, 2, x_317);
lean::cnstr_set(x_424, 3, x_318);
lean::cnstr_set_scalar(x_424, sizeof(void*)*4, x_422);
x_425 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_425, 0, x_423);
lean::cnstr_set(x_425, 1, x_418);
lean::cnstr_set(x_425, 2, x_419);
lean::cnstr_set(x_425, 3, x_424);
lean::cnstr_set_scalar(x_425, sizeof(void*)*4, x_413);
return x_425;
}
else
{
obj* x_426; obj* x_427; obj* x_428; uint8 x_429; obj* x_430; obj* x_431; 
x_426 = lean::cnstr_get(x_403, 1);
lean::inc(x_426);
x_427 = lean::cnstr_get(x_403, 2);
lean::inc(x_427);
if (lean::is_exclusive(x_403)) {
 lean::cnstr_release(x_403, 0);
 lean::cnstr_release(x_403, 1);
 lean::cnstr_release(x_403, 2);
 lean::cnstr_release(x_403, 3);
 x_428 = x_403;
} else {
 lean::dec_ref(x_403);
 x_428 = lean::box(0);
}
x_429 = 0;
if (lean::is_scalar(x_428)) {
 x_430 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_430 = x_428;
}
lean::cnstr_set(x_430, 0, x_404);
lean::cnstr_set(x_430, 1, x_426);
lean::cnstr_set(x_430, 2, x_427);
lean::cnstr_set(x_430, 3, x_405);
lean::cnstr_set_scalar(x_430, sizeof(void*)*4, x_429);
x_431 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_431, 0, x_430);
lean::cnstr_set(x_431, 1, x_316);
lean::cnstr_set(x_431, 2, x_317);
lean::cnstr_set(x_431, 3, x_318);
lean::cnstr_set_scalar(x_431, sizeof(void*)*4, x_413);
return x_431;
}
}
}
else
{
uint8 x_432; 
x_432 = lean::cnstr_get_scalar<uint8>(x_404, sizeof(void*)*4);
if (x_432 == 0)
{
obj* x_433; obj* x_434; obj* x_435; obj* x_436; obj* x_437; obj* x_438; obj* x_439; obj* x_440; obj* x_441; uint8 x_442; obj* x_443; obj* x_444; obj* x_445; 
x_433 = lean::cnstr_get(x_403, 1);
lean::inc(x_433);
x_434 = lean::cnstr_get(x_403, 2);
lean::inc(x_434);
x_435 = lean::cnstr_get(x_403, 3);
lean::inc(x_435);
if (lean::is_exclusive(x_403)) {
 lean::cnstr_release(x_403, 0);
 lean::cnstr_release(x_403, 1);
 lean::cnstr_release(x_403, 2);
 lean::cnstr_release(x_403, 3);
 x_436 = x_403;
} else {
 lean::dec_ref(x_403);
 x_436 = lean::box(0);
}
x_437 = lean::cnstr_get(x_404, 0);
lean::inc(x_437);
x_438 = lean::cnstr_get(x_404, 1);
lean::inc(x_438);
x_439 = lean::cnstr_get(x_404, 2);
lean::inc(x_439);
x_440 = lean::cnstr_get(x_404, 3);
lean::inc(x_440);
if (lean::is_exclusive(x_404)) {
 lean::cnstr_release(x_404, 0);
 lean::cnstr_release(x_404, 1);
 lean::cnstr_release(x_404, 2);
 lean::cnstr_release(x_404, 3);
 x_441 = x_404;
} else {
 lean::dec_ref(x_404);
 x_441 = lean::box(0);
}
x_442 = 1;
if (lean::is_scalar(x_441)) {
 x_443 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_443 = x_441;
}
lean::cnstr_set(x_443, 0, x_437);
lean::cnstr_set(x_443, 1, x_438);
lean::cnstr_set(x_443, 2, x_439);
lean::cnstr_set(x_443, 3, x_440);
lean::cnstr_set_scalar(x_443, sizeof(void*)*4, x_442);
if (lean::is_scalar(x_436)) {
 x_444 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_444 = x_436;
}
lean::cnstr_set(x_444, 0, x_435);
lean::cnstr_set(x_444, 1, x_316);
lean::cnstr_set(x_444, 2, x_317);
lean::cnstr_set(x_444, 3, x_318);
lean::cnstr_set_scalar(x_444, sizeof(void*)*4, x_442);
x_445 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_445, 0, x_443);
lean::cnstr_set(x_445, 1, x_433);
lean::cnstr_set(x_445, 2, x_434);
lean::cnstr_set(x_445, 3, x_444);
lean::cnstr_set_scalar(x_445, sizeof(void*)*4, x_432);
return x_445;
}
else
{
obj* x_446; 
x_446 = lean::cnstr_get(x_403, 3);
lean::inc(x_446);
if (lean::obj_tag(x_446) == 0)
{
obj* x_447; obj* x_448; obj* x_449; uint8 x_450; obj* x_451; obj* x_452; 
x_447 = lean::cnstr_get(x_403, 1);
lean::inc(x_447);
x_448 = lean::cnstr_get(x_403, 2);
lean::inc(x_448);
if (lean::is_exclusive(x_403)) {
 lean::cnstr_release(x_403, 0);
 lean::cnstr_release(x_403, 1);
 lean::cnstr_release(x_403, 2);
 lean::cnstr_release(x_403, 3);
 x_449 = x_403;
} else {
 lean::dec_ref(x_403);
 x_449 = lean::box(0);
}
x_450 = 0;
if (lean::is_scalar(x_449)) {
 x_451 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_451 = x_449;
}
lean::cnstr_set(x_451, 0, x_404);
lean::cnstr_set(x_451, 1, x_447);
lean::cnstr_set(x_451, 2, x_448);
lean::cnstr_set(x_451, 3, x_446);
lean::cnstr_set_scalar(x_451, sizeof(void*)*4, x_450);
x_452 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_452, 0, x_451);
lean::cnstr_set(x_452, 1, x_316);
lean::cnstr_set(x_452, 2, x_317);
lean::cnstr_set(x_452, 3, x_318);
lean::cnstr_set_scalar(x_452, sizeof(void*)*4, x_432);
return x_452;
}
else
{
uint8 x_453; 
x_453 = lean::cnstr_get_scalar<uint8>(x_446, sizeof(void*)*4);
if (x_453 == 0)
{
obj* x_454; obj* x_455; obj* x_456; obj* x_457; obj* x_458; obj* x_459; obj* x_460; obj* x_461; obj* x_462; obj* x_463; obj* x_464; obj* x_465; 
x_454 = lean::cnstr_get(x_403, 1);
lean::inc(x_454);
x_455 = lean::cnstr_get(x_403, 2);
lean::inc(x_455);
if (lean::is_exclusive(x_403)) {
 lean::cnstr_release(x_403, 0);
 lean::cnstr_release(x_403, 1);
 lean::cnstr_release(x_403, 2);
 lean::cnstr_release(x_403, 3);
 x_456 = x_403;
} else {
 lean::dec_ref(x_403);
 x_456 = lean::box(0);
}
x_457 = lean::cnstr_get(x_446, 0);
lean::inc(x_457);
x_458 = lean::cnstr_get(x_446, 1);
lean::inc(x_458);
x_459 = lean::cnstr_get(x_446, 2);
lean::inc(x_459);
x_460 = lean::cnstr_get(x_446, 3);
lean::inc(x_460);
if (lean::is_exclusive(x_446)) {
 lean::cnstr_release(x_446, 0);
 lean::cnstr_release(x_446, 1);
 lean::cnstr_release(x_446, 2);
 lean::cnstr_release(x_446, 3);
 x_461 = x_446;
} else {
 lean::dec_ref(x_446);
 x_461 = lean::box(0);
}
lean::inc(x_404);
if (lean::is_scalar(x_461)) {
 x_462 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_462 = x_461;
}
lean::cnstr_set(x_462, 0, x_404);
lean::cnstr_set(x_462, 1, x_454);
lean::cnstr_set(x_462, 2, x_455);
lean::cnstr_set(x_462, 3, x_457);
if (lean::is_exclusive(x_404)) {
 lean::cnstr_release(x_404, 0);
 lean::cnstr_release(x_404, 1);
 lean::cnstr_release(x_404, 2);
 lean::cnstr_release(x_404, 3);
 x_463 = x_404;
} else {
 lean::dec_ref(x_404);
 x_463 = lean::box(0);
}
lean::cnstr_set_scalar(x_462, sizeof(void*)*4, x_432);
if (lean::is_scalar(x_463)) {
 x_464 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_464 = x_463;
}
lean::cnstr_set(x_464, 0, x_460);
lean::cnstr_set(x_464, 1, x_316);
lean::cnstr_set(x_464, 2, x_317);
lean::cnstr_set(x_464, 3, x_318);
lean::cnstr_set_scalar(x_464, sizeof(void*)*4, x_432);
if (lean::is_scalar(x_456)) {
 x_465 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_465 = x_456;
}
lean::cnstr_set(x_465, 0, x_462);
lean::cnstr_set(x_465, 1, x_458);
lean::cnstr_set(x_465, 2, x_459);
lean::cnstr_set(x_465, 3, x_464);
lean::cnstr_set_scalar(x_465, sizeof(void*)*4, x_453);
return x_465;
}
else
{
obj* x_466; obj* x_467; obj* x_468; obj* x_469; obj* x_470; obj* x_471; obj* x_472; obj* x_473; obj* x_474; uint8 x_475; obj* x_476; obj* x_477; 
x_466 = lean::cnstr_get(x_403, 1);
lean::inc(x_466);
x_467 = lean::cnstr_get(x_403, 2);
lean::inc(x_467);
if (lean::is_exclusive(x_403)) {
 lean::cnstr_release(x_403, 0);
 lean::cnstr_release(x_403, 1);
 lean::cnstr_release(x_403, 2);
 lean::cnstr_release(x_403, 3);
 x_468 = x_403;
} else {
 lean::dec_ref(x_403);
 x_468 = lean::box(0);
}
x_469 = lean::cnstr_get(x_404, 0);
lean::inc(x_469);
x_470 = lean::cnstr_get(x_404, 1);
lean::inc(x_470);
x_471 = lean::cnstr_get(x_404, 2);
lean::inc(x_471);
x_472 = lean::cnstr_get(x_404, 3);
lean::inc(x_472);
if (lean::is_exclusive(x_404)) {
 lean::cnstr_release(x_404, 0);
 lean::cnstr_release(x_404, 1);
 lean::cnstr_release(x_404, 2);
 lean::cnstr_release(x_404, 3);
 x_473 = x_404;
} else {
 lean::dec_ref(x_404);
 x_473 = lean::box(0);
}
if (lean::is_scalar(x_473)) {
 x_474 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_474 = x_473;
}
lean::cnstr_set(x_474, 0, x_469);
lean::cnstr_set(x_474, 1, x_470);
lean::cnstr_set(x_474, 2, x_471);
lean::cnstr_set(x_474, 3, x_472);
lean::cnstr_set_scalar(x_474, sizeof(void*)*4, x_453);
x_475 = 0;
if (lean::is_scalar(x_468)) {
 x_476 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_476 = x_468;
}
lean::cnstr_set(x_476, 0, x_474);
lean::cnstr_set(x_476, 1, x_466);
lean::cnstr_set(x_476, 2, x_467);
lean::cnstr_set(x_476, 3, x_446);
lean::cnstr_set_scalar(x_476, sizeof(void*)*4, x_475);
x_477 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_477, 0, x_476);
lean::cnstr_set(x_477, 1, x_316);
lean::cnstr_set(x_477, 2, x_317);
lean::cnstr_set(x_477, 3, x_318);
lean::cnstr_set_scalar(x_477, sizeof(void*)*4, x_453);
return x_477;
}
}
}
}
}
}
}
}
}
}
}
}
obj* l_RBNode_insert___at___private_init_lean_compiler_ir_rc_1__updateRefUsingCtorInfo___spec__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; 
x_4 = l_RBNode_isRed___main___rarg(x_1);
if (x_4 == 0)
{
obj* x_5; 
x_5 = l_RBNode_ins___main___at___private_init_lean_compiler_ir_rc_1__updateRefUsingCtorInfo___spec__2(x_1, x_2, x_3);
return x_5;
}
else
{
obj* x_6; obj* x_7; 
x_6 = l_RBNode_ins___main___at___private_init_lean_compiler_ir_rc_1__updateRefUsingCtorInfo___spec__2(x_1, x_2, x_3);
x_7 = l_RBNode_setBlack___main___rarg(x_6);
return x_7;
}
}
}
obj* l___private_init_lean_compiler_ir_rc_1__updateRefUsingCtorInfo(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; 
x_4 = l_Lean_IR_CtorInfo_isRef(x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = !lean::is_exclusive(x_1);
if (x_5 == 0)
{
obj* x_6; obj* x_7; 
x_6 = lean::cnstr_get(x_1, 2);
x_7 = l_RBNode_find___main___at_Lean_IR_ExplicitRC_getVarInfo___spec__1(x_6, x_2);
if (lean::obj_tag(x_7) == 0)
{
lean::dec(x_2);
return x_1;
}
else
{
obj* x_8; uint8 x_9; 
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
lean::dec(x_7);
x_9 = !lean::is_exclusive(x_8);
if (x_9 == 0)
{
uint8 x_10; obj* x_11; 
x_10 = 0;
lean::cnstr_set_scalar(x_8, 0, x_10);
x_11 = l_RBNode_insert___at___private_init_lean_compiler_ir_rc_1__updateRefUsingCtorInfo___spec__1(x_6, x_2, x_8);
lean::cnstr_set(x_1, 2, x_11);
return x_1;
}
else
{
uint8 x_12; uint8 x_13; uint8 x_14; obj* x_15; obj* x_16; 
x_12 = lean::cnstr_get_scalar<uint8>(x_8, 1);
x_13 = lean::cnstr_get_scalar<uint8>(x_8, 2);
lean::dec(x_8);
x_14 = 0;
x_15 = lean::alloc_cnstr(0, 0, 3);
lean::cnstr_set_scalar(x_15, 0, x_14);
lean::cnstr_set_scalar(x_15, 1, x_12);
lean::cnstr_set_scalar(x_15, 2, x_13);
x_16 = l_RBNode_insert___at___private_init_lean_compiler_ir_rc_1__updateRefUsingCtorInfo___spec__1(x_6, x_2, x_15);
lean::cnstr_set(x_1, 2, x_16);
return x_1;
}
}
}
else
{
obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_17 = lean::cnstr_get(x_1, 0);
x_18 = lean::cnstr_get(x_1, 1);
x_19 = lean::cnstr_get(x_1, 2);
x_20 = lean::cnstr_get(x_1, 3);
x_21 = lean::cnstr_get(x_1, 4);
lean::inc(x_21);
lean::inc(x_20);
lean::inc(x_19);
lean::inc(x_18);
lean::inc(x_17);
lean::dec(x_1);
x_22 = l_RBNode_find___main___at_Lean_IR_ExplicitRC_getVarInfo___spec__1(x_19, x_2);
if (lean::obj_tag(x_22) == 0)
{
obj* x_23; 
lean::dec(x_2);
x_23 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_23, 0, x_17);
lean::cnstr_set(x_23, 1, x_18);
lean::cnstr_set(x_23, 2, x_19);
lean::cnstr_set(x_23, 3, x_20);
lean::cnstr_set(x_23, 4, x_21);
return x_23;
}
else
{
obj* x_24; uint8 x_25; uint8 x_26; obj* x_27; uint8 x_28; obj* x_29; obj* x_30; obj* x_31; 
x_24 = lean::cnstr_get(x_22, 0);
lean::inc(x_24);
lean::dec(x_22);
x_25 = lean::cnstr_get_scalar<uint8>(x_24, 1);
x_26 = lean::cnstr_get_scalar<uint8>(x_24, 2);
if (lean::is_exclusive(x_24)) {
 x_27 = x_24;
} else {
 lean::dec_ref(x_24);
 x_27 = lean::box(0);
}
x_28 = 0;
if (lean::is_scalar(x_27)) {
 x_29 = lean::alloc_cnstr(0, 0, 3);
} else {
 x_29 = x_27;
}
lean::cnstr_set_scalar(x_29, 0, x_28);
lean::cnstr_set_scalar(x_29, 1, x_25);
lean::cnstr_set_scalar(x_29, 2, x_26);
x_30 = l_RBNode_insert___at___private_init_lean_compiler_ir_rc_1__updateRefUsingCtorInfo___spec__1(x_19, x_2, x_29);
x_31 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_31, 0, x_17);
lean::cnstr_set(x_31, 1, x_18);
lean::cnstr_set(x_31, 2, x_30);
lean::cnstr_set(x_31, 3, x_20);
lean::cnstr_set(x_31, 4, x_21);
return x_31;
}
}
}
else
{
lean::dec(x_2);
return x_1;
}
}
}
obj* l___private_init_lean_compiler_ir_rc_1__updateRefUsingCtorInfo___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l___private_init_lean_compiler_ir_rc_1__updateRefUsingCtorInfo(x_1, x_2, x_3);
lean::dec(x_3);
return x_4;
}
}
obj* l_RBNode_findCore___main___at___private_init_lean_compiler_ir_rc_2__addDecForAlt___spec__1(obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; 
x_3 = lean::box(0);
return x_3;
}
else
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; uint8 x_8; 
x_4 = lean::cnstr_get(x_1, 0);
x_5 = lean::cnstr_get(x_1, 1);
x_6 = lean::cnstr_get(x_1, 2);
x_7 = lean::cnstr_get(x_1, 3);
x_8 = lean::nat_dec_lt(x_2, x_5);
if (x_8 == 0)
{
uint8 x_9; 
x_9 = lean::nat_dec_lt(x_5, x_2);
if (x_9 == 0)
{
obj* x_10; obj* x_11; 
lean::inc(x_6);
lean::inc(x_5);
x_10 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_10, 0, x_5);
lean::cnstr_set(x_10, 1, x_6);
x_11 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_11, 0, x_10);
return x_11;
}
else
{
x_1 = x_7;
goto _start;
}
}
else
{
x_1 = x_4;
goto _start;
}
}
}
}
obj* l_RBNode_fold___main___at___private_init_lean_compiler_ir_rc_2__addDecForAlt___spec__2(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
if (lean::obj_tag(x_5) == 0)
{
return x_4;
}
else
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_5, 0);
x_7 = lean::cnstr_get(x_5, 1);
x_8 = lean::cnstr_get(x_5, 3);
x_9 = l_RBNode_fold___main___at___private_init_lean_compiler_ir_rc_2__addDecForAlt___spec__2(x_1, x_2, x_3, x_4, x_6);
x_10 = l_RBNode_findCore___main___at___private_init_lean_compiler_ir_rc_2__addDecForAlt___spec__1(x_2, x_7);
if (lean::obj_tag(x_10) == 0)
{
uint8 x_11; 
x_11 = l_Lean_IR_ExplicitRC_mustConsume(x_1, x_7);
if (x_11 == 0)
{
x_4 = x_9;
x_5 = x_8;
goto _start;
}
else
{
obj* x_13; uint8 x_14; obj* x_15; 
x_13 = lean::mk_nat_obj(1u);
x_14 = 1;
lean::inc(x_7);
x_15 = lean::alloc_cnstr(7, 3, 1);
lean::cnstr_set(x_15, 0, x_7);
lean::cnstr_set(x_15, 1, x_13);
lean::cnstr_set(x_15, 2, x_9);
lean::cnstr_set_scalar(x_15, sizeof(void*)*3, x_14);
x_4 = x_15;
x_5 = x_8;
goto _start;
}
}
else
{
lean::dec(x_10);
x_4 = x_9;
x_5 = x_8;
goto _start;
}
}
}
}
obj* l___private_init_lean_compiler_ir_rc_2__addDecForAlt(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; 
x_5 = l___private_init_lean_compiler_ir_livevars_6__accumulate___closed__1;
x_6 = l_RBNode_fold___main___at___private_init_lean_compiler_ir_rc_2__addDecForAlt___spec__2(x_1, x_3, x_5, x_4, x_2);
return x_6;
}
}
obj* l_RBNode_findCore___main___at___private_init_lean_compiler_ir_rc_2__addDecForAlt___spec__1___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_RBNode_findCore___main___at___private_init_lean_compiler_ir_rc_2__addDecForAlt___spec__1(x_1, x_2);
lean::dec(x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_RBNode_fold___main___at___private_init_lean_compiler_ir_rc_2__addDecForAlt___spec__2___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_RBNode_fold___main___at___private_init_lean_compiler_ir_rc_2__addDecForAlt___spec__2(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_5);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_6;
}
}
obj* l___private_init_lean_compiler_ir_rc_2__addDecForAlt___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l___private_init_lean_compiler_ir_rc_2__addDecForAlt(x_1, x_2, x_3, x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_5;
}
}
uint8 l_Nat_anyAux___main___at___private_init_lean_compiler_ir_rc_3__isFirstOcc___spec__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; uint8 x_6; 
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::nat_dec_eq(x_4, x_5);
if (x_6 == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; uint8 x_12; 
x_7 = lean::mk_nat_obj(1u);
x_8 = lean::nat_sub(x_4, x_7);
x_9 = lean::nat_sub(x_3, x_4);
lean::dec(x_4);
x_10 = l_Lean_IR_Arg_Inhabited;
x_11 = lean::array_get(x_10, x_1, x_9);
lean::dec(x_9);
x_12 = l_Lean_IR_Arg_beq___main(x_11, x_2);
lean::dec(x_11);
if (x_12 == 0)
{
x_4 = x_8;
goto _start;
}
else
{
uint8 x_14; 
lean::dec(x_8);
x_14 = 1;
return x_14;
}
}
else
{
uint8 x_15; 
lean::dec(x_4);
x_15 = 0;
return x_15;
}
}
}
uint8 l___private_init_lean_compiler_ir_rc_3__isFirstOcc(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; uint8 x_5; 
x_3 = l_Lean_IR_Arg_Inhabited;
x_4 = lean::array_get(x_3, x_1, x_2);
lean::inc(x_2);
x_5 = l_Nat_anyAux___main___at___private_init_lean_compiler_ir_rc_3__isFirstOcc___spec__1(x_1, x_4, x_2, x_2);
lean::dec(x_2);
lean::dec(x_4);
if (x_5 == 0)
{
uint8 x_6; 
x_6 = 1;
return x_6;
}
else
{
uint8 x_7; 
x_7 = 0;
return x_7;
}
}
}
obj* l_Nat_anyAux___main___at___private_init_lean_compiler_ir_rc_3__isFirstOcc___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = l_Nat_anyAux___main___at___private_init_lean_compiler_ir_rc_3__isFirstOcc___spec__1(x_1, x_2, x_3, x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
x_6 = lean::box(x_5);
return x_6;
}
}
obj* l___private_init_lean_compiler_ir_rc_3__isFirstOcc___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; obj* x_4; 
x_3 = l___private_init_lean_compiler_ir_rc_3__isFirstOcc(x_1, x_2);
lean::dec(x_1);
x_4 = lean::box(x_3);
return x_4;
}
}
uint8 l_Nat_anyAux___main___at___private_init_lean_compiler_ir_rc_4__isBorrowParamAux___spec__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; uint8 x_7; 
x_6 = lean::mk_nat_obj(0u);
x_7 = lean::nat_dec_eq(x_5, x_6);
if (x_7 == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_8 = lean::mk_nat_obj(1u);
x_9 = lean::nat_sub(x_5, x_8);
x_10 = lean::nat_sub(x_4, x_5);
lean::dec(x_5);
x_11 = l_Lean_IR_Arg_Inhabited;
x_12 = lean::array_get(x_11, x_2, x_10);
if (lean::obj_tag(x_12) == 0)
{
obj* x_13; uint8 x_14; 
x_13 = lean::cnstr_get(x_12, 0);
lean::inc(x_13);
lean::dec(x_12);
x_14 = lean::nat_dec_eq(x_1, x_13);
lean::dec(x_13);
if (x_14 == 0)
{
lean::dec(x_10);
x_5 = x_9;
goto _start;
}
else
{
obj* x_16; uint8 x_17; 
lean::inc(x_3);
x_16 = lean::apply_1(x_3, x_10);
x_17 = lean::unbox(x_16);
lean::dec(x_16);
if (x_17 == 0)
{
uint8 x_18; 
lean::dec(x_9);
lean::dec(x_3);
x_18 = 1;
return x_18;
}
else
{
x_5 = x_9;
goto _start;
}
}
}
else
{
lean::dec(x_10);
x_5 = x_9;
goto _start;
}
}
else
{
uint8 x_21; 
lean::dec(x_5);
lean::dec(x_3);
x_21 = 0;
return x_21;
}
}
}
uint8 l___private_init_lean_compiler_ir_rc_4__isBorrowParamAux(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; uint8 x_5; 
x_4 = lean::array_get_size(x_2);
lean::inc(x_4);
x_5 = l_Nat_anyAux___main___at___private_init_lean_compiler_ir_rc_4__isBorrowParamAux___spec__1(x_1, x_2, x_3, x_4, x_4);
lean::dec(x_4);
return x_5;
}
}
obj* l_Nat_anyAux___main___at___private_init_lean_compiler_ir_rc_4__isBorrowParamAux___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; obj* x_7; 
x_6 = l_Nat_anyAux___main___at___private_init_lean_compiler_ir_rc_4__isBorrowParamAux___spec__1(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_4);
lean::dec(x_2);
lean::dec(x_1);
x_7 = lean::box(x_6);
return x_7;
}
}
obj* l___private_init_lean_compiler_ir_rc_4__isBorrowParamAux___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = l___private_init_lean_compiler_ir_rc_4__isBorrowParamAux(x_1, x_2, x_3);
lean::dec(x_2);
lean::dec(x_1);
x_5 = lean::box(x_4);
return x_5;
}
}
uint8 l_Nat_anyAux___main___at___private_init_lean_compiler_ir_rc_5__isBorrowParam___spec__2(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; uint8 x_7; 
x_6 = lean::mk_nat_obj(0u);
x_7 = lean::nat_dec_eq(x_5, x_6);
if (x_7 == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_8 = lean::mk_nat_obj(1u);
x_9 = lean::nat_sub(x_5, x_8);
x_10 = lean::nat_sub(x_4, x_5);
lean::dec(x_5);
x_11 = l_Lean_IR_Arg_Inhabited;
x_12 = lean::array_get(x_11, x_3, x_10);
if (lean::obj_tag(x_12) == 0)
{
obj* x_13; uint8 x_14; 
x_13 = lean::cnstr_get(x_12, 0);
lean::inc(x_13);
lean::dec(x_12);
x_14 = lean::nat_dec_eq(x_2, x_13);
lean::dec(x_13);
if (x_14 == 0)
{
lean::dec(x_10);
x_5 = x_9;
goto _start;
}
else
{
obj* x_16; obj* x_17; uint8 x_18; 
x_16 = l_Lean_IR_paramInh;
x_17 = lean::array_get(x_16, x_1, x_10);
lean::dec(x_10);
x_18 = lean::cnstr_get_scalar<uint8>(x_17, sizeof(void*)*1);
lean::dec(x_17);
if (x_18 == 0)
{
x_5 = x_9;
goto _start;
}
else
{
uint8 x_20; 
lean::dec(x_9);
x_20 = 1;
return x_20;
}
}
}
else
{
lean::dec(x_10);
x_5 = x_9;
goto _start;
}
}
else
{
uint8 x_22; 
lean::dec(x_5);
x_22 = 0;
return x_22;
}
}
}
uint8 l___private_init_lean_compiler_ir_rc_4__isBorrowParamAux___at___private_init_lean_compiler_ir_rc_5__isBorrowParam___spec__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; uint8 x_5; 
x_4 = lean::array_get_size(x_3);
lean::inc(x_4);
x_5 = l_Nat_anyAux___main___at___private_init_lean_compiler_ir_rc_5__isBorrowParam___spec__2(x_1, x_2, x_3, x_4, x_4);
lean::dec(x_4);
return x_5;
}
}
uint8 l___private_init_lean_compiler_ir_rc_5__isBorrowParam(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; 
x_4 = l___private_init_lean_compiler_ir_rc_4__isBorrowParamAux___at___private_init_lean_compiler_ir_rc_5__isBorrowParam___spec__1(x_3, x_1, x_2);
return x_4;
}
}
obj* l_Nat_anyAux___main___at___private_init_lean_compiler_ir_rc_5__isBorrowParam___spec__2___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; obj* x_7; 
x_6 = l_Nat_anyAux___main___at___private_init_lean_compiler_ir_rc_5__isBorrowParam___spec__2(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
x_7 = lean::box(x_6);
return x_7;
}
}
obj* l___private_init_lean_compiler_ir_rc_4__isBorrowParamAux___at___private_init_lean_compiler_ir_rc_5__isBorrowParam___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = l___private_init_lean_compiler_ir_rc_4__isBorrowParamAux___at___private_init_lean_compiler_ir_rc_5__isBorrowParam___spec__1(x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
x_5 = lean::box(x_4);
return x_5;
}
}
obj* l___private_init_lean_compiler_ir_rc_5__isBorrowParam___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = l___private_init_lean_compiler_ir_rc_5__isBorrowParam(x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
x_5 = lean::box(x_4);
return x_5;
}
}
obj* l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_6__getNumConsumptions___spec__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; uint8 x_8; 
x_7 = lean::mk_nat_obj(0u);
x_8 = lean::nat_dec_eq(x_5, x_7);
if (x_8 == 0)
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_9 = lean::mk_nat_obj(1u);
x_10 = lean::nat_sub(x_5, x_9);
x_11 = lean::nat_sub(x_4, x_5);
lean::dec(x_5);
x_12 = l_Lean_IR_Arg_Inhabited;
x_13 = lean::array_get(x_12, x_2, x_11);
if (lean::obj_tag(x_13) == 0)
{
obj* x_14; uint8 x_15; 
x_14 = lean::cnstr_get(x_13, 0);
lean::inc(x_14);
lean::dec(x_13);
x_15 = lean::nat_dec_eq(x_1, x_14);
lean::dec(x_14);
if (x_15 == 0)
{
lean::dec(x_11);
x_5 = x_10;
goto _start;
}
else
{
obj* x_17; uint8 x_18; 
lean::inc(x_3);
x_17 = lean::apply_1(x_3, x_11);
x_18 = lean::unbox(x_17);
lean::dec(x_17);
if (x_18 == 0)
{
x_5 = x_10;
goto _start;
}
else
{
obj* x_20; 
x_20 = lean::nat_add(x_6, x_9);
lean::dec(x_6);
x_5 = x_10;
x_6 = x_20;
goto _start;
}
}
}
else
{
lean::dec(x_11);
x_5 = x_10;
goto _start;
}
}
else
{
lean::dec(x_5);
lean::dec(x_3);
return x_6;
}
}
}
obj* l___private_init_lean_compiler_ir_rc_6__getNumConsumptions(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; 
x_4 = lean::array_get_size(x_2);
x_5 = lean::mk_nat_obj(0u);
lean::inc(x_4);
x_6 = l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_6__getNumConsumptions___spec__1(x_1, x_2, x_3, x_4, x_4, x_5);
lean::dec(x_4);
return x_6;
}
}
obj* l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_6__getNumConsumptions___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; 
x_7 = l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_6__getNumConsumptions___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean::dec(x_4);
lean::dec(x_2);
lean::dec(x_1);
return x_7;
}
}
obj* l___private_init_lean_compiler_ir_rc_6__getNumConsumptions___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l___private_init_lean_compiler_ir_rc_6__getNumConsumptions(x_1, x_2, x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_4;
}
}
obj* l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_7__addIncBeforeAux___spec__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; uint8 x_9; 
x_8 = lean::mk_nat_obj(0u);
x_9 = lean::nat_dec_eq(x_6, x_8);
if (x_9 == 0)
{
obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_10 = lean::mk_nat_obj(1u);
x_11 = lean::nat_sub(x_6, x_10);
x_12 = lean::nat_sub(x_5, x_6);
lean::dec(x_6);
x_13 = l_Lean_IR_Arg_Inhabited;
x_14 = lean::array_get(x_13, x_2, x_12);
if (lean::obj_tag(x_14) == 0)
{
obj* x_15; obj* x_16; uint8 x_17; 
x_15 = lean::cnstr_get(x_14, 0);
lean::inc(x_15);
lean::dec(x_14);
x_16 = l_Lean_IR_ExplicitRC_getVarInfo(x_1, x_15);
x_17 = lean::cnstr_get_scalar<uint8>(x_16, 0);
if (x_17 == 0)
{
lean::dec(x_16);
lean::dec(x_15);
lean::dec(x_12);
x_6 = x_11;
goto _start;
}
else
{
uint8 x_19; 
x_19 = lean::cnstr_get_scalar<uint8>(x_16, 1);
if (x_19 == 0)
{
uint8 x_20; 
x_20 = l___private_init_lean_compiler_ir_rc_3__isFirstOcc(x_2, x_12);
if (x_20 == 0)
{
lean::dec(x_16);
lean::dec(x_15);
x_6 = x_11;
goto _start;
}
else
{
obj* x_22; uint8 x_23; 
lean::inc(x_3);
x_22 = l___private_init_lean_compiler_ir_rc_6__getNumConsumptions(x_15, x_2, x_3);
x_23 = lean::cnstr_get_scalar<uint8>(x_16, 2);
lean::dec(x_16);
if (x_23 == 0)
{
uint8 x_24; 
x_24 = lean::nat_dec_eq(x_22, x_8);
if (x_24 == 0)
{
uint8 x_25; obj* x_26; 
x_25 = 1;
x_26 = lean::alloc_cnstr(6, 3, 1);
lean::cnstr_set(x_26, 0, x_15);
lean::cnstr_set(x_26, 1, x_22);
lean::cnstr_set(x_26, 2, x_7);
lean::cnstr_set_scalar(x_26, sizeof(void*)*3, x_25);
x_6 = x_11;
x_7 = x_26;
goto _start;
}
else
{
lean::dec(x_22);
lean::dec(x_15);
x_6 = x_11;
goto _start;
}
}
else
{
obj* x_29; 
x_29 = l_RBNode_findCore___main___at___private_init_lean_compiler_ir_rc_2__addDecForAlt___spec__1(x_4, x_15);
if (lean::obj_tag(x_29) == 0)
{
uint8 x_30; 
lean::inc(x_3);
x_30 = l___private_init_lean_compiler_ir_rc_4__isBorrowParamAux(x_15, x_2, x_3);
if (x_30 == 0)
{
obj* x_31; uint8 x_32; 
x_31 = lean::nat_sub(x_22, x_10);
lean::dec(x_22);
x_32 = lean::nat_dec_eq(x_31, x_8);
if (x_32 == 0)
{
uint8 x_33; obj* x_34; 
x_33 = 1;
x_34 = lean::alloc_cnstr(6, 3, 1);
lean::cnstr_set(x_34, 0, x_15);
lean::cnstr_set(x_34, 1, x_31);
lean::cnstr_set(x_34, 2, x_7);
lean::cnstr_set_scalar(x_34, sizeof(void*)*3, x_33);
x_6 = x_11;
x_7 = x_34;
goto _start;
}
else
{
lean::dec(x_31);
lean::dec(x_15);
x_6 = x_11;
goto _start;
}
}
else
{
uint8 x_37; 
x_37 = lean::nat_dec_eq(x_22, x_8);
if (x_37 == 0)
{
uint8 x_38; obj* x_39; 
x_38 = 1;
x_39 = lean::alloc_cnstr(6, 3, 1);
lean::cnstr_set(x_39, 0, x_15);
lean::cnstr_set(x_39, 1, x_22);
lean::cnstr_set(x_39, 2, x_7);
lean::cnstr_set_scalar(x_39, sizeof(void*)*3, x_38);
x_6 = x_11;
x_7 = x_39;
goto _start;
}
else
{
lean::dec(x_22);
lean::dec(x_15);
x_6 = x_11;
goto _start;
}
}
}
else
{
uint8 x_42; 
lean::dec(x_29);
x_42 = lean::nat_dec_eq(x_22, x_8);
if (x_42 == 0)
{
uint8 x_43; obj* x_44; 
x_43 = 1;
x_44 = lean::alloc_cnstr(6, 3, 1);
lean::cnstr_set(x_44, 0, x_15);
lean::cnstr_set(x_44, 1, x_22);
lean::cnstr_set(x_44, 2, x_7);
lean::cnstr_set_scalar(x_44, sizeof(void*)*3, x_43);
x_6 = x_11;
x_7 = x_44;
goto _start;
}
else
{
lean::dec(x_22);
lean::dec(x_15);
x_6 = x_11;
goto _start;
}
}
}
}
}
else
{
lean::dec(x_16);
lean::dec(x_15);
lean::dec(x_12);
x_6 = x_11;
goto _start;
}
}
}
else
{
lean::dec(x_12);
x_6 = x_11;
goto _start;
}
}
else
{
lean::dec(x_6);
lean::dec(x_3);
return x_7;
}
}
}
obj* l___private_init_lean_compiler_ir_rc_7__addIncBeforeAux(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; 
x_6 = lean::array_get_size(x_2);
lean::inc(x_6);
x_7 = l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_7__addIncBeforeAux___spec__1(x_1, x_2, x_3, x_5, x_6, x_6, x_4);
lean::dec(x_6);
return x_7;
}
}
obj* l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_7__addIncBeforeAux___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; 
x_8 = l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_7__addIncBeforeAux___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_2);
lean::dec(x_1);
return x_8;
}
}
obj* l___private_init_lean_compiler_ir_rc_7__addIncBeforeAux___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l___private_init_lean_compiler_ir_rc_7__addIncBeforeAux(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_5);
lean::dec(x_2);
lean::dec(x_1);
return x_6;
}
}
obj* l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__3(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; uint8 x_8; 
x_7 = lean::mk_nat_obj(0u);
x_8 = lean::nat_dec_eq(x_5, x_7);
if (x_8 == 0)
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_9 = lean::mk_nat_obj(1u);
x_10 = lean::nat_sub(x_5, x_9);
x_11 = lean::nat_sub(x_4, x_5);
lean::dec(x_5);
x_12 = l_Lean_IR_Arg_Inhabited;
x_13 = lean::array_get(x_12, x_3, x_11);
if (lean::obj_tag(x_13) == 0)
{
obj* x_14; uint8 x_15; 
x_14 = lean::cnstr_get(x_13, 0);
lean::inc(x_14);
lean::dec(x_13);
x_15 = lean::nat_dec_eq(x_2, x_14);
lean::dec(x_14);
if (x_15 == 0)
{
lean::dec(x_11);
x_5 = x_10;
goto _start;
}
else
{
obj* x_17; obj* x_18; uint8 x_19; 
x_17 = l_Lean_IR_paramInh;
x_18 = lean::array_get(x_17, x_1, x_11);
lean::dec(x_11);
x_19 = lean::cnstr_get_scalar<uint8>(x_18, sizeof(void*)*1);
lean::dec(x_18);
if (x_19 == 0)
{
obj* x_20; 
x_20 = lean::nat_add(x_6, x_9);
lean::dec(x_6);
x_5 = x_10;
x_6 = x_20;
goto _start;
}
else
{
x_5 = x_10;
goto _start;
}
}
}
else
{
lean::dec(x_11);
x_5 = x_10;
goto _start;
}
}
else
{
lean::dec(x_5);
return x_6;
}
}
}
obj* l___private_init_lean_compiler_ir_rc_6__getNumConsumptions___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__2(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; 
x_4 = lean::array_get_size(x_3);
x_5 = lean::mk_nat_obj(0u);
lean::inc(x_4);
x_6 = l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__3(x_1, x_2, x_3, x_4, x_4, x_5);
lean::dec(x_4);
return x_6;
}
}
uint8 l_Nat_anyAux___main___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__5(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; uint8 x_7; 
x_6 = lean::mk_nat_obj(0u);
x_7 = lean::nat_dec_eq(x_5, x_6);
if (x_7 == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_8 = lean::mk_nat_obj(1u);
x_9 = lean::nat_sub(x_5, x_8);
x_10 = lean::nat_sub(x_4, x_5);
lean::dec(x_5);
x_11 = l_Lean_IR_Arg_Inhabited;
x_12 = lean::array_get(x_11, x_3, x_10);
if (lean::obj_tag(x_12) == 0)
{
obj* x_13; uint8 x_14; 
x_13 = lean::cnstr_get(x_12, 0);
lean::inc(x_13);
lean::dec(x_12);
x_14 = lean::nat_dec_eq(x_2, x_13);
lean::dec(x_13);
if (x_14 == 0)
{
lean::dec(x_10);
x_5 = x_9;
goto _start;
}
else
{
obj* x_16; obj* x_17; uint8 x_18; 
x_16 = l_Lean_IR_paramInh;
x_17 = lean::array_get(x_16, x_1, x_10);
lean::dec(x_10);
x_18 = lean::cnstr_get_scalar<uint8>(x_17, sizeof(void*)*1);
lean::dec(x_17);
if (x_18 == 0)
{
x_5 = x_9;
goto _start;
}
else
{
uint8 x_20; 
lean::dec(x_9);
x_20 = 1;
return x_20;
}
}
}
else
{
lean::dec(x_10);
x_5 = x_9;
goto _start;
}
}
else
{
uint8 x_22; 
lean::dec(x_5);
x_22 = 0;
return x_22;
}
}
}
uint8 l___private_init_lean_compiler_ir_rc_4__isBorrowParamAux___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__4(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; uint8 x_5; 
x_4 = lean::array_get_size(x_3);
lean::inc(x_4);
x_5 = l_Nat_anyAux___main___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__5(x_1, x_2, x_3, x_4, x_4);
lean::dec(x_4);
return x_5;
}
}
obj* l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__6(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; uint8 x_9; 
x_8 = lean::mk_nat_obj(0u);
x_9 = lean::nat_dec_eq(x_6, x_8);
if (x_9 == 0)
{
obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_10 = lean::mk_nat_obj(1u);
x_11 = lean::nat_sub(x_6, x_10);
x_12 = lean::nat_sub(x_5, x_6);
lean::dec(x_6);
x_13 = l_Lean_IR_Arg_Inhabited;
x_14 = lean::array_get(x_13, x_3, x_12);
if (lean::obj_tag(x_14) == 0)
{
obj* x_15; obj* x_16; uint8 x_17; 
x_15 = lean::cnstr_get(x_14, 0);
lean::inc(x_15);
lean::dec(x_14);
x_16 = l_Lean_IR_ExplicitRC_getVarInfo(x_2, x_15);
x_17 = lean::cnstr_get_scalar<uint8>(x_16, 0);
if (x_17 == 0)
{
lean::dec(x_16);
lean::dec(x_15);
lean::dec(x_12);
x_6 = x_11;
goto _start;
}
else
{
uint8 x_19; 
x_19 = lean::cnstr_get_scalar<uint8>(x_16, 1);
if (x_19 == 0)
{
uint8 x_20; 
x_20 = l___private_init_lean_compiler_ir_rc_3__isFirstOcc(x_3, x_12);
if (x_20 == 0)
{
lean::dec(x_16);
lean::dec(x_15);
x_6 = x_11;
goto _start;
}
else
{
obj* x_22; uint8 x_23; 
x_22 = l___private_init_lean_compiler_ir_rc_6__getNumConsumptions___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__2(x_1, x_15, x_3);
x_23 = lean::cnstr_get_scalar<uint8>(x_16, 2);
lean::dec(x_16);
if (x_23 == 0)
{
uint8 x_24; 
x_24 = lean::nat_dec_eq(x_22, x_8);
if (x_24 == 0)
{
uint8 x_25; obj* x_26; 
x_25 = 1;
x_26 = lean::alloc_cnstr(6, 3, 1);
lean::cnstr_set(x_26, 0, x_15);
lean::cnstr_set(x_26, 1, x_22);
lean::cnstr_set(x_26, 2, x_7);
lean::cnstr_set_scalar(x_26, sizeof(void*)*3, x_25);
x_6 = x_11;
x_7 = x_26;
goto _start;
}
else
{
lean::dec(x_22);
lean::dec(x_15);
x_6 = x_11;
goto _start;
}
}
else
{
obj* x_29; 
x_29 = l_RBNode_findCore___main___at___private_init_lean_compiler_ir_rc_2__addDecForAlt___spec__1(x_4, x_15);
if (lean::obj_tag(x_29) == 0)
{
uint8 x_30; 
x_30 = l___private_init_lean_compiler_ir_rc_4__isBorrowParamAux___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__4(x_1, x_15, x_3);
if (x_30 == 0)
{
obj* x_31; uint8 x_32; 
x_31 = lean::nat_sub(x_22, x_10);
lean::dec(x_22);
x_32 = lean::nat_dec_eq(x_31, x_8);
if (x_32 == 0)
{
uint8 x_33; obj* x_34; 
x_33 = 1;
x_34 = lean::alloc_cnstr(6, 3, 1);
lean::cnstr_set(x_34, 0, x_15);
lean::cnstr_set(x_34, 1, x_31);
lean::cnstr_set(x_34, 2, x_7);
lean::cnstr_set_scalar(x_34, sizeof(void*)*3, x_33);
x_6 = x_11;
x_7 = x_34;
goto _start;
}
else
{
lean::dec(x_31);
lean::dec(x_15);
x_6 = x_11;
goto _start;
}
}
else
{
uint8 x_37; 
x_37 = lean::nat_dec_eq(x_22, x_8);
if (x_37 == 0)
{
uint8 x_38; obj* x_39; 
x_38 = 1;
x_39 = lean::alloc_cnstr(6, 3, 1);
lean::cnstr_set(x_39, 0, x_15);
lean::cnstr_set(x_39, 1, x_22);
lean::cnstr_set(x_39, 2, x_7);
lean::cnstr_set_scalar(x_39, sizeof(void*)*3, x_38);
x_6 = x_11;
x_7 = x_39;
goto _start;
}
else
{
lean::dec(x_22);
lean::dec(x_15);
x_6 = x_11;
goto _start;
}
}
}
else
{
uint8 x_42; 
lean::dec(x_29);
x_42 = lean::nat_dec_eq(x_22, x_8);
if (x_42 == 0)
{
uint8 x_43; obj* x_44; 
x_43 = 1;
x_44 = lean::alloc_cnstr(6, 3, 1);
lean::cnstr_set(x_44, 0, x_15);
lean::cnstr_set(x_44, 1, x_22);
lean::cnstr_set(x_44, 2, x_7);
lean::cnstr_set_scalar(x_44, sizeof(void*)*3, x_43);
x_6 = x_11;
x_7 = x_44;
goto _start;
}
else
{
lean::dec(x_22);
lean::dec(x_15);
x_6 = x_11;
goto _start;
}
}
}
}
}
else
{
lean::dec(x_16);
lean::dec(x_15);
lean::dec(x_12);
x_6 = x_11;
goto _start;
}
}
}
else
{
lean::dec(x_12);
x_6 = x_11;
goto _start;
}
}
else
{
lean::dec(x_6);
return x_7;
}
}
}
obj* l___private_init_lean_compiler_ir_rc_7__addIncBeforeAux___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; 
x_6 = lean::array_get_size(x_3);
lean::inc(x_6);
x_7 = l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__6(x_1, x_2, x_3, x_5, x_6, x_6, x_4);
lean::dec(x_6);
return x_7;
}
}
obj* l___private_init_lean_compiler_ir_rc_8__addIncBefore(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l___private_init_lean_compiler_ir_rc_7__addIncBeforeAux___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__1(x_3, x_1, x_2, x_4, x_5);
return x_6;
}
}
obj* l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__3___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; 
x_7 = l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__3(x_1, x_2, x_3, x_4, x_5, x_6);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_7;
}
}
obj* l___private_init_lean_compiler_ir_rc_6__getNumConsumptions___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__2___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l___private_init_lean_compiler_ir_rc_6__getNumConsumptions___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__2(x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_4;
}
}
obj* l_Nat_anyAux___main___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__5___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; obj* x_7; 
x_6 = l_Nat_anyAux___main___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__5(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
x_7 = lean::box(x_6);
return x_7;
}
}
obj* l___private_init_lean_compiler_ir_rc_4__isBorrowParamAux___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__4___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = l___private_init_lean_compiler_ir_rc_4__isBorrowParamAux___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__4(x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
x_5 = lean::box(x_4);
return x_5;
}
}
obj* l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__6___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; 
x_8 = l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_8;
}
}
obj* l___private_init_lean_compiler_ir_rc_7__addIncBeforeAux___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l___private_init_lean_compiler_ir_rc_7__addIncBeforeAux___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__1(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_5);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_6;
}
}
obj* l___private_init_lean_compiler_ir_rc_8__addIncBefore___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l___private_init_lean_compiler_ir_rc_8__addIncBefore(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_5);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_6;
}
}
obj* l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_9__addDecAfterFullApp___spec__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; uint8 x_9; 
x_8 = lean::mk_nat_obj(0u);
x_9 = lean::nat_dec_eq(x_6, x_8);
if (x_9 == 0)
{
obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_10 = lean::mk_nat_obj(1u);
x_11 = lean::nat_sub(x_6, x_10);
x_12 = lean::nat_sub(x_5, x_6);
lean::dec(x_6);
x_13 = l_Lean_IR_Arg_Inhabited;
x_14 = lean::array_get(x_13, x_2, x_12);
if (lean::obj_tag(x_14) == 0)
{
obj* x_15; uint8 x_16; 
x_15 = lean::cnstr_get(x_14, 0);
lean::inc(x_15);
lean::dec(x_14);
x_16 = l_Lean_IR_ExplicitRC_mustConsume(x_1, x_15);
if (x_16 == 0)
{
lean::dec(x_15);
lean::dec(x_12);
x_6 = x_11;
goto _start;
}
else
{
uint8 x_18; 
x_18 = l___private_init_lean_compiler_ir_rc_3__isFirstOcc(x_2, x_12);
if (x_18 == 0)
{
lean::dec(x_15);
x_6 = x_11;
goto _start;
}
else
{
uint8 x_20; 
x_20 = l___private_init_lean_compiler_ir_rc_4__isBorrowParamAux___at___private_init_lean_compiler_ir_rc_5__isBorrowParam___spec__1(x_3, x_15, x_2);
if (x_20 == 0)
{
lean::dec(x_15);
x_6 = x_11;
goto _start;
}
else
{
obj* x_22; 
x_22 = l_RBNode_findCore___main___at___private_init_lean_compiler_ir_rc_2__addDecForAlt___spec__1(x_4, x_15);
if (lean::obj_tag(x_22) == 0)
{
uint8 x_23; obj* x_24; 
x_23 = 1;
x_24 = lean::alloc_cnstr(7, 3, 1);
lean::cnstr_set(x_24, 0, x_15);
lean::cnstr_set(x_24, 1, x_10);
lean::cnstr_set(x_24, 2, x_7);
lean::cnstr_set_scalar(x_24, sizeof(void*)*3, x_23);
x_6 = x_11;
x_7 = x_24;
goto _start;
}
else
{
lean::dec(x_22);
lean::dec(x_15);
x_6 = x_11;
goto _start;
}
}
}
}
}
else
{
lean::dec(x_12);
x_6 = x_11;
goto _start;
}
}
else
{
lean::dec(x_6);
return x_7;
}
}
}
obj* l___private_init_lean_compiler_ir_rc_9__addDecAfterFullApp(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; 
x_6 = lean::array_get_size(x_2);
lean::inc(x_6);
x_7 = l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_9__addDecAfterFullApp___spec__1(x_1, x_2, x_3, x_5, x_6, x_6, x_4);
lean::dec(x_6);
return x_7;
}
}
obj* l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_9__addDecAfterFullApp___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; 
x_8 = l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_9__addDecAfterFullApp___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_8;
}
}
obj* l___private_init_lean_compiler_ir_rc_9__addDecAfterFullApp___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l___private_init_lean_compiler_ir_rc_9__addDecAfterFullApp(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_5);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_6;
}
}
obj* l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__3(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; uint8 x_7; 
x_6 = lean::mk_nat_obj(0u);
x_7 = lean::nat_dec_eq(x_4, x_6);
if (x_7 == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_8 = lean::mk_nat_obj(1u);
x_9 = lean::nat_sub(x_4, x_8);
x_10 = lean::nat_sub(x_3, x_4);
lean::dec(x_4);
x_11 = l_Lean_IR_Arg_Inhabited;
x_12 = lean::array_get(x_11, x_2, x_10);
lean::dec(x_10);
if (lean::obj_tag(x_12) == 0)
{
obj* x_13; uint8 x_14; 
x_13 = lean::cnstr_get(x_12, 0);
lean::inc(x_13);
lean::dec(x_12);
x_14 = lean::nat_dec_eq(x_1, x_13);
lean::dec(x_13);
if (x_14 == 0)
{
x_4 = x_9;
goto _start;
}
else
{
obj* x_16; 
x_16 = lean::nat_add(x_5, x_8);
lean::dec(x_5);
x_4 = x_9;
x_5 = x_16;
goto _start;
}
}
else
{
x_4 = x_9;
goto _start;
}
}
else
{
lean::dec(x_4);
return x_5;
}
}
}
obj* l___private_init_lean_compiler_ir_rc_6__getNumConsumptions___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__2(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; 
x_3 = lean::array_get_size(x_2);
x_4 = lean::mk_nat_obj(0u);
lean::inc(x_3);
x_5 = l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__3(x_1, x_2, x_3, x_3, x_4);
lean::dec(x_3);
return x_5;
}
}
uint8 l_Nat_anyAux___main___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__5(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_2, x_3);
if (x_4 == 0)
{
obj* x_5; obj* x_6; 
x_5 = lean::mk_nat_obj(1u);
x_6 = lean::nat_sub(x_2, x_5);
lean::dec(x_2);
x_2 = x_6;
goto _start;
}
else
{
uint8 x_8; 
lean::dec(x_2);
x_8 = 0;
return x_8;
}
}
}
uint8 l___private_init_lean_compiler_ir_rc_4__isBorrowParamAux___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__4___rarg(obj* x_1) {
_start:
{
obj* x_2; uint8 x_3; 
x_2 = lean::array_get_size(x_1);
lean::inc(x_2);
x_3 = l_Nat_anyAux___main___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__5(x_2, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l___private_init_lean_compiler_ir_rc_4__isBorrowParamAux___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__4(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l___private_init_lean_compiler_ir_rc_4__isBorrowParamAux___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__4___rarg___boxed), 1, 0);
return x_2;
}
}
obj* l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__6(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; uint8 x_8; 
x_7 = lean::mk_nat_obj(0u);
x_8 = lean::nat_dec_eq(x_5, x_7);
if (x_8 == 0)
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_9 = lean::mk_nat_obj(1u);
x_10 = lean::nat_sub(x_5, x_9);
x_11 = lean::nat_sub(x_4, x_5);
lean::dec(x_5);
x_12 = l_Lean_IR_Arg_Inhabited;
x_13 = lean::array_get(x_12, x_2, x_11);
if (lean::obj_tag(x_13) == 0)
{
obj* x_14; obj* x_15; uint8 x_16; 
x_14 = lean::cnstr_get(x_13, 0);
lean::inc(x_14);
lean::dec(x_13);
x_15 = l_Lean_IR_ExplicitRC_getVarInfo(x_1, x_14);
x_16 = lean::cnstr_get_scalar<uint8>(x_15, 0);
if (x_16 == 0)
{
lean::dec(x_15);
lean::dec(x_14);
lean::dec(x_11);
x_5 = x_10;
goto _start;
}
else
{
uint8 x_18; 
x_18 = lean::cnstr_get_scalar<uint8>(x_15, 1);
if (x_18 == 0)
{
uint8 x_19; 
x_19 = l___private_init_lean_compiler_ir_rc_3__isFirstOcc(x_2, x_11);
if (x_19 == 0)
{
lean::dec(x_15);
lean::dec(x_14);
x_5 = x_10;
goto _start;
}
else
{
obj* x_21; uint8 x_22; 
x_21 = l___private_init_lean_compiler_ir_rc_6__getNumConsumptions___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__2(x_14, x_2);
x_22 = lean::cnstr_get_scalar<uint8>(x_15, 2);
lean::dec(x_15);
if (x_22 == 0)
{
uint8 x_23; 
x_23 = lean::nat_dec_eq(x_21, x_7);
if (x_23 == 0)
{
uint8 x_24; obj* x_25; 
x_24 = 1;
x_25 = lean::alloc_cnstr(6, 3, 1);
lean::cnstr_set(x_25, 0, x_14);
lean::cnstr_set(x_25, 1, x_21);
lean::cnstr_set(x_25, 2, x_6);
lean::cnstr_set_scalar(x_25, sizeof(void*)*3, x_24);
x_5 = x_10;
x_6 = x_25;
goto _start;
}
else
{
lean::dec(x_21);
lean::dec(x_14);
x_5 = x_10;
goto _start;
}
}
else
{
obj* x_28; 
x_28 = l_RBNode_findCore___main___at___private_init_lean_compiler_ir_rc_2__addDecForAlt___spec__1(x_3, x_14);
if (lean::obj_tag(x_28) == 0)
{
uint8 x_29; 
x_29 = l___private_init_lean_compiler_ir_rc_4__isBorrowParamAux___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__4___rarg(x_2);
if (x_29 == 0)
{
obj* x_30; uint8 x_31; 
x_30 = lean::nat_sub(x_21, x_9);
lean::dec(x_21);
x_31 = lean::nat_dec_eq(x_30, x_7);
if (x_31 == 0)
{
uint8 x_32; obj* x_33; 
x_32 = 1;
x_33 = lean::alloc_cnstr(6, 3, 1);
lean::cnstr_set(x_33, 0, x_14);
lean::cnstr_set(x_33, 1, x_30);
lean::cnstr_set(x_33, 2, x_6);
lean::cnstr_set_scalar(x_33, sizeof(void*)*3, x_32);
x_5 = x_10;
x_6 = x_33;
goto _start;
}
else
{
lean::dec(x_30);
lean::dec(x_14);
x_5 = x_10;
goto _start;
}
}
else
{
uint8 x_36; 
x_36 = lean::nat_dec_eq(x_21, x_7);
if (x_36 == 0)
{
uint8 x_37; obj* x_38; 
x_37 = 1;
x_38 = lean::alloc_cnstr(6, 3, 1);
lean::cnstr_set(x_38, 0, x_14);
lean::cnstr_set(x_38, 1, x_21);
lean::cnstr_set(x_38, 2, x_6);
lean::cnstr_set_scalar(x_38, sizeof(void*)*3, x_37);
x_5 = x_10;
x_6 = x_38;
goto _start;
}
else
{
lean::dec(x_21);
lean::dec(x_14);
x_5 = x_10;
goto _start;
}
}
}
else
{
uint8 x_41; 
lean::dec(x_28);
x_41 = lean::nat_dec_eq(x_21, x_7);
if (x_41 == 0)
{
uint8 x_42; obj* x_43; 
x_42 = 1;
x_43 = lean::alloc_cnstr(6, 3, 1);
lean::cnstr_set(x_43, 0, x_14);
lean::cnstr_set(x_43, 1, x_21);
lean::cnstr_set(x_43, 2, x_6);
lean::cnstr_set_scalar(x_43, sizeof(void*)*3, x_42);
x_5 = x_10;
x_6 = x_43;
goto _start;
}
else
{
lean::dec(x_21);
lean::dec(x_14);
x_5 = x_10;
goto _start;
}
}
}
}
}
else
{
lean::dec(x_15);
lean::dec(x_14);
lean::dec(x_11);
x_5 = x_10;
goto _start;
}
}
}
else
{
lean::dec(x_11);
x_5 = x_10;
goto _start;
}
}
else
{
lean::dec(x_5);
return x_6;
}
}
}
obj* l___private_init_lean_compiler_ir_rc_7__addIncBeforeAux___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; 
x_5 = lean::array_get_size(x_2);
lean::inc(x_5);
x_6 = l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__6(x_1, x_2, x_4, x_5, x_5, x_3);
lean::dec(x_5);
return x_6;
}
}
obj* l___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l___private_init_lean_compiler_ir_rc_7__addIncBeforeAux___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__1(x_1, x_2, x_3, x_4);
return x_5;
}
}
obj* l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__3___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__3(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_6;
}
}
obj* l___private_init_lean_compiler_ir_rc_6__getNumConsumptions___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__2___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l___private_init_lean_compiler_ir_rc_6__getNumConsumptions___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__2(x_1, x_2);
lean::dec(x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_Nat_anyAux___main___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__5___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; obj* x_4; 
x_3 = l_Nat_anyAux___main___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__5(x_1, x_2);
lean::dec(x_1);
x_4 = lean::box(x_3);
return x_4;
}
}
obj* l___private_init_lean_compiler_ir_rc_4__isBorrowParamAux___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__4___rarg___boxed(obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l___private_init_lean_compiler_ir_rc_4__isBorrowParamAux___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__4___rarg(x_1);
lean::dec(x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
obj* l___private_init_lean_compiler_ir_rc_4__isBorrowParamAux___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__4___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l___private_init_lean_compiler_ir_rc_4__isBorrowParamAux___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__4(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__6___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; 
x_7 = l_Nat_foldAux___main___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__6(x_1, x_2, x_3, x_4, x_5, x_6);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_7;
}
}
obj* l___private_init_lean_compiler_ir_rc_7__addIncBeforeAux___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l___private_init_lean_compiler_ir_rc_7__addIncBeforeAux___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__1(x_1, x_2, x_3, x_4);
lean::dec(x_4);
lean::dec(x_2);
lean::dec(x_1);
return x_5;
}
}
obj* l___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll(x_1, x_2, x_3, x_4);
lean::dec(x_4);
lean::dec(x_2);
lean::dec(x_1);
return x_5;
}
}
obj* l_Array_miterateAux___main___at___private_init_lean_compiler_ir_rc_11__addDecForDeadParams___spec__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; uint8 x_7; 
x_6 = lean::array_get_size(x_3);
x_7 = lean::nat_dec_lt(x_4, x_6);
lean::dec(x_6);
if (x_7 == 0)
{
lean::dec(x_4);
return x_5;
}
else
{
obj* x_8; obj* x_9; uint8 x_10; uint8 x_11; obj* x_12; obj* x_13; 
x_8 = lean::array_fget(x_3, x_4);
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
x_10 = lean::cnstr_get_scalar<uint8>(x_8, sizeof(void*)*1);
x_11 = lean::cnstr_get_scalar<uint8>(x_8, sizeof(void*)*1 + 1);
lean::dec(x_8);
x_12 = lean::mk_nat_obj(1u);
x_13 = lean::nat_add(x_4, x_12);
lean::dec(x_4);
if (x_10 == 0)
{
uint8 x_14; 
x_14 = l_Lean_IR_IRType_isObj___main(x_11);
if (x_14 == 0)
{
lean::dec(x_9);
x_4 = x_13;
goto _start;
}
else
{
obj* x_16; 
x_16 = l_RBNode_findCore___main___at___private_init_lean_compiler_ir_rc_2__addDecForAlt___spec__1(x_2, x_9);
if (lean::obj_tag(x_16) == 0)
{
uint8 x_17; obj* x_18; 
x_17 = 1;
x_18 = lean::alloc_cnstr(7, 3, 1);
lean::cnstr_set(x_18, 0, x_9);
lean::cnstr_set(x_18, 1, x_12);
lean::cnstr_set(x_18, 2, x_5);
lean::cnstr_set_scalar(x_18, sizeof(void*)*3, x_17);
x_4 = x_13;
x_5 = x_18;
goto _start;
}
else
{
lean::dec(x_16);
lean::dec(x_9);
x_4 = x_13;
goto _start;
}
}
}
else
{
lean::dec(x_9);
x_4 = x_13;
goto _start;
}
}
}
}
obj* l___private_init_lean_compiler_ir_rc_11__addDecForDeadParams(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; 
x_4 = lean::mk_nat_obj(0u);
x_5 = l_Array_miterateAux___main___at___private_init_lean_compiler_ir_rc_11__addDecForDeadParams___spec__1(x_1, x_3, x_1, x_4, x_2);
return x_5;
}
}
obj* l_Array_miterateAux___main___at___private_init_lean_compiler_ir_rc_11__addDecForDeadParams___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_Array_miterateAux___main___at___private_init_lean_compiler_ir_rc_11__addDecForDeadParams___spec__1(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_6;
}
}
obj* l___private_init_lean_compiler_ir_rc_11__addDecForDeadParams___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l___private_init_lean_compiler_ir_rc_11__addDecForDeadParams(x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_1);
return x_4;
}
}
uint8 l___private_init_lean_compiler_ir_rc_12__isPersistent___main(obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 6)
{
obj* x_2; uint8 x_3; 
x_2 = lean::cnstr_get(x_1, 1);
x_3 = l_Array_isEmpty___rarg(x_2);
return x_3;
}
else
{
uint8 x_4; 
x_4 = 0;
return x_4;
}
}
}
obj* l___private_init_lean_compiler_ir_rc_12__isPersistent___main___boxed(obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l___private_init_lean_compiler_ir_rc_12__isPersistent___main(x_1);
lean::dec(x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
uint8 l___private_init_lean_compiler_ir_rc_12__isPersistent(obj* x_1) {
_start:
{
uint8 x_2; 
x_2 = l___private_init_lean_compiler_ir_rc_12__isPersistent___main(x_1);
return x_2;
}
}
obj* l___private_init_lean_compiler_ir_rc_12__isPersistent___boxed(obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l___private_init_lean_compiler_ir_rc_12__isPersistent(x_1);
lean::dec(x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
uint8 l___private_init_lean_compiler_ir_rc_13__consumeExpr___main(obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 3)
{
obj* x_3; obj* x_4; 
x_3 = lean::cnstr_get(x_2, 1);
x_4 = l_RBNode_find___main___at_Lean_IR_ExplicitRC_getVarInfo___spec__1(x_1, x_3);
if (lean::obj_tag(x_4) == 0)
{
uint8 x_5; 
x_5 = 1;
return x_5;
}
else
{
obj* x_6; uint8 x_7; 
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
lean::dec(x_4);
x_7 = lean::cnstr_get_scalar<uint8>(x_6, 2);
lean::dec(x_6);
return x_7;
}
}
else
{
uint8 x_8; 
x_8 = 1;
return x_8;
}
}
}
obj* l___private_init_lean_compiler_ir_rc_13__consumeExpr___main___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; obj* x_4; 
x_3 = l___private_init_lean_compiler_ir_rc_13__consumeExpr___main(x_1, x_2);
lean::dec(x_2);
lean::dec(x_1);
x_4 = lean::box(x_3);
return x_4;
}
}
uint8 l___private_init_lean_compiler_ir_rc_13__consumeExpr(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; 
x_3 = l___private_init_lean_compiler_ir_rc_13__consumeExpr___main(x_1, x_2);
return x_3;
}
}
obj* l___private_init_lean_compiler_ir_rc_13__consumeExpr___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; obj* x_4; 
x_3 = l___private_init_lean_compiler_ir_rc_13__consumeExpr(x_1, x_2);
lean::dec(x_2);
lean::dec(x_1);
x_4 = lean::box(x_3);
return x_4;
}
}
uint8 l___private_init_lean_compiler_ir_rc_14__isScalarBoxedInTaggedPtr(obj* x_1) {
_start:
{
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_2; obj* x_3; obj* x_4; uint8 x_5; 
x_2 = lean::cnstr_get(x_1, 0);
x_3 = lean::cnstr_get(x_2, 2);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::nat_dec_eq(x_3, x_4);
if (x_5 == 0)
{
uint8 x_6; 
x_6 = 0;
return x_6;
}
else
{
obj* x_7; uint8 x_8; 
x_7 = lean::cnstr_get(x_2, 4);
x_8 = lean::nat_dec_eq(x_7, x_4);
if (x_8 == 0)
{
uint8 x_9; 
x_9 = 0;
return x_9;
}
else
{
obj* x_10; uint8 x_11; 
x_10 = lean::cnstr_get(x_2, 3);
x_11 = lean::nat_dec_eq(x_10, x_4);
return x_11;
}
}
}
case 11:
{
obj* x_12; 
x_12 = lean::cnstr_get(x_1, 0);
if (lean::obj_tag(x_12) == 0)
{
obj* x_13; obj* x_14; uint8 x_15; 
x_13 = lean::cnstr_get(x_12, 0);
x_14 = l_Lean_maxSmallNat;
x_15 = lean::nat_dec_le(x_13, x_14);
return x_15;
}
else
{
uint8 x_16; 
x_16 = 0;
return x_16;
}
}
default: 
{
uint8 x_17; 
x_17 = 0;
return x_17;
}
}
}
}
obj* l___private_init_lean_compiler_ir_rc_14__isScalarBoxedInTaggedPtr___boxed(obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l___private_init_lean_compiler_ir_rc_14__isScalarBoxedInTaggedPtr(x_1);
lean::dec(x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
obj* l___private_init_lean_compiler_ir_rc_15__updateVarInfo(obj* x_1, obj* x_2, uint8 x_3, obj* x_4) {
_start:
{
uint8 x_5; 
x_5 = !lean::is_exclusive(x_1);
if (x_5 == 0)
{
obj* x_6; uint8 x_7; uint8 x_8; uint8 x_9; 
x_6 = lean::cnstr_get(x_1, 2);
x_7 = l_Lean_IR_IRType_isObj___main(x_3);
x_8 = l___private_init_lean_compiler_ir_rc_12__isPersistent___main(x_4);
x_9 = l___private_init_lean_compiler_ir_rc_13__consumeExpr___main(x_6, x_4);
if (x_7 == 0)
{
uint8 x_10; obj* x_11; obj* x_12; 
x_10 = 0;
x_11 = lean::alloc_cnstr(0, 0, 3);
lean::cnstr_set_scalar(x_11, 0, x_10);
lean::cnstr_set_scalar(x_11, 1, x_8);
lean::cnstr_set_scalar(x_11, 2, x_9);
x_12 = l_RBNode_insert___at___private_init_lean_compiler_ir_rc_1__updateRefUsingCtorInfo___spec__1(x_6, x_2, x_11);
lean::cnstr_set(x_1, 2, x_12);
return x_1;
}
else
{
uint8 x_13; 
x_13 = l___private_init_lean_compiler_ir_rc_14__isScalarBoxedInTaggedPtr(x_4);
if (x_13 == 0)
{
obj* x_14; obj* x_15; 
x_14 = lean::alloc_cnstr(0, 0, 3);
lean::cnstr_set_scalar(x_14, 0, x_7);
lean::cnstr_set_scalar(x_14, 1, x_8);
lean::cnstr_set_scalar(x_14, 2, x_9);
x_15 = l_RBNode_insert___at___private_init_lean_compiler_ir_rc_1__updateRefUsingCtorInfo___spec__1(x_6, x_2, x_14);
lean::cnstr_set(x_1, 2, x_15);
return x_1;
}
else
{
uint8 x_16; obj* x_17; obj* x_18; 
x_16 = 0;
x_17 = lean::alloc_cnstr(0, 0, 3);
lean::cnstr_set_scalar(x_17, 0, x_16);
lean::cnstr_set_scalar(x_17, 1, x_8);
lean::cnstr_set_scalar(x_17, 2, x_9);
x_18 = l_RBNode_insert___at___private_init_lean_compiler_ir_rc_1__updateRefUsingCtorInfo___spec__1(x_6, x_2, x_17);
lean::cnstr_set(x_1, 2, x_18);
return x_1;
}
}
}
else
{
obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; uint8 x_24; uint8 x_25; uint8 x_26; 
x_19 = lean::cnstr_get(x_1, 0);
x_20 = lean::cnstr_get(x_1, 1);
x_21 = lean::cnstr_get(x_1, 2);
x_22 = lean::cnstr_get(x_1, 3);
x_23 = lean::cnstr_get(x_1, 4);
lean::inc(x_23);
lean::inc(x_22);
lean::inc(x_21);
lean::inc(x_20);
lean::inc(x_19);
lean::dec(x_1);
x_24 = l_Lean_IR_IRType_isObj___main(x_3);
x_25 = l___private_init_lean_compiler_ir_rc_12__isPersistent___main(x_4);
x_26 = l___private_init_lean_compiler_ir_rc_13__consumeExpr___main(x_21, x_4);
if (x_24 == 0)
{
uint8 x_27; obj* x_28; obj* x_29; obj* x_30; 
x_27 = 0;
x_28 = lean::alloc_cnstr(0, 0, 3);
lean::cnstr_set_scalar(x_28, 0, x_27);
lean::cnstr_set_scalar(x_28, 1, x_25);
lean::cnstr_set_scalar(x_28, 2, x_26);
x_29 = l_RBNode_insert___at___private_init_lean_compiler_ir_rc_1__updateRefUsingCtorInfo___spec__1(x_21, x_2, x_28);
x_30 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_30, 0, x_19);
lean::cnstr_set(x_30, 1, x_20);
lean::cnstr_set(x_30, 2, x_29);
lean::cnstr_set(x_30, 3, x_22);
lean::cnstr_set(x_30, 4, x_23);
return x_30;
}
else
{
uint8 x_31; 
x_31 = l___private_init_lean_compiler_ir_rc_14__isScalarBoxedInTaggedPtr(x_4);
if (x_31 == 0)
{
obj* x_32; obj* x_33; obj* x_34; 
x_32 = lean::alloc_cnstr(0, 0, 3);
lean::cnstr_set_scalar(x_32, 0, x_24);
lean::cnstr_set_scalar(x_32, 1, x_25);
lean::cnstr_set_scalar(x_32, 2, x_26);
x_33 = l_RBNode_insert___at___private_init_lean_compiler_ir_rc_1__updateRefUsingCtorInfo___spec__1(x_21, x_2, x_32);
x_34 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_34, 0, x_19);
lean::cnstr_set(x_34, 1, x_20);
lean::cnstr_set(x_34, 2, x_33);
lean::cnstr_set(x_34, 3, x_22);
lean::cnstr_set(x_34, 4, x_23);
return x_34;
}
else
{
uint8 x_35; obj* x_36; obj* x_37; obj* x_38; 
x_35 = 0;
x_36 = lean::alloc_cnstr(0, 0, 3);
lean::cnstr_set_scalar(x_36, 0, x_35);
lean::cnstr_set_scalar(x_36, 1, x_25);
lean::cnstr_set_scalar(x_36, 2, x_26);
x_37 = l_RBNode_insert___at___private_init_lean_compiler_ir_rc_1__updateRefUsingCtorInfo___spec__1(x_21, x_2, x_36);
x_38 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_38, 0, x_19);
lean::cnstr_set(x_38, 1, x_20);
lean::cnstr_set(x_38, 2, x_37);
lean::cnstr_set(x_38, 3, x_22);
lean::cnstr_set(x_38, 4, x_23);
return x_38;
}
}
}
}
}
obj* l___private_init_lean_compiler_ir_rc_15__updateVarInfo___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = lean::unbox(x_3);
lean::dec(x_3);
x_6 = l___private_init_lean_compiler_ir_rc_15__updateVarInfo(x_1, x_2, x_5, x_4);
lean::dec(x_4);
return x_6;
}
}
obj* l___private_init_lean_compiler_ir_rc_16__addDecIfNeeded(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; 
x_5 = l_Lean_IR_ExplicitRC_mustConsume(x_1, x_2);
if (x_5 == 0)
{
lean::dec(x_2);
return x_3;
}
else
{
obj* x_6; 
x_6 = l_RBNode_findCore___main___at___private_init_lean_compiler_ir_rc_2__addDecForAlt___spec__1(x_4, x_2);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; uint8 x_8; obj* x_9; 
x_7 = lean::mk_nat_obj(1u);
x_8 = 1;
x_9 = lean::alloc_cnstr(7, 3, 1);
lean::cnstr_set(x_9, 0, x_2);
lean::cnstr_set(x_9, 1, x_7);
lean::cnstr_set(x_9, 2, x_3);
lean::cnstr_set_scalar(x_9, sizeof(void*)*3, x_8);
return x_9;
}
else
{
lean::dec(x_6);
lean::dec(x_2);
return x_3;
}
}
}
}
obj* l___private_init_lean_compiler_ir_rc_16__addDecIfNeeded___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l___private_init_lean_compiler_ir_rc_16__addDecIfNeeded(x_1, x_2, x_3, x_4);
lean::dec(x_4);
lean::dec(x_1);
return x_5;
}
}
obj* l___private_init_lean_compiler_ir_rc_17__processVDecl(obj* x_1, obj* x_2, uint8 x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; 
lean::inc(x_6);
lean::inc(x_4);
x_7 = l_Lean_IR_LiveVars_collectExpr___main(x_4, x_6);
switch (lean::obj_tag(x_4)) {
case 0:
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_8 = lean::cnstr_get(x_4, 1);
lean::inc(x_8);
lean::inc(x_2);
x_9 = lean::alloc_cnstr(0, 3, 1);
lean::cnstr_set(x_9, 0, x_2);
lean::cnstr_set(x_9, 1, x_4);
lean::cnstr_set(x_9, 2, x_5);
lean::cnstr_set_scalar(x_9, sizeof(void*)*3, x_3);
x_10 = l___private_init_lean_compiler_ir_rc_7__addIncBeforeAux___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__1(x_1, x_8, x_9, x_6);
lean::dec(x_6);
lean::dec(x_8);
x_11 = l_RBNode_erase___at___private_init_lean_compiler_ir_livevars_8__bindVar___spec__1(x_2, x_7);
lean::dec(x_2);
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_10);
lean::cnstr_set(x_12, 1, x_11);
return x_12;
}
case 2:
{
obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; 
x_13 = lean::cnstr_get(x_4, 2);
lean::inc(x_13);
lean::inc(x_2);
x_14 = lean::alloc_cnstr(0, 3, 1);
lean::cnstr_set(x_14, 0, x_2);
lean::cnstr_set(x_14, 1, x_4);
lean::cnstr_set(x_14, 2, x_5);
lean::cnstr_set_scalar(x_14, sizeof(void*)*3, x_3);
x_15 = l___private_init_lean_compiler_ir_rc_7__addIncBeforeAux___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__1(x_1, x_13, x_14, x_6);
lean::dec(x_6);
lean::dec(x_13);
x_16 = l_RBNode_erase___at___private_init_lean_compiler_ir_livevars_8__bindVar___spec__1(x_2, x_7);
lean::dec(x_2);
x_17 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_17, 0, x_15);
lean::cnstr_set(x_17, 1, x_16);
return x_17;
}
case 3:
{
obj* x_18; obj* x_19; obj* x_20; uint8 x_21; 
x_18 = lean::cnstr_get(x_4, 1);
lean::inc(x_18);
lean::inc(x_18);
x_19 = l___private_init_lean_compiler_ir_rc_16__addDecIfNeeded(x_1, x_18, x_5, x_6);
lean::dec(x_6);
x_20 = l_Lean_IR_ExplicitRC_getVarInfo(x_1, x_18);
lean::dec(x_18);
x_21 = lean::cnstr_get_scalar<uint8>(x_20, 2);
lean::dec(x_20);
if (x_21 == 0)
{
obj* x_22; obj* x_23; obj* x_24; 
lean::inc(x_2);
x_22 = lean::alloc_cnstr(0, 3, 1);
lean::cnstr_set(x_22, 0, x_2);
lean::cnstr_set(x_22, 1, x_4);
lean::cnstr_set(x_22, 2, x_19);
lean::cnstr_set_scalar(x_22, sizeof(void*)*3, x_3);
x_23 = l_RBNode_erase___at___private_init_lean_compiler_ir_livevars_8__bindVar___spec__1(x_2, x_7);
lean::dec(x_2);
x_24 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_24, 0, x_22);
lean::cnstr_set(x_24, 1, x_23);
return x_24;
}
else
{
obj* x_25; uint8 x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_25 = lean::mk_nat_obj(1u);
x_26 = 1;
lean::inc(x_2);
x_27 = lean::alloc_cnstr(6, 3, 1);
lean::cnstr_set(x_27, 0, x_2);
lean::cnstr_set(x_27, 1, x_25);
lean::cnstr_set(x_27, 2, x_19);
lean::cnstr_set_scalar(x_27, sizeof(void*)*3, x_26);
lean::inc(x_2);
x_28 = lean::alloc_cnstr(0, 3, 1);
lean::cnstr_set(x_28, 0, x_2);
lean::cnstr_set(x_28, 1, x_4);
lean::cnstr_set(x_28, 2, x_27);
lean::cnstr_set_scalar(x_28, sizeof(void*)*3, x_3);
x_29 = l_RBNode_erase___at___private_init_lean_compiler_ir_livevars_8__bindVar___spec__1(x_2, x_7);
lean::dec(x_2);
x_30 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_30, 0, x_28);
lean::cnstr_set(x_30, 1, x_29);
return x_30;
}
}
case 4:
{
obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; 
x_31 = lean::cnstr_get(x_4, 1);
lean::inc(x_31);
x_32 = l___private_init_lean_compiler_ir_rc_16__addDecIfNeeded(x_1, x_31, x_5, x_6);
lean::dec(x_6);
lean::inc(x_2);
x_33 = lean::alloc_cnstr(0, 3, 1);
lean::cnstr_set(x_33, 0, x_2);
lean::cnstr_set(x_33, 1, x_4);
lean::cnstr_set(x_33, 2, x_32);
lean::cnstr_set_scalar(x_33, sizeof(void*)*3, x_3);
x_34 = l_RBNode_erase___at___private_init_lean_compiler_ir_livevars_8__bindVar___spec__1(x_2, x_7);
lean::dec(x_2);
x_35 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_35, 0, x_33);
lean::cnstr_set(x_35, 1, x_34);
return x_35;
}
case 5:
{
obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; 
x_36 = lean::cnstr_get(x_4, 2);
lean::inc(x_36);
x_37 = l___private_init_lean_compiler_ir_rc_16__addDecIfNeeded(x_1, x_36, x_5, x_6);
lean::dec(x_6);
lean::inc(x_2);
x_38 = lean::alloc_cnstr(0, 3, 1);
lean::cnstr_set(x_38, 0, x_2);
lean::cnstr_set(x_38, 1, x_4);
lean::cnstr_set(x_38, 2, x_37);
lean::cnstr_set_scalar(x_38, sizeof(void*)*3, x_3);
x_39 = l_RBNode_erase___at___private_init_lean_compiler_ir_livevars_8__bindVar___spec__1(x_2, x_7);
lean::dec(x_2);
x_40 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_40, 0, x_38);
lean::cnstr_set(x_40, 1, x_39);
return x_40;
}
case 6:
{
obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; 
x_41 = lean::cnstr_get(x_4, 0);
lean::inc(x_41);
x_42 = lean::cnstr_get(x_4, 1);
lean::inc(x_42);
x_43 = l_Lean_IR_ExplicitRC_getDecl(x_1, x_41);
lean::dec(x_41);
x_44 = l_Lean_IR_Decl_params___main(x_43);
lean::dec(x_43);
x_45 = l___private_init_lean_compiler_ir_rc_9__addDecAfterFullApp(x_1, x_42, x_44, x_5, x_6);
lean::inc(x_2);
x_46 = lean::alloc_cnstr(0, 3, 1);
lean::cnstr_set(x_46, 0, x_2);
lean::cnstr_set(x_46, 1, x_4);
lean::cnstr_set(x_46, 2, x_45);
lean::cnstr_set_scalar(x_46, sizeof(void*)*3, x_3);
x_47 = l___private_init_lean_compiler_ir_rc_7__addIncBeforeAux___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__1(x_44, x_1, x_42, x_46, x_6);
lean::dec(x_6);
lean::dec(x_42);
lean::dec(x_44);
x_48 = l_RBNode_erase___at___private_init_lean_compiler_ir_livevars_8__bindVar___spec__1(x_2, x_7);
lean::dec(x_2);
x_49 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_49, 0, x_47);
lean::cnstr_set(x_49, 1, x_48);
return x_49;
}
case 7:
{
obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; 
x_50 = lean::cnstr_get(x_4, 1);
lean::inc(x_50);
lean::inc(x_2);
x_51 = lean::alloc_cnstr(0, 3, 1);
lean::cnstr_set(x_51, 0, x_2);
lean::cnstr_set(x_51, 1, x_4);
lean::cnstr_set(x_51, 2, x_5);
lean::cnstr_set_scalar(x_51, sizeof(void*)*3, x_3);
x_52 = l___private_init_lean_compiler_ir_rc_7__addIncBeforeAux___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__1(x_1, x_50, x_51, x_6);
lean::dec(x_6);
lean::dec(x_50);
x_53 = l_RBNode_erase___at___private_init_lean_compiler_ir_livevars_8__bindVar___spec__1(x_2, x_7);
lean::dec(x_2);
x_54 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_54, 0, x_52);
lean::cnstr_set(x_54, 1, x_53);
return x_54;
}
case 8:
{
obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; 
x_55 = lean::cnstr_get(x_4, 0);
lean::inc(x_55);
x_56 = lean::cnstr_get(x_4, 1);
lean::inc(x_56);
x_57 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_57, 0, x_55);
x_58 = lean::array_push(x_56, x_57);
lean::inc(x_2);
x_59 = lean::alloc_cnstr(0, 3, 1);
lean::cnstr_set(x_59, 0, x_2);
lean::cnstr_set(x_59, 1, x_4);
lean::cnstr_set(x_59, 2, x_5);
lean::cnstr_set_scalar(x_59, sizeof(void*)*3, x_3);
x_60 = l___private_init_lean_compiler_ir_rc_7__addIncBeforeAux___at___private_init_lean_compiler_ir_rc_10__addIncBeforeConsumeAll___spec__1(x_1, x_58, x_59, x_6);
lean::dec(x_6);
lean::dec(x_58);
x_61 = l_RBNode_erase___at___private_init_lean_compiler_ir_livevars_8__bindVar___spec__1(x_2, x_7);
lean::dec(x_2);
x_62 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_62, 0, x_60);
lean::cnstr_set(x_62, 1, x_61);
return x_62;
}
case 10:
{
obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; 
x_63 = lean::cnstr_get(x_4, 0);
lean::inc(x_63);
x_64 = l___private_init_lean_compiler_ir_rc_16__addDecIfNeeded(x_1, x_63, x_5, x_6);
lean::dec(x_6);
lean::inc(x_2);
x_65 = lean::alloc_cnstr(0, 3, 1);
lean::cnstr_set(x_65, 0, x_2);
lean::cnstr_set(x_65, 1, x_4);
lean::cnstr_set(x_65, 2, x_64);
lean::cnstr_set_scalar(x_65, sizeof(void*)*3, x_3);
x_66 = l_RBNode_erase___at___private_init_lean_compiler_ir_livevars_8__bindVar___spec__1(x_2, x_7);
lean::dec(x_2);
x_67 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_67, 0, x_65);
lean::cnstr_set(x_67, 1, x_66);
return x_67;
}
default: 
{
obj* x_68; obj* x_69; obj* x_70; 
lean::dec(x_6);
lean::inc(x_2);
x_68 = lean::alloc_cnstr(0, 3, 1);
lean::cnstr_set(x_68, 0, x_2);
lean::cnstr_set(x_68, 1, x_4);
lean::cnstr_set(x_68, 2, x_5);
lean::cnstr_set_scalar(x_68, sizeof(void*)*3, x_3);
x_69 = l_RBNode_erase___at___private_init_lean_compiler_ir_livevars_8__bindVar___spec__1(x_2, x_7);
lean::dec(x_2);
x_70 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_70, 0, x_68);
lean::cnstr_set(x_70, 1, x_69);
return x_70;
}
}
}
}
obj* l___private_init_lean_compiler_ir_rc_17__processVDecl___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
uint8 x_7; obj* x_8; 
x_7 = lean::unbox(x_3);
lean::dec(x_3);
x_8 = l___private_init_lean_compiler_ir_rc_17__processVDecl(x_1, x_2, x_7, x_4, x_5, x_6);
lean::dec(x_1);
return x_8;
}
}
obj* l_Array_miterateAux___main___at_Lean_IR_ExplicitRC_updateVarInfoWithParams___spec__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; uint8 x_6; 
x_5 = lean::array_get_size(x_2);
x_6 = lean::nat_dec_lt(x_3, x_5);
lean::dec(x_5);
if (x_6 == 0)
{
lean::dec(x_3);
return x_4;
}
else
{
obj* x_7; obj* x_8; uint8 x_9; uint8 x_10; uint8 x_11; obj* x_12; obj* x_13; 
x_7 = lean::array_fget(x_2, x_3);
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
x_9 = lean::cnstr_get_scalar<uint8>(x_7, sizeof(void*)*1 + 1);
x_10 = l_Lean_IR_IRType_isObj___main(x_9);
x_11 = lean::cnstr_get_scalar<uint8>(x_7, sizeof(void*)*1);
lean::dec(x_7);
x_12 = lean::mk_nat_obj(1u);
x_13 = lean::nat_add(x_3, x_12);
lean::dec(x_3);
if (x_11 == 0)
{
uint8 x_14; uint8 x_15; obj* x_16; obj* x_17; 
x_14 = 0;
x_15 = 1;
x_16 = lean::alloc_cnstr(0, 0, 3);
lean::cnstr_set_scalar(x_16, 0, x_10);
lean::cnstr_set_scalar(x_16, 1, x_14);
lean::cnstr_set_scalar(x_16, 2, x_15);
x_17 = l_RBNode_insert___at___private_init_lean_compiler_ir_rc_1__updateRefUsingCtorInfo___spec__1(x_4, x_8, x_16);
x_3 = x_13;
x_4 = x_17;
goto _start;
}
else
{
uint8 x_19; obj* x_20; obj* x_21; 
x_19 = 0;
x_20 = lean::alloc_cnstr(0, 0, 3);
lean::cnstr_set_scalar(x_20, 0, x_10);
lean::cnstr_set_scalar(x_20, 1, x_19);
lean::cnstr_set_scalar(x_20, 2, x_19);
x_21 = l_RBNode_insert___at___private_init_lean_compiler_ir_rc_1__updateRefUsingCtorInfo___spec__1(x_4, x_8, x_20);
x_3 = x_13;
x_4 = x_21;
goto _start;
}
}
}
}
obj* l_Lean_IR_ExplicitRC_updateVarInfoWithParams(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; 
x_3 = !lean::is_exclusive(x_1);
if (x_3 == 0)
{
obj* x_4; obj* x_5; obj* x_6; 
x_4 = lean::cnstr_get(x_1, 2);
x_5 = lean::mk_nat_obj(0u);
x_6 = l_Array_miterateAux___main___at_Lean_IR_ExplicitRC_updateVarInfoWithParams___spec__1(x_2, x_2, x_5, x_4);
lean::cnstr_set(x_1, 2, x_6);
return x_1;
}
else
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_7 = lean::cnstr_get(x_1, 0);
x_8 = lean::cnstr_get(x_1, 1);
x_9 = lean::cnstr_get(x_1, 2);
x_10 = lean::cnstr_get(x_1, 3);
x_11 = lean::cnstr_get(x_1, 4);
lean::inc(x_11);
lean::inc(x_10);
lean::inc(x_9);
lean::inc(x_8);
lean::inc(x_7);
lean::dec(x_1);
x_12 = lean::mk_nat_obj(0u);
x_13 = l_Array_miterateAux___main___at_Lean_IR_ExplicitRC_updateVarInfoWithParams___spec__1(x_2, x_2, x_12, x_9);
x_14 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_14, 0, x_7);
lean::cnstr_set(x_14, 1, x_8);
lean::cnstr_set(x_14, 2, x_13);
lean::cnstr_set(x_14, 3, x_10);
lean::cnstr_set(x_14, 4, x_11);
return x_14;
}
}
}
obj* l_Array_miterateAux___main___at_Lean_IR_ExplicitRC_updateVarInfoWithParams___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Array_miterateAux___main___at_Lean_IR_ExplicitRC_updateVarInfoWithParams___spec__1(x_1, x_2, x_3, x_4);
lean::dec(x_2);
lean::dec(x_1);
return x_5;
}
}
obj* l_Lean_IR_ExplicitRC_updateVarInfoWithParams___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_IR_ExplicitRC_updateVarInfoWithParams(x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l_Array_ummapAux___main___at_Lean_IR_ExplicitRC_visitFnBody___main___spec__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; uint8 x_7; 
x_6 = lean::array_get_size(x_5);
x_7 = lean::nat_dec_lt(x_4, x_6);
lean::dec(x_6);
if (x_7 == 0)
{
obj* x_8; obj* x_9; 
lean::dec(x_4);
lean::dec(x_2);
lean::dec(x_1);
x_8 = l_Array_empty___closed__1;
x_9 = x_5;
return x_9;
}
else
{
obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_10 = lean::array_fget(x_5, x_4);
x_11 = lean::box(0);
lean::inc(x_10);
x_12 = x_11;
x_13 = lean::array_fset(x_5, x_4, x_12);
x_14 = lean::mk_nat_obj(1u);
x_15 = lean::nat_add(x_4, x_14);
if (lean::obj_tag(x_10) == 0)
{
obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
x_16 = lean::cnstr_get(x_10, 0);
lean::inc(x_16);
x_17 = lean::cnstr_get(x_10, 1);
lean::inc(x_17);
lean::inc(x_2);
lean::inc(x_1);
x_18 = l___private_init_lean_compiler_ir_rc_1__updateRefUsingCtorInfo(x_1, x_2, x_16);
lean::inc(x_18);
x_19 = l_Lean_IR_ExplicitRC_visitFnBody___main(x_17, x_18);
x_20 = lean::cnstr_get(x_19, 0);
lean::inc(x_20);
x_21 = lean::cnstr_get(x_19, 1);
lean::inc(x_21);
lean::dec(x_19);
x_22 = l___private_init_lean_compiler_ir_livevars_6__accumulate___closed__1;
x_23 = l_RBNode_fold___main___at___private_init_lean_compiler_ir_rc_2__addDecForAlt___spec__2(x_18, x_21, x_22, x_20, x_3);
lean::dec(x_21);
lean::dec(x_18);
x_24 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_24, 0, x_16);
lean::cnstr_set(x_24, 1, x_23);
x_25 = x_24;
x_26 = lean::array_fset(x_13, x_4, x_25);
lean::dec(x_4);
x_4 = x_15;
x_5 = x_26;
goto _start;
}
else
{
obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; 
x_28 = lean::cnstr_get(x_10, 0);
lean::inc(x_28);
lean::inc(x_1);
x_29 = l_Lean_IR_ExplicitRC_visitFnBody___main(x_28, x_1);
x_30 = lean::cnstr_get(x_29, 0);
lean::inc(x_30);
x_31 = lean::cnstr_get(x_29, 1);
lean::inc(x_31);
lean::dec(x_29);
x_32 = l___private_init_lean_compiler_ir_livevars_6__accumulate___closed__1;
x_33 = l_RBNode_fold___main___at___private_init_lean_compiler_ir_rc_2__addDecForAlt___spec__2(x_1, x_31, x_32, x_30, x_3);
lean::dec(x_31);
x_34 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_34, 0, x_33);
x_35 = x_34;
x_36 = lean::array_fset(x_13, x_4, x_35);
lean::dec(x_4);
x_4 = x_15;
x_5 = x_36;
goto _start;
}
}
}
}
obj* l_Lean_IR_ExplicitRC_visitFnBody___main(obj* x_1, obj* x_2) {
_start:
{
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_3; uint8 x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_4 = lean::cnstr_get_scalar<uint8>(x_1, sizeof(void*)*3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_1, 2);
lean::inc(x_6);
lean::dec(x_1);
lean::inc(x_3);
x_7 = l___private_init_lean_compiler_ir_rc_15__updateVarInfo(x_2, x_3, x_4, x_5);
lean::inc(x_7);
x_8 = l_Lean_IR_ExplicitRC_visitFnBody___main(x_6, x_7);
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
x_10 = lean::cnstr_get(x_8, 1);
lean::inc(x_10);
lean::dec(x_8);
x_11 = l___private_init_lean_compiler_ir_rc_17__processVDecl(x_7, x_3, x_4, x_5, x_9, x_10);
lean::dec(x_7);
return x_11;
}
case 1:
{
uint8 x_12; 
x_12 = !lean::is_exclusive(x_1);
if (x_12 == 0)
{
obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; uint8 x_23; 
x_13 = lean::cnstr_get(x_1, 0);
x_14 = lean::cnstr_get(x_1, 1);
x_15 = lean::cnstr_get(x_1, 2);
x_16 = lean::cnstr_get(x_1, 3);
lean::inc(x_2);
x_17 = l_Lean_IR_ExplicitRC_updateVarInfoWithParams(x_2, x_14);
x_18 = l_Lean_IR_ExplicitRC_visitFnBody___main(x_15, x_17);
x_19 = lean::cnstr_get(x_18, 0);
lean::inc(x_19);
x_20 = lean::cnstr_get(x_18, 1);
lean::inc(x_20);
lean::dec(x_18);
x_21 = lean::mk_nat_obj(0u);
x_22 = l_Array_miterateAux___main___at___private_init_lean_compiler_ir_rc_11__addDecForDeadParams___spec__1(x_14, x_20, x_14, x_21, x_19);
lean::dec(x_20);
x_23 = !lean::is_exclusive(x_2);
if (x_23 == 0)
{
obj* x_24; obj* x_25; obj* x_26; uint8 x_27; 
x_24 = lean::cnstr_get(x_2, 3);
lean::inc(x_22);
lean::inc(x_13);
x_25 = l_Lean_IR_LiveVars_updateJPLiveVarMap(x_13, x_14, x_22, x_24);
lean::cnstr_set(x_2, 3, x_25);
x_26 = l_Lean_IR_ExplicitRC_visitFnBody___main(x_16, x_2);
x_27 = !lean::is_exclusive(x_26);
if (x_27 == 0)
{
obj* x_28; 
x_28 = lean::cnstr_get(x_26, 0);
lean::cnstr_set(x_1, 3, x_28);
lean::cnstr_set(x_1, 2, x_22);
lean::cnstr_set(x_26, 0, x_1);
return x_26;
}
else
{
obj* x_29; obj* x_30; obj* x_31; 
x_29 = lean::cnstr_get(x_26, 0);
x_30 = lean::cnstr_get(x_26, 1);
lean::inc(x_30);
lean::inc(x_29);
lean::dec(x_26);
lean::cnstr_set(x_1, 3, x_29);
lean::cnstr_set(x_1, 2, x_22);
x_31 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_31, 0, x_1);
lean::cnstr_set(x_31, 1, x_30);
return x_31;
}
}
else
{
obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; 
x_32 = lean::cnstr_get(x_2, 0);
x_33 = lean::cnstr_get(x_2, 1);
x_34 = lean::cnstr_get(x_2, 2);
x_35 = lean::cnstr_get(x_2, 3);
x_36 = lean::cnstr_get(x_2, 4);
lean::inc(x_36);
lean::inc(x_35);
lean::inc(x_34);
lean::inc(x_33);
lean::inc(x_32);
lean::dec(x_2);
lean::inc(x_22);
lean::inc(x_13);
x_37 = l_Lean_IR_LiveVars_updateJPLiveVarMap(x_13, x_14, x_22, x_35);
x_38 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_38, 0, x_32);
lean::cnstr_set(x_38, 1, x_33);
lean::cnstr_set(x_38, 2, x_34);
lean::cnstr_set(x_38, 3, x_37);
lean::cnstr_set(x_38, 4, x_36);
x_39 = l_Lean_IR_ExplicitRC_visitFnBody___main(x_16, x_38);
x_40 = lean::cnstr_get(x_39, 0);
lean::inc(x_40);
x_41 = lean::cnstr_get(x_39, 1);
lean::inc(x_41);
if (lean::is_exclusive(x_39)) {
 lean::cnstr_release(x_39, 0);
 lean::cnstr_release(x_39, 1);
 x_42 = x_39;
} else {
 lean::dec_ref(x_39);
 x_42 = lean::box(0);
}
lean::cnstr_set(x_1, 3, x_40);
lean::cnstr_set(x_1, 2, x_22);
if (lean::is_scalar(x_42)) {
 x_43 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_43 = x_42;
}
lean::cnstr_set(x_43, 0, x_1);
lean::cnstr_set(x_43, 1, x_41);
return x_43;
}
}
else
{
obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; 
x_44 = lean::cnstr_get(x_1, 0);
x_45 = lean::cnstr_get(x_1, 1);
x_46 = lean::cnstr_get(x_1, 2);
x_47 = lean::cnstr_get(x_1, 3);
lean::inc(x_47);
lean::inc(x_46);
lean::inc(x_45);
lean::inc(x_44);
lean::dec(x_1);
lean::inc(x_2);
x_48 = l_Lean_IR_ExplicitRC_updateVarInfoWithParams(x_2, x_45);
x_49 = l_Lean_IR_ExplicitRC_visitFnBody___main(x_46, x_48);
x_50 = lean::cnstr_get(x_49, 0);
lean::inc(x_50);
x_51 = lean::cnstr_get(x_49, 1);
lean::inc(x_51);
lean::dec(x_49);
x_52 = lean::mk_nat_obj(0u);
x_53 = l_Array_miterateAux___main___at___private_init_lean_compiler_ir_rc_11__addDecForDeadParams___spec__1(x_45, x_51, x_45, x_52, x_50);
lean::dec(x_51);
x_54 = lean::cnstr_get(x_2, 0);
lean::inc(x_54);
x_55 = lean::cnstr_get(x_2, 1);
lean::inc(x_55);
x_56 = lean::cnstr_get(x_2, 2);
lean::inc(x_56);
x_57 = lean::cnstr_get(x_2, 3);
lean::inc(x_57);
x_58 = lean::cnstr_get(x_2, 4);
lean::inc(x_58);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_release(x_2, 0);
 lean::cnstr_release(x_2, 1);
 lean::cnstr_release(x_2, 2);
 lean::cnstr_release(x_2, 3);
 lean::cnstr_release(x_2, 4);
 x_59 = x_2;
} else {
 lean::dec_ref(x_2);
 x_59 = lean::box(0);
}
lean::inc(x_53);
lean::inc(x_44);
x_60 = l_Lean_IR_LiveVars_updateJPLiveVarMap(x_44, x_45, x_53, x_57);
if (lean::is_scalar(x_59)) {
 x_61 = lean::alloc_cnstr(0, 5, 0);
} else {
 x_61 = x_59;
}
lean::cnstr_set(x_61, 0, x_54);
lean::cnstr_set(x_61, 1, x_55);
lean::cnstr_set(x_61, 2, x_56);
lean::cnstr_set(x_61, 3, x_60);
lean::cnstr_set(x_61, 4, x_58);
x_62 = l_Lean_IR_ExplicitRC_visitFnBody___main(x_47, x_61);
x_63 = lean::cnstr_get(x_62, 0);
lean::inc(x_63);
x_64 = lean::cnstr_get(x_62, 1);
lean::inc(x_64);
if (lean::is_exclusive(x_62)) {
 lean::cnstr_release(x_62, 0);
 lean::cnstr_release(x_62, 1);
 x_65 = x_62;
} else {
 lean::dec_ref(x_62);
 x_65 = lean::box(0);
}
x_66 = lean::alloc_cnstr(1, 4, 0);
lean::cnstr_set(x_66, 0, x_44);
lean::cnstr_set(x_66, 1, x_45);
lean::cnstr_set(x_66, 2, x_53);
lean::cnstr_set(x_66, 3, x_63);
if (lean::is_scalar(x_65)) {
 x_67 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_67 = x_65;
}
lean::cnstr_set(x_67, 0, x_66);
lean::cnstr_set(x_67, 1, x_64);
return x_67;
}
}
case 4:
{
uint8 x_68; 
x_68 = !lean::is_exclusive(x_1);
if (x_68 == 0)
{
obj* x_69; obj* x_70; obj* x_71; uint8 x_72; 
x_69 = lean::cnstr_get(x_1, 0);
x_70 = lean::cnstr_get(x_1, 3);
x_71 = l_Lean_IR_ExplicitRC_visitFnBody___main(x_70, x_2);
x_72 = !lean::is_exclusive(x_71);
if (x_72 == 0)
{
obj* x_73; obj* x_74; obj* x_75; obj* x_76; 
x_73 = lean::cnstr_get(x_71, 0);
x_74 = lean::cnstr_get(x_71, 1);
lean::inc(x_69);
lean::cnstr_set(x_1, 3, x_73);
x_75 = lean::box(0);
x_76 = l_RBNode_insert___at___private_init_lean_compiler_ir_livevars_2__collectVar___spec__1(x_74, x_69, x_75);
lean::cnstr_set(x_71, 1, x_76);
lean::cnstr_set(x_71, 0, x_1);
return x_71;
}
else
{
obj* x_77; obj* x_78; obj* x_79; obj* x_80; obj* x_81; 
x_77 = lean::cnstr_get(x_71, 0);
x_78 = lean::cnstr_get(x_71, 1);
lean::inc(x_78);
lean::inc(x_77);
lean::dec(x_71);
lean::inc(x_69);
lean::cnstr_set(x_1, 3, x_77);
x_79 = lean::box(0);
x_80 = l_RBNode_insert___at___private_init_lean_compiler_ir_livevars_2__collectVar___spec__1(x_78, x_69, x_79);
x_81 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_81, 0, x_1);
lean::cnstr_set(x_81, 1, x_80);
return x_81;
}
}
else
{
obj* x_82; obj* x_83; obj* x_84; obj* x_85; obj* x_86; obj* x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; obj* x_93; 
x_82 = lean::cnstr_get(x_1, 0);
x_83 = lean::cnstr_get(x_1, 1);
x_84 = lean::cnstr_get(x_1, 2);
x_85 = lean::cnstr_get(x_1, 3);
lean::inc(x_85);
lean::inc(x_84);
lean::inc(x_83);
lean::inc(x_82);
lean::dec(x_1);
x_86 = l_Lean_IR_ExplicitRC_visitFnBody___main(x_85, x_2);
x_87 = lean::cnstr_get(x_86, 0);
lean::inc(x_87);
x_88 = lean::cnstr_get(x_86, 1);
lean::inc(x_88);
if (lean::is_exclusive(x_86)) {
 lean::cnstr_release(x_86, 0);
 lean::cnstr_release(x_86, 1);
 x_89 = x_86;
} else {
 lean::dec_ref(x_86);
 x_89 = lean::box(0);
}
lean::inc(x_82);
x_90 = lean::alloc_cnstr(4, 4, 0);
lean::cnstr_set(x_90, 0, x_82);
lean::cnstr_set(x_90, 1, x_83);
lean::cnstr_set(x_90, 2, x_84);
lean::cnstr_set(x_90, 3, x_87);
x_91 = lean::box(0);
x_92 = l_RBNode_insert___at___private_init_lean_compiler_ir_livevars_2__collectVar___spec__1(x_88, x_82, x_91);
if (lean::is_scalar(x_89)) {
 x_93 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_93 = x_89;
}
lean::cnstr_set(x_93, 0, x_90);
lean::cnstr_set(x_93, 1, x_92);
return x_93;
}
}
case 5:
{
uint8 x_94; 
x_94 = !lean::is_exclusive(x_1);
if (x_94 == 0)
{
obj* x_95; obj* x_96; obj* x_97; uint8 x_98; 
x_95 = lean::cnstr_get(x_1, 0);
x_96 = lean::cnstr_get(x_1, 4);
x_97 = l_Lean_IR_ExplicitRC_visitFnBody___main(x_96, x_2);
x_98 = !lean::is_exclusive(x_97);
if (x_98 == 0)
{
obj* x_99; obj* x_100; obj* x_101; obj* x_102; 
x_99 = lean::cnstr_get(x_97, 0);
x_100 = lean::cnstr_get(x_97, 1);
lean::inc(x_95);
lean::cnstr_set(x_1, 4, x_99);
x_101 = lean::box(0);
x_102 = l_RBNode_insert___at___private_init_lean_compiler_ir_livevars_2__collectVar___spec__1(x_100, x_95, x_101);
lean::cnstr_set(x_97, 1, x_102);
lean::cnstr_set(x_97, 0, x_1);
return x_97;
}
else
{
obj* x_103; obj* x_104; obj* x_105; obj* x_106; obj* x_107; 
x_103 = lean::cnstr_get(x_97, 0);
x_104 = lean::cnstr_get(x_97, 1);
lean::inc(x_104);
lean::inc(x_103);
lean::dec(x_97);
lean::inc(x_95);
lean::cnstr_set(x_1, 4, x_103);
x_105 = lean::box(0);
x_106 = l_RBNode_insert___at___private_init_lean_compiler_ir_livevars_2__collectVar___spec__1(x_104, x_95, x_105);
x_107 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_107, 0, x_1);
lean::cnstr_set(x_107, 1, x_106);
return x_107;
}
}
else
{
obj* x_108; obj* x_109; obj* x_110; obj* x_111; uint8 x_112; obj* x_113; obj* x_114; obj* x_115; obj* x_116; obj* x_117; obj* x_118; obj* x_119; obj* x_120; obj* x_121; 
x_108 = lean::cnstr_get(x_1, 0);
x_109 = lean::cnstr_get(x_1, 1);
x_110 = lean::cnstr_get(x_1, 2);
x_111 = lean::cnstr_get(x_1, 3);
x_112 = lean::cnstr_get_scalar<uint8>(x_1, sizeof(void*)*5);
x_113 = lean::cnstr_get(x_1, 4);
lean::inc(x_113);
lean::inc(x_111);
lean::inc(x_110);
lean::inc(x_109);
lean::inc(x_108);
lean::dec(x_1);
x_114 = l_Lean_IR_ExplicitRC_visitFnBody___main(x_113, x_2);
x_115 = lean::cnstr_get(x_114, 0);
lean::inc(x_115);
x_116 = lean::cnstr_get(x_114, 1);
lean::inc(x_116);
if (lean::is_exclusive(x_114)) {
 lean::cnstr_release(x_114, 0);
 lean::cnstr_release(x_114, 1);
 x_117 = x_114;
} else {
 lean::dec_ref(x_114);
 x_117 = lean::box(0);
}
lean::inc(x_108);
x_118 = lean::alloc_cnstr(5, 5, 1);
lean::cnstr_set(x_118, 0, x_108);
lean::cnstr_set(x_118, 1, x_109);
lean::cnstr_set(x_118, 2, x_110);
lean::cnstr_set(x_118, 3, x_111);
lean::cnstr_set(x_118, 4, x_115);
lean::cnstr_set_scalar(x_118, sizeof(void*)*5, x_112);
x_119 = lean::box(0);
x_120 = l_RBNode_insert___at___private_init_lean_compiler_ir_livevars_2__collectVar___spec__1(x_116, x_108, x_119);
if (lean::is_scalar(x_117)) {
 x_121 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_121 = x_117;
}
lean::cnstr_set(x_121, 0, x_118);
lean::cnstr_set(x_121, 1, x_120);
return x_121;
}
}
case 9:
{
uint8 x_122; 
x_122 = !lean::is_exclusive(x_1);
if (x_122 == 0)
{
obj* x_123; obj* x_124; uint8 x_125; 
x_123 = lean::cnstr_get(x_1, 1);
x_124 = l_Lean_IR_ExplicitRC_visitFnBody___main(x_123, x_2);
x_125 = !lean::is_exclusive(x_124);
if (x_125 == 0)
{
obj* x_126; 
x_126 = lean::cnstr_get(x_124, 0);
lean::cnstr_set(x_1, 1, x_126);
lean::cnstr_set(x_124, 0, x_1);
return x_124;
}
else
{
obj* x_127; obj* x_128; obj* x_129; 
x_127 = lean::cnstr_get(x_124, 0);
x_128 = lean::cnstr_get(x_124, 1);
lean::inc(x_128);
lean::inc(x_127);
lean::dec(x_124);
lean::cnstr_set(x_1, 1, x_127);
x_129 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_129, 0, x_1);
lean::cnstr_set(x_129, 1, x_128);
return x_129;
}
}
else
{
obj* x_130; obj* x_131; obj* x_132; obj* x_133; obj* x_134; obj* x_135; obj* x_136; obj* x_137; 
x_130 = lean::cnstr_get(x_1, 0);
x_131 = lean::cnstr_get(x_1, 1);
lean::inc(x_131);
lean::inc(x_130);
lean::dec(x_1);
x_132 = l_Lean_IR_ExplicitRC_visitFnBody___main(x_131, x_2);
x_133 = lean::cnstr_get(x_132, 0);
lean::inc(x_133);
x_134 = lean::cnstr_get(x_132, 1);
lean::inc(x_134);
if (lean::is_exclusive(x_132)) {
 lean::cnstr_release(x_132, 0);
 lean::cnstr_release(x_132, 1);
 x_135 = x_132;
} else {
 lean::dec_ref(x_132);
 x_135 = lean::box(0);
}
x_136 = lean::alloc_cnstr(9, 2, 0);
lean::cnstr_set(x_136, 0, x_130);
lean::cnstr_set(x_136, 1, x_133);
if (lean::is_scalar(x_135)) {
 x_137 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_137 = x_135;
}
lean::cnstr_set(x_137, 0, x_136);
lean::cnstr_set(x_137, 1, x_134);
return x_137;
}
}
case 10:
{
obj* x_138; obj* x_139; obj* x_140; obj* x_141; obj* x_142; obj* x_143; uint8 x_144; 
x_138 = lean::cnstr_get(x_1, 0);
lean::inc(x_138);
x_139 = lean::cnstr_get(x_1, 1);
lean::inc(x_139);
x_140 = lean::cnstr_get(x_1, 2);
lean::inc(x_140);
x_141 = lean::cnstr_get(x_2, 3);
lean::inc(x_141);
x_142 = lean::box(0);
lean::inc(x_1);
x_143 = l_Lean_IR_LiveVars_collectFnBody___main(x_1, x_141, x_142);
x_144 = !lean::is_exclusive(x_1);
if (x_144 == 0)
{
obj* x_145; obj* x_146; obj* x_147; obj* x_148; obj* x_149; obj* x_150; 
x_145 = lean::cnstr_get(x_1, 2);
lean::dec(x_145);
x_146 = lean::cnstr_get(x_1, 1);
lean::dec(x_146);
x_147 = lean::cnstr_get(x_1, 0);
lean::dec(x_147);
x_148 = lean::mk_nat_obj(0u);
lean::inc(x_139);
x_149 = l_Array_ummapAux___main___at_Lean_IR_ExplicitRC_visitFnBody___main___spec__1(x_2, x_139, x_143, x_148, x_140);
lean::cnstr_set(x_1, 2, x_149);
x_150 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_150, 0, x_1);
lean::cnstr_set(x_150, 1, x_143);
return x_150;
}
else
{
obj* x_151; obj* x_152; obj* x_153; obj* x_154; 
lean::dec(x_1);
x_151 = lean::mk_nat_obj(0u);
lean::inc(x_139);
x_152 = l_Array_ummapAux___main___at_Lean_IR_ExplicitRC_visitFnBody___main___spec__1(x_2, x_139, x_143, x_151, x_140);
x_153 = lean::alloc_cnstr(10, 3, 0);
lean::cnstr_set(x_153, 0, x_138);
lean::cnstr_set(x_153, 1, x_139);
lean::cnstr_set(x_153, 2, x_152);
x_154 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_154, 0, x_153);
lean::cnstr_set(x_154, 1, x_143);
return x_154;
}
}
case 11:
{
obj* x_155; 
x_155 = lean::cnstr_get(x_1, 0);
lean::inc(x_155);
if (lean::obj_tag(x_155) == 0)
{
obj* x_156; obj* x_157; uint8 x_158; 
x_156 = lean::cnstr_get(x_155, 0);
lean::inc(x_156);
lean::dec(x_155);
x_157 = l_Lean_IR_ExplicitRC_getVarInfo(x_2, x_156);
lean::dec(x_2);
x_158 = lean::cnstr_get_scalar<uint8>(x_157, 0);
if (x_158 == 0)
{
obj* x_159; obj* x_160; obj* x_161; obj* x_162; 
lean::dec(x_157);
x_159 = lean::box(0);
x_160 = lean::box(0);
x_161 = l_RBNode_insert___at___private_init_lean_compiler_ir_livevars_2__collectVar___spec__1(x_159, x_156, x_160);
x_162 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_162, 0, x_1);
lean::cnstr_set(x_162, 1, x_161);
return x_162;
}
else
{
uint8 x_163; 
x_163 = lean::cnstr_get_scalar<uint8>(x_157, 1);
if (x_163 == 0)
{
uint8 x_164; 
x_164 = lean::cnstr_get_scalar<uint8>(x_157, 2);
lean::dec(x_157);
if (x_164 == 0)
{
obj* x_165; uint8 x_166; obj* x_167; obj* x_168; obj* x_169; obj* x_170; obj* x_171; 
x_165 = lean::mk_nat_obj(1u);
x_166 = 1;
lean::inc(x_156);
x_167 = lean::alloc_cnstr(6, 3, 1);
lean::cnstr_set(x_167, 0, x_156);
lean::cnstr_set(x_167, 1, x_165);
lean::cnstr_set(x_167, 2, x_1);
lean::cnstr_set_scalar(x_167, sizeof(void*)*3, x_166);
x_168 = lean::box(0);
x_169 = lean::box(0);
x_170 = l_RBNode_insert___at___private_init_lean_compiler_ir_livevars_2__collectVar___spec__1(x_168, x_156, x_169);
x_171 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_171, 0, x_167);
lean::cnstr_set(x_171, 1, x_170);
return x_171;
}
else
{
obj* x_172; obj* x_173; obj* x_174; obj* x_175; 
x_172 = lean::box(0);
x_173 = lean::box(0);
x_174 = l_RBNode_insert___at___private_init_lean_compiler_ir_livevars_2__collectVar___spec__1(x_172, x_156, x_173);
x_175 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_175, 0, x_1);
lean::cnstr_set(x_175, 1, x_174);
return x_175;
}
}
else
{
obj* x_176; obj* x_177; obj* x_178; obj* x_179; 
lean::dec(x_157);
x_176 = lean::box(0);
x_177 = lean::box(0);
x_178 = l_RBNode_insert___at___private_init_lean_compiler_ir_livevars_2__collectVar___spec__1(x_176, x_156, x_177);
x_179 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_179, 0, x_1);
lean::cnstr_set(x_179, 1, x_178);
return x_179;
}
}
}
else
{
obj* x_180; obj* x_181; 
lean::dec(x_2);
x_180 = lean::box(0);
x_181 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_181, 0, x_1);
lean::cnstr_set(x_181, 1, x_180);
return x_181;
}
}
case 12:
{
obj* x_182; obj* x_183; obj* x_184; obj* x_185; obj* x_186; obj* x_187; obj* x_188; obj* x_189; obj* x_190; 
x_182 = lean::cnstr_get(x_1, 0);
lean::inc(x_182);
x_183 = lean::cnstr_get(x_1, 1);
lean::inc(x_183);
x_184 = l_Lean_IR_ExplicitRC_getJPLiveVars(x_2, x_182);
x_185 = l_Lean_IR_ExplicitRC_getJPParams(x_2, x_182);
lean::dec(x_182);
x_186 = l___private_init_lean_compiler_ir_rc_7__addIncBeforeAux___at___private_init_lean_compiler_ir_rc_8__addIncBefore___spec__1(x_185, x_2, x_183, x_1, x_184);
lean::dec(x_184);
lean::dec(x_183);
lean::dec(x_185);
x_187 = lean::cnstr_get(x_2, 3);
lean::inc(x_187);
lean::dec(x_2);
x_188 = lean::box(0);
lean::inc(x_186);
x_189 = l_Lean_IR_LiveVars_collectFnBody___main(x_186, x_187, x_188);
x_190 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_190, 0, x_186);
lean::cnstr_set(x_190, 1, x_189);
return x_190;
}
default: 
{
obj* x_191; obj* x_192; 
lean::dec(x_2);
x_191 = lean::box(0);
x_192 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_192, 0, x_1);
lean::cnstr_set(x_192, 1, x_191);
return x_192;
}
}
}
}
obj* l_Array_ummapAux___main___at_Lean_IR_ExplicitRC_visitFnBody___main___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_Array_ummapAux___main___at_Lean_IR_ExplicitRC_visitFnBody___main___spec__1(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_3);
return x_6;
}
}
obj* l_Lean_IR_ExplicitRC_visitFnBody(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_IR_ExplicitRC_visitFnBody___main(x_1, x_2);
return x_3;
}
}
obj* l_Lean_IR_ExplicitRC_visitDecl___main(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_3) == 0)
{
uint8 x_4; 
x_4 = !lean::is_exclusive(x_3);
if (x_4 == 0)
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_5 = lean::cnstr_get(x_3, 1);
x_6 = lean::cnstr_get(x_3, 2);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_8, 0, x_1);
lean::cnstr_set(x_8, 1, x_2);
lean::cnstr_set(x_8, 2, x_7);
lean::cnstr_set(x_8, 3, x_7);
lean::cnstr_set(x_8, 4, x_7);
x_9 = l_Lean_IR_ExplicitRC_updateVarInfoWithParams(x_8, x_5);
x_10 = l_Lean_IR_ExplicitRC_visitFnBody___main(x_6, x_9);
x_11 = lean::cnstr_get(x_10, 0);
lean::inc(x_11);
x_12 = lean::cnstr_get(x_10, 1);
lean::inc(x_12);
lean::dec(x_10);
x_13 = lean::mk_nat_obj(0u);
x_14 = l_Array_miterateAux___main___at___private_init_lean_compiler_ir_rc_11__addDecForDeadParams___spec__1(x_5, x_12, x_5, x_13, x_11);
lean::dec(x_12);
lean::cnstr_set(x_3, 2, x_14);
return x_3;
}
else
{
obj* x_15; obj* x_16; uint8 x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; 
x_15 = lean::cnstr_get(x_3, 0);
x_16 = lean::cnstr_get(x_3, 1);
x_17 = lean::cnstr_get_scalar<uint8>(x_3, sizeof(void*)*3);
x_18 = lean::cnstr_get(x_3, 2);
lean::inc(x_18);
lean::inc(x_16);
lean::inc(x_15);
lean::dec(x_3);
x_19 = lean::box(0);
x_20 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_20, 0, x_1);
lean::cnstr_set(x_20, 1, x_2);
lean::cnstr_set(x_20, 2, x_19);
lean::cnstr_set(x_20, 3, x_19);
lean::cnstr_set(x_20, 4, x_19);
x_21 = l_Lean_IR_ExplicitRC_updateVarInfoWithParams(x_20, x_16);
x_22 = l_Lean_IR_ExplicitRC_visitFnBody___main(x_18, x_21);
x_23 = lean::cnstr_get(x_22, 0);
lean::inc(x_23);
x_24 = lean::cnstr_get(x_22, 1);
lean::inc(x_24);
lean::dec(x_22);
x_25 = lean::mk_nat_obj(0u);
x_26 = l_Array_miterateAux___main___at___private_init_lean_compiler_ir_rc_11__addDecForDeadParams___spec__1(x_16, x_24, x_16, x_25, x_23);
lean::dec(x_24);
x_27 = lean::alloc_cnstr(0, 3, 1);
lean::cnstr_set(x_27, 0, x_15);
lean::cnstr_set(x_27, 1, x_16);
lean::cnstr_set(x_27, 2, x_26);
lean::cnstr_set_scalar(x_27, sizeof(void*)*3, x_17);
return x_27;
}
}
else
{
lean::dec(x_2);
lean::dec(x_1);
return x_3;
}
}
}
obj* l_Lean_IR_ExplicitRC_visitDecl(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_ExplicitRC_visitDecl___main(x_1, x_2, x_3);
return x_4;
}
}
obj* l_Array_ummapAux___main___at_Lean_IR_explicitRC___spec__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; uint8 x_6; 
x_5 = lean::array_get_size(x_4);
x_6 = lean::nat_dec_lt(x_3, x_5);
lean::dec(x_5);
if (x_6 == 0)
{
obj* x_7; obj* x_8; 
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
x_7 = l_Array_empty___closed__1;
x_8 = x_4;
return x_8;
}
else
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; 
x_9 = lean::array_fget(x_4, x_3);
x_10 = lean::box(0);
lean::inc(x_9);
x_11 = x_10;
x_12 = lean::array_fset(x_4, x_3, x_11);
lean::inc(x_9);
lean::inc(x_1);
lean::inc(x_2);
x_13 = l_Lean_IR_ExplicitRC_visitDecl___main(x_2, x_1, x_9);
x_14 = lean::mk_nat_obj(1u);
x_15 = lean::nat_add(x_3, x_14);
x_16 = x_13;
x_17 = lean::array_fset(x_12, x_3, x_16);
lean::dec(x_3);
x_3 = x_15;
x_4 = x_17;
goto _start;
}
}
}
obj* l_Lean_IR_explicitRC(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_getEnv___rarg(x_3);
if (lean::obj_tag(x_4) == 0)
{
uint8 x_5; 
x_5 = !lean::is_exclusive(x_4);
if (x_5 == 0)
{
obj* x_6; obj* x_7; obj* x_8; 
x_6 = lean::cnstr_get(x_4, 0);
x_7 = lean::mk_nat_obj(0u);
lean::inc(x_1);
x_8 = l_Array_ummapAux___main___at_Lean_IR_explicitRC___spec__1(x_1, x_6, x_7, x_1);
lean::cnstr_set(x_4, 0, x_8);
return x_4;
}
else
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_9 = lean::cnstr_get(x_4, 0);
x_10 = lean::cnstr_get(x_4, 1);
lean::inc(x_10);
lean::inc(x_9);
lean::dec(x_4);
x_11 = lean::mk_nat_obj(0u);
lean::inc(x_1);
x_12 = l_Array_ummapAux___main___at_Lean_IR_explicitRC___spec__1(x_1, x_9, x_11, x_1);
x_13 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_10);
return x_13;
}
}
else
{
uint8 x_14; 
lean::dec(x_1);
x_14 = !lean::is_exclusive(x_4);
if (x_14 == 0)
{
return x_4;
}
else
{
obj* x_15; obj* x_16; obj* x_17; 
x_15 = lean::cnstr_get(x_4, 0);
x_16 = lean::cnstr_get(x_4, 1);
lean::inc(x_16);
lean::inc(x_15);
lean::dec(x_4);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_15);
lean::cnstr_set(x_17, 1, x_16);
return x_17;
}
}
}
}
obj* l_Lean_IR_explicitRC___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_explicitRC(x_1, x_2, x_3);
lean::dec(x_2);
return x_4;
}
}
obj* initialize_init_lean_runtime(obj*);
obj* initialize_init_lean_compiler_ir_compilerm(obj*);
obj* initialize_init_lean_compiler_ir_livevars(obj*);
static bool _G_initialized = false;
obj* initialize_init_lean_compiler_ir_rc(obj* w) {
if (_G_initialized) return w;
_G_initialized = true;
if (io_result_is_error(w)) return w;
w = initialize_init_lean_runtime(w);
if (io_result_is_error(w)) return w;
w = initialize_init_lean_compiler_ir_compilerm(w);
if (io_result_is_error(w)) return w;
w = initialize_init_lean_compiler_ir_livevars(w);
if (io_result_is_error(w)) return w;
l_Lean_IR_ExplicitRC_getDecl___closed__1 = _init_l_Lean_IR_ExplicitRC_getDecl___closed__1();
lean::mark_persistent(l_Lean_IR_ExplicitRC_getDecl___closed__1);
l_Lean_IR_ExplicitRC_getVarInfo___closed__1 = _init_l_Lean_IR_ExplicitRC_getVarInfo___closed__1();
lean::mark_persistent(l_Lean_IR_ExplicitRC_getVarInfo___closed__1);
return w;
}