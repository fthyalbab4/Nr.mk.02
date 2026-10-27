// rea decompile_all
// name: FUN_004837a4
// address: 0x4837a4
// body: available
// range: 0x4837a4-0x4837f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_004837a4(undefined4 param_1,WPARAM param_2)

{
  HWND hWnd;
  int iVar1;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  WPARAM local_10;
  undefined1 local_c;

  lParam = 0;
  Msg = 0x187;
  wParam = param_2;
  hWnd = (HWND)FUN_004f76a8(param_1);
  iVar1 = SendMessageW(hWnd,Msg,wParam,lParam);
  if (iVar1 == -1) {
    local_c = 0;
    local_10 = param_2;
    FUN_0041c0bc(&PTR_LAB_0042ed5c,1,PTR_PTR_007824e4,0,&local_10);
    iVar1 = FUN_00406618();
  }
  return iVar1 != 0;
}
