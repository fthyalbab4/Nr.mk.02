// rea decompile_all
// name: FUN_005d41b8
// address: 0x5d41b8
// body: available
// range: 0x5d41b8-0x5d421f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d41d5 (push 0x5d4220 followed by fs-segment stack chaining); handler 0x5d4220 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d41b8(int param_1,int param_2)

{
  undefined1 *puVar1;
  int *in_FS_OFFSET;
  int iStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int local_8;

  puStack_10 = (undefined1 *)0x5d41ca;
  local_8 = param_2;
  FUN_0040b1b4(param_2);
  puStack_14 = &LAB_005d4220;
  iStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_18;
  puStack_10 = &stack0xfffffffc;
  if (*(int *)(param_1 + 0xc) != 0) {
    iStack_1c = 0x5d41e5;
    puStack_10 = &stack0xfffffffc;
    FUN_005d423c(param_1);
  }
  if (local_8 != 0) {
    iStack_1c = param_1 + 0x10;
    FUN_005b6718(local_8,&DAT_005d422c,*(undefined4 *)(param_1 + 0x14));
  }
  FUN_0040b158(param_1 + 0xc,local_8);
  puVar1 = puStack_14;
  *in_FS_OFFSET = iStack_1c;
  puStack_14 = &LAB_005d4227;
  iStack_18 = 0x5d421f;
  FUN_0040b140(&local_8,iStack_1c,puVar1);
  return;
}
