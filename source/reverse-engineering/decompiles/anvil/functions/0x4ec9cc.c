// rea decompile_all
// name: FUN_004ec9cc
// address: 0x4ec9cc
// body: available
// range: 0x4ec9cc-0x4eca01 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ec9cc(int param_1)

{
  tagPOINT tStack_c;

  FUN_004ec880(param_1);
  if (*(char *)(param_1 + 0x89) == '\0') {
    GetCursorPos(&tStack_c);
    FUN_004ecd4c(param_1,&tStack_c);
  }
  else if (*(char *)(param_1 + 0x89) == '\x01') {
    FUN_004eca04(param_1);
  }
  return;
}
