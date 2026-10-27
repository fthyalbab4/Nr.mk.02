// rea decompile_all
// name: FUN_0062a350
// address: 0x62a350
// body: available
// range: 0x62a350-0x62a3e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x62a36d (push 0x62a3e8 followed by fs-segment stack chaining); handler 0x62a3e8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062a350(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_1c [2];
  undefined4 local_14;
  undefined4 local_c;
  undefined4 local_8;

  puStack_24 = (undefined1 *)0x62a362;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_28 = &LAB_0062a3e8;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  FUN_00404f38(local_1c,0x10,0);
  local_1c[0] = 0x10;
  local_14 = FUN_00408220(local_8);
  if (DAT_006887e4 != (int *)0x0) {
    iVar2 = (**(code **)(*DAT_006887e4 + 0x18))();
    if (iVar2 == 0) {
      FUN_00408194(&DAT_006887ec,local_8);
      DAT_006887e8 = local_c;
    }
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0062a3ef;
  puStack_28 = (undefined1 *)0x62a3e7;
  thunk_FUN_004072d8(&local_8,uStack_2c,puVar1);
  return;
}
