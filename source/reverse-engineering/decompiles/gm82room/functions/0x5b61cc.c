// rea decompile_all
// name: FUN_005b61cc
// address: 0x5b61cc
// body: available
// range: 0x5b61cc-0x5b62af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5b61fc (push 0x5b62b0 followed by fs-segment stack chaining); handler 0x5b62b0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b61cc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;

  puStack_18 = (undefined1 *)0x5b61e4;
  local_c = param_2;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_18 = (undefined1 *)0x5b61ec;
  thunk_FUN_00407ad0(local_c);
  puStack_1c = &LAB_005b62b0;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  DAT_0084f044[3] = 0;
  puStack_18 = &stack0xfffffffc;
  FUN_004bb690(DAT_0084f044[0xe3],local_8);
  FUN_004bb578(DAT_0084f048,0);
  FUN_005b5a54(DAT_0084f04c,&PTR_DAT_005b62cc);
  FUN_004bb578(DAT_0084f04c,1);
  FUN_004bb578(DAT_0084f050,0);
  FUN_004bb690(DAT_0084f044[0xe5],local_c);
  FUN_004bb578(DAT_0084f044[0xe5],1);
  FUN_005b5b30(DAT_0084f044);
  FUN_00477a54(DAT_0084f044[0xe5]);
  (**(code **)(*DAT_0084f044 + 0x110))();
  FUN_004bb658(DAT_0084f044[0xe5],param_3);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_005b62b7;
  puStack_1c = (undefined1 *)0x5b62af;
  thunk_FUN_004072fc(&local_c,2,puVar1);
  return;
}
