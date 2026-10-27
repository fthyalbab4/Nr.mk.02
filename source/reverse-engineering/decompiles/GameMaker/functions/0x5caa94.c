// rea decompile_all
// name: FUN_005caa94
// address: 0x5caa94
// body: available
// range: 0x5caa94-0x5caae6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5caab3 (push 0x5caae7 followed by fs-segment stack chaining); handler 0x5caae7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005caa94(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int *local_10;
  undefined4 local_c;

  puStack_1c = &stack0xfffffffc;
  local_10 = (int *)0x0;
  puStack_20 = &LAB_005caae7;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_c = param_3;
  FUN_005cae94(param_1,&local_10);
  (**(code **)(*local_10 + 0x6c))(local_10,param_2,0xffffffff);
  puVar1 = puStack_20;
  *in_FS_OFFSET = param_3;
  puStack_20 = &LAB_005caaee;
  uStack_24 = 0x5caae6;
  FUN_0040b140(&local_10,param_3,puVar1);
  return;
}
