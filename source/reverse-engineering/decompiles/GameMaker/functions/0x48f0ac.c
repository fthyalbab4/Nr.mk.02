// rea decompile_all
// name: FUN_0048f0ac
// address: 0x48f0ac
// body: available
// range: 0x48f0ac-0x48f0d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048f0ac(int param_1)

{
  char cVar1;

  *(undefined1 *)(param_1 + 0x288) = 1;
  FUN_004f1dd0(param_1);
  *(undefined1 *)(param_1 + 0x288) = 0;
  cVar1 = FUN_004f7a54(param_1);
  if (cVar1 != '\0') {
    FUN_0048f20c(param_1);
  }
  return;
}
