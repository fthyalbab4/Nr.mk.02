// rea decompile_all
// name: FUN_00540ecc
// address: 0x540ecc
// body: available
// range: 0x540ecc-0x540f44 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


HPALETTE FUN_00540ecc(int param_1)

{
  BYTE *pBVar1;
  HPALETTE pHVar2;
  PALETTEENTRY *pPVar3;
  int iVar4;
  int local_414;
  LOGPALETTE local_410 [128];

  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 == 0) {
    pHVar2 = (HPALETTE)0x0;
  }
  else {
    local_410[0].palVersion = 0x300;
    local_410[0].palNumEntries = *(WORD *)(param_1 + 8);
    if (-1 < iVar4 + -1) {
      local_414 = 0;
      pPVar3 = local_410[0].palPalEntry;
      do {
        pBVar1 = (BYTE *)(*(int *)(param_1 + 4) + local_414 * 3);
        pPVar3->peRed = *pBVar1;
        pPVar3->peGreen = pBVar1[1];
        pPVar3->peBlue = pBVar1[2];
        pPVar3->peFlags = '\x04';
        local_414 = local_414 + 1;
        pPVar3 = pPVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    pHVar2 = CreatePalette(local_410);
  }
  return pHVar2;
}
