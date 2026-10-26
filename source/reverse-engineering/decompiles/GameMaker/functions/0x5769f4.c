// rea decompile_all
// name: FUN_005769f4
// address: 0x5769f4
// body: available
// range: 0x5769f4-0x576abb inclusive
// range: 0x576ac3-0x576ae1 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x576a16 (push 0x576ae2 followed by fs-segment stack chaining); handler 0x576ae2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x576a54 (push 0x576abc followed by fs-segment stack chaining); handler 0x576abc lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005769f4(int param_1,int *param_2,char param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  int local_10;
  undefined1 local_9;
  int *local_8;

  puStack_20 = &stack0xfffffffc;
  local_14 = 0;
  local_10 = 0;
  puStack_24 = &LAB_00576ae2;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puVar2 = &stack0xfffffffc;
  local_8 = param_2;
  if (*(short *)(param_1 + 0x3a2) != 0) {
    puStack_2c = (undefined1 *)0x576a37;
    FUN_00575f30(param_1,*(undefined4 *)(param_1 + 0x28c),&local_10);
    puVar2 = puStack_20;
    if (local_10 != 0) {
      puStack_2c = (undefined1 *)0x576a49;
      FUN_0043d354(local_8);
      puStack_30 = &LAB_00576abc;
      uStack_34 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_34;
      puStack_2c = &stack0xfffffffc;
      if (param_3 != '\0') {
        puStack_2c = &stack0xfffffffc;
        (**(code **)(*local_8 + 0x44))();
      }
      piVar1 = local_8;
      FUN_00575f30(param_1,*(undefined4 *)(param_1 + 0x28c),&local_14);
      (**(code **)(param_1 + 0x3a0))(*(undefined4 *)(param_1 + 0x3a4),param_1,local_14);
      iVar3 = (**(code **)(*local_8 + 0x14))();
      puVar2 = puStack_30;
      local_9 = 0 < iVar3;
      *(undefined1 *)(*(int *)(param_1 + 0x398) + 0x2df) = local_9;
      *in_FS_OFFSET = piVar1;
      puStack_30 = (undefined1 *)0x576ac7;
      uStack_34 = 0x576abb;
      FUN_0043d41c(local_8,piVar1,puVar2);
      return;
    }
  }
  puStack_20 = puVar2;
  puVar2 = puStack_20;
  local_9 = 0;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00576ae9;
  puStack_24 = (undefined1 *)0x576ae1;
  thunk_FUN_00406e80(&local_14,2,puVar2);
  return;
}
