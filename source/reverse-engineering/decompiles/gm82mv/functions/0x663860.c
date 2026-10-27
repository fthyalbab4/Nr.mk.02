// rea decompile_all
// name: FUN_00663860
// address: 0x663860
// body: available
// range: 0x663860-0x6641c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00663860(void)

{
  FUN_0058917c(&PTR_DAT_006641d4,FUN_0065e3bc,1,1);
  FUN_0058917c(&PTR_DAT_00664204,&LAB_0065e40c,0,1);
  FUN_0058917c(&PTR_DAT_00664230,FUN_0065e4a8,1,1);
  FUN_0058917c(&PTR_DAT_00664260,&LAB_0065e55c,1,1);
  FUN_0058917c(&PTR_DAT_0066428c,&LAB_0065e604,2,1);
  FUN_0058917c(&PTR_DAT_006642b4,&LAB_0065e6e8,1,1);
  FUN_0058917c(&PTR_DAT_006642dc,&LAB_0065e79c,1,1);
  FUN_0058917c(&PTR_DAT_00664308,&LAB_0065e85c,2,1);
  FUN_0058917c(&PTR_DAT_00664330,&LAB_0065e908,1,1);
  FUN_0058917c(&PTR_DAT_00664358,&LAB_0065e9b4,1,1);
  FUN_0058917c(&PTR_DAT_00664380,&LAB_0065ea60,1,1);
  FUN_0058917c(&PTR_DAT_006643ac,&LAB_0065eb54,2,1);
  FUN_0058917c(&PTR_DAT_006643d4,&LAB_0065ec74,0,1);
  FUN_0058917c(&PTR_DAT_00664400,FUN_0065ed10,1,1);
  FUN_0058917c(&PTR_DAT_00664430,&LAB_0065edc4,1,1);
  FUN_0058917c(&PTR_DAT_0066445c,&LAB_0065ee6c,2,1);
  FUN_0058917c(&PTR_DAT_00664484,&LAB_0065ef50,1,1);
  FUN_0058917c(&PTR_DAT_006644ac,&LAB_0065f010,1,1);
  FUN_0058917c(&PTR_DAT_006644d8,&LAB_0065f0d0,2,1);
  FUN_0058917c(&PTR_DAT_00664508,&LAB_0065f17c,1,1);
  FUN_0058917c(&PTR_DAT_00664538,&LAB_0065f228,1,1);
  FUN_0058917c(&PTR_DAT_00664560,&LAB_0065f2d4,1,1);
  FUN_0058917c(&PTR_DAT_00664588,&LAB_0065f380,1,1);
  FUN_0058917c(&PTR_DAT_006645b4,&LAB_0065f474,2,1);
  FUN_0058917c(L"ds_list_create",&LAB_0065f594,0,1);
  FUN_0058917c(L"ds_list_destroy",FUN_0065f630,1,1);
  FUN_0058917c(L"ds_list_clear",&LAB_0065f6e4,1,1);
  FUN_0058917c(L"ds_list_copy",&LAB_0065f78c,2,1);
  FUN_0058917c(L"ds_list_size",&LAB_0065f870,1,1);
  FUN_0058917c(L"ds_list_empty",&LAB_0065f924,1,1);
  FUN_0058917c(L"ds_list_add",&LAB_0065f9e4,2,1);
  FUN_0058917c(L"ds_list_insert",&LAB_0065fa90,3,1);
  FUN_0058917c(L"ds_list_replace",&LAB_0065fb48,3,1);
  FUN_0058917c(L"ds_list_delete",&LAB_0065fc00,2,1);
  FUN_0058917c(L"ds_list_find_index",&LAB_0065fcb4,2,1);
  FUN_0058917c(L"ds_list_find_value",&LAB_0065fd78,2,1);
  FUN_0058917c(L"ds_list_sort",&LAB_0065fe30,2,1);
  FUN_0058917c(L"ds_list_shuffle",&LAB_0065fef0,1,1);
  FUN_0058917c(L"ds_list_write",&LAB_0065ff98,1,1);
  FUN_0058917c(L"ds_list_read",&LAB_0066008c,2,1);
  FUN_0058917c(L"ds_map_create",&LAB_006601ac,0,1);
  FUN_0058917c(&PTR_DAT_006648b0,FUN_00660248,1,1);
  FUN_0058917c(L"ds_map_clear",&LAB_006602fc,1,1);
  FUN_0058917c(L"ds_map_copy",&LAB_006603a4,2,1);
  FUN_0058917c(&PTR_DAT_00664928,&LAB_00660488,1,1);
  FUN_0058917c(&PTR_DAT_0066494c,&LAB_0066053c,1,1);
  FUN_0058917c(&PTR_DAT_00664974,&LAB_006605fc,3,1);
  FUN_0058917c(&PTR_DAT_00664998,&LAB_006606ac,3,1);
  FUN_0058917c(&PTR_DAT_006649c4,&LAB_0066075c,2,1);
  FUN_0058917c(&PTR_DAT_006649ec,&LAB_00660808,2,1);
  FUN_0058917c(&PTR_DAT_00664a14,&LAB_006608d0,2,1);
  FUN_0058917c(&PTR_DAT_00664a44,&LAB_00660980,2,1);
  FUN_0058917c(&PTR_DAT_00664a7c,&LAB_00660a30,2,1);
  FUN_0058917c(&PTR_DAT_00664aac,&LAB_00660ae0,1,1);
  FUN_0058917c(&PTR_DAT_00664adc,&LAB_00660b8c,1,1);
  FUN_0058917c(&PTR_DAT_00664b0c,&LAB_00660c38,1,1);
  FUN_0058917c(&PTR_DAT_00664b34,&LAB_00660d2c,2,1);
  FUN_0058917c(&PTR_DAT_00664b58,&LAB_00660e4c,0,1);
  FUN_0058917c(&PTR_DAT_00664b8c,FUN_00660ee8,1,1);
  FUN_0058917c(&PTR_DAT_00664bc0,&LAB_00660f9c,1,1);
  FUN_0058917c(&PTR_DAT_00664bf0,&LAB_00661044,2,1);
  FUN_0058917c(&PTR_DAT_00664c20,&LAB_00661128,1,1);
  FUN_0058917c(&PTR_DAT_00664c50,&LAB_006611dc,1,1);
  FUN_0058917c(&PTR_DAT_00664c80,&LAB_0066129c,3,1);
  FUN_0058917c(&PTR_DAT_00664cac,&LAB_0066134c,3,1);
  FUN_0058917c(&PTR_DAT_00664cf0,&LAB_006613fc,2,1);
  FUN_0058917c(&PTR_DAT_00664d30,&LAB_006614ac,2,1);
  FUN_0058917c(&PTR_DAT_00664d70,&LAB_00661558,1,1);
  FUN_0058917c(&PTR_DAT_00664dac,&LAB_00661604,1,1);
  FUN_0058917c(&PTR_DAT_00664de4,&LAB_006616b0,1,1);
  FUN_0058917c(&PTR_DAT_00664e20,&LAB_0066175c,1,1);
  FUN_0058917c(&PTR_DAT_00664e58,&LAB_00661808,1,1);
  FUN_0058917c(&PTR_DAT_00664e88,&LAB_006618fc,2,1);
  FUN_0058917c(L"ds_grid_create",&LAB_00661a1c,2,1);
  FUN_0058917c(L"ds_grid_destroy",&LAB_00661ad4,1,1);
  FUN_0058917c(L"ds_grid_copy",&LAB_00661c48,2,1);
  FUN_0058917c(L"ds_grid_resize",&LAB_00661b88,3,1);
  FUN_0058917c(L"ds_grid_width",&LAB_00661d2c,1,1);
  FUN_0058917c(L"ds_grid_height",&LAB_00661de8,1,1);
  FUN_0058917c(L"ds_grid_clear",&LAB_00661ea4,2,1);
  FUN_0058917c(L"ds_grid_set",&LAB_00661f50,4,1);
  FUN_0058917c(L"ds_grid_add",&LAB_00662018,4,1);
  FUN_0058917c(L"ds_grid_multiply",&LAB_006620e0,4,1);
  FUN_0058917c(L"ds_grid_set_region",&LAB_006621a8,6,1);
  FUN_0058917c(L"ds_grid_add_region",&LAB_00662280,6,1);
  FUN_0058917c(L"ds_grid_multiply_region",&LAB_00662358,6,1);
  FUN_0058917c(L"ds_grid_set_disk",&LAB_00662430,5,1);
  FUN_0058917c(L"ds_grid_add_disk",&LAB_006624f4,5,1);
  FUN_0058917c(L"ds_grid_multiply_disk",&LAB_006625b8,5,1);
  FUN_0058917c(L"ds_grid_set_grid_region",&LAB_0066267c,8,1);
  FUN_0058917c(L"ds_grid_add_grid_region",&LAB_006627a4,8,1);
  FUN_0058917c(L"ds_grid_multiply_grid_region",&LAB_006628cc,8,1);
  FUN_0058917c(L"ds_grid_get",&LAB_006629f4,3,1);
  FUN_0058917c(L"ds_grid_get_sum",&LAB_00662ab8,5,1);
  FUN_0058917c(L"ds_grid_get_max",&LAB_00662b8c,5,1);
  FUN_0058917c(L"ds_grid_get_min",&LAB_00662c60,5,1);
  FUN_0058917c(L"ds_grid_get_mean",&LAB_00662d34,5,1);
  FUN_0058917c(L"ds_grid_get_disk_sum",&LAB_00662e08,4,1);
  FUN_0058917c(L"ds_grid_get_disk_max",&LAB_00662f88,4,1);
  FUN_0058917c(L"ds_grid_get_disk_min",&LAB_00662ec8,4,1);
  FUN_0058917c(L"ds_grid_get_disk_mean",&LAB_00663048,4,1);
  FUN_0058917c(L"ds_grid_value_exists",&LAB_00663108,6,1);
  FUN_0058917c(L"ds_grid_value_x",&LAB_006631e0,6,1);
  FUN_0058917c(L"ds_grid_value_y",&LAB_006632b8,6,1);
  FUN_0058917c(L"ds_grid_value_disk_exists",&LAB_00663390,5,1);
  FUN_0058917c(L"ds_grid_value_disk_x",&LAB_00663454,5,1);
  FUN_0058917c(L"ds_grid_value_disk_y",&LAB_00663518,5,1);
  FUN_0058917c(L"ds_grid_shuffle",&LAB_006635dc,1,1);
  FUN_0058917c(L"ds_grid_write",&LAB_00663684,1,1);
  FUN_0058917c(L"ds_grid_read",&LAB_00663778,2,1);
  return;
}
