// rea decompile_all
// name: FUN_00513228
// address: 0x513228
// body: available
// range: 0x513228-0x513262 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00513228(void)

{
  if (*(int *)(DAT_007882ec + 0x170) != 0) {
    FUN_0051e3c0(DAT_007882ec,0);
  }
  FUN_005202a0(DAT_007882ec,0);
  FUN_004491b8(DAT_007882ec);
  FUN_0044914c(DAT_007882ec);
  return;
}
