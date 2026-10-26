// rea decompile_all
// name: FUN_00448880
// address: 0x448880
// body: available
// range: 0x448880-0x4488dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44889d (push 0x4488dd followed by fs-segment stack chaining); handler 0x4488dd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00448880(undefined4 *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;

  puStack_10 = (undefined1 *)0x448892;
  local_8 = param_2;
  FUN_0040b1b4(param_2);
  puStack_14 = &LAB_004488dd;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  param_1[8] = param_1;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  puStack_10 = &stack0xfffffffc;
  FUN_0040b158(param_1 + 0xc,local_8);
  FUN_00448688(*param_1,param_1 + 8,0);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004488e4;
  puStack_14 = (undefined1 *)0x4488dc;
  FUN_0040b140(&local_8,uStack_18,puVar1);
  return;
}
