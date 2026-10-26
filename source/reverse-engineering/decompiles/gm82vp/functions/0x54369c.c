// rea decompile_all
// name: FUN_0054369c
// address: 0x54369c
// body: available
// range: 0x54369c-0x5436f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5436b4 (push 0x5436f5 followed by fs-segment stack chaining); handler 0x5436f5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054369c(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_005436f5;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_005431f8(param_2,&local_8);
  uVar2 = local_8;
  FUN_005431f8(param_1,&local_c);
  FUN_00408d44(local_c,uVar2);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_005436fc;
  puStack_1c = (undefined1 *)0x5436f4;
  thunk_FUN_004072fc(&local_c,2,puVar1);
  return;
}
