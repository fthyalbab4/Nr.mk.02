// rea decompile_all
// name: FUN_005ca074
// address: 0x5ca074
// body: available
// range: 0x5ca074-0x5ca0bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ca095 (push 0x5ca0c0 followed by fs-segment stack chaining); handler 0x5ca0c0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ca074(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;

  puStack_10 = &stack0xfffffffc;
  piVar1 = *(int **)(param_1 + 0x3c);
  piVar1[0xe] = 0;
  piVar1[0xf] = 0;
  puStack_14 = &LAB_005ca0c0;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  (**(code **)(*piVar1 + 0x2c))();
  *in_FS_OFFSET = uStack_18;
  iVar2 = *(int *)(param_1 + 0x3c);
  *(int *)(iVar2 + 0x3c) = param_1;
  *(undefined1 **)(iVar2 + 0x38) = &LAB_005ca048;
  return;
}
