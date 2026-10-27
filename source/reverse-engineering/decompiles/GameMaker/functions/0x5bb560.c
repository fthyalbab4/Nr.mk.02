// rea decompile_all
// name: FUN_005bb560
// address: 0x5bb560
// body: available
// range: 0x5bb560-0x5bb5d9 inclusive
// range: 0x5bb5df-0x5bb5f0 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5bb582 (push 0x5bb5da followed by fs-segment stack chaining); handler 0x5bb5da lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005bb560(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int iStack_18;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  if (in_stack_00000008 != (undefined4 *)0x0) {
    *in_stack_00000008 = 0;
  }
  iStack_18 = in_stack_00000004;
  puStack_20 = &LAB_005bb5da;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar1 = &stack0xfffffffc;
  if (*(int *)(in_stack_00000004 + 0x18) == 0) {
    FUN_0040b140(&local_8);
    (**(code **)(**(int **)(in_stack_00000004 + 0xc) + 0x5c))();
    FUN_0040b250();
    iVar2 = FUN_005baf1c(&DAT_005ba790,1,local_8);
    if (iVar2 != 0) {
      iVar2 = iVar2 + 0x34;
    }
    FUN_0040b158(in_stack_00000004 + 0x18,iVar2);
    puVar1 = puStack_1c;
  }
  puStack_1c = puVar1;
  FUN_0040b158(in_stack_00000008,*(undefined4 *)(in_stack_00000004 + 0x18));
  *in_FS_OFFSET = uStack_24;
  iStack_18 = 0x5bb5e7;
  FUN_0040b140(&local_8,uStack_24,puStack_1c);
  return 0;
}
