// rea decompile_all
// name: FUN_0047fcb8
// address: 0x47fcb8
// body: available
// range: 0x47fcb8-0x47fd2a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x47fcd0 (push 0x47fd2b followed by fs-segment stack chaining); handler 0x47fd2b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047fcb8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar2;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  uVar2 = 1;
  puStack_1c = &LAB_0047fd2b;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00408350(&local_8,param_3);
  FUN_0040891c(*(undefined4 *)(param_1 + 8),local_8);
  if (((bool)uVar2) && (*(int *)(param_1 + 0xc) != 0)) {
    FUN_00408350(&local_c,param_4);
    FUN_0040891c(*(undefined4 *)(param_1 + 0xc),local_c);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0047fd32;
  puStack_1c = (undefined1 *)0x47fd2a;
  thunk_FUN_004072fc(&local_c,2,puVar1);
  return;
}
