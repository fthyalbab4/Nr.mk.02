// rea decompile_all
// name: FUN_004040f8
// address: 0x4040f8
// body: available
// range: 0x4040f8-0x40421c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004040f8(void)

{
  ushort uVar1;
  ulonglong uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined **ppuVar7;
  int iVar8;

  iVar8 = 0x37;
  ppuVar7 = &PTR_LAB_007730a0;
  do {
    if (*ppuVar7 == (undefined *)0x0) {
      *ppuVar7 = FUN_004029a4;
    }
    ppuVar7[-2] = (undefined *)(ppuVar7 + -7);
    ppuVar7[-6] = (undefined *)(ppuVar7 + -7);
    ppuVar7[-4] = (undefined *)0x0;
    ppuVar7[-5] = (undefined *)0x1;
    uVar4 = ((uint)*(ushort *)((int)ppuVar7 + -0x1a) * 0xc + 0xef & 0xffffff00) + 0x30;
    if (uVar4 < 0xb30) {
      uVar4 = 0xb30;
    }
    uVar4 = uVar4 + 0x4d0 >> 0xd;
    if (7 < uVar4) {
      uVar4 = 7;
    }
    *(char *)((int)ppuVar7 + -0x1b) = -1 << ((byte)uVar4 & 0x1f);
    *(short *)(ppuVar7 + -1) = (short)(uVar4 << 0xd) + 0xb30;
    uVar1 = *(ushort *)((int)ppuVar7 + -0x1a);
    uVar4 = ((uint)uVar1 * 0x30 + 0xef & 0xffffff00) + 0x30;
    if (uVar4 < 0x7330) {
      uVar4 = 0x7330;
    }
    if (0xff30 < uVar4) {
      uVar4 = 0xff30;
    }
    uVar2 = (ulonglong)(uVar4 - 0x20) / (ulonglong)uVar1;
    uVar4 = (int)(short)uVar2 * (int)(short)uVar1;
    uVar5 = CONCAT22((short)(uVar2 >> 0x10),(short)uVar4 + 0xef) & 0xffffff00;
    sVar3 = (short)uVar5 + 0x30;
    *(short *)((int)ppuVar7 + -2) = sVar3;
    ppuVar7 = ppuVar7 + 8;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  FUN_004040b4(CONCAT22((short)(uVar5 >> 0x10),sVar3),uVar4 >> 0x10);
  _DAT_00783a2c = &DAT_00783a2c;
  DAT_00783a30 = &DAT_00783a2c;
  iVar8 = 0x400;
  puVar6 = &DAT_00783acc;
  do {
    *puVar6 = puVar6;
    puVar6[1] = puVar6;
    puVar6 = puVar6 + 2;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  _DAT_00785ad0 = &DAT_00785ad0;
  DAT_00785ad4 = &DAT_00785ad0;
  return;
}
