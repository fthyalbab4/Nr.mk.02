// rea decompile_all
// name: FUN_00538dd8
// address: 0x538dd8
// body: available
// range: 0x538dd8-0x538e79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00538dd8(int param_1,char param_2,undefined4 param_3)

{
  LPCWSTR pWVar1;
  DWORD dwLen;
  LPVOID lpData;
  undefined4 extraout_ECX;
  char extraout_DL;
  undefined4 *in_FS_OFFSET;
  DWORD dwHandle;
  DWORD *lpdwHandle;
  undefined4 uStack_28;
  DWORD local_c;
  char local_5;

  local_5 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00406510();
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  local_c = 0;
  lpdwHandle = &local_c;
  pWVar1 = (LPCWSTR)FUN_00408220(param_3);
  dwLen = GetFileVersionInfoSizeW(pWVar1,lpdwHandle);
  if (dwLen == 0) {
    FUN_0041be80(&LAB_005376e8,1,PTR_LAB_00688e78);
    FUN_00406ab4();
  }
  FUN_00407c34(param_1 + 4,dwLen,0);
  lpData = (LPVOID)FUN_00407ae0(*(undefined4 *)(param_1 + 4));
  dwHandle = local_c;
  pWVar1 = (LPCWSTR)FUN_00408220(param_3);
  GetFileVersionInfoW(pWVar1,dwHandle,dwLen,lpData);
  FUN_0041ec98();
  FUN_00539868(param_1);
  if (local_5 != '\0') {
    FUN_00406568(param_1);
    *in_FS_OFFSET = uStack_28;
  }
  return param_1;
}
