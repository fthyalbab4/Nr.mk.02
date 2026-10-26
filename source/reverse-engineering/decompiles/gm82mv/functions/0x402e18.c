// rea decompile_all
// name: FUN_00402e18
// address: 0x402e18
// body: available
// range: 0x402e18-0x402e64 inclusive
// range: 0x402e68-0x402e84 inclusive
// range: 0x402e88-0x402e95 inclusive
// range: 0x402e98-0x40303a inclusive
// range: 0x40303c-0x403074 inclusive
// range: 0x403078-0x4030bd inclusive
// range: 0x4030c0-0x4030e6 inclusive
// range: 0x4030e8-0x403174 inclusive
// range: 0x403178-0x40319b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00402e18(uint param_1)

{
  int *piVar1;
  char *pcVar2;
  uint *puVar3;
  byte *pbVar4;
  char cVar5;
  ushort uVar6;
  undefined4 *puVar7;
  byte bVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  char *pcVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;

  if (0xa2c < param_1) {
    if (0x40a2c < param_1) {
      if (-1 < (int)param_1) {
        uVar17 = param_1 + 0x10013 & 0xffff0000;
        puVar10 = VirtualAlloc((LPVOID)0x0,uVar17,0x101000,4);
        if (puVar10 != (undefined4 *)0x0) {
          puVar10[2] = param_1;
          puVar10[3] = uVar17 | 4;
          FUN_00402b7c();
          puVar7 = DAT_0068cad4;
          *puVar10 = &DAT_0068cad0;
          puVar9 = puVar10;
          puVar10[1] = DAT_0068cad4;
          DAT_0068cad4 = puVar9;
          *puVar7 = puVar10;
          DAT_0068cacc = 0;
          puVar10 = puVar10 + 4;
        }
        return puVar10;
      }
      return (undefined4 *)0x0;
    }
    uVar17 = param_1 + 0xd3 & 0xffffff00;
    uVar18 = uVar17 + 0x30;
    if (DAT_0068a055 != '\0') {
      while( true ) {
        do {
          LOCK();
          bVar19 = DAT_0068aa3c == '\0';
          if (bVar19) {
            DAT_0068aa3c = '\x01';
          }
          UNLOCK();
          if (bVar19) goto LAB_00403096;
        } while (DAT_0068a8dd != '\0');
        Sleep(0);
        LOCK();
        bVar19 = DAT_0068aa3c == '\0';
        if (bVar19) {
          DAT_0068aa3c = '\x01';
        }
        UNLOCK();
        if (bVar19) break;
        Sleep(10);
      }
    }
LAB_00403096:
    uVar15 = uVar17 - 0xb00;
    uVar14 = uVar15 >> 0xd;
    uVar11 = -1 << ((byte)(uVar15 >> 8) & 0x1f) & (&DAT_0068aa4c)[uVar14];
    if (uVar11 == 0) {
      uVar15 = -2 << ((byte)uVar14 & 0x1f) & _DAT_0068aa48;
      if (uVar15 == 0) {
        if (DAT_0068aa44 < uVar18) {
          puVar10 = (undefined4 *)FUN_00402b04(uVar18);
        }
        else {
          puVar10 = (undefined4 *)((int)DAT_0068aa40 - uVar18);
          DAT_0068aa40 = puVar10;
          DAT_0068aa44 = DAT_0068aa44 - uVar18;
          puVar10[-1] = uVar18 | 2;
        }
        DAT_0068aa3c = 0;
        return puVar10;
      }
      uVar14 = 0;
      if (uVar15 != 0) {
        for (; (uVar15 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
        }
      }
      uVar12 = 0;
      if ((&DAT_0068aa4c)[uVar14] != 0) {
        for (; ((uint)(&DAT_0068aa4c)[uVar14] >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
        }
      }
      uVar12 = uVar12 | uVar14 << 5;
    }
    else {
      uVar12 = 0;
      if (uVar11 != 0) {
        for (; (uVar11 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
        }
      }
      uVar12 = uVar15 >> 8 & 0xffffffe0 | uVar12;
    }
    puVar10 = (undefined4 *)(&DAT_0068aad0)[uVar12 * 2];
    puVar7 = (undefined4 *)puVar10[1];
    (&DAT_0068aad0)[uVar12 * 2] = puVar7;
    *puVar7 = &DAT_0068aacc + uVar12 * 2;
    if (&DAT_0068aacc + uVar12 * 2 == puVar7) {
      bVar8 = (byte)uVar12 & 0x1f;
      puVar3 = &DAT_0068aa4c + uVar14;
      *puVar3 = *puVar3 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
      if (*puVar3 == 0) {
        (&DAT_0068aa48)[(int)uVar14 >> 3] =
             (&DAT_0068aa48)[(int)uVar14 >> 3] & ~('\x01' << (uVar14 & 7));
      }
    }
    uVar15 = (puVar10[-1] & 0xfffffff0) - uVar18;
    if (uVar15 == 0) {
      pbVar4 = (byte *)(((puVar10[-1] & 0xfffffff0) - 4) + (int)puVar10);
      *pbVar4 = *pbVar4 & 0xf7;
    }
    else {
      *(uint *)((int)puVar10 + uVar17 + 0x2c) = uVar15 + 3;
      *(uint *)((int)puVar10 + (uVar15 - 8) + uVar18) = uVar15;
      if (0xb2f < uVar15) {
        FUN_00402a38();
      }
    }
    puVar10[-1] = uVar17 + 0x32;
    DAT_0068aa3c = 0;
    return puVar10;
  }
  iVar13 = (uint)(byte)(&DAT_0068a8e4)[param_1 + 3 >> 3] * 8;
  pcVar2 = &DAT_0067c084 + iVar13;
  pcVar16 = pcVar2;
  if (DAT_0068a055 != '\0') {
    while( true ) {
      LOCK();
      cVar5 = *pcVar2;
      if (cVar5 == '\0') {
        *pcVar2 = '\x01';
      }
      UNLOCK();
      pcVar16 = pcVar2;
      if (cVar5 == '\0') break;
      pcVar16 = &DAT_0067c0a4 + iVar13;
      LOCK();
      cVar5 = *pcVar16;
      if (cVar5 == '\0') {
        *pcVar16 = '\x01';
      }
      UNLOCK();
      if (cVar5 == '\0') break;
      pcVar16 = &DAT_0067c0c4 + iVar13;
      LOCK();
      cVar5 = *pcVar16;
      if (cVar5 == '\0') {
        *pcVar16 = '\x01';
      }
      UNLOCK();
      if (cVar5 == '\0') break;
      if (DAT_0068a8dd == '\0') {
        Sleep(0);
        LOCK();
        cVar5 = *pcVar2;
        if (cVar5 == '\0') {
          *pcVar2 = '\x01';
        }
        UNLOCK();
        pcVar16 = pcVar2;
        if (cVar5 == '\0') break;
        Sleep(10);
      }
    }
  }
  pcVar2 = *(char **)(pcVar16 + 4);
  puVar10 = *(undefined4 **)(pcVar2 + 8);
  if (pcVar2 != pcVar16) {
    *(int *)(pcVar2 + 0xc) = *(int *)(pcVar2 + 0xc) + 1;
    uVar17 = puVar10[-1];
    *(uint *)(pcVar2 + 8) = uVar17 & 0xfffffff8;
    puVar10[-1] = pcVar2;
    if ((uVar17 & 0xfffffff8) == 0) {
      iVar13 = *(int *)(pcVar2 + 4);
      *(char **)(iVar13 + 0x14) = pcVar16;
      *(int *)(pcVar16 + 4) = iVar13;
      *pcVar16 = '\0';
      return puVar10;
    }
    *pcVar16 = '\0';
    return puVar10;
  }
  iVar13 = *(int *)(pcVar16 + 0x10);
  uVar6 = *(ushort *)(pcVar16 + 2);
  if (puVar10 <= *(undefined4 **)(pcVar16 + 0xc)) {
    piVar1 = (int *)(iVar13 + 0xc);
    *piVar1 = *piVar1 + 1;
    *(uint *)(pcVar16 + 8) = (uint)uVar6 + (int)puVar10;
    *pcVar16 = '\0';
    puVar10[-1] = iVar13;
    return puVar10;
  }
  if (DAT_0068a055 != '\0') {
    while( true ) {
      do {
        LOCK();
        bVar19 = DAT_0068aa3c == '\0';
        if (bVar19) {
          DAT_0068aa3c = '\x01';
        }
        UNLOCK();
        if (bVar19) goto LAB_00402f30;
      } while (DAT_0068a8dd != '\0');
      Sleep(0);
      LOCK();
      bVar19 = DAT_0068aa3c == '\0';
      if (bVar19) {
        DAT_0068aa3c = '\x01';
      }
      UNLOCK();
      if (bVar19) break;
      Sleep(10);
    }
  }
LAB_00402f30:
  uVar17 = (int)pcVar16[1] & _DAT_0068aa48;
  if (uVar17 == 0) {
    if (DAT_0068aa44 < *(ushort *)(pcVar16 + 0x18)) {
      uVar17 = (uint)*(ushort *)(pcVar16 + 0x1a);
      puVar10 = (undefined4 *)FUN_00402b04();
      if (puVar10 == (undefined4 *)0x0) {
        DAT_0068aa3c = 0;
        *pcVar16 = '\0';
        return (undefined4 *)0x0;
      }
    }
    else {
      uVar17 = DAT_0068aa44;
      if (*(ushort *)(pcVar16 + 0x1a) + 0xb30 <= DAT_0068aa44) {
        uVar17 = (uint)*(ushort *)(pcVar16 + 0x1a);
      }
      puVar10 = (undefined4 *)((int)DAT_0068aa40 - uVar17);
      DAT_0068aa44 = DAT_0068aa44 - uVar17;
      DAT_0068aa40 = puVar10;
    }
  }
  else {
    uVar18 = 0;
    if (uVar17 != 0) {
      for (; (uVar17 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
      }
    }
    iVar13 = 0;
    if ((&DAT_0068aa4c)[uVar18] != 0) {
      for (; ((uint)(&DAT_0068aa4c)[uVar18] >> iVar13 & 1) == 0; iVar13 = iVar13 + 1) {
      }
    }
    iVar13 = iVar13 + uVar18 * 0x20;
    puVar10 = (undefined4 *)(&DAT_0068aad0)[iVar13 * 2];
    puVar7 = (undefined4 *)puVar10[1];
    (&DAT_0068aad0)[iVar13 * 2] = puVar7;
    *puVar7 = &DAT_0068aacc + iVar13 * 2;
    if (&DAT_0068aacc + iVar13 * 2 == puVar7) {
      bVar8 = (byte)iVar13 & 0x1f;
      puVar3 = &DAT_0068aa4c + uVar18;
      *puVar3 = *puVar3 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
      if (*puVar3 == 0) {
        (&DAT_0068aa48)[(int)uVar18 >> 3] =
             (&DAT_0068aa48)[(int)uVar18 >> 3] & ~('\x01' << (uVar18 & 7));
      }
    }
    uVar17 = puVar10[-1] & 0xfffffff0;
    if (uVar17 < 0x10a60) {
      pbVar4 = (byte *)((uVar17 - 4) + (int)puVar10);
      *pbVar4 = *pbVar4 & 0xf7;
    }
    else {
      uVar18 = (uint)*(ushort *)(pcVar16 + 0x1a);
      iVar13 = uVar17 - uVar18;
      *(int *)((int)puVar10 + (uVar18 - 4)) = iVar13 + 3;
      *(int *)((int)puVar10 + iVar13 + -8 + uVar18) = iVar13;
      FUN_00402a38();
      uVar17 = uVar18;
    }
  }
  puVar10[-1] = uVar17 + 6;
  DAT_0068aa3c = 0;
  *puVar10 = pcVar16;
  puVar10[2] = 0;
  puVar10[3] = 1;
  *(undefined4 **)(pcVar16 + 0x10) = puVar10;
  *(uint *)(pcVar16 + 8) = (uint)*(ushort *)(pcVar16 + 2) + (int)(puVar10 + 8);
  *(uint *)(pcVar16 + 0xc) = (int)puVar10 + (uVar17 - *(ushort *)(pcVar16 + 2));
  *pcVar16 = '\0';
  puVar10[7] = puVar10;
  return puVar10 + 8;
}
