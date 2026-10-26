// rea decompile_all
// name: FUN_005bc98c
// address: 0x5bc98c
// body: available
// range: 0x5bc98c-0x5bc9f1 inclusive
// range: 0x5bc9f7-0x5bca11 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5bc9b3 (push 0x5bc9f2 followed by fs-segment stack chaining); handler 0x5bc9f2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005bc98c(void)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  int *local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;

  puStack_2c = &stack0xfffffffc;
  uStack_8 = 0;
  uStack_c = 0;
  uStack_10 = 0;
  local_14 = 0;
  local_18 = (int *)0x0;
  if (in_stack_00000008 != (undefined4 *)0x0) {
    *in_stack_00000008 = 0;
  }
  uStack_28 = in_stack_00000004;
  puStack_30 = &LAB_005bc9f2;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  FUN_004249e8(&local_14);
  FUN_005bc7d8(in_stack_00000004,&local_18);
  piVar1 = local_18;
  (**(code **)(*local_18 + 0xb0))();
  FUN_0040b250();
  FUN_00429418(in_stack_00000008,&local_14);
  *in_FS_OFFSET = piVar1;
  puStack_30 = (undefined1 *)0x5bc9ff;
  FUN_0040b140(&local_18,piVar1,uStack_34);
  puStack_30 = (undefined1 *)0x5bca07;
  FUN_004249e8(&local_14);
  return 0;
}
