// rea decompile_all
// name: FUN_100a1e70
// address: 0x100a1e70
// body: available
// range: 0x100a1e70-0x100a2415 inclusive
// range: 0x100a2420-0x100a2458 inclusive
// range: 0x100a2460-0x100a24c3 inclusive
// range: 0x100a24d0-0x100a2513 inclusive
// range: 0x100a2520-0x100a25b5 inclusive
// range: 0x100a25c0-0x100a2618 inclusive
// range: 0x100a2620-0x100a2643 inclusive
// range: 0x100a2650-0x100a26bb inclusive
// range: 0x100a26c0-0x100a28f5 inclusive
// range: 0x100a2900-0x100a2a53 inclusive
// range: 0x100a2a60-0x100a2b32 inclusive
// range: 0x100a2b40-0x100a3088 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __fastcall
FUN_100a1e70(byte *param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
            uint *param_7,uint param_8,uint *param_9,char param_10,char param_11)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  uint uVar11;
  int iVar12;
  undefined2 *_Dst;
  sbyte sVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint *puVar29;
  int iVar30;
  uint uVar31;
  byte *pbVar32;
  uint uVar33;
  uint *puVar34;
  uint uVar35;
  uint uVar36;
  bool bVar37;
  bool bVar38;
  int local_5a8;
  uint local_5a0;
  uint local_594;
  uint local_580;
  uint local_574;
  uint local_570;
  uint local_568;
  uint local_560 [17];
  uint local_51c;
  uint local_518;
  uint local_514;
  uint local_510 [16];
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  uint local_490 [288];

  local_560[0xc] = 0;
  local_560[0xd] = 0;
  local_560[0xe] = 0;
  local_560[0xf] = 0;
  local_560[8] = 0;
  local_560[9] = 0;
  local_560[10] = 0;
  local_560[0xb] = 0;
  local_560[4] = 0;
  local_560[5] = 0;
  local_560[6] = 0;
  local_560[7] = 0;
  local_560[0] = 0;
  local_560[1] = 0;
  local_560[2] = 0;
  local_560[3] = 0;
  if (param_2 == 0) {
LAB_100a1fec:
    if (local_560[0xd] != 0) {
      bVar38 = true;
      bVar4 = true;
      puVar34 = local_560 + 0xd;
      bVar2 = 0;
      bVar24 = false;
      bVar23 = false;
      bVar22 = false;
      bVar21 = false;
      bVar7 = false;
      bVar3 = false;
      bVar20 = false;
      bVar19 = false;
      bVar6 = false;
      bVar18 = false;
      bVar37 = false;
      bVar5 = false;
      local_568 = 0xd;
      local_574 = local_560[0];
      goto joined_r0x100a2073;
    }
    if (local_560[0xc] == 0) {
      if (local_560[0xb] == 0) {
        if (local_560[10] == 0) {
          if (local_560[9] == 0) {
            if (local_560[8] == 0) {
              if (local_560[7] == 0) {
                if (local_560[6] == 0) {
                  if (local_560[5] == 0) {
                    if (local_560[4] == 0) {
                      if (local_560[3] == 0) {
                        if (local_560[2] == 0) {
                          bVar2 = 1;
                          puVar29 = local_560 + 1;
                          local_568 = 1;
                          bVar38 = false;
                          goto LAB_100a1ee4;
                        }
                        bVar38 = true;
                        bVar24 = true;
                        puVar29 = local_560 + 2;
                        local_568 = 2;
                        bVar2 = 0;
                        goto LAB_100a1eec;
                      }
                      bVar38 = true;
                      bVar23 = true;
                      puVar29 = local_560 + 3;
                      local_568 = 3;
                      bVar2 = 0;
                      bVar24 = false;
                      goto LAB_100a1ef4;
                    }
                    bVar38 = true;
                    puVar29 = local_560 + 4;
                    local_568 = 4;
                    bVar2 = 0;
                    bVar24 = false;
                    bVar23 = false;
                    bVar37 = true;
                    goto LAB_100a1ef6;
                  }
                  bVar38 = true;
                  bVar22 = true;
                  puVar29 = local_560 + 5;
                  local_568 = 5;
                  bVar2 = 0;
                  bVar24 = false;
                  bVar23 = false;
                  bVar37 = false;
                  goto LAB_100a1efe;
                }
                bVar38 = true;
                bVar21 = true;
                puVar29 = local_560 + 6;
                local_568 = 6;
                bVar2 = 0;
                bVar24 = false;
                bVar23 = false;
                bVar22 = false;
                bVar37 = false;
                goto LAB_100a1f06;
              }
              bVar38 = true;
              puVar29 = local_560 + 7;
              local_568 = 7;
              bVar24 = false;
              bVar23 = false;
              bVar22 = false;
              bVar21 = false;
              bVar2 = 0;
              bVar7 = true;
              bVar37 = false;
              goto LAB_100a1f0e;
            }
            bVar38 = true;
            puVar29 = local_560 + 8;
            local_568 = 8;
            bVar2 = 0;
            bVar24 = false;
            bVar23 = false;
            bVar22 = false;
            bVar21 = false;
            bVar7 = false;
            bVar3 = true;
            bVar37 = false;
            goto LAB_100a1f16;
          }
          bVar38 = true;
          bVar20 = true;
          puVar29 = local_560 + 9;
          local_568 = 9;
          bVar2 = 0;
          bVar24 = false;
          bVar23 = false;
          bVar22 = false;
          bVar7 = false;
          bVar3 = false;
          bVar21 = false;
          bVar37 = false;
          goto LAB_100a1f1e;
        }
        bVar38 = true;
        bVar19 = true;
        puVar29 = local_560 + 10;
        local_568 = 10;
        bVar2 = 0;
        bVar24 = false;
        bVar23 = false;
        bVar22 = false;
        bVar21 = false;
        bVar7 = false;
        bVar3 = false;
        bVar20 = false;
        bVar37 = false;
        goto LAB_100a1f26;
      }
      bVar38 = true;
      bVar6 = true;
      puVar29 = local_560 + 0xb;
      bVar2 = 0;
      bVar24 = false;
      bVar23 = false;
      bVar22 = false;
      bVar21 = false;
      bVar7 = false;
      bVar3 = false;
      bVar20 = false;
      bVar19 = false;
      bVar37 = false;
      local_568 = 0xb;
      goto LAB_100a1f2e;
    }
    bVar38 = true;
    bVar18 = true;
    puVar29 = local_560 + 0xc;
    local_568 = 0xc;
    bVar2 = 0;
    bVar24 = false;
    bVar23 = false;
    bVar22 = false;
    bVar7 = false;
    bVar3 = false;
    bVar20 = false;
    bVar19 = false;
    bVar6 = false;
    bVar21 = false;
    bVar37 = false;
LAB_100a1f36:
    bVar5 = false;
    puVar34 = puVar29;
  }
  else {
    puVar29 = local_560 + 0xf;
    puVar34 = local_560 + 0xe;
    uVar25 = param_2;
    pbVar32 = param_1;
    do {
      uVar14 = (uint)*pbVar32;
      if (0xf < uVar14) {
        FUN_10136b52(uVar14,0x10,&PTR_s_C__Users_runneradmin__cargo_regi_1014f334);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      local_560[uVar14] = local_560[uVar14] + 1;
      pbVar32 = pbVar32 + 1;
      uVar25 = uVar25 - 1;
    } while (uVar25 != 0);
    if (local_560[0xf] != 0) {
      local_568 = 0xf;
      bVar38 = true;
      bVar2 = 0;
LAB_100a1ee4:
      bVar24 = false;
LAB_100a1eec:
      bVar23 = false;
LAB_100a1ef4:
      bVar37 = false;
LAB_100a1ef6:
      bVar22 = false;
LAB_100a1efe:
      bVar21 = false;
LAB_100a1f06:
      bVar7 = false;
LAB_100a1f0e:
      bVar3 = false;
LAB_100a1f16:
      bVar20 = false;
LAB_100a1f1e:
      bVar19 = false;
LAB_100a1f26:
      bVar6 = false;
LAB_100a1f2e:
      bVar18 = false;
      goto LAB_100a1f36;
    }
    if (local_560[0xe] == 0) goto LAB_100a1fec;
    bVar37 = false;
    bVar2 = 0;
    bVar24 = false;
    bVar23 = false;
    bVar22 = false;
    bVar21 = false;
    bVar7 = false;
    bVar3 = false;
    bVar20 = false;
    bVar19 = false;
    bVar6 = false;
    bVar18 = false;
    bVar38 = true;
    bVar5 = true;
    local_568 = 0xe;
  }
  bVar4 = false;
  local_574 = local_560[0];
joined_r0x100a2073:
  local_560[0] = local_574;
  if ((param_10 != '\0') && ((bool)(bVar2 & local_560[1] == 1))) {
    if (param_2 != 0) {
      uVar25 = 0;
      do {
        if (param_1[uVar25] == 1) {
          if (param_6 <= uVar25) {
            FUN_10136b52(uVar25,param_6,&PTR_s_C__Users_runneradmin__cargo_regi_1014f354);
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          *(undefined2 *)(param_5 + uVar25 * 2) = 0;
          if (uVar25 < param_4) {
            uVar25 = *(uint *)(param_3 + uVar25 * 4);
          }
          else {
            uVar25 = uVar25 << 0x10;
          }
          do {
            *param_7 = uVar25 | 1;
            if (param_8 == 1) {
              FUN_10136b52(1,1,&PTR_s_C__Users_runneradmin__cargo_regi_1014f364);
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            param_7[1] = 0;
            uVar14 = 2;
            if (param_8 < 2) {
              uVar14 = param_8;
            }
            param_8 = param_8 - uVar14;
            param_7 = param_7 + uVar14;
          } while (param_8 != 0);
          return (bool)1;
        }
        uVar25 = uVar25 + 1;
      } while (param_2 != uVar25);
    }
    FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_1014f344);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  iVar26 = 0;
  local_510[0] = 0;
  local_510[2] = 0;
  local_510[3] = 0;
  local_510[0xc] = 0;
  local_510[0xd] = 0;
  local_510[0xe] = 0;
  local_510[0xf] = 0;
  local_510[8] = 0;
  local_510[9] = 0;
  local_510[10] = 0;
  local_510[0xb] = 0;
  local_510[4] = 0;
  local_510[5] = 0;
  local_510[6] = 0;
  local_510[7] = 0;
  if (bVar38) {
    local_510[2] = local_574 + local_560[1];
    iVar26 = local_560[1];
    if (!bVar24) {
      local_510[3] = local_510[2] + local_560[2];
      iVar26 = local_560[2] + local_560[1] * 2;
      if (!bVar23) {
        local_510[4] = local_510[3] + local_560[3];
        iVar26 = local_560[3] + iVar26 * 2;
        if (!bVar37) {
          local_510[5] = local_510[4] + local_560[4];
          iVar26 = local_560[4] + iVar26 * 2;
          if (!bVar22) {
            local_510[6] = local_510[5] + local_560[5];
            iVar26 = local_560[5] + iVar26 * 2;
            if (!bVar21) {
              local_510[7] = local_510[6] + local_560[6];
              iVar26 = local_560[6] + iVar26 * 2;
              if (!bVar7) {
                local_510[8] = local_510[7] + local_560[7];
                iVar26 = local_560[7] + iVar26 * 2;
                if (!bVar3) {
                  local_510[9] = local_510[8] + local_560[8];
                  iVar26 = local_560[8] + iVar26 * 2;
                  if (!bVar20) {
                    local_510[10] = local_510[9] + local_560[9];
                    iVar26 = local_560[9] + iVar26 * 2;
                    if (!bVar19) {
                      local_510[0xb] = local_510[10] + local_560[10];
                      iVar26 = local_560[10] + iVar26 * 2;
                      if (!bVar6) {
                        local_510[0xc] = local_510[0xb] + local_560[0xb];
                        iVar26 = local_560[0xb] + iVar26 * 2;
                        if (!bVar18) {
                          local_510[0xd] = local_510[0xc] + local_560[0xc];
                          iVar26 = local_560[0xc] + iVar26 * 2;
                          if (!bVar4) {
                            local_510[0xe] = local_510[0xd] + local_560[0xd];
                            iVar26 = local_560[0xd] + iVar26 * 2;
                            if (!bVar5) {
                              local_510[0xf] = local_510[0xe] + local_560[0xe];
                              iVar26 = local_560[0xe] + iVar26 * 2;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    iVar26 = iVar26 * 2;
  }
  bVar38 = iVar26 + *puVar34 == 1 << (sbyte)local_568;
  if (bVar38) {
    local_4a0 = CONCAT44(local_510[0xd],local_510[0xc]);
    local_4a8 = CONCAT44(local_510[0xb],local_510[10]);
    local_498 = CONCAT44(local_510[0xf],local_510[0xe]);
    local_4b0 = CONCAT44(local_510[9],local_510[8]);
    local_4b8 = CONCAT44(local_510[7],local_510[6]);
    local_4c0 = CONCAT44(local_510[5],local_510[4]);
    local_4d0 = (ulonglong)local_574 << 0x20;
    local_4c8 = CONCAT44(local_510[3],local_510[2]);
    local_510[1] = local_574;
    memset(local_490,0,0x480);
    if (param_2 != 0) {
      uVar25 = 0;
      do {
        uVar14 = (uint)param_1[uVar25];
        if (0xf < uVar14) {
          FUN_10136b52(uVar14,0x10,&PTR_s_C__Users_runneradmin__cargo_regi_1014f484);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar33 = *(uint *)((int)&local_4d0 + uVar14 * 4);
        if (0x11f < uVar33) {
          FUN_10136b52(uVar33,0x120,&PTR_s_C__Users_runneradmin__cargo_regi_1014f494);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        local_490[uVar33] = uVar25;
        uVar25 = uVar25 + 1;
        *(uint *)((int)&local_4d0 + uVar14 * 4) = uVar33 + 1;
      } while (param_2 != uVar25);
    }
    uVar25 = 0x1f;
    if (param_8 != 0) {
      for (; param_8 >> uVar25 == 0; uVar25 = uVar25 - 1) {
      }
    }
    local_570 = 0;
    uVar33 = ~(-1 << ((byte)uVar25 & 0x1f));
    local_51c = uVar25 ^ 0x1f;
    uVar14 = 1;
    do {
      uVar15 = uVar14 + (uVar14 < uVar25);
      local_518 = uVar14 & 0x1f;
      sVar13 = (sbyte)(uVar14 & 0x1f);
      local_560[0x10] = 1 << sVar13;
      if (0xf < uVar14) {
        FUN_10136b52(uVar14,0x10,&PTR_s_C__Users_runneradmin__cargo_regi_1014f3c4);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar27 = local_560[uVar14];
      if (uVar27 != 0) {
        uVar28 = 0x120;
        if (local_574 < 0x120) {
          uVar28 = local_574;
        }
        iVar26 = uVar28 - 0x120;
        uVar28 = local_570;
        do {
          if (iVar26 == 0) {
            FUN_10136b52(local_574,0x120,&PTR_s_C__Users_runneradmin__cargo_regi_1014f454);
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          uVar35 = local_490[local_574];
          if (uVar35 < param_4) {
            uVar16 = *(uint *)(param_3 + uVar35 * 4);
          }
          else {
            uVar16 = uVar35 << 0x10;
          }
          uVar11 = uVar28 & 0xffff;
          if (param_8 <= uVar11) {
            FUN_10136b52(uVar11,param_8,&PTR_s_C__Users_runneradmin__cargo_regi_1014f464);
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          param_7[uVar11] = uVar16 | uVar14;
          if (param_6 <= uVar35) {
            FUN_10136b52(uVar35,param_6,&PTR_s_C__Users_runneradmin__cargo_regi_1014f474);
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          uVar9 = (ushort)uVar28;
          *(ushort *)(param_5 + uVar35 * 2) = uVar9;
          uVar8 = (ushort)(local_560[0x10] - 1);
          local_570 = local_560[0x10] - 1;
          if (uVar9 != uVar8) {
            uVar9 = uVar9 ^ uVar8;
            uVar8 = 0xf;
            if (uVar9 != 0) {
              for (; uVar9 >> uVar8 == 0; uVar8 = uVar8 - 1) {
              }
            }
            local_570 = (1 << ((byte)uVar8 & 0x1f)) - 1U & uVar28 | 1 << (uVar8 & 0x1f);
          }
          iVar26 = iVar26 + 1;
          local_574 = local_574 + 1;
          uVar27 = uVar27 - 1;
          uVar28 = local_570;
        } while (uVar27 != 0);
      }
      if ((param_11 != '\0') && (1 < uVar14 - 1)) {
        uVar27 = 1;
        do {
          if (uVar27 == 0x10) {
            FUN_10136b52(0x10,0x10,&PTR_s_C__Users_runneradmin__cargo_regi_1014f3e4);
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          uVar28 = local_510[uVar27];
          uVar35 = *(uint *)((int)&local_4d0 + uVar27 * 4);
          if (uVar28 < uVar35) {
            uVar16 = uVar14 - uVar27;
            if (0xf < uVar16) {
              FUN_10136b52(uVar16,0x10,&PTR_s_C__Users_runneradmin__cargo_regi_1014f3f4);
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            uVar11 = local_510[uVar16];
            uVar16 = *(uint *)((int)&local_4d0 + uVar16 * 4);
            iVar26 = uVar16 - uVar11;
            if (uVar11 <= uVar16 && iVar26 != 0) {
              local_514 = 0x120;
              if (0x120 < uVar11) {
                local_514 = uVar11;
              }
              uVar16 = 0x120;
              if (0x120 < uVar28) {
                uVar16 = uVar28;
              }
              do {
                if (uVar28 == uVar16) {
                  FUN_10136b52(uVar16,0x120,&PTR_s_C__Users_runneradmin__cargo_regi_1014f404);
                    /* WARNING: Does not return */
                  pcVar1 = (code *)invalidInstructionException();
                  (*pcVar1)();
                }
                uVar31 = local_490[uVar28];
                iVar12 = iVar26;
                iVar30 = local_514 - uVar11;
                puVar34 = local_490 + uVar11;
                if (uVar31 < param_6) {
                  iVar12 = local_514 - uVar11;
                  iVar30 = iVar26;
                  do {
                    bVar37 = iVar12 == 0;
                    iVar12 = iVar12 + -1;
                    if (bVar37) {
LAB_100a2c57:
                      FUN_10136b52(local_514,0x120,&PTR_s_C__Users_runneradmin__cargo_regi_1014f414)
                      ;
                    /* WARNING: Does not return */
                      pcVar1 = (code *)invalidInstructionException();
                      (*pcVar1)();
                    }
                    uVar36 = *puVar34;
                    if ((uVar36 | uVar31) < 0x100) {
                      if (param_6 <= uVar36) {
                        FUN_10136b52(uVar36,param_6,&PTR_s_C__Users_runneradmin__cargo_regi_1014f434
                                    );
                    /* WARNING: Does not return */
                        pcVar1 = (code *)invalidInstructionException();
                        (*pcVar1)();
                      }
                      uVar17 = (uint)(ushort)(*(short *)(param_5 + uVar36 * 2) <<
                                              ((byte)uVar27 & 0x1f) |
                                             *(ushort *)(param_5 + uVar31 * 2));
                      if (param_8 <= uVar17) {
                        FUN_10136b52(uVar17,param_8,&PTR_s_C__Users_runneradmin__cargo_regi_1014f444
                                    );
                    /* WARNING: Does not return */
                        pcVar1 = (code *)invalidInstructionException();
                        (*pcVar1)();
                      }
                      param_7[uVar17] = uVar36 << 0x18 | uVar31 << 0x10 | uVar14 | 0x8200;
                    }
                    puVar34 = puVar34 + 1;
                    iVar30 = iVar30 + -1;
                  } while (iVar30 != 0);
                }
                else {
                  do {
                    bVar37 = iVar30 == 0;
                    iVar30 = iVar30 + -1;
                    if (bVar37) goto LAB_100a2c57;
                    if ((*puVar34 | uVar31) < 0x100) {
                      FUN_10136b52(uVar31,param_6,&PTR_s_C__Users_runneradmin__cargo_regi_1014f424);
                    /* WARNING: Does not return */
                      pcVar1 = (code *)invalidInstructionException();
                      (*pcVar1)();
                    }
                    puVar34 = puVar34 + 1;
                    iVar12 = iVar12 + -1;
                  } while (iVar12 != 0);
                }
                uVar28 = uVar28 + 1;
              } while (uVar28 != uVar35);
            }
          }
          uVar27 = uVar27 + 1;
        } while (uVar27 != uVar14 - 1);
      }
      if (uVar14 < uVar25) {
        if (param_8 < local_560[0x10]) {
          FUN_10136a50(0,local_560[0x10],param_8,&PTR_s_C__Users_runneradmin__rustup_too_1015de64);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (param_8 - local_560[0x10] < local_560[0x10]) {
          FUN_101369c0("dest is out of boundsC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\inflate\\writer.rs"
                       ,0x2b,&PTR_s_C__Users_runneradmin__cargo_regi_1014f3d4);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        memmove(param_7 + local_560[0x10],param_7,4 << sVar13);
      }
    } while ((uVar14 < uVar25) && (uVar14 = uVar15, uVar15 <= uVar25));
    param_9[2] = 0;
    if ((uVar25 < local_568) && (0x20 - local_51c <= local_568)) {
      uVar27 = 0xffff;
      uVar14 = 0;
      local_5a0 = 0;
      local_594 = 0;
      uVar15 = 0x20 - local_51c;
      do {
        uVar8 = (ushort)uVar27;
        uVar35 = uVar15 + (uVar15 < local_568);
        uVar28 = uVar15 - uVar25 & 0x1f;
        sVar13 = (sbyte)uVar28;
        uVar16 = 1 << sVar13;
        local_580 = local_560[uVar15];
        if (local_580 != 0) {
          uVar11 = 0x120;
          if (local_574 < 0x120) {
            uVar11 = local_574;
          }
          uVar31 = ~(-1 << ((byte)uVar15 & 0x1f));
          local_5a8 = uVar11 - 0x120;
          uVar11 = local_570;
          do {
            uVar36 = uVar11 & uVar33;
            if ((short)uVar36 != (short)uVar27) {
              uVar14 = uVar36 & 0xffff;
              if (param_8 <= uVar14) {
                FUN_10136b52(uVar14,param_8,&PTR_s_C__Users_runneradmin__cargo_regi_1014f384);
                    /* WARNING: Does not return */
                pcVar1 = (code *)invalidInstructionException();
                (*pcVar1)();
              }
              param_7[uVar14] = local_5a0 << 0x10 | uVar16 - 1 | 0x6000;
              uVar14 = local_5a0;
              if (*param_9 - local_5a0 < uVar16) {
                FUN_101359e0(param_9,local_5a0,uVar16,(LPVOID)0x2,2);
                uVar14 = param_9[2];
              }
              uVar27 = param_9[1];
              _Dst = (undefined2 *)(uVar27 + uVar14 * 2);
              if (uVar28 != 0) {
                memset(_Dst,0,(2 << sVar13) - 2);
                iVar26 = uVar14 + uVar16;
                uVar14 = (uVar14 - 1) + uVar16;
                _Dst = (undefined2 *)((uVar27 - 2) + iVar26 * 2);
              }
              uVar14 = uVar14 + 1;
              *_Dst = 0;
              param_9[2] = uVar14;
              local_594 = local_5a0;
              uVar27 = uVar36;
            }
            uVar8 = (ushort)uVar27;
            if (local_5a8 == 0) {
              FUN_10136b52(local_574,0x120,&PTR_s_C__Users_runneradmin__cargo_regi_1014f394);
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            uVar36 = local_490[local_574];
            if (param_6 <= uVar36) {
              FUN_10136b52(uVar36,param_6,&PTR_s_C__Users_runneradmin__cargo_regi_1014f3a4);
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            uVar9 = (ushort)uVar11;
            *(ushort *)(param_5 + uVar36 * 2) = uVar9;
            uVar17 = ((uVar11 & 0xffff) >> ((byte)uVar25 & 0x1f)) + local_594;
            if (uVar14 <= uVar17) {
              FUN_10136b52(uVar17,uVar14,&PTR_s_C__Users_runneradmin__cargo_regi_1014f3b4);
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            *(short *)(param_9[1] + uVar17 * 2) = (short)(uVar36 << 4) + (short)uVar15;
            uVar10 = (ushort)uVar31;
            local_570 = uVar31;
            if (uVar9 != uVar10) {
              uVar9 = uVar9 ^ uVar10;
              uVar10 = 0xf;
              if (uVar9 != 0) {
                for (; uVar9 >> uVar10 == 0; uVar10 = uVar10 - 1) {
                }
              }
              local_570 = (1 << ((byte)uVar10 & 0x1f)) - 1U & uVar11 | 1 << (uVar10 & 0x1f);
            }
            local_5a8 = local_5a8 + 1;
            local_574 = local_574 + 1;
            local_580 = local_580 - 1;
            uVar11 = local_570;
            local_5a0 = uVar14;
          } while (local_580 != 0);
        }
        if ((uVar15 < local_568) && ((ushort)((ushort)local_570 & (ushort)uVar33) == uVar8)) {
          if (uVar14 < local_594) {
            FUN_10136a50(local_594,uVar14,uVar14,&PTR_s_C__Users_runneradmin__rustup_too_1015de74);
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          uVar27 = uVar14;
          if (*param_9 - uVar14 < uVar14 - local_594) {
            FUN_101359e0(param_9,uVar14,uVar14 - local_594,(LPVOID)0x2,2);
            uVar27 = param_9[2];
          }
          iVar26 = uVar14 - local_594;
          if (uVar14 < local_594) {
            iVar26 = 0;
          }
          memcpy((void *)(param_9[1] + uVar27 * 2),(void *)(param_9[1] + local_594 * 2),iVar26 * 2);
          uVar28 = (uint)uVar8;
          uVar14 = iVar26 + uVar27;
          param_9[2] = uVar14;
          if (param_8 <= uVar28) {
            FUN_10136b52(uVar28,param_8,&PTR_s_C__Users_runneradmin__cargo_regi_1014f374);
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          param_7[uVar28] = local_594 << 0x10 | ~local_594 + uVar14 | 0x6000;
          local_5a0 = uVar14;
        }
      } while ((uVar15 < local_568) && (uVar27 = (uint)uVar8, uVar15 = uVar35, uVar35 <= local_568))
      ;
    }
  }
  return bVar38;
}
