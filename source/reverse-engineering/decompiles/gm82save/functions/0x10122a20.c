// rea decompile_all
// name: FUN_10122a20
// address: 0x10122a20
// body: available
// range: 0x10122a20-0x10122a6d inclusive
// range: 0x10122a70-0x10123259 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_10122a20(undefined4 *param_1,char param_2,ushort *param_3,uint param_4,undefined4 *param_5,
            uint param_6,uint param_7,int param_8)

{
  ushort uVar1;
  code *pcVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ushort *puVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  ushort local_a4;
  uint local_a0;
  uint local_9c;
  int local_90;
  uint local_8c;
  uint local_84;
  undefined *local_70;
  undefined *local_6c;
  undefined4 local_64;
  undefined1 *local_60;
  uint *local_5c;
  undefined1 *local_58;
  short local_54;
  short local_52;
  short local_50;
  short local_4e;
  short local_4c;
  short local_4a;
  short local_48;
  short local_46;
  ushort local_44 [2];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint local_34;
  uint uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  uint local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;

  local_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  local_44[0] = 0;
  local_44[1] = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  if (param_4 != 0) {
    uVar13 = 0xf;
    uVar16 = 0;
    iVar15 = param_4 * 2;
    puVar14 = param_3;
    iVar17 = iVar15;
    do {
      uVar4 = (uint)*puVar14;
      if (uVar4 != 0) {
        if (0xf < *puVar14) {
          FUN_10136b52(uVar4,0x10,&PTR_s_C__Users_runneradmin__cargo_regi_1015f488);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        local_44[uVar4] = local_44[uVar4] + 1;
        if (uVar16 <= uVar4) {
          uVar16 = uVar4;
        }
        if (uVar4 <= uVar13) {
          uVar13 = uVar4;
        }
      }
      puVar14 = puVar14 + 1;
      iVar17 = iVar17 + -2;
    } while (iVar17 != 0);
    if (uVar16 != 0) {
      if (uVar16 < uVar13) {
        local_64 = &local_18;
        local_5c = &local_14;
        local_60 = &LAB_100908e0;
        local_58 = &LAB_100908e0;
        local_18 = uVar13;
        local_14 = uVar16;
        FUN_101369c0(&DAT_1015fc03,&local_64,&PTR_s_C__Users_runneradmin__cargo_regi_1015f498);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar4 = uVar16;
      if (param_7 < uVar16) {
        uVar4 = param_7;
      }
      if (param_7 < uVar13) {
        uVar4 = uVar13;
      }
      if ((ushort)uStack_40 < 5) {
        iVar17 = (4 - (uStack_40 & 0xffff)) * 2;
        if (uStack_40._2_2_ <= (ushort)iVar17) {
          iVar17 = (iVar17 - (uint)uStack_40._2_2_) * 2;
          if ((ushort)uStack_3c <= (ushort)iVar17) {
            iVar17 = (iVar17 - (uStack_3c & 0xffff)) * 2;
            if (uStack_3c._2_2_ <= (ushort)iVar17) {
              iVar17 = (iVar17 - (uint)uStack_3c._2_2_) * 2;
              if ((ushort)uStack_38 <= (ushort)iVar17) {
                iVar17 = (iVar17 - (uStack_38 & 0xffff)) * 2;
                if (uStack_38._2_2_ <= (ushort)iVar17) {
                  iVar17 = (iVar17 - (uint)uStack_38._2_2_) * 2;
                  if (((((ushort)local_34 <= (ushort)iVar17) &&
                       (uVar5 = (iVar17 - (local_34 & 0xffff) & 0xffff) * 2,
                       local_34 >> 0x10 <= uVar5)) &&
                      (uVar5 = (uVar5 - (local_34 >> 0x10)) * 2, (uStack_30 & 0xffff) <= uVar5)) &&
                     ((uVar5 = (uVar5 - (uStack_30 & 0xffff)) * 2, uStack_30 >> 0x10 <= uVar5 &&
                      (uVar5 = (uVar5 - (uStack_30 >> 0x10)) * 2, (uStack_2c & 0xffff) <= uVar5))))
                  {
                    uVar5 = (uVar5 - (uStack_2c & 0xffff)) * 2;
                    if ((uStack_2c._2_2_ <= uVar5) &&
                       ((uVar5 = (uVar5 - uStack_2c._2_2_) * 2, (uStack_28 & 0xffff) <= uVar5 &&
                        (uVar5 = (uVar5 - (uStack_28 & 0xffff)) * 2, uStack_28 >> 0x10 <= uVar5))))
                    {
                      if ((uVar5 != uStack_28 >> 0x10) && ((param_2 == '\0' || (uVar16 != 1)))) {
                        *param_1 = 0xffffffff;
                        return;
                      }
                      local_64 = (uint *)0x0;
                      iVar17 = 0;
                      local_60 = (undefined1 *)(uStack_40 << 0x10);
                      sVar3 = (ushort)uStack_3c + uStack_40._2_2_ + (ushort)uStack_40;
                      local_5c = (uint *)CONCAT22(sVar3,uStack_40._2_2_ + (ushort)uStack_40);
                      sVar3 = uStack_3c._2_2_ + sVar3;
                      local_54 = (ushort)uStack_38 + sVar3;
                      local_58 = (undefined1 *)CONCAT22(local_54,sVar3);
                      local_54 = uStack_38._2_2_ + local_54;
                      local_52 = (ushort)local_34 + local_54;
                      local_50 = local_52 + (short)(local_34 >> 0x10);
                      local_4e = local_50 + (short)uStack_30;
                      local_4c = local_4e + (short)(uStack_30 >> 0x10);
                      local_4a = local_4c + (short)uStack_2c;
                      local_48 = local_4a + uStack_2c._2_2_;
                      local_46 = local_48 + (short)uStack_28;
                      do {
                        uVar5 = (uint)param_3[iVar17];
                        if (uVar5 != 0) {
                          if (0xf < param_3[iVar17]) {
                            FUN_10136b52(uVar5,0x10,&PTR_s_C__Users_runneradmin__cargo_regi_1015f4a8
                                        );
                    /* WARNING: Does not return */
                            pcVar2 = (code *)invalidInstructionException();
                            (*pcVar2)();
                          }
                          uVar1 = *(ushort *)((int)&local_64 + uVar5 * 2);
                          uVar8 = (uint)uVar1;
                          *(ushort *)((int)&local_64 + uVar5 * 2) = uVar1 + 1;
                          if (0x11f < uVar8) {
                            FUN_10136b52(uVar8,0x120,
                                         &PTR_s_C__Users_runneradmin__cargo_regi_1015f4b8);
                    /* WARNING: Does not return */
                            pcVar2 = (code *)invalidInstructionException();
                            (*pcVar2)();
                          }
                          *(short *)(param_8 + uVar8 * 2) = (short)iVar17;
                        }
                        iVar17 = iVar17 + 1;
                        iVar15 = iVar15 + -2;
                      } while (iVar15 != 0);
                      if (param_2 != '\0') {
                        if (param_2 == '\x01') {
                          if (uVar4 < 0xb) {
                            local_90 = 0x101;
                            local_a0 = 0x1f;
                            local_6c = &DAT_1015f4c8;
                            local_70 = &DAT_1015f506;
                            goto LAB_10122e31;
                          }
                        }
                        else if (uVar4 < 10) {
                          local_a0 = 0x20;
                          local_6c = &DAT_1015f526;
                          local_70 = &DAT_1015f566;
                          local_90 = 0;
                          goto LAB_10122e31;
                        }
LAB_10122e02:
                        *param_1 = 1;
                        return;
                      }
                      local_90 = 0x14;
                      local_6c = (undefined *)0x2;
                      local_70 = (undefined *)0x1;
                      local_a0 = 0;
LAB_10122e31:
                      uVar5 = 0;
                      local_84 = 0xffffffff;
                      local_9c = 0;
                      local_b0 = 0;
                      local_8c = 0;
                      local_a8 = 1 << ((byte)uVar4 & 0x1f);
                      local_24 = local_a8 - 1;
                      local_1c = local_90;
                      local_20 = local_90 + -1;
                      iVar15 = local_20;
                      iVar17 = 0;
                      local_ac = uVar4;
                      do {
                        while( true ) {
                          local_a4 = *(ushort *)(param_8 + iVar17 * 2);
                          local_20 = iVar15;
                          if (local_a4 < (ushort)local_90) {
                            uVar10 = 0x60;
                            local_20._0_2_ = (ushort)(local_90 + -1);
                            if (local_a4 < (ushort)local_20) {
                              uVar10 = 0;
                            }
                            else {
                              local_a4 = 0;
                            }
                          }
                          else {
                            uVar8 = (uint)local_a4 - local_90 & 0xffff;
                            if (local_a0 <= uVar8) {
                              FUN_10136b52(uVar8,local_a0,
                                           &PTR_s_C__Users_runneradmin__cargo_regi_1015f598);
                    /* WARNING: Does not return */
                              pcVar2 = (code *)invalidInstructionException();
                              (*pcVar2)();
                            }
                            uVar10 = local_70[uVar8];
                            local_a4 = *(ushort *)(local_6c + uVar8 * 2);
                          }
                          bVar7 = (char)uVar13 - (byte)local_9c;
                          iVar6 = -1 << (bVar7 & 0x1f);
                          iVar11 = 1 << ((byte)local_ac & 0x1f);
                          uVar5 = (uVar5 >> ((byte)local_9c & 0x1f)) + local_b0 + iVar11;
                          iVar12 = iVar11;
                          do {
                            uVar5 = uVar5 + iVar6;
                            if (param_6 <= uVar5) {
                              FUN_10136b52(uVar5,param_6,
                                           &PTR_s_C__Users_runneradmin__cargo_regi_1015f5a8);
                    /* WARNING: Does not return */
                              pcVar2 = (code *)invalidInstructionException();
                              (*pcVar2)();
                            }
                            *(ushort *)(param_5 + uVar5) = local_a4;
                            iVar12 = iVar12 + iVar6;
                            *(undefined1 *)((int)param_5 + uVar5 * 4 + 2) = uVar10;
                            *(byte *)((int)param_5 + uVar5 * 4 + 3) = bVar7;
                          } while (iVar12 != 0);
                          if (0xf < uVar13) {
                            FUN_10136b52(uVar13,0x10,
                                         &PTR_s_C__Users_runneradmin__cargo_regi_1015f5b8);
                    /* WARNING: Does not return */
                            pcVar2 = (code *)invalidInstructionException();
                            (*pcVar2)();
                          }
                          local_8c = local_8c + (0x80000000U >> ((char)uVar13 - 1U & 0x1f));
                          uVar5 = local_8c >> 0x18 | (local_8c & 0xff0000) >> 8 |
                                  (local_8c & 0xff00) << 8 | local_8c * 0x1000000;
                          uVar5 = uVar5 >> 4 & 0xf0f0f0f | (uVar5 & 0xf0f0f0f) << 4;
                          uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333) * 4;
                          puVar14 = local_44 + uVar13;
                          *puVar14 = *puVar14 - 1;
                          uVar5 = (uVar5 >> 1 & 0x55555555) + (uVar5 & 0x55555555) * 2;
                          iVar12 = iVar17 + 1;
                          if (*puVar14 == 0) {
                            if (uVar13 == uVar16) {
                              if (local_8c != 0) {
                                if (param_6 < local_b0) {
                                  FUN_10136a50(local_b0,param_6,param_6,
                                               &PTR_s_C__Users_runneradmin__cargo_regi_1015f5f8);
                    /* WARNING: Does not return */
                                  pcVar2 = (code *)invalidInstructionException();
                                  (*pcVar2)();
                                }
                                if (param_6 - local_b0 <= uVar5) {
                                  FUN_10136b52(uVar5,param_6 - local_b0,
                                               &PTR_s_C__Users_runneradmin__cargo_regi_1015f5e8);
                    /* WARNING: Does not return */
                                  pcVar2 = (code *)invalidInstructionException();
                                  (*pcVar2)();
                                }
                                *(undefined2 *)(param_5 + local_b0 + uVar5) = 0;
                                *(undefined1 *)((int)param_5 + uVar5 * 4 + local_b0 * 4 + 2) = 0x40;
                                *(byte *)((int)param_5 + uVar5 * 4 + local_b0 * 4 + 3) = bVar7;
                              }
                              param_1[1] = uVar4;
                              param_1[2] = local_a8;
                              goto LAB_10122c1c;
                            }
                            if (iVar17 == 0x11f) {
                              FUN_10136b52(0x120,0x120,
                                           &PTR_s_C__Users_runneradmin__cargo_regi_1015f5c8);
                    /* WARNING: Does not return */
                              pcVar2 = (code *)invalidInstructionException();
                              (*pcVar2)();
                            }
                            uVar13 = (uint)*(ushort *)(param_8 + iVar12 * 2);
                            if (param_4 <= uVar13) {
                              FUN_10136b52(uVar13,param_4,
                                           &PTR_s_C__Users_runneradmin__cargo_regi_1015f5d8);
                    /* WARNING: Does not return */
                              pcVar2 = (code *)invalidInstructionException();
                              (*pcVar2)();
                            }
                            uVar13 = (uint)param_3[uVar13];
                          }
                          iVar17 = iVar12;
                          if ((uVar13 <= uVar4) || (uVar8 = uVar5 & local_24, uVar8 == local_84))
                          break;
                          if (local_9c == 0) {
                            local_9c = uVar4;
                          }
                          local_ac = uVar13 - local_9c;
                          iVar6 = 1 << ((byte)local_ac & 0x1f);
                          if (uVar13 < uVar16) {
                            local_ac = uVar16 - local_9c;
                            uVar9 = uVar13;
                            do {
                              puVar14 = local_44 + uVar9;
                              if ((int)(iVar6 - (uint)*puVar14) < 1) {
                                local_ac = uVar9 - local_9c;
                                break;
                              }
                              uVar9 = uVar9 + 1;
                              iVar6 = (iVar6 - (uint)*puVar14) * 2;
                            } while (uVar9 < uVar16);
                            iVar6 = 1 << ((byte)local_ac & 0x1f);
                          }
                          local_a8 = iVar6 + local_a8;
                          if (param_2 == '\x01') {
                            if (0x534 < local_a8) goto LAB_10122e02;
                          }
                          else if ((param_2 == '\x02') && (0x250 < local_a8)) goto LAB_10122e02;
                          if (param_6 <= uVar8) {
                            FUN_10136b52(uVar8,param_6,
                                         &PTR_s_C__Users_runneradmin__cargo_regi_1015f608);
                    /* WARNING: Does not return */
                            pcVar2 = (code *)invalidInstructionException();
                            (*pcVar2)();
                          }
                          local_b0 = local_b0 + iVar11;
                          *(short *)(param_5 + uVar8) = (short)local_b0;
                          *(char *)((int)param_5 + uVar8 * 4 + 2) = (char)local_ac;
                          *(byte *)((int)param_5 + uVar8 * 4 + 3) = (byte)uVar4;
                          local_84 = uVar8;
                          if (iVar12 == 0x120) goto LAB_10123126;
                        }
                      } while (iVar12 != 0x120);
LAB_10123126:
                      FUN_10136b52(0x120,0x120,&PTR_s_C__Users_runneradmin__cargo_regi_1015f588);
                    /* WARNING: Does not return */
                      pcVar2 = (code *)invalidInstructionException();
                      (*pcVar2)();
                    }
                  }
                }
              }
            }
          }
        }
      }
      *param_1 = 0xffffffff;
      return;
    }
  }
  param_1[1] = 1;
  param_1[2] = 2;
  *param_5 = 0x1400000;
  param_5[1] = 0x1400000;
LAB_10122c1c:
  *param_1 = 0;
  return;
}
