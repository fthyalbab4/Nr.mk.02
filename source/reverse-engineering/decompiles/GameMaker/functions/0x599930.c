// rea decompile_all
// name: FUN_00599930
// address: 0x599930
// body: available
// range: 0x599930-0x599a22 inclusive
// range: 0x599a2a-0x599a6c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x599982 (push 0x599a23 followed by fs-segment stack chaining); handler 0x599a23 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00599930(int *param_1)

{
  LOGPALETTE *pLVar1;
  char cVar2;
  BYTE *pBVar3;
  HPALETTE pHVar4;
  BYTE BVar5;
  int iVar6;
  uint uVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_624;
  undefined1 *puStackY_620;
  undefined1 *puVar8;
  BYTE local_610 [12];
  short local_604;
  BYTE aBStack_5e8 [472];
  LOGPALETTE local_410 [128];
  undefined4 local_c;
  int *local_8;

  puVar8 = &stack0xfffffffc;
  local_410[0].palVersion = 0x300;
  local_8 = param_1;
  cVar2 = FUN_00416e40(param_1[0x32]);
  if (cVar2 != '\0') {
    puStackY_620 = (undefined1 *)0x599974;
    local_c = FUN_0043fc08(&PTR_LAB_00433204,1,local_8[0x32]);
    puStackY_620 = &LAB_00599a23;
    uStackY_624 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_624;
    FUN_0043f488(local_c,local_610,0x200);
    local_410[0].palNumEntries = local_604 + 1U;
    pBVar3 = aBStack_5e8;
    uVar7 = (uint)(ushort)(local_604 + 1U);
    if (-1 < (int)(uVar7 - 1)) {
      pLVar1 = local_410;
      do {
        if (0x1fa < (int)pBVar3 - (int)local_610) {
          FUN_0043f488(local_c,local_610,0x200);
          pBVar3 = local_610;
        }
        pLVar1->palPalEntry[0].peRed = *pBVar3;
        pLVar1->palPalEntry[0].peGreen = pBVar3[2];
        pLVar1->palPalEntry[0].peBlue = pBVar3[4];
        pBVar3 = pBVar3 + 6;
        uVar7 = uVar7 - 1;
        pLVar1 = (LOGPALETTE *)pLVar1->palPalEntry;
      } while (uVar7 != 0);
    }
    *in_FS_OFFSET = uStackY_624;
    puStackY_620 = (undefined1 *)0x599a22;
    FUN_00405a7c(local_c,uStackY_624,puVar8);
    return;
  }
  local_410[0].palNumEntries = 0x100;
  iVar6 = 0;
  pBVar3 = &local_410[0].palPalEntry[0].peBlue;
  do {
    BVar5 = (BYTE)iVar6;
    *pBVar3 = BVar5;
    pBVar3[-1] = BVar5;
    ((PALETTEENTRY *)(pBVar3 + -2))->peRed = BVar5;
    iVar6 = iVar6 + 1;
    pBVar3 = pBVar3 + 4;
  } while (iVar6 != 0x100);
  puStackY_620 = (undefined1 *)0x599a5d;
  pHVar4 = CreatePalette(local_410);
  (**(code **)(*local_8 + 0x3c))(local_8,pHVar4);
  return;
}
