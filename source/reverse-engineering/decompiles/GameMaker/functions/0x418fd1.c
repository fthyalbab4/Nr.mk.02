// rea decompile_all
// name: FUN_00418fd1
// address: 0x418fd1
// body: available
// range: 0x418fd1-0x4190e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00418fd1(void)

{
  char *pcVar1;
  unkbyte10 Var2;
  float10 fVar3;
  byte bVar4;
  undefined2 uVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  undefined2 *unaff_EBX;
  int unaff_EBP;
  float10 *unaff_ESI;
  short *psVar9;
  short *psVar10;
  byte bVar11;
  float10 fVar12;

  bVar11 = 0;
  uVar7 = *(ushort *)((int)unaff_ESI + 8);
  uVar6 = uVar7 & 0x7fff;
  if ((uVar7 & 0x7fff) == 0) {
LAB_00418ffc:
    uVar7 = 0;
  }
  else {
    if (uVar6 != 0x7fff) {
      fVar12 = *unaff_ESI;
      *(int *)(unaff_EBP + -8) = ((int)((uVar6 - 0x3fff) * 0x4d10) >> 0x10) + 1;
      fVar12 = ABS(fVar12);
      thunk_FUN_0040564c(0x12 - *(int *)(unaff_EBP + -8));
      fVar12 = ROUND(fVar12);
      fVar3 = *(float10 *)(&DAT_00773c24 + *(int *)(unaff_EBP + -4));
      *(ushort *)(unaff_EBP + -10) =
           (ushort)(fVar3 < fVar12) << 8 | (ushort)(NAN(fVar3) || NAN(fVar12)) << 10 |
           (ushort)(fVar3 == fVar12) << 0xe;
      if ((*(ushort *)(unaff_EBP + -10) & 0x4100) != 0) {
        fVar12 = fVar12 / (float10)*(int *)((int)&DAT_00773c30 + *(int *)(unaff_EBP + -4));
        *(int *)(unaff_EBP + -8) = *(int *)(unaff_EBP + -8) + 1;
      }
      Var2 = to_bcd(fVar12);
      *(unkbyte10 *)(unaff_EBP + -0x18) = Var2;
      iVar8 = 9;
      psVar9 = (short *)((int)unaff_EBX + 3);
      do {
        bVar4 = *(byte *)(iVar8 + -0x19 + unaff_EBP);
        psVar10 = psVar9 + (uint)bVar11 * -2 + 1;
        *psVar9 = (CONCAT11(bVar4,bVar4 >> 4) & 0xfff) + 0x3030;
        iVar8 = iVar8 + -1;
        psVar9 = psVar10;
      } while (iVar8 != 0);
      *(undefined1 *)psVar10 = 0;
      uVar6 = *(int *)(unaff_EBP + -8) + *(int *)(unaff_EBP + 8);
      if ((int)uVar6 < 0) {
        uVar6 = 0;
        goto LAB_00418ffc;
      }
      if (*(uint *)(unaff_EBP + 0xc) <= uVar6) {
        uVar6 = *(uint *)(unaff_EBP + 0xc);
      }
      if (uVar6 < 0x12) {
        if (*(byte *)((int)unaff_EBX + uVar6 + 3) < 0x35) goto LAB_004190be;
        do {
          *(undefined1 *)((int)unaff_EBX + uVar6 + 3) = 0;
          if ((int)(uVar6 - 1) < 0) {
            *(undefined2 *)((int)unaff_EBX + 3) = 0x31;
            *(int *)(unaff_EBP + -8) = *(int *)(unaff_EBP + -8) + 1;
            break;
          }
          pcVar1 = (char *)((int)unaff_EBX + uVar6 + 2);
          *pcVar1 = *pcVar1 + '\x01';
          iVar8 = uVar6 + 2;
          uVar6 = uVar6 - 1;
        } while (0x39 < *(byte *)((int)unaff_EBX + iVar8));
      }
      else {
        uVar6 = 0x12;
LAB_004190be:
        do {
          *(undefined1 *)((int)unaff_EBX + uVar6 + 3) = 0;
          if ((int)(uVar6 - 1) < 0) {
            bVar11 = 0;
            goto LAB_004190d1;
          }
          iVar8 = uVar6 + 2;
          uVar6 = uVar6 - 1;
        } while (*(char *)((int)unaff_EBX + iVar8) == '0');
      }
      bVar11 = (byte)((ushort)*(undefined2 *)((int)unaff_ESI + 8) >> 8);
LAB_004190d1:
      uVar5 = (undefined2)*(undefined4 *)(unaff_EBP + -8);
      goto LAB_004190d4;
    }
    if ((((unkuint10)*unaff_ESI & 0x8000000000000000) != 0) &&
       ((*(int *)unaff_ESI != 0 || (*(int *)((int)unaff_ESI + 4) != -0x80000000)))) {
      uVar6 = 0x8000;
      goto LAB_00418ffc;
    }
  }
  bVar11 = (byte)(uVar7 >> 8);
  uVar5 = (undefined2)uVar6;
  *(undefined1 *)((int)unaff_EBX + 3) = 0;
LAB_004190d4:
  *unaff_EBX = uVar5;
  *(byte *)(unaff_EBX + 1) = bVar11 >> 7;
  return;
}
