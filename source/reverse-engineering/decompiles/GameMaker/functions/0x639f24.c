// rea decompile_all
// name: FUN_00639f24
// address: 0x639f24
// body: available
// range: 0x639f24-0x63a20e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x639f42 (push 0x63a20f followed by fs-segment stack chaining); handler 0x63a20f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00639f24(int param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined4 uStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  float10 local_24;
  int local_18;
  double local_14;
  int local_8;

  puStack_5c = &stack0xfffffffc;
  local_44 = 0;
  local_40 = 0;
  puStack_60 = &LAB_0063a20f;
  uStack_64 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_64;
  piVar4 = (int *)FUN_00462144(&PTR_FUN_004587d4,1);
  FUN_00463dc0(piVar4,7);
  (**(code **)(*piVar4 + 0x44))(piVar4,*(undefined4 *)(*(int *)(param_1 + 0xf8) + 0x48));
  (**(code **)(*piVar4 + 0x38))(piVar4,*(undefined4 *)(*(int *)(param_1 + 0xf8) + 0x4c));
  iVar5 = FUN_00462a64(piVar4);
  FUN_0045b850(*(undefined4 *)(iVar5 + 0x44),0);
  iVar5 = FUN_00462a64(piVar4);
  FUN_0045bc24(*(undefined4 *)(iVar5 + 0x48),0xffffff);
  piVar6 = (int *)FUN_00462a64(piVar4);
  (**(code **)(*piVar6 + 0x10))(piVar6,&local_34);
  puVar14 = &local_34;
  uVar7 = FUN_00462a64(piVar4);
  FUN_0045be64(uVar7,puVar14);
  iVar5 = 0;
  if ((*(int *)(param_1 + 0xcc) == 0) && (0 < *(int *)(*(int *)(param_1 + 0xd0) + 4))) {
    iVar5 = FUN_005b2ef4(*(int *)(param_1 + 0xd0),
                         *(int *)(param_1 + 0xe8) % *(int *)(*(int *)(param_1 + 0xd0) + 4));
  }
  if (*(int *)(param_1 + 0xcc) == 1) {
    iVar5 = *(int *)(*(int *)(param_1 + 0xd8) + 4);
  }
  if (*(int *)(param_1 + 0xcc) == 2) {
    iVar5 = *(int *)(param_1 + 0xe0);
  }
  cVar3 = (**(code **)(**(int **)(param_1 + 0xf4) + 0xec))();
  if ((cVar3 != '\0') && (iVar5 != 0)) {
    uVar1 = *(uint *)(iVar5 + 4);
    if (((int)uVar1 < 0x81) && (*(int *)(iVar5 + 8) < 0x81)) {
      iVar8 = (int)*(uint *)(iVar5 + 8) >> 1;
      if (iVar8 < 0) {
        iVar8 = iVar8 + (uint)((*(uint *)(iVar5 + 8) & 1) != 0);
      }
      iVar12 = (int)uVar1 >> 1;
      if (iVar12 < 0) {
        iVar12 = iVar12 + (uint)((uVar1 & 1) != 0);
      }
      FUN_00703978(iVar5,piVar4,0x44 - iVar12,1,0x44 - iVar8);
    }
    else {
      local_38 = uVar1;
      if (0x80 < (int)uVar1) {
        local_38 = 0x80;
      }
      if (*(int *)(iVar5 + 8) < 0x81) {
        local_18 = *(int *)(iVar5 + 8);
      }
      else {
        local_18 = 0x80;
      }
      local_8 = local_18;
      if ((float10)local_18 / (float10)*(int *)(iVar5 + 8) <=
          (float10)(int)local_38 / (float10)(int)uVar1) {
        local_24 = (float10)local_18 / (float10)*(int *)(iVar5 + 8);
      }
      else {
        local_24 = (float10)(int)local_38 / (float10)*(int *)(iVar5 + 4);
      }
      local_14 = (double)local_24;
      local_3c = uVar1;
      uVar7 = FUN_00404878();
      uVar9 = FUN_00404878();
      uVar10 = FUN_00404878();
      uVar13 = 1;
      uVar11 = FUN_00404878();
      FUN_00703f98(iVar5,piVar4,uVar11,uVar13,uVar10,uVar9,uVar7);
    }
  }
  piVar6 = *(int **)(*(int *)(param_1 + 0xf8) + 0x1b0);
  (**(code **)(*piVar6 + 8))(piVar6,piVar4);
  FUN_00405a7c(piVar4);
  if (iVar5 == 0) {
    FUN_004ee6d8(*(undefined4 *)(param_1 + 0xfc),L"(no picture)");
  }
  else {
    local_34 = *(undefined4 *)(iVar5 + 4);
    local_30 = 0;
    local_2c = *(undefined4 *)(iVar5 + 8);
    local_28 = 0;
    FUN_00417d4c(L"Size: %d x %d",&local_34,1,&local_40);
    FUN_004ee6d8(*(undefined4 *)(param_1 + 0xfc),local_40);
  }
  FUN_004ee6d8(*(undefined4 *)(param_1 + 0x100),0);
  if ((*(int *)(param_1 + 0xcc) == 0) && (1 < *(int *)(*(int *)(param_1 + 0xd0) + 4))) {
    local_4c = *(undefined4 *)(*(int *)(param_1 + 0xd0) + 4);
    local_48 = 0;
    FUN_00417d4c(L"Subimages: %d",&local_4c,0,&local_44);
    FUN_004ee6d8(*(undefined4 *)(param_1 + 0x100),local_44);
  }
  puVar2 = puStack_5c;
  *in_FS_OFFSET = uStack_64;
  puStack_5c = &LAB_0063a216;
  puStack_60 = (undefined1 *)0x63a20e;
  thunk_FUN_00406e80(&local_44,2,puVar2);
  return;
}
