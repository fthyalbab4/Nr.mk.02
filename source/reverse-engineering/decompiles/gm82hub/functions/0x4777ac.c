// rea decompile_all
// name: FUN_004777ac
// address: 0x4777ac
// body: available
// range: 0x4777ac-0x4777e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004777ac(int param_1,byte param_2)

{
  char cVar1;
  uint wParam;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;

  cVar1 = FUN_004c4988(param_1);
  if (cVar1 != '\0') {
    lParam = 0;
    wParam = (uint)param_2;
    Msg = 0xb9;
    hWnd = (HWND)FUN_004c45dc(param_1);
    SendMessageW(hWnd,Msg,wParam,lParam);
    return;
  }
  *(byte *)(param_1 + 0x283) = param_2;
  return;
}
