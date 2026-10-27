// rea decompile_all
// name: FUN_006348f4
// address: 0x6348f4
// body: available
// range: 0x6348f4-0x63493f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006348f4(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4,
                 undefined4 param_5,int param_6)

{
  *param_4 = 0;
  param_4[2] = *(undefined4 *)(param_6 + 8);
  param_4[3] = *(undefined4 *)(param_6 + 0xc);
  if (param_3 == 3) {
    *(double *)(param_4 + 2) =
         (*(double *)(param_6 + 0x20) - *(double *)(param_6 + 8)) * *(double *)(param_6 + 0x38) +
         *(double *)(param_4 + 2);
  }
  return;
}
