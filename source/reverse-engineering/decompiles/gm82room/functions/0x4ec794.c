// rea decompile_all
// name: FUN_004ec794
// address: 0x4ec794
// body: available
// range: 0x4ec794-0x4ec81b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ec794(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  HWND hWndParent;
  BOOL BVar4;
  int iVar5;
  HWND hWnd;

  if (*(int *)(param_1 + 0x170) != 0) {
    iVar2 = FUN_004e872c(DAT_0068f2ec);
    if (-1 < iVar2 + -1) {
      iVar5 = 0;
      do {
        iVar3 = FUN_004e8718(DAT_0068f2ec,iVar5);
        if (*(char *)(iVar3 + 0x59) != '\0') {
          if ((*(int *)(iVar3 + 0x1d4) == 0) || (cVar1 = FUN_004c4988(iVar3), cVar1 == '\0')) {
LAB_004ec7fe:
            FUN_004ec6f4(1);
            return;
          }
          hWnd = *(HWND *)(iVar3 + 0x1d4);
          hWndParent = (HWND)FUN_004c45dc(iVar3);
          BVar4 = IsChild(hWndParent,hWnd);
          if (BVar4 == 0) goto LAB_004ec7fe;
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_004ec6f4(0);
  }
  return;
}
