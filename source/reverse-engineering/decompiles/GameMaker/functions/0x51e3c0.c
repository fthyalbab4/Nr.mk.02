// rea decompile_all
// name: FUN_0051e3c0
// address: 0x51e3c0
// body: available
// range: 0x51e3c0-0x51e528 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051e3c0(int param_1,char param_2)

{
  LPARAM lParam;
  int iVar1;
  HWND pHVar2;
  BOOL fShow;
  int fShow_00;

  if (*(int *)(DAT_007882ec + 0x170) != 0) {
    if (param_2 == '\0') {
      if (*(int *)(param_1 + 0x9c) == 0) {
        lParam = FUN_005212b0(param_1);
        EnumWindows((WNDENUMPROC)&LAB_0051e2cc,lParam);
        if ((*(int *)(param_1 + 0x44) != 0) && (*(char *)(DAT_007882ec + 0xd3) != '\0')) {
          iVar1 = FUN_00409a20(*(undefined4 *)(param_1 + 0xd8));
          if (-1 < iVar1) {
            do {
              ShowWindow(*(HWND *)(*(int *)(param_1 + 0xd8) + iVar1 * 4),0);
              iVar1 = iVar1 + -1;
            } while (iVar1 != -1);
          }
        }
        iVar1 = *(int *)(*(int *)(param_1 + 0x98) + 8) + -1;
        if (-1 < iVar1) {
          do {
            fShow = 0;
            pHVar2 = (HWND)FUN_0043b048(*(undefined4 *)(param_1 + 0x98),iVar1);
            ShowOwnedPopups(pHVar2,fShow);
            iVar1 = iVar1 + -1;
          } while (iVar1 != -1);
        }
      }
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
    }
    else if ((0 < *(int *)(param_1 + 0x9c)) &&
            (*(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1, *(int *)(param_1 + 0x9c) == 0
            )) {
      if ((*(int *)(param_1 + 0x44) != 0) && (*(char *)(DAT_007882ec + 0xd3) != '\0')) {
        iVar1 = FUN_00409a20(*(undefined4 *)(param_1 + 0xd8));
        if (-1 < iVar1) {
          do {
            ShowWindow(*(HWND *)(*(int *)(param_1 + 0xd8) + iVar1 * 4),5);
            iVar1 = iVar1 + -1;
          } while (iVar1 != -1);
        }
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0x98) + 8) + -1;
      if (-1 < iVar1) {
        do {
          fShow_00 = -(uint)(param_2 != '\0');
          pHVar2 = (HWND)FUN_0043b048(*(undefined4 *)(param_1 + 0x98),iVar1);
          ShowOwnedPopups(pHVar2,fShow_00);
          iVar1 = iVar1 + -1;
        } while (iVar1 != -1);
      }
      (**(code **)(**(int **)(param_1 + 0x98) + 8))();
      FUN_00409be0(param_1 + 0xd8,&DAT_00511488,1,0);
    }
  }
  return;
}
