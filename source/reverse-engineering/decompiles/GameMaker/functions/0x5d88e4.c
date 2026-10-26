// rea decompile_all
// name: FUN_005d88e4
// address: 0x5d88e4
// body: available
// range: 0x5d88e4-0x5d8931 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d8903 (push 0x5d8932 followed by fs-segment stack chaining); handler 0x5d8932 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d88e4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;

  puStack_24 = &stack0xfffffffc;
  uStack_8 = 0;
  uStack_c = 0;
  uStack_10 = 0;
  local_14 = 0;
  puStack_28 = &LAB_005d8932;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  FUN_005d8940(param_1,param_2,&local_14);
  FUN_00429418(param_3,&local_14);
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_005d8939;
  puStack_28 = (undefined1 *)0x5d8931;
  FUN_004249e8(&local_14,uStack_2c,puVar1);
  return;
}
