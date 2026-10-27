// rea decompile_all
// name: FUN_00420610
// address: 0x420610
// body: available
// range: 0x420610-0x42077b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00420610(int param_1,wchar_t *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  wchar_t *local_30;
  undefined1 local_2c;
  int local_28;
  undefined1 local_24;
  wchar_t *local_20;
  undefined1 local_1c;
  int local_18;
  undefined1 local_14;
  wchar_t *local_10;
  undefined1 local_c;
  int local_8;

  local_8 = param_3;
  if ((int)param_2 + -1 < *(int *)(param_1 + 8)) {
    if ((int)param_2 < 0) {
      local_c = 0;
      local_10 = param_2;
      FUN_0041c0bc(&PTR_LAB_004117f4,1,PTR_PTR_007824e4,0,&local_10);
      FUN_00406618();
    }
  }
  else {
    local_c = 0;
    local_10 = param_2;
    FUN_0041c0bc(&PTR_LAB_004117f4,1,PTR_PTR_007824e4,0,&local_10);
    FUN_00406618();
  }
  if (param_5 < 0) {
    local_10 = L"StartIndex";
    local_c = 0x11;
    FUN_0041c0bc(&PTR_LAB_004117f4,1,PTR_PTR_0078282c,0,&local_10);
    FUN_00406618();
  }
  if (param_4 < 0) {
    local_10 = L"CharCount";
    local_c = 0x11;
    FUN_0041c0bc(&PTR_LAB_004117f4,1,PTR_PTR_0078282c,0,&local_10);
    FUN_00406618();
  }
  iVar1 = FUN_00409a18(local_8);
  if (iVar1 < param_5 + param_4) {
    local_30 = L"StartIndex";
    local_2c = 0x11;
    local_28 = param_5;
    local_24 = 0;
    local_20 = L"CharCount";
    local_1c = 0x11;
    local_18 = param_4;
    local_14 = 0;
    FUN_0041c0bc(&PTR_LAB_004117f4,CONCAT31((int3)((uint)(param_5 + param_4) >> 8),1),
                 PTR_PTR_00781dd4,3,&local_30);
    FUN_00406618();
  }
  FUN_00420ddc(param_1,*(int *)(param_1 + 8) + param_4);
  iVar1 = *(int *)(param_1 + 8) - (int)param_2;
  if (0 < iVar1) {
    FUN_0040450c(*(int *)(param_1 + 4) + (int)param_2 * 2,
                 *(int *)(param_1 + 4) + (param_4 + (int)param_2) * 2,iVar1 * 2);
  }
  FUN_0040450c(local_8 + param_5 * 2,*(int *)(param_1 + 4) + (int)param_2 * 2,param_4 * 2);
  return param_1;
}
