// rea decompile_all
// name: FUN_004f83ac
// address: 0x4f83ac
// body: available
// range: 0x4f83ac-0x4f86d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f83cc (push 0x4f86d6 followed by fs-segment stack chaining); handler 0x4f86d6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f83ac(int *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  void *local_28;
  HDC local_24;
  HBITMAP local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;

  puStack_58 = &stack0xfffffffc;
  local_50 = 0;
  puStack_5c = &LAB_004f86d6;
  uStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_60;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if ((param_2 < 1) || (param_3 < 1)) {
    FUN_0040b9d0(PTR_LAB_006896bc,&local_50);
    FUN_004f62b8(local_8,&PTR_LAB_004ee84c,local_50);
  }
  else {
    puStack_58 = &stack0xfffffffc;
    local_14 = FUN_004f6500(param_1);
    local_24 = CreateCompatibleDC(*(HDC *)(local_14 + 0x18));
    *(int *)(local_14 + 0x25) = local_c;
    *(int *)(local_14 + 0x29) = local_10;
    local_20 = CreateDIBSection(local_24,(BITMAPINFO *)(local_14 + 0x21),0,&local_28,(HANDLE)0x0,0);
    SelectObject(local_24,local_20);
    FUN_0045d574(local_8[0x4a],local_24);
    uVar2 = (uint)*(ushort *)(local_14 + 0x2f) * local_c + 0x1f & 0xffffffe0;
    if ((int)uVar2 < 0) {
      uVar2 = uVar2 + 7;
    }
    local_1c = (int)uVar2 >> 3;
    iVar3 = (**(code **)(*local_8 + 0x24))();
    iVar3 = FUN_004f8380(local_10 + -1,iVar3 + -1);
    if (-1 < iVar3) {
      local_34 = iVar3 + 1;
      local_18 = 0;
      do {
        local_38 = FUN_004f7b90(local_8,local_18);
        local_3c = FUN_004f8380(local_1c,*(undefined4 *)(local_14 + 0x468));
        FUN_00404514(local_38,(int)local_28 + ((local_10 + -1) * local_1c - local_18 * local_1c),
                     local_3c);
        local_18 = local_18 + 1;
        local_34 = local_34 + -1;
      } while (local_34 != 0);
    }
    if ((*(char *)(local_14 + 0x461) == '\x06') || (*(char *)(local_14 + 0x461) == '\x04')) {
      local_2c = FUN_00404324((int)((longlong)local_c * (longlong)local_10),
                              (int)((ulonglong)((longlong)local_c * (longlong)local_10) >> 0x20));
      FUN_00404f38(local_2c,local_c * local_10,0xff);
      iVar3 = (**(code **)(*local_8 + 0x24))();
      iVar3 = FUN_004f8380(local_10 + -1,iVar3 + -1);
      if (-1 < iVar3) {
        local_34 = iVar3 + 1;
        local_18 = 0;
        do {
          local_40 = FUN_004f7b34(local_8,local_18);
          uVar4 = (**(code **)(*local_8 + 0x30))();
          local_44 = FUN_004f8380(local_c,uVar4);
          FUN_00404514(local_40,local_18 * local_c + local_2c,local_44);
          local_18 = local_18 + 1;
          local_34 = local_34 + -1;
        } while (local_34 != 0);
      }
      FUN_00404340(*(undefined4 *)(local_14 + 0x454));
      *(int *)(local_14 + 0x454) = local_2c;
    }
    if (*(char *)(local_14 + 0x460) == '\x10') {
      local_30 = FUN_00404324((int)((longlong)local_c * (longlong)local_10),
                              (int)((ulonglong)((longlong)local_c * (longlong)local_10) >> 0x20));
      FUN_00404f38(local_30,local_c * local_10,0);
      iVar3 = (**(code **)(*local_8 + 0x24))();
      iVar3 = FUN_004f8380(local_10 + -1,iVar3 + -1);
      if (-1 < iVar3) {
        local_34 = iVar3 + 1;
        local_18 = 0;
        do {
          local_48 = FUN_004f7b64(local_8,local_18);
          uVar4 = (**(code **)(*local_8 + 0x30))();
          local_4c = FUN_004f8380(local_c,uVar4);
          FUN_00404514(local_48,local_18 * local_c + local_30,local_4c);
          local_18 = local_18 + 1;
          local_34 = local_34 + -1;
        } while (local_34 != 0);
      }
      FUN_00404340(*(undefined4 *)(local_14 + 0x44c));
      *(int *)(local_14 + 0x44c) = local_30;
    }
    DeleteObject(*(HGDIOBJ *)(local_14 + 0x14));
    DeleteDC(*(HDC *)(local_14 + 0x18));
    *(int *)(local_14 + 0x468) = local_1c;
    *(int *)(local_14 + 0x458) = local_c;
    *(int *)(local_14 + 0x45c) = local_10;
    *(void **)(local_14 + 0x450) = local_28;
    *(HBITMAP *)(local_14 + 0x14) = local_20;
    *(HDC *)(local_14 + 0x18) = local_24;
  }
  puVar1 = puStack_58;
  *in_FS_OFFSET = uStack_60;
  puStack_58 = &LAB_004f86dd;
  puStack_5c = (undefined1 *)0x4f86d5;
  thunk_FUN_004072d8(&local_50,uStack_60,puVar1);
  return;
}
