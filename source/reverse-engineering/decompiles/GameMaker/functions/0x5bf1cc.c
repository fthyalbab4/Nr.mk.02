// rea decompile_all
// name: FUN_005bf1cc
// address: 0x5bf1cc
// body: available
// range: 0x5bf1cc-0x5bf21f inclusive
// range: 0x5bf225-0x5bf237 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5bf1e9 (push 0x5bf220 followed by fs-segment stack chaining); handler 0x5bf220 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_005bf1cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  int *local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_c = (int *)0x0;
  uStack_1c = param_4;
  puStack_24 = &LAB_005bf220;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_005be09c(param_4,&local_c,param_3,&local_8);
  piVar1 = local_c;
  (**(code **)(*local_c + 0xec))();
  FUN_0040b250();
  *param_5 = local_8;
  *in_FS_OFFSET = piVar1;
  puStack_24 = (undefined1 *)0x5bf22d;
  FUN_0040b140(&local_c,piVar1,uStack_28);
  return 0;
}
