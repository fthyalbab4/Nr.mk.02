// rea decompile_all
// name: FUN_0057036c
// address: 0x57036c
// body: available
// range: 0x57036c-0x57039f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057036c(int param_1)

{
  char cVar1;

  FUN_004f33c4(param_1);
  *(undefined1 *)(param_1 + 0x324) = *(undefined1 *)(param_1 + 0x298);
  if (*(char *)(param_1 + 0x298) == '\x01') {
    cVar1 = FUN_0050513c(param_1);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0x324) = 0;
    }
  }
  return;
}
