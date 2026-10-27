// rea decompile_all
// name: FUN_006fc3e0
// address: 0x6fc3e0
// body: available
// range: 0x6fc3e0-0x6fc4ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6fc3fa (push 0x6fc4cb followed by fs-segment stack chaining); handler 0x6fc4cb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006fc3e0(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int *local_c;
  undefined4 local_8;

  puStack_28 = &stack0xfffffffc;
  local_8 = 0;
  local_c = (int *)0x0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_2c = &LAB_006fc4cb;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  FUN_004ee6a0(*(undefined4 *)(param_1 + 0x3d4),&local_14);
  FUN_00407eb8(PTR_DAT_00782234,local_14);
  local_c = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
  iVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x3d4) + 0x2a0) + 0x14))();
  if (-1 < iVar3 + -1) {
    local_10 = 0;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x3d4) + 0x2a0);
      (**(code **)(*piVar1 + 0xc))(piVar1,local_10,&local_18);
      FUN_005a798c(local_18,*(undefined4 *)(param_1 + 1000),&local_8);
      (**(code **)(*local_c + 0x38))(local_c,local_8);
      local_10 = local_10 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  (**(code **)(**(int **)(*(int *)(param_1 + 0x3d8) + 0x2a0) + 0x44))();
  piVar1 = *(int **)(*(int *)(param_1 + 0x3d8) + 0x2a0);
  (**(code **)(*piVar1 + 0x40))(piVar1,local_c);
  puVar2 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_006fc4d2;
  puStack_2c = (undefined1 *)0x6fc4ba;
  thunk_FUN_00406e5c(&local_18,uStack_30,puVar2);
  puStack_2c = (undefined1 *)0x6fc4c2;
  thunk_FUN_00406e5c(&local_14);
  puStack_2c = (undefined1 *)0x6fc4ca;
  thunk_FUN_00406e5c(&local_8);
  return;
}
