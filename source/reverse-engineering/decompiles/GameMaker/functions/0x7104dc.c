// rea decompile_all
// name: FUN_007104dc
// address: 0x7104dc
// body: available
// range: 0x7104dc-0x710529 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x7104fc (push 0x71052a followed by fs-segment stack chaining); handler 0x71052a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_007104dc(int param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = (undefined1 *)0x7104f1;
  local_8 = param_3;
  thunk_FUN_00407660(param_3);
  puStack_18 = &LAB_0071052a;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  if ((-1 < param_2) && (puStack_14 = &stack0xfffffffc, param_2 < 8)) {
    puStack_14 = &stack0xfffffffc;
    FUN_00407eb8(param_1 + 0x4c + param_2 * 4,local_8);
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00710531;
  puStack_18 = (undefined1 *)0x710529;
  thunk_FUN_00406e5c(&local_8,uStack_1c,puVar1);
  return;
}
