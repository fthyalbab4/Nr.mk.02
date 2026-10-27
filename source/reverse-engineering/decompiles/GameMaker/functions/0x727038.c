// rea decompile_all
// name: FUN_00727038
// address: 0x727038
// body: available
// range: 0x727038-0x7272c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x72705b (push 0x7272c7 followed by fs-segment stack chaining); handler 0x7272c7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00727038(int param_1,undefined **param_2)

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
  puStack_30 = &LAB_007272c7;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  if (((((param_2 == &PTR_LAB_00725010) || (param_2 == &PTR_LAB_00725d40)) ||
       (param_2 == &PTR_LAB_00725940)) || (param_2 == &PTR_LAB_00724eb0)) &&
     (*(char *)(*(int *)(param_1 + 4) + 0x13c) == '\0')) {
    puStack_2c = &stack0xfffffffc;
    FUN_0040b75c(PTR_PTR_00781fa4,&local_14);
    FUN_0072b474(*(undefined4 *)(param_1 + 4),&PTR_LAB_00722ee4,local_14);
    goto LAB_007272ac;
  }
  puVar1 = &stack0xfffffffc;
  if (param_2 == &PTR_LAB_00725790) {
    iVar2 = FUN_007272ec(param_1,&PTR_LAB_00725790);
    puVar1 = puStack_2c;
    if (iVar2 == 0) goto LAB_007270c8;
LAB_007270fa:
    FUN_0040b75c(PTR_PTR_00781fa4,&local_18);
    FUN_0072b474(*(undefined4 *)(param_1 + 4),&PTR_LAB_00722ee4,local_18);
    goto LAB_007272ac;
  }
LAB_007270c8:
  puStack_2c = puVar1;
  if (param_2 == &PTR_LAB_00725b10) {
    iVar2 = FUN_007272ec(param_1,&PTR_LAB_00725b10);
    if (iVar2 != 0) goto LAB_007270fa;
  }
  if (param_2 == &PTR_LAB_00725540) {
    iVar2 = FUN_007272ec(param_1,&PTR_LAB_00725540);
    if (iVar2 != 0) goto LAB_007270fa;
  }
  iVar2 = FUN_007272ec(param_1,&PTR_LAB_00724eb0);
  if (iVar2 == 0) {
LAB_0072713f:
    if (*(char *)(*(int *)(param_1 + 4) + 0x13c) == '\0') {
      FUN_0040b75c(PTR_PTR_00782060,&local_1c);
      FUN_0072b474(*(undefined4 *)(param_1 + 4),&PTR_LAB_00722ee4,local_1c);
      goto LAB_007272ac;
    }
  }
  else {
    iVar2 = FUN_007272ec(param_1,&PTR_LAB_00725010);
    if (iVar2 == 0) goto LAB_0072713f;
  }
  uVar3 = FUN_007272ec(param_1,&PTR_LAB_00725010);
  local_8 = FUN_00405cbc(uVar3,&PTR_LAB_00725010);
  uVar3 = FUN_007272ec(param_1,&PTR_LAB_00724eb0);
  local_c = FUN_00405cbc(uVar3,&PTR_LAB_00724eb0);
  uVar3 = (*(code *)param_2[2])(param_2,1,*(undefined4 *)(param_1 + 4));
  if (((param_2 == &PTR_LAB_00725790) || (param_2 == &PTR_LAB_00725540)) ||
     (param_2 == &PTR_LAB_00725940)) {
    iVar2 = FUN_00727344(local_8);
    FUN_00726f30(param_1,uVar3,iVar2 + 1);
  }
  else if (param_2 == &PTR_LAB_00724eb0) {
    FUN_00726f30(param_1,uVar3,*(undefined4 *)(param_1 + 8));
  }
  else if (param_2 == &PTR_LAB_00725010) {
    FUN_00726f30(param_1,uVar3,0);
  }
  else if (param_2 == &PTR_LAB_00725b10) {
    uVar4 = FUN_007272ec(param_1,&PTR_LAB_00725d40);
    local_10 = FUN_00405cbc(uVar4,&PTR_LAB_00725d40);
    uVar4 = FUN_007272ec(param_1,&PTR_LAB_00725940);
    iVar2 = FUN_00405cbc(uVar4,&PTR_LAB_00725940);
    if (iVar2 == 0) {
      if (local_10 == 0) {
        iVar2 = FUN_00727344(local_8);
        FUN_00726f30(param_1,uVar3,iVar2 + 1);
      }
      else {
        uVar4 = FUN_00727344(local_10);
        FUN_00726f30(param_1,uVar3,uVar4);
      }
    }
    else {
      iVar2 = FUN_00727344(iVar2);
      FUN_00726f30(param_1,uVar3,iVar2 + 1);
    }
  }
  else {
    uVar4 = FUN_00727344(local_c);
    FUN_00726f30(param_1,uVar3,uVar4);
  }
LAB_007272ac:
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_007272ce;
  puStack_30 = (undefined1 *)0x7272c6;
  thunk_FUN_00406e80(&local_1c,3,puVar1);
  return;
}
