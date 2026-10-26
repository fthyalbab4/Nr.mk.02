// rea decompile_all
// name: FUN_005fdf24
// address: 0x5fdf24
// body: available
// range: 0x5fdf24-0x5fdf98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5fdf41 (push 0x5fdf99 followed by fs-segment stack chaining); handler 0x5fdf99 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005fdf24(int *param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  int local_8;

  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_005fdf99;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar1 = &stack0xfffffffc;
  local_8 = param_3;
  if (param_3 == 0) {
    local_8 = param_1[0x35];
    FUN_005e02b4(&local_8);
    puVar1 = puStack_1c;
  }
  puStack_1c = puVar1;
  FUN_005e2834(param_2,local_8,&local_c);
  (**(code **)(*param_1 + 0x80))(param_1,local_c,0xffffffff);
  puVar1 = puStack_20;
  *in_FS_OFFSET = 0;
  puStack_20 = &LAB_005fdfa0;
  uStack_24 = 0x5fdf98;
  FUN_00409ce0(&local_c,&DAT_004108f8,puVar1);
  return;
}
