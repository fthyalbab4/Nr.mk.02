// rea decompile_all
// name: FUN_005bcd88
// address: 0x5bcd88
// body: available
// range: 0x5bcd88-0x5bce30 inclusive
// range: 0x5bce36-0x5bce6d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5bcdb0 (push 0x5bce31 followed by fs-segment stack chaining); handler 0x5bce31 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005bcd88(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 *in_stack_00000010;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_30 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = (int *)0x0;
  local_1c = (int *)0x0;
  if (in_stack_00000010 != (undefined4 *)0x0) {
    *in_stack_00000010 = 0;
  }
  uStack_2c = in_stack_00000004;
  puStack_34 = &LAB_005bce31;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  FUN_0040b140(&local_c);
  FUN_00408144(&local_10,in_stack_00000008);
  FUN_00408144(&local_14,in_stack_0000000c);
  uVar2 = FUN_0040b140(&local_18);
  FUN_005bca94(in_stack_00000004,&local_1c);
  (**(code **)(*local_1c + 0x44))();
  FUN_0040b250();
  piVar1 = local_18;
  (**(code **)(*local_18 + 0x30))();
  FUN_0040b250();
  FUN_005ba93c(local_c,&local_8);
  FUN_0040b184(in_stack_00000010,local_8,&DAT_005bce70);
  *in_FS_OFFSET = piVar1;
  FUN_0040b140(&local_1c,piVar1,uVar2);
  FUN_0040b140(&local_18);
  FUN_00407a90(&local_14,2);
  FUN_0040b140(&local_c);
  FUN_0040b140(&local_8);
  return 0;
}
