// rea decompile_all
// name: FUN_00539a48
// address: 0x539a48
// body: available
// range: 0x539a48-0x539aa9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00539a48(int param_1)

{
  uint uVar1;

  *(undefined1 *)(param_1 + 0xc) = 0;
  uVar1 = *(uint *)(*(int *)(param_1 + 8) + 0x1c) & *(uint *)(*(int *)(param_1 + 8) + 0x18);
  if ((uVar1 & 1) != 0) {
    *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 1;
  }
  if ((uVar1 & 0x10) != 0) {
    *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 2;
  }
  if ((uVar1 & 4) != 0) {
    *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 4;
  }
  if ((uVar1 & 2) != 0) {
    *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 8;
  }
  if ((uVar1 & 8) != 0) {
    *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 0x10;
  }
  if ((uVar1 & 0x20) != 0) {
    *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 0x20;
  }
  return;
}
