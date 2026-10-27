// rea decompile_all
// name: FUN_004f1e7c
// address: 0x4f1e7c
// body: available
// range: 0x4f1e7c-0x4f210a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f1e9f (push 0x4f210b followed by fs-segment stack chaining); handler 0x4f210b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f1e7c(int param_1,undefined **param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_2c = &stack0xfffffffc;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  puStack_30 = &LAB_004f210b;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  if (((((param_2 == &PTR_LAB_004efe54) || (param_2 == &PTR_LAB_004f0b84)) ||
       (param_2 == &PTR_LAB_004f0784)) || (param_2 == &PTR_LAB_004efcf4)) &&
     (*(char *)(*(int *)(param_1 + 4) + 0x13c) == '\0')) {
    puStack_2c = &stack0xfffffffc;
    FUN_0040b9d0(PTR_LAB_00688f74,&local_14);
    FUN_004f62b8(*(undefined4 *)(param_1 + 4),&LAB_004edd28,local_14);
    goto LAB_004f20f0;
  }
  puVar1 = &stack0xfffffffc;
  if (param_2 == &PTR_LAB_004f05d4) {
    iVar2 = FUN_004f2130(param_1,&PTR_LAB_004f05d4);
    puVar1 = puStack_2c;
    if (iVar2 == 0) goto LAB_004f1f0c;
LAB_004f1f3e:
    FUN_0040b9d0(PTR_LAB_00688f74,&local_18);
    FUN_004f62b8(*(undefined4 *)(param_1 + 4),&LAB_004edd28,local_18);
    goto LAB_004f20f0;
  }
LAB_004f1f0c:
  puStack_2c = puVar1;
  if (param_2 == &PTR_LAB_004f0954) {
    iVar2 = FUN_004f2130(param_1,&PTR_LAB_004f0954);
    if (iVar2 != 0) goto LAB_004f1f3e;
  }
  if (param_2 == &PTR_LAB_004f0384) {
    iVar2 = FUN_004f2130(param_1,&PTR_LAB_004f0384);
    if (iVar2 != 0) goto LAB_004f1f3e;
  }
  iVar2 = FUN_004f2130(param_1,&PTR_LAB_004efcf4);
  if (iVar2 == 0) {
LAB_004f1f83:
    if (*(char *)(*(int *)(param_1 + 4) + 0x13c) == '\0') {
      FUN_0040b9d0(PTR_LAB_00688ffc,&local_1c);
      FUN_004f62b8(*(undefined4 *)(param_1 + 4),&LAB_004edd28,local_1c);
      goto LAB_004f20f0;
    }
  }
  else {
    iVar2 = FUN_004f2130(param_1,&PTR_LAB_004efe54);
    if (iVar2 == 0) goto LAB_004f1f83;
  }
  uVar3 = FUN_004f2130(param_1,&PTR_LAB_004efe54);
  local_8 = FUN_0040621c(uVar3,&PTR_LAB_004efe54);
  uVar3 = FUN_004f2130(param_1,&PTR_LAB_004efcf4);
  local_c = FUN_0040621c(uVar3,&PTR_LAB_004efcf4);
  uVar3 = (*(code *)param_2[2])(param_2,1,*(undefined4 *)(param_1 + 4));
  if (((param_2 == &PTR_LAB_004f05d4) || (param_2 == &PTR_LAB_004f0384)) ||
     (param_2 == &PTR_LAB_004f0784)) {
    iVar2 = FUN_004f2188(local_8);
    FUN_004f1d74(param_1,uVar3,iVar2 + 1);
  }
  else if (param_2 == &PTR_LAB_004efcf4) {
    FUN_004f1d74(param_1,uVar3,*(undefined4 *)(param_1 + 8));
  }
  else if (param_2 == &PTR_LAB_004efe54) {
    FUN_004f1d74(param_1,uVar3,0);
  }
  else if (param_2 == &PTR_LAB_004f0954) {
    uVar4 = FUN_004f2130(param_1,&PTR_LAB_004f0b84);
    local_10 = FUN_0040621c(uVar4,&PTR_LAB_004f0b84);
    uVar4 = FUN_004f2130(param_1,&PTR_LAB_004f0784);
    iVar2 = FUN_0040621c(uVar4,&PTR_LAB_004f0784);
    if (iVar2 == 0) {
      if (local_10 == 0) {
        iVar2 = FUN_004f2188(local_8);
        FUN_004f1d74(param_1,uVar3,iVar2 + 1);
      }
      else {
        uVar4 = FUN_004f2188(local_10);
        FUN_004f1d74(param_1,uVar3,uVar4);
      }
    }
    else {
      iVar2 = FUN_004f2188(iVar2);
      FUN_004f1d74(param_1,uVar3,iVar2 + 1);
    }
  }
  else {
    uVar4 = FUN_004f2188(local_c);
    FUN_004f1d74(param_1,uVar3,uVar4);
  }
LAB_004f20f0:
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_004f2112;
  puStack_30 = (undefined1 *)0x4f210a;
  thunk_FUN_004072fc(&local_1c,3,puVar1);
  return;
}
