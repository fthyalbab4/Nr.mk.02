// rea decompile_all
// name: FUN_005bbac8
// address: 0x5bbac8
// body: available
// range: 0x5bbac8-0x5bbb32 inclusive
// range: 0x5bbb38-0x5bbb49 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5bbaea (push 0x5bbb33 followed by fs-segment stack chaining); handler 0x5bbb33 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005bbac8(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 *in_stack_0000000c;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int iStack_18;
  int local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  if (in_stack_0000000c != (undefined4 *)0x0) {
    *in_stack_0000000c = 0;
  }
  iStack_18 = in_stack_00000004;
  puStack_20 = &LAB_005bbb33;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  uVar2 = FUN_0040b140(&local_8);
  piVar1 = *(int **)(in_stack_00000004 + 0xc);
  (**(code **)(*piVar1 + 0x94))();
  FUN_0040b250();
  if (local_8 == 0) {
    FUN_0040b140(in_stack_0000000c);
  }
  else {
    FUN_005ba93c(local_8,in_stack_0000000c);
  }
  *in_FS_OFFSET = piVar1;
  uStack_24 = 0x5bbb40;
  FUN_0040b140(&local_8,piVar1,uVar2);
  return 0;
}
