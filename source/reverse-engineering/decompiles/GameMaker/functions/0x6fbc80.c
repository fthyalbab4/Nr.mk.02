// rea decompile_all
// name: FUN_006fbc80
// address: 0x6fbc80
// body: available
// range: 0x6fbc80-0x6fbe74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6fbc99 (push 0x6fbe75 followed by fs-segment stack chaining); handler 0x6fbe75 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006fbc80(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_28 = &LAB_006fbe75;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  FUN_006fcc58(*(undefined4 *)(param_1 + 0x3f8),&local_8);
  FUN_004ee6d8(*(undefined4 *)(param_1 + 0x390),local_8);
  FUN_004ee6a0(*(undefined4 *)(param_1 + 0x390),&local_10);
  FUN_0040839c(&local_c,L"Font Properties: ",local_10);
  FUN_004ee6d8(param_1,local_c);
  piVar1 = *(int **)(*(int *)(param_1 + 0x39c) + 0x2ac);
  iVar3 = (**(code **)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(*(int *)(param_1 + 1000) + 4));
  if (iVar3 < 0) {
    FUN_00407eb8(*(int *)(param_1 + 1000) + 4,L"Arial");
    piVar1 = *(int **)(*(int *)(param_1 + 0x39c) + 0x2ac);
    iVar3 = (**(code **)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(*(int *)(param_1 + 1000) + 4));
  }
  if (iVar3 < 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x39c) + 0x2ac);
    (**(code **)(*piVar1 + 0xc))(piVar1,0,&local_14);
    FUN_00407eb8(*(int *)(param_1 + 1000) + 4,local_14);
    iVar3 = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x39c) + 0xf0))(*(int **)(param_1 + 0x39c),iVar3);
  FUN_00530760(*(undefined4 *)(param_1 + 0x3a0),*(undefined4 *)(*(int *)(param_1 + 1000) + 8));
  (**(code **)(**(int **)(param_1 + 0x3a4) + 0xf0))
            (*(int **)(param_1 + 0x3a4),*(undefined1 *)(*(int *)(param_1 + 1000) + 0xc));
  (**(code **)(**(int **)(param_1 + 0x3a8) + 0xf0))
            (*(int **)(param_1 + 0x3a8),*(undefined1 *)(*(int *)(param_1 + 1000) + 0xd));
  FUN_00530760(*(undefined4 *)(param_1 + 0x3b0),*(undefined4 *)(*(int *)(param_1 + 1000) + 0x10));
  FUN_00530760(*(undefined4 *)(param_1 + 0x3b4),*(undefined4 *)(*(int *)(param_1 + 1000) + 0x14));
  uVar4 = FUN_005a86b4(*(undefined4 *)(param_1 + 1000));
  FUN_004ee79c(*(undefined4 *)(param_1 + 0x3d8),uVar4);
  uVar4 = FUN_006fba7c(*(undefined4 *)(*(int *)(param_1 + 1000) + 0x18));
  (**(code **)(**(int **)(param_1 + 0x3d0) + 0xf0))(*(int **)(param_1 + 0x3d0),uVar4);
  uVar4 = (**(code **)(**(int **)(param_1 + 0x3d0) + 0xec))();
  FUN_006fb59c(uVar4,&local_18);
  FUN_004ee6d8(*(undefined4 *)(param_1 + 0x3dc),local_18);
  (**(code **)(**(int **)(param_1 + 0x3e0) + 0xf0))
            (*(int **)(param_1 + 0x3e0),*(undefined4 *)(*(int *)(param_1 + 1000) + 0x1c));
  puVar2 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_006fbe7c;
  puStack_28 = (undefined1 *)0x6fbe5f;
  thunk_FUN_00406e80(&local_18,2,puVar2);
  puStack_28 = (undefined1 *)0x6fbe67;
  thunk_FUN_00406e5c(&local_10);
  puStack_28 = (undefined1 *)0x6fbe74;
  thunk_FUN_00406e80(&local_c,2);
  return;
}
