#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_WaitStatus_3;
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
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_FILE_1;
Symbol sym_TempFiles_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
static void init_module_constructors (void)
{
  sym_Tool_1 = ATmakeSymbol("Tool", 1, ATfalse);
  ATprotectSymbol(sym_Tool_1);
  sym_Repository_0 = ATmakeSymbol("Repository", 0, ATfalse);
  ATprotectSymbol(sym_Repository_0);
  sym_Import_0 = ATmakeSymbol("Import", 0, ATfalse);
  ATprotectSymbol(sym_Import_0);
  sym_Imported_1 = ATmakeSymbol("Imported", 1, ATfalse);
  ATprotectSymbol(sym_Imported_1);
  sym_XTC_0 = ATmakeSymbol("XTC", 0, ATfalse);
  ATprotectSymbol(sym_XTC_0);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
  sym_R__OK_0 = ATmakeSymbol("R_OK", 0, ATfalse);
  ATprotectSymbol(sym_R__OK_0);
  sym_Stream_1 = ATmakeSymbol("Stream", 1, ATfalse);
  ATprotectSymbol(sym_Stream_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
  sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
  ATprotectSymbol(sym_Input_1);
  sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
  ATprotectSymbol(sym_Output_1);
  sym_Binary_0 = ATmakeSymbol("Binary", 0, ATfalse);
  ATprotectSymbol(sym_Binary_0);
  sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
  ATprotectSymbol(sym_Statistics_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
}
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_o_31;
ATerm term_o_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_i_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_g_28;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_s_27;
ATerm term_q_27;
ATerm term_j_27;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_v_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_t_24;
ATerm term_r_24;
ATerm term_f_24;
ATerm term_t_23;
ATerm term_k_22;
ATerm term_g_22;
ATerm term_y_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_p_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_h_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_p_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_z_19;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_o_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_d_18;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_l_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_p_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_w_13;
ATerm term_t_13;
ATerm term_p_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_i_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_x_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_k_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_j_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_9, term_s_8, term_m_9);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_9, term_r_9, term_t_9);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_9, term_z_9, term_a_10);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_10, term_f_10, term_g_10);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_10, term_l_10, term_m_10);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_10, term_r_10, term_s_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_10, term_w_10, term_x_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_10, term_a_11, term_b_11);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_11, term_e_11, term_f_11);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_11, term_j_11, term_n_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_s_11, term_u_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_11, term_x_11, term_b_12);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_12, term_e_12, term_f_12);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_12, term_i_12, term_m_12);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_12, term_p_12, term_q_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_12, term_u_12, term_v_12);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_12, term_z_12, term_a_13);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_13, term_d_13, term_f_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_13, term_j_13, term_k_13);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_13, term_p_13, term_t_13);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_13, term_z_13, term_a_14);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_14, term_i_14, term_j_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_14, term_r_14, term_s_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_14, term_y_14, term_z_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_c_15, term_e_15);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_15, term_i_15, term_j_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_15, term_r_15, term_s_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_15, term_w_15, term_x_15);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym__2, term_z_20, term_m_21);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym__2, term_z_20, term_a_21);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym__2, term_k_18, term_j_18);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym__2, term_j_8, term_c_25);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_25);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym__2, term_n_25, term_o_18);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(sym__2, term_c_26, term_d_26);
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym__2, term_t_28, term_o_18);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym__2, term_z_28, term_o_18);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym__2, term_q_27, term_o_18);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym__2, term_o_31, term_o_18);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Box.pp.af", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table.pp.af", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm w_5 (ATerm p_28, ATerm q_28, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm e_6 (ATerm n_17, ATerm o_17, ATerm t);
static ATerm h_6 (ATerm u_65 (ATerm), ATerm i_166, ATerm v_17, ATerm t);
static ATerm e_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm k_82 (ATerm), ATerm l_82 (ATerm), ATerm t);
static ATerm i_6 (ATerm f_14, ATerm g_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm w_70 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm j_64 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm l_83 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm a_71 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm k_7 (ATerm v_6, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm k_6 (ATerm a_79 (ATerm), ATerm x_29, ATerm v_29, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm n_80 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm m_80 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm o_80 (ATerm), ATerm t);
static ATerm y_5 (ATerm r_74 (ATerm), ATerm s_74 (ATerm), ATerm q_24, ATerm p_24, ATerm t);
static ATerm z_5 (ATerm o_74 (ATerm), ATerm m_24, ATerm l_24, ATerm t);
static ATerm c_1 (ATerm t);
static ATerm a_6 (ATerm h_32, ATerm i_32, ATerm j_32, ATerm t);
static ATerm b_6 (ATerm q_80 (ATerm), ATerm r_32, ATerm q_32, ATerm t);
static ATerm d_6 (ATerm s_34, ATerm t_34, ATerm t);
static ATerm q_13 (ATerm e_13, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm c_6 (ATerm t_17, ATerm t);
static ATerm f_6 (ATerm a_35, ATerm b_35, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm g_16 (ATerm d_14, ATerm t);
static ATerm j_16 (ATerm l_14, ATerm m_14, ATerm q_14, ATerm t);
static ATerm k_16 (ATerm h_15, ATerm k_15, ATerm m_15, ATerm t);
static ATerm g_6 (ATerm t);
static ATerm j_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm g_78 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm p_68 (ATerm), ATerm q_68 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm k_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm q_20 (ATerm u_19, ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm l_6 (ATerm n_14, ATerm o_14, ATerm t);
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm m_6 (ATerm p_31, ATerm q_31, ATerm t);
ATerm end_scope_1_0 (ATerm x_78 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm x_79 (ATerm), ATerm y_79 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm w_78 (ATerm), ATerm t);
static ATerm f_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm x_82 (ATerm), ATerm t);
static ATerm m_3 (ATerm t);
ATerm xtc_io_1_0 (ATerm y_82 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm u_6 (ATerm k_33, ATerm l_33, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm s_6 (ATerm k_31, ATerm l_31, ATerm j_31, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm i_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm n_6 (ATerm j_28, ATerm k_28, ATerm t);
ATerm foldr_2_0 (ATerm c_77 (ATerm), ATerm d_77 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm j_80 (ATerm), ATerm t);
static ATerm s_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm need_help_1_0 (ATerm n_84 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm a_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm u_70 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm q_6 (ATerm h_50, ATerm i_50, ATerm t);
ATerm debug_1_0 (ATerm s_65 (ATerm), ATerm t);
ATerm map_1_0 (ATerm k_70 (ATerm), ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm r_6 (ATerm b_33, ATerm c_33, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm k_57 (ATerm), ATerm l_57 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm l_86 (ATerm), ATerm t);
static ATerm v_5 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm t_6 (ATerm t);
ATerm parse_options_1_0 (ATerm k_86 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm d_8 (ATerm t);
ATerm io_pp_pp_table_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm w_5 (ATerm p_28, ATerm q_28, ATerm t)
{
  ATerm x_4 = t;
  int f_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(p_28, q_28);
      LocalPopChoice(f_8);
    }
  else
    {
      t = x_4;
      t = SSL_subtr(p_28, q_28);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,j_0 = NULL;
  t = term_j_8;
  {
    ATerm k_8 = t;
    int r_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(r_8);
      }
    else
      {
        t = k_8;
        t = term_s_8;
      }
  }
  b_0 = t;
  t = term_s_8;
  j_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_0, term_s_8);
  t = w_5(b_0, j_0, t);
  c_0 = t;
  t = SSL_int_to_string(c_0);
  a_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_j_8);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm x_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_t_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm d_1 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          x_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_u_8);
      d_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_0, (ATerm) ATinsert(ATempty, term_u_8));
      t = d_6(x_0, d_1, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm e_6 (ATerm n_17, ATerm o_17, ATerm t)
{
  ATerm e_1 = NULL;
  t = SSL_write_term_to_stream_baf(n_17, o_17);
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_1);
  return(t);
}
static ATerm h_6 (ATerm u_65 (ATerm), ATerm i_166, ATerm v_17, ATerm t)
{
  ATerm f_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_166, term_v_8);
  t = g_6(t);
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_1, v_17);
  t = u_65(t);
  t = fclose_0_0(t);
  t = v_17;
  return(t);
}
static ATerm e_0 (ATerm t)
{
  ATerm q_1 = NULL,r_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_8 = ATgetArgument(t, 0);
      if(match_cons(y_8, sym_Stream_1))
        {
          q_1 = ATgetArgument(y_8, 0);
        }
      else
        _fail(t);
      r_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_6(q_1, r_1, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm k_82 (ATerm), ATerm l_82 (ATerm), ATerm t)
{
  ATerm g_1 = NULL,h_1 = NULL;
  h_1 = t;
  t = xtc_new_file_0_0(t);
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_1, h_1);
  t = h_6(e_0, g_1, h_1, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, g_1);
  t = xtc_transform_file_2_0(k_82, l_82, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm i_6 (ATerm f_14, ATerm g_14, ATerm t)
{
  t = SSL_execvp(f_14, g_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL;
  v_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      w_2 = ATgetArgument(t, 0);
      {
        ATerm m_0 = NULL,q_0 = NULL;
        t = SSL_int_to_string(w_2);
        m_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_9), m_0), term_z_8);
        q_0 = t;
        t = SSL_concat_strings(q_0);
      }
    }
  else
    {
      ATerm l_1 = NULL,m_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          w_2 = ATgetArgument(t, 0);
          x_2 = ATgetArgument(t, 1);
          y_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(x_2);
      l_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_2), term_c_9), l_1), term_b_9), w_2);
      m_1 = t;
      t = SSL_concat_strings(m_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm w_70 (ATerm), ATerm t)
{
  ATerm c_3 = NULL;
  static ATerm f_0 (ATerm t)
  {
    t = w_70(t);
    if(((c_3 != NULL) && (c_3 != t)))
      _fail(t);
    else
      c_3 = t;
    return(t);
  }
  t = fetch_1_0(f_0, t);
  t = not_null(c_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm e_3 = NULL;
  e_3 = t;
  {
    ATerm e_9 = t;
    int f_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm h_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm i_9 = ATgetArgument(t, 0);
              if((e_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm j_9 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_15), term_t_15), term_l_15), term_f_15), term_a_15), term_t_14), term_k_14), term_b_14), term_w_13), term_m_13), term_h_13), term_b_13), term_w_12), term_r_12), term_n_12), term_g_12), term_c_12), term_v_11), term_o_11), term_g_11), term_c_11), term_y_10), term_u_10), term_o_10), term_i_10), term_c_10), term_u_9), term_n_9);
        t = fetch_elem_1_0(h_0, t);
        LocalPopChoice(f_9);
      }
    else
      {
        t = e_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, e_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm l_3 = NULL,u_3 = NULL;
  l_3 = t;
  {
    ATerm a_16 = t;
    int b_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm d_16 = ATgetArgument(t, 0);
            u_3 = ATgetArgument(t, 1);
            {
              ATerm e_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(b_16);
        {
          ATerm h_16 = t;
          int i_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_1 = NULL,w_1 = NULL,x_1 = NULL;
              t = u_3;
              {
                ATerm m_16 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = m_16;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              u_1 = t;
              t = term_n_16;
              w_1 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, u_1), term_o_16);
              x_1 = t;
              t = SSL_printnl(w_1, x_1);
              t = (ATerm) ATmakeAppl(sym__2, term_n_16, (ATerm) ATinsert(ATinsert(ATempty, u_1), term_o_16));
              LocalPopChoice(i_16);
            }
          else
            {
              t = h_16;
              t = l_3;
            }
        }
      }
    else
      {
        t = a_16;
        t = l_3;
      }
  }
  t = l_3;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm j_64 (ATerm), ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL;
  e_4 = t;
  t = fork_0_0(t);
  d_4 = t;
  {
    ATerm s_16 = t;
    int t_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = e_4;
        t = j_64(t);
        LocalPopChoice(t_16);
      }
    else
      {
        t = s_16;
        t = SSL_waitpid(d_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm u_17 = ATgetArgument(t, 0);
            if(((ATgetType(u_17) != AT_INT) || (ATgetInt((ATermInt) u_17) != 0)))
              _fail(t);
            {
              ATerm b_18 = ATgetArgument(t, 1);
            }
            {
              ATerm c_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = e_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm l_83 (ATerm), ATerm t)
{
  ATerm j_4 = NULL,l_4 = NULL;
  l_4 = t;
  t = l_83(t);
  t = xtc_find_0_0(t);
  j_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_4, l_4);
  {
    static ATerm s_0 (ATerm t)
    {
      ATerm m_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, j_4, l_4);
      t = i_6(j_4, l_4, t);
      t = term_d_18;
      m_4 = t;
      t = SSL_exit(m_4);
      return(t);
    }
    t = fork_and_wait_1_0(s_0, t);
  }
  t = l_4;
  return(t);
}
ATerm at_end_1_0 (ATerm a_71 (ATerm), ATerm t)
{
  static ATerm p_5 (ATerm t)
  {
    ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL;
    o_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_5 = ATgetFirst((ATermList) t);
        n_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm h_2 = NULL,q_2 = NULL,b_2 = NULL;
          t = SSLgetAnnotations(o_5);
          h_2 = t;
          t = n_5;
          t = p_5(t);
          q_2 = t;
          t = (ATerm) ATinsert(CheckATermList(q_2), m_5);
          b_2 = t;
          t = SSLsetAnnotations(b_2, h_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_5;
        t = a_71(t);
      }
    return(t);
  }
  t = p_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm o_4 = NULL,p_4 = NULL,t_4 = NULL;
  o_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_4;
    }
  else
    {
      static ATerm u_0 (ATerm t)
      {
        t = not_null(t_4);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_4 = ATgetFirst((ATermList) t);
          if(((t_4 != NULL) && (t_4 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            t_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_4;
      t = at_end_1_0(u_0, t);
    }
  return(t);
}
static ATerm k_7 (ATerm v_6, ATerm t)
{
  ATerm w_6 = NULL;
  t = SSL_explode_term(v_6);
  if(match_cons(t, sym__2))
    {
      ATerm e_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      w_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm y_6 = NULL,d_7 = NULL,e_7 = NULL;
  e_7 = t;
  if(match_cons(t, sym__2))
    {
      y_6 = ATgetArgument(t, 0);
      d_7 = ATgetArgument(t, 1);
      {
        ATerm f_18 = t;
        int g_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm w_0 (ATerm t)
            {
              t = d_7;
              return(t);
            }
            t = y_6;
            t = at_end_1_0(w_0, t);
            LocalPopChoice(g_18);
          }
        else
          {
            t = f_18;
            t = k_7(e_7, t);
          }
      }
    }
  else
    {
      t = k_7(e_7, t);
    }
  return(t);
}
static ATerm k_6 (ATerm a_79 (ATerm), ATerm x_29, ATerm v_29, ATerm t)
{
  ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL;
  o_7 = t;
  t = a_79(t);
  l_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_7, x_29, v_29);
  t = s_6(l_7, x_29, v_29, t);
  {
    ATerm h_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_7 = NULL;
        t = term_j_18;
        t_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_7, term_j_18);
        t = r_6(l_7, t_7, t);
        LocalPopChoice(i_18);
      }
    else
      {
        t = h_18;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_7 = ATgetFirst((ATermList) t);
      n_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_j_18;
  p_7 = t;
  t = (ATerm) ATinsert(CheckATermList(n_7), (ATerm) ATinsert(CheckATermList(m_7), x_29));
  q_7 = t;
  t = SSL_table_put(l_7, p_7, q_7);
  t = o_7;
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_k_18;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL,c_8 = NULL,e_8 = NULL,i_8 = NULL,l_8 = NULL,m_8 = NULL;
  t = P__tmpdir_0_0(t);
  c_8 = t;
  t = term_l_18;
  m_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_8, term_l_18);
  t = q_6(c_8, m_8, t);
  i_8 = t;
  t = term_m_18;
  l_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_8, term_m_18);
  t = q_6(i_8, l_8, t);
  e_8 = t;
  t = SSL_mkstemp(e_8);
  if(match_cons(t, sym__2))
    {
      w_7 = ATgetArgument(t, 0);
      v_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_o_18;
  x_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_7, term_o_18);
  t = k_6(y_0, w_7, x_7, t);
  t = SSL_close(v_7);
  t = w_7;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t)
{
  ATerm o_8 = NULL,p_8 = NULL;
  o_8 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm w_8 = NULL,x_8 = NULL;
      t = o_8;
      t = xtc_new_file_0_0(t);
      w_8 = t;
      t = v_0(t);
      x_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_8, (ATerm) ATinsert(ATinsert(ATempty, w_8), term_q_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, w_8);
    }
  else
    {
      ATerm d_9 = NULL,h_9 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          p_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_8;
      t = xtc_new_file_0_0(t);
      d_9 = t;
      t = v_0(t);
      h_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_9), term_q_18), p_8), term_r_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, d_9);
    }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm l_9 = NULL;
  static ATerm z_0 (ATerm t)
  {
    ATerm o_9 = NULL,p_9 = NULL;
    o_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_9), o_9);
    t = r_6(not_null(l_9), o_9, t);
    p_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_9, p_9);
    return(t);
  }
  if(((l_9 != NULL) && (l_9 != t)))
    _fail(t);
  else
    l_9 = t;
  t = SSL_table_keys(l_9);
  t = map_1_0(z_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm n_80 (ATerm), ATerm t)
{
  ATerm w_9 = NULL;
  w_9 = t;
  {
    ATerm t_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_9 = NULL;
        t = term_j_8;
        t = get_config_0_0(t);
        y_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_9, term_c_15);
        t = geq_0_0(t);
        t = w_9;
        t = n_80(t);
        LocalPopChoice(u_18);
      }
    else
      {
        t = t_18;
        t = w_9;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm m_80 (ATerm), ATerm t)
{
  ATerm b_10 = NULL;
  b_10 = t;
  {
    ATerm x_18 = t;
    int c_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_10 = NULL;
        t = term_j_8;
        t = get_config_0_0(t);
        e_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_10, term_x_11);
        t = geq_0_0(t);
        t = b_10;
        t = m_80(t);
        LocalPopChoice(c_19);
      }
    else
      {
        t = x_18;
        t = b_10;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm o_80 (ATerm), ATerm t)
{
  ATerm h_10 = NULL;
  h_10 = t;
  {
    ATerm f_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_10 = NULL;
        t = term_j_8;
        t = get_config_0_0(t);
        j_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_10, term_f_10);
        t = geq_0_0(t);
        t = h_10;
        t = o_80(t);
        LocalPopChoice(g_19);
      }
    else
      {
        t = f_19;
        t = h_10;
      }
  }
  return(t);
}
static ATerm y_5 (ATerm r_74 (ATerm), ATerm s_74 (ATerm), ATerm q_24, ATerm p_24, ATerm t)
{
  t = s_74(t);
  {
    static ATerm a_1 (ATerm t)
    {
      ATerm n_10 = NULL;
      n_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_24, n_10);
      t = r_74(t);
      return(t);
    }
    t = fetch_1_0(a_1, t);
  }
  t = p_24;
  return(t);
}
static ATerm z_5 (ATerm o_74 (ATerm), ATerm m_24, ATerm l_24, ATerm t)
{
  static ATerm t_11 (ATerm t)
  {
    ATerm i_11 = NULL,k_11 = NULL,l_11 = NULL;
    i_11 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_11 = ATgetFirst((ATermList) t);
            l_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_19 = t;
          int i_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_11;
              {
                static ATerm b_1 (ATerm t)
                {
                  t = l_24;
                  return(t);
                }
                t = y_5(o_74, b_1, k_11, l_11, t);
              }
              t = t_11(t);
              LocalPopChoice(i_19);
            }
          else
            {
              t = h_19;
              {
                ATerm j_3 = NULL,q_3 = NULL,d_2 = NULL;
                t = SSLgetAnnotations(i_11);
                j_3 = t;
                t = l_11;
                t = t_11(t);
                q_3 = t;
                t = (ATerm) ATinsert(CheckATermList(q_3), k_11);
                d_2 = t;
                t = SSLsetAnnotations(d_2, j_3);
              }
            }
        }
      }
    return(t);
  }
  t = m_24;
  t = t_11(t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm j_12 = NULL;
  if(match_cons(t, sym__2))
    {
      j_12 = ATgetArgument(t, 0);
      if((j_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm a_6 (ATerm h_32, ATerm i_32, ATerm j_32, ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL;
  y_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_32, i_32);
  {
    ATerm j_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_19 = ATgetArgument(t, 0);
            ATerm m_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_32, i_32);
        t = r_6(h_32, i_32, t);
        LocalPopChoice(k_19);
      }
    else
      {
        t = j_19;
        t = (ATerm) ATempty;
      }
  }
  a_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_12, j_32);
  t = z_5(c_1, a_12, j_32, t);
  z_11 = t;
  t = SSL_table_put(h_32, i_32, z_11);
  t = y_11;
  return(t);
}
static ATerm b_6 (ATerm q_80 (ATerm), ATerm r_32, ATerm q_32, ATerm t)
{
  static ATerm i_1 (ATerm t)
  {
    ATerm k_12 = NULL,l_12 = NULL;
    if(match_cons(t, sym__2))
      {
        k_12 = ATgetArgument(t, 0);
        l_12 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, r_32, k_12, l_12);
    t = q_80(t);
    return(t);
  }
  t = q_32;
  t = map_1_0(i_1, t);
  return(t);
}
static ATerm d_6 (ATerm s_34, ATerm t_34, ATerm t)
{
  t = SSL_access(s_34, t_34);
  return(t);
}
static ATerm q_13 (ATerm e_13, ATerm t)
{
  t = SSL_fclose(e_13);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_13 = NULL,o_13 = NULL;
  o_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_13 = ATgetArgument(t, 0);
      {
        ATerm n_19 = t;
        int o_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_13);
            LocalPopChoice(o_19);
          }
        else
          {
            t = n_19;
            t = q_13(o_13, t);
          }
      }
    }
  else
    {
      t = q_13(o_13, t);
    }
  return(t);
}
static ATerm c_6 (ATerm t_17, ATerm t)
{
  t = SSL_read_term_from_stream(t_17);
  return(t);
}
static ATerm f_6 (ATerm a_35, ATerm b_35, ATerm t)
{
  ATerm r_13 = NULL;
  t = SSL_fopen(a_35, b_35);
  r_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_13);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_13 = NULL;
  t = SSL_stdin_stream();
  s_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_13);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_13 = NULL;
  t = SSL_stdout_stream();
  v_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_13);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm x_13 = NULL;
  t = SSL_stderr_stream();
  x_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_13);
  return(t);
}
static ATerm g_16 (ATerm d_14, ATerm t)
{
  ATerm e_14 = NULL;
  t = SSL_explode_term(d_14);
  if(match_cons(t, sym__2))
    {
      ATerm p_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_19 = ATgetArgument(t, 1);
        if(((ATgetType(q_19) == AT_LIST) && !(ATisEmpty(q_19))))
          {
            e_14 = ATgetFirst((ATermList) q_19);
            {
              ATerm r_19 = (ATerm) ATgetNext((ATermList) q_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_14;
  if(match_cons(t, sym_stderr_0))
    {
      t = e_14;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = e_14;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = e_14;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm j_16 (ATerm l_14, ATerm m_14, ATerm q_14, ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL,d_15 = NULL,f_2 = NULL;
  t = SSLgetAnnotations(q_14);
  w_14 = t;
  t = l_14;
  if(match_cons(t, sym_Path_1))
    {
      d_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_15, m_14);
  f_2 = t;
  t = SSLsetAnnotations(f_2, w_14);
  if(match_cons(t, sym__2))
    {
      u_14 = ATgetArgument(t, 0);
      v_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_6(u_14, v_14, t);
  return(t);
}
static ATerm k_16 (ATerm h_15, ATerm k_15, ATerm m_15, ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,u_15 = NULL,j_2 = NULL;
  t = SSLgetAnnotations(m_15);
  p_15 = t;
  t = SSL_is_string(h_15);
  u_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_15, k_15);
  j_2 = t;
  t = SSLsetAnnotations(j_2, p_15);
  if(match_cons(t, sym__2))
    {
      n_15 = ATgetArgument(t, 0);
      o_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_6(n_15, o_15, t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm z_15 = NULL,c_16 = NULL,f_16 = NULL;
  z_15 = t;
  if(match_cons(t, sym__2))
    {
      c_16 = ATgetArgument(t, 0);
      f_16 = ATgetArgument(t, 1);
      {
        ATerm s_19 = t;
        int t_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_16(z_15, t);
            LocalPopChoice(t_19);
          }
        else
          {
            t = s_19;
            {
              ATerm v_19 = t;
              int y_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_16(c_16, f_16, z_15, t);
                  LocalPopChoice(y_19);
                }
              else
                {
                  t = v_19;
                  t = k_16(c_16, f_16, z_15, t);
                }
            }
          }
      }
    }
  else
    {
      t = g_16(z_15, t);
    }
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_z_19;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_16 = NULL,p_16 = NULL,q_16 = NULL;
  ATerm e_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_16 = NULL;
      r_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_16, term_j_20);
      t = g_6(t);
      LocalPopChoice(f_20);
    }
  else
    {
      t = e_20;
      t = debug_1_0(j_1, t);
      _fail(t);
    }
  p_16 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_6(q_16, t);
  l_16 = t;
  t = p_16;
  t = fclose_0_0(t);
  t = l_16;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_k_20;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_l_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm m_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_16 = NULL,v_16 = NULL;
      u_16 = t;
      t = (ATerm) ATinsert(ATempty, term_p_20);
      v_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_16, (ATerm) ATinsert(ATempty, term_p_20));
      t = d_6(u_16, v_16, t);
      LocalPopChoice(n_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = m_20;
      {
        ATerm r_20 = t;
        int s_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_20 = t;
            if((PushChoice() == 0))
              {
                ATerm w_16 = NULL,x_16 = NULL;
                w_16 = t;
                t = (ATerm) ATinsert(ATempty, term_u_8);
                x_16 = t;
                t = (ATerm) ATmakeAppl(sym__2, w_16, (ATerm) ATinsert(ATempty, term_u_8));
                t = d_6(w_16, x_16, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = t_20;
              }
            t = debug_1_0(k_1, t);
            LocalPopChoice(s_20);
          }
        else
          {
            t = r_20;
            t = debug_1_0(n_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = debug_1_0(p_1, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_u_20;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = debug_1_0(t_1, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_v_20;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL;
  k_17 = t;
  t = term_n_16;
  l_17 = t;
  t = (ATerm) ATinsert(ATempty, term_w_20);
  m_17 = t;
  t = SSL_printnl(l_17, m_17);
  t = k_17;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL;
  if(match_cons(t, sym__3))
    {
      p_17 = ATgetArgument(t, 0);
      q_17 = ATgetArgument(t, 1);
      r_17 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_6(p_17, q_17, r_17, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm s_17 = NULL,w_17 = NULL,x_17 = NULL;
  s_17 = t;
  t = term_n_16;
  w_17 = t;
  t = (ATerm) ATinsert(ATempty, term_x_20);
  x_17 = t;
  t = SSL_printnl(w_17, x_17);
  t = s_17;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL;
  y_17 = t;
  t = term_n_16;
  z_17 = t;
  t = (ATerm) ATinsert(ATempty, term_w_20);
  a_18 = t;
  t = SSL_printnl(z_17, a_18);
  t = y_17;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL;
  y_16 = t;
  t = if_verbose5_1_0(o_1, t);
  {
    ATerm y_20 = t;
    if((PushChoice() == 0))
      {
        ATerm i_17 = NULL,j_17 = NULL;
        t = term_z_20;
        i_17 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, y_16);
        j_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_z_20, (ATerm) ATmakeAppl(sym_Imported_1, y_16));
        t = r_6(i_17, j_17, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_20;
      }
  }
  a_17 = t;
  t = term_z_20;
  f_17 = t;
  t = term_a_21;
  g_17 = t;
  t = (ATerm) ATinsert(ATempty, y_16);
  h_17 = t;
  t = SSL_table_put(f_17, g_17, h_17);
  t = a_17;
  t = if_verbose4_1_0(s_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(v_1, t);
  z_16 = t;
  t = term_z_20;
  e_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_20, z_16);
  t = b_6(y_1, e_17, z_16, t);
  t = if_verbose6_1_0(z_1, t);
  t = term_z_20;
  b_17 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, y_16);
  c_17 = t;
  t = (ATerm) ATempty;
  d_17 = t;
  t = SSL_table_put(b_17, c_17, d_17);
  t = (ATerm) ATmakeAppl(sym__3, term_z_20, (ATerm)ATmakeAppl(sym_Imported_1, y_16), (ATerm) ATempty);
  t = if_verbose4_1_0(a_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm g_78 (ATerm), ATerm t)
{
  ATerm n_18 = NULL,p_18 = NULL,s_18 = NULL;
  n_18 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_18;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_18 = ATgetFirst((ATermList) t);
          s_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm b_21 = t;
        int c_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_4 = NULL,h_5 = NULL,l_5 = NULL,m_2 = NULL;
            t = SSLgetAnnotations(n_18);
            z_4 = t;
            t = p_18;
            t = g_78(t);
            h_5 = t;
            t = s_18;
            t = filter_1_0(g_78, t);
            l_5 = t;
            t = (ATerm) ATinsert(CheckATermList(l_5), h_5);
            m_2 = t;
            t = SSLsetAnnotations(m_2, z_4);
            LocalPopChoice(c_21);
          }
        else
          {
            t = b_21;
            t = s_18;
            t = filter_1_0(g_78, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm p_68 (ATerm), ATerm q_68 (ATerm), ATerm t)
{
  static ATerm v_18 (ATerm t)
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_68(t);
        t = v_18(t);
        LocalPopChoice(e_21);
      }
    else
      {
        t = d_21;
        t = q_68(t);
      }
    return(t);
  }
  t = v_18(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm f_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_21;
      t = get_config_0_0(t);
      LocalPopChoice(g_21);
    }
  else
    {
      t = f_21;
      {
        ATerm i_21 = t;
        int j_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_18 = NULL;
            t = term_k_21;
            w_18 = t;
            t = SSL_getenv(w_18);
            LocalPopChoice(j_21);
          }
        else
          {
            t = i_21;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = debug_1_0(e_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_l_21;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL;
  t = term_z_20;
  d_19 = t;
  t = term_m_21;
  e_19 = t;
  t = term_n_21;
  t = r_6(d_19, e_19, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm o_21 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_21;
      }
  }
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = debug_1_0(k_2, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_p_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm y_18 = NULL;
  t = if_verbose5_1_0(c_2, t);
  y_18 = t;
  {
    ATerm q_21 = t;
    int r_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_18 = NULL,a_19 = NULL;
        t = term_z_20;
        z_18 = t;
        t = term_a_21;
        a_19 = t;
        t = term_s_21;
        t = r_6(z_18, a_19, t);
        LocalPopChoice(r_21);
      }
    else
      {
        t = q_21;
        {
          ATerm b_19 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          b_19 = t;
          t = repeat_2_0(g_2, _id, t);
          t = b_19;
        }
      }
  }
  t = y_18;
  t = if_verbose5_1_0(i_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = debug_1_0(n_2, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_t_21;
  return(t);
}
static ATerm q_20 (ATerm u_19, ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,a_20 = NULL;
  t = term_z_20;
  x_19 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, u_19);
  a_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_20, (ATerm) ATmakeAppl(sym_Tool_1, u_19));
  t = r_6(x_19, a_20, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_21 = ATgetFirst((ATermList) t);
      if(match_cons(u_21, sym__2))
        {
          ATerm w_21 = ATgetArgument(u_21, 0);
          w_19 = ATgetArgument(u_21, 1);
        }
      else
        _fail(t);
      {
        ATerm v_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = w_19;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = debug_1_0(s_2, t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_t_21;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_z_20;
  t = table_getlist_0_0(t);
  t = debug_1_0(b_3, t);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_y_21;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL;
      t = if_verbose5_1_0(l_2, t);
      t = xtc_load_0_0(t);
      d_20 = t;
      if(match_cons(t, sym__2))
        {
          b_20 = ATgetArgument(t, 0);
          c_20 = ATgetArgument(t, 1);
          {
            ATerm c_22 = t;
            int f_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL;
                t = term_z_20;
                h_20 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, b_20);
                i_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_z_20, (ATerm) ATmakeAppl(sym_Tool_1, b_20));
                t = r_6(h_20, i_20, t);
                {
                  static ATerm p_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((c_20 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((g_20 != NULL) && (g_20 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          g_20 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(p_2, t);
                }
                t = not_null(g_20);
                LocalPopChoice(f_22);
              }
            else
              {
                t = c_22;
                t = q_20(d_20, t);
              }
          }
        }
      else
        {
          t = q_20(d_20, t);
        }
      t = if_verbose5_1_0(r_2, t);
      LocalPopChoice(b_22);
    }
  else
    {
      t = a_22;
      {
        ATerm o_20 = NULL,x_5 = NULL,j_6 = NULL;
        o_20 = t;
        t = term_n_16;
        x_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_22), o_20), term_g_22);
        j_6 = t;
        t = SSL_printnl(x_5, j_6);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_22), o_20), term_g_22);
        t = if_verbose5_1_0(u_2, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm l_6 (ATerm n_14, ATerm o_14, ATerm t)
{
  t = SSL_copy(n_14, o_14);
  return(t);
}
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm x_21 = NULL,z_21 = NULL;
  x_21 = t;
  if(match_cons(t, sym_FILE_1))
    {
      z_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm n_22 = t;
    int o_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_7 = NULL;
        t = x_21;
        t = r_0(t);
        b_7 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = b_7;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = b_7;
          }
        t = (ATerm) ATmakeAppl(sym__2, z_21, b_7);
        t = l_6(z_21, b_7, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, z_21);
        LocalPopChoice(o_22);
      }
    else
      {
        t = n_22;
        {
          ATerm r_22 = t;
          int s_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_7 = NULL;
              t = x_21;
              t = r_0(t);
              u_7 = t;
              {
                ATerm t_22 = t;
                if((PushChoice() == 0))
                  {
                    ATerm y_7 = NULL;
                    y_7 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = y_7;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = y_7;
                          }
                        else
                          {
                            t = y_7;
                            if((z_21 != t))
                              {
                                _fail(t);
                              }
                            t = y_7;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = t_22;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, z_21, u_7);
              t = l_6(z_21, u_7, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_21);
              LocalPopChoice(s_22);
            }
          else
            {
              t = r_22;
              t = x_21;
              t = r_0(t);
              if((z_21 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_21);
            }
        }
      }
  }
  return(t);
}
static ATerm m_6 (ATerm p_31, ATerm q_31, ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL;
  e_22 = t;
  {
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, p_31, q_31);
        t = r_6(p_31, q_31, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm b_23 = ATgetFirst((ATermList) t);
            d_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(v_22);
        t = SSL_table_put(p_31, q_31, d_22);
        t = (ATerm) ATmakeAppl(sym__3, p_31, q_31, d_22);
      }
    else
      {
        t = u_22;
        t = SSL_table_remove(p_31, q_31);
        t = (ATerm) ATmakeAppl(sym__2, p_31, q_31);
      }
  }
  t = e_22;
  return(t);
}
ATerm end_scope_1_0 (ATerm x_78 (ATerm), ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL,l_22 = NULL,m_22 = NULL;
  l_22 = t;
  t = x_78(t);
  j_22 = t;
  {
    ATerm c_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_22 = NULL;
        t = term_j_18;
        p_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_22, term_j_18);
        t = r_6(j_22, p_22, t);
        LocalPopChoice(d_23);
      }
    else
      {
        t = c_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_22 = ATgetFirst((ATermList) t);
      h_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_j_18;
  m_22 = t;
  t = SSL_table_put(j_22, m_22, h_22);
  t = i_22;
  {
    static ATerm d_3 (ATerm t)
    {
      ATerm q_22 = NULL;
      q_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_22, q_22);
      t = m_6(j_22, q_22, t);
      return(t);
    }
    t = map_1_0(d_3, t);
  }
  t = l_22;
  return(t);
}
ATerm restore_always_2_0 (ATerm x_79 (ATerm), ATerm y_79 (ATerm), ATerm t)
{
  ATerm e_23 = t;
  int f_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_79(t);
      t = y_79(t);
      LocalPopChoice(f_23);
    }
  else
    {
      t = e_23;
      t = y_79(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm w_78 (ATerm), ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL;
  x_22 = t;
  t = w_78(t);
  w_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_22, term_j_18);
  {
    ATerm h_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_23 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm j_23 = ATgetArgument(t, 0);
            ATerm k_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_j_18;
        g_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_22, term_j_18);
        t = r_6(w_22, g_23, t);
        LocalPopChoice(i_23);
      }
    else
      {
        t = h_23;
        t = (ATerm) ATempty;
      }
  }
  y_22 = t;
  t = term_j_18;
  z_22 = t;
  t = (ATerm) ATinsert(CheckATermList(y_22), (ATerm) ATempty);
  a_23 = t;
  t = SSL_table_put(w_22, z_22, a_23);
  t = x_22;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_k_18;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm u_23 = NULL;
  u_23 = t;
  {
    ATerm o_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(u_23);
        LocalPopChoice(p_23);
      }
    else
      {
        t = o_23;
        t = u_23;
      }
  }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_k_18;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm x_82 (ATerm), ATerm t)
{
  ATerm l_23 = NULL;
  static ATerm g_3 (ATerm t)
  {
    ATerm m_23 = NULL;
    m_23 = t;
    {
      ATerm r_23 = t;
      int s_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_23 = NULL,q_23 = NULL;
          t = term_k_18;
          n_23 = t;
          t = term_j_18;
          q_23 = t;
          t = term_t_23;
          t = r_6(n_23, q_23, t);
          LocalPopChoice(s_23);
        }
      else
        {
          t = r_23;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((l_23 != NULL) && (l_23 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          l_23 = ATgetFirst((ATermList) t);
        {
          ATerm v_23 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = l_23;
    t = map_1_0(h_3, t);
    t = m_23;
    t = end_scope_1_0(i_3, t);
    return(t);
  }
  t = begin_scope_1_0(f_3, t);
  t = restore_always_2_0(x_82, g_3, t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm w_23 = t;
  int d_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_18;
      t = get_config_0_0(t);
      LocalPopChoice(d_24);
    }
  else
    {
      t = w_23;
      t = term_f_24;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm y_82 (ATerm), ATerm t)
{
  static ATerm k_3 (ATerm t)
  {
    ATerm g_24 = t;
    int k_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_23 = NULL;
        t = term_r_18;
        t = get_config_0_0(t);
        x_23 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, x_23);
        LocalPopChoice(k_24);
      }
    else
      {
        t = g_24;
        t = term_t_8;
      }
    t = y_82(t);
    t = copy_to_1_0(m_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(k_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL;
  y_23 = t;
  t = term_o_18;
  t = whoami_0_0(t);
  z_23 = t;
  t = term_n_16;
  b_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_24), z_23), term_r_24);
  c_24 = t;
  t = SSL_printnl(b_24, c_24);
  t = term_s_8;
  a_24 = t;
  t = SSL_exit(a_24);
  t = y_23;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm e_24 = NULL;
  e_24 = t;
  if(match_string(t, "-k"))
    {
      t = e_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_24;
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL;
  h_24 = t;
  t = SSL_string_to_int(h_24);
  i_24 = t;
  t = term_a_25;
  j_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_25, i_24);
  t = u_6(j_24, i_24, t);
  t = h_24;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_b_25;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_3, o_3, r_3, t);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm n_24 = NULL;
  n_24 = t;
  if(match_string(t, "-S"))
    {
      t = n_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_24;
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm o_24 = NULL,s_24 = NULL;
  t = term_j_8;
  o_24 = t;
  t = term_c_25;
  s_24 = t;
  t = term_i_25;
  t = u_6(o_24, s_24, t);
  t = term_j_25;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_l_25;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL;
  u_24 = t;
  t = SSL_string_to_int(u_24);
  v_24 = t;
  t = term_j_8;
  w_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_8, v_24);
  t = u_6(w_24, v_24, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_24);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_m_25;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL;
  t = term_n_25;
  x_24 = t;
  t = term_o_18;
  y_24 = t;
  t = term_r_25;
  t = u_6(x_24, y_24, t);
  t = term_s_25;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_v_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm w_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_3, v_3, w_3, t);
      LocalPopChoice(y_25);
    }
  else
    {
      t = w_25;
      {
        ATerm z_25 = t;
        int a_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(x_3, y_3, z_3, t);
            LocalPopChoice(a_26);
          }
        else
          {
            t = z_25;
            t = Option_3_0(a_4, b_4, c_4, t);
          }
      }
    }
  return(t);
}
static ATerm u_6 (ATerm k_33, ATerm l_33, ATerm t)
{
  ATerm z_24 = NULL;
  t = term_b_26;
  z_24 = t;
  t = SSL_table_put(z_24, k_33, l_33);
  t = (ATerm) ATmakeAppl(sym__3, term_b_26, k_33, l_33);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm d_25 = NULL,e_25 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL;
      t = term_o_18;
      t = i_0(t);
      f_25 = t;
      t = term_c_26;
      g_25 = t;
      t = term_d_26;
      h_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_26, term_d_26, f_25);
      t = s_6(g_25, h_25, f_25, t);
      _fail(t);
    }
  else
    {
      ATerm k_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_25 = ATgetFirst((ATermList) t);
          e_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_25;
      t = d_0(t);
      t = term_o_18;
      t = g_0(t);
      k_25 = t;
      t = (ATerm) ATinsert(CheckATermList(e_25), k_25);
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm o_25 = NULL;
  o_25 = t;
  if(match_string(t, "-o"))
    {
      t = o_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_25;
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL;
  p_25 = t;
  t = term_q_18;
  q_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_18, p_25);
  t = u_6(q_25, p_25, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_25);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_e_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_4, g_4, h_4, t);
  return(t);
}
static ATerm s_6 (ATerm k_31, ATerm l_31, ATerm j_31, ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL,x_25 = NULL;
  t_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_31, l_31);
  {
    ATerm f_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_26 = ATgetArgument(t, 0);
            ATerm j_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_31, l_31);
        t = r_6(k_31, l_31, t);
        LocalPopChoice(g_26);
      }
    else
      {
        t = f_26;
        t = (ATerm) ATempty;
      }
  }
  u_25 = t;
  t = (ATerm) ATinsert(CheckATermList(u_25), j_31);
  x_25 = t;
  t = SSL_table_put(k_31, l_31, x_25);
  t = t_25;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm h_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_26 = NULL,t_26 = NULL,u_26 = NULL;
      t = term_o_18;
      t = p_0(t);
      r_26 = t;
      t = term_c_26;
      t_26 = t;
      t = term_d_26;
      u_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_26, term_d_26, r_26);
      t = s_6(t_26, u_26, r_26, t);
      _fail(t);
    }
  else
    {
      ATerm z_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_26 = ATgetFirst((ATermList) t);
          o_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_26;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_26 = ATgetFirst((ATermList) t);
          q_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_26;
      t = n_0(t);
      t = p_26;
      t = o_0(t);
      z_26 = t;
      t = (ATerm) ATinsert(CheckATermList(q_26), z_26);
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm d_27 = NULL;
  d_27 = t;
  if(match_string(t, "-i"))
    {
      t = d_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = d_27;
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL;
  e_27 = t;
  t = term_r_18;
  f_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_18, e_27);
  t = u_6(f_27, e_27, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_27);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_k_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_4, k_4, n_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL,k_27 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_18;
  t = whoami_0_0(t);
  g_27 = t;
  t = term_n_16;
  i_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_26), g_27);
  k_27 = t;
  t = SSL_printnl(i_27, k_27);
  t = term_s_8;
  h_27 = t;
  t = SSL_exit(h_27);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_m_26;
  t = get_config_0_0(t);
  return(t);
}
static ATerm n_6 (ATerm j_28, ATerm k_28, ATerm t)
{
  ATerm n_26 = t;
  int s_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_28, k_28);
      LocalPopChoice(s_26);
    }
  else
    {
      t = n_26;
      t = SSL_addr(j_28, k_28);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_77 (ATerm), ATerm d_77 (ATerm), ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL;
  m_27 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_27;
      t = c_77(t);
    }
  else
    {
      ATerm r_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_27 = ATgetFirst((ATermList) t);
          o_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_27;
      t = foldr_2_0(c_77, d_77, t);
      r_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_27, r_27);
      t = d_77(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_c_25;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm n_8 = NULL,q_8 = NULL;
  if(match_cons(t, sym__2))
    {
      n_8 = ATgetArgument(t, 0);
      q_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_6(n_8, q_8, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_27 = NULL,g_8 = NULL,h_8 = NULL;
  t = times_0_0(t);
  h_8 = t;
  t = SSL_explode_term(h_8);
  if(match_cons(t, sym__2))
    {
      ATerm v_26 = ATgetArgument(t, 0);
      g_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_8;
  t = foldr_2_0(q_4, r_4, t);
  u_27 = t;
  t = SSL_TicksToSeconds(u_27);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL;
  w_28 = t;
  if(match_cons(t, sym__2))
    {
      x_28 = ATgetArgument(t, 0);
      y_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_28;
        if((x_28 != t))
          {
            _fail(t);
          }
        t = w_28;
        LocalPopChoice(x_26);
      }
    else
      {
        t = w_26;
        t = (ATerm) ATmakeAppl(sym__2, x_28, y_28);
        {
          ATerm y_26 = t;
          int a_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_28, y_28);
              LocalPopChoice(a_27);
            }
          else
            {
              t = y_26;
              t = SSL_gtr(x_28, y_28);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, x_28, y_28);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_80 (ATerm), ATerm t)
{
  ATerm e_29 = NULL;
  e_29 = t;
  {
    ATerm b_27 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_29 = NULL;
        t = term_j_8;
        t = get_config_0_0(t);
        j_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_29, term_s_8);
        t = geq_0_0(t);
        t = e_29;
        t = j_80(t);
        LocalPopChoice(c_27);
      }
    else
      {
        t = b_27;
        t = e_29;
      }
  }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm o_29 = NULL,a_30 = NULL,c_30 = NULL,d_30 = NULL;
  t = run_time_0_0(t);
  o_29 = t;
  t = term_o_18;
  t = whoami_0_0(t);
  a_30 = t;
  t = term_n_16;
  c_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_27), o_29), term_b_9), a_30);
  d_30 = t;
  t = SSL_printnl(c_30, d_30);
  t = (ATerm) ATmakeAppl(sym__2, term_n_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_27), o_29), term_b_9), a_30));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(s_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm e_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_25;
  e_30 = t;
  t = SSL_exit(e_30);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL;
  n_30 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = n_30;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          m_30 = ATgetArgument(t, 0);
          {
            ATerm g_9 = NULL,o_2 = NULL;
            t = SSLgetAnnotations(n_30);
            g_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, m_30);
            o_2 = t;
            t = SSLsetAnnotations(o_2, g_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = n_30;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm n_84 (ATerm), ATerm t)
{
  ATerm l_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_27;
      t = get_config_0_0(t);
      LocalPopChoice(p_27);
    }
  else
    {
      t = l_27;
      t = fetch_1_0(u_4, t);
    }
  t = n_84(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_30 = ATgetFirst((ATermList) t);
      r_30 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_30 = NULL,w_30 = NULL;
        static ATerm v_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(v_30)), not_null(w_30));
          return(t);
        }
        t = r_30;
        t = l_0(t);
        if(((v_30 != NULL) && (v_30 != t)))
          _fail(t);
        else
          v_30 = t;
        t = q_30;
        t = k_0(t);
        if(((w_30 != NULL) && (w_30 != t)))
          _fail(t);
        else
          w_30 = t;
        t = r_30;
        t = reverse_acc_2_0(k_0, v_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_18;
      t = l_0(t);
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL,d_31 = NULL,t_2 = NULL;
  d_31 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_31);
  a_31 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_31);
  t_2 = t;
  t = SSLsetAnnotations(t_2, a_31);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm m_31 = NULL;
  m_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_31), term_s_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL;
  ATerm t_27 = t;
  int v_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_26;
      t = get_config_0_0(t);
      LocalPopChoice(v_27);
    }
  else
    {
      t = t_27;
      t = fetch_1_0(w_4, t);
    }
  t = term_w_27;
  t = echo_0_0(t);
  t = term_c_26;
  y_30 = t;
  t = term_d_26;
  z_30 = t;
  t = term_x_27;
  t = r_6(y_30, z_30, t);
  t = reverse_acc_2_0(_id, y_4, t);
  t = map_1_0(a_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm u_70 (ATerm), ATerm t)
{
  static ATerm f_33 (ATerm t)
  {
    ATerm a_33 = NULL,d_33 = NULL,e_33 = NULL;
    a_33 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_33 = ATgetFirst((ATermList) t);
        e_33 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_27 = t;
      int z_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_9 = NULL,v_9 = NULL,z_2 = NULL;
          t = SSLgetAnnotations(a_33);
          s_9 = t;
          t = d_33;
          t = u_70(t);
          v_9 = t;
          t = (ATerm) ATinsert(CheckATermList(e_33), v_9);
          z_2 = t;
          t = SSLsetAnnotations(z_2, s_9);
          LocalPopChoice(z_27);
        }
      else
        {
          t = y_27;
          {
            ATerm q_10 = NULL,t_10 = NULL,a_3 = NULL;
            t = SSLgetAnnotations(a_33);
            q_10 = t;
            t = e_33;
            t = f_33(t);
            t_10 = t;
            t = (ATerm) ATinsert(CheckATermList(t_10), d_33);
            a_3 = t;
            t = SSLsetAnnotations(a_3, q_10);
          }
        }
    }
    return(t);
  }
  t = f_33(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_33 = NULL,m_33 = NULL,n_33 = NULL;
  j_33 = t;
  {
    ATerm a_28 = t;
    int b_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_33;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_28 = ATgetFirst((ATermList) t);
                ATerm d_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_33;
          }
        LocalPopChoice(b_28);
      }
    else
      {
        t = a_28;
        t = (ATerm) ATinsert(ATempty, j_33);
      }
  }
  m_33 = t;
  t = term_f_24;
  n_33 = t;
  t = SSL_printnl(n_33, m_33);
  t = j_33;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_m_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm q_6 (ATerm h_50, ATerm i_50, ATerm t)
{
  t = SSL_strcat(h_50, i_50);
  return(t);
}
ATerm debug_1_0 (ATerm s_65 (ATerm), ATerm t)
{
  ATerm r_33 = NULL,s_33 = NULL,y_33 = NULL,z_33 = NULL;
  r_33 = t;
  t = s_65(t);
  s_33 = t;
  t = term_n_16;
  y_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_33), s_33);
  z_33 = t;
  t = SSL_printnl(y_33, z_33);
  t = r_33;
  return(t);
}
ATerm map_1_0 (ATerm k_70 (ATerm), ATerm t)
{
  static ATerm o_34 (ATerm t)
  {
    ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL;
    l_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_34;
      }
    else
      {
        ATerm m_11 = NULL,p_11 = NULL,q_11 = NULL,p_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_34 = ATgetFirst((ATermList) t);
            n_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_34);
        m_11 = t;
        t = m_34;
        t = k_70(t);
        p_11 = t;
        t = n_34;
        t = o_34(t);
        q_11 = t;
        t = (ATerm) ATinsert(CheckATermList(q_11), p_11);
        p_3 = t;
        t = SSLsetAnnotations(p_3, m_11);
      }
    return(t);
  }
  t = o_34(t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm e_28 = t;
  int f_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(f_28);
    }
  else
    {
      t = e_28;
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_g_28;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm h_28 = t;
  int i_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_34 = NULL;
      y_34 = t;
      t = SSL_is_string(y_34);
      LocalPopChoice(i_28);
    }
  else
    {
      t = h_28;
      {
        ATerm l_28 = t;
        int m_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(c_5, t);
            LocalPopChoice(m_28);
          }
        else
          {
            t = l_28;
            {
              ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL;
              i_35 = t;
              if(match_cons(t, sym_Path_1))
                {
                  j_35 = ATgetArgument(t, 0);
                  t = j_35;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      j_35 = ATgetArgument(t, 0);
                      t = j_35;
                      {
                        ATerm n_28 = t;
                        int o_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(o_28);
                          }
                        else
                          {
                            t = n_28;
                            t = debug_1_0(e_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm o_35 = NULL,s_35 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          j_35 = ATgetArgument(t, 0);
                          k_35 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = j_35;
                      t = eval_config_0_0(t);
                      o_35 = t;
                      t = k_35;
                      t = eval_config_0_0(t);
                      s_35 = t;
                      t = (ATerm) ATmakeAppl(sym__2, o_35, s_35);
                      t = q_6(o_35, s_35, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_6 (ATerm b_33, ATerm c_33, ATerm t)
{
  t = SSL_table_get(b_33, c_33);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm w_35 = NULL,d_36 = NULL;
  w_35 = t;
  t = term_b_26;
  d_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_26, w_35);
  t = r_6(d_36, w_35, t);
  {
    ATerm r_28 = t;
    int s_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_36 = NULL,f_36 = NULL;
        t = eval_config_0_0(t);
        e_36 = t;
        t = term_b_26;
        f_36 = t;
        t = SSL_table_put(f_36, w_35, e_36);
        t = e_36;
        LocalPopChoice(s_28);
      }
    else
      {
        t = r_28;
      }
  }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm i_36 = NULL,j_36 = NULL;
  t = term_t_28;
  i_36 = t;
  t = term_o_18;
  j_36 = t;
  t = term_u_28;
  t = u_6(i_36, j_36, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = term_v_28;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm k_36 = NULL,n_36 = NULL,o_36 = NULL,q_36 = NULL;
  t = term_t_28;
  o_36 = t;
  t = term_o_18;
  q_36 = t;
  t = term_u_28;
  t = u_6(o_36, q_36, t);
  t = term_z_28;
  k_36 = t;
  t = term_o_18;
  n_36 = t;
  t = term_a_29;
  t = u_6(k_36, n_36, t);
  t = term_b_29;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_c_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm d_29 = t;
  int f_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_5, k_5, q_5, t);
      LocalPopChoice(f_29);
    }
  else
    {
      t = d_29;
      t = Option_3_0(r_5, s_5, t_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm k_57 (ATerm), ATerm l_57 (ATerm), ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,s_3 = NULL;
  x_36 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_36 = ATgetFirst((ATermList) t);
      u_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_36);
  r_36 = t;
  t = s_36;
  t = k_57(t);
  v_36 = t;
  t = u_36;
  t = l_57(t);
  w_36 = t;
  t = (ATerm) ATinsert(CheckATermList(w_36), v_36);
  s_3 = t;
  t = SSLsetAnnotations(s_3, r_36);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_86 (ATerm), ATerm t)
{
  ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL,m_37 = NULL,n_37 = NULL,b_5 = NULL;
  h_37 = t;
  {
    ATerm g_29 = t;
    int h_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_29;
        t = l_86(t);
        LocalPopChoice(h_29);
      }
    else
      {
        t = g_29;
      }
  }
  t = h_37;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_37 = ATgetFirst((ATermList) t);
      k_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_37);
  i_37 = t;
  t = term_m_26;
  n_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_26, j_37);
  t = u_6(n_37, j_37, t);
  t = k_37;
  {
    static ATerm y_37 (ATerm t)
    {
      ATerm k_29 = t;
      int l_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_29 = t;
          int n_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_37 = NULL;
              q_37 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = q_37;
              LocalPopChoice(n_29);
            }
          else
            {
              t = m_29;
              t = l_86(t);
              t = Cons_2_0(_id, y_37, t);
            }
          LocalPopChoice(l_29);
        }
      else
        {
          t = k_29;
          {
            ATerm u_37 = NULL,v_37 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                u_37 = ATgetFirst((ATermList) t);
                v_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(v_37), (ATerm) ATmakeAppl(sym_Undefined_1, u_37));
          }
        }
      return(t);
    }
    t = y_37(t);
  }
  m_37 = t;
  t = (ATerm) ATinsert(CheckATermList(m_37), (ATerm) ATmakeAppl(sym_Program_1, j_37));
  b_5 = t;
  t = SSLsetAnnotations(b_5, i_37);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm k_38 = NULL;
  k_38 = t;
  if(match_string(t, "--help"))
    {
      t = k_38;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_38;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_38;
        }
    }
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm l_38 = NULL,m_38 = NULL;
  t = term_q_27;
  l_38 = t;
  t = term_o_18;
  m_38 = t;
  t = term_p_29;
  t = u_6(l_38, m_38, t);
  t = term_q_29;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = term_r_29;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm k_86 (ATerm), ATerm t)
{
  ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL;
  f_38 = t;
  t = term_c_26;
  h_38 = t;
  t = term_d_26;
  i_38 = t;
  t = (ATerm) ATempty;
  j_38 = t;
  t = SSL_table_put(h_38, i_38, j_38);
  t = f_38;
  {
    static ATerm u_5 (ATerm t)
    {
      ATerm s_29 = t;
      int t_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_86(t);
          LocalPopChoice(t_29);
        }
      else
        {
          t = s_29;
          {
            ATerm u_29 = t;
            int w_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(v_5, o_6, p_6, t);
                LocalPopChoice(w_29);
              }
            else
              {
                t = u_29;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(u_5, t);
  }
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_38 = NULL;
        t_38 = t;
        {
          ATerm b_30 = t;
          int f_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_12 = NULL;
              t = t_38;
              {
                ATerm g_30 = t;
                int h_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_q_27;
                    t = get_config_0_0(t);
                    LocalPopChoice(h_30);
                  }
                else
                  {
                    t = g_30;
                    t = fetch_1_0(t_6, t);
                  }
              }
              t = t_38;
              t = default_system_usage_0_0(t);
              t = term_c_25;
              s_12 = t;
              t = SSL_exit(s_12);
              LocalPopChoice(f_30);
            }
          else
            {
              t = b_30;
              {
                ATerm x_12 = NULL;
                t = term_t_28;
                t = get_config_0_0(t);
                t = t_38;
                t = default_system_about_0_0(t);
                t = term_c_25;
                x_12 = t;
                t = SSL_exit(x_12);
              }
            }
        }
        LocalPopChoice(z_29);
      }
    else
      {
        t = y_29;
        {
          ATerm i_30 = t;
          int j_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL;
              static ATerm x_6 (ATerm t)
              {
                ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL,d_5 = NULL;
                z_38 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    y_38 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(z_38);
                x_38 = t;
                t = y_38;
                if(((d_38 != NULL) && (d_38 != t)))
                  _fail(t);
                else
                  d_38 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, y_38);
                d_5 = t;
                t = SSLsetAnnotations(d_5, x_38);
                return(t);
              }
              t = fetch_1_0(x_6, t);
              t = term_n_16;
              v_38 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_38)), term_k_30);
              w_38 = t;
              t = SSL_printnl(v_38, w_38);
              t = (ATerm) ATmakeAppl(sym__2, term_n_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_38)), term_k_30));
              t = default_system_usage_0_0(t);
              t = term_s_8;
              u_38 = t;
              t = SSL_exit(u_38);
              LocalPopChoice(j_30);
            }
          else
            {
              t = i_30;
            }
        }
      }
  }
  e_38 = t;
  t = term_c_26;
  g_38 = t;
  t = SSL_table_destroy(g_38);
  t = e_38;
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL;
  t = parse_options_1_0(p_84, t);
  e_39 = t;
  t = term_l_30;
  h_39 = t;
  t = SSL_table_create(h_39);
  t = term_l_30;
  f_39 = t;
  t = term_o_30;
  g_39 = t;
  t = SSL_table_put(f_39, g_39, e_39);
  t = e_39;
  t = r_84(t);
  {
    ATerm p_30 = t;
    int s_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_84, t);
        LocalPopChoice(s_30);
      }
    else
      {
        t = p_30;
        {
          ATerm t_30 = t;
          int u_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_84(t);
              t = report_success_0_0(t);
              LocalPopChoice(u_30);
            }
          else
            {
              t = t_30;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm x_30 = t;
  int c_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(c_31);
    }
  else
    {
      t = x_30;
      {
        ATerm e_31 = t;
        int f_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(f_31);
          }
        else
          {
            t = e_31;
            {
              ATerm g_31 = t;
              int h_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(c_7, f_7, g_7, t);
                  LocalPopChoice(h_31);
                }
              else
                {
                  t = g_31;
                  {
                    ATerm i_31 = t;
                    int n_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(n_31);
                      }
                    else
                      {
                        t = i_31;
                        t = keep_option_0_0(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = xtc_io_1_0(h_7, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL;
  t = term_o_31;
  p_39 = t;
  t = term_o_18;
  q_39 = t;
  t = term_r_31;
  t = u_6(p_39, q_39, t);
  t = term_s_31;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_t_31;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm u_31 = t;
  int v_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_39 = NULL,y_39 = NULL;
      y_39 = t;
      if(match_cons(t, sym_FILE_1))
        {
          x_39 = ATgetArgument(t, 0);
          {
            ATerm g_13 = NULL,g_5 = NULL;
            t = SSLgetAnnotations(y_39);
            g_13 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, x_39);
            g_5 = t;
            t = SSLsetAnnotations(g_5, g_13);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_39;
        }
      LocalPopChoice(v_31);
      t = xtc_transform_file_2_0(i_7, j_7, t);
    }
  else
    {
      t = u_31;
      t = xtc_transform_term_2_0(r_7, s_7, t);
    }
  {
    ATerm w_31 = t;
    int x_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_40 = NULL,l_40 = NULL;
        l_40 = t;
        if(match_cons(t, sym_FILE_1))
          {
            k_40 = ATgetArgument(t, 0);
            {
              ATerm u_13 = NULL,i_5 = NULL;
              t = SSLgetAnnotations(l_40);
              u_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_40);
              i_5 = t;
              t = SSLsetAnnotations(i_5, u_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_40;
          }
        LocalPopChoice(x_31);
        t = xtc_transform_file_2_0(z_7, pass_verbose_0_0, t);
      }
    else
      {
        t = w_31;
        t = xtc_transform_term_2_0(a_8, pass_verbose_0_0, t);
      }
  }
  {
    ATerm y_31 = t;
    int z_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_40 = NULL,s_40 = NULL;
        s_40 = t;
        if(match_cons(t, sym_FILE_1))
          {
            r_40 = ATgetArgument(t, 0);
            {
              ATerm h_14 = NULL,j_5 = NULL;
              t = SSLgetAnnotations(s_40);
              h_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_40);
              j_5 = t;
              t = SSLsetAnnotations(j_5, h_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = s_40;
          }
        LocalPopChoice(z_31);
        t = xtc_transform_file_2_0(b_8, pass_verbose_0_0, t);
      }
    else
      {
        t = y_31;
        t = xtc_transform_term_2_0(d_8, pass_verbose_0_0, t);
      }
  }
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_a_32;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm z_39 = NULL,a_40 = NULL;
  t = term_b_32;
  t = xtc_find_0_0(t);
  z_39 = t;
  t = term_c_32;
  t = xtc_find_0_0(t);
  a_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_40), term_d_32), z_39), term_d_32);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  t = term_a_32;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm c_40 = NULL,d_40 = NULL;
  t = term_b_32;
  t = xtc_find_0_0(t);
  c_40 = t;
  t = term_c_32;
  t = xtc_find_0_0(t);
  d_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_40), term_d_32), c_40), term_d_32);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_e_32;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_e_32;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_f_32;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_f_32;
  return(t);
}
ATerm io_pp_pp_table_0_0 (ATerm t)
{
  t = option_wrap_4_0(z_6, default_usage_0_0, _id, a_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_pp_pp_table_0_0(t);
  return(t);
}
