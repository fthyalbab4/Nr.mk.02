// rea decompile_all
// name: FUN_00421834
// address: 0x421834
// body: available
// range: 0x421834-0x42199f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00421834(int *param_1,int param_2,int param_3,int param_4,int *param_5,int param_6)

{
  int iVar1;
  int local_18;
  undefined1 local_14;
  int local_10;
  int local_c;
  int *local_8;

  local_c = param_2;
  local_8 = param_1;
  if ((param_2 == 0) && (param_6 != 0)) {
    FUN_0041bfec(&PTR_LAB_00414218,1,PTR_PTR_00781b14);
    FUN_00406618();
  }
  if ((*param_5 == 0) && (param_6 != 0)) {
    FUN_0041bfec(&PTR_LAB_00414218,1,PTR_PTR_007816c4);
    FUN_00406618();
  }
  if (param_3 < 0) {
    local_14 = 0;
    local_18 = param_3;
    FUN_0041c0bc(&PTR_LAB_00414218,1,PTR_PTR_0078242c,0,&local_18);
    FUN_00406618();
  }
  if (param_6 < 0) {
    local_18 = param_6;
    local_14 = 0;
    FUN_0041c0bc(&PTR_LAB_00414218,1,PTR_PTR_00781e58,0,&local_18);
    FUN_00406618();
  }
  iVar1 = FUN_00409a18(local_c);
  if (iVar1 - param_3 < param_6) {
    local_18 = param_6;
    local_14 = 0;
    FUN_0041c0bc(&PTR_LAB_00414218,1,PTR_PTR_00781e58,0,&local_18);
    FUN_00406618();
  }
  local_10 = FUN_00409a18(*param_5);
  if ((param_4 < 0) || (local_10 < param_4)) {
    local_18 = param_4;
    local_14 = 0;
    FUN_0041c0bc(&PTR_LAB_00414218,1,PTR_PTR_00782184,0,&local_18);
    FUN_00406618();
  }
  iVar1 = FUN_004215b8(local_8,local_c,param_3,param_6);
  if (local_10 - param_4 < iVar1) {
    FUN_0041bfec(&PTR_LAB_00414218,CONCAT31((int3)((uint)(local_10 - param_4) >> 8),1),
                 PTR_PTR_007816c4);
    FUN_00406618();
  }
  (**(code **)(*local_8 + 4))
            (local_8,local_c + param_3 * 2,param_6,local_10 - param_4,*param_5 + param_4);
  return;
}
