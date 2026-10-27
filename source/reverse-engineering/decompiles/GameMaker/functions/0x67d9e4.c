// rea decompile_all
// name: FUN_0067d9e4
// address: 0x67d9e4
// body: available
// range: 0x67d9e4-0x67db59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x67da09 (push 0x67db84 followed by fs-segment stack chaining); handler 0x67db84 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x67da21 (push 0x67db5a followed by fs-segment stack chaining); handler 0x67db5a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0067d9e4(int param_1,int param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 local_38;
  int local_34 [2];
  undefined4 local_2c;
  int local_28;
  int local_20;
  bool local_15;

  puStack_48 = &stack0xfffffffc;
  puStack_54 = &stack0xfffffffc;
  local_34[0] = 0;
  local_38 = 0;
  local_2c = 0;
  puStack_4c = &LAB_0067db84;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  *(undefined1 *)(param_1 + 0x98) = 1;
  puStack_58 = &LAB_0067db5a;
  uStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_5c;
  local_15 = *(int *)(param_2 + 0x18) != 0;
  puVar2 = &stack0xfffffffc;
  puVar3 = &stack0xfffffffc;
  local_28 = param_1;
  local_20 = param_2;
  if (local_15) {
    puVar2 = &stack0xfffffffc;
    puVar3 = &stack0xfffffffc;
    if (((*(byte *)(param_1 + 0x1c) & 0x10) == 0) &&
       (puVar2 = &stack0xfffffffc, puVar3 = &stack0xfffffffc,
       *(char *)(*(int *)(param_2 + 0x18) + 0x6a) == '\0')) {
      (**(code **)(**(int **)(param_2 + 0x24) + 0x1c))(*(int **)(param_2 + 0x24),&local_38);
      FUN_00415dd0(local_38,local_34);
      puVar2 = puStack_54;
      puVar3 = puStack_48;
      if (local_34[0] != 0) {
        local_15 = true;
        goto LAB_0067da72;
      }
    }
    puStack_48 = puVar3;
    puStack_54 = puVar2;
    local_15 = false;
    puVar2 = puStack_54;
    puVar3 = puStack_48;
  }
LAB_0067da72:
  puStack_48 = puVar3;
  puStack_54 = puVar2;
  uVar5 = FUN_0067db98(local_28,local_20);
  iVar6 = FUN_0067d7c0(uVar5);
  iVar9 = iVar6;
  if (((*(char *)(local_20 + 0x20) != '\0') &&
      (piVar1 = *(int **)(*(int *)(local_20 + 0x10) + 0xc), piVar1 != (int *)0x0)) &&
     (cVar4 = (**(code **)(*piVar1 + 0x20))(piVar1,*piVar1,&stack0xfffffffc), cVar4 == '\0')) {
    iVar7 = (**(code **)(**(int **)(*(int *)(local_20 + 0x10) + 0xc) + 0x24))();
    iVar9 = iVar7 + 0x10;
    iVar8 = FUN_0067eb08(local_20);
    if ((iVar8 == 0) || (iVar8 = FUN_0067eb08(local_20), (*(byte *)(iVar8 + 0x48) & 1) != 0)) {
      iVar9 = iVar7 + 0x2a;
    }
    if (*(char *)(local_20 + 0x38) != '\0') {
      iVar9 = iVar9 + 0x1e;
    }
    if (iVar9 < iVar6) {
      iVar9 = iVar6;
    }
  }
  if (local_15 == false) {
    *(int *)(local_20 + 0x2c) = iVar9;
    *(undefined4 *)(local_20 + 0x28) = uVar5;
    FUN_0067ea64(local_20);
  }
  else {
    *(int *)(local_20 + 0x30) = iVar9;
    *(undefined4 *)(local_20 + 0x34) = uVar5;
  }
  *in_FS_OFFSET = uStack_5c;
  *(undefined1 *)(local_28 + 0x98) = 0;
  return;
}
