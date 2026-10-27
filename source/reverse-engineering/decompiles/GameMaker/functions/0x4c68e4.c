// rea decompile_all
// name: FUN_004c68e4
// address: 0x4c68e4
// body: available
// range: 0x4c68e4-0x4c6975 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c68e4(int param_1,int param_2)

{
  char cVar1;
  LPARAM lParam;
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;

  if (*(int *)(param_1 + 0x2f0) != 0) {
    FUN_00508208(*(int *)(param_1 + 0x2f0),*(undefined4 *)(param_1 + 0x2ec));
  }
  *(int *)(param_1 + 0x2f0) = param_2;
  if (param_2 == 0) {
    cVar1 = FUN_004f7a54(param_1);
    if (cVar1 != '\0') {
      FUN_004efb90(param_1,0x402,0,0);
      FUN_004f3af0(param_1);
    }
  }
  else {
    FUN_0050824c(param_2,*(undefined4 *)(param_1 + 0x2ec));
    FUN_00448f68(*(undefined4 *)(param_1 + 0x2f0),param_1);
    cVar1 = FUN_004f7a54(param_1);
    if (cVar1 != '\0') {
      lParam = FUN_00506bcc(*(undefined4 *)(param_1 + 0x2f0));
      wParam = 0;
      Msg = 0x402;
      hWnd = (HWND)FUN_004f76a8(param_1);
      PostMessageW(hWnd,Msg,wParam,lParam);
      return;
    }
  }
  return;
}
