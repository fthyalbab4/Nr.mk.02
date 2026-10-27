// rea decompile_all
// name: FUN_00461ed4
// address: 0x461ed4
// body: available
// range: 0x461ed4-0x461f34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


HPALETTE FUN_00461ed4(HPALETTE param_1)

{
  int iVar1;
  HPALETTE pHVar2;
  UINT local_410;
  LOGPALETTE local_40c [128];

  pHVar2 = (HPALETTE)0x0;
  if (param_1 != (HPALETTE)0x0) {
    local_410 = 0;
    iVar1 = GetObjectW(param_1,4,&local_410);
    if ((iVar1 != 0) && (local_410 != 0)) {
      local_40c[0].palVersion = 0x300;
      local_40c[0].palNumEntries = (WORD)local_410;
      GetPaletteEntries(param_1,0,local_410,local_40c[0].palPalEntry);
      pHVar2 = CreatePalette(local_40c);
    }
  }
  return pHVar2;
}
