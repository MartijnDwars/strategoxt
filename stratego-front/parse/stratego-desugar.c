#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Con_3;
Symbol sym_TupleCong_1;
Symbol sym_TupleCong_0;
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym__9;
Symbol sym__10;
Symbol sym__11;
Symbol sym__12;
Symbol sym__13;
Symbol sym__14;
Symbol sym__15;
Symbol sym__16;
Symbol sym__17;
Symbol sym__18;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Var_1;
Symbol sym_Anno_2;
Symbol sym_Cons_1;
Symbol sym_Nil_0;
Symbol sym_RDecT_3;
Symbol sym_RDec_2;
Symbol sym_RDecNoArgs_1;
Symbol sym_Specification_1;
Symbol sym_Module_2;
Symbol sym_Overlay_3;
Symbol sym_OverlayNoArgs_2;
Symbol sym_Con4_4;
Symbol sym_Con3_3;
Symbol sym_Con_3;
Symbol sym_Con1_2;
Symbol sym_ListTail_2;
Symbol sym_List_1;
Symbol sym_Tuple_1;
Symbol sym_AnnoTail_3;
Symbol sym_Anno_2;
Symbol sym_Op_2;
Symbol sym_Char_1;
Symbol sym_Str_1;
Symbol sym_Real_1;
Symbol sym_Int_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_StrategyCurly_1;
Symbol sym_SVar_1;
Symbol sym_DynRuleUnion_3;
Symbol sym_DynRuleIntersect_3;
Symbol sym_DynRuleUnionFix_2;
Symbol sym_DynRuleIntersectFix_2;
Symbol sym_AM_2;
Symbol sym_SwitchChoice_3;
Symbol sym_SwitchChoiceNoOtherwise_2;
Symbol sym_IfThen_2;
Symbol sym_CondChoice_3;
Symbol sym_RChoice_2;
Symbol sym_CallNoArgs_1;
Symbol sym_ListCong_2;
Symbol sym_ListCongNoTail_1;
Symbol sym_ModCong_2;
Symbol sym_ModCongNoArgs_1;
Symbol sym_TupleCong_2;
Symbol sym_EmptyTupleCong_0;
Symbol sym_AnnoCong_2;
Symbol sym_CharCong_1;
Symbol sym_RealCong_1;
Symbol sym_IntCong_1;
Symbol sym_StrCong_1;
Symbol sym_PrimT_3;
Symbol sym_Prim_2;
Symbol sym_PrimNoArgs_1;
Symbol sym_Where_1;
Symbol sym_GuardedLChoice_3;
Symbol sym_LChoice_2;
Symbol sym_Seq_2;
Symbol sym_BA_2;
Symbol sym_Match_1;
Symbol sym_CallT_3;
Symbol sym_Call_2;
Symbol sym_Id_0;
Symbol sym_Fail_0;
Symbol sym_ParenStrat_1;
Symbol sym_VarDec_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_SDefT_4;
Symbol sym_SDef_3;
Symbol sym_SDefNoArgs_2;
Symbol sym_OpDecl_2;
Symbol sym_SortTuple_1;
Symbol sym_SortListTl_2;
Symbol sym_SortList_1;
Symbol sym_Sort_2;
Symbol sym_SortNoArgs_1;
Symbol sym_StratRule_3;
Symbol sym_StratRuleNoCond_2;
Symbol sym_Rule_3;
Symbol sym_RuleNoCond_2;
Symbol sym_SRDefT_4;
Symbol sym_SRDef_3;
Symbol sym_SRDefNoArgs_2;
Symbol sym_RDef_3;
Symbol sym_RDefNoArgs_2;
static void init_module_constructors (void)
{
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_TupleCong_1 = ATmakeSymbol("TupleCong", 1, ATfalse);
  ATprotectSymbol(sym_TupleCong_1);
  sym_TupleCong_0 = ATmakeSymbol("TupleCong", 0, ATfalse);
  ATprotectSymbol(sym_TupleCong_0);
  sym__0 = ATmakeSymbol("", 0, ATfalse);
  ATprotectSymbol(sym__0);
  sym__1 = ATmakeSymbol("", 1, ATfalse);
  ATprotectSymbol(sym__1);
  sym__2 = ATmakeSymbol("", 2, ATfalse);
  ATprotectSymbol(sym__2);
  sym__3 = ATmakeSymbol("", 3, ATfalse);
  ATprotectSymbol(sym__3);
  sym__4 = ATmakeSymbol("", 4, ATfalse);
  ATprotectSymbol(sym__4);
  sym__5 = ATmakeSymbol("", 5, ATfalse);
  ATprotectSymbol(sym__5);
  sym__6 = ATmakeSymbol("", 6, ATfalse);
  ATprotectSymbol(sym__6);
  sym__7 = ATmakeSymbol("", 7, ATfalse);
  ATprotectSymbol(sym__7);
  sym__8 = ATmakeSymbol("", 8, ATfalse);
  ATprotectSymbol(sym__8);
  sym__9 = ATmakeSymbol("", 9, ATfalse);
  ATprotectSymbol(sym__9);
  sym__10 = ATmakeSymbol("", 10, ATfalse);
  ATprotectSymbol(sym__10);
  sym__11 = ATmakeSymbol("", 11, ATfalse);
  ATprotectSymbol(sym__11);
  sym__12 = ATmakeSymbol("", 12, ATfalse);
  ATprotectSymbol(sym__12);
  sym__13 = ATmakeSymbol("", 13, ATfalse);
  ATprotectSymbol(sym__13);
  sym__14 = ATmakeSymbol("", 14, ATfalse);
  ATprotectSymbol(sym__14);
  sym__15 = ATmakeSymbol("", 15, ATfalse);
  ATprotectSymbol(sym__15);
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Cons_1 = ATmakeSymbol("Cons", 1, ATfalse);
  ATprotectSymbol(sym_Cons_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_RDecT_3 = ATmakeSymbol("RDecT", 3, ATfalse);
  ATprotectSymbol(sym_RDecT_3);
  sym_RDec_2 = ATmakeSymbol("RDec", 2, ATfalse);
  ATprotectSymbol(sym_RDec_2);
  sym_RDecNoArgs_1 = ATmakeSymbol("RDecNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_RDecNoArgs_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
  ATprotectSymbol(sym_Module_2);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_OverlayNoArgs_2 = ATmakeSymbol("OverlayNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_OverlayNoArgs_2);
  sym_Con4_4 = ATmakeSymbol("Con4", 4, ATfalse);
  ATprotectSymbol(sym_Con4_4);
  sym_Con3_3 = ATmakeSymbol("Con3", 3, ATfalse);
  ATprotectSymbol(sym_Con3_3);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_Con1_2 = ATmakeSymbol("Con1", 2, ATfalse);
  ATprotectSymbol(sym_Con1_2);
  sym_ListTail_2 = ATmakeSymbol("ListTail", 2, ATfalse);
  ATprotectSymbol(sym_ListTail_2);
  sym_List_1 = ATmakeSymbol("List", 1, ATfalse);
  ATprotectSymbol(sym_List_1);
  sym_Tuple_1 = ATmakeSymbol("Tuple", 1, ATfalse);
  ATprotectSymbol(sym_Tuple_1);
  sym_AnnoTail_3 = ATmakeSymbol("AnnoTail", 3, ATfalse);
  ATprotectSymbol(sym_AnnoTail_3);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Char_1 = ATmakeSymbol("Char", 1, ATfalse);
  ATprotectSymbol(sym_Char_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_StrategyCurly_1 = ATmakeSymbol("StrategyCurly", 1, ATfalse);
  ATprotectSymbol(sym_StrategyCurly_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_DynRuleUnion_3 = ATmakeSymbol("DynRuleUnion", 3, ATfalse);
  ATprotectSymbol(sym_DynRuleUnion_3);
  sym_DynRuleIntersect_3 = ATmakeSymbol("DynRuleIntersect", 3, ATfalse);
  ATprotectSymbol(sym_DynRuleIntersect_3);
  sym_DynRuleUnionFix_2 = ATmakeSymbol("DynRuleUnionFix", 2, ATfalse);
  ATprotectSymbol(sym_DynRuleUnionFix_2);
  sym_DynRuleIntersectFix_2 = ATmakeSymbol("DynRuleIntersectFix", 2, ATfalse);
  ATprotectSymbol(sym_DynRuleIntersectFix_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_SwitchChoice_3 = ATmakeSymbol("SwitchChoice", 3, ATfalse);
  ATprotectSymbol(sym_SwitchChoice_3);
  sym_SwitchChoiceNoOtherwise_2 = ATmakeSymbol("SwitchChoiceNoOtherwise", 2, ATfalse);
  ATprotectSymbol(sym_SwitchChoiceNoOtherwise_2);
  sym_IfThen_2 = ATmakeSymbol("IfThen", 2, ATfalse);
  ATprotectSymbol(sym_IfThen_2);
  sym_CondChoice_3 = ATmakeSymbol("CondChoice", 3, ATfalse);
  ATprotectSymbol(sym_CondChoice_3);
  sym_RChoice_2 = ATmakeSymbol("RChoice", 2, ATfalse);
  ATprotectSymbol(sym_RChoice_2);
  sym_CallNoArgs_1 = ATmakeSymbol("CallNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_CallNoArgs_1);
  sym_ListCong_2 = ATmakeSymbol("ListCong", 2, ATfalse);
  ATprotectSymbol(sym_ListCong_2);
  sym_ListCongNoTail_1 = ATmakeSymbol("ListCongNoTail", 1, ATfalse);
  ATprotectSymbol(sym_ListCongNoTail_1);
  sym_ModCong_2 = ATmakeSymbol("ModCong", 2, ATfalse);
  ATprotectSymbol(sym_ModCong_2);
  sym_ModCongNoArgs_1 = ATmakeSymbol("ModCongNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_ModCongNoArgs_1);
  sym_TupleCong_2 = ATmakeSymbol("TupleCong", 2, ATfalse);
  ATprotectSymbol(sym_TupleCong_2);
  sym_EmptyTupleCong_0 = ATmakeSymbol("EmptyTupleCong", 0, ATfalse);
  ATprotectSymbol(sym_EmptyTupleCong_0);
  sym_AnnoCong_2 = ATmakeSymbol("AnnoCong", 2, ATfalse);
  ATprotectSymbol(sym_AnnoCong_2);
  sym_CharCong_1 = ATmakeSymbol("CharCong", 1, ATfalse);
  ATprotectSymbol(sym_CharCong_1);
  sym_RealCong_1 = ATmakeSymbol("RealCong", 1, ATfalse);
  ATprotectSymbol(sym_RealCong_1);
  sym_IntCong_1 = ATmakeSymbol("IntCong", 1, ATfalse);
  ATprotectSymbol(sym_IntCong_1);
  sym_StrCong_1 = ATmakeSymbol("StrCong", 1, ATfalse);
  ATprotectSymbol(sym_StrCong_1);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_PrimNoArgs_1 = ATmakeSymbol("PrimNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_PrimNoArgs_1);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_ParenStrat_1 = ATmakeSymbol("ParenStrat", 1, ATfalse);
  ATprotectSymbol(sym_ParenStrat_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefNoArgs_2 = ATmakeSymbol("SDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SDefNoArgs_2);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_SortTuple_1 = ATmakeSymbol("SortTuple", 1, ATfalse);
  ATprotectSymbol(sym_SortTuple_1);
  sym_SortListTl_2 = ATmakeSymbol("SortListTl", 2, ATfalse);
  ATprotectSymbol(sym_SortListTl_2);
  sym_SortList_1 = ATmakeSymbol("SortList", 1, ATfalse);
  ATprotectSymbol(sym_SortList_1);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_SortNoArgs_1 = ATmakeSymbol("SortNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_SortNoArgs_1);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_StratRuleNoCond_2 = ATmakeSymbol("StratRuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_StratRuleNoCond_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RuleNoCond_2 = ATmakeSymbol("RuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_RuleNoCond_2);
  sym_SRDefT_4 = ATmakeSymbol("SRDefT", 4, ATfalse);
  ATprotectSymbol(sym_SRDefT_4);
  sym_SRDef_3 = ATmakeSymbol("SRDef", 3, ATfalse);
  ATprotectSymbol(sym_SRDef_3);
  sym_SRDefNoArgs_2 = ATmakeSymbol("SRDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SRDefNoArgs_2);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_RDefNoArgs_2 = ATmakeSymbol("RDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_RDefNoArgs_2);
}
ATerm term_o_4;
ATerm term_l_4;
ATerm term_j_4;
ATerm term_i_4;
ATerm term_h_4;
ATerm term_c_4;
ATerm term_a_4;
ATerm term_z_3;
ATerm term_p_3;
ATerm term_n_3;
ATerm term_m_3;
ATerm term_l_3;
ATerm term_j_3;
ATerm term_i_3;
ATerm term_g_3;
ATerm term_f_3;
ATerm term_e_3;
ATerm term_s_2;
ATerm term_q_2;
ATerm term_p_2;
ATerm term_o_2;
ATerm term_n_2;
ATerm term_k_2;
ATerm term_j_2;
ATerm term_i_2;
ATerm term_h_2;
ATerm term_g_2;
ATerm term_e_2;
ATerm term_c_2;
ATerm term_b_2;
ATerm term_a_2;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_a_2));
  term_a_2 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_b_2));
  term_b_2 = (ATerm) ATmakeAppl(sym_Op_2, term_a_2, (ATerm) ATempty);
  ATprotect(&(term_c_2));
  term_c_2 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_e_2));
  term_e_2 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_g_2));
  term_g_2 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_2);
  ATprotect(&(term_h_2));
  term_h_2 = (ATerm) ATmakeAppl(sym_Sort_2, term_a_2, (ATerm) ATempty);
  ATprotect(&(term_i_2));
  term_i_2 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_2);
  ATprotect(&(term_j_2));
  term_j_2 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_2);
  ATprotect(&(term_k_2));
  term_k_2 = (ATerm) ATmakeAppl(sym_Call_2, term_j_2, (ATerm) ATempty);
  ATprotect(&(term_n_2));
  term_n_2 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_o_2));
  term_o_2 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_p_2));
  term_p_2 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_q_2));
  term_q_2 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_2));
  term_s_2 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_e_3));
  term_e_3 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-fork-and-union", 0, ATtrue));
  ATprotect(&(term_f_3));
  term_f_3 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_3);
  ATprotect(&(term_g_3));
  term_g_3 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-fix-and-union", 0, ATtrue));
  ATprotect(&(term_i_3));
  term_i_3 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_3);
  ATprotect(&(term_j_3));
  term_j_3 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-fork-and-intersect", 0, ATtrue));
  ATprotect(&(term_l_3));
  term_l_3 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_3);
  ATprotect(&(term_m_3));
  term_m_3 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-fix-and-intersect", 0, ATtrue));
  ATprotect(&(term_n_3));
  term_n_3 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_3);
  ATprotect(&(term_p_3));
  term_p_3 = (ATerm) ATmakeAppl(ATmakeSymbol("Tuple", 0, ATtrue));
  ATprotect(&(term_z_3));
  term_z_3 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_a_4));
  term_a_4 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_3);
  ATprotect(&(term_c_4));
  term_c_4 = (ATerm) ATmakeAppl(sym_Call_2, term_a_4, (ATerm) ATempty);
  ATprotect(&(term_h_4));
  term_h_4 = (ATerm) ATmakeAppl(sym_Call_2, term_g_2, (ATerm) ATempty);
  ATprotect(&(term_i_4));
  term_i_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_j_4));
  term_j_4 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_4);
  ATprotect(&(term_l_4));
  term_l_4 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(sym_Fail_0);
}
#include <srts/init-stratego-application.h>
ATerm implode_string_0_0 (ATerm t);
ATerm Var_1_0 (ATerm l_83 (ATerm), ATerm t);
ATerm is_string_0_0 (ATerm t);
ATerm string_to_int_0_0 (ATerm t);
ATerm string_to_real_0_0 (ATerm t);
ATerm unescape_0_0 (ATerm t);
static ATerm a_0 (ATerm t);
ATerm DesugarOnce_0_0 (ATerm t);
ATerm try_1_0 (ATerm o_106 (ATerm), ATerm t);
ATerm un_double_quote_0_0 (ATerm t);
ATerm foldr_2_0 (ATerm o_99 (ATerm), ATerm p_99 (ATerm), ATerm t);
ATerm new_0_0 (ATerm t);
ATerm Snd_0_0 (ATerm t);
ATerm Fst_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm q_99 (ATerm), ATerm r_99 (ATerm), ATerm s_99 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm e_0 (ATerm t);
static ATerm i_0 (ATerm t);
ATerm mk_rulenames_0_0 (ATerm t);
ATerm explode_string_0_0 (ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm q_78 (ATerm), ATerm r_78 (ATerm), ATerm t);
static ATerm i_17 (ATerm v_6, ATerm w_6, ATerm t);
static ATerm j_17 (ATerm z_6, ATerm a_7, ATerm t);
static ATerm k_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm repeat_1_0 (ATerm i_90 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm n_87 (ATerm), ATerm t);
ATerm io_wrap_1_0 (ATerm o_113 (ATerm), ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm stratego_desugar_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm b_4 = NULL;
  t = explode_string_0_0(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_1 = ATgetFirst((ATermList) t);
      if(((ATgetType(m_1) != AT_INT) || (ATgetInt((ATermInt) m_1) != 39)))
        _fail(t);
      b_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_4;
  t = implode_string_0_0(t);
  return(t);
}
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm n_1 = t;
  int o_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_2 = NULL,w_2 = NULL,y_2 = NULL,b_3 = NULL;
      w_2 = t;
      if(match_cons(t, sym_Str_1))
        {
          y_2 = ATgetArgument(t, 0);
          {
            ATerm h_3 = NULL;
            t = y_2;
            t = un_double_quote_0_0(t);
            t = unescape_0_0(t);
            h_3 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, h_3);
          }
        }
      else
        {
          if(match_cons(t, sym_Real_1))
            {
              y_2 = ATgetArgument(t, 0);
              {
                ATerm k_3 = NULL;
                t = y_2;
                t = string_to_real_0_0(t);
                k_3 = t;
                t = (ATerm) ATmakeAppl(sym_Real_1, k_3);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  y_2 = ATgetArgument(t, 0);
                  {
                    ATerm o_3 = NULL;
                    t = y_2;
                    t = string_to_int_0_0(t);
                    o_3 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, o_3);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Con_3))
                    {
                      y_2 = ATgetArgument(t, 0);
                      b_3 = ATgetArgument(t, 1);
                      v_2 = ATgetArgument(t, 2);
                      t = v_2;
                      t = is_string_0_0(t);
                      t = (ATerm) ATmakeAppl(sym_Con_3, y_2, b_3, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, v_2), (ATerm) ATempty));
                    }
                  else
                    {
                      if(match_cons(t, sym_DefaultVarDec_1))
                        {
                          y_2 = ATgetArgument(t, 0);
                          {
                            ATerm c_0 = NULL,f_0 = NULL,h_0 = NULL,d_0 = NULL;
                            t = SSLgetAnnotations(w_2);
                            c_0 = t;
                            t = y_2;
                            t = explode_string_0_0(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                ATerm p_1 = ATgetFirst((ATermList) t);
                                if(((ATgetType(p_1) != AT_INT) || (ATgetInt((ATermInt) p_1) != 39)))
                                  _fail(t);
                                f_0 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = f_0;
                            t = implode_string_0_0(t);
                            h_0 = t;
                            t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, h_0);
                            d_0 = t;
                            t = SSLsetAnnotations(d_0, c_0);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_RDef_3))
                            {
                              y_2 = ATgetArgument(t, 0);
                              b_3 = ATgetArgument(t, 1);
                              v_2 = ATgetArgument(t, 2);
                              {
                                ATerm y_0 = NULL,w_1 = NULL,x_1 = NULL,g_0 = NULL;
                                t = SSLgetAnnotations(w_2);
                                y_0 = t;
                                t = y_2;
                                t = explode_string_0_0(t);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    ATerm q_1 = ATgetFirst((ATermList) t);
                                    if(((ATgetType(q_1) != AT_INT) || (ATgetInt((ATermInt) q_1) != 39)))
                                      _fail(t);
                                    w_1 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = w_1;
                                t = implode_string_0_0(t);
                                x_1 = t;
                                t = (ATerm) ATmakeAppl(sym_RDef_3, x_1, b_3, v_2);
                                g_0 = t;
                                t = SSLsetAnnotations(g_0, y_0);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_SDef_3))
                                {
                                  y_2 = ATgetArgument(t, 0);
                                  b_3 = ATgetArgument(t, 1);
                                  v_2 = ATgetArgument(t, 2);
                                  {
                                    ATerm r_2 = NULL,z_2 = NULL,a_3 = NULL,l_0 = NULL;
                                    t = SSLgetAnnotations(w_2);
                                    r_2 = t;
                                    t = y_2;
                                    t = explode_string_0_0(t);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm r_1 = ATgetFirst((ATermList) t);
                                        if(((ATgetType(r_1) != AT_INT) || (ATgetInt((ATermInt) r_1) != 39)))
                                          _fail(t);
                                        z_2 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = z_2;
                                    t = implode_string_0_0(t);
                                    a_3 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDef_3, a_3, b_3, v_2);
                                    l_0 = t;
                                    t = SSLsetAnnotations(l_0, r_2);
                                  }
                                }
                              else
                                {
                                  ATerm t_3 = NULL,w_3 = NULL,y_3 = NULL,o_0 = NULL;
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      y_2 = ATgetArgument(t, 0);
                                      b_3 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(w_2);
                                  t_3 = t;
                                  t = y_2;
                                  t = explode_string_0_0(t);
                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                    {
                                      ATerm s_1 = ATgetFirst((ATermList) t);
                                      if(((ATgetType(s_1) != AT_INT) || (ATgetInt((ATermInt) s_1) != 39)))
                                        _fail(t);
                                      w_3 = (ATerm) ATgetNext((ATermList) t);
                                    }
                                  else
                                    _fail(t);
                                  t = w_3;
                                  t = implode_string_0_0(t);
                                  y_3 = t;
                                  t = (ATerm) ATmakeAppl(sym_VarDec_2, y_3, b_3);
                                  o_0 = t;
                                  t = SSLsetAnnotations(o_0, t_3);
                                }
                            }
                        }
                    }
                }
            }
        }
      LocalPopChoice(o_1);
    }
  else
    {
      t = n_1;
      {
        ATerm t_1 = t;
        int u_1 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1_0(a_0, t);
            LocalPopChoice(u_1);
          }
        else
          {
            t = t_1;
            {
              ATerm n_5 = NULL,o_5 = NULL,p_5 = NULL;
              n_5 = t;
              if(match_cons(t, sym_SVar_1))
                {
                  o_5 = ATgetArgument(t, 0);
                  {
                    ATerm k_4 = NULL,m_4 = NULL,p_4 = NULL,r_0 = NULL;
                    t = SSLgetAnnotations(n_5);
                    k_4 = t;
                    t = o_5;
                    t = explode_string_0_0(t);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm v_1 = ATgetFirst((ATermList) t);
                        if(((ATgetType(v_1) != AT_INT) || (ATgetInt((ATermInt) v_1) != 39)))
                          _fail(t);
                        m_4 = (ATerm) ATgetNext((ATermList) t);
                      }
                    else
                      _fail(t);
                    t = m_4;
                    t = implode_string_0_0(t);
                    p_4 = t;
                    t = (ATerm) ATmakeAppl(sym_SVar_1, p_4);
                    r_0 = t;
                    t = SSLsetAnnotations(r_0, k_4);
                  }
                }
              else
                {
                  if(match_cons(t, sym_OpDecl_2))
                    {
                      o_5 = ATgetArgument(t, 0);
                      p_5 = ATgetArgument(t, 1);
                      {
                        ATerm d_6 = NULL,g_6 = NULL,h_6 = NULL,s_0 = NULL;
                        t = SSLgetAnnotations(n_5);
                        d_6 = t;
                        t = o_5;
                        t = explode_string_0_0(t);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm y_1 = ATgetFirst((ATermList) t);
                            if(((ATgetType(y_1) != AT_INT) || (ATgetInt((ATermInt) y_1) != 39)))
                              _fail(t);
                            g_6 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = g_6;
                        t = implode_string_0_0(t);
                        h_6 = t;
                        t = (ATerm) ATmakeAppl(sym_OpDecl_2, h_6, p_5);
                        s_0 = t;
                        t = SSLsetAnnotations(s_0, d_6);
                      }
                    }
                  else
                    {
                      ATerm i_7 = NULL,c_11 = NULL,d_11 = NULL,t_0 = NULL;
                      if(match_cons(t, sym_Op_2))
                        {
                          o_5 = ATgetArgument(t, 0);
                          p_5 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(n_5);
                      i_7 = t;
                      t = o_5;
                      t = explode_string_0_0(t);
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm z_1 = ATgetFirst((ATermList) t);
                          if(((ATgetType(z_1) != AT_INT) || (ATgetInt((ATermInt) z_1) != 39)))
                            _fail(t);
                          c_11 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = c_11;
                      t = implode_string_0_0(t);
                      d_11 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, d_11, p_5);
                      t_0 = t;
                      t = SSLsetAnnotations(t_0, i_7);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = term_b_2;
  return(t);
}
static ATerm e_0 (ATerm t)
{
  ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL;
  z_5 = t;
  t = Fst_0_0(t);
  x_5 = t;
  t = z_5;
  t = Snd_0_0(t);
  y_5 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, term_c_2, (ATerm) ATinsert(ATinsert(ATempty, y_5), x_5));
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm a_6 = NULL;
  a_6 = t;
  t = (ATerm) ATmakeAppl(sym_Str_1, a_6);
  return(t);
}
ATerm mk_rulenames_0_0 (ATerm t)
{
  t = foldr_3_0(b_0, e_0, i_0, t);
  return(t);
}
static ATerm i_17 (ATerm v_6, ATerm w_6, ATerm t)
{
  t = v_6;
  {
    ATerm d_2 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, Nil_0_0, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_2;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_e_2, v_6);
  return(t);
}
static ATerm j_17 (ATerm z_6, ATerm a_7, ATerm t)
{
  t = z_6;
  {
    ATerm f_2 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, Nil_0_0, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_2;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_g_2, z_6);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL;
  v_7 = t;
  t = Fst_0_0(t);
  t_7 = t;
  t = v_7;
  t = Snd_0_0(t);
  u_7 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, term_c_2, (ATerm) ATinsert(ATinsert(ATempty, u_7), t_7));
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = term_b_2;
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL;
  b_8 = t;
  t = Fst_0_0(t);
  z_7 = t;
  t = b_8;
  t = Snd_0_0(t);
  a_8 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, term_c_2, (ATerm) ATinsert(ATinsert(ATempty, a_8), z_7));
  return(t);
}
static ATerm p_0 (ATerm t)
{
  t = term_h_2;
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL;
  w_8 = t;
  t = Fst_0_0(t);
  u_8 = t;
  t = w_8;
  t = Snd_0_0(t);
  v_8 = t;
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_c_2, (ATerm) ATinsert(ATinsert(ATempty, v_8), u_8));
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL;
  b_9 = t;
  t = Fst_0_0(t);
  z_8 = t;
  t = b_9;
  t = Snd_0_0(t);
  a_9 = t;
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_c_2, (ATerm) ATinsert(ATinsert(ATempty, a_9), z_8));
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_h_2;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL;
  f_9 = t;
  t = Fst_0_0(t);
  d_9 = t;
  t = f_9;
  t = Snd_0_0(t);
  e_9 = t;
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_c_2, (ATerm) ATinsert(ATinsert(ATempty, e_9), d_9));
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL;
  if(match_cons(t, sym__2))
    {
      q_9 = ATgetArgument(t, 0);
      r_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_c_2, (ATerm) ATinsert(ATinsert(ATempty, r_9), q_9));
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_b_2;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL;
  if(match_cons(t, sym__2))
    {
      t_9 = ATgetArgument(t, 0);
      u_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_c_2, (ATerm) ATinsert(ATinsert(ATempty, u_9), t_9));
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL;
  if(match_cons(t, sym__2))
    {
      g_10 = ATgetArgument(t, 0);
      h_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_i_2, (ATerm) ATinsert(ATinsert(ATempty, h_10), g_10));
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_k_2;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL;
  if(match_cons(t, sym__2))
    {
      j_10 = ATgetArgument(t, 0);
      k_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_i_2, (ATerm) ATinsert(ATinsert(ATempty, k_10), j_10));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL;
  m_7 = t;
  if(match_cons(t, sym_AnnoTail_3))
    {
      n_7 = ATgetArgument(t, 0);
      o_7 = ATgetArgument(t, 1);
      l_7 = ATgetArgument(t, 2);
      {
        ATerm s_7 = NULL;
        t = o_7;
        {
          static ATerm j_0 (ATerm t);
          static ATerm j_0 (ATerm t)
          {
            t = l_7;
            return(t);
          }
          t = foldr_2_0(j_0, k_0, t);
        }
        s_7 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, n_7, s_7);
      }
    }
  else
    {
      if(match_cons(t, sym_Anno_2))
        {
          n_7 = ATgetArgument(t, 0);
          o_7 = ATgetArgument(t, 1);
          {
            ATerm y_7 = NULL;
            t = o_7;
            t = foldr_2_0(m_0, n_0, t);
            y_7 = t;
            t = (ATerm) ATmakeAppl(sym_Anno_2, n_7, y_7);
          }
        }
      else
        {
          if(match_cons(t, sym_SortNoArgs_1))
            {
              n_7 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Sort_2, n_7, (ATerm) ATempty);
            }
          else
            {
              if(match_cons(t, sym_Char_1))
                {
                  n_7 = ATgetArgument(t, 0);
                  {
                    ATerm l_11 = NULL;
                    t = n_7;
                    {
                      ATerm l_2 = t;
                      int m_2 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_string(t, "'\\ '"))
                            {
                              t = term_n_2;
                            }
                          else
                            {
                              if(match_string(t, "'\\r'"))
                                {
                                  t = term_o_2;
                                }
                              else
                                {
                                  if(match_string(t, "'\\t'"))
                                    {
                                      t = term_p_2;
                                    }
                                  else
                                    {
                                      if(match_string(t, "'\\n'"))
                                        {
                                          t = term_q_2;
                                        }
                                      else
                                        {
                                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                            _fail(t);
                                          t = term_s_2;
                                        }
                                    }
                                }
                            }
                          LocalPopChoice(m_2);
                        }
                      else
                        {
                          t = l_2;
                          {
                            ATerm n_11 = NULL;
                            t = explode_string_0_0(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                ATerm t_2 = ATgetFirst((ATermList) t);
                                if(((ATgetType(t_2) != AT_INT) || (ATgetInt((ATermInt) t_2) != 39)))
                                  _fail(t);
                                {
                                  ATerm u_2 = (ATerm) ATgetNext((ATermList) t);
                                  if(((ATgetType(u_2) == AT_LIST) && !(ATisEmpty(u_2))))
                                    {
                                      n_11 = ATgetFirst((ATermList) u_2);
                                      {
                                        ATerm x_2 = (ATerm) ATgetNext((ATermList) u_2);
                                        if(((ATgetType(x_2) == AT_LIST) && !(ATisEmpty(x_2))))
                                          {
                                            ATerm c_3 = ATgetFirst((ATermList) x_2);
                                            if(((ATgetType(c_3) != AT_INT) || (ATgetInt((ATermInt) c_3) != 39)))
                                              _fail(t);
                                            {
                                              ATerm d_3 = (ATerm) ATgetNext((ATermList) x_2);
                                              if(((ATgetType(d_3) != AT_LIST) || !(ATisEmpty(d_3))))
                                                _fail(t);
                                            }
                                          }
                                        else
                                          _fail(t);
                                      }
                                    }
                                  else
                                    _fail(t);
                                }
                              }
                            else
                              _fail(t);
                            t = n_11;
                          }
                        }
                    }
                    l_11 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, l_11);
                  }
                }
              else
                {
                  if(match_cons(t, sym_DynRuleUnion_3))
                    {
                      n_7 = ATgetArgument(t, 0);
                      o_7 = ATgetArgument(t, 1);
                      l_7 = ATgetArgument(t, 2);
                      {
                        ATerm h_8 = NULL;
                        t = o_7;
                        t = mk_rulenames_0_0(t);
                        h_8 = t;
                        t = (ATerm) ATmakeAppl(sym_CallT_3, term_f_3, (ATerm)ATinsert(ATinsert(ATempty, l_7), n_7), (ATerm) ATinsert(ATempty, h_8));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_DynRuleUnionFix_2))
                        {
                          n_7 = ATgetArgument(t, 0);
                          o_7 = ATgetArgument(t, 1);
                          {
                            ATerm k_8 = NULL;
                            t = n_7;
                            t = mk_rulenames_0_0(t);
                            k_8 = t;
                            t = (ATerm) ATmakeAppl(sym_CallT_3, term_i_3, (ATerm)ATinsert(ATempty, o_7), (ATerm) ATinsert(ATempty, k_8));
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_DynRuleIntersect_3))
                            {
                              n_7 = ATgetArgument(t, 0);
                              o_7 = ATgetArgument(t, 1);
                              l_7 = ATgetArgument(t, 2);
                              {
                                ATerm o_8 = NULL;
                                t = o_7;
                                t = mk_rulenames_0_0(t);
                                o_8 = t;
                                t = (ATerm) ATmakeAppl(sym_CallT_3, term_l_3, (ATerm)ATinsert(ATinsert(ATempty, l_7), n_7), (ATerm) ATinsert(ATempty, o_8));
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_DynRuleIntersectFix_2))
                                {
                                  n_7 = ATgetArgument(t, 0);
                                  o_7 = ATgetArgument(t, 1);
                                  {
                                    ATerm r_8 = NULL;
                                    t = n_7;
                                    t = mk_rulenames_0_0(t);
                                    r_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_CallT_3, term_n_3, (ATerm)ATinsert(ATempty, o_7), (ATerm) ATinsert(ATempty, r_8));
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_SortTuple_1))
                                    {
                                      n_7 = ATgetArgument(t, 0);
                                      {
                                        ATerm t_8 = NULL;
                                        t = n_7;
                                        t = foldr_2_0(p_0, q_0, t);
                                        t_8 = t;
                                        t = (ATerm) ATmakeAppl(sym_Sort_2, term_p_3, (ATerm) ATinsert(ATempty, t_8));
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_SortListTl_2))
                                        {
                                          n_7 = ATgetArgument(t, 0);
                                          o_7 = ATgetArgument(t, 1);
                                          {
                                            static ATerm u_0 (ATerm t);
                                            static ATerm u_0 (ATerm t)
                                            {
                                              t = o_7;
                                              return(t);
                                            }
                                            t = n_7;
                                            t = foldr_2_0(u_0, v_0, t);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_SortList_1))
                                            {
                                              n_7 = ATgetArgument(t, 0);
                                              t = n_7;
                                              t = foldr_2_0(w_0, x_0, t);
                                            }
                                          else
                                            {
                                              ATerm q_3 = t;
                                              int r_3 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  if(match_cons(t, sym_Con4_4))
                                                    {
                                                      n_7 = ATgetArgument(t, 0);
                                                      {
                                                        ATerm s_3 = ATgetArgument(t, 1);
                                                      }
                                                      l_7 = ATgetArgument(t, 2);
                                                      h_7 = ATgetArgument(t, 3);
                                                    }
                                                  else
                                                    _fail(t);
                                                  LocalPopChoice(r_3);
                                                  t = (ATerm) ATmakeAppl(sym_Con_3, n_7, l_7, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, h_7), (ATerm) ATempty));
                                                }
                                              else
                                                {
                                                  t = q_3;
                                                  {
                                                    ATerm u_3 = t;
                                                    int v_3 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(match_cons(t, sym_Con3_3))
                                                          {
                                                            n_7 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm x_3 = ATgetArgument(t, 1);
                                                            }
                                                            l_7 = ATgetArgument(t, 2);
                                                          }
                                                        else
                                                          _fail(t);
                                                        LocalPopChoice(v_3);
                                                        t = (ATerm) ATmakeAppl(sym_Con_3, n_7, l_7, term_c_4);
                                                      }
                                                    else
                                                      {
                                                        t = u_3;
                                                        if(match_cons(t, sym_Con1_2))
                                                          {
                                                            n_7 = ATgetArgument(t, 0);
                                                            o_7 = ATgetArgument(t, 1);
                                                            t = (ATerm) ATmakeAppl(sym_Con_3, n_7, o_7, term_c_4);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ListTail_2))
                                                              {
                                                                n_7 = ATgetArgument(t, 0);
                                                                o_7 = ATgetArgument(t, 1);
                                                                {
                                                                  static ATerm z_0 (ATerm t);
                                                                  static ATerm z_0 (ATerm t)
                                                                  {
                                                                    t = o_7;
                                                                    return(t);
                                                                  }
                                                                  t = n_7;
                                                                  t = foldr_2_0(z_0, a_1, t);
                                                                }
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_List_1))
                                                                  {
                                                                    n_7 = ATgetArgument(t, 0);
                                                                    t = n_7;
                                                                    t = foldr_2_0(b_1, c_1, t);
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_Tuple_1))
                                                                      {
                                                                        n_7 = ATgetArgument(t, 0);
                                                                        t = n_7;
                                                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                          {
                                                                            d_7 = ATgetFirst((ATermList) t);
                                                                            e_7 = (ATerm) ATgetNext((ATermList) t);
                                                                            t = e_7;
                                                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                              {
                                                                                ATerm d_4 = t;
                                                                                int e_4 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = i_17(n_7, m_7, t);
                                                                                    LocalPopChoice(e_4);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = d_4;
                                                                                    t = d_7;
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                t = i_17(n_7, m_7, t);
                                                                              }
                                                                          }
                                                                        else
                                                                          {
                                                                            t = i_17(n_7, m_7, t);
                                                                          }
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_CharCong_1))
                                                                          {
                                                                            n_7 = ATgetArgument(t, 0);
                                                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, n_7));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_RealCong_1))
                                                                              {
                                                                                n_7 = ATgetArgument(t, 0);
                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, n_7));
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_IntCong_1))
                                                                                  {
                                                                                    n_7 = ATgetArgument(t, 0);
                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, n_7));
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_StrCong_1))
                                                                                      {
                                                                                        n_7 = ATgetArgument(t, 0);
                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, n_7));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                                                          {
                                                                                            n_7 = ATgetArgument(t, 0);
                                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, n_7), (ATerm) ATempty);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_ModCong_2))
                                                                                              {
                                                                                                n_7 = ATgetArgument(t, 0);
                                                                                                o_7 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, n_7), o_7);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_ListCong_2))
                                                                                                  {
                                                                                                    n_7 = ATgetArgument(t, 0);
                                                                                                    o_7 = ATgetArgument(t, 1);
                                                                                                    {
                                                                                                      static ATerm d_1 (ATerm t);
                                                                                                      static ATerm d_1 (ATerm t)
                                                                                                      {
                                                                                                        t = o_7;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = n_7;
                                                                                                      t = foldr_2_0(d_1, e_1, t);
                                                                                                    }
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                                                      {
                                                                                                        n_7 = ATgetArgument(t, 0);
                                                                                                        t = n_7;
                                                                                                        t = foldr_2_0(f_1, g_1, t);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                                                          {
                                                                                                            n_7 = ATgetArgument(t, 0);
                                                                                                            o_7 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_g_2, (ATerm) ATinsert(CheckATermList(o_7), n_7));
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                                                              {
                                                                                                                n_7 = ATgetArgument(t, 0);
                                                                                                                t = n_7;
                                                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                  {
                                                                                                                    d_7 = ATgetFirst((ATermList) t);
                                                                                                                    e_7 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                    t = e_7;
                                                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                      {
                                                                                                                        ATerm f_4 = t;
                                                                                                                        int g_4 = stack_ptr;
                                                                                                                        if((PushChoice() == 0))
                                                                                                                          {
                                                                                                                            t = j_17(n_7, m_7, t);
                                                                                                                            LocalPopChoice(g_4);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            t = f_4;
                                                                                                                            t = d_7;
                                                                                                                          }
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = j_17(n_7, m_7, t);
                                                                                                                      }
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = j_17(n_7, m_7, t);
                                                                                                                  }
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                                                  {
                                                                                                                    t = term_h_4;
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                                                      {
                                                                                                                        n_7 = ATgetArgument(t, 0);
                                                                                                                        o_7 = ATgetArgument(t, 1);
                                                                                                                        t = o_7;
                                                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                                                          {
                                                                                                                            f_7 = ATgetArgument(t, 0);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          _fail(t);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_j_4, (ATerm) ATinsert(ATinsert(ATempty, f_7), n_7));
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                                                          {
                                                                                                                            n_7 = ATgetArgument(t, 0);
                                                                                                                            t = n_7;
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                                                              {
                                                                                                                                n_7 = ATgetArgument(t, 0);
                                                                                                                                o_7 = ATgetArgument(t, 1);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, n_7, o_7, term_l_4);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                                                  {
                                                                                                                                    n_7 = ATgetArgument(t, 0);
                                                                                                                                    o_7 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, n_7, o_7, term_l_4);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                                                      {
                                                                                                                                        n_7 = ATgetArgument(t, 0);
                                                                                                                                        o_7 = ATgetArgument(t, 1);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, n_7, (ATerm)ATempty, o_7);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_SwitchChoice_3))
                                                                                                                                          {
                                                                                                                                            n_7 = ATgetArgument(t, 0);
                                                                                                                                            o_7 = ATgetArgument(t, 1);
                                                                                                                                            l_7 = ATgetArgument(t, 2);
                                                                                                                                            {
                                                                                                                                              ATerm a_11 = NULL,b_11 = NULL,o_12 = NULL;
                                                                                                                                              t = m_7;
                                                                                                                                              t = new_0_0(t);
                                                                                                                                              o_12 = t;
                                                                                                                                              t = (ATerm) ATmakeAppl(sym_Var_1, o_12);
                                                                                                                                              t = new_0_0(t);
                                                                                                                                              b_11 = t;
                                                                                                                                              t = o_7;
                                                                                                                                              {
                                                                                                                                                static ATerm h_1 (ATerm t);
                                                                                                                                                static ATerm i_1 (ATerm t);
                                                                                                                                                static ATerm h_1 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  t = l_7;
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                static ATerm i_1 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  ATerm p_12 = NULL,t_12 = NULL,u_12 = NULL;
                                                                                                                                                  if(match_cons(t, sym__2))
                                                                                                                                                    {
                                                                                                                                                      ATerm n_4 = ATgetArgument(t, 0);
                                                                                                                                                      if(match_cons(n_4, sym__2))
                                                                                                                                                        {
                                                                                                                                                          p_12 = ATgetArgument(n_4, 0);
                                                                                                                                                          t_12 = ATgetArgument(n_4, 1);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        _fail(t);
                                                                                                                                                      u_12 = ATgetArgument(t, 1);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    _fail(t);
                                                                                                                                                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, p_12, (ATerm) ATmakeAppl(sym_Var_1, b_11))), (ATerm)ATmakeAppl(sym_BA_2, t_12, (ATerm) ATmakeAppl(sym_Var_1, o_12)), (ATerm) ATmakeAppl(sym_BA_2, u_12, (ATerm) ATmakeAppl(sym_Var_1, o_12)));
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = foldr_2_0(h_1, i_1, t);
                                                                                                                                              }
                                                                                                                                              a_11 = t;
                                                                                                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, o_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, n_7, (ATerm) ATmakeAppl(sym_Var_1, b_11)), a_11));
                                                                                                                                            }
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_SwitchChoiceNoOtherwise_2))
                                                                                                                                              {
                                                                                                                                                n_7 = ATgetArgument(t, 0);
                                                                                                                                                o_7 = ATgetArgument(t, 1);
                                                                                                                                                t = (ATerm) ATmakeAppl(sym_SwitchChoice_3, n_7, o_7, term_o_4);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                if(match_cons(t, sym_IfThen_2))
                                                                                                                                                  {
                                                                                                                                                    n_7 = ATgetArgument(t, 0);
                                                                                                                                                    o_7 = ATgetArgument(t, 1);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_CondChoice_3, n_7, o_7, term_l_4);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  {
                                                                                                                                                    if(match_cons(t, sym_CondChoice_3))
                                                                                                                                                      {
                                                                                                                                                        n_7 = ATgetArgument(t, 0);
                                                                                                                                                        o_7 = ATgetArgument(t, 1);
                                                                                                                                                        l_7 = ATgetArgument(t, 2);
                                                                                                                                                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Where_1, n_7), o_7, l_7);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      {
                                                                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                                                                          {
                                                                                                                                                            n_7 = ATgetArgument(t, 0);
                                                                                                                                                            o_7 = ATgetArgument(t, 1);
                                                                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, o_7, n_7);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          {
                                                                                                                                                            if(match_cons(t, sym_PrimT_3))
                                                                                                                                                              {
                                                                                                                                                                n_7 = ATgetArgument(t, 0);
                                                                                                                                                                o_7 = ATgetArgument(t, 1);
                                                                                                                                                                l_7 = ATgetArgument(t, 2);
                                                                                                                                                                {
                                                                                                                                                                  ATerm f_16 = NULL;
                                                                                                                                                                  t = n_7;
                                                                                                                                                                  t = un_double_quote_0_0(t);
                                                                                                                                                                  f_16 = t;
                                                                                                                                                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, f_16, o_7, l_7);
                                                                                                                                                                }
                                                                                                                                                              }
                                                                                                                                                            else
                                                                                                                                                              {
                                                                                                                                                                if(match_cons(t, sym_PrimNoArgs_1))
                                                                                                                                                                  {
                                                                                                                                                                    n_7 = ATgetArgument(t, 0);
                                                                                                                                                                    {
                                                                                                                                                                      ATerm h_16 = NULL;
                                                                                                                                                                      t = n_7;
                                                                                                                                                                      t = un_double_quote_0_0(t);
                                                                                                                                                                      h_16 = t;
                                                                                                                                                                      t = (ATerm) ATmakeAppl(sym_Prim_2, h_16, (ATerm) ATempty);
                                                                                                                                                                    }
                                                                                                                                                                  }
                                                                                                                                                                else
                                                                                                                                                                  {
                                                                                                                                                                    if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                                                                      {
                                                                                                                                                                        n_7 = ATgetArgument(t, 0);
                                                                                                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, n_7, (ATerm) ATempty);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      {
                                                                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                                                                          {
                                                                                                                                                                            n_7 = ATgetArgument(t, 0);
                                                                                                                                                                            o_7 = ATgetArgument(t, 1);
                                                                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDef_3, n_7, (ATerm)ATempty, o_7);
                                                                                                                                                                          }
                                                                                                                                                                        else
                                                                                                                                                                          {
                                                                                                                                                                            if(match_cons(t, sym_SRDefT_4))
                                                                                                                                                                              {
                                                                                                                                                                                n_7 = ATgetArgument(t, 0);
                                                                                                                                                                                o_7 = ATgetArgument(t, 1);
                                                                                                                                                                                l_7 = ATgetArgument(t, 2);
                                                                                                                                                                                h_7 = ATgetArgument(t, 3);
                                                                                                                                                                                t = h_7;
                                                                                                                                                                                if(match_cons(t, sym_StratRule_3))
                                                                                                                                                                                  {
                                                                                                                                                                                    j_7 = ATgetArgument(t, 0);
                                                                                                                                                                                    k_7 = ATgetArgument(t, 1);
                                                                                                                                                                                    g_7 = ATgetArgument(t, 2);
                                                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, n_7, o_7, l_7, (ATerm) ATmakeAppl(sym_Seq_2, j_7, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, g_7), k_7)));
                                                                                                                                                                                  }
                                                                                                                                                                                else
                                                                                                                                                                                  {
                                                                                                                                                                                    if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                                                                                                                      {
                                                                                                                                                                                        j_7 = ATgetArgument(t, 0);
                                                                                                                                                                                        k_7 = ATgetArgument(t, 1);
                                                                                                                                                                                      }
                                                                                                                                                                                    else
                                                                                                                                                                                      _fail(t);
                                                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, n_7, o_7, l_7, (ATerm) ATmakeAppl(sym_Seq_2, j_7, k_7));
                                                                                                                                                                                  }
                                                                                                                                                                              }
                                                                                                                                                                            else
                                                                                                                                                                              {
                                                                                                                                                                                if(match_cons(t, sym_SRDef_3))
                                                                                                                                                                                  {
                                                                                                                                                                                    n_7 = ATgetArgument(t, 0);
                                                                                                                                                                                    o_7 = ATgetArgument(t, 1);
                                                                                                                                                                                    l_7 = ATgetArgument(t, 2);
                                                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, n_7, o_7, (ATerm)ATempty, l_7);
                                                                                                                                                                                  }
                                                                                                                                                                                else
                                                                                                                                                                                  {
                                                                                                                                                                                    if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                                                                      {
                                                                                                                                                                                        n_7 = ATgetArgument(t, 0);
                                                                                                                                                                                        o_7 = ATgetArgument(t, 1);
                                                                                                                                                                                        t = (ATerm) ATmakeAppl(sym_SRDefT_4, n_7, (ATerm)ATempty, (ATerm)ATempty, o_7);
                                                                                                                                                                                      }
                                                                                                                                                                                    else
                                                                                                                                                                                      {
                                                                                                                                                                                        if(match_cons(t, sym_RDec_2))
                                                                                                                                                                                          {
                                                                                                                                                                                            n_7 = ATgetArgument(t, 0);
                                                                                                                                                                                            o_7 = ATgetArgument(t, 1);
                                                                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDecT_3, n_7, o_7, (ATerm) ATempty);
                                                                                                                                                                                          }
                                                                                                                                                                                        else
                                                                                                                                                                                          {
                                                                                                                                                                                            if(match_cons(t, sym_RDecNoArgs_1))
                                                                                                                                                                                              {
                                                                                                                                                                                                n_7 = ATgetArgument(t, 0);
                                                                                                                                                                                                t = (ATerm) ATmakeAppl(sym_RDec_2, n_7, (ATerm) ATempty);
                                                                                                                                                                                              }
                                                                                                                                                                                            else
                                                                                                                                                                                              {
                                                                                                                                                                                                if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                                                                                  {
                                                                                                                                                                                                    n_7 = ATgetArgument(t, 0);
                                                                                                                                                                                                    o_7 = ATgetArgument(t, 1);
                                                                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_RDef_3, n_7, (ATerm)ATempty, o_7);
                                                                                                                                                                                                  }
                                                                                                                                                                                                else
                                                                                                                                                                                                  {
                                                                                                                                                                                                    if(match_cons(t, sym_Module_2))
                                                                                                                                                                                                      {
                                                                                                                                                                                                        ATerm q_4 = ATgetArgument(t, 0);
                                                                                                                                                                                                        o_7 = ATgetArgument(t, 1);
                                                                                                                                                                                                      }
                                                                                                                                                                                                    else
                                                                                                                                                                                                      _fail(t);
                                                                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Specification_1, o_7);
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
    }
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = try_1_0(k_1, t);
  t = topdown_1_0(l_1, t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL;
  l_17 = t;
  t = SSL_explode_term(l_17);
  if(match_cons(t, sym__2))
    {
      ATerm r_4 = ATgetArgument(t, 0);
      ATerm s_4 = ATgetArgument(t, 1);
      if(((ATgetType(s_4) == AT_LIST) && !(ATisEmpty(s_4))))
        {
          k_17 = ATgetFirst((ATermList) s_4);
          {
            ATerm t_4 = (ATerm) ATgetNext((ATermList) s_4);
            if(((ATgetType(t_4) != AT_LIST) || !(ATisEmpty(t_4))))
              _fail(t);
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = k_17;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = repeat_1_0(Desugar_0_0, t);
  t = try_1_0(DesugarOnce_0_0, t);
  return(t);
}
ATerm stratego_desugar_0_0 (ATerm t)
{
  t = io_wrap_1_0(j_1, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = stratego_desugar_0_0(t);
  return(t);
}
