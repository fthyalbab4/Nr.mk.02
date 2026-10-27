// rea decompile_all
// name: FUN_0045feec
// address: 0x45feec
// body: available
// range: 0x45feec-0x46012d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45ff27 (push 0x460158 followed by fs-segment stack chaining); handler 0x460158 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45ff5b (push 0x46012e followed by fs-segment stack chaining); handler 0x46012e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045feec(int param_1,char param_2,undefined4 param_3,int param_4,int param_5,HDC param_6)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  LPCWSTR lpDesc;
  HDC pHVar8;
  undefined4 extraout_ECX;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  RECT *pRVar9;
  undefined4 uVar10;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_24;
  RECT local_20;
  HDC local_10;
  undefined1 local_9;
  int local_8;

  local_24 = 0;
  local_9 = 0;
  if (param_2 != '\0') {
    puStack_3c = (undefined1 *)0x45ff04;
    param_1 = FUN_00405fb0();
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStack_3c = (undefined1 *)0x45ff14;
  local_8 = param_1;
  thunk_FUN_00407660(param_5);
  puStack_3c = (undefined1 *)0x45ff1c;
  thunk_FUN_00407660(param_4);
  puStack_40 = &LAB_00460158;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puStack_3c = &stack0xfffffffc;
  FUN_0045bf68(local_8,0);
  *(undefined4 *)(local_8 + 0x58) = param_3;
  local_10 = param_6;
  if (param_6 == (HDC)0x0) {
    local_10 = GetDC((HWND)0x0);
  }
  uVar10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffb0;
  iVar3 = FUN_0046053c(*(undefined4 *)(local_8 + 0x58));
  if (iVar3 == 0) {
    iVar3 = (**(code **)(**(int **)(local_8 + 0x58) + 0x30))();
    if (iVar3 == 0) {
      iVar3 = GetDeviceCaps(local_10,4);
      FUN_00460be0(*(undefined4 *)(local_8 + 0x58),iVar3 * 100);
    }
    else {
      iVar3 = GetDeviceCaps(local_10,8);
      iVar4 = GetDeviceCaps(local_10,4);
      iVar4 = iVar4 * 100;
      piVar1 = *(int **)(local_8 + 0x58);
      iVar5 = (**(code **)(*piVar1 + 0x30))();
      iVar3 = MulDiv(iVar5,iVar4,iVar3);
      FUN_00460be0(piVar1,iVar3);
    }
  }
  iVar3 = FUN_00460524(*(undefined4 *)(local_8 + 0x58));
  if (iVar3 == 0) {
    iVar3 = (**(code **)(**(int **)(local_8 + 0x58) + 0x24))();
    if (iVar3 == 0) {
      iVar3 = GetDeviceCaps(local_10,6);
      FUN_00460ba4(*(undefined4 *)(local_8 + 0x58),iVar3 * 100);
    }
    else {
      iVar3 = GetDeviceCaps(local_10,10);
      iVar4 = GetDeviceCaps(local_10,6);
      iVar4 = iVar4 * 100;
      piVar1 = *(int **)(local_8 + 0x58);
      iVar5 = (**(code **)(*piVar1 + 0x24))();
      iVar3 = MulDiv(iVar5,iVar4,iVar3);
      FUN_00460ba4(piVar1,iVar3);
    }
  }
  uVar6 = FUN_00460524(*(undefined4 *)(local_8 + 0x58));
  pRVar9 = &local_20;
  uVar7 = FUN_0046053c(*(undefined4 *)(local_8 + 0x58));
  FUN_0040c114(0,0,uVar7,pRVar9,uVar6);
  iVar3 = param_5;
  if ((param_5 != 0) && (*(short *)(param_5 + -10) != 2)) {
    iVar3 = FUN_00407048(&param_5,param_5);
  }
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + -4);
  }
  if (iVar4 < 1) {
    iVar3 = param_4;
    if ((param_4 != 0) && (*(short *)(param_4 + -10) != 2)) {
      iVar3 = FUN_00407048(&param_4,param_4);
    }
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + -4);
    }
    bVar2 = 0 < iVar4;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    FUN_00408480(&local_24,4);
    lpDesc = (LPCWSTR)FUN_00407f44(local_24);
  }
  else {
    lpDesc = (LPCWSTR)0x0;
  }
  pHVar8 = CreateEnhMetaFileW(local_10,(LPCWSTR)0x0,&local_20,lpDesc);
  if (pHVar8 == (HDC)0x0) {
    FUN_0045d15c();
  }
  FUN_0045ceb4(local_8,pHVar8);
  *in_FS_OFFSET = uVar10;
  if (param_6 == (HDC)0x0) {
    ReleaseDC((HWND)0x0,local_10);
  }
  return;
}
