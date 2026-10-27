// rea decompile_all
// name: FUN_004c1974
// address: 0x4c1974
// body: available
// range: 0x4c1974-0x4c1a95 inclusive
// range: 0x4c1a9d-0x4c1ad2 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c19b2 (push 0x4c1ad3 followed by fs-segment stack chaining); handler 0x4c1ad3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c19eb (push 0x4c1a96 followed by fs-segment stack chaining); handler 0x4c1a96 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c1974(int *param_1,int param_2)

{
  HWND pHVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  tagPAINTSTRUCT *ptVar7;
  undefined1 *puVar8;
  tagPAINTSTRUCT local_54;
  HDC local_14;
  int local_10;
  int local_c;
  int *local_8;

  puVar8 = &stack0xfffffffc;
  local_14 = *(HDC *)(param_2 + 4);
  local_c = param_2;
  local_8 = param_1;
  if (local_14 == (HDC)0x0) {
    ptVar7 = &local_54;
    pHVar1 = (HWND)FUN_004c45dc(param_1);
    local_14 = BeginPaint(pHVar1,ptVar7);
  }
  uVar6 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffff94;
  if (local_8[0x77] == 0) {
    (**(code **)(*local_8 + 0xd4))(local_8,local_14);
    FUN_004c1b1c(local_8,local_14,0);
    *in_FS_OFFSET = uVar6;
    if (*(int *)(local_c + 4) == 0) {
      ptVar7 = &local_54;
      pHVar1 = (HWND)FUN_004c45dc(local_8,uVar6,puVar8);
      EndPaint(pHVar1,ptVar7);
    }
    return;
  }
  local_10 = SaveDC(local_14);
  uVar6 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffff88;
  iVar5 = 2;
  iVar3 = *(int *)(local_8[0x77] + 8);
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      iVar2 = FUN_00438ec4(local_8[0x77],iVar4);
      if ((((*(char *)(iVar2 + 0x59) != '\0') &&
           (((*(byte *)(iVar2 + 0x1c) & 0x10) == 0 || ((*(byte *)(iVar2 + 0x55) & 8) == 0)))) ||
          (((*(byte *)(iVar2 + 0x1c) & 0x10) != 0 &&
           (((*(byte *)(iVar2 + 0x55) & 8) == 0 && ((*(byte *)(iVar2 + 0x51) & 4) == 0)))))) &&
         ((*(byte *)(iVar2 + 0x50) & 0x40) != 0)) {
        iVar5 = ExcludeClipRect(local_14,*(int *)(iVar2 + 0x40),*(int *)(iVar2 + 0x44),
                                *(int *)(iVar2 + 0x40) + *(int *)(iVar2 + 0x48),
                                *(int *)(iVar2 + 0x44) + *(int *)(iVar2 + 0x4c));
        if (iVar5 == 1) break;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (iVar5 != 1) {
    (**(code **)(*local_8 + 0xd4))(local_8,local_14);
  }
  *in_FS_OFFSET = uVar6;
  RestoreDC(local_14,local_10);
  return;
}
