// rea decompile_all
// name: FUN_005bf400
// address: 0x5bf400
// body: available
// range: 0x5bf400-0x5bf455 inclusive
// range: 0x5bf45b-0x5bf474 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5bf41f (push 0x5bf456 followed by fs-segment stack chaining); handler 0x5bf456 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005bf400(void)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 uVar3;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  int *local_8;

  local_8 = (int *)0x0;
  uStack_18 = 0x5bf413;
  FUN_0042bcec(&stack0x00000008);
  uVar1 = in_stack_0000000c;
  uStack_18 = in_stack_00000004;
  puStack_20 = &LAB_005bf456;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  uVar3 = in_stack_00000014;
  puStack_1c = &stack0xfffffffc;
  FUN_005be09c(in_stack_00000004,&local_8);
  piVar2 = local_8;
  (**(code **)(*local_8 + 0x108))();
  FUN_0040b250();
  *in_FS_OFFSET = piVar2;
  FUN_0040b140(&local_8,piVar2,uVar1,uVar3);
  FUN_004249e8(&stack0x00000008);
  return 0;
}
