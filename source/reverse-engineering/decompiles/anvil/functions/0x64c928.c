// rea decompile_all
// name: FUN_0064c928
// address: 0x64c928
// body: available
// range: 0x64c928-0x64d14b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064c928(void)

{
  FUN_0058917c(L"event_inherited",FUN_00648854,0,0);
  FUN_0058917c(L"event_perform",&LAB_006488ac,2,0);
  FUN_0058917c(L"event_user",FUN_006488dc,1,0);
  FUN_0058917c(L"event_perform_object",FUN_00648908,3,0);
  FUN_0058917c(&PTR_DAT_0064d208,&LAB_00648944,0xffffffff,1);
  FUN_0058917c(&PTR_DAT_0064d234,&LAB_00648d6c,0xffffffff,1);
  FUN_0058917c(&PTR_DAT_0064d25c,&LAB_00648e98,1,1);
  FUN_0058917c(L"get_function_address",&LAB_0064c89c,1,1);
  FUN_0058917c(&PTR_DAT_0064d2bc,&LAB_00648f54,3,1);
  FUN_0058917c(&PTR_DAT_0064d2ec,&LAB_006490e0,1,1);
  FUN_0058917c(&PTR_DAT_0064d318,&LAB_006491c8,4,1);
  FUN_0058917c(&PTR_DAT_0064d348,&LAB_00649378,2,1);
  FUN_0058917c(&PTR_DAT_0064d374,&LAB_0064947c,5,1);
  FUN_0058917c(&PTR_DAT_0064d3a4,&LAB_0064964c,3,1);
  FUN_0058917c(&PTR_DAT_0064d3d0,&LAB_00649764,6,1);
  FUN_0058917c(&PTR_DAT_0064d400,&LAB_00649954,4,1);
  FUN_0058917c(&PTR_DAT_0064d42c,&LAB_00649a80,7,1);
  FUN_0058917c(&PTR_DAT_0064d45c,&LAB_00649c94,5,1);
  FUN_0058917c(&PTR_DAT_0064d488,&LAB_00649dd4,3,1);
  FUN_0058917c(&PTR_DAT_0064d4b8,&LAB_00649f80,6,1);
  FUN_0058917c(&PTR_DAT_0064d4e4,&LAB_0064a0d4,3,1);
  FUN_0058917c(&PTR_DAT_0064d514,&LAB_0064a280,7,1);
  FUN_0058917c(&PTR_DAT_0064d540,&LAB_0064a3ec,3,1);
  FUN_0058917c(&PTR_DAT_0064d570,&LAB_0064a598,8,1);
  FUN_0058917c(&PTR_DAT_0064d59c,&LAB_0064a71c,3,1);
  FUN_0058917c(&PTR_DAT_0064d5cc,&LAB_0064a8c8,9,1);
  FUN_0058917c(L"execute_string",&LAB_0064aa64,0xffffffff,0);
  FUN_0058917c(L"execute_file",&LAB_0064aca4,0xffffffff,0);
  FUN_0058917c(&PTR_DAT_0064d64c,&LAB_0064b004,0,0);
  FUN_0058917c(L"show_debug_message",&LAB_0064b030,1,0);
  FUN_0058917c(L"set_program_priority",FUN_0064b0d8,1,0);
  FUN_0058917c(L"set_application_title",&LAB_0064b1d0,1,0);
  FUN_0058917c(L"variable_global_exists",&LAB_0064b22c,1,0);
  FUN_0058917c(L"variable_global_get",FUN_0064b354,1,0);
  FUN_0058917c(L"variable_global_array_get",FUN_0064b3ac,2,0);
  FUN_0058917c(L"variable_global_array2_get",&LAB_0064b470,3,0);
  FUN_0058917c(L"variable_global_set",&LAB_0064b780,2,0);
  FUN_0058917c(L"variable_global_array_set",FUN_0064b7d8,3,0);
  FUN_0058917c(L"variable_global_array2_set",&LAB_0064b89c,4,0);
  FUN_0058917c(L"variable_local_exists",&LAB_0064b2bc,1,0);
  FUN_0058917c(L"variable_local_get",&LAB_0064b560,1,0);
  FUN_0058917c(L"variable_local_array_get",&LAB_0064b5c0,2,0);
  FUN_0058917c(L"variable_local_array2_get",&LAB_0064b68c,3,0);
  FUN_0058917c(L"variable_local_set",&LAB_0064b98c,2,0);
  FUN_0058917c(L"variable_local_array_set",FUN_0064b9ec,3,0);
  FUN_0058917c(L"variable_local_array2_set",&LAB_0064bab8,4,0);
  FUN_0058917c(&PTR_DAT_0064da64,&LAB_0064bbac,0,0);
  FUN_0058917c(&PTR_DAT_0064da98,FUN_0064bc54,1,0);
  FUN_0058917c(&PTR_DAT_0064dacc,&LAB_0064bbdc,0,0);
  FUN_0058917c(L"date_current_datetime",FUN_0064bca8,0,0);
  FUN_0058917c(L"date_current_date",&LAB_0064bcc4,0,0);
  FUN_0058917c(L"date_current_time",&LAB_0064bce0,0,0);
  FUN_0058917c(L"date_create_datetime",&LAB_0064bcfc,6,0);
  FUN_0058917c(L"date_create_date",&LAB_0064bddc,3,0);
  FUN_0058917c(L"date_create_time",FUN_0064be3c,3,0);
  FUN_0058917c(&PTR_DAT_0064dc30,FUN_0064bea0,6,0);
  FUN_0058917c(&PTR_DAT_0064dc64,&LAB_0064bf40,3,0);
  FUN_0058917c(&PTR_DAT_0064dc90,&LAB_0064bf88,3,0);
  FUN_0058917c(&PTR_DAT_0064dcbc,FUN_0064bfd0,2,0);
  FUN_0058917c(&PTR_DAT_0064dce4,FUN_0064bffc,2,0);
  FUN_0058917c(&PTR_DAT_0064dd10,FUN_0064c028,2,0);
  FUN_0058917c(&PTR_DAT_0064dd38,&LAB_0064c07c,2,0);
  FUN_0058917c(&PTR_DAT_0064dd60,FUN_0064c0c4,2,0);
  FUN_0058917c(&PTR_DAT_0064dd88,&LAB_0064c0f4,2,0);
  FUN_0058917c(&PTR_DAT_0064ddb4,&LAB_0064c124,2,0);
  FUN_0058917c(&PTR_DAT_0064dde0,&LAB_0064c154,1,0);
  FUN_0058917c(&PTR_DAT_0064de08,&LAB_0064c190,1,0);
  FUN_0058917c(&PTR_DAT_0064de34,&LAB_0064c1cc,1,0);
  FUN_0058917c(&PTR_DAT_0064de5c,&LAB_0064c1fc,1,0);
  FUN_0058917c(&PTR_DAT_0064de84,&LAB_0064c238,1,0);
  FUN_0058917c(&PTR_DAT_0064deac,&LAB_0064c278,1,0);
  FUN_0058917c(&PTR_DAT_0064ded8,&LAB_0064c2b8,1,0);
  FUN_0058917c(&PTR_DAT_0064df04,&LAB_0064c2f8,1,0);
  FUN_0058917c(&PTR_DAT_0064df34,&LAB_0064c328,1,0);
  FUN_0058917c(&PTR_DAT_0064df6c,&LAB_0064c358,1,0);
  FUN_0058917c(&PTR_DAT_0064dfa4,&LAB_0064c388,1,0);
  FUN_0058917c(&PTR_DAT_0064dfe0,&LAB_0064c3bc,1,0);
  FUN_0058917c(&PTR_DAT_0064e01c,&LAB_0064c3f0,2,0);
  FUN_0058917c(&PTR_DAT_0064e048,&LAB_0064c41c,2,0);
  FUN_0058917c(&PTR_DAT_0064e074,&LAB_0064c448,2,0);
  FUN_0058917c(&PTR_DAT_0064e0a0,&LAB_0064c474,2,0);
  FUN_0058917c(&PTR_DAT_0064e0c8,&LAB_0064c4a0,2,0);
  FUN_0058917c(&PTR_DAT_0064e0f4,&LAB_0064c4cc,2,0);
  FUN_0058917c(&PTR_DAT_0064e124,&LAB_0064c4f8,2,0);
  FUN_0058917c(L"date_compare_datetime",&LAB_0064c524,2,0);
  FUN_0058917c(L"date_compare_date",&LAB_0064c55c,2,0);
  FUN_0058917c(L"date_compare_time",&LAB_0064c594,2,0);
  FUN_0058917c(&PTR_DAT_0064e1ec,&LAB_0064c5cc,1,0);
  FUN_0058917c(&PTR_DAT_0064e214,&LAB_0064c614,1,0);
  FUN_0058917c(&PTR_DAT_0064e23c,FUN_0064c658,1,0);
  FUN_0058917c(&PTR_DAT_0064e274,&LAB_0064c6d0,1,0);
  FUN_0058917c(&PTR_DAT_0064e2a4,FUN_0064c74c,1,0);
  FUN_0058917c(&PTR_DAT_0064e2d4,FUN_0064c7c8,1,0);
  FUN_0058917c(&PTR_DAT_0064e308,&LAB_0064c7f8,1,0);
  FUN_0058917c(&PTR_DAT_0064e338,&LAB_0064c83c,1,0);
  FUN_0058917c(L"date_is_today",&LAB_0064c86c,1,0);
  return;
}
