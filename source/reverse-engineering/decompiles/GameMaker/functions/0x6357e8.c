// rea decompile_all
// name: FUN_006357e8
// address: 0x6357e8
// body: available
// range: 0x6357e8-0x635978 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006357e8(int param_1,int param_2)

{
  int *piVar1;
  double dVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;

  if (*(int *)(param_1 + 0x654) != 0) {
    FUN_00405a7c();
    *(undefined4 *)(param_1 + 0x654) = 0;
  }
  if (param_2 != 0) {
    iVar7 = *(int *)(param_2 + 4);
    iVar9 = iVar7;
    if (200 < iVar7) {
      iVar9 = 200;
    }
    if (*(int *)(param_2 + 8) < 0xc9) {
      iVar3 = *(int *)(param_2 + 8);
    }
    else {
      iVar3 = 200;
    }
    if ((float10)iVar3 / (float10)*(int *)(param_2 + 8) <= (float10)iVar9 / (float10)iVar7) {
      dVar2 = (double)iVar3 / (double)*(int *)(param_2 + 8);
    }
    else {
      dVar2 = (double)iVar9 / (double)*(int *)(param_2 + 4);
    }
    *(double *)(param_1 + 0x658) = dVar2;
    uVar4 = FUN_00701cf4(&DAT_00700d94,CONCAT31((int3)((uint)iVar9 >> 8),1),param_2);
    *(undefined4 *)(param_1 + 0x654) = uVar4;
    uVar10 = 3;
    uVar5 = FUN_00404878();
    uVar6 = FUN_00404878();
    FUN_0070205c(uVar4,uVar6,uVar5,uVar10);
    uVar4 = FUN_00701c94(&DAT_00700d94,1,200,*(undefined4 *)PTR_DAT_007827c4,200);
    iVar7 = FUN_005b5764(*(undefined4 *)(*(int *)(param_1 + 0x654) + 4),
                         *(undefined4 *)(*(int *)(param_1 + 0x654) + 8));
    FUN_007034e0(iVar7,0,0,1,*(undefined4 *)(param_1 + 0x654));
    uVar8 = 200 - *(int *)(iVar7 + 8);
    iVar9 = (int)uVar8 >> 1;
    if (iVar9 < 0) {
      iVar9 = iVar9 + (uint)((uVar8 & 1) != 0);
    }
    uVar8 = 200 - *(int *)(iVar7 + 4);
    iVar3 = (int)uVar8 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar8 & 1) != 0);
    }
    FUN_007034e0(uVar4,iVar3,iVar9,0,iVar7);
    uVar5 = FUN_0070399c(uVar4);
    FUN_00405a7c(iVar7);
    FUN_00405a7c(uVar4);
    piVar1 = *(int **)(*(int *)(param_1 + 0x39c) + 0x1b0);
    (**(code **)(*piVar1 + 8))(piVar1,uVar5);
    FUN_00405a7c(uVar5);
  }
  return;
}
