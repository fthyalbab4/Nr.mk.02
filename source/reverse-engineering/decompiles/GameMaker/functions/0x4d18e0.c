// rea decompile_all
// name: FUN_004d18e0
// address: 0x4d18e0
// body: available
// range: 0x4d18e0-0x4d1933 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d18f3 (push 0x4d1934 followed by fs-segment stack chaining); handler 0x4d1934 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d18e0(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int *local_8;

  puStack_10 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  puStack_14 = &LAB_004d1934;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  uVar3 = FUN_0040b140(&local_8);
  cVar2 = FUN_0041ef90(*(undefined4 *)(param_1 + 0x40),&LAB_004d1940,uVar3);
  if (cVar2 != '\0') {
    (**(code **)(*local_8 + 0xc))();
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004d193b;
  puStack_14 = (undefined1 *)0x4d1933;
  FUN_0040b140(&local_8,uStack_18,puVar1);
  return;
}
