// rea decompile_all
// name: FUN_00677720
// address: 0x677720
// body: available
// range: 0x677720-0x67779e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00677720(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;

  iVar2 = param_1[0xa2];
  if (param_2 != iVar2) {
    if (iVar2 != 0) {
      FUN_00675044(iVar2,param_1);
    }
    param_1[0xa2] = param_2;
    if (param_2 == 0) {
      iVar2 = FUN_006777b8(param_1);
      param_1[0xa2] = iVar2;
    }
    FUN_00674f04(param_1[0xa2],param_1);
    FUN_004ee858(param_1,*(undefined4 *)(param_1[0xa2] + 0x44));
    (**(code **)(*param_1 + 0x90))();
    cVar1 = FUN_004f7a54(param_1);
    if (cVar1 != '\0') {
      lParam = 0;
      wParam = 1;
      Msg = 0x85;
      hWnd = (HWND)FUN_004f76a8(param_1);
      SendMessageW(hWnd,Msg,wParam,lParam);
    }
  }
  return;
}
