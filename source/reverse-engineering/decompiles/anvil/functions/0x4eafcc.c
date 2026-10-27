// rea decompile_all
// name: FUN_004eafcc
// address: 0x4eafcc
// body: available
// range: 0x4eafcc-0x4eb108 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004eafcc(int param_1)

{
  int iVar1;
  HWND pHVar2;
  BOOL BVar3;
  uint uVar4;
  int Y;
  int cx;
  int cy;
  UINT uFlags;

  iVar1 = FUN_004df298(*(undefined4 *)(param_1 + 0x170));
  if (iVar1 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x34) = 0;
  SetActiveWindow(*(HWND *)(param_1 + 0x170));
  if (*(int *)(param_1 + 0x44) == 0) goto LAB_004eb0a0;
  if (*(char *)(param_1 + 0xd3) != '\0') {
    iVar1 = 9;
    pHVar2 = (HWND)FUN_004c45dc(*(int *)(param_1 + 0x44));
    ShowWindow(pHVar2,iVar1);
    goto LAB_004eb0a0;
  }
  if ((*(char *)(param_1 + 0x5b) == '\0') && (*(char *)(*(int *)(param_1 + 0x44) + 0x59) == '\0')) {
LAB_004eb056:
    FUN_004e9804(*(undefined4 *)(param_1 + 0x170),9);
  }
  else {
    pHVar2 = (HWND)FUN_004c45dc(*(undefined4 *)(param_1 + 0x44));
    BVar3 = IsWindowEnabled(pHVar2);
    if (BVar3 == 0) goto LAB_004eb056;
    DefWindowProcW(*(HWND *)(param_1 + 0x170),0x112,0xf120,0);
  }
  uFlags = 0x40;
  cy = 0;
  cx = 0;
  Y = 1;
  (**(code **)PTR_DAT_00688d14)();
  uVar4 = (**(code **)PTR_DAT_00688d14)();
  iVar1 = (int)uVar4 >> 1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + (uint)((uVar4 & 1) != 0);
  }
  SetWindowPos(*(HWND *)(param_1 + 0x170),(HWND)0x0,iVar1,Y,cx,cy,uFlags);
LAB_004eb0a0:
  iVar1 = *(int *)(param_1 + 0x44);
  if (((iVar1 != 0) && (*(char *)(iVar1 + 0x29a) == '\x01')) && (*(char *)(iVar1 + 0x59) == '\0')) {
    FUN_004e3954(iVar1,0);
    FUN_004e6d64(*(undefined4 *)(param_1 + 0x44));
  }
  FUN_004ea250(param_1);
  FUN_004ea3b0(param_1,1);
  if (*(int *)(DAT_0068f2ec + 0x60) != 0) {
    pHVar2 = (HWND)FUN_004c45dc(*(int *)(DAT_0068f2ec + 0x60));
    SetFocus(pHVar2);
  }
  if (*(short *)(param_1 + 0x152) != 0) {
    (**(code **)(param_1 + 0x150))(*(undefined4 *)(param_1 + 0x154),param_1);
  }
  return;
}
