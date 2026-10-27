// rea decompile_all
// name: FUN_100c6f70
// address: 0x100c6f70
// body: available
// range: 0x100c6f70-0x100c7141 inclusive
// range: 0x100c7150-0x100c7179 inclusive
// range: 0x100c7180-0x100c71a8 inclusive
// range: 0x100c71b0-0x100c721b inclusive
// range: 0x100c7220-0x100c7279 inclusive
// range: 0x100c7280-0x100c7569 inclusive
// range: 0x100c7570-0x100c7661 inclusive
// range: 0x100c7670-0x100c8804 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100c6f70(undefined4 *param_1,uint *param_2,uint *param_3,int param_4)

{
  uint *puVar1;
  SIZE_T _Size;
  code *pcVar2;
  uint *puVar3;
  HANDLE pvVar4;
  uint uVar5;
  LPVOID pvVar6;
  undefined4 *puVar7;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  SIZE_T SVar14;
  byte bVar15;
  int iVar16;
  uint *unaff_ESI;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  uint *local_234;
  uint *local_230;
  uint *local_228;
  uint *local_224;
  uint *local_220;
  uint *local_21c;
  uint *local_218;
  uint *local_214;
  uint *local_210;
  undefined4 uStack_20c;
  uint *local_208;
  undefined1 uStack_202;
  undefined1 uStack_201;
  undefined1 local_200 [16];
  uint uStack_1f0;
  undefined4 uStack_1ec;
  uint *puStack_1e8;
  undefined4 *local_1e4;
  uint uStack_1e0;
  undefined8 uStack_1dc;
  uint uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  uint local_188;
  uint *puStack_184;
  uint *puStack_180;
  uint *puStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  uint uStack_170;
  undefined1 uStack_16c;
  undefined1 uStack_16b;
  undefined1 uStack_16a;
  byte bStack_169;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined8 uStack_154;
  undefined4 uStack_14c;
  undefined1 local_144 [8];
  undefined1 uStack_13c;
  undefined1 uStack_13b;
  undefined4 uStack_13a;
  undefined2 uStack_136;
  undefined1 local_134;
  undefined4 uStack_133;
  undefined2 uStack_12f;
  undefined1 uStack_12d;
  undefined4 uStack_12c;
  undefined2 uStack_128;
  undefined1 uStack_126;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  undefined1 uStack_e6;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined2 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  uint auStack_bc [20];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined2 uStack_58;
  uint *puStack_54;
  uint *puStack_50;
  uint *puStack_4c;
  undefined1 uStack_48;
  byte bStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;

  iVar16 = 0x200;
  local_230 = param_2;
  local_1e4 = param_1;
  if ((*(byte *)(param_2[0x16] + 0x1c) & 1) == 0) {
    puVar12 = (uint *)&DAT_101525c4;
    if ((char)param_2[0xf] != -1) {
      puVar12 = param_2 + 0xc;
    }
    uVar11 = puVar12[3];
    if ((byte)uVar11 != 2) {
      local_208 = (uint *)puVar12[1];
      unaff_ESI = (uint *)*puVar12;
      LOCK();
      uVar5 = *unaff_ESI;
      *unaff_ESI = *unaff_ESI + 1;
      UNLOCK();
      if (*unaff_ESI == 0 || SCARRY4(uVar5,1) != (int)*unaff_ESI < 0) goto LAB_100c86fb;
      local_210 = (uint *)puVar12[2];
      iVar16 = (uint)(byte)uVar11 << 8;
      LOCK();
      uVar11 = *param_2;
      *param_2 = *param_2 + 1;
      UNLOCK();
      if (*param_2 == 0 || SCARRY4(uVar11,1) != (int)*param_2 < 0) goto LAB_100c86fb;
      goto LAB_100c7bb3;
    }
    if (((byte)param_2[0x11] != 2 & ((byte)param_2[0x11] ^ 1)) != 0) goto LAB_100c72c2;
    local_224 = (uint *)0x0;
    local_220 = (uint *)&DAT_00000004;
    local_21c = (uint *)0x0;
    _local_144 = _DAT_1013ee10;
    local_134 = 0;
    local_214 = (uint *)CONCAT31(local_214._1_3_,
                                 *(byte *)((int)param_2 + 0x42) == 2 |
                                 *(byte *)((int)param_2 + 0x42));
    if (param_4 != 0) {
      local_200._0_4_ = param_3 + param_4;
      puVar12 = param_3;
      do {
        local_218 = puVar12;
        FUN_100e0b70((int *)*puVar12);
        puVar17 = puStack_17c;
        puVar12 = puStack_180;
        uStack_20c = puStack_184;
        if (puStack_184 == (uint *)0xffffffff) {
          if (local_220 != (uint *)0xffffffff) {
            local_224 = local_220;
            local_230 = local_21c;
            if (local_218 != (uint *)0x0) {
              unaff_ESI = local_21c + 1;
              puVar12 = local_218;
              do {
                if (unaff_ESI[-1] != 0) {
                  pvVar6 = (LPVOID)*unaff_ESI;
                  pvVar4 = GetProcessHeap();
                  HeapFree(pvVar4,0,pvVar6);
                }
                unaff_ESI = unaff_ESI + 4;
                puVar12 = (uint *)((int)puVar12 + -1);
              } while (puVar12 != (uint *)0x0);
            }
            if (local_228 != (uint *)0x0) {
              pvVar4 = GetProcessHeap();
              HeapFree(pvVar4,0,local_234);
            }
          }
          local_224 = (uint *)0xffffffff;
LAB_100c71f2:
          if (local_210 != (uint *)0xffffffff) goto LAB_100c71fd;
        }
        else {
          puStack_17c = (uint *)0x0;
          if (local_220 != (uint *)0xffffffff) {
            if ((uint *)((int)local_220 - (int)local_218) < puVar17) {
              FUN_101359e0((uint *)&local_220,(uint)local_218,(uint)puVar17,&DAT_00000004,0x10);
LAB_100c709f:
              local_228 = puVar12 + (int)puVar17 * 4;
              local_224 = (uint *)((int)puVar17 * 0x10 + -0x10);
              puVar17 = local_21c + (int)local_218 * 4 + 1;
              puVar18 = puVar12 + 5;
              do {
                puVar19 = local_218;
                unaff_ESI = (uint *)*puVar12;
                if (unaff_ESI == (uint *)0xffffffff) {
                  local_218 = puVar19;
                  if (local_228 != puVar12 + 4) {
                    uVar11 = (uint)local_224 >> 4;
                    do {
                      if (puVar18[-1] != 0) {
                        unaff_ESI = (uint *)*puVar18;
                        pvVar4 = GetProcessHeap();
                        HeapFree(pvVar4,0,unaff_ESI);
                      }
                      puVar18 = puVar18 + 4;
                      uVar11 = uVar11 - 1;
                    } while (uVar11 != 0);
                  }
                  break;
                }
                local_224 = local_224 + -4;
                puVar18 = puVar18 + 4;
                uStack_1d4 = puVar12[3];
                uStack_1dc = *(undefined8 *)(puVar12 + 1);
                puVar3 = puVar12 + 4;
                puVar17[-1] = (uint)unaff_ESI;
                *(undefined8 *)puVar17 = uStack_1dc;
                puVar17[2] = uStack_1d4;
                puVar17 = puVar17 + 4;
                local_218 = (uint *)((int)puVar19 + 1);
                puVar12 = puVar12 + 4;
                local_230 = puVar19;
              } while (puVar3 != local_228);
            }
            else {
              unaff_ESI = (uint *)0x0;
              if (puVar17 != (uint *)0x0) goto LAB_100c709f;
            }
            if (local_224 != (uint *)0xffffffff) {
              FUN_100e2fa0((int)&local_224);
            }
            goto LAB_100c71f2;
          }
          if (puVar17 != (uint *)0x0) {
            puVar12 = puStack_180 + 1;
            do {
              if (puVar12[-1] != 0) {
                unaff_ESI = (uint *)*puVar12;
                pvVar4 = GetProcessHeap();
                HeapFree(pvVar4,0,unaff_ESI);
              }
              puVar12 = puVar12 + 4;
              puVar17 = (uint *)((int)puVar17 + -1);
            } while (puVar17 != (uint *)0x0);
            goto LAB_100c71f2;
          }
LAB_100c71fd:
          puVar12 = puStack_184;
          local_234 = puStack_184;
          if (puStack_180 != (uint *)0x0) {
            puVar17 = puStack_184 + 1;
            puVar18 = puStack_180;
            do {
              if (puVar17[-1] != 0) {
                unaff_ESI = (uint *)*puVar17;
                pvVar4 = GetProcessHeap();
                HeapFree(pvVar4,0,unaff_ESI);
              }
              puVar17 = puVar17 + 4;
              puVar18 = (uint *)((int)puVar18 + -1);
            } while (puVar18 != (uint *)0x0);
          }
          if (local_210 != (uint *)0x0) {
            pvVar4 = GetProcessHeap();
            HeapFree(pvVar4,0,puVar12);
          }
        }
        puVar12 = local_218 + 1;
      } while (puVar12 != (uint *)local_200._0_4_);
    }
    puVar18 = local_21c;
    puVar17 = local_220;
    puVar12 = local_224;
    if (((uint)local_214 & 1) == 0) {
      if (local_224 == (uint *)0xffffffff) goto LAB_100c7baa;
      if ((uint *)0x1 < local_21c) {
        if (&DAT_00000014 < local_21c) {
          FUN_100c1360((undefined8 *)local_220,(uint)local_21c);
        }
        else {
          FUN_100dbdd0((undefined8 *)local_220,(int)local_21c);
        }
      }
      FUN_100e2fa0((int)&local_224);
      puVar12 = local_220;
      unaff_ESI = local_21c;
      puVar17 = local_224;
      goto joined_r0x100c754f;
    }
    if (local_224 != (uint *)0xffffffff) {
      if (local_21c != (uint *)0x0) {
        uVar11 = local_220[2];
        if (local_21c != (uint *)0x1) {
          iVar16 = 0;
          uVar5 = (uint)((int)local_21c + 0xfffffff) & 0xfffffff;
          if (8 < uVar5) {
            uVar13 = (uint)((int)local_21c + 0xfffffff) & 7;
            auVar22._4_4_ = uVar11;
            auVar22._0_4_ = uVar11;
            auVar22._8_4_ = uVar11;
            auVar22._12_4_ = uVar11;
            uVar11 = 8;
            if (uVar13 != 0) {
              uVar11 = uVar13;
            }
            iVar16 = uVar5 - uVar11;
            puVar19 = local_220 + 0x22;
            iVar10 = iVar16;
            auVar25 = auVar22;
            do {
              puVar3 = puVar19 + -8;
              auVar21 = auVar22 ^ _DAT_1013ed30;
              auVar30._12_4_ = puVar19[-0x10];
              auVar30._8_4_ = puVar19[-0x14];
              auVar30._4_4_ = puVar19[-0x18];
              auVar30._0_4_ = puVar19[-0x1c];
              auVar29._12_4_ = *puVar19;
              auVar29._8_4_ = puVar19[-4];
              puVar1 = puVar19 + -0xc;
              puVar19 = puVar19 + 0x20;
              iVar10 = iVar10 + -8;
              auVar29._4_4_ = *puVar3;
              auVar29._0_4_ = *puVar1;
              auVar32 = auVar30 ^ _DAT_1013ed30;
              auVar33._0_4_ = -(uint)(auVar21._0_4_ < auVar32._0_4_);
              auVar33._4_4_ = -(uint)(auVar21._4_4_ < auVar32._4_4_);
              auVar33._8_4_ = -(uint)(auVar21._8_4_ < auVar32._8_4_);
              auVar33._12_4_ = -(uint)(auVar21._12_4_ < auVar32._12_4_);
              auVar21 = auVar25 ^ _DAT_1013ed30;
              auVar32 = auVar29 ^ _DAT_1013ed30;
              auVar22 = ~auVar33 & auVar30 | auVar22 & auVar33;
              auVar34._0_4_ = -(uint)(auVar21._0_4_ < auVar32._0_4_);
              auVar34._4_4_ = -(uint)(auVar21._4_4_ < auVar32._4_4_);
              auVar34._8_4_ = -(uint)(auVar21._8_4_ < auVar32._8_4_);
              auVar34._12_4_ = -(uint)(auVar21._12_4_ < auVar32._12_4_);
              auVar25 = ~auVar34 & auVar29 | auVar25 & auVar34;
            } while (iVar10 != 0);
            auVar29 = auVar22 ^ _DAT_1013ed30;
            auVar21 = auVar25 ^ _DAT_1013ed30;
            auVar32._0_4_ = -(uint)(auVar29._0_4_ < auVar21._0_4_);
            auVar32._4_4_ = -(uint)(auVar29._4_4_ < auVar21._4_4_);
            auVar32._8_4_ = -(uint)(auVar29._8_4_ < auVar21._8_4_);
            auVar32._12_4_ = -(uint)(auVar29._12_4_ < auVar21._12_4_);
            auVar29 = ~auVar32 & auVar25 | auVar22 & auVar32;
            auVar21._0_8_ = auVar29._8_8_;
            auVar21._8_4_ = auVar29._8_4_;
            auVar21._12_4_ = auVar29._12_4_;
            auVar30 = auVar29 ^ _DAT_1013ed30;
            auVar22 = auVar21 ^ _DAT_1013ed30;
            auVar25._0_4_ = -(uint)(auVar30._0_4_ < auVar22._0_4_);
            auVar25._4_4_ = -(uint)(auVar30._4_4_ < auVar22._4_4_);
            auVar25._8_4_ = -(uint)(auVar30._8_4_ < auVar22._8_4_);
            auVar25._12_4_ = -(uint)(auVar30._12_4_ < auVar22._12_4_);
            auVar22 = ~auVar25 & auVar21 | auVar29 & auVar25;
            uVar20 = auVar22._4_4_;
            uVar11 = auVar22._0_4_;
            uVar13 = -(uint)((int)(uVar11 ^ (uint)DAT_1013ed30) < (int)((uint)DAT_1013ed30 ^ uVar20)
                            );
            uVar11 = ~uVar13 & uVar20 | uVar11 & uVar13;
          }
          iVar10 = uVar5 - iVar16;
          puVar19 = local_220 + iVar16 * 4 + 6;
          uVar5 = uVar11;
          do {
            uVar11 = *puVar19;
            if (uVar5 < *puVar19) {
              uVar11 = uVar5;
            }
            puVar19 = puVar19 + 4;
            iVar10 = iVar10 + -1;
            uVar5 = uVar11;
          } while (iVar10 != 0);
        }
        if (uVar11 == 0) {
          puVar18 = local_220 + 1;
          puVar19 = local_21c;
          do {
            if (puVar18[-1] != 0) {
              pvVar6 = (LPVOID)*puVar18;
              pvVar4 = GetProcessHeap();
              HeapFree(pvVar4,0,pvVar6);
            }
            puVar18 = puVar18 + 4;
            puVar19 = (uint *)((int)puVar19 + -1);
          } while (puVar19 != (uint *)0x0);
          if (puVar12 != (uint *)0x0) {
            pvVar4 = GetProcessHeap();
            HeapFree(pvVar4,0,puVar17);
          }
          local_224 = (uint *)0xffffffff;
          unaff_ESI = (uint *)0x0;
          goto LAB_100c7baa;
        }
      }
      FUN_100fde30((int)&local_224);
      unaff_ESI = puVar18;
      if (local_224 != (uint *)0xffffffff) {
        local_218 = local_220;
        if (local_21c != (uint *)0x0) {
          local_214 = (uint *)((int)local_21c * 0x10);
          local_200._0_4_ = local_224;
          uVar13 = 1;
          uVar11 = local_220[2];
          local_210 = (uint *)((int)local_214 + (int)local_220);
          local_234 = local_220;
          bVar9 = false;
          uVar5 = uVar11;
LAB_100c8625:
          puVar12 = local_214;
          puVar17 = local_220;
          if (bVar9) {
            if (local_234 == local_210) goto LAB_100c869d;
joined_r0x100c8686:
            if (uVar11 < uVar5) {
              FUN_10136a50(0,uVar5,uVar11,&PTR_s_C__Users_runneradmin__cargo_regi_10153fdc);
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            uVar13 = local_234[2];
            if (uVar5 < local_234[2]) {
              uVar13 = uVar5;
            }
            if (uVar13 != 0) goto code_r0x100c864e;
            uVar13 = 0;
          }
          else {
            if (uVar13 < (uint)((int)local_210 - (int)local_234) >> 4) {
              local_234 = local_234 + uVar13 * 4;
              goto joined_r0x100c8686;
            }
LAB_100c869d:
            if (uVar11 < uVar5) {
              FUN_10136a50(0,uVar5,uVar11,&PTR_s_C__Users_runneradmin__cargo_regi_10153fcc);
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            uVar13 = uVar5;
            if ((((uint *)0x1 < puVar18) && (uVar5 - 1 < 3)) &&
               ((byte)(&DAT_10153fec)[*(byte *)local_220[1]] < 200)) {
              local_228 = (uint *)((int)local_21c << 4);
              local_218 = local_220 + 2;
              do {
                if (1 < *local_218) {
                  *(undefined1 *)(local_218 + 1) = 0;
                  *local_218 = 1;
                }
                local_218 = local_218 + 4;
                local_228 = (uint *)((int)local_228 + -0x10);
              } while (local_228 != (uint *)0x0);
              FUN_100e2fa0((int)&local_224);
              puVar12 = local_220;
              unaff_ESI = local_21c;
              puVar17 = local_224;
              goto joined_r0x100c754f;
            }
          }
          goto LAB_100c8707;
        }
        puVar18 = (uint *)0x0;
        goto LAB_100c74e7;
      }
    }
    goto LAB_100c7baa;
  }
LAB_100c72c2:
  LOCK();
  uVar11 = *param_2;
  *param_2 = *param_2 + 1;
  UNLOCK();
  if (*param_2 == 0 || SCARRY4(uVar11,1) != (int)*param_2 < 0) goto LAB_100c86fb;
  goto LAB_100c7bb3;
code_r0x100c864e:
  puVar19 = local_234 + 1;
  local_234 = local_234 + 4;
  uVar20 = 0;
  do {
    uVar5 = uVar20;
    if (*(byte *)(*puVar19 + uVar20) != ((byte *)local_220[1])[uVar20]) break;
    uVar20 = uVar20 + 1;
    uVar5 = uVar13;
  } while (uVar13 != uVar20);
  uVar13 = 0;
  bVar9 = true;
  if (uVar5 == 0) goto LAB_100c8707;
  goto LAB_100c8625;
  while( true ) {
    puVar19 = puVar17 + 3;
    puVar12 = puVar12 + -4;
    puVar17 = puVar17 + 4;
    if ((char)*puVar19 == '\0') break;
LAB_100c8707:
    puVar18 = local_21c;
    if (puVar12 == (uint *)0x0) {
      if ((4 < uVar13) || (1 < uVar13 && &DAT_00000010 < local_21c)) goto LAB_100c8744;
      goto LAB_100c74e7;
    }
  }
  if (1 < uVar13) {
LAB_100c8744:
    iVar16 = (int)local_21c << 4;
    puVar12 = local_220 + 2;
    do {
      if (uVar13 < *puVar12) {
        *(undefined1 *)(puVar12 + 1) = 0;
        *puVar12 = uVar13;
      }
      puVar12 = puVar12 + 4;
      iVar16 = iVar16 + -0x10;
    } while (iVar16 != 0);
    FUN_100e2fa0((int)&local_224);
    if (local_224 == (uint *)0xffffffff) {
      uStack_1e0 = 0;
LAB_100c87fa:
      FUN_101368b4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uStack_1dc = CONCAT44(uStack_1dc._4_4_,local_21c);
    uStack_1e0 = 1;
    if (local_21c != (uint *)0x1) goto LAB_100c87fa;
    local_218 = local_220;
    puVar18 = (uint *)0x1;
  }
LAB_100c74e7:
  iVar16 = (int)puVar18 << 4;
  puVar12 = local_218;
  do {
    puVar17 = local_224;
    local_220 = local_218;
    if (iVar16 == 0) {
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)0x0;
        local_214 = (uint *)&DAT_00000004;
        local_228 = (uint *)0x0;
        goto LAB_100c775c;
      }
      SVar14 = (int)puVar18 << 4;
      local_200._0_4_ = local_224;
      puVar12 = FUN_10107380(0,SVar14);
      if (puVar12 == (uint *)0x0) {
        FUN_101366bc(4);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      puVar17 = puVar12 + 3;
      puVar19 = local_218;
      local_214 = puVar12;
      goto LAB_100c760f;
    }
    iVar16 = iVar16 + -0x10;
    puVar19 = puVar12 + 3;
    puVar12 = puVar12 + 4;
  } while ((char)*puVar19 != '\0');
  local_228 = (uint *)0xfffffffe;
  puVar12 = puVar18;
  puVar18 = (uint *)0x0;
  goto LAB_100c76cb;
  while( true ) {
    _Size = puVar19[2];
    if (_Size == 0) {
      pvVar6 = (LPVOID)0x1;
    }
    else {
      local_210 = (uint *)puVar19[1];
      pvVar6 = FUN_10107380(0,_Size);
      if (pvVar6 == (LPVOID)0x0) {
        FUN_101366bc(1);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      memcpy(pvVar6,local_210,_Size);
    }
    uVar11 = puVar19[3];
    puVar17[-3] = _Size;
    puVar17[-2] = (uint)pvVar6;
    puVar17[-1] = _Size;
    puVar19 = puVar19 + 4;
    *(char *)puVar17 = (char)uVar11;
    puVar17 = puVar17 + 4;
    SVar14 = SVar14 - 0x10;
    if (SVar14 == 0) break;
LAB_100c760f:
    if (SVar14 == 0) break;
  }
  puVar12 = local_21c;
  puVar17 = (uint *)local_200._0_4_;
  local_228 = puVar18;
LAB_100c76cb:
  if (puVar12 < (uint *)0xb) {
LAB_100c775c:
    if (puVar17 == (uint *)0xffffffff) goto LAB_100c792b;
LAB_100c7769:
    local_200._0_4_ = puVar17;
LAB_100c7858:
    puVar12 = local_220;
    puVar19 = (uint *)local_200._0_4_;
    if (local_21c != (uint *)0x0) {
      iVar16 = 0;
      do {
        iVar10 = *(int *)((int)local_220 + iVar16 + 8);
        if (iVar10 != 1) {
          if (iVar10 != 0) goto LAB_100c787d;
LAB_100c7893:
          puVar17 = local_220 + 1;
          puVar19 = local_21c;
          do {
            if (puVar17[-1] != 0) {
              pvVar6 = (LPVOID)*puVar17;
              pvVar4 = GetProcessHeap();
              HeapFree(pvVar4,0,pvVar6);
            }
            puVar17 = puVar17 + 4;
            puVar19 = (uint *)((int)puVar19 + -1);
          } while (puVar19 != (uint *)0x0);
          if (local_200._0_4_ != 0) {
            pvVar4 = GetProcessHeap();
            HeapFree(pvVar4,0,puVar12);
          }
          local_224 = (uint *)0xffffffff;
          puVar19 = (uint *)0xffffffff;
          break;
        }
        if (0xf9 < (byte)(&DAT_10153fec)[**(byte **)((int)local_220 + iVar16 + 4)])
        goto LAB_100c7893;
LAB_100c787d:
        iVar16 = iVar16 + 0x10;
      } while ((int)local_21c << 4 != iVar16);
    }
  }
  else {
    iVar16 = (int)puVar12 << 4;
    puVar12 = local_218 + 2;
    do {
      if (5 < *puVar12) {
        *(undefined1 *)(puVar12 + 1) = 0;
        *puVar12 = 5;
      }
      puVar12 = puVar12 + 4;
      iVar16 = iVar16 + -0x10;
    } while (iVar16 != 0);
    FUN_100fde30((int)&local_224);
    puVar19 = (uint *)0xffffffff;
    if (local_224 != (uint *)0xffffffff) {
      local_200._0_4_ = local_224;
      if (local_21c < (uint *)0xb) goto LAB_100c7858;
      iVar16 = (int)local_21c << 4;
      puVar12 = local_220 + 2;
      do {
        if (4 < *puVar12) {
          *(undefined1 *)(puVar12 + 1) = 0;
          *puVar12 = 4;
        }
        puVar12 = puVar12 + 4;
        iVar16 = iVar16 + -0x10;
      } while (iVar16 != 0);
      FUN_100fde30((int)&local_224);
      if (local_224 != (uint *)0xffffffff) {
        local_200._0_4_ = local_224;
        if (local_21c < (uint *)0x41) goto LAB_100c7858;
        iVar16 = (int)local_21c << 4;
        puVar12 = local_220 + 2;
        do {
          if (3 < *puVar12) {
            *(undefined1 *)(puVar12 + 1) = 0;
            *puVar12 = 3;
          }
          puVar12 = puVar12 + 4;
          iVar16 = iVar16 + -0x10;
        } while (iVar16 != 0);
        FUN_100fde30((int)&local_224);
        if (local_224 != (uint *)0xffffffff) {
          local_200._0_4_ = local_224;
          if (local_21c < (uint *)0x41) goto LAB_100c7858;
          puVar12 = local_220 + 2;
          iVar16 = (int)local_21c << 4;
          do {
            if (2 < *puVar12) {
              *(undefined1 *)(puVar12 + 1) = 0;
              *puVar12 = 2;
            }
            puVar12 = puVar12 + 4;
            iVar16 = iVar16 + -0x10;
          } while (iVar16 != 0);
          FUN_100fde30((int)&local_224);
          local_200._0_4_ = local_224;
          if (local_224 != (uint *)0xffffffff) {
            if (local_21c < (uint *)0xb) goto LAB_100c7858;
            iVar16 = (int)local_21c << 4;
            puVar12 = local_220 + 2;
            do {
              if (1 < *puVar12) {
                *(undefined1 *)(puVar12 + 1) = 0;
                *puVar12 = 1;
              }
              puVar12 = puVar12 + 4;
              iVar16 = iVar16 + -0x10;
            } while (iVar16 != 0);
            FUN_100fde30((int)&local_224);
            puVar17 = local_224;
            if (local_224 != (uint *)0xffffffff) goto LAB_100c7769;
          }
        }
      }
LAB_100c792b:
      puVar19 = (uint *)0xffffffff;
    }
  }
  puVar3 = local_220;
  puVar12 = local_220;
  unaff_ESI = local_21c;
  puVar17 = local_224;
  if ((local_228 != (uint *)0xfffffffe) &&
     (puVar12 = local_214, unaff_ESI = puVar18, puVar17 = local_228, puVar19 != (uint *)0xffffffff))
  {
    local_210 = puVar19;
    if (local_21c != (uint *)0x0) {
      uVar11 = local_220[2];
      if (local_21c == (uint *)0x1) {
        if (2 < uVar11) {
LAB_100c8548:
          if (puVar18 != (uint *)0x0) {
            puVar12 = local_214 + 1;
            do {
              if (puVar12[-1] != 0) {
                pvVar6 = (LPVOID)*puVar12;
                pvVar4 = GetProcessHeap();
                HeapFree(pvVar4,0,pvVar6);
              }
              puVar12 = puVar12 + 4;
              puVar18 = (uint *)((int)puVar18 + -1);
            } while (puVar18 != (uint *)0x0);
          }
          puVar12 = local_220;
          unaff_ESI = local_21c;
          puVar17 = local_224;
          if (local_228 != (uint *)0x0) {
            pvVar4 = GetProcessHeap();
            HeapFree(pvVar4,0,local_214);
            puVar12 = local_220;
            unaff_ESI = local_21c;
            puVar17 = local_224;
          }
          goto joined_r0x100c754f;
        }
      }
      else {
        iVar16 = 0;
        uVar5 = (uint)((int)local_21c + 0xfffffff) & 0xfffffff;
        if (8 < uVar5) {
          uVar20 = (uint)((int)local_21c + 0xfffffff) & 7;
          uVar13 = 8;
          if (uVar20 != 0) {
            uVar13 = uVar20;
          }
          auVar23._4_4_ = uVar11;
          auVar23._0_4_ = uVar11;
          auVar23._8_4_ = uVar11;
          auVar23._12_4_ = uVar11;
          iVar16 = uVar5 - uVar13;
          puVar12 = local_220 + 0x22;
          iVar10 = iVar16;
          auVar22 = auVar23;
          do {
            puVar19 = puVar12 + -8;
            auVar25 = auVar23 ^ _DAT_1013ed30;
            auVar31._12_4_ = puVar12[-0x10];
            auVar31._8_4_ = puVar12[-0x14];
            auVar31._4_4_ = puVar12[-0x18];
            auVar31._0_4_ = puVar12[-0x1c];
            auVar27._12_4_ = *puVar12;
            auVar27._8_4_ = puVar12[-4];
            puVar1 = puVar12 + -0xc;
            puVar12 = puVar12 + 0x20;
            iVar10 = iVar10 + -8;
            auVar27._4_4_ = *puVar19;
            auVar27._0_4_ = *puVar1;
            auVar21 = auVar31 ^ _DAT_1013ed30;
            auVar35._0_4_ = -(uint)(auVar25._0_4_ < auVar21._0_4_);
            auVar35._4_4_ = -(uint)(auVar25._4_4_ < auVar21._4_4_);
            auVar35._8_4_ = -(uint)(auVar25._8_4_ < auVar21._8_4_);
            auVar35._12_4_ = -(uint)(auVar25._12_4_ < auVar21._12_4_);
            auVar25 = auVar22 ^ _DAT_1013ed30;
            auVar21 = auVar27 ^ _DAT_1013ed30;
            auVar23 = ~auVar35 & auVar31 | auVar23 & auVar35;
            auVar36._0_4_ = -(uint)(auVar25._0_4_ < auVar21._0_4_);
            auVar36._4_4_ = -(uint)(auVar25._4_4_ < auVar21._4_4_);
            auVar36._8_4_ = -(uint)(auVar25._8_4_ < auVar21._8_4_);
            auVar36._12_4_ = -(uint)(auVar25._12_4_ < auVar21._12_4_);
            auVar22 = ~auVar36 & auVar27 | auVar22 & auVar36;
          } while (iVar10 != 0);
          auVar21 = auVar23 ^ _DAT_1013ed30;
          auVar25 = auVar22 ^ _DAT_1013ed30;
          auVar28._0_4_ = -(uint)(auVar21._0_4_ < auVar25._0_4_);
          auVar28._4_4_ = -(uint)(auVar21._4_4_ < auVar25._4_4_);
          auVar28._8_4_ = -(uint)(auVar21._8_4_ < auVar25._8_4_);
          auVar28._12_4_ = -(uint)(auVar21._12_4_ < auVar25._12_4_);
          auVar25 = ~auVar28 & auVar22 | auVar23 & auVar28;
          auVar26._0_8_ = auVar25._8_8_;
          auVar26._8_4_ = auVar25._8_4_;
          auVar26._12_4_ = auVar25._12_4_;
          auVar21 = auVar25 ^ _DAT_1013ed30;
          auVar22 = auVar26 ^ _DAT_1013ed30;
          auVar24._0_4_ = -(uint)(auVar21._0_4_ < auVar22._0_4_);
          auVar24._4_4_ = -(uint)(auVar21._4_4_ < auVar22._4_4_);
          auVar24._8_4_ = -(uint)(auVar21._8_4_ < auVar22._8_4_);
          auVar24._12_4_ = -(uint)(auVar21._12_4_ < auVar22._12_4_);
          auVar22 = ~auVar24 & auVar26 | auVar25 & auVar24;
          uVar20 = auVar22._4_4_;
          uVar11 = auVar22._0_4_;
          uVar13 = -(uint)((int)(uVar11 ^ (uint)DAT_1013ed30) < (int)((uint)DAT_1013ed30 ^ uVar20));
          uVar11 = ~uVar13 & uVar20 | uVar11 & uVar13;
        }
        iVar10 = uVar5 - iVar16;
        puVar12 = local_220 + iVar16 * 4 + 6;
        do {
          uVar5 = *puVar12;
          if (uVar11 < *puVar12) {
            uVar5 = uVar11;
          }
          puVar12 = puVar12 + 4;
          iVar10 = iVar10 + -1;
          uVar11 = uVar5;
        } while (iVar10 != 0);
        if (2 < uVar5) {
          if (local_21c < (uint *)0x41) goto LAB_100c8548;
          puVar12 = local_220 + 1;
          puVar18 = local_21c;
          do {
            if (puVar12[-1] != 0) {
              pvVar6 = (LPVOID)*puVar12;
              pvVar4 = GetProcessHeap();
              HeapFree(pvVar4,0,pvVar6);
            }
            puVar12 = puVar12 + 4;
            puVar18 = (uint *)((int)puVar18 + -1);
          } while (puVar18 != (uint *)0x0);
          goto LAB_100c7b6b;
        }
      }
      puVar12 = local_220 + 1;
      puVar18 = local_21c;
      do {
        if (puVar12[-1] != 0) {
          pvVar6 = (LPVOID)*puVar12;
          pvVar4 = GetProcessHeap();
          HeapFree(pvVar4,0,pvVar6);
        }
        puVar12 = puVar12 + 4;
        puVar18 = (uint *)((int)puVar18 + -1);
      } while (puVar18 != (uint *)0x0);
    }
LAB_100c7b6b:
    puVar12 = local_214;
    if (local_210 != (uint *)0x0) {
      pvVar4 = GetProcessHeap();
      HeapFree(pvVar4,0,puVar3);
      puVar12 = local_214;
    }
  }
joined_r0x100c754f:
  local_224 = puVar17;
  local_220 = puVar12;
  local_21c = unaff_ESI;
  if (puVar17 != (uint *)0xffffffff) {
                    /* WARNING: Read-only address (ram,0x1013ed30) is written */
                    /* WARNING: Read-only address (ram,0x1013ee10) is written */
    if (unaff_ESI != (uint *)0x0) {
      puVar18 = puVar12 + 1;
      do {
        if (puVar18[-1] != 0) {
          pvVar6 = (LPVOID)*puVar18;
          pvVar4 = GetProcessHeap();
          HeapFree(pvVar4,0,pvVar6);
        }
        puVar18 = puVar18 + 4;
        unaff_ESI = (uint *)((int)unaff_ESI + -1);
      } while (unaff_ESI != (uint *)0x0);
    }
    unaff_ESI = (uint *)0x0;
    if (puVar17 != (uint *)0x0) {
      pvVar4 = GetProcessHeap();
      HeapFree(pvVar4,0,puVar12);
    }
  }
LAB_100c7baa:
  iVar16 = 0x200;
  LOCK();
  uVar11 = *local_230;
  *local_230 = *local_230 + 1;
  UNLOCK();
  if (*local_230 == 0 || SCARRY4(uVar11,1) != (int)*local_230 < 0) goto LAB_100c86fb;
LAB_100c7bb3:
  puVar12 = (uint *)0x2;
  bVar15 = (byte)((uint)iVar16 >> 8);
  if (bVar15 != 2) {
    LOCK();
    uVar11 = *unaff_ESI;
    *unaff_ESI = *unaff_ESI + 1;
    UNLOCK();
    if (*unaff_ESI == 0 || SCARRY4(uVar11,1) != (int)*unaff_ESI < 0) goto LAB_100c86fb;
    puVar12 = (uint *)(uint)bVar15;
  }
  uVar8 = 10;
  if ((char)local_230[0x10] != '\0') {
    uVar8 = *(undefined1 *)((int)local_230 + 0x41);
  }
  uVar11 = local_230[4];
  uVar13 = CONCAT31((int3)((uint)iVar16 >> 8),
                    *(byte *)((int)local_230 + 0x43) == 2 | *(byte *)((int)local_230 + 0x43)) &
           0xffffff01;
  uVar5 = 1;
  if (uVar11 != 0xffffffff) {
    uVar5 = uVar11;
  }
  local_218 = (uint *)0xa00000;
  if (uVar11 != 0xffffffff) {
    local_218 = (uint *)local_230[5];
  }
  uStack_1e0 = 0;
  uStack_1dc = 4;
  uStack_1d4 = 0;
  uStack_1d0 = 4;
  uStack_1cc = 0;
  uStack_1b0 = 0;
  uStack_1ac = 0;
  uStack_1a8 = 4;
  uStack_1a4 = 0;
  uStack_1a0 = 0;
  uStack_19c = 0;
  uStack_198 = 1;
  uStack_194 = 0;
  uStack_1c8 = 0;
  uStack_1c4 = 4;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_1b8 = 4;
  uStack_1b4 = 0;
  local_200._0_4_ = uVar5;
  local_214 = (uint *)0x0;
  if (*(byte *)((int)local_230 + 0x4a) != 0xff) {
    local_214 = (uint *)(uint)*(byte *)((int)local_230 + 0x4a);
  }
  FUN_100c94b0(&uStack_1e0);
  auVar22 = _local_144;
  local_134 = 1;
  uStack_133 = 0x2020202;
  uStack_12f = 0x202;
  uStack_12d = 10;
  uStack_12c = 0xfa;
  uStack_128 = 0;
  uStack_126 = 0;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_10c = 4;
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_100 = 4;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 4;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_e6 = 10;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 4;
  uStack_d8 = 0;
  uStack_d4 = 10000;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_c8 = 4;
  uStack_c4 = 0;
  uStack_c0 = 0;
  puVar17 = &uStack_1e0;
  puVar18 = auStack_bc;
  for (iVar16 = 0x14; iVar16 != 0; iVar16 = iVar16 + -1) {
    *puVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar18 = puVar18 + 1;
  }
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 4;
  uStack_60 = 0;
  uStack_5c = 1000;
  uStack_58 = 0;
  local_144._4_4_ = local_218;
  local_144._0_4_ = local_200._0_4_;
  uStack_13c = 1;
  uStack_13b = uVar8;
  uStack_13a._0_1_ = (char)uVar13;
  uStack_13a._1_2_ = 2;
  uStack_136 = auVar22._14_2_;
  uStack_13a._3_1_ = (char)local_214;
  FUN_100c95e0(&local_188,(int *)local_144,(int *)param_3,param_4);
  uStack_20c = (uint *)CONCAT13((char)(uVar13 >> 8),(undefined3)uStack_20c);
  if (local_188 == 0xfffffffe) {
    local_218 = puStack_184;
    FUN_100cca10((int)local_144);
    if (puVar12 != (uint *)0x2) {
      LOCK();
      uVar11 = *unaff_ESI;
      *unaff_ESI = *unaff_ESI + 1;
      UNLOCK();
      if (*unaff_ESI == 0 || SCARRY4(uVar11,1) != (int)*unaff_ESI < 0) goto LAB_100c86fb;
    }
    uStack_1e0 = 0;
    uStack_1dc = 4;
    uStack_1d4 = 0;
    uStack_1d0 = 4;
    uStack_1cc = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    uStack_1a8 = 4;
    uStack_1a4 = 0;
    uStack_1a0 = 0;
    uStack_19c = 0;
    uStack_198 = 1;
    uStack_194 = 0;
    uStack_1c8 = 0;
    uStack_1c4 = 4;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    uStack_1b8 = 4;
    uStack_1b4 = 0;
    uVar5 = 1;
    if (*(byte *)((int)local_230 + 0x42) != 2) {
      uVar5 = (uint)*(byte *)((int)local_230 + 0x42);
    }
    FUN_100c94b0(&uStack_1e0);
    auVar22 = _local_144;
    puVar17 = local_218;
    uStack_12f = 0x202;
    uStack_133 = 0x2020202;
    uStack_e8 = 0;
    uStack_f0 = 0;
    local_144._0_4_ = 0xffffffff;
    auVar25 = _local_144;
    _uStack_13b = auVar22._9_7_;
    local_144 = auVar25._0_8_;
    uStack_13c = 0;
    auVar25 = _local_144;
    uStack_136 = auVar22._14_2_;
    _local_144 = auVar25._0_10_;
    uStack_13a = 0xff020202;
    local_134 = 1;
    uStack_12d = 10;
    uStack_12c = 0xfa;
    uStack_128 = 0;
    uStack_126 = 0;
    uStack_124 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_10c = 4;
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_100 = 4;
    uStack_fc = 0;
    uStack_f8 = 0;
    uStack_f4 = 4;
    uStack_e6 = 10;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_dc = 4;
    uStack_d8 = 0;
    uStack_d4 = 10000;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_c8 = 4;
    uStack_c4 = 0;
    uStack_c0 = 0;
    puVar18 = &uStack_1e0;
    puVar19 = auStack_bc;
    for (iVar16 = 0x14; iVar16 != 0; iVar16 = iVar16 + -1) {
      *puVar19 = *puVar18;
      puVar18 = puVar18 + 1;
      puVar19 = puVar19 + 1;
    }
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_64 = 4;
    uStack_60 = 0;
    uStack_5c = 1000;
    uStack_58 = 0;
    puStack_50 = local_208;
    puStack_4c = local_210;
    uVar8 = SUB41(puVar12,0);
    bVar15 = (byte)uVar5;
    LOCK();
    uVar11 = *local_218;
    *local_218 = *local_218 + 1;
    UNLOCK();
    puStack_54 = unaff_ESI;
    uStack_48 = uVar8;
    bStack_44 = bVar15;
    if (*local_218 == 0 || SCARRY4(uVar11,1) != (int)*local_218 < 0) goto LAB_100c86fb;
    if ((*(ushort *)((int)local_218 + 0x139) & 0x333) == 0) {
      if (puVar12 == (uint *)0x2) {
        FUN_100cca10((int)local_144);
      }
      else {
        LOCK();
        uVar11 = *unaff_ESI;
        *unaff_ESI = *unaff_ESI + 1;
        UNLOCK();
        if (*unaff_ESI == 0 || SCARRY4(uVar11,1) != (int)*unaff_ESI < 0) {
LAB_100c86fb:
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        LOCK();
        *unaff_ESI = *unaff_ESI - 1;
        UNLOCK();
        if (*unaff_ESI == 0) {
          FUN_100c9450(unaff_ESI,local_208);
        }
        FUN_100cca10((int)local_144);
        LOCK();
        uVar11 = *unaff_ESI;
        *unaff_ESI = *unaff_ESI + 1;
        UNLOCK();
        if (*unaff_ESI == 0 || SCARRY4(uVar11,1) != (int)*unaff_ESI < 0) goto LAB_100c86fb;
        LOCK();
        *unaff_ESI = *unaff_ESI - 1;
        UNLOCK();
        if (*unaff_ESI == 0) {
          FUN_100c9450(unaff_ESI,local_208);
        }
      }
      puVar7 = FUN_10107380(0,0x40);
      if (puVar7 == (undefined4 *)0x0) {
        FUN_1013679e(4,0x40);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      *puVar7 = 1;
      puVar7[1] = 1;
      puVar7[2] = unaff_ESI;
      puVar7[3] = local_208;
      puVar7[4] = local_210;
      puVar7[5] = puVar12;
      puVar7[6] = puVar17;
      puVar7[7] = unaff_ESI;
      puVar7[8] = local_208;
      puVar7[9] = local_210;
      *(undefined1 *)(puVar7 + 10) = uVar8;
      *(undefined2 *)((int)puVar7 + 0x29) = 0;
      *(undefined1 *)((int)puVar7 + 0x2b) = 0;
      puVar7[0xb] = uVar5;
      puVar7[0xc] = 0;
      puVar7[0xd] = local_230;
      puVar7[0xe] = puVar17;
      puVar7[0xf] = 0;
      local_1e4[1] = puVar7;
      local_1e4[2] = &PTR_FUN_10152c58;
      *local_1e4 = 0xffffffff;
      goto joined_r0x100c843f;
    }
    LOCK();
    *local_218 = *local_218 - 1;
    UNLOCK();
    if (*local_218 == 0) {
      FUN_100ccd70((int)local_218);
    }
    if (puVar12 != (uint *)0x2) {
      LOCK();
      *unaff_ESI = *unaff_ESI - 1;
      UNLOCK();
      if (*unaff_ESI == 0) {
        FUN_100c9450(unaff_ESI,local_208);
      }
    }
    FUN_100cca10((int)local_144);
    LOCK();
    *puVar17 = *puVar17 - 1;
    UNLOCK();
    uVar13 = 0x23;
    local_200 = ZEXT116(bVar15);
    if (*puVar17 == 0) {
      FUN_100ccd70((int)puVar17);
    }
    uVar11 = 0;
    uVar8 = 0;
    uStack_1ec = 0;
    uStack_1f0 = 0;
    local_214 = puVar12;
    puStack_1e8 = local_208;
  }
  else {
    puStack_1e8 = puStack_184;
    local_200._4_4_ = uStack_174;
    local_200._0_4_ = uStack_178;
    local_200._8_8_ = 0;
    uVar11 = uStack_170 & 0xffffff00;
    local_210 = puStack_180;
    uStack_30 = uStack_164;
    uStack_2c = uStack_160;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_38 = uStack_14c;
    uStack_40 = uStack_154;
    uStack_202 = uStack_16c;
    uStack_201 = uStack_16b;
    local_214 = puStack_17c;
    uStack_1ec = uStack_168;
    uStack_190 = uStack_15c;
    uStack_18c = uStack_158;
    uStack_1f0 = (uint)bStack_169;
    FUN_100cca10((int)local_144);
    uVar5 = uStack_170;
    uVar13 = local_188;
    uVar8 = uStack_16a;
  }
  if (puVar12 != (uint *)0x2) {
    LOCK();
    *unaff_ESI = *unaff_ESI - 1;
    UNLOCK();
    if (*unaff_ESI == 0) {
      FUN_100c9450(unaff_ESI,local_208);
    }
  }
  LOCK();
  *local_230 = *local_230 - 1;
  UNLOCK();
  if (*local_230 == 0) {
    FUN_100c8810(local_230);
  }
  *local_1e4 = 1;
  local_1e4[1] = local_218;
  local_1e4[2] = uVar13;
  local_1e4[3] = puStack_1e8;
  local_1e4[4] = local_210;
  local_1e4[5] = local_214;
  *(undefined8 *)(local_1e4 + 6) = local_200._0_8_;
  local_1e4[8] = uVar11 | uVar5 & 0xff;
  *(undefined1 *)(local_1e4 + 9) = uStack_202;
  *(undefined1 *)((int)local_1e4 + 0x25) = uStack_201;
  *(undefined1 *)((int)local_1e4 + 0x26) = uVar8;
  *(char *)((int)local_1e4 + 0x27) = (char)uStack_1f0;
  local_1e4[10] = uStack_1ec;
  *(ulonglong *)(local_1e4 + 0xb) = CONCAT44(uStack_2c,uStack_30);
  local_1e4[0xd] = uStack_190;
  local_1e4[0xe] = uStack_18c;
  local_1e4[0x11] = uStack_38;
  *(undefined8 *)(local_1e4 + 0xf) = uStack_40;
joined_r0x100c843f:
  if (uStack_20c._3_1_ != '\x02') {
                    /* WARNING: Read-only address (ram,0x1013ed30) is written */
                    /* WARNING: Read-only address (ram,0x1013ee10) is written */
    LOCK();
    *unaff_ESI = *unaff_ESI - 1;
    UNLOCK();
    if (*unaff_ESI == 0) {
      FUN_100c9450(unaff_ESI,local_208);
    }
  }
  return;
}
