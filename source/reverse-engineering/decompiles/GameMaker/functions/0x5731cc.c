// rea decompile_all
// name: FUN_005731cc
// address: 0x5731cc
// body: available
// range: 0x5731cc-0x57343c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5731ed (push 0x57343d followed by fs-segment stack chaining); handler 0x57343d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005731cc(int param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  HWND pHVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  HWND hWndInsertAfter;
  int cy;
  UINT uFlags;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  puStack_3c = &stack0xfffffffc;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  puStack_40 = &LAB_0057343d;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puVar2 = &stack0xfffffffc;
  if (*(char *)(param_1 + 0x2dc) != '\0') goto LAB_0057341a;
  FUN_004edce0(*(undefined4 *)(param_1 + 0x2d0),*(undefined4 *)(param_1 + 0x48));
  if (*(int *)(param_1 + 0x2d0) == *(int *)(param_1 + 0x2cc)) {
    FUN_00405d08(param_1);
    uVar3 = FUN_00573168(param_1);
    FUN_004ee858(uVar3,*(undefined4 *)(param_1 + 0x6c));
    uVar3 = FUN_00573168(param_1);
    FUN_004ee79c(uVar3,*(undefined4 *)(param_1 + 100));
    if (*(int *)(param_1 + 0x2d8) < 1) {
LAB_0057328e:
      iVar4 = FUN_00573168(param_1);
      iVar4 = (**(code **)(**(int **)(iVar4 + 0x280) + 0x14))();
      FUN_00573168(param_1);
      iVar7 = FUN_00483710();
      iVar4 = iVar4 * iVar7 + 4;
      uVar3 = FUN_00573168(param_1);
      FUN_004edd14(uVar3,iVar4);
    }
    else {
      iVar4 = FUN_00573168(param_1);
      iVar4 = (**(code **)(**(int **)(iVar4 + 0x280) + 0x14))();
      if (iVar4 < *(int *)(param_1 + 0x2d8)) goto LAB_0057328e;
      FUN_00573168(param_1);
      iVar4 = FUN_00483710();
      lVar1 = (longlong)iVar4 * (longlong)*(int *)(param_1 + 0x2d8);
      iVar4 = (int)lVar1 + 4;
      uVar3 = FUN_00573168(param_1,(int)((ulonglong)lVar1 >> 0x20));
      FUN_004edd14(uVar3,iVar4);
    }
    FUN_005675ec(param_1,&local_24);
    if (local_24 == 0) {
      piVar5 = (int *)FUN_00573168(param_1);
      (**(code **)(*piVar5 + 0xf0))(piVar5,0xffffffff);
    }
    else {
      FUN_005675ec(param_1,&local_28);
      uVar3 = local_28;
      iVar4 = FUN_00573168(param_1);
      uVar3 = (**(code **)(**(int **)(iVar4 + 0x280) + 0x54))(*(int **)(iVar4 + 0x280),uVar3);
      piVar5 = (int *)FUN_00573168(param_1);
      (**(code **)(*piVar5 + 0xf0))(piVar5,uVar3);
    }
    FUN_00573168(param_1);
    local_14 = FUN_004edf8c();
    iVar4 = FUN_00573168(param_1);
    iVar4 = (**(code **)(**(int **)(iVar4 + 0x280) + 0x14))();
    if (-1 < iVar4 + -1) {
      local_10 = 0;
      local_18 = iVar4;
      do {
        iVar4 = FUN_00573168(param_1);
        (**(code **)(**(int **)(iVar4 + 0x280) + 0xc))(*(int **)(iVar4 + 0x280),local_10,&local_2c);
        uVar3 = local_2c;
        iVar4 = FUN_00573168(param_1);
        iVar4 = FUN_0045bec4(*(undefined4 *)(iVar4 + 0x290),uVar3);
        if (local_14 < iVar4) {
          local_14 = iVar4;
        }
        local_10 = local_10 + 1;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
    uVar3 = FUN_00573168(param_1);
    FUN_004edfa4(uVar3,local_14);
  }
  local_20 = *(undefined4 *)(param_1 + 0x40);
  local_1c = *(undefined4 *)(param_1 + 0x44);
  FUN_004ee09c(*(undefined4 *)(param_1 + 0x34),&local_20,&local_c);
  iVar7 = local_8 + *(int *)(param_1 + 0x4c);
  iVar4 = FUN_0051c614(*(undefined4 *)PTR_DAT_007828e0);
  if (iVar4 < *(int *)(*(int *)(param_1 + 0x2d0) + 0x4c) + iVar7) {
    iVar7 = local_8 - *(int *)(*(int *)(param_1 + 0x2d0) + 0x4c);
  }
  uFlags = 0x51;
  cy = 0;
  iVar4 = 0;
  hWndInsertAfter = (HWND)0x0;
  pHVar6 = (HWND)FUN_004f76a8(*(undefined4 *)(param_1 + 0x2d0));
  SetWindowPos(pHVar6,hWndInsertAfter,local_c,iVar7,iVar4,cy,uFlags);
  *(undefined1 *)(param_1 + 0x2dc) = 1;
  FUN_0056c01c(param_1);
  pHVar6 = (HWND)FUN_004f76a8(param_1);
  SetFocus(pHVar6);
  puVar2 = puStack_3c;
LAB_0057341a:
  puStack_3c = puVar2;
  puVar2 = puStack_3c;
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_00573444;
  puStack_40 = (undefined1 *)0x57342f;
  thunk_FUN_00406e5c(&local_2c,uStack_44,puVar2);
  puStack_40 = (undefined1 *)0x57343c;
  thunk_FUN_00406e80(&local_28,2);
  return;
}
