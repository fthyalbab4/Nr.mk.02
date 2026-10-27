// rea decompile_all
// name: FUN_005b37c0
// address: 0x5b37c0
// body: available
// range: 0x5b37c0-0x5b396b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005b37c0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint local_28;

  iVar1 = param_1[0x5a];
  iVar2 = param_1[0x4f];
  iVar3 = param_1[0x51];
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)param_1[6];
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1[6] + 4);
  if ((param_1[0x31] != 0) && (*(int *)(iVar1 + 0x44) == 0)) {
    FUN_005b360c(iVar1,*(undefined4 *)(iVar1 + 0x48));
  }
  iVar4 = *param_2;
  iVar8 = 0;
  iVar5 = param_1[0x4e];
  piVar7 = &DAT_00686f88 + iVar5;
  for (; iVar5 <= iVar2; iVar5 = iVar5 + 1) {
    iVar9 = (int)*(short *)(iVar4 + *piVar7 * 2);
    if (iVar9 == 0) {
      iVar8 = iVar8 + 1;
    }
    else {
      if (iVar9 < 0) {
        uVar10 = -iVar9 >> ((byte)iVar3 & 0x1f);
        local_28 = ~uVar10;
      }
      else {
        uVar10 = iVar9 >> ((byte)iVar3 & 0x1f);
        local_28 = uVar10;
      }
      if (uVar10 == 0) {
        iVar8 = iVar8 + 1;
      }
      else {
        if (*(int *)(iVar1 + 0x38) != 0) {
          FUN_005b35a8(iVar1);
        }
        for (; 0xf < iVar8; iVar8 = iVar8 + -0x10) {
          FUN_005b3550(iVar1,*(undefined4 *)(iVar1 + 0x34),0xf0);
        }
        iVar9 = 1;
        while (uVar10 = (int)uVar10 >> 1, uVar10 != 0) {
          iVar9 = iVar9 + 1;
        }
        if (10 < iVar9) {
          *(undefined4 *)(*param_1 + 0x14) = 6;
          (**(code **)*param_1)();
        }
        FUN_005b3550(iVar1,*(undefined4 *)(iVar1 + 0x34),iVar8 * 0x10 + iVar9);
        FUN_005b3494(iVar1,local_28,iVar9);
        iVar8 = 0;
      }
    }
    piVar7 = piVar7 + 1;
  }
  if ((0 < iVar8) &&
     (*(int *)(iVar1 + 0x38) = *(int *)(iVar1 + 0x38) + 1, *(int *)(iVar1 + 0x38) == 0x7fff)) {
    FUN_005b35a8(iVar1);
  }
  puVar6 = (undefined4 *)param_1[6];
  *puVar6 = *(undefined4 *)(iVar1 + 0x10);
  puVar6[1] = *(undefined4 *)(iVar1 + 0x14);
  if (param_1[0x31] != 0) {
    if (*(int *)(iVar1 + 0x44) == 0) {
      *(int *)(iVar1 + 0x44) = param_1[0x31];
      *(int *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x48) + 1;
      *(uint *)(iVar1 + 0x48) = *(uint *)(iVar1 + 0x48) & 7;
    }
    *(int *)(iVar1 + 0x44) = *(int *)(iVar1 + 0x44) + -1;
  }
  return 1;
}
