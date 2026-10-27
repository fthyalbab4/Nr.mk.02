// rea decompile_all
// name: FUN_0047ccd4
// address: 0x47ccd4
// body: available
// range: 0x47ccd4-0x47cd26 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047ccd4(int param_1,undefined4 param_2,undefined4 param_3)

{
  WPARAM wParam;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;

  if ((0 < *(int *)(param_1 + 0x294)) && (0 < *(int *)(param_1 + 0x48))) {
    FUN_004baf44(param_1,param_2,param_3,param_3);
    wParam = FUN_004048c4();
    if ((int)wParam < 1) {
      wParam = 1;
    }
    lParam = 0;
    Msg = 0x195;
    hWnd = (HWND)FUN_004c45dc(param_1);
    SendMessageW(hWnd,Msg,wParam,lParam);
  }
  return;
}
