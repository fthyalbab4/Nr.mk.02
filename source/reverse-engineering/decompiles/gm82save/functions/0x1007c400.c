// rea decompile_all
// name: FUN_1007c400
// address: 0x1007c400
// body: available
// range: 0x1007c400-0x1007cb93 inclusive
// range: 0x1007cba0-0x1007cc6d inclusive
// range: 0x1007cc70-0x1007ccb9 inclusive
// range: 0x1007ccc0-0x1007ce7a inclusive
// range: 0x1007ce80-0x1007cf69 inclusive
// range: 0x1007cf70-0x1007cfd1 inclusive
// range: 0x1007cfe0-0x1007d0a2 inclusive
// range: 0x1007d0b0-0x1007d0dd inclusive
// range: 0x1007d0e0-0x1007d45b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_1007c400(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  int iVar15;
  LPVOID pvVar16;
  HANDLE pvVar17;
  uint uVar18;
  char cVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  int *piVar22;
  int *piVar23;
  int iVar24;
  int iVar25;
  uint *puVar26;
  uint *puVar27;
  int *piVar28;
  uint uVar29;
  uint *puVar30;
  int iStack_1dc;
  uint uStack_1d8;
  uint uStack_1d4;
  uint uStack_1c4;
  int *piStack_1c0;
  undefined4 uStack_1bc;
  uint uStack_1b8;
  undefined4 *puStack_1b4;
  uint uStack_1b0;
  undefined4 *puStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  int *piStack_1a0;
  int *piStack_19c;
  undefined4 uStack_198;
  int *piStack_194;
  undefined4 uStack_190;
  uint uStack_18c;
  int iStack_188;
  undefined4 *puStack_184;
  uint auStack_180 [2];
  undefined4 *puStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 *puStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 *puStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 *puStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 *puStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 *puStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 *puStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 *puStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 *puStack_10c;
  undefined4 uStack_108;
  uint uStack_104;
  undefined4 *puStack_100;
  uint uStack_fc;
  uint uStack_f8;
  int *piStack_f4;
  int iStack_a0;
  LPVOID pvStack_9c;
  uint uStack_98;
  uint auStack_88 [22];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  LPVOID pvStack_20;
  undefined4 uStack_1c;

  iVar4 = (*(code *)0x71de7c)();
  if (iVar4 == 0) {
    return false;
  }
  puVar5 = FUN_10107380(0,0xc);
  if (puVar5 == (undefined4 *)0x0) {
LAB_1007d408:
    FUN_101366bc(4);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *puVar5 = 0;
  puVar5[1] = 4;
  puVar5[2] = 0;
  puVar6 = FUN_10107380(0,0xc);
  if (puVar6 == (undefined4 *)0x0) goto LAB_1007d408;
  *puVar6 = 0;
  puVar6[1] = 4;
  puVar6[2] = 0;
  puVar7 = FUN_10107380(0,0x9c);
  if (puVar7 == (undefined4 *)0x0) {
    FUN_101366bc(4);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *puVar7 = 0;
  puVar7[1] = 4;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 4;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 4;
  puVar7[8] = 0;
  puVar7[9] = 0;
  puVar7[10] = 4;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 4;
  puVar7[0xe] = 0;
  puVar7[0xf] = 0;
  puVar7[0x10] = 4;
  puVar7[0x11] = 0;
  puVar7[0x12] = 0;
  puVar7[0x13] = 4;
  puVar7[0x14] = 0;
  puVar7[0x15] = 0;
  puVar7[0x16] = 4;
  puVar7[0x17] = 0;
  puVar7[0x18] = 0;
  puVar7[0x19] = 4;
  puVar7[0x1a] = 0;
  puVar7[0x1b] = 0;
  puVar7[0x1c] = 4;
  puVar7[0x1d] = 0;
  puVar7[0x1e] = 0;
  puVar7[0x1f] = 4;
  puVar7[0x20] = 0;
  puVar7[0x21] = 0;
  puVar7[0x22] = 4;
  puVar7[0x23] = 0;
  puVar7[0x24] = 0;
  puVar7[0x25] = 4;
  puVar7[0x26] = 0;
  puVar8 = FUN_10107380(0,0xcc);
  if (puVar8 == (undefined4 *)0x0) {
    FUN_101366bc(4);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *puVar8 = 0;
  puVar8[1] = 4;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = 4;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 4;
  puVar8[8] = 0;
  puVar8[9] = 0;
  puVar8[10] = 4;
  puVar8[0xb] = 0;
  puVar8[0xc] = 0;
  puVar8[0xd] = 4;
  puVar8[0xe] = 0;
  puVar8[0xf] = 0;
  puVar8[0x10] = 4;
  puVar8[0x11] = 0;
  puVar8[0x12] = 0;
  puVar8[0x13] = 4;
  puVar8[0x14] = 0;
  puVar8[0x15] = 0;
  puVar8[0x16] = 4;
  puVar8[0x17] = 0;
  puVar8[0x18] = 0;
  puVar8[0x19] = 4;
  puVar8[0x1a] = 0;
  puVar8[0x1b] = 0;
  puVar8[0x1c] = 4;
  puVar8[0x1d] = 0;
  puVar8[0x1e] = 0;
  puVar8[0x1f] = 4;
  puVar8[0x20] = 0;
  puVar8[0x21] = 0;
  puVar8[0x22] = 4;
  puVar8[0x23] = 0;
  puVar8[0x24] = 0;
  puVar8[0x25] = 4;
  puVar8[0x26] = 0;
  puVar8[0x27] = 0;
  puVar8[0x28] = 4;
  puVar8[0x29] = 0;
  puVar8[0x2a] = 0;
  puVar8[0x2b] = 4;
  puVar8[0x2c] = 0;
  puVar8[0x2d] = 0;
  puVar8[0x2e] = 4;
  puVar8[0x2f] = 0;
  puVar8[0x30] = 0;
  puVar8[0x31] = 4;
  puVar8[0x32] = 0;
  puVar9 = FUN_10107380(0,0x60c);
  if (puVar9 == (undefined4 *)0x0) {
LAB_1007d3eb:
    FUN_101366bc(4);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  iVar4 = 0x80;
  puVar10 = puVar9;
  do {
    puVar11 = puVar10;
    *puVar11 = 0;
    puVar11[1] = 4;
    puVar11[2] = 0;
    iVar4 = iVar4 + -1;
    puVar10 = puVar11 + 3;
  } while (iVar4 != 0);
  puVar11[3] = 0;
  puVar11[4] = 4;
  puVar11[5] = 0;
  puVar10 = FUN_10107380(0,0x60c);
  if (puVar10 == (undefined4 *)0x0) goto LAB_1007d3eb;
  iVar4 = 0x80;
  puVar11 = puVar10;
  do {
    puVar12 = puVar11;
    *puVar12 = 0;
    puVar12[1] = 4;
    puVar12[2] = 0;
    iVar4 = iVar4 + -1;
    puVar11 = puVar12 + 3;
  } while (iVar4 != 0);
  puVar12[3] = 0;
  puVar12[4] = 4;
  puVar12[5] = 0;
  puVar11 = FUN_10107380(0,0x60c);
  if (puVar11 == (undefined4 *)0x0) goto LAB_1007d3eb;
  iVar4 = 0x80;
  puVar12 = puVar11;
  do {
    puVar13 = puVar12;
    *puVar13 = 0;
    puVar13[1] = 4;
    puVar13[2] = 0;
    iVar4 = iVar4 + -1;
    puVar12 = puVar13 + 3;
  } while (iVar4 != 0);
  puVar13[3] = 0;
  puVar13[4] = 4;
  puVar13[5] = 0;
  puVar12 = FUN_10107380(0,0xc);
  if (puVar12 == (undefined4 *)0x0) goto LAB_1007d408;
  *puVar12 = 0;
  puVar12[1] = 4;
  puVar12[2] = 0;
  puVar13 = FUN_10107380(0,0x60c);
  if (puVar13 == (undefined4 *)0x0) goto LAB_1007d3eb;
  iVar4 = 0x80;
  puVar21 = puVar13;
  do {
    puVar20 = puVar21;
    *puVar20 = 0;
    puVar20[1] = 4;
    puVar20[2] = 0;
    iVar4 = iVar4 + -1;
    puVar21 = puVar20 + 3;
  } while (iVar4 != 0);
  puVar20[3] = 0;
  puVar20[4] = 4;
  puVar20[5] = 0;
  uStack_11c = 0x81;
  uStack_114 = 0x81;
  puStack_118 = puVar13;
  puStack_10c = FUN_10107380(0,0x60c);
  if (puStack_10c == (undefined4 *)0x0) goto LAB_1007d3eb;
  iVar4 = 0x80;
  puVar13 = puStack_10c;
  do {
    puVar21 = puVar13;
    *puVar21 = 0;
    puVar21[1] = 4;
    puVar21[2] = 0;
    iVar4 = iVar4 + -1;
    puVar13 = puVar21 + 3;
  } while (iVar4 != 0);
  puVar21[3] = 0;
  puVar21[4] = 4;
  puVar21[5] = 0;
  uVar29 = _DAT_0077f3f8;
  uStack_110 = 0x81;
  uStack_108 = 0x81;
  uStack_198 = param_1;
  if (0xaaaaaaa < _DAT_0077f3f8) {
    FUN_101367b0();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (_DAT_0077f3f8 * 0xc == 0) {
    puStack_100 = (undefined4 *)&DAT_00000004;
    uStack_1d4 = 0;
    if (_DAT_0077f3f8 < 2) goto LAB_1007c9de;
LAB_1007c9aa:
    iVar4 = uVar29 - 1;
    puVar13 = puStack_100;
    do {
      *puVar13 = 0;
      puVar13[1] = 4;
      puVar13[2] = 0;
      puVar13 = puVar13 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  else {
    puStack_100 = FUN_10107380(0,_DAT_0077f3f8 * 0xc);
    if (puStack_100 == (undefined4 *)0x0) {
      FUN_101366bc(4);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uStack_1d4 = uVar29;
    if (1 < uVar29) goto LAB_1007c9aa;
LAB_1007c9de:
    puVar13 = puStack_100;
    if (uVar29 == 0) goto LAB_1007c9f8;
  }
  *puVar13 = 0;
  puVar13[1] = 4;
  puVar13[2] = 0;
LAB_1007c9f8:
  uStack_1b8 = 0;
  puStack_1b4 = (undefined4 *)&DAT_00000004;
  uStack_1b0 = 0;
  puStack_1ac = (undefined4 *)&DAT_00000004;
  uStack_104 = uStack_1d4;
  uStack_fc = uVar29;
  iStack_188 = 1;
  puStack_184 = puVar5;
  auStack_180[0] = 1;
  auStack_180[1] = 1;
  puStack_178 = puVar6;
  uStack_174 = 1;
  uStack_170 = 0xd;
  puStack_16c = puVar7;
  uStack_168 = 0xd;
  uStack_164 = 0x11;
  puStack_160 = puVar8;
  uStack_15c = 0x11;
  uStack_158 = 0;
  uStack_154 = 4;
  uStack_150 = 0;
  uStack_14c = 0x81;
  puStack_148 = puVar9;
  uStack_144 = 0x81;
  uStack_140 = 0x81;
  puStack_13c = puVar10;
  uStack_138 = 0x81;
  uStack_134 = 0x81;
  puStack_130 = puVar11;
  uStack_12c = 0x81;
  uStack_128 = 1;
  puStack_124 = puVar12;
  uStack_120 = 1;
  piVar22 = _DAT_0077f0d0;
  if (_DAT_0077f0d0 == (int *)0x0) {
    piVar22 = (int *)&DAT_00000004;
  }
  uStack_1d4 = 0;
  uVar29 = 0;
  piVar23 = piVar22 + _DAT_0077f0e0;
LAB_1007cb60:
  uVar18 = uVar29;
  if (piVar22 != piVar23) {
    iVar4 = *piVar22;
    piVar22 = piVar22 + 1;
    uVar29 = uVar18 + 1;
    if (iVar4 != 0) {
      iVar24 = 0;
      iStack_1dc = 0;
      uStack_1a4 = uVar18 + 1;
      piStack_1a0 = piVar23;
      piStack_19c = piVar22;
      do {
        if ((iVar24 != 4) && (iVar15 = *(int *)((int)auStack_180 + iStack_1dc), iVar15 != 0)) {
          puVar26 = *(uint **)((int)&puStack_184 + iStack_1dc);
          uVar29 = 0;
          puVar30 = puVar26;
          do {
            puVar27 = puVar30 + 3;
            iVar25 = iVar4;
            while (((iVar2 = *(int *)(iVar25 + 0x1c + iVar24 * 4), iVar2 == 0 ||
                    (*(uint *)(iVar2 + -4) <= uVar29)) ||
                   (*(int *)(*(int *)(iVar2 + uVar29 * 4) + 8) == 0))) {
              uVar14 = *(uint *)(iVar25 + 0x14);
              if (((int)uVar14 < 0) || (_DAT_0077f0e0 <= uVar14)) goto LAB_1007cc00;
              piVar22 = _DAT_0077f0d0;
              if (_DAT_0077f0d0 == (int *)0x0) {
                piVar22 = (int *)&DAT_00000004;
              }
              iVar25 = piVar22[uVar14];
              if (iVar25 == 0) goto LAB_1007cc00;
            }
            uVar14 = puVar30[2];
            if (uVar14 == *puVar30) {
              FUN_10135e40(puVar30);
            }
            *(uint *)(puVar30[1] + uVar14 * 4) = uVar18;
            puVar30[2] = uVar14 + 1;
LAB_1007cc00:
            uVar29 = uVar29 + 1;
            puVar30 = puVar27;
          } while (puVar27 != puVar26 + iVar15 * 3);
        }
        iVar24 = iVar24 + 1;
        iStack_1dc = iStack_1dc + 0xc;
      } while (iStack_1dc != 0x90);
      uStack_1d8 = 0;
      piVar28 = _DAT_0077f0d0;
      if (_DAT_0077f0d0 == (int *)0x0) {
        piVar28 = (int *)&DAT_00000004;
      }
      piVar1 = piVar28 + _DAT_0077f0e0;
      uVar14 = uVar18;
LAB_1007cc98:
      piVar22 = piStack_19c;
      uVar29 = uStack_1a4;
      piVar23 = piStack_1a0;
      if (uVar14 != 0) {
        if ((uint)((int)piVar1 - (int)piVar28) >> 2 <= uVar14 - 1) goto LAB_1007cb60;
        piVar28 = piVar28 + uVar14;
        uStack_1d8 = uStack_1d8 + uVar14;
      }
      do {
        uVar14 = uStack_1d8;
        if (piVar28 == piVar1) goto LAB_1007cb60;
        iVar24 = *piVar28;
        piVar28 = piVar28 + 1;
        uStack_1d8 = uVar14 + 1;
      } while (iVar24 == 0);
      uStack_18c = _DAT_0077f0e0;
      piVar22 = _DAT_0077f0d0;
      if (_DAT_0077f0d0 == (int *)0x0) {
        piVar22 = (int *)&DAT_00000004;
      }
      uStack_1a8 = uVar14;
      if (uVar14 < _DAT_0077f0e0 && -1 < (int)uVar14) {
        while (iVar15 = iVar4, piVar22[uVar14] != 0) {
          do {
            iVar25 = *(int *)(iVar15 + 0x2c);
            if (((iVar25 != 0) && (uVar14 < *(uint *)(iVar25 + -4))) &&
               (*(int *)(*(int *)(iVar25 + uVar14 * 4) + 8) != 0)) goto LAB_1007ce20;
            uVar29 = *(uint *)(iVar15 + 0x14);
          } while (((-1 < (int)uVar29) && (uVar29 < _DAT_0077f0e0)) &&
                  (iVar15 = piVar22[uVar29], piVar22[uVar29] != 0));
          uVar14 = *(uint *)(piVar22[uVar14] + 0x14);
          if (((int)uVar14 < 0) || (_DAT_0077f0e0 <= uVar14)) break;
        }
      }
      uVar14 = 0;
      uVar29 = uVar18;
      if (uVar18 < _DAT_0077f0e0 && -1 < (int)uVar18) {
        while (iVar15 = iVar24, piVar22[uVar29] != 0) {
          do {
            iVar25 = *(int *)(iVar15 + 0x2c);
            if (((iVar25 != 0) && (uVar29 < *(uint *)(iVar25 + -4))) &&
               (*(int *)(*(int *)(iVar25 + uVar29 * 4) + 8) != 0)) goto LAB_1007ce20;
            uVar14 = *(uint *)(iVar15 + 0x14);
          } while (((-1 < (int)uVar14) && (uVar14 < _DAT_0077f0e0)) &&
                  (iVar15 = piVar22[uVar14], piVar22[uVar14] != 0));
          uVar29 = *(uint *)(piVar22[uVar29] + 0x14);
          if (((int)uVar29 < 0) || (_DAT_0077f0e0 <= uVar29)) break;
        }
        uVar14 = 0;
      }
      goto LAB_1007cc98;
    }
    goto LAB_1007cb60;
  }
  FUN_100a3830((undefined8 *)&uStack_f8,DAT_10163000);
  iVar4 = 0;
  pvVar16 = FUN_10107380(0,0x8000);
  if (pvVar16 == (LPVOID)0x0) {
    FUN_101366bc(1);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  puVar26 = &uStack_f8;
  puVar30 = auStack_88;
  for (iVar24 = 0x16; iVar24 != 0; iVar24 = iVar24 + -1) {
    *puVar30 = *puVar26;
    puVar26 = puVar26 + 1;
    puVar30 = puVar30 + 1;
  }
  uStack_30 = 0;
  uStack_2c = 1;
  uStack_28 = 0;
  uStack_24 = 0x8000;
  pvStack_20 = pvVar16;
  uStack_1c = 0;
  do {
    uVar29 = *(uint *)((int)auStack_180 + iVar4);
    iVar24 = *(int *)((int)&puStack_184 + iVar4);
    uStack_1c4 = uVar29;
    FUN_10092830(&uStack_f8,(longlong *)auStack_88,(int)&uStack_1c4,(undefined **)&DAT_00000004);
    if ((char)uStack_f8 == -1) {
      if (uVar29 != 0) {
        iVar15 = iVar24 + uVar29 * 0xc;
        do {
          puVar26 = *(uint **)(iVar24 + 4);
          uVar29 = *(uint *)(iVar24 + 8);
          uStack_1c4 = uVar29;
          FUN_10092830(&uStack_f8,(longlong *)auStack_88,(int)&uStack_1c4,
                       (undefined **)&DAT_00000004);
          if ((char)uStack_f8 == -1) {
            if (uVar29 != 0) {
              iVar25 = uVar29 << 2;
              do {
                uStack_1c4 = *puVar26;
                FUN_10092830(&uStack_f8,(longlong *)auStack_88,(int)&uStack_1c4,
                             (undefined **)&DAT_00000004);
                if (((char)uStack_f8 != -1) && ((char)uStack_f8 != -1)) goto LAB_1007d020;
                puVar26 = puVar26 + 1;
                iVar25 = iVar25 + -4;
              } while (iVar25 != 0);
            }
          }
          else if ((char)uStack_f8 != -1) goto LAB_1007d020;
          iVar24 = iVar24 + 0xc;
        } while (iVar24 != iVar15);
      }
    }
    else if ((char)uStack_f8 != -1) {
LAB_1007d020:
      if ((char)uStack_f8 != '\x03') goto LAB_1007d078;
      puVar5 = (undefined4 *)piStack_f4[1];
      pvVar16 = (LPVOID)*piStack_f4;
      if ((code *)*puVar5 != (code *)0x0) {
        (*(code *)*puVar5)(pvVar16);
      }
      if (puVar5[1] != 0) {
        if (8 < (uint)puVar5[2]) {
          pvVar16 = *(LPVOID *)((int)pvVar16 + -4);
        }
        pvVar17 = GetProcessHeap();
        HeapFree(pvVar17,0,pvVar16);
      }
      pvVar17 = GetProcessHeap();
      goto LAB_1007d06f;
    }
    iVar4 = iVar4 + 0xc;
  } while (iVar4 != 0x90);
  uStack_1c4 = uStack_1d4;
  FUN_10092830(&uStack_f8,(longlong *)auStack_88,(int)&uStack_1c4,(undefined **)&DAT_00000004);
  puVar5 = puStack_1b4;
  piVar22 = piStack_f4;
  cVar19 = (char)uStack_f8;
  if ((char)uStack_f8 == -1) {
    if (uStack_1d4 != 0) {
      puVar6 = puStack_1b4 + uStack_1d4 * 2;
      puVar7 = puStack_1b4;
      do {
        piStack_194 = (int *)*puVar7;
        uVar29 = puVar7[1];
        FUN_10092830(&uStack_f8,(longlong *)auStack_88,(int)&piStack_194,(undefined **)&DAT_00000004
                    );
        uVar18 = uStack_f8;
        piVar22 = piStack_f4;
        cVar19 = (char)uStack_f8;
        if ((char)uStack_f8 == -1) {
          uStack_f8 = uVar29;
          FUN_10092830(&uStack_1c4,(longlong *)auStack_88,(int)&uStack_f8,
                       (undefined **)&DAT_00000004);
          uVar18 = uStack_1c4;
          piVar22 = piStack_1c0;
          cVar19 = (char)uStack_1c4;
        }
        piStack_1c0 = piVar22;
        uStack_1c4 = uVar18;
        if ((cVar19 != -1) && ((char)uStack_1c4 != -1)) {
          piVar22 = piStack_1c0;
          cVar19 = (char)uStack_1c4;
          if ((char)uStack_1c4 != -1) goto joined_r0x1007d15f;
          break;
        }
        puVar7 = puVar7 + 2;
      } while (puVar7 != puVar6);
    }
    puVar26 = auStack_88;
    puVar30 = &uStack_f8;
    for (iVar4 = 0x1c; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar30 = *puVar26;
      puVar26 = puVar26 + 1;
      puVar30 = puVar30 + 1;
    }
    FUN_1004f710((undefined2 *)&piStack_194,(longlong *)&uStack_f8);
    iVar4 = iStack_a0;
    if ((char)piStack_194 == -1) {
      iStack_a0 = -1;
      if (iVar4 == -1) {
        FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_101411ac);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      FUN_100053b0((longlong *)&uStack_f8);
      uStack_f8 = uStack_98;
      uVar29 = 4;
      while (uVar18 = (*(code *)0x44006c)(), uVar18 != 0) {
        if (uVar29 < uVar18) {
          FUN_10136a50(uVar18,uVar29,uVar29,&PTR_s_C__Users_runneradmin__rustup_too_101594d0);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar29 = uVar29 - uVar18;
        if (uVar29 == 0) {
          FUN_10093190(&uStack_f8,pvStack_9c,uStack_98);
          cVar19 = (char)uStack_f8;
          FUN_10003b60(cVar19,piStack_f4);
          if (iVar4 != 0) {
            pvVar17 = GetProcessHeap();
            HeapFree(pvVar17,0,pvStack_9c);
          }
          if (uStack_1b8 != 0) {
            pvVar17 = GetProcessHeap();
            HeapFree(pvVar17,0,puVar5);
          }
          FUN_10003870((int)&iStack_188);
          return cVar19 == -1;
        }
      }
      if (iVar4 != 0) {
        pvVar17 = GetProcessHeap();
        HeapFree(pvVar17,0,pvStack_9c);
      }
    }
    else {
      uStack_1bc = uStack_190;
      piStack_1c0 = piStack_194;
      uStack_1c4 = 0xffffffff;
      FUN_100053b0((longlong *)&uStack_f8);
      FUN_10003970((int *)&uStack_1c4);
    }
  }
  else {
joined_r0x1007d15f:
    if (cVar19 == '\x03') {
      puVar5 = (undefined4 *)piVar22[1];
      pvVar16 = (LPVOID)*piVar22;
      if ((code *)*puVar5 != (code *)0x0) {
        (*(code *)*puVar5)(pvVar16);
      }
      if (puVar5[1] != 0) {
        FUN_10093cf0(pvVar16,puVar5[2]);
      }
      pvVar17 = GetProcessHeap();
      piStack_f4 = piVar22;
LAB_1007d06f:
      HeapFree(pvVar17,0,piStack_f4);
    }
LAB_1007d078:
    FUN_100053b0((longlong *)auStack_88);
  }
  puVar5 = puStack_1b4;
  if (uStack_1b8 != 0) {
    pvVar17 = GetProcessHeap();
    HeapFree(pvVar17,0,puVar5);
  }
  iVar4 = 0;
  do {
    uVar29 = auStack_180[iVar4 * 3];
    puVar5 = (&puStack_184)[iVar4 * 3];
    if (uVar29 != 0) {
      puVar6 = puVar5 + 1;
      do {
        if (puVar6[-1] != 0) {
          pvVar16 = (LPVOID)*puVar6;
          pvVar17 = GetProcessHeap();
          HeapFree(pvVar17,0,pvVar16);
        }
        puVar6 = puVar6 + 3;
        uVar29 = uVar29 - 1;
      } while (uVar29 != 0);
    }
    if ((&iStack_188)[iVar4 * 3] != 0) {
      pvVar17 = GetProcessHeap();
      HeapFree(pvVar17,0,puVar5);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0xc);
  return false;
LAB_1007ce20:
  if (uStack_1d4 == uStack_1b8) {
    FUN_10135ee0(&uStack_1b8);
    puStack_1ac = puStack_1b4;
  }
  puStack_1ac[uStack_1d4 * 2] = uVar18;
  puStack_1ac[uStack_1d4 * 2 + 1] = uStack_1a8;
  uStack_1d4 = uStack_1d4 + 1;
  uVar14 = 0;
  uStack_1b0 = uStack_1d4;
  goto LAB_1007cc98;
}
