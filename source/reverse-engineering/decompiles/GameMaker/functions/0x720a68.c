// rea decompile_all
// name: FUN_00720a68
// address: 0x720a68
// body: available
// range: 0x720a68-0x720b39 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x720a80 (push 0x720b3a followed by fs-segment stack chaining); handler 0x720b3a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00720a68(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_24 = &LAB_00720b3a;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_0041666c(*(undefined4 *)(param_1 + 0x460),&local_c,0,L"Area: (");
  FUN_0041666c(*(undefined4 *)(param_1 + 0x464),&local_10);
  FUN_0041666c(*(int *)(*(int *)(param_1 + 0x40c) + 0x48) + *(int *)(param_1 + 0x460),&local_14);
  puVar3 = &DAT_00720b70;
  uVar4 = local_14;
  FUN_0041666c(*(int *)(*(int *)(param_1 + 0x40c) + 0x4c) + *(int *)(param_1 + 0x464),&local_18);
  FUN_00408480(&local_8,9);
  uVar1 = local_8;
  uVar2 = FUN_004ab8a8(*(undefined4 *)(*(int *)(param_1 + 0x408) + 0x270),2);
  FUN_004ab804(uVar2,uVar1);
  *in_FS_OFFSET = &LAB_00720b98;
  thunk_FUN_00406e80(&local_18,5,puVar3,&LAB_00720b41,uVar4);
  return;
}
