// rea decompile_all
// name: FUN_0062788c
// address: 0x62788c
// body: available
// range: 0x62788c-0x627981 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6278ad (push 0x6279d3 followed by fs-segment stack chaining); handler 0x6279d3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6278ca (push 0x6279a6 followed by fs-segment stack chaining); handler 0x6279a6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6278e2 (push 0x627982 followed by fs-segment stack chaining); handler 0x627982 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062788c(void)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_FS_OFFSET;
  undefined4 in_stack_00000004;
  int iStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  int iStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  int iStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  local_1c = 0;
  local_8 = 0;
  puStack_2c = &LAB_006279d3;
  iStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_30;
  puStack_34 = (undefined1 *)0x6278bc;
  local_c = (**(code **)(**(int **)PTR_DAT_007826d0 + 0x40))();
  puStack_38 = &LAB_006279a6;
  iStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_3c;
  puStack_40 = (undefined1 *)0x6278d7;
  puStack_34 = &stack0xfffffffc;
  FUN_0044bb18(DAT_0077f0a0);
  puStack_44 = &LAB_00627982;
  iStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_48;
  puStack_40 = &stack0xfffffffc;
  iVar4 = FUN_00623b48(in_stack_00000004);
  uVar5 = (**(code **)PTR_DAT_007817bc)();
  FUN_00417b3c(uVar5,&local_18,in_stack_00000004);
  local_14 = local_18;
  local_10 = 0xb;
  FUN_0040b75c(PTR_PTR_00781ed4,&local_1c);
  FUN_005e1dd0(local_1c,&local_14,0);
  piVar1 = *(int **)(iVar4 + 4);
  cVar3 = FUN_00405c98(piVar1,&PTR_FUN_00625b5c);
  if (cVar3 != '\0') {
    (**(code **)(*piVar1 + 0x104))(piVar1,local_8);
  }
  piVar1 = *(int **)(iVar4 + 4);
  cVar3 = FUN_00405c98(piVar1,&PTR_FUN_00626054);
  if (cVar3 != '\0') {
    (**(code **)(*piVar1 + 100))(piVar1,local_8);
  }
  puVar2 = puStack_44;
  *in_FS_OFFSET = (int)&local_8;
  puStack_44 = &LAB_00627989;
  iStack_48 = 0x627981;
  FUN_0044bb20(DAT_0077f0a0,&local_8,puVar2);
  return;
}
