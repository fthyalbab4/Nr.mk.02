// rea decompile_all
// name: FUN_004a9eb4
// address: 0x4a9eb4
// body: available
// range: 0x4a9eb4-0x4a9ee2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a9eb4(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined4 auStack_17f8 [1531];

  bVar2 = 0;
  FUN_004a94e0(param_1,auStack_17f8 + 0x5f7);
  puVar1 = param_2 + (uint)bVar2 * -2 + 1;
  *param_2 = auStack_17f8[0x5f7];
  *puVar1 = auStack_17f8[(uint)bVar2 * -2 + 0x5f8];
  puVar1[(uint)bVar2 * -2 + 1] = auStack_17f8[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x5f9];
  (puVar1 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
       (auStack_17f8 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x5f9)[(uint)bVar2 * -2 + 1];
  FUN_004f1e48(param_1,param_2);
  return;
}
