// rea decompile_all
// name: FUN_004e4f0c
// address: 0x4e4f0c
// body: available
// range: 0x4e4f0c-0x4e4f54 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e4f0c(UINT param_1,int param_2,int param_3)

{
  char cVar1;
  HWND hWnd;
  int iVar2;
  WPARAM wParam;
  LPARAM lParam;

  if (param_2 != 0) {
    do {
      iVar2 = param_2;
      param_2 = *(int *)(iVar2 + 0x34);
      if (param_2 == 0) break;
      cVar1 = FUN_004061f8(iVar2,&PTR_LAB_004d9848);
    } while (cVar1 == '\0');
    if ((iVar2 != 0) && (param_3 != iVar2)) {
      lParam = 0;
      wParam = 0;
      hWnd = (HWND)FUN_004c45dc(iVar2);
      SendMessageW(hWnd,param_1,wParam,lParam);
    }
  }
  return;
}
