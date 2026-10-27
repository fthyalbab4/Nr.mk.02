// rea decompile_all
// name: FUN_0051c6c4
// address: 0x51c6c4
// body: available
// range: 0x51c6c4-0x51c70e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051c6c4(int param_1)

{
  if ((*(int *)(param_1 + 100) != *(int *)(param_1 + 0x70)) &&
     (*(int *)(param_1 + 0x70) = *(int *)(param_1 + 100), *(short *)(param_1 + 0xa2) != 0)) {
    (**(code **)(param_1 + 0xa0))(*(undefined4 *)(param_1 + 0xa4),param_1);
  }
  if ((*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x6c)) &&
     (*(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x60), *(short *)(param_1 + 0x9a) != 0)) {
    (**(code **)(param_1 + 0x98))(*(undefined4 *)(param_1 + 0x9c),param_1);
  }
  return;
}
