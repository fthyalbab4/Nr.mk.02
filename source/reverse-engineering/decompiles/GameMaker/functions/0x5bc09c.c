// rea decompile_all
// name: FUN_005bc09c
// address: 0x5bc09c
// body: available
// range: 0x5bc09c-0x5bc100 inclusive
// range: 0x5bc106-0x5bc120 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5bc0c0 (push 0x5bc101 followed by fs-segment stack chaining); handler 0x5bc101 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005bc09c(void)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 *in_stack_0000000c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  if (in_stack_0000000c != (undefined4 *)0x0) {
    *in_stack_0000000c = 0;
  }
  iStack_1c = in_stack_00000004;
  puStack_24 = &LAB_005bc101;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_0040b140(&local_8);
  FUN_00408144(&local_c,in_stack_00000008);
  piVar1 = *(int **)(in_stack_00000004 + 0xc);
  (**(code **)(*piVar1 + 0x1c))();
  FUN_0040b250();
  FUN_005ba93c(local_8,in_stack_0000000c);
  *in_FS_OFFSET = piVar1;
  puStack_24 = (undefined1 *)0x5bc10e;
  FUN_00407a78(&local_c,piVar1,uStack_28);
  puStack_24 = (undefined1 *)0x5bc116;
  FUN_0040b140(&local_8);
  return 0;
}
