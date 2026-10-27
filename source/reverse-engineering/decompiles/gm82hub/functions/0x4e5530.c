// rea decompile_all
// name: FUN_004e5530
// address: 0x4e5530
// body: available
// range: 0x4e5530-0x4e55bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e5530(int *param_1,int param_2)

{
  int iVar1;
  HWND pHVar2;
  uint uVar3;
  HWND hWndInsertAfter;
  int Y;
  int cx;
  int cy;
  WPARAM wParam;
  UINT UVar4;
  LPARAM lParam;

  if (((*(int *)(param_2 + 4) == 2) && (*(char *)((int)param_1 + 0x8b) == '\x01')) &&
     ((*(byte *)(param_1 + 7) & 0x10) == 0)) {
    FUN_004c45dc(param_1);
    iVar1 = FUN_004df298();
    if (iVar1 == 0) {
      UVar4 = 7;
      cy = 0;
      cx = 0;
      Y = 0;
      iVar1 = 0;
      hWndInsertAfter = (HWND)0x0;
      pHVar2 = (HWND)FUN_004c45dc(param_1);
      SetWindowPos(pHVar2,hWndInsertAfter,iVar1,Y,cx,cy,UVar4);
      lParam = *(LPARAM *)(param_2 + 8);
      wParam = *(WPARAM *)(param_2 + 4);
      UVar4 = 0xa2;
      pHVar2 = (HWND)FUN_004c45dc(param_1);
      PostMessageW(pHVar2,UVar4,wParam,lParam);
      if (*(char *)((int)param_1 + 0x29d) == '\0') {
        return;
      }
      uVar3 = (**(code **)(*param_1 + 0x60))();
      FUN_004bbe6c(param_1,uVar3 ^ 1,0xffffffff);
      return;
    }
  }
  FUN_004bd5fc(param_1,param_2);
  return;
}
