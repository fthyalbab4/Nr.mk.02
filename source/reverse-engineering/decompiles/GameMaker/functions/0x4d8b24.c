// rea decompile_all
// name: FUN_004d8b24
// address: 0x4d8b24
// body: available
// range: 0x4d8b24-0x4d8deb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d8b48 (push 0x4d8dec followed by fs-segment stack chaining); handler 0x4d8dec lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d8b24(int param_1,HMENU param_2,byte param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  DWORD DVar4;
  int iVar5;
  LPCWSTR pWVar6;
  UINT_PTR uIDNewItem;
  uint uVar7;
  undefined4 *in_FS_OFFSET;
  byte bVar8;
  byte bVar9;
  undefined4 uStack_6c;
  undefined4 in_stack_ffffff9c;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined4 local_48;
  MENUITEMINFOW local_44;
  int local_14;
  byte local_d;
  HMENU local_c;
  undefined4 local_8;

  puStack_58 = &stack0xfffffffc;
  local_48 = 0;
  local_8 = 0;
  puStack_5c = &LAB_004d8dec;
  uStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_60;
  puVar1 = &stack0xfffffffc;
  local_d = param_3;
  local_c = param_2;
  if (*(char *)(param_1 + 0x3e) == '\0') goto LAB_004d8dce;
  FUN_00407f0c(&local_8,*(undefined4 *)(param_1 + 0x34));
  in_stack_ffffff9c = 0x4d8b67;
  iVar3 = FUN_004dbe08(param_1);
  if (iVar3 < 1) {
    if (*(short *)(param_1 + 0x60) != 0) {
      iVar3 = *(int *)(param_1 + 100);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 100) == 0)) {
        in_stack_ffffff9c = 0x4d8b99;
        cVar2 = FUN_00405c98(*(undefined4 *)(iVar3 + 4),&PTR_FUN_004d73ac);
        if (cVar2 != '\0') goto LAB_004d8bc1;
      }
      in_stack_ffffff9c = local_8;
      FUN_004d801c(*(undefined2 *)(param_1 + 0x60),&local_48);
      uStack_6c = local_48;
      FUN_00408480(&local_8,3);
    }
  }
  else {
    in_stack_ffffff9c = 0x4d8b72;
    local_44.hSubMenu = (HMENU)FUN_004d90b0(param_1);
  }
LAB_004d8bc1:
  DVar4 = GetVersion();
  bVar8 = (byte)DVar4 == 4;
  if ((byte)DVar4 < 4) {
    FUN_00408640(*(undefined4 *)(param_1 + 0x34),&DAT_004d8e18);
    uVar7 = *(uint *)(&DAT_007789d4 + (bVar8 & 0x7f) * 4) |
            *(uint *)(&DAT_007789c8 + (uint)*(byte *)(param_1 + 0x48) * 4) |
            *(uint *)(&DAT_007789b8 + (uint)*(byte *)(param_1 + 0x38) * 4) |
            *(uint *)(&DAT_007789c0 + (uint)*(byte *)(param_1 + 0x39) * 4);
    iVar3 = FUN_004dbe08(param_1);
    if (iVar3 < 1) {
      pWVar6 = (LPCWSTR)FUN_00407f44(local_8);
      InsertMenuW(local_c,0xffffffff,uVar7 | 0x400,(uint)*(ushort *)(param_1 + 0x50),pWVar6);
      puVar1 = puStack_58;
    }
    else {
      pWVar6 = (LPCWSTR)FUN_00407f44(*(undefined4 *)(param_1 + 0x34));
      uIDNewItem = FUN_004d90b0(param_1);
      InsertMenuW(local_c,0xffffffff,uVar7 | 0x410,uIDNewItem,pWVar6);
      puVar1 = puStack_58;
    }
  }
  else {
    if ((*(int *)PTR_DAT_00782944 == 1) && (*(int *)PTR_DAT_00781bfc < 5)) {
      local_44.cbSize = 0x2c;
    }
    else {
      local_44.cbSize = 0x30;
    }
    local_44.fMask = 0x3f;
    iVar3 = thunk_FUN_004dc3d8(param_1);
    local_14 = FUN_004db580(param_1);
    if (((iVar3 == 0) || ((*(char *)(iVar3 + 0x40) == '\0' && (local_14 == 0)))) &&
       ((*(int **)(param_1 + 0x4c) == (int *)0x0 ||
        (cVar2 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x20))(), cVar2 != '\0')))) {
      bVar8 = 0;
    }
    else {
      bVar8 = 1;
    }
    cVar2 = FUN_00405c98(*(undefined4 *)(*(int *)(param_1 + 100) + 4),&PTR_FUN_004d73ac);
    bVar9 = cVar2 == '\0';
    if (!(bool)bVar9) {
      cVar2 = FUN_0041d030(6,0);
      bVar9 = cVar2 == '\0';
      if (!(bool)bVar9) {
        iVar5 = FUN_00503a6c();
        bVar9 = *(char *)(iVar5 + 5) == '\0';
        if (!(bool)bVar9) {
          if ((bVar8 == 0) ||
             ((((local_14 == 0 || (*(int *)(param_1 + 0x40) == -1)) &&
               (*(int *)(param_1 + 0x4c) == 0)) && (*(char *)(iVar3 + 0x40) == '\0')))) {
            bVar8 = 0;
            bVar9 = true;
          }
          else {
            bVar9 = false;
            bVar8 = 1;
          }
        }
      }
    }
    FUN_00408640(*(undefined4 *)(param_1 + 0x34),&DAT_004d8e18);
    local_44.fType =
         *(uint *)(&DAT_00778a08 + (bVar9 & 0x7f) * 4) |
         *(uint *)(&DAT_00778a00 + (uint)*(byte *)(param_1 + 0x3d) * 4) |
         *(uint *)(&DAT_007789dc + (uint)*(byte *)(param_1 + 0x48) * 4) |
         *(uint *)(&DAT_00778a10 + (uint)local_d * 4) | *(uint *)(&DAT_00778a18 + (uint)bVar8 * 4);
    local_44.fState =
         *(uint *)(&DAT_007789e8 + (uint)*(byte *)(param_1 + 0x38) * 4) |
         *(uint *)(&DAT_007789f8 + (uint)*(byte *)(param_1 + 0x39) * 4) |
         *(uint *)(&DAT_007789f0 + (uint)*(byte *)(param_1 + 0x3a) * 4);
    local_44.wID = (UINT)*(ushort *)(param_1 + 0x50);
    local_44.hSubMenu = (HMENU)0x0;
    local_44.hbmpChecked = (HBITMAP)0x0;
    local_44.hbmpUnchecked = (HBITMAP)0x0;
    iVar3 = FUN_004dbe08(param_1);
    if (0 < iVar3) {
      local_44.hSubMenu = (HMENU)FUN_004d90b0(param_1);
    }
    local_44.dwTypeData = (LPWSTR)FUN_00407f44(local_8);
    InsertMenuItemW(local_c,0xffffffff,-1,&local_44);
    puVar1 = puStack_58;
  }
LAB_004d8dce:
  puStack_58 = puVar1;
  *in_FS_OFFSET = uStack_6c;
  thunk_FUN_00406e5c(&local_48,uStack_6c,in_stack_ffffff9c,&LAB_004d8df3);
  thunk_FUN_00406e5c(&local_8);
  return;
}
