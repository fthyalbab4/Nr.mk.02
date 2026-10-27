// rea decompile_all
// name: FUN_005666a0
// address: 0x5666a0
// body: available
// range: 0x5666a0-0x566836 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005666a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,double param_4,
                 double param_5,double param_6,double param_7,double param_8)

{
  double dVar1;
  double dVar2;
  float10 in_ST0;

  FUN_004048a8();
  dVar1 = (double)in_ST0;
  if (dVar1 != 0.0) {
    dVar2 = ((param_6 - param_8) * param_4 * 0.5) / dVar1;
    dVar1 = ((param_5 - param_7) * param_4 * 0.5) / dVar1;
    DAT_0083b1fc = (float)((float10)param_8 - (float10)dVar1);
    DAT_0083b200 = (float)((float10)param_7 + (float10)dVar2);
    DAT_0083b204 = (float)*(double *)PTR_DAT_00689120;
    DAT_0083b208 = FUN_0056382c(param_1);
    DAT_0083b20c = (float)((float10)param_6 - (float10)dVar1);
    DAT_0083b210 = (float)((float10)param_5 + (float10)dVar2);
    DAT_0083b214 = (float)*(double *)PTR_DAT_00689120;
    DAT_0083b218 = FUN_0056382c(param_2);
    DAT_0083b21c = (float)((float10)param_6 + (float10)dVar1);
    DAT_0083b220 = (float)((float10)param_5 - (float10)dVar2);
    DAT_0083b224 = (float)*(double *)PTR_DAT_00689120;
    DAT_0083b228 = FUN_0056382c(param_2);
    DAT_0083b22c = (float)((float10)param_8 + (float10)dVar1);
    DAT_0083b230 = (float)((float10)param_7 - (float10)dVar2);
    DAT_0083b234 = (float)*(double *)PTR_DAT_00689120;
    DAT_0083b238 = FUN_0056382c(param_1);
    (**(code **)(**(int **)PTR_DAT_00689570 + 0xf4))();
    (**(code **)(**(int **)PTR_DAT_00689570 + 0x130))();
    (**(code **)(**(int **)PTR_DAT_00689570 + 0x120))();
  }
  return;
}
