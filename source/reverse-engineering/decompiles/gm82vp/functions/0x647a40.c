// rea decompile_all
// name: FUN_00647a40
// address: 0x647a40
// body: available
// range: 0x647a40-0x647ab7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x647a5c (push 0x647ab8 followed by fs-segment stack chaining); handler 0x647ab8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00647a40(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_00000004;
  int in_stack_0000000c;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_00647ab8;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  *in_stack_00000004 = 0;
  FUN_004083c0(&local_8,*(undefined4 *)(in_stack_0000000c + 0x40));
  uVar2 = local_8;
  uVar4 = FUN_004048b8();
  FUN_004083c0(&local_c,*(undefined4 *)(in_stack_0000000c + 0x10));
  cVar3 = FUN_0062a400(local_c,uVar4,uVar2);
  puVar1 = puStack_1c;
  *(double *)(in_stack_00000004 + 2) = (double)(int)cVar3;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00647abf;
  puStack_20 = (undefined1 *)0x647ab7;
  thunk_FUN_004072fc(&local_c,2,puVar1);
  return;
}
