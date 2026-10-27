// rea decompile_all
// name: FUN_00529338
// address: 0x529338
// body: available
// range: 0x529338-0x5293d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00529338(int param_1)

{
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x24) * 2;
  *(undefined2 *)(*(int *)(param_1 + 0x3c) + -2 + *(int *)(param_1 + 0x44) * 2) = 0;
  FUN_00528690();
  *(uint *)(param_1 + 0x78) = (uint)*(ushort *)(&DAT_007794a2 + *(int *)(param_1 + 0x7c) * 0xc);
  *(uint *)(param_1 + 0x84) = (uint)*(ushort *)(&DAT_007794a0 + *(int *)(param_1 + 0x7c) * 0xc);
  *(uint *)(param_1 + 0x88) = (uint)*(ushort *)(&DAT_007794a4 + *(int *)(param_1 + 0x7c) * 0xc);
  *(uint *)(param_1 + 0x74) = (uint)*(ushort *)(&DAT_007794a6 + *(int *)(param_1 + 0x7c) * 0xc);
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 2;
  *(undefined4 *)(param_1 + 0x58) = 2;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}
