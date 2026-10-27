// rea decompile_all
// name: FUN_005fe2b0
// address: 0x5fe2b0
// body: available
// range: 0x5fe2b0-0x5fe342 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5fe2d0 (push 0x5fe343 followed by fs-segment stack chaining); handler 0x5fe343 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005fe2b0(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_10;
  int local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  puStack_24 = &LAB_005fe343;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_c = param_3;
  if (param_2 < 1) {
    FUN_00407eb8(param_4,0);
  }
  else {
    puStack_20 = &stack0xfffffffc;
    (**(code **)(*param_1 + 0xac))(param_1,&local_8,param_2,0);
    if (local_c == 0) {
      local_10 = param_1[0x35];
      FUN_005e02b4(&local_10);
    }
    else {
      local_10 = local_c;
    }
    FUN_005e31ac(local_8,0,param_2,param_4,local_10);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_005fe34a;
  puStack_24 = (undefined1 *)0x5fe342;
  FUN_00409ce0(&local_8,&DAT_004108f8,puVar1);
  return;
}
