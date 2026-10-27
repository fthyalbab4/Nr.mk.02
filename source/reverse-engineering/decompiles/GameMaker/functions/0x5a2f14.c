// rea decompile_all
// name: FUN_005a2f14
// address: 0x5a2f14
// body: available
// range: 0x5a2f14-0x5a2f64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a2f14(int param_1)

{
  *(int *)(param_1 + 0x14) = param_1 + 0x24c;
  *(undefined1 **)(param_1 + 0x254) = &LAB_005a2e44;
  *(code **)(param_1 + 600) = FUN_005a2e60;
  *(undefined1 **)(param_1 + 0x25c) = &LAB_005a2eec;
  *(code **)(param_1 + 0x260) = FUN_00584be8;
  *(undefined **)(param_1 + 0x264) = &DAT_005a2f10;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 0x24c) = 0;
  return;
}
