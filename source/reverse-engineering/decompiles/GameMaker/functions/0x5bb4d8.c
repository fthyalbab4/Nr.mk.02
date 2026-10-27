// rea decompile_all
// name: FUN_005bb4d8
// address: 0x5bb4d8
// body: available
// range: 0x5bb4d8-0x5bb547 inclusive
// range: 0x5bb54d-0x5bb55f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5bb4fe (push 0x5bb548 followed by fs-segment stack chaining); handler 0x5bb548 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005bb4d8(void)

{
  int *piVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int iStack_24;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;

  puStack_28 = &stack0xfffffffc;
  uStack_8 = 0;
  uStack_c = 0;
  uStack_10 = 0;
  local_14 = 0;
  if (in_stack_00000008 != (undefined4 *)0x0) {
    *in_stack_00000008 = 0;
  }
  iStack_24 = in_stack_00000004;
  puStack_2c = &LAB_005bb548;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  FUN_004249e8(&local_14);
  piVar1 = *(int **)(in_stack_00000004 + 0xc);
  (**(code **)(*piVar1 + 0x20))();
  FUN_0040b250();
  cVar2 = FUN_0042c1e8(&local_14);
  if (cVar2 == '\0') {
    FUN_00429418(in_stack_00000008,&local_14);
  }
  else {
    FUN_00407eb8(in_stack_00000008,0);
  }
  *in_FS_OFFSET = piVar1;
  puStack_2c = (undefined1 *)0x5bb555;
  FUN_004249e8(&local_14,piVar1,uStack_30);
  return 0;
}
