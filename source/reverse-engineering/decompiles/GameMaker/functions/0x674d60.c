// rea decompile_all
// name: FUN_00674d60
// address: 0x674d60
// body: available
// range: 0x674d60-0x674db8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x674d8c (push 0x674db9 followed by fs-segment stack chaining); handler 0x674db9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00674d60(int param_1,char param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_8;

  if (param_2 != '\0') {
    puStack_24 = (undefined1 *)0x674d72;
    local_8 = param_3;
    param_1 = FUN_00405fb0();
    param_3 = extraout_ECX;
  }
  puStack_24 = (undefined1 *)0x674d81;
  local_8 = param_3;
  thunk_FUN_00407660(param_3);
  puStack_28 = &LAB_00674db9;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  FUN_00674c94(param_1,0);
  FUN_00407eb8(param_1 + 0x50,local_8);
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00674dc0;
  puStack_28 = (undefined1 *)0x674db8;
  thunk_FUN_00406e5c(&local_8,uStack_2c,puVar1);
  return;
}
