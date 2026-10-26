// rea decompile_all
// name: FUN_00567158
// address: 0x567158
// body: available
// range: 0x567158-0x5674cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00567158(undefined4 param_1,float param_2,char param_3,double param_4,double param_5,
                 double param_6,double param_7,double param_8,double param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float *pfVar5;
  double *pdVar6;
  uint uVar7;
  int iVar8;
  double *pdVar9;
  int iVar10;
  undefined4 *puVar11;
  byte bVar12;

  bVar12 = 0;
  if (ABS(param_7 - param_9) < param_5) {
    param_5 = ABS(param_7 - param_9);
  }
  if (ABS(param_6 - param_8) < param_4) {
    param_4 = ABS(param_6 - param_8);
  }
  dVar1 = (param_9 + param_7) / 2.0;
  dVar2 = (param_8 + param_6) / 2.0;
  dVar3 = ABS(param_7 - param_9) / 2.0 - param_5 / 2.0;
  dVar4 = ABS(param_6 - param_8) / 2.0 - param_4 / 2.0;
  DAT_0083b1fc = (float)dVar1;
  DAT_0083b200 = (float)dVar2;
  DAT_0083b204 = (float)*(double *)PTR_DAT_00689120;
  uVar7 = DAT_0083f08c;
  if ((int)DAT_0083f08c < 0) {
    uVar7 = DAT_0083f08c + 3;
  }
  DAT_0083b208 = param_1;
  if (-1 < (int)uVar7 >> 2) {
    iVar8 = ((int)uVar7 >> 2) + 1;
    pdVar6 = (double *)&DAT_0083f090;
    pfVar5 = (float *)&DAT_0083b20c;
    pdVar9 = (double *)&DAT_0083f298;
    do {
      *pfVar5 = (float)(((float10)param_5 * (float10)*pdVar6) / (float10)2.0 +
                       (float10)dVar1 + (float10)dVar3);
      pfVar5[1] = (float)(((float10)param_4 * (float10)*pdVar9) / (float10)2.0 +
                         (float10)dVar2 + (float10)dVar4);
      pfVar5[2] = (float)*(double *)PTR_DAT_00689120;
      pfVar5[3] = param_2;
      pdVar9 = pdVar9 + 1;
      pfVar5 = pfVar5 + 4;
      pdVar6 = pdVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  uVar7 = DAT_0083f08c;
  if ((int)DAT_0083f08c < 0) {
    uVar7 = DAT_0083f08c + 3;
  }
  iVar10 = (int)uVar7 >> 2;
  iVar8 = (int)DAT_0083f08c >> 1;
  if (iVar8 < 0) {
    iVar8 = iVar8 + (uint)((DAT_0083f08c & 1) != 0);
  }
  if (iVar10 <= iVar8) {
    iVar8 = (iVar8 - iVar10) + 1;
    pdVar6 = (double *)(&DAT_0083f090 + iVar10);
    pfVar5 = (float *)(&DAT_0083b21c + iVar10 * 4);
    pdVar9 = (double *)(&DAT_0083f298 + iVar10);
    do {
      *pfVar5 = (float)(((float10)param_5 * (float10)*pdVar6) / (float10)2.0 +
                       ((float10)dVar1 - (float10)dVar3));
      pfVar5[1] = (float)(((float10)param_4 * (float10)*pdVar9) / (float10)2.0 +
                         (float10)dVar2 + (float10)dVar4);
      pfVar5[2] = (float)*(double *)PTR_DAT_00689120;
      pfVar5[3] = param_2;
      pdVar9 = pdVar9 + 1;
      pfVar5 = pfVar5 + 4;
      pdVar6 = pdVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  iVar8 = (int)DAT_0083f08c >> 1;
  if (iVar8 < 0) {
    iVar8 = iVar8 + (uint)((DAT_0083f08c & 1) != 0);
  }
  uVar7 = DAT_0083f08c;
  if ((int)DAT_0083f08c < 0) {
    uVar7 = DAT_0083f08c + 3;
  }
  iVar10 = ((int)uVar7 >> 2) * 3;
  if (iVar8 <= iVar10) {
    iVar10 = (iVar10 - iVar8) + 1;
    pdVar6 = (double *)(&DAT_0083f090 + iVar8);
    pfVar5 = (float *)(&DAT_0083b22c + iVar8 * 4);
    pdVar9 = (double *)(&DAT_0083f298 + iVar8);
    do {
      *pfVar5 = (float)(((float10)param_5 * (float10)*pdVar6) / (float10)2.0 +
                       ((float10)dVar1 - (float10)dVar3));
      pfVar5[1] = (float)(((float10)param_4 * (float10)*pdVar9) / (float10)2.0 +
                         ((float10)dVar2 - (float10)dVar4));
      pfVar5[2] = (float)*(double *)PTR_DAT_00689120;
      pfVar5[3] = param_2;
      pdVar9 = pdVar9 + 1;
      pfVar5 = pfVar5 + 4;
      pdVar6 = pdVar6 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  uVar7 = DAT_0083f08c;
  if ((int)DAT_0083f08c < 0) {
    uVar7 = DAT_0083f08c + 3;
  }
  iVar8 = (int)uVar7 >> 2;
  if (iVar8 * 3 <= (int)DAT_0083f08c) {
    iVar10 = DAT_0083f08c + iVar8 * -3 + 1;
    pdVar6 = (double *)(&DAT_0083f090 + iVar8 * 3);
    pfVar5 = (float *)(&DAT_0083b23c + iVar8 * 0xc);
    pdVar9 = (double *)(&DAT_0083f298 + iVar8 * 3);
    do {
      *pfVar5 = (float)(((float10)param_5 * (float10)*pdVar6) / (float10)2.0 +
                       (float10)dVar1 + (float10)dVar3);
      pfVar5[1] = (float)(((float10)param_4 * (float10)*pdVar9) / (float10)2.0 +
                         ((float10)dVar2 - (float10)dVar4));
      pfVar5[2] = (float)*(double *)PTR_DAT_00689120;
      pfVar5[3] = param_2;
      pdVar9 = pdVar9 + 1;
      pfVar5 = pfVar5 + 4;
      pdVar6 = pdVar6 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  iVar8 = DAT_0083f08c * 0x10;
  *(undefined4 *)(&DAT_0083b24c + iVar8) = DAT_0083b20c;
  *(undefined4 *)(&DAT_0083b250 + iVar8) = DAT_0083b210;
  *(undefined4 *)(&DAT_0083b254 + iVar8) = DAT_0083b214;
  *(undefined4 *)(&DAT_0083b258 + iVar8) = DAT_0083b218;
  (**(code **)(**(int **)PTR_DAT_00689570 + 0xf4))();
  (**(code **)(**(int **)PTR_DAT_00689570 + 0x130))();
  if (param_3 == '\0') {
    (**(code **)(**(int **)PTR_DAT_00689570 + 0x120))();
  }
  else {
    puVar11 = (undefined4 *)(&DAT_0083b250 + (uint)bVar12 * -8 + DAT_0083f08c * 0x10);
    DAT_0083b1fc = *(float *)(&DAT_0083b24c + DAT_0083f08c * 0x10);
    (&DAT_0083b200)[(uint)bVar12 * -2] = (float)*puVar11;
    (&DAT_0083b204)[(uint)bVar12 * -2 + (uint)bVar12 * -2] = (float)puVar11[(uint)bVar12 * -2 + 1];
    (&DAT_0083b204 + (uint)bVar12 * -2 + (uint)bVar12 * -2)[(uint)bVar12 * -2 + 1] =
         (float)(puVar11 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
    (**(code **)(**(int **)PTR_DAT_00689570 + 0x120))();
  }
  return;
}
