// rea decompile_all
// name: FUN_00644788
// address: 0x644788
// body: available
// range: 0x644788-0x64480d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6447a6 (push 0x64480e followed by fs-segment stack chaining); handler 0x64480e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00644788(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_00000004;
  int in_stack_0000000c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_24 = &LAB_0064480e;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_004083c0(&local_c,*(undefined4 *)(in_stack_0000000c + 0x10));
  FUN_00561280(local_c,&local_8);
  *in_stack_00000004 = 1;
  FUN_004083c0(&local_14,*(undefined4 *)(in_stack_0000000c + 0x28));
  FUN_005b61cc(local_8,local_14,&local_10);
  FUN_004083e8(in_stack_00000004 + 4,local_10,0xfde9);
  FUN_005f6964();
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00644815;
  puStack_24 = (undefined1 *)0x64480d;
  thunk_FUN_004072fc(&local_14,4,puVar1);
  return;
}
