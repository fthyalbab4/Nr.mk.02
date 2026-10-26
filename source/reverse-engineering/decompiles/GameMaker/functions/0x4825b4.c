// rea decompile_all
// name: FUN_004825b4
// address: 0x4825b4
// body: available
// range: 0x4825b4-0x482603 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004825b4(int param_1,char param_2)

{
  char cVar1;
  uint wParam;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;

  if (param_2 != *(char *)(param_1 + 0x27a)) {
    *(char *)(param_1 + 0x27a) = param_2;
    cVar1 = FUN_004f7a54(param_1);
    if (cVar1 != '\0') {
      lParam = 0;
      wParam = (uint)*(byte *)(param_1 + 0x27a);
      Msg = 0xf1;
      hWnd = (HWND)FUN_004f76a8(param_1);
      SendMessageW(hWnd,Msg,wParam,lParam);
    }
    if (*(char *)(param_1 + 0x270) == '\0') {
      FUN_00405d08(param_1);
    }
  }
  return;
}
