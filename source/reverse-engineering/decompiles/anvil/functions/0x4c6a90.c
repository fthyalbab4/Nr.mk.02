// rea decompile_all
// name: FUN_004c6a90
// address: 0x4c6a90
// body: available
// range: 0x4c6a90-0x4c6d2a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c6abe (push 0x4c6d48 followed by fs-segment stack chaining); handler 0x4c6d48 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c6ad6 (push 0x4c6d2b followed by fs-segment stack chaining); handler 0x4c6d2b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c6a90(int *param_1,int *param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  HWND pHVar6;
  DWORD DVar7;
  undefined4 *in_FS_OFFSET;
  HWND hWndInsertAfter;
  int X;
  int Y;
  UINT uFlags;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined1 local_30 [8];
  int local_28;
  int local_24;
  int iStack_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;

  local_28 = *param_2;
  local_24 = param_2[1];
  iStack_20 = param_2[2];
  local_1c = param_2[3];
  puStack_40 = (undefined1 *)0x4c6ab0;
  local_c = param_1;
  local_8 = param_3;
  thunk_FUN_00407ad0(param_3);
  puStack_44 = &LAB_004c6d48;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  *(undefined1 *)(local_c + 0x9e) = 1;
  puStack_50 = &LAB_004c6d2b;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  puStack_4c = &stack0xfffffffc;
  puStack_40 = &stack0xfffffffc;
  FUN_004bb690(local_c,local_8);
  local_1c = local_1c + 4;
  FUN_004bcc40(local_c,&local_28);
  local_18 = local_28;
  local_14 = local_24;
  uVar2 = FUN_004e98dc(*(undefined4 *)PTR_DAT_00689620,&local_18,0);
  iVar3 = FUN_004e8298(uVar2);
  if (iVar3 < local_c[0x12]) {
    uVar4 = FUN_004e8298(uVar2);
    FUN_004bac98(local_c,uVar4);
  }
  iVar3 = FUN_004e8264(uVar2);
  if (iVar3 < local_c[0x13]) {
    uVar4 = FUN_004e8264(uVar2);
    FUN_004baccc(local_c,uVar4);
  }
  iVar3 = FUN_004e8280(uVar2);
  iVar5 = FUN_004e8264(uVar2);
  if (iVar3 + iVar5 < local_c[0x13] + local_24) {
    iVar3 = FUN_004e8280(uVar2);
    iVar5 = FUN_004e8264(uVar2);
    local_24 = (iVar3 + iVar5) - local_c[0x13];
  }
  iVar3 = FUN_004e824c(uVar2);
  iVar5 = FUN_004e8298(uVar2);
  if (iVar3 + iVar5 < local_c[0x12] + local_28) {
    iVar3 = FUN_004e824c(uVar2);
    iVar5 = FUN_004e8298(uVar2);
    local_28 = (iVar3 + iVar5) - local_c[0x12];
  }
  iVar3 = FUN_004e824c(uVar2);
  if (local_28 < iVar3) {
    local_28 = FUN_004e824c(uVar2);
  }
  iVar3 = FUN_004e8280(uVar2);
  if (local_1c < iVar3) {
    local_24 = FUN_004e8280(uVar2);
  }
  FUN_004c0da0(local_c,*(undefined4 *)(*(int *)PTR_DAT_0068917c + 0x170));
  uFlags = 0x10;
  iVar3 = local_c[0x13];
  iVar5 = local_c[0x12];
  hWndInsertAfter = (HWND)0xffffffff;
  X = local_28;
  Y = local_24;
  pHVar6 = (HWND)FUN_004c45dc(local_c);
  SetWindowPos(pHVar6,hWndInsertAfter,X,Y,iVar5,iVar3,uFlags);
  DVar7 = GetTickCount();
  if (DVar7 - local_c[0x9f] < 0xfb) {
    bVar1 = false;
  }
  else {
    iVar3 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar3 = FUN_00407488(&local_8,local_8);
    }
    iVar5 = 0;
    if (iVar3 != 0) {
      iVar5 = *(int *)(iVar3 + -4);
    }
    bVar1 = iVar5 < 100;
  }
  if (((bVar1) && (DAT_00681838 != (code *)0x0)) &&
     (SystemParametersInfoW(0x1016,0,&local_10,0), local_10 != 0)) {
    SystemParametersInfoW(0x1018,0,&local_10,0);
    if (local_10 == 0) {
      FUN_004ca46c(DAT_0068f244,local_30);
    }
    FUN_004c45dc(local_c);
    (*DAT_00681838)();
  }
  iVar3 = 4;
  pHVar6 = (HWND)FUN_004c45dc(local_c);
  ShowWindow(pHVar6,iVar3);
  (**(code **)(*local_c + 0x90))();
  *in_FS_OFFSET = uStack_54;
  puStack_4c = &LAB_004c6d32;
  puStack_50 = (undefined1 *)0x4c6d17;
  DVar7 = GetTickCount();
  local_c[0x9f] = DVar7;
  *(undefined1 *)(local_c + 0x9e) = 0;
  return;
}
