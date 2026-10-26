// rea decompile_all
// name: FUN_006fbb78
// address: 0x6fbb78
// body: available
// range: 0x6fbb78-0x6fbc6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6fbb8d (push 0x6fbc6f followed by fs-segment stack chaining); handler 0x6fbc6f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006fbb78(undefined4 param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_006fbc6f;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar3 = FUN_00514e78(&PTR_LAB_006fa9cc,1,0);
  FUN_006dfbf0(*(undefined4 *)PTR_DAT_00781a58,iVar3);
  uVar4 = FUN_006fce68(param_1);
  *(undefined4 *)(iVar3 + 1000) = uVar4;
  *(undefined4 *)(iVar3 + 0x3f8) = param_1;
  uVar4 = FUN_005a8760(&DAT_005a6628,1);
  *(undefined4 *)(iVar3 + 0x3ec) = uVar4;
  FUN_005a87ec(uVar4,*(undefined4 *)(iVar3 + 1000));
  FUN_006fcc58(param_1,&local_8);
  FUN_00407eb8(iVar3 + 0x3f0,local_8);
  *(undefined1 *)(iVar3 + 0x3f4) = 0;
  uVar4 = FUN_006fb55c();
  piVar1 = *(int **)(*(int *)(iVar3 + 0x39c) + 0x2ac);
  (**(code **)(*piVar1 + 8))(piVar1,uVar4);
  FUN_00405a7c(uVar4);
  FUN_006fbc80(iVar3);
  *(undefined4 *)(iVar3 + 0x2b8) = 2;
  FUN_004ee6d8(*(undefined4 *)(iVar3 + 0x3d4),*(undefined4 *)PTR_DAT_00782234);
  FUN_004ee6d8(*(undefined4 *)(iVar3 + 0x3d8),*(undefined4 *)PTR_DAT_00782234);
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_006fbc76;
  puStack_1c = (undefined1 *)0x6fbc6e;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar2);
  return;
}
