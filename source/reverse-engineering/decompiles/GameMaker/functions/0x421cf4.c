// rea decompile_all
// name: FUN_00421cf4
// address: 0x421cf4
// body: available
// range: 0x421cf4-0x421df0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00421cf4(int *param_1,int param_2,int param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  int local_14;
  undefined1 local_10;
  undefined4 local_c;
  int *local_8;

  local_8 = param_1;
  if ((param_2 == 0) && (param_5 != 0)) {
    FUN_0041bfec(&PTR_LAB_00414218,1,PTR_PTR_00781b14);
    FUN_00406618();
  }
  if (param_3 < 0) {
    local_10 = 0;
    local_14 = param_3;
    FUN_0041c0bc(&PTR_LAB_00414218,1,PTR_PTR_00781f18,0,&local_14);
    FUN_00406618();
  }
  if (param_5 < 0) {
    local_14 = param_5;
    local_10 = 0;
    FUN_0041c0bc(&PTR_LAB_00414218,1,PTR_PTR_00781e58,0,&local_14);
    FUN_00406618();
  }
  iVar1 = FUN_00409a18(param_2);
  if (iVar1 - param_3 < param_5) {
    local_14 = param_5;
    local_10 = 0;
    FUN_0041c0bc(&PTR_LAB_00414218,1,PTR_PTR_00781e58,0,&local_14);
    FUN_00406618();
  }
  local_c = FUN_00421c04(local_8,param_2,param_3,param_5);
  FUN_00409be0(param_4,&DAT_00412fa0,1,local_c);
  (**(code **)(*local_8 + 0xc))(local_8,param_2 + param_3,param_5,local_c,*param_4);
  return;
}
