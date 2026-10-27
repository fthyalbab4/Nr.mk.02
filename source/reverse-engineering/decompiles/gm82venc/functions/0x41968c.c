// rea decompile_all
// name: FUN_0041968c
// address: 0x41968c
// body: available
// range: 0x41968c-0x4196ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041968c(double *param_1)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  float10 fVar2;

  fVar2 = (float10)*param_1;
  uVar1 = FUN_004048c4();
  *param_1 = (double)CONCAT44(extraout_EDX,uVar1);
  if (*param_1 < 0.0) {
    FUN_00404814();
    *param_1 = (double)((float10)*param_1 - ABS(fVar2));
  }
  else {
    FUN_00404814();
    *param_1 = (double)(ABS(fVar2) + (float10)*param_1);
  }
  return;
}
