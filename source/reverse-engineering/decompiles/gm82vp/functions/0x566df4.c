// rea decompile_all
// name: FUN_00566df4
// address: 0x566df4
// body: available
// range: 0x566df4-0x566e98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00566df4(int param_1)

{
  double *pdVar1;
  int iVar2;
  double *pdVar3;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 fVar4;

  if (param_1 < 4) {
    param_1 = 4;
  }
  if (0x40 < param_1) {
    param_1 = 0x40;
  }
  if (param_1 < 0) {
    param_1 = param_1 + 3;
  }
  DAT_0083f08c = (param_1 >> 2) * 4;
  if (-1 < DAT_0083f08c) {
    iVar2 = DAT_0083f08c + 1;
    pdVar1 = (double *)&DAT_0083f090;
    pdVar3 = (double *)&DAT_0083f298;
    do {
      fVar4 = in_ST5;
      FUN_00404864();
      *pdVar1 = (double)in_ST0;
      in_ST0 = in_ST2;
      in_ST2 = in_ST4;
      in_ST4 = fVar4;
      FUN_00404874();
      *pdVar3 = (double)in_ST1;
      pdVar3 = pdVar3 + 1;
      pdVar1 = pdVar1 + 1;
      iVar2 = iVar2 + -1;
      in_ST1 = in_ST3;
      in_ST3 = in_ST5;
      in_ST5 = fVar4;
    } while (iVar2 != 0);
  }
  return;
}
