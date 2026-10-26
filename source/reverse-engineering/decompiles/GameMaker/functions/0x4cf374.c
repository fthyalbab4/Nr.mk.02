// rea decompile_all
// name: FUN_004cf374
// address: 0x4cf374
// body: available
// range: 0x4cf374-0x4cf3c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4cf391 (push 0x4cf3c8 followed by fs-segment stack chaining); handler 0x4cf3c8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004cf374(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  bool bVar2;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;

  puStack_10 = (undefined1 *)0x4cf386;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  bVar2 = true;
  puStack_14 = &LAB_004cf3c8;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_00408640(local_8,*(undefined4 *)(param_1 + 0x88));
  if (!bVar2) {
    FUN_00407eb8(param_1 + 0x88,local_8);
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004cf3cf;
  puStack_14 = (undefined1 *)0x4cf3c7;
  thunk_FUN_00406e5c(&local_8,uStack_18,puVar1);
  return;
}
