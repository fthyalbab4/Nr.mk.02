// rea decompile_all
// name: FUN_00635008
// address: 0x635008
// body: available
// range: 0x635008-0x635080 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x635022 (push 0x635081 followed by fs-segment stack chaining); handler 0x635081 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00635008(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *in_FS_OFFSET;
  undefined4 *in_stack_00000004;
  int in_stack_0000000c;
  int iStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_00635081;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  *in_stack_00000004 = 1;
  FUN_004083c0(&local_8,*(undefined4 *)(in_stack_0000000c + 0x10));
  uVar2 = FUN_004048b8();
  uVar3 = FUN_004048b8();
  FUN_00408984(local_8,uVar3,uVar2);
  FUN_004083e8(in_stack_00000004 + 4,local_c,0xfde9);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = (int)&local_c;
  puStack_1c = &LAB_00635088;
  iStack_20 = 0x635080;
  thunk_FUN_004072fc(&local_c,2,puVar1);
  return;
}
