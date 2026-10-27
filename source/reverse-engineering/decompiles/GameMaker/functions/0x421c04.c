// rea decompile_all
// name: FUN_00421c04
// address: 0x421c04
// body: available
// range: 0x421c04-0x421ccc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00421c04(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int local_10;
  undefined1 local_c;
  int *local_8;

  local_8 = param_1;
  if ((param_2 == 0) && (param_4 != 0)) {
    FUN_0041bfec(&PTR_LAB_00414218,1,PTR_PTR_00781b14);
    FUN_00406618();
  }
  if (param_3 < 0) {
    local_c = 0;
    local_10 = param_3;
    FUN_0041c0bc(&PTR_LAB_00414218,1,PTR_PTR_00781f18,0,&local_10);
    FUN_00406618();
  }
  if (param_4 < 0) {
    local_10 = param_4;
    local_c = 0;
    FUN_0041c0bc(&PTR_LAB_00414218,1,PTR_PTR_00781e58,0,&local_10);
    FUN_00406618();
  }
  iVar1 = FUN_00409a18(param_2);
  if (iVar1 - param_3 < param_4) {
    local_10 = param_4;
    local_c = 0;
    FUN_0041c0bc(&PTR_LAB_00414218,1,PTR_PTR_00781e58,0,&local_10);
    FUN_00406618();
  }
  (**(code **)(*local_8 + 8))(local_8,param_2 + param_3,param_4);
  return;
}
