// rea decompile_all
// name: FUN_00450d0c
// address: 0x450d0c
// body: available
// range: 0x450d0c-0x450d5b inclusive
// range: 0x450d73-0x450d7b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x450d31 (push 0x450d5c followed by fs-segment stack chaining); handler 0x450d5c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00450d0c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;

  puStack_18 = (undefined1 *)0x450d23;
  uVar1 = FUN_0043c790(&LAB_0044f1c0,1);
  puStack_1c = &LAB_00450d5c;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  uVar2 = FUN_00450e20(param_1);
  FUN_0043c80c(uVar1,uVar2);
  (**(code **)(**(int **)(param_1 + 8) + 0x3c))(*(int **)(param_1 + 8),param_2,uVar1);
  *in_FS_OFFSET = uStack_20;
  return uVar1;
}
