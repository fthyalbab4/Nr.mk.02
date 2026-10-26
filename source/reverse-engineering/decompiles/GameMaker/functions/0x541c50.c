// rea decompile_all
// name: FUN_00541c50
// address: 0x541c50
// body: available
// range: 0x541c50-0x541c8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00541c50(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;

  bVar3 = 0;
  if ((0 < *(int *)(*(int *)(param_1 + 0x10) + 8)) &&
     (bVar3 = 0x80, *(char *)(*(int *)(param_1 + 0x10) + 0x10) != '\0')) {
    bVar3 = 0x88;
  }
  bVar1 = FUN_0054b464(*(undefined4 *)(param_1 + 4));
  cVar2 = FUN_0054b4b8(*(undefined4 *)(param_1 + 4));
  *(byte *)(param_1 + 0xc) = bVar3 | (bVar1 & 7) << 4 | cVar2 - 1U & 7;
  return;
}
