// rea decompile_all
// name: FUN_005bcb40
// address: 0x5bcb40
// body: available
// range: 0x5bcb40-0x5bcbc1 inclusive
// range: 0x5bcbc7-0x5bcbf1 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5bcb69 (push 0x5bcbc2 followed by fs-segment stack chaining); handler 0x5bcbc2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005bcb40(void)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 *in_stack_0000000c;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  int *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 local_8;

  puStack_34 = &stack0xfffffffc;
  local_8 = 0;
  uStack_c = 0;
  uStack_10 = 0;
  uStack_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = (int *)0x0;
  if (in_stack_0000000c != (undefined4 *)0x0) {
    *in_stack_0000000c = 0;
  }
  uStack_30 = in_stack_00000004;
  puStack_38 = &LAB_005bcbc2;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  FUN_004249e8(&local_18);
  FUN_00408144(&local_1c,in_stack_00000008);
  FUN_005bca94(in_stack_00000004,&local_20);
  piVar1 = local_20;
  (**(code **)(*local_20 + 0xb0))();
  FUN_0040b250();
  FUN_0042c240(&local_18,&local_8);
  FUN_00408130(in_stack_0000000c,local_8);
  *in_FS_OFFSET = piVar1;
  puStack_38 = (undefined1 *)0x5bcbcf;
  FUN_0040b140(&local_20,piVar1,uStack_3c);
  puStack_38 = (undefined1 *)0x5bcbd7;
  FUN_00407a78(&local_1c);
  puStack_38 = (undefined1 *)0x5bcbdf;
  FUN_004249e8(&local_18);
  puStack_38 = (undefined1 *)0x5bcbe7;
  FUN_00407a78(&local_8);
  return 0;
}
