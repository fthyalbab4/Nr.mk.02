// rea decompile_all
// name: FUN_00566a2c
// address: 0x566a2c
// body: available
// range: 0x566a2c-0x566be0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00566a2c(char param_1,undefined4 param_2,undefined4 param_3,double param_4,double param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;

  bVar4 = 0;
  if (param_5 < (double)CONCAT44(param_9,param_8)) {
    uVar1 = param_5._0_4_;
    uVar2 = param_5._4_4_;
    param_5 = (double)CONCAT44(param_9,param_8);
    param_8 = uVar1;
    param_9 = uVar2;
  }
  if (param_4 < (double)CONCAT44(param_7,param_6)) {
    uVar1 = param_4._0_4_;
    uVar2 = param_4._4_4_;
    param_4 = (double)CONCAT44(param_7,param_6);
    param_6 = uVar1;
    param_7 = uVar2;
  }
  iVar3 = FUN_004102e4();
  if ((double)iVar3 == param_5) {
    param_5 = (double)(_DAT_00566be4 + (float10)param_5);
  }
  iVar3 = FUN_004102e4();
  if ((double)iVar3 == param_4) {
    param_4 = (double)(_DAT_00566be4 + (float10)param_4);
  }
  DAT_0083b1fc = (float)(double)CONCAT44(param_9,param_8);
  DAT_0083b200 = (float)(double)CONCAT44(param_7,param_6);
  DAT_0083b204 = (float)*(double *)PTR_DAT_00689120;
  DAT_0083b208 = DAT_00686444;
  DAT_0083b20c = (float)param_5;
  DAT_0083b210 = (float)(double)CONCAT44(param_7,param_6);
  DAT_0083b214 = (float)*(double *)PTR_DAT_00689120;
  DAT_0083b218 = DAT_00686444;
  DAT_0083b21c = (float)param_5;
  DAT_0083b220 = (float)param_4;
  DAT_0083b224 = (float)*(double *)PTR_DAT_00689120;
  DAT_0083b228 = DAT_00686444;
  DAT_0083b22c = (float)(double)CONCAT44(param_9,param_8);
  DAT_0083b230 = (float)param_4;
  DAT_0083b234 = (float)*(double *)PTR_DAT_00689120;
  DAT_0083b238 = DAT_00686444;
  (**(code **)(**(int **)PTR_DAT_00689570 + 0xf4))();
  (**(code **)(**(int **)PTR_DAT_00689570 + 0x130))();
  if (param_1 == '\0') {
    (**(code **)(**(int **)PTR_DAT_00689570 + 0x120))();
  }
  else {
    DAT_0083b23c = DAT_0083b1fc;
    (&DAT_0083b240)[(uint)bVar4 * -2] = (&DAT_0083b200)[(uint)bVar4 * -2];
    (&DAT_0083b244)[(uint)bVar4 * -2 + (uint)bVar4 * -2] =
         (&DAT_0083b204)[(uint)bVar4 * -2 + (uint)bVar4 * -2];
    (&DAT_0083b244 + (uint)bVar4 * -2 + (uint)bVar4 * -2)[(uint)bVar4 * -2 + 1] =
         (&DAT_0083b204 + (uint)bVar4 * -2 + (uint)bVar4 * -2)[(uint)bVar4 * -2 + 1];
    (**(code **)(**(int **)PTR_DAT_00689570 + 0x120))();
  }
  return;
}
