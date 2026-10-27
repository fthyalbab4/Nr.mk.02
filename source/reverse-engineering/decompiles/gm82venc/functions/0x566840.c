// rea decompile_all
// name: FUN_00566840
// address: 0x566840
// body: available
// range: 0x566840-0x566918 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00566840(char param_1,undefined4 param_2,undefined4 param_3,double param_4,double param_5,
                 double param_6,double param_7,double param_8,double param_9)

{
  byte bVar1;

  bVar1 = 0;
  DAT_0083b1fc = (float)param_9;
  DAT_0083b200 = (float)param_8;
  DAT_0083b204 = (float)*(double *)PTR_DAT_00689120;
  DAT_0083b208 = DAT_00686444;
  DAT_0083b20c = (float)param_7;
  DAT_0083b210 = (float)param_6;
  DAT_0083b214 = (float)*(double *)PTR_DAT_00689120;
  DAT_0083b218 = DAT_00686444;
  DAT_0083b21c = (float)param_5;
  DAT_0083b220 = (float)param_4;
  DAT_0083b224 = (float)*(double *)PTR_DAT_00689120;
  DAT_0083b228 = DAT_00686444;
  (**(code **)(**(int **)PTR_DAT_00689570 + 0xf4))();
  (**(code **)(**(int **)PTR_DAT_00689570 + 0x130))();
  if (param_1 == '\0') {
    (**(code **)(**(int **)PTR_DAT_00689570 + 0x120))();
  }
  else {
    DAT_0083b22c = DAT_0083b1fc;
    (&DAT_0083b230)[(uint)bVar1 * -2] = (&DAT_0083b200)[(uint)bVar1 * -2];
    (&DAT_0083b234)[(uint)bVar1 * -2 + (uint)bVar1 * -2] =
         (&DAT_0083b204)[(uint)bVar1 * -2 + (uint)bVar1 * -2];
    (&DAT_0083b234 + (uint)bVar1 * -2 + (uint)bVar1 * -2)[(uint)bVar1 * -2 + 1] =
         (&DAT_0083b204 + (uint)bVar1 * -2 + (uint)bVar1 * -2)[(uint)bVar1 * -2 + 1];
    (**(code **)(**(int **)PTR_DAT_00689570 + 0x120))();
  }
  return;
}
