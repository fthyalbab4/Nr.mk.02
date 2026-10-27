// rea decompile_all
// name: FUN_00638674
// address: 0x638674
// body: available
// range: 0x638674-0x63888f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00638674(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5,int param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 in_ST0;
  float10 fVar8;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;

  *param_4 = 0;
  param_4[2] = 0;
  param_4[3] = 0x412e8480;
  fVar8 = (float10)*(double *)(param_6 + 8);
  iVar4 = FUN_004048b8();
  if (iVar4 == -2) {
    dVar3 = *(double *)(param_4 + 2);
    dVar2 = *(double *)(param_4 + 2);
    FUN_00638574(param_2);
    dVar1 = (double)fVar8;
    if (dVar2 < dVar1) {
      dVar1 = dVar3;
    }
    *(double *)(param_4 + 2) = dVar1;
  }
  else if (iVar4 == -3) {
    iVar4 = *(int *)(*(int *)PTR_DAT_0068939c + 0x68);
    if (-1 < iVar4 + -1) {
      iVar6 = 0;
      do {
        dVar3 = *(double *)(param_4 + 2);
        dVar2 = *(double *)(param_4 + 2);
        FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar6);
        FUN_00638574();
        dVar1 = (double)fVar8;
        if (dVar2 < dVar1) {
          dVar1 = dVar3;
        }
        *(double *)(param_4 + 2) = dVar1;
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + -1;
        fVar8 = in_ST0;
        in_ST0 = in_ST1;
        in_ST1 = in_ST2;
        in_ST2 = in_ST3;
        in_ST3 = in_ST4;
        in_ST4 = in_ST5;
        in_ST5 = in_ST6;
      } while (iVar4 != 0);
    }
  }
  else if (iVar4 < 100000) {
    iVar6 = FUN_0060aa64(*(undefined4 *)PTR_DAT_0068939c,iVar4);
    if (-1 < iVar6 + -1) {
      iVar7 = 0;
      do {
        dVar3 = *(double *)(param_4 + 2);
        dVar2 = *(double *)(param_4 + 2);
        FUN_0060aa90(*(undefined4 *)PTR_DAT_0068939c,iVar4,iVar7,&stack0xfffffffc);
        FUN_00638574();
        dVar1 = (double)fVar8;
        if (dVar2 < dVar1) {
          dVar1 = dVar3;
        }
        *(double *)(param_4 + 2) = dVar1;
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + -1;
        fVar8 = in_ST0;
        in_ST0 = in_ST1;
        in_ST1 = in_ST2;
        in_ST2 = in_ST3;
        in_ST3 = in_ST4;
        in_ST4 = in_ST5;
        in_ST5 = in_ST6;
      } while (iVar6 != 0);
    }
  }
  else {
    iVar6 = *(int *)(*(int *)PTR_DAT_0068939c + 0x68);
    if (-1 < iVar6 + -1) {
      iVar7 = 0;
      do {
        iVar5 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar7);
        if (*(int *)(iVar5 + 4) == iVar4) {
          dVar3 = *(double *)(param_4 + 2);
          dVar2 = *(double *)(param_4 + 2);
          FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar7);
          FUN_00638574();
          dVar1 = (double)fVar8;
          if (dVar2 < dVar1) {
            dVar1 = dVar3;
          }
          *(double *)(param_4 + 2) = dVar1;
          return;
        }
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return;
}
