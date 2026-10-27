// rea decompile_all
// name: FUN_0058f8a4
// address: 0x58f8a4
// body: available
// range: 0x58f8a4-0x58f9fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058f8a4(int param_1,char param_2)

{
  undefined1 uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  BYTE BVar6;
  int iVar7;
  BYTE *pBVar8;
  int iVar9;
  LOGPALETTE local_413 [128];

  FUN_00404f08(local_413,0x404,0);
  local_413[0].palVersion = 0x300;
  bVar3 = *(char *)(param_1 + 6) * *(char *)(param_1 + 8);
  if (8 < bVar3) {
    bVar3 = 8;
  }
  local_413[0].palNumEntries = 1 << (bVar3 & 0x1f);
  bVar3 = (char)local_413[0].palNumEntries - 1;
  iVar4 = (int)(0xff / (ulonglong)bVar3);
  cVar2 = (char)(0xff / (ulonglong)bVar3);
  if (param_2 == '\0') {
    if ((*(byte *)(param_1 + 0x141) & 2) == 0) {
      iVar4 = bVar3 + 1;
      cVar5 = '\0';
      pBVar8 = &local_413[0].palPalEntry[0].peBlue;
      do {
        BVar6 = cVar5 * cVar2;
        *pBVar8 = BVar6;
        pBVar8[-1] = BVar6;
        ((PALETTEENTRY *)(pBVar8 + -2))->peRed = BVar6;
        cVar5 = cVar5 + '\x01';
        pBVar8 = pBVar8 + 4;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    else {
      iVar7 = bVar3 + 1;
      iVar9 = 0;
      pBVar8 = &local_413[0].palPalEntry[0].peBlue;
      do {
        *pBVar8 = *(BYTE *)(param_1 + 0x14 + iVar4 * iVar9);
        pBVar8[-1] = *(BYTE *)(param_1 + 0x14 + iVar4 * iVar9);
        ((PALETTEENTRY *)(pBVar8 + -2))->peRed = *(BYTE *)(param_1 + 0x14 + iVar4 * iVar9);
        iVar9 = iVar9 + 1;
        pBVar8 = pBVar8 + 4;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  else if ((*(byte *)(param_1 + 0x141) & 2) == 0) {
    iVar9 = bVar3 + 1;
    iVar4 = 0;
    do {
      cVar5 = (char)iVar4 * cVar2;
      iVar7 = (uint)bVar3 - iVar4;
      *(char *)((int)local_413 + iVar7 * 4 + 6) = cVar5;
      *(char *)((int)local_413 + iVar7 * 4 + 5) = cVar5;
      *(char *)((int)local_413 + iVar7 * 4 + 4) = cVar5;
      iVar4 = iVar4 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  else {
    iVar7 = bVar3 + 1;
    iVar9 = 0;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x14 + iVar4 * iVar9);
      *(undefined1 *)((int)local_413 + ((uint)bVar3 - iVar9) * 4 + 6) = uVar1;
      *(undefined1 *)((int)local_413 + ((uint)bVar3 - iVar9) * 4 + 5) = uVar1;
      *(undefined1 *)((int)local_413 + ((uint)bVar3 - iVar9) * 4 + 4) = uVar1;
      iVar9 = iVar9 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  CreatePalette(local_413);
  return;
}
