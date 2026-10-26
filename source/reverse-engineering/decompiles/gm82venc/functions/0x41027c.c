// rea decompile_all
// name: FUN_0041027c
// address: 0x41027c
// body: available
// range: 0x41027c-0x4102ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041027c(float10 *param_1,int *param_2,undefined4 param_3,float10 param_4)

{
  unkbyte10 Var1;
  float10 fVar2;

  *param_2 = 0;
  if (param_4 != (float10)0) {
    Var1 = extract_significand(param_4);
    fVar2 = (float10)extract_exponent(param_4);
    *param_2 = (int)ROUND(fVar2);
    param_4 = (float10)fscale(Var1,-(float10)1);
    *param_2 = *param_2 + 1;
  }
  *param_1 = param_4;
  return;
}
