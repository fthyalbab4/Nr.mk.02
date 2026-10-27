// rea decompile_all
// name: FUN_005b3a14
// address: 0x5b3a14
// body: available
// range: 0x5b3a14-0x5b3c6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005b3a14(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_12c;
  int local_124;
  int aiStack_110 [64];

  iVar1 = *(int *)(param_1 + 0x168);
  iVar2 = *(int *)(param_1 + 0x13c);
  uVar3 = *(undefined4 *)(param_1 + 0x144);
  *(undefined4 *)(iVar1 + 0x10) = **(undefined4 **)(param_1 + 0x18);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 4);
  if ((*(int *)(param_1 + 0xc4) != 0) && (*(int *)(iVar1 + 0x44) == 0)) {
    FUN_005b360c(iVar1,*(undefined4 *)(iVar1 + 0x48));
  }
  iVar4 = *param_2;
  local_124 = 0;
  iVar5 = *(int *)(param_1 + 0x138);
  piVar9 = aiStack_110 + iVar5;
  piVar8 = &DAT_00686f88 + iVar5;
  for (; iVar5 <= iVar2; iVar5 = iVar5 + 1) {
    local_12c = (int)*(short *)(iVar4 + *piVar8 * 2);
    if (local_12c < 0) {
      local_12c = -local_12c;
    }
    local_12c = local_12c >> ((byte)uVar3 & 0x1f);
    *piVar9 = local_12c;
    if (local_12c == 1) {
      local_124 = iVar5;
    }
    piVar9 = piVar9 + 1;
    piVar8 = piVar8 + 1;
  }
  iVar10 = *(int *)(iVar1 + 0x40) + *(int *)(iVar1 + 0x3c);
  iVar12 = 0;
  iVar5 = *(int *)(param_1 + 0x138);
  iVar11 = 0;
  piVar8 = &DAT_00686f88 + iVar5;
  piVar9 = aiStack_110 + iVar5;
  for (; iVar5 <= iVar2; iVar5 = iVar5 + 1) {
    iVar6 = *piVar9;
    if (iVar6 == 0) {
      iVar12 = iVar12 + 1;
    }
    else {
      while ((0xf < iVar12 && (iVar5 <= local_124))) {
        FUN_005b35a8(iVar1);
        FUN_005b3550(iVar1,*(undefined4 *)(iVar1 + 0x34),0xf0);
        iVar12 = iVar12 + -0x10;
        FUN_005b357c(iVar1,iVar10,iVar11);
        iVar10 = *(int *)(iVar1 + 0x40);
        iVar11 = 0;
      }
      if (iVar6 < 2) {
        FUN_005b35a8(iVar1);
        FUN_005b3550(iVar1,*(undefined4 *)(iVar1 + 0x34),iVar12 * 0x10 + 1);
        FUN_005b3494(iVar1,-1 < *(short *)(iVar4 + *piVar8 * 2),1);
        FUN_005b357c(iVar1,iVar10,iVar11);
        iVar10 = *(int *)(iVar1 + 0x40);
        iVar11 = 0;
        iVar12 = 0;
      }
      else {
        local_12c._0_1_ = (byte)iVar6;
        *(byte *)(iVar10 + iVar11) = (byte)local_12c & 1;
        iVar11 = iVar11 + 1;
      }
    }
    piVar8 = piVar8 + 1;
    piVar9 = piVar9 + 1;
  }
  if ((0 < iVar12) || (iVar11 != 0)) {
    *(int *)(iVar1 + 0x38) = *(int *)(iVar1 + 0x38) + 1;
    *(int *)(iVar1 + 0x3c) = *(int *)(iVar1 + 0x3c) + iVar11;
    if ((*(int *)(iVar1 + 0x38) == 0x7fff) || (0x3a9 < *(uint *)(iVar1 + 0x3c))) {
      FUN_005b35a8(iVar1);
    }
  }
  puVar7 = *(undefined4 **)(param_1 + 0x18);
  *puVar7 = *(undefined4 *)(iVar1 + 0x10);
  puVar7[1] = *(undefined4 *)(iVar1 + 0x14);
  if (*(int *)(param_1 + 0xc4) != 0) {
    if (*(int *)(iVar1 + 0x44) == 0) {
      *(int *)(iVar1 + 0x44) = *(int *)(param_1 + 0xc4);
      *(int *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x48) + 1;
      *(uint *)(iVar1 + 0x48) = *(uint *)(iVar1 + 0x48) & 7;
    }
    *(int *)(iVar1 + 0x44) = *(int *)(iVar1 + 0x44) + -1;
  }
  return 1;
}
