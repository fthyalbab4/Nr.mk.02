// rea decompile_all
// name: FUN_005f4600
// address: 0x5f4600
// body: available
// range: 0x5f4600-0x5f4666 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f4615 (push 0x5f4667 followed by fs-segment stack chaining); handler 0x5f4667 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f4600(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  uStack_c = 0;
  uStack_10 = 0;
  uStack_14 = 0;
  local_18 = 0;
  puStack_20 = &LAB_005f4667;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_005ee9c0(*(undefined4 *)(in_stack_00000004 + -4),&local_18);
  FUN_00429910(&local_8,&local_18);
  FUN_0040b2ac(*(int *)(in_stack_00000004 + -4) + 0x3f0,local_8,&DAT_005f4674);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_005f466e;
  puStack_20 = (undefined1 *)0x5f465e;
  FUN_00424ac8(&local_18,uStack_24,puVar1);
  puStack_20 = (undefined1 *)0x5f4666;
  FUN_0040b268(&local_8);
  return;
}
