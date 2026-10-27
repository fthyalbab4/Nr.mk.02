// rea decompile_all
// name: FUN_005de6c0
// address: 0x5de6c0
// body: available
// range: 0x5de6c0-0x5de709 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5de6d3 (push 0x5de70a followed by fs-segment stack chaining); handler 0x5de70a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005de6c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int *local_8;

  puStack_10 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  puStack_14 = &LAB_005de70a;
  puStack_18 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_18;
  FUN_005de2f8(param_1,&local_8,param_3,PTR_DAT_007818c4);
  piVar2 = local_8;
  (**(code **)(*local_8 + 0x34))();
  FUN_0040b250();
  puVar1 = puStack_18;
  *in_FS_OFFSET = piVar2;
  puStack_18 = &LAB_005de711;
  FUN_0040b140(&local_8,piVar2,puVar1);
  return;
}
