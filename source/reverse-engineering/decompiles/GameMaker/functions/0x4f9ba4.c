// rea decompile_all
// name: FUN_004f9ba4
// address: 0x4f9ba4
// body: available
// range: 0x4f9ba4-0x4f9e3e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f9bd2 (push 0x4f9e5c followed by fs-segment stack chaining); handler 0x4f9e5c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f9bea (push 0x4f9e3f followed by fs-segment stack chaining); handler 0x4f9e3f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f9ba4(int *param_1,int *param_2,int param_3)

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
  puStack_40 = (undefined1 *)0x4f9bc4;
  local_c = param_1;
  local_8 = param_3;
  thunk_FUN_00407660(param_3);
  puStack_44 = &LAB_004f9e5c;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  *(undefined1 *)(local_c + 0x9e) = 1;
  puStack_50 = &LAB_004f9e3f;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  puStack_4c = &stack0xfffffffc;
  puStack_40 = &stack0xfffffffc;
  FUN_004ee6d8(local_c,local_8);
  local_1c = local_1c + 4;
  FUN_004efc88(local_c,&local_28);
  local_18 = local_28;
  local_14 = local_24;
  uVar2 = FUN_0051d8ec(*(undefined4 *)PTR_DAT_007828e0,&local_18,0);
  iVar3 = FUN_0051c20c(uVar2);
  if (iVar3 < local_c[0x12]) {
    uVar4 = FUN_0051c20c(uVar2);
    FUN_004edce0(local_c,uVar4);
  }
  iVar3 = FUN_0051c1d8(uVar2);
  if (iVar3 < local_c[0x13]) {
    uVar4 = FUN_0051c1d8(uVar2);
    FUN_004edd14(local_c,uVar4);
  }
  iVar3 = FUN_0051c1f4(uVar2);
  iVar5 = FUN_0051c1d8(uVar2);
  if (iVar3 + iVar5 < local_c[0x13] + local_24) {
    iVar3 = FUN_0051c1f4(uVar2);
    iVar5 = FUN_0051c1d8(uVar2);
    local_24 = (iVar3 + iVar5) - local_c[0x13];
  }
  iVar3 = FUN_0051c1c0(uVar2);
  iVar5 = FUN_0051c20c(uVar2);
  if (iVar3 + iVar5 < local_c[0x12] + local_28) {
    iVar3 = FUN_0051c1c0(uVar2);
    iVar5 = FUN_0051c20c(uVar2);
    local_28 = (iVar3 + iVar5) - local_c[0x12];
  }
  iVar3 = FUN_0051c1c0(uVar2);
  if (local_28 < iVar3) {
    local_28 = FUN_0051c1c0(uVar2);
  }
  iVar3 = FUN_0051c1f4(uVar2);
  if (local_1c < iVar3) {
    local_24 = FUN_0051c1f4(uVar2);
  }
  FUN_004f3de8(local_c,*(undefined4 *)(*(int *)PTR_DAT_00782280 + 0x170));
  uFlags = 0x10;
  iVar3 = local_c[0x13];
  iVar5 = local_c[0x12];
  hWndInsertAfter = (HWND)0xffffffff;
  X = local_28;
  Y = local_24;
  pHVar6 = (HWND)FUN_004f76a8(local_c);
  SetWindowPos(pHVar6,hWndInsertAfter,X,Y,iVar5,iVar3,uFlags);
  DVar7 = GetTickCount();
  if (DVar7 - local_c[0x9f] < 0xfb) {
    bVar1 = false;
  }
  else {
    iVar3 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar3 = FUN_00407048(&local_8,local_8);
    }
    iVar5 = 0;
    if (iVar3 != 0) {
      iVar5 = *(int *)(iVar3 + -4);
    }
    bVar1 = iVar5 < 100;
  }
  if (((bVar1) && (DAT_00778aa0 != (code *)0x0)) &&
     (SystemParametersInfoW(0x1016,0,&local_10,0), local_10 != 0)) {
    SystemParametersInfoW(0x1018,0,&local_10,0);
    if (local_10 == 0) {
      FUN_004fd580(DAT_00788248,local_30);
    }
    FUN_004f76a8(local_c);
    (*DAT_00778aa0)();
  }
  iVar3 = 4;
  pHVar6 = (HWND)FUN_004f76a8(local_c);
  ShowWindow(pHVar6,iVar3);
  (**(code **)(*local_c + 0x90))();
  *in_FS_OFFSET = uStack_54;
  puStack_4c = &LAB_004f9e46;
  puStack_50 = (undefined1 *)0x4f9e2b;
  DVar7 = GetTickCount();
  local_c[0x9f] = DVar7;
  *(undefined1 *)(local_c + 0x9e) = 0;
  return;
}
