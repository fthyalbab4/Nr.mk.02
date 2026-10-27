// rea decompile_all
// name: FUN_006093c4
// address: 0x6093c4
// body: available
// range: 0x6093c4-0x6094c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6093da (push 0x6094c5 followed by fs-segment stack chaining); handler 0x6094c5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006093c4(int param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_006094c5;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puVar2 = &stack0xfffffffc;
  if (param_2 != *(int **)(param_1 + 0x98)) {
    puVar2 = &stack0xfffffffc;
    if ((((param_2 != (int *)0x0) && (puVar2 = &stack0xfffffffc, param_2[0x29] != 0)) &&
        (puVar2 = &stack0xfffffffc, *(int *)(param_1 + 0x94) != 0)) &&
       (puVar2 = &stack0xfffffffc, param_2[0x29] != *(int *)(param_1 + 0x94))) {
      FUN_0040b75c(PTR_PTR_00782930,&local_8);
      FUN_005df624(&PTR_LAB_005deea4,local_8);
      puVar2 = puStack_14;
    }
    puStack_14 = puVar2;
    if ((*(char *)(param_1 + 0xa0) != '\0') && (*(int *)(param_1 + 0x98) != 0)) {
      FUN_0041ef80(param_1 + 0x98);
    }
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined1 *)(param_1 + 0xa0) = 0;
    iVar1 = *(int *)(param_1 + 0x98);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x88) = 0;
      FUN_0044924c(iVar1,param_1);
    }
    if (param_2 != (int *)0x0) {
      FUN_00448f68(param_2,param_1);
      param_2[0x22] = param_1;
      if (*(int *)(param_1 + 0x94) != 0) {
        (**(code **)(*param_2 + 0x58))(param_2,*(int *)(param_1 + 0x94));
      }
      cVar3 = FUN_00405c98(param_2,&PTR_FUN_00606ee0);
      if (cVar3 != '\0') {
        *(int **)(param_1 + 0xb0) = param_2;
      }
    }
    *(int **)(param_1 + 0x98) = param_2;
    puVar2 = puStack_14;
  }
  puStack_14 = puVar2;
  puVar2 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_006094cc;
  puStack_18 = (undefined1 *)0x6094c4;
  thunk_FUN_00406e5c(&local_8,uStack_1c,puVar2);
  return;
}
