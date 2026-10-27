// rea decompile_all
// name: FUN_0045d8fc
// address: 0x45d8fc
// body: available
// range: 0x45d8fc-0x45d99d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


HPALETTE FUN_0045d8fc(HGDIOBJ param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  HDC hdc;
  HGDIOBJ h;
  UINT UVar2;
  HPALETTE pHVar3;
  LOGPALETTE local_410 [128];

  local_410[0].palVersion = 0x300;
  if (param_1 == (HGDIOBJ)0x0) {
    local_410[0].palNumEntries = (WORD)param_3;
    FUN_0040450c(param_2,local_410[0].palPalEntry,param_3 * 4);
  }
  else {
    hdc = CreateCompatibleDC((HDC)0x0);
    h = SelectObject(hdc,param_1);
    UVar2 = GetDIBColorTable(hdc,0,0x100,(RGBQUAD *)local_410[0].palPalEntry);
    local_410[0].palNumEntries = (WORD)UVar2;
    SelectObject(hdc,h);
    DeleteDC(hdc);
  }
  if (local_410[0].palNumEntries != 0) {
    if ((local_410[0].palNumEntries != 0x10) || (cVar1 = FUN_0045d864(local_410), cVar1 == '\0')) {
      FUN_0045d6f8(local_410[0].palPalEntry,local_410[0].palNumEntries);
    }
    pHVar3 = CreatePalette(local_410);
    return pHVar3;
  }
  return (HPALETTE)0x0;
}
