// rea decompile_all
// name: FUN_00445fb4
// address: 0x445fb4
// body: available
// range: 0x445fb4-0x44600c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x445fc8 (push 0x44600d followed by fs-segment stack chaining); handler 0x44600d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00445fb4(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;

  puStack_18 = &stack0xfffffffc;
  uStack_8 = 0;
  uStack_c = 0;
  uStack_10 = 0;
  local_14 = 0;
  puStack_1c = &LAB_0044600d;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_0042e108(*(undefined4 *)(in_stack_00000004 + -0x10),*(undefined4 *)(in_stack_00000004 + -4),
               &local_14);
  FUN_004456f0();
  FUN_0044616c(*(undefined4 *)(in_stack_00000004 + -8),&local_14,in_stack_00000004);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00446014;
  puStack_1c = (undefined1 *)0x44600c;
  FUN_004249e8(&local_14,uStack_20,puVar1);
  return;
}
