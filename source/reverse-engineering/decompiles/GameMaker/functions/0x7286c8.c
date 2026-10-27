// rea decompile_all
// name: FUN_007286c8
// address: 0x7286c8
// body: available
// range: 0x7286c8-0x728785 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_007286c8(int param_1)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  HPALETTE pHVar4;
  uint uVar5;
  PALETTEENTRY *pPVar6;
  int local_418;
  LOGPALETTE local_414 [128];

  iVar1 = *(int *)(param_1 + 0x14);
  if ((*(char *)(iVar1 + 0x461) == '\0') || (*(char *)(iVar1 + 0x461) == '\x04')) {
    uVar2 = 1 << (*(byte *)(iVar1 + 0x2f) & 0x1f);
    FUN_00404f08(local_414,0x404,0);
    local_414[0].palVersion = 0x300;
    uVar5 = (uint)uVar2;
    local_414[0].palNumEntries = uVar2;
    if (-1 < (int)(uVar5 - 1)) {
      local_418 = 0;
      pPVar6 = local_414[0].palPalEntry;
      do {
        iVar3 = MulDiv(local_418,0xff,uVar2 - 1);
        pPVar6->peRed = *(BYTE *)(*(int *)(iVar1 + 0xc) + 0x13d + iVar3);
        pPVar6->peGreen = pPVar6->peRed;
        pPVar6->peBlue = pPVar6->peRed;
        local_418 = local_418 + 1;
        pPVar6 = pPVar6 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    pHVar4 = CreatePalette(local_414);
    (**(code **)(**(int **)(iVar1 + 0xc) + 0x3c))(*(int **)(iVar1 + 0xc),pHVar4);
  }
  return;
}
