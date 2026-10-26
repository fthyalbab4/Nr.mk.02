// rea decompile_all
// name: FUN_100ddbd0
// address: 0x100ddbd0
// body: available
// range: 0x100ddbd0-0x100ddd14 inclusive
// range: 0x100ddd20-0x100ddf52 inclusive
// range: 0x100ddf60-0x100de0d8 inclusive
// range: 0x100de0e0-0x100de2bc inclusive
// range: 0x100de2c0-0x100de7bb inclusive
// range: 0x100de7c0-0x100de873 inclusive
// range: 0x100de880-0x100de916 inclusive
// range: 0x100de920-0x100dea67 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_100ddbd0(byte *param_1,uint param_2,byte *param_3,uint param_4,uint param_5,byte *param_6)

{
  uint uVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  code *pcVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte bVar14;
  byte bVar18;
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  uint uVar17;
  uint uVar19;
  byte *pbVar20;
  uint uVar21;
  byte *pbVar22;
  int iVar23;
  uint uVar24;
  byte *pbVar25;
  int iVar26;
  int iVar27;
  ulonglong *puVar28;
  bool bVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  byte *local_4c;
  byte *local_48;
  uint local_44;
  uint local_34;
  byte *local_2c;
  byte local_26;
  byte local_25;
  byte *local_24;
  byte *local_20;
  uint local_1c;
  byte *local_18;
  byte *local_14;

  if (param_2 < 0x21) {
LAB_100ddbe2:
    if (1 < param_2) {
      local_34 = param_2 >> 1;
      if (param_2 < 0x10) {
        if (param_2 < 8) {
          *(undefined2 *)param_3 = *(undefined2 *)param_1;
          *(undefined2 *)(param_3 + local_34 * 2) = *(undefined2 *)(param_1 + local_34 * 2);
          uVar10 = 1;
        }
        else {
          bVar29 = param_1[2] < *param_1;
          if (param_1[2] == *param_1) {
            bVar29 = param_1[3] < param_1[1];
          }
          uVar10 = (uint)bVar29;
          bVar9 = param_1[6] < param_1[4];
          if (param_1[6] == param_1[4]) {
            bVar9 = param_1[7] < param_1[5];
          }
          uVar19 = (uint)(bVar29 ^ 1);
          uVar24 = (uint)bVar9;
          uVar17 = uVar24 ^ 3;
          bVar29 = param_1[uVar24 * 2 + 4] < param_1[uVar10 * 2];
          if (param_1[uVar24 * 2 + 4] == param_1[uVar10 * 2]) {
            bVar29 = param_1[uVar24 * 2 + 5] < param_1[uVar10 * 2 + 1];
          }
          uVar1 = uVar24 + 2;
          bVar9 = param_1[uVar17 * 2] < param_1[uVar19 * 2];
          if (param_1[uVar17 * 2] == param_1[uVar19 * 2]) {
            bVar9 = param_1[uVar17 * 2 + 1] < param_1[uVar19 * 2 + 1];
          }
          local_1c = uVar19;
          pbVar25 = param_1 + uVar19 * 2;
          if (bVar9) {
            local_1c = uVar1;
            pbVar25 = param_1 + uVar24 * 2 + 4;
          }
          uVar21 = uVar1;
          uVar6 = uVar10;
          pbVar22 = param_1 + uVar24 * 2 + 4;
          if (bVar29) {
            uVar21 = uVar19;
            uVar6 = uVar1;
            local_1c = uVar10;
            pbVar22 = param_1 + uVar19 * 2;
            pbVar25 = param_1 + uVar10 * 2;
          }
          uVar10 = uVar17;
          if (bVar9) {
            uVar21 = uVar17;
            uVar10 = uVar19;
          }
          pbVar11 = param_1 + uVar17 * 2;
          if (!bVar9) {
            pbVar11 = pbVar22;
          }
          bVar29 = param_1[uVar21 * 2] < param_1[local_1c * 2];
          if (param_1[uVar21 * 2] == param_1[local_1c * 2]) {
            bVar29 = pbVar11[1] < pbVar25[1];
          }
          uVar19 = uVar21;
          if (bVar29) {
            uVar19 = local_1c;
            local_1c = uVar21;
          }
          bVar29 = param_1[local_34 * 2 + 2] < param_1[local_34 * 2];
          if (param_1[local_34 * 2 + 2] == param_1[local_34 * 2]) {
            bVar29 = param_1[local_34 * 2 + 3] < param_1[local_34 * 2 + 1];
          }
          pbVar25 = (byte *)(uint)bVar29;
          bVar9 = param_1[local_34 * 2 + 6] < param_1[local_34 * 2 + 4];
          if (param_1[local_34 * 2 + 6] == param_1[local_34 * 2 + 4]) {
            bVar9 = param_1[local_34 * 2 + 7] < param_1[local_34 * 2 + 5];
          }
          uVar17 = (uint)bVar9;
          local_24 = (byte *)(uVar17 ^ 3);
          local_20 = param_1 + local_34 * 2;
          pbVar22 = (byte *)(uint)(bVar29 ^ 1);
          bVar29 = local_20[uVar17 * 2 + 4] < local_20[(int)pbVar25 * 2];
          if (local_20[uVar17 * 2 + 4] == local_20[(int)pbVar25 * 2]) {
            bVar29 = local_20[uVar17 * 2 + 5] < local_20[(int)pbVar25 * 2 + 1];
          }
          pbVar11 = (byte *)(uVar17 + 2);
          bVar9 = local_20[(int)local_24 * 2] < local_20[(int)pbVar22 * 2];
          if (local_20[(int)local_24 * 2] == local_20[(int)pbVar22 * 2]) {
            bVar9 = local_20[(int)local_24 * 2 + 1] < local_20[(int)pbVar22 * 2 + 1];
          }
          pbVar20 = local_20 + (int)pbVar22 * 2;
          pbVar12 = pbVar22;
          if (bVar9) {
            pbVar20 = local_20 + uVar17 * 2 + 4;
            pbVar12 = pbVar11;
          }
          pbVar13 = pbVar11;
          pbVar7 = pbVar25;
          pbVar8 = local_20 + uVar17 * 2 + 4;
          if (bVar29) {
            pbVar13 = pbVar22;
            pbVar7 = pbVar11;
            pbVar12 = pbVar25;
            pbVar8 = local_20 + (int)pbVar22 * 2;
            pbVar20 = local_20 + (int)pbVar25 * 2;
          }
          pbVar25 = local_24;
          if (bVar9) {
            pbVar13 = local_24;
            pbVar25 = pbVar22;
          }
          pbVar22 = local_20 + (int)local_24 * 2;
          if (!bVar9) {
            pbVar22 = pbVar8;
          }
          bVar14 = pbVar22[1];
          bVar18 = pbVar20[1];
          *(undefined2 *)param_3 = *(undefined2 *)(param_1 + uVar6 * 2);
          *(undefined2 *)(param_3 + 2) = *(undefined2 *)(param_1 + local_1c * 2);
          *(undefined2 *)(param_3 + 4) = *(undefined2 *)(param_1 + uVar19 * 2);
          *(undefined2 *)(param_3 + 6) = *(undefined2 *)(param_1 + uVar10 * 2);
          bVar29 = local_20[(int)pbVar13 * 2] < local_20[(int)pbVar12 * 2];
          if (local_20[(int)pbVar13 * 2] == local_20[(int)pbVar12 * 2]) {
            bVar29 = bVar14 < bVar18;
          }
          pbVar22 = pbVar13;
          if (bVar29) {
            pbVar22 = pbVar12;
            pbVar12 = pbVar13;
          }
          uVar4 = *(undefined2 *)(local_20 + (int)pbVar12 * 2);
          uVar3 = *(undefined2 *)(local_20 + (int)pbVar22 * 2);
          *(undefined2 *)(param_3 + local_34 * 2) = *(undefined2 *)(local_20 + (int)pbVar7 * 2);
          *(undefined2 *)(param_3 + local_34 * 2 + 2) = uVar4;
          *(undefined2 *)(param_3 + local_34 * 2 + 4) = uVar3;
          *(undefined2 *)(param_3 + local_34 * 2 + 6) = *(undefined2 *)(local_20 + (int)pbVar25 * 2)
          ;
          uVar10 = 4;
        }
      }
      else {
        FUN_100dea70(param_1,(undefined2 *)param_3,(undefined2 *)(param_3 + param_2 * 2));
        FUN_100dea70(param_1 + local_34 * 2,(undefined2 *)(param_3 + local_34 * 2),
                     (undefined2 *)(param_3 + param_2 * 2 + 0x10));
        uVar10 = 8;
      }
      if (uVar10 < local_34) {
        local_4c = param_3 + uVar10 * 2;
        iVar26 = uVar10 * -2 + 2;
        uVar19 = uVar10;
        do {
          uVar4 = *(undefined2 *)(param_1 + uVar19 * 2);
          *(undefined2 *)(param_3 + uVar19 * 2) = uVar4;
          bVar18 = (byte)((ushort)uVar4 >> 8);
          bVar14 = (byte)uVar4;
          bVar29 = bVar14 < param_3[uVar19 * 2 + -2];
          if (param_3[uVar19 * 2 + -2] == bVar14) {
            bVar29 = bVar18 < param_3[uVar19 * 2 + -1];
          }
          pbVar25 = local_4c;
          iVar27 = iVar26;
          if (bVar29) {
            do {
              *(undefined2 *)pbVar25 = *(undefined2 *)(pbVar25 + -2);
              pbVar22 = param_3;
              if (iVar27 == 0) break;
              bVar29 = bVar14 < pbVar25[-4];
              if (pbVar25[-4] == bVar14) {
                bVar29 = bVar18 < pbVar25[-3];
              }
              pbVar22 = pbVar25 + -2;
              pbVar25 = pbVar22;
              iVar27 = iVar27 + 2;
            } while (bVar29);
            *(undefined2 *)pbVar22 = uVar4;
          }
          local_4c = local_4c + 2;
          uVar19 = uVar19 + 1;
          iVar26 = iVar26 + -2;
        } while (uVar19 != local_34);
      }
      pbVar25 = param_3 + local_34 * 2;
      if (uVar10 < param_2 - local_34) {
        local_4c = (byte *)(uVar10 * -2 + 2);
        pbVar22 = param_3 + local_34 * 2 + uVar10 * 2;
        do {
          uVar4 = *(undefined2 *)(param_1 + uVar10 * 2 + local_34 * 2);
          *(undefined2 *)(pbVar25 + uVar10 * 2) = uVar4;
          bVar18 = (byte)((ushort)uVar4 >> 8);
          bVar14 = (byte)uVar4;
          bVar29 = bVar14 < pbVar25[uVar10 * 2 + -2];
          if (pbVar25[uVar10 * 2 + -2] == bVar14) {
            bVar29 = bVar18 < pbVar25[uVar10 * 2 + -1];
          }
          pbVar11 = pbVar22;
          pbVar12 = local_4c;
          if (bVar29) {
            do {
              *(undefined2 *)pbVar11 = *(undefined2 *)(pbVar11 + -2);
              pbVar20 = pbVar25;
              if (pbVar12 == (byte *)0x0) break;
              bVar29 = bVar14 < pbVar11[-4];
              if (pbVar11[-4] == bVar14) {
                bVar29 = bVar18 < pbVar11[-3];
              }
              pbVar20 = pbVar11 + -2;
              pbVar11 = pbVar20;
              pbVar12 = (byte *)((int)pbVar12 + 2);
            } while (bVar29);
            *(undefined2 *)pbVar20 = uVar4;
          }
          uVar10 = uVar10 + 1;
          pbVar22 = pbVar22 + 2;
          local_4c = (byte *)((int)local_4c + -2);
        } while (uVar10 != param_2 - local_34);
      }
      local_48 = pbVar25 + -2;
      pbVar22 = param_1 + param_2 * 2 + -2;
      local_4c = param_3 + param_2 * 2 + -2;
      do {
        bVar29 = *pbVar25 < *param_3;
        if (*pbVar25 == *param_3) {
          bVar29 = pbVar25[1] < param_3[1];
        }
        pbVar11 = pbVar25;
        if (bVar29 == false) {
          pbVar11 = param_3;
        }
        *(undefined2 *)param_1 = *(undefined2 *)pbVar11;
        bVar14 = *local_4c;
        bVar9 = bVar14 < *local_48;
        if (bVar14 == *local_48) {
          bVar9 = local_4c[1] < local_48[1];
        }
        pbVar11 = local_48;
        if (bVar9 == false) {
          pbVar11 = local_4c;
        }
        *(undefined2 *)pbVar22 = *(undefined2 *)pbVar11;
        pbVar25 = pbVar25 + (uint)bVar29 * 2;
        pbVar22 = pbVar22 + -2;
        local_4c = local_4c + (uint)bVar9 * 2 + -2;
        local_48 = local_48 + (uint)bVar9 * -2;
        param_1 = param_1 + 2;
        local_34 = local_34 - 1;
        param_3 = param_3 + ((ushort)(CONCAT11(bVar14,bVar29) ^ 1) & 0xff) * 2;
      } while (local_34 != 0);
      if ((param_2 & 1) != 0) {
        bVar29 = param_3 < local_48 + 2;
        pbVar22 = pbVar25;
        if (bVar29) {
          pbVar22 = param_3;
        }
        *(undefined2 *)param_1 = *(undefined2 *)pbVar22;
        param_3 = param_3 + (uint)bVar29 * 2;
        pbVar25 = pbVar25 + (uint)!bVar29 * 2;
      }
      if ((param_3 != local_48 + 2) || (pbVar25 != local_4c + 2)) {
        FUN_10136ce0();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
    }
    return;
  }
  local_18 = param_3 + -0x10;
  local_24 = param_3 + -8;
  local_20 = param_3 + -2;
  local_2c = param_6;
LAB_100ddc59:
  local_14 = param_1 + 0x10;
  local_44 = param_2;
  do {
    if (param_5 == 0) {
      FUN_100dd620(param_1,local_44,param_3,param_4,'\x01');
      return;
    }
    pbVar25 = param_1 + (local_44 & 0x3ffffff8);
    pbVar22 = param_1 + (local_44 >> 3) * 0xe;
    if (local_44 < 0x40) {
      bVar14 = *param_1;
      bVar18 = *pbVar25;
      bVar2 = *pbVar22;
      bVar29 = bVar14 < bVar18;
      if (bVar14 == bVar18) {
        bVar29 = param_1[1] < pbVar25[1];
      }
      bVar9 = bVar14 < bVar2;
      if (bVar14 == bVar2) {
        bVar9 = param_1[1] < pbVar22[1];
      }
      pbVar11 = param_1;
      if (bVar29 == bVar9) {
        bVar9 = bVar18 < bVar2;
        if (bVar18 == bVar2) {
          bVar9 = pbVar25[1] < pbVar22[1];
        }
        pbVar11 = pbVar25;
        if (bVar29 != bVar9) {
          pbVar11 = pbVar22;
        }
      }
    }
    else {
      pbVar11 = FUN_100defd0(param_1,pbVar25,pbVar22,local_44 >> 3);
    }
    local_1c = param_5 - 1;
    local_26 = *pbVar11;
    local_25 = pbVar11[1];
    uVar10 = (int)pbVar11 - (int)param_1;
    if (local_2c != (byte *)0x0) {
      bVar29 = *local_2c < local_26;
      if (*local_2c == local_26) {
        bVar29 = local_2c[1] < local_25;
      }
      if (!bVar29) break;
    }
    if (param_4 < local_44) goto LAB_100dea52;
    pbVar25 = param_3 + local_44 * 2;
    param_2 = 0;
    uVar19 = uVar10 >> 1;
    pbVar22 = param_1;
    while( true ) {
      iVar26 = uVar19 - 3;
      if (uVar19 < 3) {
        iVar26 = 0;
      }
      if (pbVar22 < param_1 + iVar26 * 2) {
        bVar14 = param_1[uVar10];
        bVar18 = param_1[uVar10 + 1];
        do {
          bVar29 = *pbVar22 < bVar14;
          if (*pbVar22 == bVar14) {
            bVar29 = pbVar22[1] < bVar18;
          }
          pbVar11 = pbVar25 + -2;
          if (bVar29 != false) {
            pbVar11 = param_3;
          }
          *(undefined2 *)(pbVar11 + param_2 * 2) = *(undefined2 *)pbVar22;
          bVar9 = pbVar22[2] < bVar14;
          if (pbVar22[2] == bVar14) {
            bVar9 = pbVar22[3] < bVar18;
          }
          pbVar11 = pbVar25 + -4;
          if (bVar9 != false) {
            pbVar11 = param_3;
          }
          *(undefined2 *)(pbVar11 + (bVar29 + param_2) * 2) = *(undefined2 *)(pbVar22 + 2);
          iVar27 = (uint)bVar9 + bVar29 + param_2;
          bVar29 = pbVar22[4] < bVar14;
          if (pbVar22[4] == bVar14) {
            bVar29 = pbVar22[5] < bVar18;
          }
          pbVar11 = pbVar25 + -6;
          if (bVar29 != false) {
            pbVar11 = param_3;
          }
          iVar23 = (uint)bVar29 + iVar27;
          *(undefined2 *)(pbVar11 + iVar27 * 2) = *(undefined2 *)(pbVar22 + 4);
          pbVar11 = pbVar22 + 6;
          bVar29 = pbVar22[6] < bVar14;
          if (pbVar22[6] == bVar14) {
            bVar29 = pbVar22[7] < bVar18;
          }
          pbVar25 = pbVar25 + -8;
          pbVar12 = pbVar25;
          if (bVar29 != false) {
            pbVar12 = param_3;
          }
          pbVar22 = pbVar22 + 8;
          param_2 = (uint)bVar29 + iVar23;
          *(undefined2 *)(pbVar12 + iVar23 * 2) = *(undefined2 *)pbVar11;
        } while (pbVar22 < param_1 + iVar26 * 2);
      }
      if (pbVar22 < param_1 + uVar19 * 2) {
        bVar14 = param_1[uVar10];
        bVar18 = param_1[uVar10 + 1];
        uVar17 = param_2;
        do {
          uVar4 = *(undefined2 *)pbVar22;
          bVar29 = *pbVar22 < bVar14;
          if (*pbVar22 == bVar14) {
            bVar29 = pbVar22[1] < bVar18;
          }
          pbVar25 = pbVar25 + -2;
          pbVar11 = pbVar25;
          if (bVar29 != false) {
            pbVar11 = param_3;
          }
          pbVar22 = pbVar22 + 2;
          param_2 = bVar29 + uVar17;
          *(undefined2 *)(pbVar11 + uVar17 * 2) = uVar4;
          uVar17 = param_2;
        } while (pbVar22 < param_1 + uVar19 * 2);
      }
      if (uVar19 == local_44) break;
      uVar4 = *(undefined2 *)pbVar22;
      pbVar22 = pbVar22 + 2;
      *(undefined2 *)(pbVar25 + param_2 * 2 + -2) = uVar4;
      pbVar25 = pbVar25 + -2;
      uVar19 = local_44;
    }
    memcpy(param_1,param_3,param_2 * 2);
    param_5 = local_1c;
    uVar19 = local_44 - param_2;
    if (uVar19 != 0) {
      uVar17 = 0;
      if (3 < uVar19) {
        uVar24 = 0;
        if (0xf < uVar19) {
          uVar17 = uVar19 & 0xfffffff0;
          pauVar15 = (undefined1 (*) [16])(local_14 + param_2 * 2);
          pauVar16 = (undefined1 (*) [16])(local_18 + local_44 * 2);
          uVar24 = uVar17;
          do {
            auVar30 = pauVar16[-1];
            auVar34 = *pauVar16;
            pauVar16 = pauVar16 + -2;
            auVar33._0_8_ = auVar34._8_8_;
            auVar33._8_4_ = auVar34._0_4_;
            auVar33._12_4_ = auVar34._4_4_;
            auVar34._0_8_ = auVar30._8_8_;
            auVar34._8_4_ = auVar30._0_4_;
            auVar34._12_4_ = auVar30._4_4_;
            auVar33 = pshuflw(auVar33,auVar33,0x1b);
            auVar30 = pshuflw(auVar34,auVar34,0x1b);
            auVar34 = pshufhw(auVar33,auVar33,0x1b);
            auVar30 = pshufhw(auVar30,auVar30,0x1b);
            pauVar15[-1] = auVar34;
            *pauVar15 = auVar30;
            pauVar15 = pauVar15 + 2;
            uVar24 = uVar24 - 0x10;
          } while (uVar24 != 0);
          if (uVar19 == uVar17) goto LAB_100de08f;
          uVar24 = uVar17;
          if ((uVar19 & 0xc) == 0) goto LAB_100de04f;
        }
        puVar28 = (ulonglong *)(local_24 + uVar24 * -2 + local_44 * 2);
        uVar17 = uVar19 & 0xfffffffc;
        iVar26 = uVar24 - uVar17;
        pbVar25 = param_1 + param_2 * 2 + uVar24 * 2;
        do {
          auVar30._8_8_ = 0;
          auVar30._0_8_ = *puVar28;
          puVar28 = puVar28 + -1;
          auVar30 = pshuflw(auVar30,auVar30,0x1b);
          *(longlong *)pbVar25 = auVar30._0_8_;
          pbVar25 = pbVar25 + 8;
          iVar26 = iVar26 + 4;
        } while (iVar26 != 0);
        if (uVar19 == uVar17) goto LAB_100de08f;
      }
LAB_100de04f:
      pbVar25 = param_1 + param_2 * 2 + uVar17 * 2;
      pbVar22 = local_20 + uVar17 * -2 + local_44 * 2;
      iVar26 = (uVar17 - local_44) + param_2;
      do {
        uVar4 = *(undefined2 *)pbVar22;
        pbVar22 = pbVar22 + -2;
        *(undefined2 *)pbVar25 = uVar4;
        pbVar25 = pbVar25 + 2;
        iVar26 = iVar26 + 1;
      } while (iVar26 != 0);
    }
LAB_100de08f:
    if (param_2 == 0) break;
    if (local_44 < param_2) {
      FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                   ,0x13,&PTR_s_C__Users_runneradmin__rustup_too_101536f0);
      goto LAB_100dea52;
    }
    FUN_100ddbd0(param_1 + param_2 * 2,uVar19,param_3,param_4,local_1c,&local_26);
    local_44 = param_2;
    if (param_2 < 0x21) goto LAB_100ddbe2;
  } while( true );
  if (param_4 < local_44) {
LAB_100dea52:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  local_4c = param_3 + local_44 * 2;
  uVar17 = 0;
  pbVar25 = param_1;
  uVar19 = uVar10 >> 1;
  while( true ) {
    iVar26 = uVar19 - 3;
    if (uVar19 < 3) {
      iVar26 = 0;
    }
    if (pbVar25 < param_1 + iVar26 * 2) {
      bVar14 = param_1[uVar10];
      bVar18 = param_1[uVar10 + 1];
      do {
        bVar29 = *pbVar25 <= bVar14;
        if (bVar14 == *pbVar25) {
          bVar29 = pbVar25[1] <= bVar18;
        }
        pbVar22 = local_4c + -2;
        if (bVar29 != false) {
          pbVar22 = param_3;
        }
        *(undefined2 *)(pbVar22 + uVar17 * 2) = *(undefined2 *)pbVar25;
        bVar9 = pbVar25[2] <= bVar14;
        if (bVar14 == pbVar25[2]) {
          bVar9 = pbVar25[3] <= bVar18;
        }
        pbVar22 = local_4c + -4;
        if (bVar9 != false) {
          pbVar22 = param_3;
        }
        iVar27 = (uint)bVar9 + bVar29 + uVar17;
        *(undefined2 *)(pbVar22 + (bVar29 + uVar17) * 2) = *(undefined2 *)(pbVar25 + 2);
        bVar29 = pbVar25[4] <= bVar14;
        if (bVar14 == pbVar25[4]) {
          bVar29 = pbVar25[5] <= bVar18;
        }
        pbVar22 = local_4c + -6;
        if (bVar29 != false) {
          pbVar22 = param_3;
        }
        *(undefined2 *)(pbVar22 + iVar27 * 2) = *(undefined2 *)(pbVar25 + 4);
        iVar27 = (uint)bVar29 + iVar27;
        bVar29 = pbVar25[6] <= bVar14;
        if (bVar14 == pbVar25[6]) {
          bVar29 = pbVar25[7] <= bVar18;
        }
        local_4c = local_4c + -8;
        pbVar22 = pbVar25 + 6;
        pbVar11 = local_4c;
        if (bVar29 != false) {
          pbVar11 = param_3;
        }
        pbVar25 = pbVar25 + 8;
        uVar17 = (uint)bVar29 + iVar27;
        *(undefined2 *)(pbVar11 + iVar27 * 2) = *(undefined2 *)pbVar22;
      } while (pbVar25 < param_1 + iVar26 * 2);
    }
    if (pbVar25 < param_1 + uVar19 * 2) {
      bVar14 = param_1[uVar10];
      bVar18 = param_1[uVar10 + 1];
      do {
        bVar29 = *pbVar25 <= bVar14;
        if (bVar14 == *pbVar25) {
          bVar29 = pbVar25[1] <= bVar18;
        }
        local_4c = local_4c + -2;
        uVar4 = *(undefined2 *)pbVar25;
        pbVar22 = local_4c;
        if (bVar29 != false) {
          pbVar22 = param_3;
        }
        pbVar25 = pbVar25 + 2;
        *(undefined2 *)(pbVar22 + uVar17 * 2) = uVar4;
        uVar17 = bVar29 + uVar17;
      } while (pbVar25 < param_1 + uVar19 * 2);
    }
    if (uVar19 == local_44) break;
    uVar4 = *(undefined2 *)pbVar25;
    local_4c = local_4c + -2;
    pbVar25 = pbVar25 + 2;
    *(undefined2 *)(param_3 + uVar17 * 2) = uVar4;
    uVar17 = uVar17 + 1;
    uVar19 = local_44;
  }
  memcpy(param_1,param_3,uVar17 * 2);
  param_2 = local_44 - uVar17;
  if (param_2 == 0) {
    return;
  }
  uVar10 = 0;
  if (3 < param_2) {
    uVar19 = 0;
    if (0xf < param_2) {
      pauVar16 = (undefined1 (*) [16])(param_1 + uVar17 * 2 + 0x10);
      uVar10 = param_2 & 0xfffffff0;
      pauVar15 = (undefined1 (*) [16])(local_18 + local_44 * 2);
      uVar19 = uVar10;
      do {
        auVar30 = pauVar15[-1];
        auVar34 = *pauVar15;
        pauVar15 = pauVar15 + -2;
        auVar35._0_8_ = auVar34._8_8_;
        auVar35._8_4_ = auVar34._0_4_;
        auVar35._12_4_ = auVar34._4_4_;
        auVar31._0_8_ = auVar30._8_8_;
        auVar31._8_4_ = auVar30._0_4_;
        auVar31._12_4_ = auVar30._4_4_;
        auVar34 = pshuflw(auVar35,auVar35,0x1b);
        auVar30 = pshuflw(auVar31,auVar31,0x1b);
        auVar34 = pshufhw(auVar34,auVar34,0x1b);
        auVar30 = pshufhw(auVar30,auVar30,0x1b);
        pauVar16[-1] = auVar34;
        *pauVar16 = auVar30;
        pauVar16 = pauVar16 + 2;
        uVar19 = uVar19 - 0x10;
      } while (uVar19 != 0);
      if (param_2 == uVar10) goto LAB_100de3cf;
      uVar19 = uVar10;
      if ((param_2 & 0xc) == 0) goto LAB_100de3a2;
    }
    pbVar25 = param_1 + uVar17 * 2 + uVar19 * 2;
    puVar28 = (ulonglong *)(local_24 + local_44 * 2 + uVar19 * -2);
    uVar10 = param_2 & 0xfffffffc;
    iVar26 = uVar19 - uVar10;
    do {
      auVar32._8_8_ = 0;
      auVar32._0_8_ = *puVar28;
      puVar28 = puVar28 + -1;
      auVar30 = pshuflw(auVar32,auVar32,0x1b);
      *(longlong *)pbVar25 = auVar30._0_8_;
      pbVar25 = pbVar25 + 8;
      iVar26 = iVar26 + 4;
    } while (iVar26 != 0);
    if (param_2 == uVar10) goto LAB_100de3cf;
  }
LAB_100de3a2:
  pbVar25 = param_1 + uVar17 * 2 + uVar10 * 2;
  pbVar22 = local_20 + local_44 * 2 + uVar10 * -2;
  iVar26 = (uVar10 - local_44) + uVar17;
  do {
    uVar4 = *(undefined2 *)pbVar22;
    pbVar22 = pbVar22 + -2;
    *(undefined2 *)pbVar25 = uVar4;
    pbVar25 = pbVar25 + 2;
    iVar26 = iVar26 + 1;
  } while (iVar26 != 0);
LAB_100de3cf:
  if (local_44 < uVar17) {
    FUN_10136a50(uVar17,local_44,local_44,&PTR_s_C__Users_runneradmin__rustup_too_10153700);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  param_1 = param_1 + uVar17 * 2;
  local_2c = (byte *)0x0;
  param_5 = local_1c;
  if (param_2 < 0x21) goto LAB_100ddbe2;
  goto LAB_100ddc59;
}
