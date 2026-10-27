// rea decompile_all
// name: FUN_0049c094
// address: 0x49c094
// body: available
// range: 0x49c094-0x49c0e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049c094(int param_1)

{
  uint uVar1;
  uint *puVar2;
  bool bVar3;

  uVar1 = 0;
  puVar2 = &DAT_00681430;
  do {
    bVar3 = (byte)uVar1 < 0x1f;
    if ((byte)uVar1 < 0x20) {
      bVar3 = (*(byte *)(*(int *)(param_1 + 8) + 0x6c + ((int)(uVar1 & 0x7f) >> 3)) >> (uVar1 & 7) &
              1) != 0;
    }
    if (bVar3) {
      *(uint *)(*(int *)(param_1 + 4) + 100) = *puVar2 | *(uint *)(*(int *)(param_1 + 4) + 100);
    }
    uVar1 = uVar1 + 1;
    puVar2 = puVar2 + 1;
  } while ((char)uVar1 != '\x16');
  if ((*(byte *)(*(int *)(param_1 + 8) + 0xc0) & 1) != 0) {
    *(uint *)(*(int *)(param_1 + 4) + 100) = *(uint *)(*(int *)(param_1 + 4) + 100) | 0x8000;
  }
  return;
}
