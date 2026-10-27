// rea decompile_all
// name: FUN_004a86ac
// address: 0x4a86ac
// body: available
// range: 0x4a86ac-0x4a8a6c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4a86ca (push 0x4a8a6d followed by fs-segment stack chaining); handler 0x4a8a6d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a86ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int *piVar14;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  puStack_34 = &stack0xfffffffc;
  local_28 = 0;
  piVar6 = (int *)(param_4 + -0x20);
  puStack_38 = &LAB_004a8a6d;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  **(undefined4 **)(param_4 + 8) = 0;
  **(undefined4 **)(param_4 + -0x18) = 0;
  uVar3 = FUN_004a6160(*piVar6,&DAT_00681810 + (uint)*(byte *)(*piVar6 + 0x39) * 8,param_3,0xb,
                       *(undefined4 *)
                        (&DAT_00681810 + (uint)*(byte *)(*piVar6 + 0x39) * 8 +
                        (uint)*(byte *)(*piVar6 + 0x3d) * 4),0,1,&local_14);
  uVar8 = *(undefined4 *)(param_4 + -0x1c);
  (**(code **)PTR_DAT_00688f28)();
  if ((*(int *)(param_4 + -0x24) != 0) && (local_10 < *(int *)(*(int *)(param_4 + -0x24) + 0x34))) {
    local_10 = *(int *)(*(int *)(param_4 + -0x24) + 0x34);
  }
  if ((*(int *)(param_4 + -0x24) != 0) && (local_14 < *(int *)(*(int *)(param_4 + -0x24) + 0x38))) {
    local_14 = *(int *)(*(int *)(param_4 + -0x24) + 0x38);
  }
  if (*(char *)(param_4 + -0x25) == '\0') {
    **(int **)(param_4 + 8) = **(int **)(param_4 + 8) + local_10;
    **(int **)(param_4 + -0x18) = **(int **)(param_4 + -0x18) + local_14;
    piVar14 = &local_24;
    uVar13 = 0;
    uVar12 = 0xe12;
    uVar11 = *(undefined4 *)
              (&DAT_00681810 +
              (uint)*(byte *)(*piVar6 + 0x3d) * 4 + (uint)*(byte *)(*piVar6 + 0x39) * 8);
    uVar10 = 0xb;
    uVar4 = FUN_004a6160(*piVar6);
    uVar9 = *(undefined4 *)(param_4 + -0x1c);
    (**(code **)PTR_DAT_00689094)();
    **(int **)(param_4 + 8) = **(int **)(param_4 + 8) + local_1c + local_18;
    **(int **)(param_4 + -0x18) = **(int **)(param_4 + -0x18) + local_24 + local_20;
    FUN_004a6160(*piVar6);
    (**(code **)PTR_DAT_00688f28)();
    **(int **)(param_4 + -0x18) = **(int **)(param_4 + -0x18) + local_c;
    FUN_004a6160(*piVar6);
    (**(code **)PTR_DAT_00689094)();
    **(int **)(param_4 + -0x18) = **(int **)(param_4 + -0x18) + local_24 + local_20;
    FUN_004a6160(*piVar6);
    (**(code **)PTR_DAT_00689094)();
    **(int **)(param_4 + -0x18) = **(int **)(param_4 + -0x18) + local_24 + local_20;
    FUN_004a6160(*piVar6);
    (**(code **)PTR_DAT_00688f28)();
    piVar1 = *(int **)(param_4 + -0x18);
    *piVar1 = *piVar1 + local_c;
    bVar7 = *piVar1 == 0;
    FUN_0040891c(*(undefined4 *)(*piVar6 + 0x34),&DAT_004a8a88);
    if (bVar7) {
      FUN_004a6160(*piVar6);
      (**(code **)PTR_DAT_00688f28)();
      FUN_004a6160(*piVar6);
      (**(code **)PTR_DAT_00689094)();
      **(int **)(param_4 + 8) = local_8 + local_18;
      **(int **)(param_4 + -0x18) = **(int **)(param_4 + -0x18) + local_c;
    }
  }
  else {
    if (((*(int *)(param_4 + -0x24) != 0) && (*(int *)(*piVar6 + 0x40) != -1)) ||
       (*(int *)(*piVar6 + 0x4c) != 0)) {
      **(int **)(param_4 + -0x18) = **(int **)(param_4 + -0x18) + local_14;
    }
    piVar14 = &local_c;
    uVar13 = 1;
    uVar12 = 0;
    uVar11 = 1;
    uVar10 = 8;
    uVar4 = FUN_004a6160(*piVar6);
    uVar9 = *(undefined4 *)(param_4 + -0x1c);
    (**(code **)PTR_DAT_00688f28)();
    **(int **)(param_4 + 8) = **(int **)(param_4 + 8) + local_8;
  }
  FUN_00404f38(param_4 + -0x10,0x10,0,uVar9,uVar4,uVar10,uVar11,uVar12,uVar13,piVar14,uVar8,uVar3);
  if (*(int *)(param_4 + -0x2c) == 0) {
    cVar2 = FUN_004061f8(*(undefined4 *)(param_4 + -0x2c),&PTR_FUN_004a48d4);
    if (cVar2 == '\0') {
      *(undefined1 *)(param_4 + -0x2d) = 0;
    }
    else {
      *(undefined1 *)(param_4 + -0x2d) = *(undefined1 *)(*(int *)(param_4 + -0x2c) + 0x68);
    }
  }
  else {
    *(undefined1 *)(param_4 + -0x2d) = 0;
  }
  if (*(short *)(*piVar6 + 0x60) == 0) {
    FUN_004081e8(param_4 + -0x34,*(undefined4 *)(*piVar6 + 0x34));
  }
  else {
    FUN_004a50cc(*(short *)(*piVar6 + 0x60),&local_28);
    FUN_00408678(param_4 + -0x34,*(undefined4 *)(*piVar6 + 0x34),local_28);
  }
  *(uint *)(param_4 + -0x38) =
       (uint)(*(ushort *)(&DAT_00681808 + (uint)*(byte *)(param_4 + -0x2d) * 2) | 0x560);
  iVar5 = param_4 + -0x10;
  uVar8 = *(undefined4 *)(param_4 + -0x38);
  FUN_004a64f8(*piVar6,*(undefined4 *)(param_4 + -0x3c),*(undefined4 *)(param_4 + -0x34),uVar8,0);
  **(int **)(param_4 + -0x18) =
       **(int **)(param_4 + -0x18) + (*(int *)(param_4 + -8) - *(int *)(param_4 + -0x10));
  *in_FS_OFFSET = uVar8;
  thunk_FUN_004072d8(&local_28,uVar8,iVar5,&LAB_004a8a74);
  return;
}
