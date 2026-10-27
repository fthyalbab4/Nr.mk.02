// rea decompile_all
// name: FUN_0048f530
// address: 0x48f530
// body: available
// range: 0x48f530-0x48f577 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048f530(int param_1)

{
  HWND hWnd;
  HDC hDC;

  if (*(HGDIOBJ *)(param_1 + 0x1ec) != (HGDIOBJ)0x0) {
    SelectObject(*(HDC *)(param_1 + 0x1c8),*(HGDIOBJ *)(param_1 + 0x1ec));
  }
  hDC = *(HDC *)(param_1 + 0x1c8);
  hWnd = (HWND)FUN_004f76a8(*(undefined4 *)(param_1 + 0x34));
  ReleaseDC(hWnd,hDC);
  if (*(int *)(param_1 + 0x1b8) != 0) {
    FUN_00405a7c();
    *(undefined4 *)(param_1 + 0x1b8) = 0;
  }
  return;
}
