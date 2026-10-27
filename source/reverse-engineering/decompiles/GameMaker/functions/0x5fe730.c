// rea decompile_all
// name: FUN_005fe730
// address: 0x5fe730
// body: available
// range: 0x5fe730-0x5fe7a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5fe74a (push 0x5fe7a7 followed by fs-segment stack chaining); handler 0x5fe7a7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005fe730(int *param_1,char param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  puStack_24 = &LAB_005fe7a7;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  (**(code **)(*param_1 + 0xac))(param_1,&local_8,8);
  FUN_005e2d10(local_8,0);
  if (param_2 != '\0') {
    (**(code **)(**(int **)PTR_DAT_007826d0 + 0x5c))();
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = 0;
  puStack_24 = &LAB_005fe7ae;
  uStack_28 = 0x5fe7a6;
  FUN_00409ce0(&local_8,&DAT_004108f8,puVar1);
  return;
}
