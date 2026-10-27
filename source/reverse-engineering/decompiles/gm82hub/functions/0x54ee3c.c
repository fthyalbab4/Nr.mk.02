// rea decompile_all
// name: FUN_0054ee3c
// address: 0x54ee3c
// body: available
// range: 0x54ee3c-0x54ee83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054ee3c(int param_1,byte param_2,byte param_3)

{
  if (((*(char *)(param_1 + 0x2e) == '\0') || (param_2 != *(byte *)(param_1 + 0x2c))) ||
     (param_3 != *(byte *)(param_1 + 0x2d))) {
    FUN_00439444(param_1,(&PTR_FUN_00686278)[(uint)param_2 * 2 + (uint)param_3]);
    *(byte *)(param_1 + 0x2c) = param_2;
    *(byte *)(param_1 + 0x2d) = param_3;
    *(undefined1 *)(param_1 + 0x2e) = 1;
  }
  return;
}
