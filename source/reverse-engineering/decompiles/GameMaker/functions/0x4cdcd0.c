// rea decompile_all
// name: FUN_004cdcd0
// address: 0x4cdcd0
// body: available
// range: 0x4cdcd0-0x4cdd81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004cdcd0(HWND param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int cx;
  int cy;
  UINT uFlags;
  tagRECT local_1c;

  GetWindowRect(param_1,&local_1c);
  if (*(int *)(*(int *)PTR_DAT_00782280 + 0x44) == 0) {
    uVar1 = FUN_0051da20(*(undefined4 *)PTR_DAT_007828e0);
  }
  else if (*(int *)(*(int *)PTR_DAT_007828e0 + 0x68) == 0) {
    uVar1 = FUN_0051711c(*(int *)(*(int *)PTR_DAT_00782280 + 0x44));
  }
  else {
    uVar1 = FUN_0051711c(*(int *)(*(int *)PTR_DAT_007828e0 + 0x68),PTR_DAT_007828e0);
  }
  uFlags = 0x15;
  cy = 0;
  cx = 0;
  iVar2 = FUN_0051c1f4(uVar1);
  iVar3 = FUN_0051c1d8(uVar1);
  iVar3 = (iVar3 - local_1c.bottom) + local_1c.top;
  iVar2 = iVar2 + iVar3 / 3;
  iVar3 = FUN_0051c1c0(uVar1,iVar3 % 3);
  iVar4 = FUN_0051c20c(uVar1);
  uVar5 = (iVar4 - local_1c.right) + local_1c.left;
  iVar4 = (int)uVar5 >> 1;
  if (iVar4 < 0) {
    iVar4 = iVar4 + (uint)((uVar5 & 1) != 0);
  }
  SetWindowPos(param_1,(HWND)0x0,iVar3 + iVar4,iVar2,cx,cy,uFlags);
  return;
}
