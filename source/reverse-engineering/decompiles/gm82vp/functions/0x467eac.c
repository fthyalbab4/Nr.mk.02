// rea decompile_all
// name: FUN_00467eac
// address: 0x467eac
// body: available
// range: 0x467eac-0x467f57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00467eac(int param_1)

{
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x2c) * 2;
  *(undefined2 *)(*(int *)(param_1 + 0x44) + -2 + *(int *)(param_1 + 0x4c) * 2) = 0;
  FUN_00466a2c();
  *(uint *)(param_1 + 0x80) = (uint)*(ushort *)(&DAT_0067d5f6 + *(int *)(param_1 + 0x84) * 0xc);
  *(uint *)(param_1 + 0x8c) = (uint)*(ushort *)(&DAT_0067d5f4 + *(int *)(param_1 + 0x84) * 0xc);
  *(uint *)(param_1 + 0x90) = (uint)*(ushort *)(&DAT_0067d5f8 + *(int *)(param_1 + 0x84) * 0xc);
  *(uint *)(param_1 + 0x7c) = (uint)*(ushort *)(&DAT_0067d5fa + *(int *)(param_1 + 0x84) * 0xc);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 2;
  *(undefined4 *)(param_1 + 0x60) = 2;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}
