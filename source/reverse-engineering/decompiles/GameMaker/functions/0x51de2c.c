// rea decompile_all
// name: FUN_0051de2c
// address: 0x51de2c
// body: available
// range: 0x51de2c-0x51dfdc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x51de45 (push 0x51dfdd followed by fs-segment stack chaining); handler 0x51dfdd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051de2c(int param_1)

{
  undefined1 *puVar1;
  ATOM AVar2;
  undefined4 uVar3;
  BOOL BVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  LPARAM lParam;
  LONG dwNewLong;
  HMENU hMenu;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar8;
  HINSTANCE pHVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 local_30;
  tagWNDCLASSW local_2c;

  puStack_38 = &stack0xfffffffc;
  local_30 = 0;
  puStack_3c = &LAB_0051dfdd;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puVar1 = &stack0xfffffffc;
  if ((*(char *)(param_1 + 0xac) == '\0') && (puVar1 = &stack0xfffffffc, *PTR_DAT_00782464 == '\0'))
  {
    uVar3 = FUN_00513590();
    *(undefined4 *)(param_1 + 0x174) = uVar3;
    PTR_DefWindowProcW_00778e2c = DefWindowProcW;
    BVar4 = GetClassInfoW(DAT_00785c40,(LPCWSTR)PTR_u_TApplication_00778e4c,&local_2c);
    if (BVar4 == 0) {
      _DAT_00778e38 = DAT_00785c40;
      AVar2 = RegisterClassW((WNDCLASSW *)&DAT_00778e28);
      if (AVar2 == 0) {
        FUN_0040b75c(PTR_PTR_00781880,&local_30);
        FUN_0041beb8(&PTR_LAB_0042efc8,1,local_30);
        FUN_00406618();
      }
    }
    uVar14 = 0x84ca0000;
    uVar3 = 0;
    (**(code **)PTR_DAT_00781c5c)();
    uVar5 = (**(code **)PTR_DAT_00781c5c)();
    iVar6 = (int)uVar5 >> 1;
    if (iVar6 < 0) {
      iVar6 = iVar6 + (uint)((uVar5 & 1) != 0);
    }
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar8 = 0;
    pHVar9 = DAT_00785c40;
    uVar7 = FUN_00407f44(*(undefined4 *)(param_1 + 0x8c));
    uVar3 = FUN_0040ea68(0x80,PTR_u_TApplication_00778e4c,uVar7,uVar8,pHVar9,uVar10,uVar11,uVar12,
                         uVar13,iVar6,uVar3,uVar14);
    *(undefined4 *)(param_1 + 0x170) = uVar3;
    *(undefined1 *)(param_1 + 0xac) = 1;
    SetWindowLongW(*(HWND *)(param_1 + 0x170),-4,*(LONG *)(param_1 + 0x174));
    if (*PTR_DAT_00781e70 != '\0') {
      lParam = FUN_0051eebc(param_1);
      SendMessageW(*(HWND *)(param_1 + 0x170),0x80,1,lParam);
      dwNewLong = FUN_0051eebc(param_1);
      SetClassLongW(*(HWND *)(param_1 + 0x170),-0xe,dwNewLong);
    }
    hMenu = GetSystemMenu(*(HWND *)(param_1 + 0x170),0);
    DeleteMenu(hMenu,0xf030,0);
    DeleteMenu(hMenu,0xf000,0);
    puVar1 = puStack_38;
    if (*PTR_DAT_00781e70 != '\0') {
      DeleteMenu(hMenu,0xf010,0);
      puVar1 = puStack_38;
    }
  }
  puStack_38 = puVar1;
  puVar1 = puStack_38;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_0051dfe4;
  puStack_3c = (undefined1 *)0x51dfdc;
  thunk_FUN_00406e5c(&local_30,uStack_40,puVar1);
  return;
}
