#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constant_terms ();
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_RDef_3;
Symbol sym_RDefT_4;
Symbol sym_Path_2;
Symbol sym_VarDec_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
Symbol sym_Undefined_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
void init_constructors (void)
{
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_e_17;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_j_16;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_m_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_v_14;
ATerm term_j_14;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_b_12;
ATerm term_q_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_d_9;
ATerm term_x_7;
ATerm term_r_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_l_6;
ATerm term_k_6;
ATerm term_e_6;
void init_constant_terms (void)
{
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\n** Warning: Starting with Stratego 0.9.3 the calling convention of\n   strategies has been changed such that the current term is the *last*\n   argument. For most strategy definitions this is not a problem. Only\n   strategies which explicitly declare the type of a higher-order\n   strategy argument are affected. The argument declarations should be\n   changed such that the current term is the last argument. This change\n   is currently done automatically by the compiler. In the future source\n   programs are expected to incorporate this change.\n", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_11);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym__3, term_c_15, term_d_15, term_e_6);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm explanation_0_0 (ATerm);
ATerm RepairVarDec_2_0 (ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm);
ATerm map1_1_0 (ATerm m_92 (ATerm), ATerm);
ATerm y_0 (ATerm);
ATerm b_1 (ATerm);
ATerm e_1 (ATerm);
ATerm h_1 (ATerm);
ATerm RepairDefinition_0_0 (ATerm);
ATerm sometd_1_0 (ATerm x_87 (ATerm), ATerm);
ATerm _2_0 (ATerm c_67 (ATerm), ATerm d_67 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm c_108 (ATerm), ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm z_1 (ATerm);
ATerm p_1 (ATerm);
ATerm r_1 (ATerm);
ATerm u_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm e_111 (ATerm), ATerm);
ATerm n_5 (ATerm d_5, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm v_92 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm b_93 (ATerm), ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm i_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm g_109 (ATerm), ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm w_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm g_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm k_97 (ATerm), ATerm l_97 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm f_109 (ATerm), ATerm);
ATerm n_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm c_112 (ATerm), ATerm);
ATerm map_1_0 (ATerm k_92 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm j_84 (ATerm), ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm k_84 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm b_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm r_71 (ATerm), ATerm s_71 (ATerm), ATerm);
ATerm d_4 (ATerm);
ATerm parse_options_p__1_0 (ATerm f_114 (ATerm), ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm parse_options_1_0 (ATerm e_114 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm e_112 (ATerm), ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm h_112 (ATerm), ATerm);
ATerm m_5 (ATerm);
ATerm q_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm i_5 (ATerm);
ATerm iowrap_3_0 (ATerm n_111 (ATerm), ATerm o_111 (ATerm), ATerm p_111 (ATerm), ATerm);
ATerm c_6 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_0 = NULL,k_0 = NULL;
  f_0 = t;
  t = term_e_6;
  t = whoami_0_0(t);
  k_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), k_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = f_0;
  return(t);
}
ATerm explanation_0_0 (ATerm t)
{
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("\n** Warning: Starting with Stratego 0.9.3 the calling convention of\n   strategies has been changed such that the current term is the *last*\n   argument. For most strategy definitions this is not a problem. Only\n   strategies which explicitly declare the type of a higher-order\n   strategy argument are affected. The argument declarations should be\n   changed such that the current term is the last argument. This change\n   is currently done automatically by the compiler. In the future source\n   programs are expected to incorporate this change.\n", 0, ATtrue))));
  t = (ATerm) ATmakeAppl(sym__2, term_k_6, (ATerm) ATinsert(ATempty, term_l_6));
  return(t);
}
ATerm RepairVarDec_2_0 (ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm t)
{
  ATerm m_0 = NULL,n_0 = NULL,o_0 = NULL,p_0 = NULL,r_0 = NULL,t_0 = NULL,u_0 = NULL,v_0 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      m_0 = ATgetArgument(t, 0);
      {
        ATerm m_6 = ATgetArgument(t, 1);
        if(match_cons(m_6, sym_FunType_2))
          {
            ATerm n_6 = ATgetArgument(m_6, 0);
            if(((ATgetType(n_6) == AT_LIST) && !(ATisEmpty(n_6))))
              {
                ATerm p_6 = ATgetFirst((ATermList) n_6);
                if(match_cons(p_6, sym_ConstType_1))
                  {
                    n_0 = ATgetArgument(p_6, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm q_6 = (ATerm) ATgetNext((ATermList) n_6);
                  o_0 = q_6;
                  if(((ATgetType(q_6) == AT_LIST) && !(ATisEmpty(q_6))))
                    {
                      ATerm t_6 = ATgetFirst((ATermList) q_6);
                      if(match_cons(t_6, sym_FunType_2))
                        {
                          ATerm v_6 = ATgetArgument(t_6, 0);
                          ATerm w_6 = ATgetArgument(t_6, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm u_6 = (ATerm) ATgetNext((ATermList) q_6);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            p_0 = ATgetArgument(m_6, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  r_0 = t;
  t = p_84(t);
  t_0 = t;
  t = r_0;
  t = q_84(t);
  u_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("' starts with constant type", 0, ATtrue))), u_0), (ATerm) ATmakeAppl(ATmakeSymbol(" '", 0, ATtrue))), t_0), (ATerm) ATmakeAppl(ATmakeSymbol("' of ", 0, ATtrue))), m_0), (ATerm) ATmakeAppl(ATmakeSymbol("** Warning: argument '", 0, ATtrue))));
  t = (ATerm) ATmakeAppl(sym__2, o_0, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, n_0)));
  {
    ATerm x_6 = t;
    int z_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_7 = ATgetArgument(t, 0);
            ATerm g_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_0;
        {
          ATerm b_0 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, n_0));
            return(t);
          }
          t = at_end_1_0(b_0, t);
        }
        ;
        LocalPopChoice(z_6);
      }
    else
      {
        t = x_6;
        {
          ATerm s_0 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, o_0, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, n_0))));
          if(match_cons(t, sym__2))
            {
              ATerm h_7 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) h_7) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              s_0 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_0;
          t = concat_0_0(t);
        }
      }
    v_0 = t;
    t = (ATerm) ATmakeAppl(sym_VarDec_2, m_0, (ATerm) ATmakeAppl(sym_FunType_2, v_0, p_0));
  }
  return(t);
}
ATerm map1_1_0 (ATerm m_92 (ATerm), ATerm t)
{
  ATerm i_7 = t;
  int j_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(m_92, _id, t);
      {
        ATerm l_0 (ATerm t)
        {
          ATerm k_7 = t;
          int l_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(m_92, t);
              ;
              LocalPopChoice(l_7);
            }
          else
            {
              t = k_7;
            }
          return(t);
        }
        t = Cons_2_0(_id, l_0, t);
      }
      ;
      LocalPopChoice(j_7);
    }
  else
    {
      t = i_7;
      {
        ATerm q_0 (ATerm t)
        {
          t = map1_1_0(m_92, t);
          return(t);
        }
        t = Cons_2_0(_id, q_0, t);
      }
    }
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = term_m_7;
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = term_m_7;
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_n_7;
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = term_n_7;
  return(t);
}
ATerm RepairDefinition_0_0 (ATerm t)
{
  ATerm q_1 = NULL,x_1 = NULL,y_1 = NULL,a_2 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      x_1 = ATgetArgument(t, 0);
      y_1 = ATgetArgument(t, 1);
      a_2 = ATgetArgument(t, 2);
      q_1 = ATgetArgument(t, 3);
      {
        ATerm h_2 = NULL;
        t = y_1;
        {
          ATerm x_0 (ATerm t)
          {
            ATerm z_0 (ATerm t)
            {
              t = x_1;
              return(t);
            }
            t = RepairVarDec_2_0(y_0, z_0, t);
            return(t);
          }
          t = map1_1_0(x_0, t);
          h_2 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, x_1, h_2, a_2, q_1);
        }
      }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          x_1 = ATgetArgument(t, 0);
          y_1 = ATgetArgument(t, 1);
          a_2 = ATgetArgument(t, 2);
          {
            ATerm m_2 = NULL;
            t = y_1;
            {
              ATerm a_1 (ATerm t)
              {
                ATerm c_1 (ATerm t)
                {
                  t = x_1;
                  return(t);
                }
                t = RepairVarDec_2_0(b_1, c_1, t);
                return(t);
              }
              t = map1_1_0(a_1, t);
              m_2 = t;
              t = (ATerm) ATmakeAppl(sym_RDef_3, x_1, m_2, a_2);
            }
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              x_1 = ATgetArgument(t, 0);
              y_1 = ATgetArgument(t, 1);
              a_2 = ATgetArgument(t, 2);
              q_1 = ATgetArgument(t, 3);
              {
                ATerm v_2 = NULL;
                t = y_1;
                {
                  ATerm d_1 (ATerm t)
                  {
                    ATerm f_1 (ATerm t)
                    {
                      t = x_1;
                      return(t);
                    }
                    t = RepairVarDec_2_0(e_1, f_1, t);
                    return(t);
                  }
                  t = map1_1_0(d_1, t);
                  v_2 = t;
                  t = (ATerm) ATmakeAppl(sym_SDefT_4, x_1, v_2, a_2, q_1);
                }
              }
            }
          else
            {
              ATerm c_3 = NULL;
              if(match_cons(t, sym_SDef_3))
                {
                  x_1 = ATgetArgument(t, 0);
                  y_1 = ATgetArgument(t, 1);
                  a_2 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = y_1;
              {
                ATerm g_1 (ATerm t)
                {
                  ATerm i_1 (ATerm t)
                  {
                    t = x_1;
                    return(t);
                  }
                  t = RepairVarDec_2_0(h_1, i_1, t);
                  return(t);
                }
                t = map1_1_0(g_1, t);
                c_3 = t;
                t = (ATerm) ATmakeAppl(sym_SDef_3, x_1, c_3, a_2);
              }
            }
        }
    }
  return(t);
}
ATerm sometd_1_0 (ATerm x_87 (ATerm), ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    ATerm o_7 = t;
    int q_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_87(t);
        ;
        LocalPopChoice(q_7);
      }
    else
      {
        t = o_7;
        t = SRTS_some(d_3, t);
      }
    return(t);
  }
  t = d_3(t);
  return(t);
}
ATerm _2_0 (ATerm c_67 (ATerm), ATerm d_67 (ATerm), ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL,h_3 = NULL,i_3 = NULL,l_3 = NULL,m_3 = NULL;
  m_3 = t;
  if(match_cons(t, sym__2))
    {
      f_3 = ATgetArgument(t, 0);
      h_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_3);
  e_3 = t;
  t = f_3;
  t = c_67(t);
  i_3 = t;
  t = h_3;
  t = d_67(t);
  l_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, i_3, l_3), e_3);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm c_108 (ATerm), ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL,e_4 = NULL;
  if(match_cons(t, sym__2))
    {
      z_3 = ATgetArgument(t, 0);
      a_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_3, term_r_7);
  t = open_stream_0_0(t);
  e_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_4, a_4);
  t = c_108(t);
  t = fclose_0_0(t);
  t = a_4;
  return(t);
}
ATerm s_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm i_4 = NULL,j_4 = NULL,k_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_7 = ATgetArgument(t, 0);
      if(match_cons(t_7, sym_Stream_1))
        {
          i_4 = ATgetArgument(t_7, 0);
        }
      else
        _fail(t);
      j_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(i_4, j_4);
  k_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_4);
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_7 = ATgetArgument(t, 0);
      if(match_cons(u_7, sym_Stream_1))
        {
          l_4 = ATgetArgument(u_7, 0);
        }
      else
        _fail(t);
      m_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(l_4, m_4);
  n_4 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), n_4);
  o_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_4);
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = fetch_1_0(s_1, t);
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = WriteToFile_1_0(t_1, t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = WriteToFile_1_0(z_1, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm f_4 = NULL,g_4 = NULL;
  f_4 = t;
  {
    ATerm j_1 (ATerm t)
    {
      ATerm v_7 = t;
      int w_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_1 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((g_4 != NULL) && (g_4 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_4 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(k_1, t);
          ;
          LocalPopChoice(w_7);
        }
      else
        {
          t = v_7;
          t = term_x_7;
          if(((g_4 != NULL) && (g_4 != t)))
            _fail(t);
          else
            g_4 = t;
        }
      return(t);
    }
    t = _2_0(j_1, _id, t);
    t = f_4;
    {
      ATerm l_1 (ATerm t)
      {
        ATerm w_0 = NULL;
        w_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_4), w_0);
        return(t);
      }
      t = _2_0(_id, l_1, t);
      {
        ATerm y_7 = t;
        int c_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(p_1, r_1, t);
            ;
            LocalPopChoice(c_8);
          }
        else
          {
            t = y_7;
            t = _2_0(_id, u_1, t);
          }
      }
    }
  }
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm e_111 (ATerm), ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL;
  p_4 = t;
  t = dtime_0_0(t);
  t = p_4;
  t = e_111(t);
  q_4 = t;
  t = dtime_0_0(t);
  r_4 = t;
  t = q_4;
  if(match_cons(t, sym__2))
    {
      s_4 = ATgetArgument(t, 0);
      t_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_4), (ATerm) ATmakeAppl(sym_Runtime_1, r_4)), t_4);
  return(t);
}
ATerm n_5 (ATerm d_5, ATerm t)
{
  t = SSL_fclose(d_5);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_5 = NULL,l_5 = NULL;
  l_5 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_5 = ATgetArgument(t, 0);
      {
        ATerm d_8 = t;
        int e_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_5);
            ;
            LocalPopChoice(e_8);
          }
        else
          {
            t = d_8;
            t = n_5(l_5, t);
          }
      }
    }
  else
    {
      t = n_5(l_5, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm o_5 = NULL;
  t = SSL_stdin_stream();
  o_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_5);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_5 = NULL;
  t = SSL_stdout_stream();
  p_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_5);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_5 = NULL;
  t = SSL_stderr_stream();
  r_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_5);
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm z_5 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      z_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_5;
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm f_6 = NULL;
  f_6 = t;
  t = SSL_is_string(f_6);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_8 = ATgetArgument(t, 0);
      ATerm j_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_8 = t;
    int l_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_1 = NULL,n_1 = NULL;
        m_1 = t;
        t = SSL_explode_term(m_1);
        if(match_cons(t, sym__2))
          {
            ATerm n_8 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) n_8) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm p_8 = ATgetArgument(t, 1);
              if(((ATgetType(p_8) == AT_LIST) && !(ATisEmpty(p_8))))
                {
                  n_1 = ATgetFirst((ATermList) p_8);
                  {
                    ATerm r_8 = (ATerm) ATgetNext((ATermList) p_8);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = n_1;
        if(match_cons(t, sym_stderr_0))
          {
            t = n_1;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = n_1;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = n_1;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(l_8);
      }
    else
      {
        t = k_8;
        {
          ATerm s_8 = t;
          int w_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL;
              t = _2_0(b_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  w_5 = ATgetArgument(t, 0);
                  x_5 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(w_5, x_5);
              y_5 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, y_5);
              ;
              LocalPopChoice(w_8);
            }
          else
            {
              t = s_8;
              {
                ATerm a_6 = NULL,b_6 = NULL,d_6 = NULL;
                t = _2_0(c_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    a_6 = ATgetArgument(t, 0);
                    b_6 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(a_6, b_6);
                d_6 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, d_6);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL;
  ATerm x_8 = t;
  int b_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_6 = NULL;
      j_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_6, term_d_9);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(b_9);
    }
  else
    {
      t = x_8;
      {
        ATerm o_1 = NULL;
        o_1 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, o_1), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = o_1;
        _fail(t);
      }
    }
  g_6 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(i_6);
  h_6 = t;
  t = g_6;
  t = fclose_0_0(t);
  t = h_6;
  return(t);
}
ATerm fetch_1_0 (ATerm v_92 (ATerm), ATerm t)
{
  ATerm o_6 (ATerm t)
  {
    ATerm e_9 = t;
    int f_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(v_92, _id, t);
        ;
        LocalPopChoice(f_9);
      }
    else
      {
        t = e_9;
        t = Cons_2_0(_id, o_6, t);
      }
    return(t);
  }
  t = o_6(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm g_9 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(k_9);
    }
  else
    {
      t = g_9;
      {
        ATerm r_6 = NULL,s_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_6 = ATgetFirst((ATermList) t);
            s_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_6;
        {
          ATerm d_2 (ATerm t)
          {
            t = s_6;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(d_2, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm b_93 (ATerm), ATerm t)
{
  ATerm y_6 (ATerm t)
  {
    ATerm l_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, y_6, t);
        ;
        LocalPopChoice(n_9);
      }
    else
      {
        t = l_9;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_93(t);
      }
    return(t);
  }
  t = y_6(t);
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm b_7 = NULL;
  b_7 = t;
  t = SSL_explode_string(b_7);
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm c_7 = NULL;
  c_7 = t;
  t = SSL_explode_string(c_7);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm a_7 = NULL;
  t = _2_0(e_2, f_2, t);
  {
    ATerm q_9 = t;
    int r_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_7 = NULL,f_7 = NULL;
        if(match_cons(t, sym__2))
          {
            e_7 = ATgetArgument(t, 0);
            f_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_7;
        {
          ATerm g_2 (ATerm t)
          {
            t = f_7;
            return(t);
          }
          t = at_end_1_0(g_2, t);
        }
        ;
        LocalPopChoice(r_9);
      }
    else
      {
        t = q_9;
        {
          ATerm v_1 = NULL,w_1 = NULL;
          v_1 = t;
          t = SSL_explode_term(v_1);
          if(match_cons(t, sym__2))
            {
              ATerm w_9 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) w_9) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              w_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_1;
          t = concat_0_0(t);
        }
      }
    a_7 = t;
    t = SSL_implode_string(a_7);
  }
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm x_9 = t;
  int y_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(y_9);
    }
  else
    {
      t = x_9;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm z_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_7 = NULL;
      s_7 = t;
      t = SSL_is_string(s_7);
      ;
      LocalPopChoice(a_10);
    }
  else
    {
      t = z_9;
      {
        ATerm b_10 = t;
        int c_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(i_2, t);
            ;
            LocalPopChoice(c_10);
          }
        else
          {
            t = b_10;
            {
              ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL;
              z_7 = t;
              if(match_cons(t, sym_Path_1))
                {
                  a_8 = ATgetArgument(t, 0);
                  t = a_8;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      a_8 = ATgetArgument(t, 0);
                      t = a_8;
                      {
                        ATerm i_10 = t;
                        int j_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), a_8);
                            {
                              ATerm k_10 = t;
                              int m_10 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm r_3 = NULL;
                                  t = eval_config_0_0(t);
                                  r_3 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), a_8, r_3);
                                  t = r_3;
                                  ;
                                  LocalPopChoice(m_10);
                                }
                              else
                                {
                                  t = k_10;
                                }
                            }
                            ;
                            LocalPopChoice(j_10);
                          }
                        else
                          {
                            t = i_10;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, a_8), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = a_8;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm g_8 = NULL,h_8 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          a_8 = ATgetArgument(t, 0);
                          b_8 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = a_8;
                      t = eval_config_0_0(t);
                      g_8 = t;
                      t = b_8;
                      t = eval_config_0_0(t);
                      h_8 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_8, h_8);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm g_109 (ATerm), ATerm t)
{
  ATerm q_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_8 = NULL,o_8 = NULL;
      m_8 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm u_10 = t;
        int v_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_4 = NULL;
            t = eval_config_0_0(t);
            c_4 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), c_4);
            t = c_4;
            ;
            LocalPopChoice(v_10);
          }
        else
          {
            t = u_10;
          }
        o_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_8, term_x_10);
        t = geq_0_0(t);
        t = m_8;
        t = g_109(t);
      }
      ;
      LocalPopChoice(r_10);
    }
  else
    {
      t = q_10;
    }
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm q_8 = NULL;
  q_8 = t;
  if(match_string(t, "-k"))
    {
      t = q_8;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = q_8;
    }
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL;
  u_8 = t;
  t = SSL_string_to_int(u_8);
  v_8 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), v_8);
  t = u_8;
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_y_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_2, k_2, l_2, t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm y_8 = NULL;
  y_8 = t;
  if(match_string(t, "-S"))
    {
      t = y_8;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_8;
    }
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_b_11;
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = term_c_11;
  return(t);
}
ATerm q_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL;
  z_8 = t;
  t = SSL_string_to_int(z_8);
  a_9 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), a_9);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, z_8);
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = term_d_11;
  return(t);
}
ATerm t_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_e_11;
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_f_11;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_2, o_2, p_2, t);
      ;
      LocalPopChoice(h_11);
    }
  else
    {
      t = g_11;
      {
        ATerm i_11 = t;
        int j_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_2, r_2, s_2, t);
            ;
            LocalPopChoice(j_11);
          }
        else
          {
            t = i_11;
            t = Option_3_0(t_2, u_2, w_2, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_9 = NULL;
      t = term_e_6;
      t = d_0(t);
      j_9 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_11, term_o_11, j_9);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm m_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_9 = ATgetFirst((ATermList) t);
          i_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_9;
      t = a_0(t);
      t = term_e_6;
      t = c_0(t);
      m_9 = t;
      t = (ATerm) ATinsert(CheckATermList(i_9), m_9);
    }
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm o_9 = NULL;
  o_9 = t;
  if(match_string(t, "-o"))
    {
      t = o_9;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_9;
    }
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm p_9 = NULL;
  p_9 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), p_9);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_9);
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_q_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_2, y_2, z_2, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL;
  if(match_cons(t, sym__3))
    {
      s_9 = ATgetArgument(t, 0);
      t_9 = ATgetArgument(t, 1);
      u_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_9, t_9);
  {
    ATerm s_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_11 = ATgetArgument(t, 0);
            ATerm a_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(s_9, t_9);
        ;
        LocalPopChoice(w_11);
      }
    else
      {
        t = s_11;
        t = (ATerm) ATempty;
      }
    v_9 = t;
    t = SSL_table_put(s_9, t_9, (ATerm) ATinsert(CheckATermList(v_9), u_9));
    t = (ATerm) ATmakeAppl(sym__3, s_9, t_9, u_9);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_10 = NULL;
      t = term_e_6;
      t = j_0(t);
      h_10 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_11, term_o_11, h_10);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm l_10 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_10 = ATgetFirst((ATermList) t);
          e_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_10;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_10 = ATgetFirst((ATermList) t);
          g_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_10;
      t = h_0(t);
      t = f_10;
      t = i_0(t);
      l_10 = t;
      t = (ATerm) ATinsert(CheckATermList(g_10), l_10);
    }
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm n_10 = NULL;
  n_10 = t;
  if(match_string(t, "-i"))
    {
      t = n_10;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = n_10;
    }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm o_10 = NULL;
  o_10 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), o_10);
  t = (ATerm) ATmakeAppl(sym_Input_1, o_10);
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_b_12;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_3, b_3, g_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_10 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_6;
  t = whoami_0_0(t);
  p_10 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), p_10));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm h_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_4 = NULL;
        t = eval_config_0_0(t);
        v_4 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), v_4);
        t = v_4;
        ;
        LocalPopChoice(j_12);
      }
    else
      {
        t = h_12;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm k_97 (ATerm), ATerm l_97 (ATerm), ATerm t)
{
  ATerm k_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_97(t);
      ;
      LocalPopChoice(q_12);
    }
  else
    {
      t = k_12;
      {
        ATerm s_10 = NULL,t_10 = NULL,w_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_10 = ATgetFirst((ATermList) t);
            t_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_10;
        t = foldr_2_0(k_97, l_97, t);
        w_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_10, w_10);
        t = l_97(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_a_11;
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm f_5 = NULL,h_5 = NULL;
  if(match_cons(t, sym__2))
    {
      f_5 = ATgetArgument(t, 0);
      h_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_12 = t;
    int v_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(f_5, h_5);
        ;
        LocalPopChoice(v_12);
      }
    else
      {
        t = r_12;
        t = SSL_addr(f_5, h_5);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_10 = NULL,w_4 = NULL,z_4 = NULL;
  t = times_0_0(t);
  w_4 = t;
  t = SSL_explode_term(w_4);
  if(match_cons(t, sym__2))
    {
      ATerm w_12 = ATgetArgument(t, 0);
      z_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_4;
  t = foldr_2_0(j_3, k_3, t);
  z_10 = t;
  t = SSL_TicksToSeconds(z_10);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL;
  k_11 = t;
  if(match_cons(t, sym__2))
    {
      l_11 = ATgetArgument(t, 0);
      m_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_12 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_11;
        if((l_11 != t))
          {
            _fail(t);
          }
        t = k_11;
        ;
        LocalPopChoice(e_13);
      }
    else
      {
        t = x_12;
        t = k_11;
        {
          ATerm f_13 = t;
          int g_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_11, m_11);
              ;
              LocalPopChoice(g_13);
            }
          else
            {
              t = f_13;
              t = SSL_gtr(l_11, m_11);
            }
          t = (ATerm) ATmakeAppl(sym__2, l_11, m_11);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_109 (ATerm), ATerm t)
{
  ATerm j_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_11 = NULL,r_11 = NULL;
      p_11 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm n_13 = t;
        int o_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_7 = NULL;
            t = eval_config_0_0(t);
            p_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), p_7);
            t = p_7;
            ;
            LocalPopChoice(o_13);
          }
        else
          {
            t = n_13;
          }
        r_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_11, term_p_13);
        t = geq_0_0(t);
        t = p_11;
        t = f_109(t);
      }
      ;
      LocalPopChoice(m_13);
    }
  else
    {
      t = j_13;
    }
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm t_11 = NULL,u_11 = NULL;
  t = run_time_0_0(t);
  t_11 = t;
  t = term_e_6;
  t = whoami_0_0(t);
  u_11 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), t_11), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), u_11));
  t = (ATerm) ATmakeAppl(sym__2, term_k_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_13), t_11), term_q_13), u_11));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(n_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm c_112 (ATerm), ATerm t)
{
  ATerm t_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm z_13 = t;
        int a_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_8 = NULL;
            t = eval_config_0_0(t);
            f_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), f_8);
            t = f_8;
            ;
            LocalPopChoice(a_14);
          }
        else
          {
            t = z_13;
          }
      }
      ;
      LocalPopChoice(u_13);
    }
  else
    {
      t = t_13;
      {
        ATerm o_3 (ATerm t)
        {
          ATerm b_14 = t;
          int c_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(c_14);
            }
          else
            {
              t = b_14;
              {
                ATerm d_14 = t;
                int e_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(e_14);
                  }
                else
                  {
                    t = d_14;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(o_3, t);
      }
    }
  t = c_112(t);
  return(t);
}
ATerm map_1_0 (ATerm k_92 (ATerm), ATerm t)
{
  ATerm v_11 (ATerm t)
  {
    ATerm f_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(i_14);
      }
    else
      {
        t = f_14;
        t = Cons_2_0(k_92, v_11, t);
      }
    return(t);
  }
  t = v_11(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_11 = ATgetFirst((ATermList) t);
      y_11 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_12 = NULL,d_12 = NULL;
        t = y_11;
        t = g_0(t);
        c_12 = t;
        t = x_11;
        t = e_0(t);
        d_12 = t;
        t = y_11;
        {
          ATerm p_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(c_12), d_12);
            return(t);
          }
          t = reverse_acc_2_0(e_0, p_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_6;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm j_84 (ATerm), ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL,i_12 = NULL;
  i_12 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_12);
  e_12 = t;
  t = f_12;
  t = j_84(t);
  g_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, g_12), e_12);
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm l_12 = NULL;
  l_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_12), term_j_14);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_14 = t;
  int r_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm t_14 = t;
        int u_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_8 = NULL;
            t = eval_config_0_0(t);
            t_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), t_8);
            t = t_8;
            ;
            LocalPopChoice(u_14);
          }
        else
          {
            t = t_14;
          }
      }
      ;
      LocalPopChoice(r_14);
    }
  else
    {
      t = q_14;
      {
        ATerm q_3 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(q_3, t);
      }
    }
  t = term_v_14;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, s_3, t);
  t = map_1_0(t_3, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm k_84 (ATerm), ATerm t)
{
  ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL;
  p_12 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      n_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_12);
  m_12 = t;
  t = n_12;
  t = k_84(t);
  o_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, o_12), m_12);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL;
  t_12 = t;
  {
    ATerm w_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = t_12;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_14 = ATgetFirst((ATermList) t);
                ATerm z_14 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_12;
          }
        ;
        LocalPopChoice(x_14);
      }
    else
      {
        t = w_14;
        t = (ATerm) ATinsert(ATempty, t_12);
      }
    u_12 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), u_12);
    t = t_12;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_9 = NULL;
        t = eval_config_0_0(t);
        c_9 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), c_9);
        t = c_9;
        ;
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm u_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_e_15;
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_f_15;
  return(t);
}
ATerm x_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_g_15;
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_h_15;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_3, v_3, w_3, t);
      ;
      LocalPopChoice(j_15);
    }
  else
    {
      t = i_15;
      t = Option_3_0(x_3, y_3, b_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_71 (ATerm), ATerm s_71 (ATerm), ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL;
  d_13 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_12 = ATgetFirst((ATermList) t);
      a_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_13);
  y_12 = t;
  t = z_12;
  t = r_71(t);
  b_13 = t;
  t = a_13;
  t = s_71(t);
  c_13 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(c_13), b_13), y_12);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm i_13 = NULL;
  i_13 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), i_13);
  t = (ATerm) ATmakeAppl(sym_Program_1, i_13);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_114 (ATerm), ATerm t)
{
  ATerm h_13 = NULL;
  h_13 = t;
  {
    ATerm k_15 = t;
    int l_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_15;
        t = f_114(t);
        ;
        LocalPopChoice(l_15);
      }
    else
      {
        t = k_15;
      }
    t = h_13;
    {
      ATerm h_4 (ATerm t)
      {
        ATerm n_15 = t;
        int o_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_15 = t;
            int q_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(q_15);
              }
            else
              {
                t = p_15;
                t = f_114(t);
                t = Cons_2_0(_id, h_4, t);
              }
            ;
            LocalPopChoice(o_15);
          }
        else
          {
            t = n_15;
            {
              ATerm k_13 = NULL,l_13 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  k_13 = ATgetFirst((ATermList) t);
                  l_13 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(l_13), (ATerm) ATmakeAppl(sym_Undefined_1, k_13));
            }
          }
        return(t);
      }
      t = Cons_2_0(d_4, h_4, t);
    }
  }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm y_13 = NULL;
  y_13 = t;
  if(match_string(t, "--help"))
    {
      t = y_13;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_13;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_13;
        }
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_r_15;
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_s_15;
  return(t);
}
ATerm b_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_114 (ATerm), ATerm t)
{
  ATerm s_13 = NULL,v_13 = NULL,x_13 = NULL;
  s_13 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = s_13;
  {
    ATerm u_4 (ATerm t)
    {
      ATerm t_15 = t;
      int u_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_114(t);
          ;
          LocalPopChoice(u_15);
        }
      else
        {
          t = t_15;
          {
            ATerm v_15 = t;
            int w_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(x_4, y_4, a_5, t);
                ;
                LocalPopChoice(w_15);
              }
            else
              {
                t = v_15;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(u_4, t);
    {
      ATerm x_15 = t;
      int y_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_14 = NULL;
          h_14 = t;
          {
            ATerm z_15 = t;
            int a_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = h_14;
                {
                  ATerm b_16 = t;
                  int c_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm d_16 = t;
                        int e_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm s_12 = NULL;
                            t = eval_config_0_0(t);
                            s_12 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), s_12);
                            t = s_12;
                            ;
                            LocalPopChoice(e_16);
                          }
                        else
                          {
                            t = d_16;
                          }
                      }
                      ;
                      LocalPopChoice(c_16);
                    }
                  else
                    {
                      t = b_16;
                      t = fetch_1_0(b_5, t);
                    }
                  t = h_14;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(a_16);
              }
            else
              {
                t = z_15;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm f_16 = t;
                  int g_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_13 = NULL;
                      t = eval_config_0_0(t);
                      w_13 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), w_13);
                      t = w_13;
                      ;
                      LocalPopChoice(g_16);
                    }
                  else
                    {
                      t = f_16;
                    }
                  t = h_14;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(y_15);
        }
      else
        {
          t = x_15;
          {
            ATerm h_16 = t;
            int i_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_5 (ATerm t)
                {
                  ATerm e_5 (ATerm t)
                  {
                    if(((v_13 != NULL) && (v_13 != t)))
                      _fail(t);
                    else
                      v_13 = t;
                    return(t);
                  }
                  t = Undefined_1_0(e_5, t);
                  return(t);
                }
                t = fetch_1_0(c_5, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(v_13)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_k_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_13)), term_j_16));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(i_16);
              }
            else
              {
                t = h_16;
              }
          }
        }
      x_13 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = x_13;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm e_112 (ATerm), ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm h_112 (ATerm), ATerm t)
{
  ATerm k_14 = NULL;
  t = parse_options_1_0(e_112, t);
  k_14 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), k_14);
  t = k_14;
  t = g_112(t);
  {
    ATerm k_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(f_112, t);
        ;
        LocalPopChoice(l_16);
      }
    else
      {
        t = k_16;
        {
          ATerm m_16 = t;
          int n_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_112(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(n_16);
            }
          else
            {
              t = m_16;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm m_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_o_16;
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = term_p_16;
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL;
  l_14 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm q_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_14 = NULL;
        t = eval_config_0_0(t);
        g_14 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), g_14);
        t = g_14;
        ;
        LocalPopChoice(r_16);
      }
    else
      {
        t = q_16;
      }
    m_14 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, m_14));
    t = l_14;
  }
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = if_verbose2_1_0(t_5, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm n_111 (ATerm), ATerm o_111 (ATerm), ATerm p_111 (ATerm), ATerm t)
{
  ATerm g_5 (ATerm t)
  {
    ATerm s_16 = t;
    int t_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_111(t);
        ;
        LocalPopChoice(t_16);
      }
    else
      {
        t = s_16;
        {
          ATerm u_16 = t;
          int v_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(v_16);
            }
          else
            {
              t = u_16;
              {
                ATerm w_16 = t;
                int x_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(x_16);
                  }
                else
                  {
                    t = w_16;
                    {
                      ATerm y_16 = t;
                      int z_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(m_5, q_5, s_5, t);
                          ;
                          LocalPopChoice(z_16);
                        }
                      else
                        {
                          t = y_16;
                          {
                            ATerm a_17 = t;
                            int b_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(b_17);
                              }
                            else
                              {
                                t = a_17;
                                t = keep_option_0_0(t);
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
  ATerm j_5 (ATerm t)
  {
    ATerm n_14 = NULL,o_14 = NULL,s_14 = NULL;
    n_14 = t;
    {
      ATerm c_17 = t;
      int d_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((o_14 != NULL) && (o_14 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  o_14 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(u_5, t);
          ;
          LocalPopChoice(d_17);
        }
      else
        {
          t = c_17;
          t = term_e_17;
          o_14 = t;
        }
      t = not_null(o_14);
      t = ReadFromFile_0_0(t);
      s_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_14, s_14);
      t = apply_strategy_1_0(n_111, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(g_5, p_111, i_5, j_5, t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm f_17 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_14 = NULL;
      t = sometd_1_0(RepairDefinition_0_0, t);
      p_14 = t;
      t = explanation_0_0(t);
      t = p_14;
      ;
      LocalPopChoice(g_17);
    }
  else
    {
      t = f_17;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm v_5 (ATerm t)
  {
    t = _2_0(_id, c_6, t);
    return(t);
  }
  t = iowrap_3_0(v_5, _fail, default_usage_0_0, t);
  return(t);
}
