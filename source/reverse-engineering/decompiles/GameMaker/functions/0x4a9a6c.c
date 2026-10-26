// rea decompile_all
// name: FUN_004a9a6c
// address: 0x4a9a6c
// body: available
// range: 0x4a9a6c-0x4a9b56 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4a9a8d (push 0x4a9b57 followed by fs-segment stack chaining); handler 0x4a9b57 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a9a6c(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar5;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  int local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined4 local_24 [5];
  undefined4 local_10;
  int local_8;

  puStack_50 = &stack0xfffffffc;
  local_28 = 0;
  local_3c = 0;
  local_40 = 0;
  puStack_54 = &LAB_004a9b57;
  uStack_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_58;
  local_24[0] = 2;
  iVar2 = (**(code **)(*(int *)param_1[0xa4] + 0x14))();
  if (-1 < iVar2 + -1) {
    iVar4 = 0;
    local_8 = iVar2;
    do {
      local_10 = (**(code **)(*param_1 + 0xf4))(param_1,iVar4);
      puVar5 = local_24;
      uVar3 = FUN_004f76a8(param_1);
      iVar2 = FUN_0040efb8(uVar3,0x133d,iVar4,puVar5);
      if (iVar2 == 0) {
        puVar5 = &local_28;
        (**(code **)(*(int *)param_1[0xa4] + 0xc))((int *)param_1[0xa4],iVar4,&local_3c,puVar5);
        local_38 = local_3c;
        local_34 = 0x11;
        local_2c = 0;
        local_30 = iVar4;
        FUN_0040b75c(PTR_PTR_00782550,&local_40);
        FUN_00417d4c(local_40,&local_38,1,puVar5);
        FUN_004a8be8(local_28);
      }
      iVar4 = iVar4 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  FUN_004a99f0(param_1);
  puVar1 = puStack_50;
  *in_FS_OFFSET = uStack_58;
  puStack_50 = &LAB_004a9b5e;
  puStack_54 = (undefined1 *)0x4a9b4e;
  thunk_FUN_00406e80(&local_40,2,puVar1);
  puStack_54 = (undefined1 *)0x4a9b56;
  thunk_FUN_00406e5c(&local_28);
  return;
}
