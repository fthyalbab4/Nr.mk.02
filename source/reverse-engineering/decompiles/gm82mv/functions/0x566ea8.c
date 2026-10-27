// rea decompile_all
// name: FUN_00566ea8
// address: 0x566ea8
// body: available
// range: 0x566ea8-0x566ffb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00566ea8(undefined4 param_1,float param_2,char param_3,double param_4,double param_5,
                 double param_6,double param_7)

{
  double dVar1;
  double dVar2;
  float *pfVar3;
  double *pdVar4;
  double *pdVar5;
  int iVar6;
  undefined4 *puVar7;
  byte bVar8;

  bVar8 = 0;
  dVar1 = (param_7 + param_5) / 2.0;
  dVar2 = (param_6 + param_4) / 2.0;
  DAT_0083b1fc = (float)dVar1;
  DAT_0083b200 = (float)dVar2;
  DAT_0083b204 = (float)*(double *)PTR_DAT_00689120;
  iVar6 = DAT_0083f08c + 1;
  DAT_0083b208 = param_1;
  if (0 < iVar6) {
    pdVar5 = (double *)&DAT_0083f090;
    pfVar3 = (float *)&DAT_0083b20c;
    pdVar4 = (double *)&DAT_0083f298;
    do {
      *pfVar3 = (float)((float10)ABS((param_7 - param_5) / 2.0) * (float10)*pdVar5 + (float10)dVar1)
      ;
      pfVar3[1] = (float)((float10)ABS((param_6 - param_4) / 2.0) * (float10)*pdVar4 +
                         (float10)dVar2);
      pfVar3[2] = (float)*(double *)PTR_DAT_00689120;
      pfVar3[3] = param_2;
      pdVar4 = pdVar4 + 1;
      pfVar3 = pfVar3 + 4;
      pdVar5 = pdVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  (**(code **)(**(int **)PTR_DAT_00689570 + 0xf4))();
  (**(code **)(**(int **)PTR_DAT_00689570 + 0x130))();
  if (param_3 == '\0') {
    (**(code **)(**(int **)PTR_DAT_00689570 + 0x120))();
  }
  else {
    puVar7 = &DAT_0083b200 + DAT_0083f08c * 4 + (uint)bVar8 * -2;
    DAT_0083b1fc = (&DAT_0083b1fc)[DAT_0083f08c * 4];
    (&DAT_0083b200)[(uint)bVar8 * -2] = (float)*puVar7;
    (&DAT_0083b204)[(uint)bVar8 * -2 + (uint)bVar8 * -2] = (float)puVar7[(uint)bVar8 * -2 + 1];
    (&DAT_0083b204 + (uint)bVar8 * -2 + (uint)bVar8 * -2)[(uint)bVar8 * -2 + 1] =
         (float)(puVar7 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
    (**(code **)(**(int **)PTR_DAT_00689570 + 0x120))();
  }
  return;
}
