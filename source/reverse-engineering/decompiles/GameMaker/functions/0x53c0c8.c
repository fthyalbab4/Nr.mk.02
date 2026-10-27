// rea decompile_all
// name: FUN_0053c0c8
// address: 0x53c0c8
// body: available
// range: 0x53c0c8-0x53c287 inclusive
// range: 0x53c29f-0x53c2b4 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x53c0e4 (push 0x53c2b5 followed by fs-segment stack chaining); handler 0x53c2b5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x53c12c (push 0x53c288 followed by fs-segment stack chaining); handler 0x53c288 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0053c0c8(int param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  ushort local_a;
  int local_8;

  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_0053c2b5;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined1 *)0x53c0ef;
  local_8 = param_1;
  FUN_0053c2c4(param_1);
  if (*(char *)(local_8 + 8) == '\x03') {
    *(undefined4 *)(local_8 + 0x14) = 0x428;
  }
  else {
    *(undefined4 *)(local_8 + 0x14) = 0x28;
  }
  puStack_2c = (undefined1 *)0x53c119;
  puVar2 = (undefined4 *)FUN_0040431c(*(undefined4 *)(local_8 + 0x14));
  *(undefined4 **)(local_8 + 0xc) = puVar2;
  puStack_30 = &LAB_0053c288;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  *puVar2 = 0x28;
  puVar2[1] = *(undefined4 *)(local_8 + 0x24);
  puVar2[2] = *(undefined4 *)(local_8 + 0x20);
  *(undefined2 *)(puVar2 + 3) = 1;
  puVar2[5] = 0;
  puVar2[4] = 0;
  if (*(char *)(local_8 + 8) != '\x03') {
    *(undefined2 *)((int)puVar2 + 0xe) = 0x18;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puStack_2c = &stack0xfffffffc;
    goto LAB_0053c215;
  }
  *(undefined2 *)((int)puVar2 + 0xe) = 8;
  puStack_2c = &stack0xfffffffc;
  if (*(HANDLE *)(local_8 + 0x1c) == (HANDLE)0x0) {
LAB_0053c1bc:
    local_a = 0;
  }
  else {
    puStack_2c = &stack0xfffffffc;
    iVar3 = GetObjectW(*(HANDLE *)(local_8 + 0x1c),2,&local_a);
    if ((iVar3 == 0) || (local_a == 0)) goto LAB_0053c1bc;
    GetPaletteEntries(*(HPALETTE *)(local_8 + 0x1c),0,(uint)local_a,
                      (LPPALETTEENTRY)(*(int *)(local_8 + 0xc) + 0x28));
    FUN_0053c070(*(int *)(local_8 + 0xc) + 0x28,local_a);
  }
  if (local_a < 0x100) {
    FUN_00404f08(*(int *)(local_8 + 0xc) + 0x28 + (uint)local_a * 4,0x100 - (uint)local_a,0);
  }
  iVar3 = *(int *)(local_8 + 0xc);
  *(undefined4 *)(iVar3 + 0x20) = 0x100;
  *(uint *)(iVar3 + 0x24) = (uint)local_a;
LAB_0053c215:
  iVar3 = FUN_0053b658(*(undefined4 *)(local_8 + 0x24),
                       *(undefined2 *)(*(int *)(local_8 + 0xc) + 0xe),0x20);
  uVar4 = (int)*(uint *)(local_8 + 0x20) >> 0x1f;
  iVar3 = iVar3 * ((*(uint *)(local_8 + 0x20) ^ uVar4) - uVar4);
  *(int *)(local_8 + 0x18) = iVar3;
  iVar3 = FUN_0040ea3c(2,iVar3);
  *(int *)(local_8 + 0x10) = iVar3;
  if (iVar3 == 0) {
    FUN_0040b75c(&PTR_DAT_0053b368,&local_10);
    FUN_0041beb8(&PTR_LAB_00411414,1,local_10);
    FUN_00406618();
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_34;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0053c2bc;
  puStack_24 = (undefined1 *)0x53c2b4;
  thunk_FUN_00406e5c(&local_10,uStack_28,puVar1);
  return;
}
