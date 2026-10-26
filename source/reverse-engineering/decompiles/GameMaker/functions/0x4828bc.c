// rea decompile_all
// name: FUN_004828bc
// address: 0x4828bc
// body: available
// range: 0x4828bc-0x482944 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004828bc(int *param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  HWND hWnd;
  char cVar3;
  UINT Msg;
  LPARAM lParam;

  cVar3 = (char)param_2;
  if (cVar3 != *(char *)((int)param_1 + 0x279)) {
    *(char *)((int)param_1 + 0x279) = cVar3;
    FUN_004f7984(param_1,param_2);
    cVar1 = FUN_004f7a54(param_1);
    if (cVar1 != '\0') {
      lParam = 0;
      uVar2 = (**(code **)(*param_1 + 0xec))();
      uVar2 = uVar2 & 0x7f;
      Msg = 0xf1;
      hWnd = (HWND)FUN_004f76a8(param_1);
      SendMessageW(hWnd,Msg,uVar2,lParam);
    }
    if (cVar3 != '\0') {
      FUN_00482800();
      FUN_004ee298(param_1);
      if ((char)param_1[0x9c] == '\0') {
        FUN_00405d08(param_1);
      }
    }
  }
  return;
}
