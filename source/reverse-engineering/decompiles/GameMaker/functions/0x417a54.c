// rea decompile_all
// name: FUN_00417a54
// address: 0x417a54
// body: available
// range: 0x417a54-0x417a81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


short * FUN_00417a54(short *param_1,short param_2)

{
  short *psVar1;
  short *psVar2;

  if (param_2 == 0) {
    psVar1 = (short *)FUN_00417690();
  }
  else {
    psVar1 = (short *)0x0;
    while( true ) {
      while (psVar2 = param_1, param_2 == *psVar2) {
        psVar1 = psVar2;
        param_1 = psVar2 + 1;
      }
      if (*psVar2 == 0) break;
      param_1 = psVar2 + 1;
    }
  }
  return psVar1;
}
