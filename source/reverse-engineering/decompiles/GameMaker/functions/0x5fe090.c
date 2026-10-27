// rea decompile_all
// name: FUN_005fe090
// address: 0x5fe090
// body: available
// range: 0x5fe090-0x5fe0fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5fe0a4 (push 0x5fe0ff followed by fs-segment stack chaining); handler 0x5fe0ff lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005fe090(int *param_1,char param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_005fe0ff;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puVar1 = &stack0xfffffffc;
  if (param_2 != '\0') {
    (**(code **)(**(int **)PTR_DAT_007826d0 + 0x34))();
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  FUN_005e28cc(&local_8);
  (**(code **)(*param_1 + 0x80))(param_1,local_8,0xffffffff);
  puVar1 = puStack_18;
  *in_FS_OFFSET = 0;
  puStack_18 = &LAB_005fe106;
  uStack_1c = 0x5fe0fe;
  FUN_00409ce0(&local_8,&DAT_004108f8,puVar1);
  return;
}
