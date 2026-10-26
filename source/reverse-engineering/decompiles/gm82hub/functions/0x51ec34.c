// rea decompile_all
// name: FUN_0051ec34
// address: 0x51ec34
// body: available
// range: 0x51ec34-0x51ece3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051ec34(void)

{
  char cVar1;
  PALETTEENTRY *pPVar2;
  PALETTEENTRY *pPVar3;
  PALETTEENTRY *local_370;
  char local_36a;
  char local_369;
  LOGPALETTE local_368 [108];

  local_368[0].palVersion = 0x300;
  local_368[0].palNumEntries = 0xd8;
  local_369 = '\0';
  local_370 = local_368[0].palPalEntry;
  do {
    local_36a = '\0';
    pPVar3 = local_370;
    do {
      cVar1 = '\0';
      pPVar2 = pPVar3;
      do {
        pPVar2->peRed = local_369 * '3';
        pPVar2->peGreen = local_36a * '3';
        pPVar2->peBlue = cVar1 * '3';
        pPVar2->peFlags = '\0';
        cVar1 = cVar1 + '\x01';
        pPVar2 = pPVar2 + 1;
      } while (cVar1 != '\x06');
      local_36a = local_36a + '\x01';
      pPVar3 = pPVar3 + 6;
    } while (local_36a != '\x06');
    local_369 = local_369 + '\x01';
    local_370 = local_370 + 0x24;
  } while (local_369 != '\x06');
  CreatePalette(local_368);
  return;
}
