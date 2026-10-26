// rea decompile_all
// name: FUN_004e82b4
// address: 0x4e82b4
// body: available
// range: 0x4e82b4-0x4e82e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e82b4(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined4 auStack_1814 [1538];

  bVar3 = 0;
  auStack_1814[0x5f8] = 0x28;
  (**(code **)PTR_DAT_00688cb4)();
  puVar1 = (undefined4 *)(param_2 + 4 + (uint)bVar3 * -8);
  *(undefined4 **)param_2 = auStack_1814 + 0x5f8;
  puVar2 = puVar1 + (uint)bVar3 * -2 + 1;
  *puVar1 = auStack_1814[(uint)bVar3 * -2 + 0x5f8];
  *puVar2 = auStack_1814[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x5f9];
  puVar2[(uint)bVar3 * -2 + 1] =
       (auStack_1814 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x5f9)[(uint)bVar3 * -2 + 1];
  return;
}
