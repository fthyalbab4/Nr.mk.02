// rea decompile_all
// name: FUN_004a5bd4
// address: 0x4a5bd4
// body: available
// range: 0x4a5bd4-0x4a5e9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4a5bf8 (push 0x4a5e9c followed by fs-segment stack chaining); handler 0x4a5e9c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a5bd4(int param_1,HMENU param_2,byte param_3)

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
  puStack_5c = &LAB_004a5e9c;
  uStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_60;
  puVar1 = &stack0xfffffffc;
  local_d = param_3;
  local_c = param_2;
  if (*(char *)(param_1 + 0x3e) == '\0') goto LAB_004a5e7e;
  FUN_004081e8(&local_8,*(undefined4 *)(param_1 + 0x34));
  in_stack_ffffff9c = 0x4a5c17;
  iVar3 = FUN_004a8eb8(param_1);
  if (iVar3 < 1) {
    if (*(short *)(param_1 + 0x60) != 0) {
      iVar3 = *(int *)(param_1 + 100);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 100) == 0)) {
        in_stack_ffffff9c = 0x4a5c49;
        cVar2 = FUN_004061f8(*(undefined4 *)(iVar3 + 4),&PTR_FUN_004a445c);
        if (cVar2 != '\0') goto LAB_004a5c71;
      }
      in_stack_ffffff9c = local_8;
      FUN_004a50cc(*(undefined2 *)(param_1 + 0x60),&local_48);
      uStack_6c = local_48;
      FUN_0040875c(&local_8,3);
    }
  }
  else {
    in_stack_ffffff9c = 0x4a5c22;
    local_44.hSubMenu = (HMENU)FUN_004a6160(param_1);
  }
LAB_004a5c71:
  DVar4 = GetVersion();
  bVar8 = (byte)DVar4 == 4;
  if ((byte)DVar4 < 4) {
    FUN_0040891c(*(undefined4 *)(param_1 + 0x34),&DAT_004a5ec8);
    uVar7 = *(uint *)(&DAT_0068176c + (bVar8 & 0x7f) * 4) |
            *(uint *)(&DAT_00681760 + (uint)*(byte *)(param_1 + 0x48) * 4) |
            *(uint *)(&DAT_00681750 + (uint)*(byte *)(param_1 + 0x38) * 4) |
            *(uint *)(&DAT_00681758 + (uint)*(byte *)(param_1 + 0x39) * 4);
    iVar3 = FUN_004a8eb8(param_1);
    if (iVar3 < 1) {
      pWVar6 = (LPCWSTR)FUN_00408220(local_8);
      InsertMenuW(local_c,0xffffffff,uVar7 | 0x400,(uint)*(ushort *)(param_1 + 0x50),pWVar6);
      puVar1 = puStack_58;
    }
    else {
      pWVar6 = (LPCWSTR)FUN_00408220(*(undefined4 *)(param_1 + 0x34));
      uIDNewItem = FUN_004a6160(param_1);
      InsertMenuW(local_c,0xffffffff,uVar7 | 0x410,uIDNewItem,pWVar6);
      puVar1 = puStack_58;
    }
  }
  else {
    if ((*(int *)PTR_DAT_0068966c == 1) && (*(int *)PTR_DAT_00688cd4 < 5)) {
      local_44.cbSize = 0x2c;
    }
    else {
      local_44.cbSize = 0x30;
    }
    local_44.fMask = 0x3f;
    iVar3 = thunk_FUN_004a9488(param_1);
    local_14 = FUN_004a8630(param_1);
    if (((iVar3 == 0) || ((*(char *)(iVar3 + 0x40) == '\0' && (local_14 == 0)))) &&
       ((*(int **)(param_1 + 0x4c) == (int *)0x0 ||
        (cVar2 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x20))(), cVar2 != '\0')))) {
      bVar8 = 0;
    }
    else {
      bVar8 = 1;
    }
    cVar2 = FUN_004061f8(*(undefined4 *)(*(int *)(param_1 + 100) + 4),&PTR_FUN_004a445c);
    bVar9 = cVar2 == '\0';
    if (!(bool)bVar9) {
      cVar2 = FUN_0041cec4(6,0);
      bVar9 = cVar2 == '\0';
      if (!(bool)bVar9) {
        iVar5 = FUN_004d08e8();
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
    FUN_0040891c(*(undefined4 *)(param_1 + 0x34),&DAT_004a5ec8);
    local_44.fType =
         *(uint *)(&DAT_006817a0 + (bVar9 & 0x7f) * 4) |
         *(uint *)(&DAT_00681798 + (uint)*(byte *)(param_1 + 0x3d) * 4) |
         *(uint *)(&DAT_00681774 + (uint)*(byte *)(param_1 + 0x48) * 4) |
         *(uint *)(&DAT_006817a8 + (uint)local_d * 4) | *(uint *)(&DAT_006817b0 + (uint)bVar8 * 4);
    local_44.fState =
         *(uint *)(&DAT_00681780 + (uint)*(byte *)(param_1 + 0x38) * 4) |
         *(uint *)(&DAT_00681790 + (uint)*(byte *)(param_1 + 0x39) * 4) |
         *(uint *)(&DAT_00681788 + (uint)*(byte *)(param_1 + 0x3a) * 4);
    local_44.wID = (UINT)*(ushort *)(param_1 + 0x50);
    local_44.hSubMenu = (HMENU)0x0;
    local_44.hbmpChecked = (HBITMAP)0x0;
    local_44.hbmpUnchecked = (HBITMAP)0x0;
    iVar3 = FUN_004a8eb8(param_1);
    if (0 < iVar3) {
      local_44.hSubMenu = (HMENU)FUN_004a6160(param_1);
    }
    local_44.dwTypeData = (LPWSTR)FUN_00408220(local_8);
    InsertMenuItemW(local_c,0xffffffff,-1,&local_44);
    puVar1 = puStack_58;
  }
LAB_004a5e7e:
  puStack_58 = puVar1;
  *in_FS_OFFSET = uStack_6c;
  thunk_FUN_004072d8(&local_48,uStack_6c,in_stack_ffffff9c,&LAB_004a5ea3);
  thunk_FUN_004072d8(&local_8);
  return;
}
