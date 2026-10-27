// rea decompile_all
// name: FUN_004207e8
// address: 0x4207e8
// body: available
// range: 0x4207e8-0x420953 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004207e8(int param_1,undefined **param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  wchar_t *local_30;
  undefined1 local_2c;
  int local_28;
  undefined1 local_24;
  undefined **local_20;
  undefined1 local_1c;
  int local_18;
  undefined1 local_14;
  undefined **local_10;
  undefined1 local_c;
  int local_8;

  local_8 = param_3;
  if ((int)param_2 + -1 < *(int *)(param_1 + 8)) {
    if ((int)param_2 < 0) {
      local_c = 0;
      local_10 = param_2;
      FUN_0041bf50(&LAB_00411654,1,PTR_LAB_00689324,0,&local_10);
      FUN_00406ab4();
    }
  }
  else {
    local_c = 0;
    local_10 = param_2;
    FUN_0041bf50(&LAB_00411654,1,PTR_LAB_00689324,0,&local_10);
    FUN_00406ab4();
  }
  if (param_5 < 0) {
    local_10 = (undefined **)0x420960;
    local_c = 0x11;
    FUN_0041bf50(&LAB_00411654,1,PTR_LAB_0068958c,0,&local_10);
    FUN_00406ab4();
  }
  if (param_4 < 0) {
    local_10 = &PTR_DAT_00420984;
    local_c = 0x11;
    FUN_0041bf50(&LAB_00411654,1,PTR_LAB_0068958c,0,&local_10);
    FUN_00406ab4();
  }
  iVar1 = FUN_00409c34(local_8);
  if (iVar1 < param_5 + param_4) {
    local_30 = L"StartIndex";
    local_2c = 0x11;
    local_28 = param_5;
    local_24 = 0;
    local_20 = &PTR_DAT_00420984;
    local_1c = 0x11;
    local_18 = param_4;
    local_14 = 0;
    FUN_0041bf50(&LAB_00411654,CONCAT31((int3)((uint)(param_5 + param_4) >> 8),1),PTR_LAB_00688e20,3
                 ,&local_30);
    FUN_00406ab4();
  }
  FUN_00420fb4(param_1,*(int *)(param_1 + 8) + param_4);
  iVar1 = *(int *)(param_1 + 8) - (int)param_2;
  if (0 < iVar1) {
    FUN_00404514(*(int *)(param_1 + 4) + (int)param_2 * 2,
                 *(int *)(param_1 + 4) + (param_4 + (int)param_2) * 2,iVar1 * 2);
  }
  FUN_00404514(local_8 + param_5 * 2,*(int *)(param_1 + 4) + (int)param_2 * 2,param_4 * 2);
  return param_1;
}
