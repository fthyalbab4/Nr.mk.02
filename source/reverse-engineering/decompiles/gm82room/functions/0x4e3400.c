// rea decompile_all
// name: FUN_004e3400
// address: 0x4e3400
// body: available
// range: 0x4e3400-0x4e3478 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e3400(int param_1)

{
  HWND pHVar1;
  HMENU pHVar2;
  HMENU wParam;
  LPARAM lParam;

  if ((*(char *)(param_1 + 0x29e) == '\x02') && (*(int *)(param_1 + 0x37c) != 0)) {
    wParam = (HMENU)0x0;
    if (*(int **)(param_1 + 0x2b4) != (int *)0x0) {
      wParam = (HMENU)(**(code **)(**(int **)(param_1 + 0x2b4) + 0x38))();
    }
    lParam = 0;
    if (*(int *)(param_1 + 0x2c0) != 0) {
      lParam = FUN_004a6160();
    }
    pHVar1 = (HWND)FUN_004c45dc(param_1);
    pHVar2 = GetMenu(pHVar1);
    SendMessageW(*(HWND *)(param_1 + 0x37c),0x230,(WPARAM)wParam,lParam);
    if (wParam != pHVar2) {
      pHVar1 = (HWND)FUN_004c45dc(param_1);
      DrawMenuBar(pHVar1);
    }
  }
  return;
}
