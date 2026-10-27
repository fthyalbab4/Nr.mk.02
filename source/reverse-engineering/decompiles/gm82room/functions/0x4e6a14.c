// rea decompile_all
// name: FUN_004e6a14
// address: 0x4e6a14
// body: available
// range: 0x4e6a14-0x4e6af8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4e6a39 (push 0x4e6b0a followed by fs-segment stack chaining); handler 0x4e6b0a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4e6aa5 (push 0x4e6af9 followed by fs-segment stack chaining); handler 0x4e6af9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e6a14(int *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  HWND hWnd;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  int nIndex;
  undefined4 uVar6;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined1 local_18 [16];
  int *local_8;

  puStack_28 = (undefined1 *)0x4e6a2b;
  local_8 = (int *)FUN_00462804(&PTR_FUN_00458e94,1);
  puStack_2c = &LAB_004e6b0a;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined1 *)0x4e6a43;
  puStack_28 = &stack0xfffffffc;
  uVar2 = FUN_004baf44(param_1);
  puStack_34 = (undefined1 *)0x4e6a4d;
  (**(code **)(*local_8 + 0x44))(local_8,uVar2);
  puStack_34 = (undefined1 *)0x4e6a54;
  uVar2 = FUN_004baf84(param_1);
  puStack_34 = (undefined1 *)0x4e6a5e;
  (**(code **)(*local_8 + 0x38))(local_8,uVar2);
  puStack_34 = (undefined1 *)0x4e6a66;
  uVar2 = FUN_00463124(local_8);
  puStack_34 = (undefined1 *)0x4e6a71;
  FUN_0045d3fc(uVar2,param_1[0x70]);
  puStack_34 = (undefined1 *)0x4e6a7b;
  (**(code **)(*param_1 + 0x54))(param_1,local_18);
  puStack_34 = local_18;
  puStack_38 = (undefined1 *)0x4e6a87;
  piVar3 = (int *)FUN_00463124(local_8);
  puVar1 = puStack_34;
  puStack_34 = (undefined1 *)0x4e6a8d;
  (**(code **)(*piVar3 + 0x4c))(piVar3,puVar1);
  puStack_34 = (undefined1 *)0x4e6a95;
  FUN_00463124(local_8);
  puStack_34 = (undefined1 *)0x4e6a9a;
  FUN_0045c4fc();
  puStack_38 = &LAB_004e6af9;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  nIndex = -0x10;
  puStack_34 = &stack0xfffffffc;
  hWnd = (HWND)FUN_004c45dc(param_1);
  uVar4 = GetWindowLongW(hWnd,nIndex);
  if ((uVar4 & 0x800000) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  uVar6 = uVar2;
  FUN_00463124(local_8);
  uVar5 = FUN_0045d4ec();
  FUN_004c1f08(param_1,uVar5,uVar2);
  puVar1 = puStack_38;
  *in_FS_OFFSET = uVar6;
  puStack_38 = &LAB_004e6b00;
  uStack_3c = 0x4e6af3;
  FUN_00463124(local_8,uVar6,puVar1);
  uStack_3c = 0x4e6af8;
  FUN_0045c600();
  return;
}
