// rea decompile_all
// name: FUN_00486f9c
// address: 0x486f9c
// body: available
// range: 0x486f9c-0x486fd9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


short * FUN_00486f9c(int *param_1)

{
  short *psVar1;
  short *psVar2;

  psVar1 = (short *)*param_1;
  if (*param_1 != 0) {
    for (psVar1 = (short *)*param_1; psVar2 = psVar1, *psVar1 == 0x20; psVar1 = psVar1 + 1) {
    }
    for (; (*psVar2 != 0 && (*psVar2 != 0x2c)); psVar2 = psVar2 + 1) {
    }
    if (*psVar2 == 0x2c) {
      *psVar2 = 0;
      psVar2 = psVar2 + 1;
    }
    *param_1 = (int)psVar2;
  }
  return psVar1;
}
