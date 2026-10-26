// rea decompile_all
// name: FUN_005bb954
// address: 0x5bb954
// body: available
// range: 0x5bb954-0x5bb9c9 inclusive
// range: 0x5bb9cf-0x5bb9ec inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5bb97a (push 0x5bb9ca followed by fs-segment stack chaining); handler 0x5bb9ca lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005bb954(void)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 *in_stack_00000010;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int iStack_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  if (in_stack_00000010 != (undefined4 *)0x0) {
    *in_stack_00000010 = 0;
  }
  iStack_20 = in_stack_00000004;
  puStack_28 = &LAB_005bb9ca;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  FUN_0040b140(&local_8);
  FUN_005baa18(in_stack_0000000c,&local_c);
  FUN_005baa18(in_stack_00000008,&local_10);
  piVar1 = *(int **)(in_stack_00000004 + 0xc);
  (**(code **)(*piVar1 + 0x4c))();
  FUN_0040b250();
  FUN_005ba93c(local_8,in_stack_00000010);
  *in_FS_OFFSET = piVar1;
  FUN_00408e44(&local_10,&LAB_005b7408,3);
  return 0;
}
