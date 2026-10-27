// rea decompile_all
// name: FUN_005f68f0
// address: 0x5f68f0
// body: available
// range: 0x5f68f0-0x5f6989 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f690b (push 0x5f698a followed by fs-segment stack chaining); handler 0x5f698a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f68f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  int local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_005f698a;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_00415dd0(param_4,&local_8);
  if (local_8 == 0) {
    FUN_00407f0c(&local_8,L"255.255.255.255");
  }
  else {
    FUN_005f407c(*(undefined4 *)PTR_DAT_007826d0,local_8,*(undefined1 *)(param_1 + 0x29),&local_c);
    FUN_00407f0c(&local_8,local_c);
  }
  FUN_005f6a38(param_1,1);
  FUN_005f66e4(param_1,local_8,param_3,0,param_2);
  FUN_005f69c8(param_1);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_005f6991;
  puStack_20 = (undefined1 *)0x5f6989;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
