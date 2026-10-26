// rea decompile_all
// name: FUN_00514298
// address: 0x514298
// body: available
// range: 0x514298-0x5143aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00514298(int param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  HWND pHVar2;
  uint uVar3;
  tagSCROLLINFO *psi;
  BOOL fRedraw;
  tagSCROLLINFO local_26;
  undefined1 local_a;
  undefined1 local_9;
  int local_8;

  *(undefined4 *)(param_1 + 0x14) = 0;
  uVar3 = (uint)(*(char *)(param_1 + 0x18) == '\x01');
  local_a = param_3;
  local_9 = param_2;
  local_8 = param_1;
  if (*(char *)(param_1 + 0x1c) != '\0') {
    iVar1 = FUN_00513b9c(param_1,param_2,param_3);
    iVar1 = *(int *)(local_8 + 0x10) - iVar1;
    *(int *)(local_8 + 0x14) = iVar1;
    if (iVar1 < 0) {
      *(undefined4 *)(local_8 + 0x14) = 0;
    }
  }
  local_26.cbSize = 0x1c;
  local_26.fMask = 0x17;
  local_26.nMin = 0;
  if (*(int *)(local_8 + 0x14) < 1) {
    local_26.nMax = 0;
  }
  else {
    local_26.nMax = *(int *)(local_8 + 0x10);
  }
  iVar1 = FUN_00513b9c(local_8,local_9,local_a);
  local_26.nPage = iVar1 + 1;
  local_26.nPos = *(int *)(local_8 + 0xc);
  *(undefined1 *)(local_8 + 0x44) = 0;
  local_26.nTrackPos = local_26.nPos;
  FUN_00514190();
  fRedraw = -1;
  psi = &local_26;
  pHVar2 = (HWND)FUN_004f76a8(*(undefined4 *)(local_8 + 4));
  FlatSB_SetScrollInfo(pHVar2,uVar3,psi,fRedraw);
  FUN_00514018(local_8,*(undefined4 *)(local_8 + 0xc));
  iVar1 = FUN_00513b9c(local_8,1,0);
  uVar3 = (iVar1 * 9) / 10;
  *(short *)(local_8 + 10) = (short)uVar3;
  if (*(char *)(local_8 + 0x1f) != '\0') {
    *(short *)(local_8 + 8) = (short)((ulonglong)(uVar3 & 0xffff) / 10);
  }
  return;
}
