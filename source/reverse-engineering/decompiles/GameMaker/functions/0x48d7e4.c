// rea decompile_all
// name: FUN_0048d7e4
// address: 0x48d7e4
// body: available
// range: 0x48d7e4-0x48d87c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0048d7e4(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  HWND hWnd;
  undefined4 uVar4;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;

  uVar4 = 0;
  piVar1 = *(int **)(*(int *)(param_1 + 0x1b0) + 0xc);
  if ((((*(char *)(param_1 + 0x59) != '\0') && ((*(byte *)(param_1 + 0x1c) & 1) == 0)) &&
      (piVar1 != (int *)0x0)) && (*(char *)((int)piVar1 + 0x22) != '\0')) {
    iVar3 = (**(code **)(*piVar1 + 0x28))();
    if (iVar3 == 0) {
      *(undefined1 *)((int)piVar1 + 0x22) = 0;
    }
    else {
      iVar3 = FUN_00513780(param_1,1);
      if ((iVar3 != 0) && (*(char *)(iVar3 + 0x29d) != '\0')) {
        cVar2 = FUN_004f7a54(iVar3);
        if (cVar2 != '\0') {
          if (*(char *)(param_1 + 0x1c4) == '\0') {
            lParam = 0;
            wParam = 0;
            Msg = 0x30f;
            hWnd = (HWND)FUN_004f76a8(iVar3);
            PostMessageW(hWnd,Msg,wParam,lParam);
          }
          else {
            FUN_004efb90(iVar3,0x30f,0,0);
          }
          uVar4 = 1;
          *(undefined1 *)((int)piVar1 + 0x22) = 0;
        }
      }
    }
  }
  return uVar4;
}
