// rea decompile_all
// name: FUN_0056c9b4
// address: 0x56c9b4
// body: available
// range: 0x56c9b4-0x56c9e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056c9b4(int param_1,uint param_2)

{
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;

  FUN_0056c9a4(param_1);
  if (*(int *)(param_1 + 0x2ec) != 0) {
    lParam = 0;
    param_2 = param_2 & 0xffff;
    Msg = 0x102;
    hWnd = (HWND)FUN_004f76a8(*(int *)(param_1 + 0x2ec));
    PostMessageW(hWnd,Msg,param_2,lParam);
  }
  return;
}
