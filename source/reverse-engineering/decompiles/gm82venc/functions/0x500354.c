// rea decompile_all
// name: FUN_00500354
// address: 0x500354
// body: available
// range: 0x500354-0x50038d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00500354(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  short *psVar1;

  psVar1 = (short *)FUN_00416ddc(param_1);
  if (*psVar1 == 0x5c) {
    FUN_00408678(param_3,param_1,param_2);
  }
  else {
    FUN_0040875c(param_3,3);
  }
  return;
}
