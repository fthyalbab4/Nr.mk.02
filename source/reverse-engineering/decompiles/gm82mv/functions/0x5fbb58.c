// rea decompile_all
// name: FUN_005fbb58
// address: 0x5fbb58
// body: available
// range: 0x5fbb58-0x5fbd8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005fbb58(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float10 in_ST0;
  float10 fVar5;
  float10 fVar6;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 fVar7;
  double dVar8;

  FUN_005f9914();
  FUN_0058bc80(DAT_00850ea0,0xd);
  FUN_0058bd10(DAT_00850ea0);
  FUN_0058c318(DAT_00850ea0);
  FUN_0058bf64(DAT_00850ea0,0);
  FUN_0058be70(DAT_00850ea0);
  FUN_0058bee0(DAT_00850ea0);
  fVar5 = ((float10)*(int *)(*(int *)PTR_DAT_0068939c + 0x10) * (float10)0.5) /
          (float10)(double)in_ST0;
  uVar1 = FUN_004048b8();
  fVar6 = ((float10)*(int *)(*(int *)PTR_DAT_0068939c + 0x10) * (float10)0.5) /
          (float10)(double)in_ST0;
  uVar2 = FUN_004048b8();
  FUN_0058bdc8(DAT_00850ea0,uVar2,uVar1);
  if (param_2 == 0) {
    iVar4 = 1;
    do {
      FUN_004047d4();
      dVar8 = (double)((float10)*(int *)(*(int *)PTR_DAT_0068939c + 0xc) * _DAT_005fbd98 * fVar6 -
                      (float10)60.0);
      fVar7 = in_ST5;
      iVar3 = FUN_004047b8(0x14);
      FUN_0058d400(param_1,DAT_00850ea0,param_3,1,(double)(iVar3 + -0x1e),dVar8);
      iVar4 = iVar4 + -1;
      fVar6 = fVar5;
      fVar5 = in_ST1;
      in_ST1 = in_ST2;
      in_ST2 = in_ST3;
      in_ST3 = in_ST4;
      in_ST4 = in_ST5;
      in_ST5 = fVar7;
    } while (iVar4 != 0);
  }
  else if (param_2 == 2) {
    iVar4 = 7;
    do {
      FUN_004047d4();
      dVar8 = (double)((float10)*(int *)(*(int *)PTR_DAT_0068939c + 0xc) * _DAT_005fbd98 * fVar6 -
                      (float10)60.0);
      fVar7 = in_ST5;
      iVar3 = FUN_004047b8(0x14);
      FUN_0058d400(param_1,DAT_00850ea0,param_3,1,(double)(iVar3 + -0x1e),dVar8);
      iVar4 = iVar4 + -1;
      fVar6 = fVar5;
      fVar5 = in_ST1;
      in_ST1 = in_ST2;
      in_ST2 = in_ST3;
      in_ST3 = in_ST4;
      in_ST4 = in_ST5;
      in_ST5 = fVar7;
    } while (iVar4 != 0);
  }
  else {
    iVar4 = 3;
    do {
      FUN_004047d4();
      dVar8 = (double)((float10)*(int *)(*(int *)PTR_DAT_0068939c + 0xc) * _DAT_005fbd98 * fVar6 -
                      (float10)60.0);
      fVar7 = in_ST5;
      iVar3 = FUN_004047b8(0x14);
      FUN_0058d400(param_1,DAT_00850ea0,param_3,1,(double)(iVar3 + -0x1e),dVar8);
      iVar4 = iVar4 + -1;
      fVar6 = fVar5;
      fVar5 = in_ST1;
      in_ST1 = in_ST2;
      in_ST2 = in_ST3;
      in_ST3 = in_ST4;
      in_ST4 = in_ST5;
      in_ST5 = fVar7;
    } while (iVar4 != 0);
  }
  return;
}
