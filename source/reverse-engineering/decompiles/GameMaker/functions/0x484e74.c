// rea decompile_all
// name: FUN_00484e74
// address: 0x484e74
// body: available
// range: 0x484e74-0x484ec8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00484e74(int param_1,UINT param_2)

{
  char cVar1;
  HWND hwnd;
  int nBar;
  SCROLLINFO *lpsi;
  BOOL redraw;
  SCROLLINFO local_20;

  lpsi = &local_20;
  if ((param_2 != *(UINT *)(param_1 + 0x280)) && ((int)param_2 <= *(int *)(param_1 + 0x27c))) {
    *(UINT *)(param_1 + 0x280) = param_2;
    local_20.cbSize = 0x1c;
    local_20.fMask = 2;
    local_20.nPage = param_2;
    cVar1 = FUN_004f7a54(param_1);
    if (cVar1 != '\0') {
      redraw = -1;
      nBar = 2;
      hwnd = (HWND)FUN_004f76a8(param_1);
      SetScrollInfo(hwnd,nBar,lpsi,redraw);
    }
  }
  return;
}
