// rea decompile_all
// name: FUN_0051adc8
// address: 0x51adc8
// body: available
// range: 0x51adc8-0x51aff3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x51ade2 (push 0x51b0f2 followed by fs-segment stack chaining); handler 0x51b0f2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x51ae6c (push 0x51b0d5 followed by fs-segment stack chaining); handler 0x51b0d5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x51af29 (push 0x51b0b3 followed by fs-segment stack chaining); handler 0x51b0b3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x51af3f (push 0x51aff4 followed by fs-segment stack chaining); handler 0x51aff4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051adc8(int *param_1)

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
  puStack_30 = &LAB_0051b0f2;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_8 = param_1;
  FUN_004ec968();
  if (*(char *)((int)local_8 + 0x59) == '\0') {
    cVar2 = (**(code **)(*local_8 + 0x5c))();
    if (((cVar2 == '\0') || ((*(byte *)(local_8 + 0xe1) & 8) != 0)) ||
       (*(char *)((int)local_8 + 0x29e) == '\x01')) goto LAB_0051ae17;
  }
  else {
LAB_0051ae17:
    FUN_0040b75c(PTR_PTR_00781f10,&local_24);
    FUN_0041beb8(&PTR_LAB_0042f068,1,local_24);
    FUN_00406618();
  }
  pHVar3 = GetCapture();
  if (pHVar3 != (HWND)0x0) {
    LVar8 = 0;
    WVar7 = 0;
    UVar6 = 0x1f;
    pHVar3 = GetCapture();
    puStack_48 = (undefined1 *)0x51ae52;
    SendMessageW(pHVar3,UVar6,WVar7,LVar8);
  }
  ReleaseCapture();
  FUN_0051e1a8(DAT_007882ec);
  *in_FS_OFFSET = &stack0xffffffc0;
  local_20 = GetActiveWindow();
  *(byte *)(local_8 + 0xe1) = *(byte *)(local_8 + 0xe1) | 8;
  if (((char)local_8[0xd2] == '\0') && (*(char *)(DAT_007882ec + 0xd0) != '\0')) {
    FUN_004f3af0(local_8);
    FUN_004f7684(local_8);
    if (local_20 != (HWND)0x0) {
      puStack_48 = (undefined1 *)0x51aeba;
      BVar4 = IsWindow(local_20);
      if (BVar4 != 0) goto LAB_0051aec6;
    }
    local_20 = GetActiveWindow();
  }
LAB_0051aec6:
  local_14 = FUN_00513108();
  FUN_0043b100(*(undefined4 *)(DAT_007882f0 + 0x78),0,*(undefined4 *)(DAT_007882f0 + 0x74));
  *(int **)(DAT_007882f0 + 0x74) = local_8;
  local_16 = *(undefined2 *)(DAT_007882f0 + 0x48);
  FUN_0051cc64(DAT_007882f0,0);
  local_1c = *(undefined4 *)(DAT_007882f0 + 0x4c);
  local_10 = FUN_005132b4(0);
  puStack_48 = &LAB_0051b0b3;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  puStack_50 = (undefined1 *)0x51af34;
  FUN_0051acd8(local_8);
  puStack_54 = &LAB_0051aff4;
  uStack_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_58;
  LVar8 = 0;
  WVar7 = 0;
  UVar6 = 0xb000;
  puStack_50 = &stack0xfffffffc;
  pHVar3 = (HWND)FUN_004f76a8(local_8);
  SendMessageW(pHVar3,UVar6,WVar7,LVar8);
  local_8[0xae] = 0;
  do {
    FUN_0051f734(DAT_007882ec);
    if (*(char *)(DAT_007882ec + 0xa4) == '\0') {
      if (local_8[0xae] != 0) {
        FUN_0051a8f0(local_8);
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
  pHVar3 = (HWND)FUN_004f76a8(local_8);
  SendMessageW(pHVar3,UVar6,WVar7,LVar8);
  pHVar3 = (HWND)FUN_004f76a8(local_8);
  pHVar5 = GetActiveWindow();
  puVar1 = puStack_50;
  if (pHVar3 != pHVar5) {
    local_20 = (HWND)0x0;
  }
  *in_FS_OFFSET = uStack_58;
  puStack_50 = &LAB_0051affb;
  puStack_54 = (undefined1 *)0x51aff3;
  FUN_0051acd0(local_8,uStack_58,puVar1);
  return;
}
