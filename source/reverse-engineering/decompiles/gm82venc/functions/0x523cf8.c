// rea decompile_all
// name: FUN_00523cf8
// address: 0x523cf8
// body: available
// range: 0x523cf8-0x523d50 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00523cf8(void)

{
  PALETTEENTRY *pPVar1;
  int iVar2;
  BYTE *pBVar3;
  LOGPALETTE local_408 [128];

  local_408[0].palVersion = 0x300;
  local_408[0].palNumEntries = 2;
  iVar2 = 2;
  pPVar1 = local_408[0].palPalEntry;
  pBVar3 = &DAT_0068451c;
  do {
    pPVar1->peRed = *pBVar3;
    pPVar1->peGreen = *pBVar3;
    pPVar1->peBlue = *pBVar3;
    pPVar1->peFlags = '\x04';
    pBVar3 = pBVar3 + 1;
    pPVar1 = pPVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  CreatePalette(local_408);
  return;
}
