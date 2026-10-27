// rea decompile_all
// name: FUN_00597b60
// address: 0x597b60
// body: available
// range: 0x597b60-0x597c6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x597b7f (push 0x597c6c followed by fs-segment stack chaining); handler 0x597c6c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00597b60(int *param_1,int *param_2,int param_3,int *param_4,int param_5)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int *in_FS_OFFSET;
  int iStack_30;
  int iStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_18;
  int local_14;
  int local_10;
  int *local_c;

  puStack_24 = &stack0xfffffffc;
  local_18 = 0;
  puStack_28 = &LAB_00597c6c;
  iStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_2c;
  local_14 = *param_1 + *(int *)(param_5 + -4);
  puVar1 = &stack0xfffffffc;
  local_c = param_1;
  if (local_14 < *(int *)(param_5 + -8)) {
    FUN_0040b9d0(PTR_LAB_00688f34,&local_18);
    iStack_30 = 0x597bb0;
    FUN_00596aa4(local_18);
    puVar1 = puStack_24;
  }
  puStack_24 = puVar1;
  if ((*(int *)(param_5 + -4) < 0) && (*param_2 != 0)) {
    local_10 = 0;
    iVar3 = *(int *)(param_5 + -8);
    iVar2 = (*(int *)(param_5 + -8) - *(int *)(param_5 + -4)) + -1;
    if (iVar3 <= iVar2) {
      iVar2 = (iVar2 - iVar3) + 1;
      do {
        local_10 = local_10 + *(int *)(*param_2 + iVar3 * 4);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else {
    local_10 = *(int *)(param_5 + -4) * param_3;
  }
  if (*param_2 != 0) {
    FUN_00596d90(param_2,*(undefined4 *)(param_5 + -8),*(undefined4 *)(param_5 + -4));
    iStack_30 = param_3;
  }
  puVar1 = puStack_28;
  *local_c = local_14;
  if (*(int *)(param_5 + -8) <= *param_4) {
    if ((*(int *)(param_5 + -4) < 0) && (*param_4 < *(int *)(param_5 + -8) - *(int *)(param_5 + -4))
       ) {
      *param_4 = *(int *)(param_5 + -8);
    }
    else {
      *param_4 = *param_4 + *(int *)(param_5 + -4);
    }
  }
  *in_FS_OFFSET = iStack_30;
  puStack_28 = &LAB_00597c73;
  iStack_2c = 0x597c6b;
  thunk_FUN_004072d8(&local_18,iStack_30,puVar1);
  return;
}
