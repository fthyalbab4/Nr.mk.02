// rea decompile_all
// name: FUN_004ee758
// address: 0x4ee758
// body: available
// range: 0x4ee758-0x4ee79b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ee758(int param_1)

{
  *(undefined1 *)(param_1 + 0x5b) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  if (*(int *)(*(int *)(*(int *)(param_1 + 100) + 0x10) + 0x14) != *(int *)(param_1 + 0x84)) {
    *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 0x10;
    *(undefined4 *)(param_1 + 0x84) =
         *(undefined4 *)(*(int *)(*(int *)(param_1 + 100) + 0x10) + 0x14);
  }
  FUN_004efb90(param_1,0xb00e,0,0);
  return;
}
