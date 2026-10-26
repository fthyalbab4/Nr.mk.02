// rea decompile_all
// name: FUN_005bdef0
// address: 0x5bdef0
// body: available
// range: 0x5bdef0-0x5bdf52 inclusive
// range: 0x5bdf58-0x5bdf72 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5bdf14 (push 0x5bdf53 followed by fs-segment stack chaining); handler 0x5bdf53 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005bdef0(void)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  int *local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = (int *)0x0;
  if (in_stack_00000008 != (undefined4 *)0x0) {
    *in_stack_00000008 = 0;
  }
  uStack_1c = in_stack_00000004;
  puStack_24 = &LAB_005bdf53;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_00407a78(&local_8);
  FUN_005bde44(in_stack_00000004,&local_c);
  piVar1 = local_c;
  (**(code **)(*local_c + 0xac))();
  FUN_0040b250();
  FUN_00408130(in_stack_00000008,local_8);
  *in_FS_OFFSET = piVar1;
  puStack_24 = (undefined1 *)0x5bdf60;
  FUN_0040b140(&local_c,piVar1,uStack_28);
  puStack_24 = (undefined1 *)0x5bdf68;
  FUN_00407a78(&local_8);
  return 0;
}
