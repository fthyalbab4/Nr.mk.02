// rea decompile_all
// name: FUN_004eaec8
// address: 0x4eaec8
// body: available
// range: 0x4eaec8-0x4eafcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004eaec8(int param_1)

{
  int iVar1;
  HWND pHVar2;
  BOOL BVar3;
  int Y;
  int X;
  int cy;
  UINT uFlags;

  iVar1 = FUN_004df298(*(undefined4 *)(param_1 + 0x170));
  if (iVar1 != 0) {
    return;
  }
  FUN_004ea1f0(param_1);
  if (*(char *)(param_1 + 0xd3) == '\0') {
    SetActiveWindow(*(HWND *)(param_1 + 0x170));
  }
  *(undefined1 *)(param_1 + 0x34) = 1;
  FUN_004ea3b0(param_1,0);
  if (*(char *)(param_1 + 0xd3) == '\0') {
    if ((*(int *)(param_1 + 0x44) != 0) &&
       ((*(char *)(param_1 + 0x5b) != '\0' || (*(char *)(*(int *)(param_1 + 0x44) + 0x59) != '\0')))
       ) {
      pHVar2 = (HWND)FUN_004c45dc(*(undefined4 *)(param_1 + 0x44));
      BVar3 = IsWindowEnabled(pHVar2);
      if (BVar3 != 0) {
        uFlags = 0x40;
        cy = 0;
        iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 0x48);
        Y = FUN_004e1af4(*(undefined4 *)(param_1 + 0x44));
        X = FUN_004e1ad4(*(undefined4 *)(param_1 + 0x44));
        pHVar2 = (HWND)FUN_004c45dc(*(undefined4 *)(param_1 + 0x44));
        SetWindowPos(*(HWND *)(param_1 + 0x170),pHVar2,X,Y,iVar1,cy,uFlags);
        DefWindowProcW(*(HWND *)(param_1 + 0x170),0x112,0xf020,0);
        goto LAB_004eafb2;
      }
    }
    FUN_004e9804(*(undefined4 *)(param_1 + 0x170),6);
  }
  else if (*(int *)(param_1 + 0x44) == 0) {
    *(undefined1 *)(param_1 + 0xdc) = 1;
  }
  else {
    FUN_004e3954(*(int *)(param_1 + 0x44),1);
  }
LAB_004eafb2:
  if (*(short *)(param_1 + 0x14a) != 0) {
    (**(code **)(param_1 + 0x148))(*(undefined4 *)(param_1 + 0x14c),param_1);
  }
  return;
}
