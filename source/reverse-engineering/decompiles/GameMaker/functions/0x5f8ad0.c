// rea decompile_all
// name: FUN_005f8ad0
// address: 0x5f8ad0
// body: available
// range: 0x5f8ad0-0x5f8b80 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f8aec (push 0x5f8b81 followed by fs-segment stack chaining); handler 0x5f8b81 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f8ad0(int param_1,int *param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int extraout_ECX;
  int iVar3;
  int extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  undefined *puStackY_40;
  undefined *in_stack_ffffffc8;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_24 = &LAB_005f8b81;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if (*param_2 == -1) {
    iVar2 = param_3 + *(int *)(param_1 + 0x20);
    puStack_20 = &stack0xfffffffc;
    if (SCARRY4(param_3,*(int *)(param_1 + 0x20))) {
      puStack_20 = &stack0xfffffffc;
      FUN_00405944();
      iVar2 = extraout_ECX;
    }
    *param_2 = iVar2;
  }
  else {
    iVar2 = *param_2;
    iVar3 = param_3 + *(int *)(param_1 + 0x20);
    puVar1 = &stack0xfffffffc;
    if (SCARRY4(param_3,*(int *)(param_1 + 0x20))) {
      iVar2 = FUN_00405944();
      iVar3 = extraout_ECX_00;
      puVar1 = puStack_20;
    }
    puStack_20 = puVar1;
    if (iVar3 < iVar2) {
      FUN_0040b75c(PTR_PTR_00781950,&local_c);
      FUN_0041666c(*param_2,&local_10);
      in_stack_ffffffc8 = &DAT_005f8bb0;
      FUN_0041666c(*(undefined4 *)(param_1 + 0x20),&local_14);
      puStackY_40 = &DAT_005f8bc0;
      FUN_00408480(&local_8,6);
      FUN_005df624(&PTR_LAB_005f7d7c,local_8);
    }
  }
  *in_FS_OFFSET = puStackY_40;
  thunk_FUN_00406e80(&local_14,4,in_stack_ffffffc8,&LAB_005f8b88);
  return;
}
