// rea decompile_all
// name: FUN_0064474c
// address: 0x64474c
// body: available
// range: 0x64474c-0x64478d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064474c(int param_1)

{
  if (*(char *)(param_1 + 0x741) != '\0') {
    FUN_007022dc(*(undefined4 *)(param_1 + 0x704),(&DAT_0078a108)[DAT_0078a150]);
    DAT_0078a150 = DAT_0078a150 + -1;
    *(undefined1 *)(param_1 + 0x740) = 1;
    *(bool *)(param_1 + 0x741) = 1 < DAT_0078a150;
  }
  return;
}
