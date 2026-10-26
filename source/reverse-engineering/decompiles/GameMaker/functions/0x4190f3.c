// rea decompile_all
// name: FUN_004190f3
// address: 0x4190f3
// body: available
// range: 0x4190f3-0x4191c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004190f3(void)

{
  unkbyte10 Var1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  short *unaff_EBX;
  int unaff_EBP;
  uint *unaff_ESI;
  int iVar11;
  short *psVar12;
  short *psVar13;
  bool bVar14;
  float10 fVar15;

  uVar7 = *unaff_ESI;
  uVar10 = unaff_ESI[1];
  if (uVar7 != 0 || uVar10 != 0) {
    if ((int)uVar10 < 0) {
      bVar14 = uVar7 != 0;
      uVar7 = -uVar7;
      uVar10 = -(uint)bVar14 - uVar10;
    }
    iVar8 = 0;
    iVar11 = *(int *)(unaff_EBP + 8);
    if (iVar11 < 0) {
      iVar11 = 0;
    }
    if (3 < iVar11) {
      iVar11 = 4;
      uVar3 = uVar7;
      iVar4 = iVar8;
      do {
        iVar8 = iVar4;
        uVar7 = uVar3;
        bVar14 = 0xde0b6b2 < uVar10;
        uVar2 = uVar10 + 0xf21f494d;
        uVar10 = uVar2 - (uVar7 < 0xa7640000);
        uVar3 = uVar7 + 0x589c0000;
        iVar4 = iVar8 + 1;
      } while (bVar14 && (uVar7 < 0xa7640000) <= uVar2);
      uVar10 = uVar10 + 0xde0b6b3 + (uint)(0x589bffff < uVar7 + 0x589c0000);
    }
    *(uint *)(unaff_EBP + -0x20) = uVar7;
    *(uint *)(unaff_EBP + -0x1c) = uVar10;
    fVar15 = (float10)*(longlong *)(unaff_EBP + -0x20);
    if (4 - iVar11 != 0) {
      fVar15 = fVar15 / (float10)*(int *)(*(int *)(unaff_EBP + -4) + 0x4190df + (4 - iVar11) * 4);
    }
    Var1 = to_bcd(fVar15);
    *(unkbyte10 *)(unaff_EBP + -0x18) = Var1;
    psVar12 = (short *)((int)unaff_EBX + 3);
    if (iVar8 != 0) {
      psVar13 = unaff_EBX + 2;
      *(char *)psVar12 = (char)iVar8 + '0';
      iVar8 = 9;
      goto LAB_0041918a;
    }
    iVar8 = 9;
    do {
      bVar9 = *(byte *)(iVar8 + -0x19 + unaff_EBP);
      bVar5 = bVar9 >> 4;
      psVar13 = psVar12;
      if (bVar5 != 0) goto LAB_00419193;
      if ((bVar9 & 0xf) != 0) goto LAB_0041919a;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  sVar6 = 0;
  bVar9 = 0;
  *(undefined1 *)((int)unaff_EBX + 3) = 0;
LAB_004191c0:
  *unaff_EBX = sVar6;
  *(byte *)(unaff_EBX + 1) = bVar9;
  return;
LAB_0041919a:
  while( true ) {
    psVar13 = (short *)((int)psVar12 + 1);
    *(byte *)psVar12 = (bVar9 & 0xf) + 0x30;
    iVar8 = iVar8 + -1;
    if (iVar8 == 0) break;
LAB_0041918a:
    bVar9 = *(byte *)(iVar8 + -0x19 + unaff_EBP);
    bVar5 = bVar9 >> 4;
LAB_00419193:
    psVar12 = (short *)((int)psVar13 + 1);
    *(byte *)psVar13 = bVar5 + 0x30;
  }
  sVar6 = (short)psVar13 - ((short)unaff_EBX + 3 + (short)iVar11);
  do {
    *(char *)psVar13 = '\0';
    psVar13 = (short *)((int)psVar13 + -1);
  } while (*(char *)psVar13 == '0');
  bVar9 = (byte)(unaff_ESI[1] >> 0x1f);
  goto LAB_004191c0;
}
