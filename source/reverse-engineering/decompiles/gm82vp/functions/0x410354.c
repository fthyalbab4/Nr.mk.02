// rea decompile_all
// name: FUN_00410354
// address: 0x410354
// body: available
// range: 0x410354-0x4103d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410354(void)

{
  uint uVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 in_stack_00000004;
  float10 in_stack_00000010;

  if (((float10)_DAT_0067cb68 < ABS(in_stack_00000004)) ||
     (ROUND(in_stack_00000004) != in_stack_00000004)) {
    if (in_stack_00000010 != (float10)0) {
      fVar3 = (float10)log2(in_stack_00000010);
      fVar4 = (float10)1.4426950408889634 * in_stack_00000004 * (float10)0.6931471805599453 * fVar3;
      fVar3 = ROUND(fVar4);
      fVar4 = (float10)f2xm1(fVar4 - fVar3);
      fscale((float10)1 + fVar4,fVar3);
    }
  }
  else {
    uVar2 = (int)ROUND(in_stack_00000004) >> 0x1f;
    uVar2 = ((int)ROUND(in_stack_00000004) ^ uVar2) - uVar2;
    while (uVar2 != 0) {
      do {
        uVar1 = uVar2 & 1;
        uVar2 = uVar2 >> 1;
      } while (uVar1 == 0);
    }
  }
  return;
}
