// rea decompile_all
// name: FUN_004e6e54
// address: 0x4e6e54
// body: available
// range: 0x4e6e54-0x4e707f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4e6e6e (push 0x4e717e followed by fs-segment stack chaining); handler 0x4e717e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4e6ef8 (push 0x4e7161 followed by fs-segment stack chaining); handler 0x4e7161 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4e6fb5 (push 0x4e713f followed by fs-segment stack chaining); handler 0x4e713f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4e6fcb (push 0x4e7080 followed by fs-segment stack chaining); handler 0x4e7080 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e6e54(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  HWND pHVar3;
  BOOL BVar4;
  HWND pHVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  UINT UVar6;
  WPARAM WVar7;
  LPARAM LVar8;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_24;
  HWND local_20;
  undefined4 local_1c;
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;

  puStack_2c = &stack0xfffffffc;
  local_24 = 0;
  puStack_30 = &LAB_004e717e;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_8 = param_1;
  FUN_004b9920();
  if (*(char *)((int)local_8 + 0x59) == '\0') {
    cVar2 = (**(code **)(*local_8 + 0x5c))();
    if (((cVar2 == '\0') || ((*(byte *)(local_8 + 0xe1) & 8) != 0)) ||
       (*(char *)((int)local_8 + 0x29e) == '\x01')) goto LAB_004e6ea3;
  }
  else {
LAB_004e6ea3:
    FUN_0040b9d0(PTR_LAB_00688ef8,&local_24);
    FUN_0041bd4c(&LAB_0042dc24,1,local_24);
    FUN_00406ab4();
  }
  pHVar3 = GetCapture();
  if (pHVar3 != (HWND)0x0) {
    LVar8 = 0;
    WVar7 = 0;
    UVar6 = 0x1f;
    pHVar3 = GetCapture();
    puStack_48 = (undefined1 *)0x4e6ede;
    SendMessageW(pHVar3,UVar6,WVar7,LVar8);
  }
  ReleaseCapture();
  FUN_004ea198(DAT_0068f2e8);
  *in_FS_OFFSET = &stack0xffffffc0;
  local_20 = GetActiveWindow();
  *(byte *)(local_8 + 0xe1) = *(byte *)(local_8 + 0xe1) | 8;
  if (((char)local_8[0xd2] == '\0') && (*(char *)(DAT_0068f2e8 + 0xd0) != '\0')) {
    FUN_004c0aa8(local_8);
    FUN_004c45b8(local_8);
    if (local_20 != (HWND)0x0) {
      puStack_48 = (undefined1 *)0x4e6f46;
      BVar4 = IsWindow(local_20);
      if (BVar4 != 0) goto LAB_004e6f52;
    }
    local_20 = GetActiveWindow();
  }
LAB_004e6f52:
  local_14 = FUN_004df2bc();
  FUN_00438f7c(*(undefined4 *)(DAT_0068f2ec + 0x78),0,*(undefined4 *)(DAT_0068f2ec + 0x74));
  *(int **)(DAT_0068f2ec + 0x74) = local_8;
  local_16 = *(undefined2 *)(DAT_0068f2ec + 0x48);
  FUN_004e8ca4(DAT_0068f2ec,0);
  local_1c = *(undefined4 *)(DAT_0068f2ec + 0x4c);
  local_10 = FUN_004df468(0);
  puStack_48 = &LAB_004e713f;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  puStack_50 = (undefined1 *)0x4e6fc0;
  FUN_004e6d64(local_8);
  puStack_54 = &LAB_004e7080;
  uStack_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_58;
  LVar8 = 0;
  WVar7 = 0;
  UVar6 = 0xb000;
  puStack_50 = &stack0xfffffffc;
  pHVar3 = (HWND)FUN_004c45dc(local_8);
  SendMessageW(pHVar3,UVar6,WVar7,LVar8);
  local_8[0xae] = 0;
  do {
    FUN_004eb724(DAT_0068f2e8);
    if (*(char *)(DAT_0068f2e8 + 0xa4) == '\0') {
      if (local_8[0xae] != 0) {
        FUN_004e697c(local_8);
      }
    }
    else {
      local_8[0xae] = 2;
    }
    local_c = local_8[0xae];
  } while (local_c == 0);
  LVar8 = 0;
  WVar7 = 0;
  UVar6 = 0xb001;
  pHVar3 = (HWND)FUN_004c45dc(local_8);
  SendMessageW(pHVar3,UVar6,WVar7,LVar8);
  pHVar3 = (HWND)FUN_004c45dc(local_8);
  pHVar5 = GetActiveWindow();
  puVar1 = puStack_50;
  if (pHVar3 != pHVar5) {
    local_20 = (HWND)0x0;
  }
  *in_FS_OFFSET = uStack_58;
  puStack_50 = &LAB_004e7087;
  puStack_54 = (undefined1 *)0x4e707f;
  FUN_004e6d5c(local_8,uStack_58,puVar1);
  return;
}
