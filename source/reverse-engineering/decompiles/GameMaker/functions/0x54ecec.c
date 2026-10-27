// rea decompile_all
// name: FUN_0054ecec
// address: 0x54ecec
// body: available
// range: 0x54ecec-0x54ed96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054ecec(int param_1)

{
  BYTE BVar1;
  int iVar2;
  PALETTEENTRY *pPVar3;
  uint uVar4;
  LOGPALETTE local_40c [128];

  local_40c[0].palVersion = 0x300;
  local_40c[0].palNumEntries = *(ushort *)(param_1 + 0x84);
  if (*(int *)(param_1 + 0x2c) == 1) {
    uVar4 = (uint)local_40c[0].palNumEntries;
    if (-1 < (int)(uVar4 - 1)) {
      iVar2 = 0;
      pPVar3 = local_40c[0].palPalEntry;
      do {
        BVar1 = *(BYTE *)(**(int **)(param_1 + 0x88) + iVar2);
        pPVar3->peRed = BVar1;
        pPVar3->peGreen = BVar1;
        pPVar3->peBlue = BVar1;
        pPVar3->peFlags = '\0';
        iVar2 = iVar2 + 1;
        pPVar3 = pPVar3 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  else {
    uVar4 = (uint)local_40c[0].palNumEntries;
    if (-1 < (int)(uVar4 - 1)) {
      iVar2 = 0;
      pPVar3 = local_40c[0].palPalEntry;
      do {
        pPVar3->peRed = *(BYTE *)(*(int *)(*(int *)(param_1 + 0x88) + 8) + iVar2);
        pPVar3->peGreen = *(BYTE *)(*(int *)(*(int *)(param_1 + 0x88) + 4) + iVar2);
        pPVar3->peBlue = *(BYTE *)(**(int **)(param_1 + 0x88) + iVar2);
        pPVar3->peFlags = '\0';
        iVar2 = iVar2 + 1;
        pPVar3 = pPVar3 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  CreatePalette(local_40c);
  return;
}
