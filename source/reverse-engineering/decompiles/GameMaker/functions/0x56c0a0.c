// rea decompile_all
// name: FUN_0056c0a0
// address: 0x56c0a0
// body: available
// range: 0x56c0a0-0x56c105 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056c0a0(int param_1)

{
  char cVar1;
  HWND pHVar2;
  BOOL BVar3;
  HWND hWndInsertAfter;
  int X;
  int Y;
  int cx;
  int cy;
  UINT uFlags;

  cVar1 = FUN_004f7a54(param_1);
  if (cVar1 != '\0') {
    pHVar2 = (HWND)FUN_004f76a8(param_1);
    BVar3 = IsWindowVisible(pHVar2);
    if (BVar3 != 0) {
      FUN_0056c01c(param_1);
      uFlags = 0x8c;
      cy = 0;
      cx = 0;
      Y = 0;
      X = 0;
      hWndInsertAfter = (HWND)0x0;
      pHVar2 = (HWND)FUN_004f76a8(param_1);
      SetWindowPos(pHVar2,hWndInsertAfter,X,Y,cx,cy,uFlags);
      cVar1 = FUN_00405d08(param_1);
      if (cVar1 != '\0') {
        pHVar2 = (HWND)FUN_004f76a8(*(undefined4 *)(param_1 + 0x2c0));
        SetFocus(pHVar2);
      }
    }
  }
  return;
}
