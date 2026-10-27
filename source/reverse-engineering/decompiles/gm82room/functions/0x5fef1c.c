// rea decompile_all
// name: FUN_005fef1c
// address: 0x5fef1c
// body: available
// range: 0x5fef1c-0x5fef87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5fef3a (push 0x5fef88 followed by fs-segment stack chaining); handler 0x5fef88 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005fef1c(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_00000004;
  int in_stack_0000000c;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_005fef88;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  *in_stack_00000004 = 0;
  uVar2 = FUN_004048b8();
  uVar3 = FUN_004048b8();
  FUN_004083c0(&local_8,*(undefined4 *)(in_stack_0000000c + 0x10));
  iVar4 = FUN_005fc534(local_8,uVar3,uVar2);
  puVar1 = puStack_18;
  *(double *)(in_stack_00000004 + 2) = (double)iVar4;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_005fef8f;
  puStack_1c = (undefined1 *)0x5fef87;
  thunk_FUN_004072d8(&local_8,uStack_20,puVar1);
  return;
}
