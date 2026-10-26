// rea decompile_all
// name: FUN_0051c748
// address: 0x51c748
// body: available
// range: 0x51c748-0x51c79d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051c748(int param_1,undefined4 param_2)

{
  FUN_0043b258(*(undefined4 *)(param_1 + 0x54),param_2,0);
  FUN_0043b258(*(undefined4 *)(param_1 + 0x50),param_2,0);
  FUN_005207a4(DAT_007882ec);
  if ((*(int *)(*(int *)(param_1 + 0x54) + 8) == 0) && (*(int *)(DAT_007882ec + 0x84) != 0)) {
    FUN_004f9b00(*(undefined4 *)(DAT_007882ec + 0x84));
  }
  return;
}
