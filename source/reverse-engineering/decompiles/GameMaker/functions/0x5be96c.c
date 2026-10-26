// rea decompile_all
// name: FUN_005be96c
// address: 0x5be96c
// body: available
// range: 0x5be96c-0x5be9e0 inclusive
// range: 0x5be9e6-0x5bea08 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5be992 (push 0x5be9e1 followed by fs-segment stack chaining); handler 0x5be9e1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005be96c(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000004;
  undefined4 *in_stack_00000008;
  int *piVar2;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  int *local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = (int *)0x0;
  if (in_stack_00000008 != (undefined4 *)0x0) {
    *in_stack_00000008 = 0;
  }
  uStack_20 = in_stack_00000004;
  puStack_28 = &LAB_005be9e1;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  uVar1 = FUN_0040b140(&local_c);
  FUN_005be09c(in_stack_00000004,&local_10);
  piVar2 = local_10;
  (**(code **)(*local_10 + 0xb4))();
  FUN_0040b250();
  FUN_005ba93c(local_c,&local_8);
  FUN_0040b184(in_stack_00000008,local_8,&DAT_005bea0c,piVar2,uVar1);
  *in_FS_OFFSET = piVar2;
  puStack_28 = (undefined1 *)0x5be9ee;
  FUN_0040b140(&local_10,piVar2,uStack_2c);
  puStack_28 = (undefined1 *)0x5be9f6;
  FUN_0040b140(&local_c);
  puStack_28 = (undefined1 *)0x5be9fe;
  FUN_0040b140(&local_8);
  return 0;
}
