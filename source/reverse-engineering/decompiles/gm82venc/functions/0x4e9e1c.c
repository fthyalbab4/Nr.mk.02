// rea decompile_all
// name: FUN_004e9e1c
// address: 0x4e9e1c
// body: available
// range: 0x4e9e1c-0x4e9fcc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4e9e35 (push 0x4e9fcd followed by fs-segment stack chaining); handler 0x4e9fcd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e9e1c(int param_1)

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
  puStack_3c = &LAB_004e9fcd;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puVar1 = &stack0xfffffffc;
  if ((*(char *)(param_1 + 0xac) == '\0') && (puVar1 = &stack0xfffffffc, *PTR_DAT_006892d8 == '\0'))
  {
    uVar3 = FUN_004df744();
    *(undefined4 *)(param_1 + 0x174) = uVar3;
    PTR_DefWindowProcW_00681bbc = DefWindowProcW;
    BVar4 = GetClassInfoW(DAT_0068cc40,(LPCWSTR)PTR_u_TApplication_00681bdc,&local_2c);
    if (BVar4 == 0) {
      _DAT_00681bc8 = DAT_0068cc40;
      AVar2 = RegisterClassW((WNDCLASSW *)&DAT_00681bb8);
      if (AVar2 == 0) {
        FUN_0040b9d0(PTR_LAB_00688a8c,&local_30);
        FUN_0041bd4c(&LAB_0042db84,1,local_30);
        FUN_00406ab4();
      }
    }
    uVar14 = 0x84ca0000;
    uVar3 = 0;
    (**(code **)PTR_DAT_00688d14)();
    uVar5 = (**(code **)PTR_DAT_00688d14)();
    iVar6 = (int)uVar5 >> 1;
    if (iVar6 < 0) {
      iVar6 = iVar6 + (uint)((uVar5 & 1) != 0);
    }
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar8 = 0;
    pHVar9 = DAT_0068cc40;
    uVar7 = FUN_00408220(*(undefined4 *)(param_1 + 0x8c));
    uVar3 = FUN_0040ec30(0x80,PTR_u_TApplication_00681bdc,uVar7,uVar8,pHVar9,uVar10,uVar11,uVar12,
                         uVar13,iVar6,uVar3,uVar14);
    *(undefined4 *)(param_1 + 0x170) = uVar3;
    *(undefined1 *)(param_1 + 0xac) = 1;
    SetWindowLongW(*(HWND *)(param_1 + 0x170),-4,*(LONG *)(param_1 + 0x174));
    if (*PTR_DAT_00688e94 != '\0') {
      lParam = FUN_004eaeac(param_1);
      SendMessageW(*(HWND *)(param_1 + 0x170),0x80,1,lParam);
      dwNewLong = FUN_004eaeac(param_1);
      SetClassLongW(*(HWND *)(param_1 + 0x170),-0xe,dwNewLong);
    }
    hMenu = GetSystemMenu(*(HWND *)(param_1 + 0x170),0);
    DeleteMenu(hMenu,0xf030,0);
    DeleteMenu(hMenu,0xf000,0);
    puVar1 = puStack_38;
    if (*PTR_DAT_00688e94 != '\0') {
      DeleteMenu(hMenu,0xf010,0);
      puVar1 = puStack_38;
    }
  }
  puStack_38 = puVar1;
  puVar1 = puStack_38;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_004e9fd4;
  puStack_3c = (undefined1 *)0x4e9fcc;
  thunk_FUN_004072d8(&local_30,uStack_40,puVar1);
  return;
}
