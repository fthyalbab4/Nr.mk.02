// rea decompile_all
// name: FUN_0040eac0
// address: 0x40eac0
// body: available
// range: 0x40eac0-0x40eb5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


HWND FUN_0040eac0(UINT *param_1,UINT *param_2,UINT *param_3,LRESULT *param_4,LRESULT *param_5)

{
  HWND hWnd;
  UINT UVar1;
  LRESULT LVar2;

  hWnd = FindWindowW(L"MouseZ",L"Magellan MSWHEEL");
  UVar1 = RegisterWindowMessageW(L"MSWHEEL_ROLLMSG");
  *param_1 = UVar1;
  UVar1 = RegisterWindowMessageW(L"MSH_WHEELSUPPORT_MSG");
  *param_2 = UVar1;
  UVar1 = RegisterWindowMessageW(L"MSH_SCROLL_LINES_MSG");
  *param_3 = UVar1;
  if ((*param_2 == 0) || (hWnd == (HWND)0x0)) {
    *param_5 = 0;
  }
  else {
    LVar2 = SendMessageW(hWnd,*param_2,0,0);
    *param_5 = LVar2;
  }
  if ((*param_3 == 0) || (hWnd == (HWND)0x0)) {
    *param_4 = 3;
  }
  else {
    LVar2 = SendMessageW(hWnd,*param_3,0,0);
    *param_4 = LVar2;
  }
  return hWnd;
}
