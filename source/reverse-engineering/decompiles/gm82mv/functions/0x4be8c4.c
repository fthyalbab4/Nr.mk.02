// rea decompile_all
// name: FUN_004be8c4
// address: 0x4be8c4
// body: available
// range: 0x4be8c4-0x4be8f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004be8c4(int param_1)

{
  if (((*(byte *)(param_1 + 0x55) & 0x40) == 0) && ((*(byte *)(param_1 + 0x1c) & 2) == 0)) {
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 0x4c);
  }
  return;
}
