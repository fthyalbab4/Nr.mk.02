// rea decompile_all
// name: FUN_005bb0a8
// address: 0x5bb0a8
// body: available
// range: 0x5bb0a8-0x5bb138 inclusive
// range: 0x5bb13e-0x5bb160 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5bb0ce (push 0x5bb139 followed by fs-segment stack chaining); handler 0x5bb139 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005bb0a8(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int iStack_20;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  if (in_stack_00000008 != (undefined4 *)0x0) {
    *in_stack_00000008 = 0;
  }
  iStack_20 = in_stack_00000004;
  puStack_28 = &LAB_005bb139;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puVar1 = &stack0xfffffffc;
  if (*(int *)(in_stack_00000004 + 0x14) == 0) {
    FUN_0040b140(&local_8);
    (**(code **)(**(int **)(in_stack_00000004 + 0xc) + 0x44))();
    FUN_0040b250();
    puVar1 = puStack_24;
    if (local_8 != 0) {
      FUN_0040b140(&local_10);
      (**(code **)(**(int **)(in_stack_00000004 + 0xc) + 0x44))();
      FUN_0040b250();
      FUN_005ba9f0(local_10,&local_c);
      FUN_0040b158(in_stack_00000004 + 0x14,local_c);
      puVar1 = puStack_24;
    }
  }
  puStack_24 = puVar1;
  FUN_0040b158(in_stack_00000008,*(undefined4 *)(in_stack_00000004 + 0x14));
  *in_FS_OFFSET = uStack_2c;
  iStack_20 = 0x5bb146;
  FUN_0040b140(&local_10,uStack_2c,puStack_24);
  iStack_20 = 0x5bb14e;
  FUN_0040b140(&local_c);
  iStack_20 = 0x5bb156;
  FUN_0040b140(&local_8);
  return 0;
}
