// rea decompile_all
// name: FUN_006134c8
// address: 0x6134c8
// body: available
// range: 0x6134c8-0x613541 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6134f5 (push 0x613542 followed by fs-segment stack chaining); handler 0x613542 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006134c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = (undefined1 *)0x6134e7;
  local_8 = param_3;
  local_c = FUN_00405a4c(&LAB_00433630,1);
  puStack_20 = &LAB_00613542;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  if (param_4 == 0) {
    puStack_1c = &stack0xfffffffc;
    param_4 = FUN_005e02c8(1);
  }
  FUN_005e3478(local_c,param_2,param_4);
  FUN_0043f254(local_c);
  FUN_00613660(param_1,local_c,local_8);
  puVar1 = puStack_20;
  *in_FS_OFFSET = 0xffffffff;
  puStack_20 = &LAB_00613549;
  uStack_24 = 0x613541;
  FUN_0041ef80(&local_c,0xffffffff,puVar1);
  return;
}
