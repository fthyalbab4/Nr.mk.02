// rea decompile_all
// name: FUN_005bd3cc
// address: 0x5bd3cc
// body: available
// range: 0x5bd3cc-0x5bd460 inclusive
// range: 0x5bd466-0x5bd49b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5bd3f3 (push 0x5bd461 followed by fs-segment stack chaining); handler 0x5bd461 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005bd3cc(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 *in_stack_0000000c;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  int *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_2c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = (int *)0x0;
  if (in_stack_0000000c != (undefined4 *)0x0) {
    *in_stack_0000000c = 0;
  }
  uStack_28 = in_stack_00000004;
  puStack_30 = &LAB_005bd461;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  uVar1 = FUN_0040b140(&local_c);
  FUN_005baa18(in_stack_00000008,&local_14);
  FUN_0040b184(&local_10,local_14,&DAT_005bd49c);
  uVar3 = local_10;
  FUN_005bca94(in_stack_00000004,&local_18);
  piVar2 = local_18;
  (**(code **)(*local_18 + 0xc0))();
  FUN_0040b250();
  FUN_005ba93c(local_c,&local_8);
  FUN_0040b184(in_stack_0000000c,local_8,&DAT_005bd4ac,piVar2,uVar3);
  *in_FS_OFFSET = piVar2;
  uStack_34 = 0x5bd46e;
  FUN_0040b140(&local_18,piVar2,uVar1);
  uStack_34 = 0x5bd476;
  FUN_0040b140(&local_14);
  uStack_34 = 0x5bd489;
  FUN_00408e44(&local_10,&DAT_005b755c,2);
  uStack_34 = 0x5bd491;
  FUN_0040b140(&local_8);
  return 0;
}
