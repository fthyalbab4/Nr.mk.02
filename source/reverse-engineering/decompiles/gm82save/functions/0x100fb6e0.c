// rea decompile_all
// name: FUN_100fb6e0
// address: 0x100fb6e0
// body: available
// range: 0x100fb6e0-0x100fb8c5 inclusive
// range: 0x100fb8d0-0x100fc4e5 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100fb6e0(undefined4 *param_1,int *param_2)

{
  SIZE_T *pSVar1;
  undefined8 uVar2;
  int iVar3;
  SIZE_T _Size;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  uint *_Src;
  code *pcVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  LPVOID pvVar11;
  byte bVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  int iVar16;
  byte bVar17;
  byte bVar18;
  SIZE_T _Size_00;
  uint *puVar19;
  uint *puVar20;
  bool bVar21;
  undefined **ppuVar22;
  uint *local_b4;
  uint *local_b0;
  uint *local_ac;
  uint *local_a8;
  uint *local_a4;
  uint *local_9c;
  undefined8 local_78;
  uint *local_70;
  byte bStack_6c;
  undefined1 uStack_6b;
  char cStack_6a;
  undefined1 uStack_69;
  uint *puStack_68;
  undefined4 uStack_64;
  int local_60;
  uint *local_5c;
  uint *local_54;
  int local_48;
  uint *local_44;
  int local_40;
  uint *local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint *local_24;
  int local_20;
  uint *local_1c;

  uVar8 = FUN_100f0c40(param_2);
  if ((uVar8 != 0x70) && (uVar8 = FUN_100f0c40(param_2), uVar8 != 0x50)) {
    FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10154460);
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  iVar3 = *param_2;
  if (*(int *)(iVar3 + 0x40) != 0) {
    FUN_10136bb0(&PTR_s_C__Users_runneradmin__cargo_regi_10154414);
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  *(undefined4 *)(iVar3 + 0x40) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x4c) = 0;
  uVar8 = FUN_100f0c40(param_2);
  uVar9 = FUN_100f1250(param_2);
  if ((char)uVar9 == '\0') {
    _Size_00 = param_2[2];
  }
  else {
    local_34 = uVar8;
    FUN_100f0910(param_2);
    _Size_00 = *(SIZE_T *)(iVar3 + 0x50);
    _Size = param_2[2];
    if (_Size_00 != _Size) {
      pSVar1 = (SIZE_T *)(iVar3 + 0x50);
      uVar10 = FUN_100f0c40(param_2);
      uVar8 = *pSVar1;
      if (uVar10 == 0x7b) {
        uVar10 = FUN_100f0c40(param_2);
        uVar13 = 1;
        if ((0x7f < uVar10) && (uVar13 = 2, 0x7ff < uVar10)) {
          uVar13 = 4 - (uVar10 < 0x10000);
        }
        bVar21 = CARRY4(uVar13,uVar8);
        uVar8 = uVar13 + uVar8;
        if (bVar21) {
LAB_100fc3f5:
          FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10153fb0);
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        iVar16 = *(int *)(iVar3 + 0x58);
        if (iVar16 == -1) {
LAB_100fc401:
          FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10153fa0);
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        iVar4 = *(int *)(iVar3 + 0x54);
        uVar10 = FUN_100f0c40(param_2);
        local_2c = 1;
        if (uVar10 != 10) {
          local_2c = iVar16 + 1;
        }
        local_28 = (uint)(uVar10 == 10) + iVar4;
        local_a4 = (uint *)(iVar3 + 0x44);
        while( true ) {
          uVar9 = FUN_100f1250(param_2);
          if ((char)uVar9 == '\0') break;
          FUN_100f0910(param_2);
          if (*pSVar1 == _Size) break;
          uVar10 = FUN_100f0c40(param_2);
          if (uVar10 == 0x7d) break;
          uVar10 = FUN_100f0c40(param_2);
          uVar13 = 1;
          if ((0x7f < uVar10) && (uVar13 = 2, 0x7ff < uVar10)) {
            uVar13 = 4 - (uVar10 < 0x10000);
          }
          uVar5 = *(uint *)(iVar3 + 0x4c);
          if (*(int *)(iVar3 + 0x44) - uVar5 < uVar13) {
            FUN_101359e0(local_a4,uVar5,uVar13,(LPVOID)0x1,1);
            iVar16 = *(int *)(iVar3 + 0x48);
            if (0x7f < uVar10) goto LAB_100fb8a5;
LAB_100fb810:
            *(byte *)(iVar16 + uVar5) = (byte)uVar10;
          }
          else {
            iVar16 = *(int *)(iVar3 + 0x48);
            if (uVar10 < 0x80) goto LAB_100fb810;
LAB_100fb8a5:
            bVar12 = (byte)uVar10 & 0x3f | 0x80;
            bVar17 = (byte)(uVar10 >> 6);
            if (uVar10 < 0x800) {
              *(byte *)(iVar16 + uVar5) = bVar17 | 0xc0;
              *(byte *)(iVar16 + 1 + uVar5) = bVar12;
            }
            else {
              bVar18 = bVar17 & 0x3f | 0x80;
              bVar17 = (byte)(uVar10 >> 0xc);
              if (uVar10 < 0x10000) {
                *(byte *)(iVar16 + uVar5) = bVar17 | 0xe0;
                *(byte *)(iVar16 + 1 + uVar5) = bVar18;
                *(byte *)(iVar16 + 2 + uVar5) = bVar12;
              }
              else {
                *(byte *)(iVar16 + uVar5) = (byte)(uVar10 >> 0x12) | 0xf0;
                *(byte *)(iVar16 + 1 + uVar5) = bVar17 & 0x3f | 0x80;
                *(byte *)(iVar16 + 2 + uVar5) = bVar18;
                *(byte *)(iVar16 + 3 + uVar5) = bVar12;
              }
            }
          }
          *(uint *)(iVar3 + 0x4c) = uVar13 + uVar5;
        }
        if (*pSVar1 == _Size) {
          uStack_64 = *(undefined4 *)(iVar3 + 0x58);
          uVar2 = *(undefined8 *)pSVar1;
          bStack_6c = (byte)uVar2;
          uStack_6b = (undefined1)((ulonglong)uVar2 >> 8);
          cStack_6a = (char)((ulonglong)uVar2 >> 0x10);
          uStack_69 = (undefined1)((ulonglong)uVar2 >> 0x18);
          puStack_68 = (uint *)((ulonglong)uVar2 >> 0x20);
          local_70 = *(uint **)(iVar3 + 0x58);
          local_78 = *(undefined8 *)pSVar1;
          if (_Size == 0) {
            pvVar11 = (LPVOID)0x1;
          }
          else {
            pvVar6 = (void *)param_2[1];
            pvVar11 = FUN_10107380(0,_Size);
            if (pvVar11 == (LPVOID)0x0) goto LAB_100fc49c;
            memcpy(pvVar11,pvVar6,_Size);
          }
          *(ulonglong *)(param_1 + 0xe) = CONCAT44(uStack_64,puStack_68);
          *(ulonglong *)(param_1 + 0xc) =
               CONCAT17(uStack_69,
                        CONCAT16(cStack_6a,CONCAT15(uStack_6b,CONCAT14(bStack_6c,local_70))));
          *(undefined8 *)(param_1 + 10) = local_78;
          *param_1 = 10;
          param_1[7] = _Size;
          param_1[8] = pvVar11;
          param_1[9] = _Size;
          goto LAB_100fc3c5;
        }
        uVar10 = FUN_100f0c40(param_2);
        local_78 = CONCAT44(local_78._4_4_,uVar10);
        if (uVar10 != 0x7d) {
          FUN_1013bbfd(&local_78,&DAT_10154254,&PTR_s_C__Users_runneradmin__cargo_regi_10154404);
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        FUN_100f1250(param_2);
        _Src = *(uint **)(iVar3 + 0x48);
        local_ac = *(uint **)(iVar3 + 0x4c);
        FUN_100969a0((undefined4 *)&local_78,_Src,local_ac,&DAT_101543a0,2);
        if ((char)local_78 == '\0') {
          if (cStack_6a == '\0') {
            local_b0 = local_44;
            if (local_78._4_4_ != (uint *)0x0) {
              puVar14 = local_78._4_4_;
              if (local_78._4_4_ < local_44) {
                if (*(char *)(local_48 + (int)local_78._4_4_) < -0x40) goto LAB_100fc23d;
              }
              else if (local_78._4_4_ != local_44) goto LAB_100fc23d;
            }
            if (local_78._4_4_ == local_44) {
              local_b0 = local_78._4_4_;
              puVar20 = local_b0;
              if ((bStack_6c & 1) == 0) goto LAB_100fbf06;
            }
            else {
              bVar12 = *(byte *)(local_48 + (int)local_78._4_4_);
              uVar10 = (uint)bVar12;
              if ((char)bVar12 < '\0') {
                uVar13 = *(byte *)(local_48 + 1 + (int)local_78._4_4_) & 0x3f;
                if (bVar12 < 0xe0) {
                  uVar10 = (uVar10 & 0x1f) << 6 | uVar13;
                }
                else {
                  uVar13 = *(byte *)(local_48 + 2 + (int)local_78._4_4_) & 0x3f | uVar13 << 6;
                  if (bVar12 < 0xf0) {
                    uVar10 = uVar13 | (uVar10 & 0x1f) << 0xc;
                  }
                  else {
                    uVar10 = *(byte *)(local_48 + 3 + (int)local_78._4_4_) & 0x3f | uVar13 << 6 |
                             (uVar10 & 7) << 0x12;
                  }
                }
              }
              puVar20 = local_78._4_4_;
              if ((bStack_6c & 1) == 0) {
                iVar16 = 1;
                if ((0x7f < uVar10) && (iVar16 = 2, 0x7ff < uVar10)) {
                  iVar16 = 4 - (uint)(uVar10 < 0x10000);
                }
                puVar14 = (uint *)((int)local_78._4_4_ + iVar16);
                if (puVar14 != (uint *)0x0) {
                  if (puVar14 < local_44) {
                    if (*(char *)(local_48 + (int)puVar14) < -0x40) {
LAB_100fc23d:
                      FUN_10136b90(local_48,(uint)local_44,(uint)puVar14,(uint)local_44,
                                   &PTR_s_C__Users_runneradmin__rustup_too_101594c0);
                    /* WARNING: Does not return */
                      pcVar7 = (code *)invalidInstructionException();
                      (*pcVar7)();
                    }
                  }
                  else if (puVar14 != local_44) goto LAB_100fc23d;
                }
                puVar20 = local_b0;
                if (puVar14 != local_44) {
                  puVar20 = puVar14;
                }
              }
            }
LAB_100fc26b:
            local_b0 = puVar20;
            local_1c = local_b0;
            if (local_b0 != (uint *)0x0) {
              if (local_b0 < local_ac) {
                if (-0x41 < *(char *)((int)_Src + (int)local_b0)) {
LAB_100fc2b2:
                  local_a8 = FUN_10107380(0,(SIZE_T)local_b0);
                  if (local_a8 == (uint *)0x0) goto LAB_100fc48e;
                  memcpy(local_a8,_Src,(size_t)local_b0);
                  puVar20 = (uint *)((int)local_b0 + 2);
                  puVar14 = (uint *)0x0;
                  if (puVar20 != (uint *)0x0) goto LAB_100fc2e0;
                  goto LAB_100fc2fe;
                }
              }
              else if (local_b0 == local_ac) goto LAB_100fc2b2;
              ppuVar22 = &PTR_s_C__Users_runneradmin__cargo_regi_101543e4;
              goto LAB_100fc290;
            }
            local_a8 = (uint *)0x1;
            puVar20 = (uint *)0x2;
LAB_100fc2e0:
            if (puVar20 < local_ac) {
              puVar14 = puVar20;
              if (*(char *)((int)_Src + (int)puVar20) < -0x40) {
LAB_100fc4aa:
                FUN_10136b90((int)_Src,(uint)local_ac,(uint)puVar20,(uint)local_ac,
                             &PTR_s_C__Users_runneradmin__cargo_regi_101543f4);
                    /* WARNING: Does not return */
                pcVar7 = (code *)invalidInstructionException();
                (*pcVar7)();
              }
            }
            else {
              puVar14 = local_ac;
              if (puVar20 != local_ac) goto LAB_100fc4aa;
            }
LAB_100fc2fe:
            local_ac = (uint *)((int)local_ac - (int)puVar14);
            if (local_ac == (uint *)0x0) {
              local_ac = (uint *)0x0;
              local_a4 = (uint *)0x1;
            }
            else {
              local_a4 = FUN_10107380(0,(SIZE_T)local_ac);
              if (local_a4 == (uint *)0x0) {
LAB_100fc49c:
                FUN_101366bc(1);
                    /* WARNING: Does not return */
                pcVar7 = (code *)invalidInstructionException();
                (*pcVar7)();
              }
              memcpy(local_a4,(void *)((int)_Src + (int)puVar14),(size_t)local_ac);
            }
            local_b4 = (uint *)0x2;
            local_78._0_4_ = local_ac;
            local_9c = local_b0;
            goto LAB_100fc358;
          }
        }
        else {
          local_a4 = local_54;
          local_30 = (int)local_3c + -1;
          if (local_54 == (uint *)0xffffffff) {
            puVar14 = (uint *)((int)local_5c + local_30);
            local_b0 = local_5c;
            if (puVar14 < local_44) {
              local_38 = local_60;
              local_a4 = local_3c;
              if (local_3c < puStack_68) {
                local_a4 = puStack_68;
              }
LAB_100fbe44:
              puVar20 = local_70;
              if ((*(byte *)(local_48 + (int)puVar14) & 0x20) != 0) {
                puVar20 = (uint *)CONCAT13(uStack_69,
                                           CONCAT12(cStack_6a,CONCAT11(uStack_6b,bStack_6c)));
              }
              if (((uint)puVar20 >> (*(byte *)(local_48 + (int)puVar14) & 0x1f) & 1) == 0) {
                local_b0 = (uint *)((int)local_b0 + (int)local_3c);
              }
              else {
                puVar14 = puStack_68;
                do {
                  puVar20 = puVar14;
                  puVar14 = puStack_68;
                  if (local_a4 == puVar20) goto LAB_100fbea4;
                  if (local_44 <= (uint *)((int)puVar20 + (int)local_b0)) {
                    puVar20 = (uint *)((int)puStack_68 + (int)local_b0);
                    goto LAB_100fc443;
                  }
                  puVar14 = (uint *)((int)puVar20 + 1);
                } while (*(char *)(local_40 + (int)puVar20) ==
                         *(char *)(local_48 + (int)local_b0 + (int)puVar20));
                local_b0 = (uint *)((int)local_b0 + (1 - (int)puStack_68) + (int)puVar20);
              }
              goto LAB_100fbe2e;
            }
          }
          else {
            puVar14 = (uint *)(local_30 + (int)local_5c);
            local_b0 = local_5c;
            if (puVar14 < local_44) {
              local_38 = local_60;
              local_24 = (uint *)((int)local_3c - local_60);
LAB_100fbd09:
              puVar20 = local_70;
              if ((*(byte *)(local_48 + (int)puVar14) & 0x20) != 0) {
                puVar20 = (uint *)CONCAT13(uStack_69,
                                           CONCAT12(cStack_6a,CONCAT11(uStack_6b,bStack_6c)));
              }
              if (((uint)puVar20 >> (*(byte *)(local_48 + (int)puVar14) & 0x1f) & 1) == 0) {
                local_a4 = (uint *)0x0;
                local_b0 = (uint *)((int)local_b0 + (int)local_3c);
              }
              else {
                puVar20 = puStack_68;
                if (puStack_68 < local_a4) {
                  puVar20 = local_a4;
                }
                puVar19 = local_3c;
                if (local_3c < puVar20) {
                  puVar19 = puVar20;
                }
                puVar14 = puVar20;
                do {
                  puVar15 = puVar14;
                  puVar14 = puStack_68;
                  if (puVar19 == puVar15) goto LAB_100fbd90;
                  if (local_44 <= (uint *)((int)puVar15 + (int)local_b0)) {
                    puVar20 = (uint *)((int)puVar20 + (int)local_b0);
LAB_100fc443:
                    if (puVar20 < local_44) {
                      puVar20 = local_44;
                    }
                    FUN_10136b52(puVar20,local_44,&PTR_s_C__Users_runneradmin__rustup_too_101567c8);
                    /* WARNING: Does not return */
                    pcVar7 = (code *)invalidInstructionException();
                    (*pcVar7)();
                  }
                  puVar14 = (uint *)((int)puVar15 + 1);
                } while (*(char *)(local_40 + (int)puVar15) ==
                         *(char *)(local_48 + (int)local_b0 + (int)puVar15));
                local_a4 = (uint *)0x0;
                local_b0 = (uint *)((int)local_b0 + (1 - (int)puStack_68) + (int)puVar15);
              }
              goto LAB_100fbcf4;
            }
          }
        }
LAB_100fbf06:
        bStack_6c = 0;
        uStack_6b = 0;
        cStack_6a = '\0';
        uStack_69 = 0;
        local_78 = CONCAT44(_Src,0x3a);
        local_60 = CONCAT31(local_60._1_3_,1);
        uStack_64 = 0x3a;
        local_70 = local_ac;
        puStack_68 = local_ac;
        FUN_10090ba0(&local_20,(int)&local_78);
        if (local_20 == 1) {
          if (local_1c != (uint *)0x0) {
            if (local_1c < local_ac) {
              if (-0x41 < *(char *)((int)_Src + (int)local_1c)) {
LAB_100fc0b4:
                local_a8 = FUN_10107380(0,(SIZE_T)local_1c);
                if (local_a8 == (uint *)0x0) {
LAB_100fc48e:
                  FUN_101366bc(1);
                    /* WARNING: Does not return */
                  pcVar7 = (code *)invalidInstructionException();
                  (*pcVar7)();
                }
                memcpy(local_a8,_Src,(size_t)local_1c);
                puVar20 = (uint *)((int)local_1c + 1);
                puVar14 = (uint *)0x0;
                if (puVar20 != (uint *)0x0) goto LAB_100fc0e2;
                goto LAB_100fc100;
              }
            }
            else if (local_1c == local_ac) goto LAB_100fc0b4;
            ppuVar22 = &PTR_s_C__Users_runneradmin__cargo_regi_101543c4;
LAB_100fc290:
            FUN_10136b90((int)_Src,(uint)local_ac,0,(uint)local_1c,ppuVar22);
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          puVar20 = (uint *)0x1;
          local_a8 = (uint *)0x1;
LAB_100fc0e2:
          if (puVar20 < local_ac) {
            puVar14 = puVar20;
            if (*(char *)((int)_Src + (int)puVar20) < -0x40) {
LAB_100fc4c1:
              FUN_10136b90((int)_Src,(uint)local_ac,(uint)puVar20,(uint)local_ac,
                           &PTR_s_C__Users_runneradmin__cargo_regi_101543d4);
                    /* WARNING: Does not return */
              pcVar7 = (code *)invalidInstructionException();
              (*pcVar7)();
            }
          }
          else {
            puVar14 = local_ac;
            if (puVar20 != local_ac) goto LAB_100fc4c1;
          }
LAB_100fc100:
          local_ac = (uint *)((int)local_ac - (int)puVar14);
          if (local_ac == (uint *)0x0) {
            local_ac = (uint *)0x0;
            local_a4 = (uint *)0x1;
          }
          else {
            local_a4 = FUN_10107380(0,(SIZE_T)local_ac);
            if (local_a4 == (uint *)0x0) {
              FUN_101366bc(1);
                    /* WARNING: Does not return */
              pcVar7 = (code *)invalidInstructionException();
              (*pcVar7)();
            }
            memcpy(local_a4,(void *)((int)_Src + (int)puVar14),(size_t)local_ac);
          }
          local_b4 = (uint *)0x1;
          local_78._0_4_ = local_ac;
          local_9c = local_1c;
        }
        else {
          bStack_6c = 0;
          uStack_6b = 0;
          cStack_6a = 0;
          uStack_69 = 0;
          local_78._0_4_ = (uint *)0x3d;
          local_60 = CONCAT31(local_60._1_3_,1);
          uStack_64 = 0x3d;
          local_70 = local_ac;
          puStack_68 = local_ac;
          local_78._4_4_ = _Src;
          FUN_10090ba0(&local_20,(int)&local_78);
          if (local_20 == 1) {
            if (local_1c != (uint *)0x0) {
              if (local_1c < local_ac) {
                if (*(char *)((int)_Src + (int)local_1c) < -0x40) {
LAB_100fbff0:
                  FUN_10136b90((int)_Src,(uint)local_ac,0,(uint)local_1c,
                               &PTR_s_C__Users_runneradmin__cargo_regi_101543a4);
                    /* WARNING: Does not return */
                  pcVar7 = (code *)invalidInstructionException();
                  (*pcVar7)();
                }
              }
              else if (local_1c != local_ac) goto LAB_100fbff0;
            }
            FUN_1002c180((SIZE_T *)&local_78,_Src,(SIZE_T)local_1c);
            puVar14 = (uint *)local_78;
            local_1c = (uint *)((int)local_1c + 1);
            if (local_1c != (uint *)0x0) {
              if (local_1c < local_ac) {
                if (*(char *)((int)_Src + (int)local_1c) < -0x40) {
LAB_100fc193:
                  FUN_10136b90((int)_Src,(uint)local_ac,(uint)local_1c,(uint)local_ac,
                               &PTR_s_C__Users_runneradmin__cargo_regi_101543b4);
                    /* WARNING: Does not return */
                  pcVar7 = (code *)invalidInstructionException();
                  (*pcVar7)();
                }
              }
              else if (local_ac != local_1c) goto LAB_100fc193;
            }
            local_a8 = local_78._4_4_;
            local_9c = local_70;
            FUN_1002c180((SIZE_T *)&local_78,(void *)((int)_Src + (int)local_1c),
                         (int)local_ac - (int)local_1c);
            local_a4 = local_78._4_4_;
            local_ac = local_70;
          }
          else {
            FUN_1002c180((SIZE_T *)&local_78,_Src,(SIZE_T)local_ac);
            puVar14 = (uint *)0x80000001;
            local_a8 = (uint *)local_78;
            local_9c = local_78._4_4_;
            local_78._0_4_ = local_70;
          }
          local_b4 = (uint *)0x0;
          local_1c = puVar14;
        }
      }
      else {
        iVar16 = *(int *)(iVar3 + 0x54);
        iVar4 = *(int *)(iVar3 + 0x58);
        local_a8 = (uint *)FUN_100f0c40(param_2);
        if (local_a8 == (uint *)0x5c) {
          uVar8 = *pSVar1;
          uVar10 = FUN_100f0c40(param_2);
          uVar13 = 1;
          if ((0x7f < uVar10) && (uVar13 = 2, 0x7ff < uVar10)) {
            uVar13 = 4 - (uVar10 < 0x10000);
          }
          if (CARRY4(uVar13,uVar8)) goto LAB_100fc3f5;
          if (*(int *)(iVar3 + 0x58) == -1) goto LAB_100fc401;
          local_34 = *(uint *)(iVar3 + 0x54);
          iVar16 = *(int *)(iVar3 + 0x58) + 1;
          uVar10 = FUN_100f0c40(param_2);
          local_70 = *(uint **)(iVar3 + 0x58);
          local_78 = *(undefined8 *)pSVar1;
          pvVar11 = (LPVOID)0x1;
          if (uVar10 == 10) {
            iVar16 = 1;
          }
          if (_Size != 0) {
            pvVar6 = (void *)param_2[1];
            pvVar11 = FUN_10107380(0,_Size);
            if (pvVar11 == (LPVOID)0x0) goto LAB_100fc48e;
            memcpy(pvVar11,pvVar6,_Size);
          }
          param_1[0xc] = local_70;
          *(undefined8 *)(param_1 + 10) = local_78;
          *param_1 = 0x1f;
          param_1[7] = _Size;
          param_1[8] = pvVar11;
          param_1[9] = _Size;
          param_1[0xd] = uVar13 + uVar8;
          param_1[0xe] = local_34 + (uVar10 == 10);
          param_1[0xf] = iVar16;
          goto LAB_100fc3c5;
        }
        local_2c = iVar4;
        local_28 = iVar16;
        local_78._0_4_ = (uint *)FUN_100f1250(param_2);
        if ((char)(uint *)local_78 != '\0') {
          local_78._0_4_ = (uint *)FUN_100f0910(param_2);
        }
        local_1c = (uint *)0x80000000;
        local_b4 = (uint *)local_78;
      }
LAB_100fc358:
      param_1[0xd] = *(undefined4 *)(iVar3 + 0x58);
      *(undefined8 *)(param_1 + 0xb) = *(undefined8 *)pSVar1;
      param_1[1] = local_1c;
      param_1[2] = local_a8;
      param_1[3] = local_9c;
      param_1[4] = (uint *)local_78;
      param_1[6] = local_ac;
      param_1[5] = local_a4;
      *(char *)(param_1 + 7) = (char)local_b4;
      param_1[8] = uVar8;
      param_1[9] = local_28;
      param_1[10] = local_2c;
      *(bool *)(param_1 + 0xe) = local_34 == 0x50;
      *param_1 = 0xffffffff;
      goto LAB_100fc3c5;
    }
  }
  uStack_64 = *(undefined4 *)(iVar3 + 0x58);
  uVar2 = *(undefined8 *)(iVar3 + 0x50);
  bStack_6c = (byte)uVar2;
  uStack_6b = (undefined1)((ulonglong)uVar2 >> 8);
  cStack_6a = (char)((ulonglong)uVar2 >> 0x10);
  uStack_69 = (undefined1)((ulonglong)uVar2 >> 0x18);
  puStack_68 = (uint *)((ulonglong)uVar2 >> 0x20);
  local_70 = *(uint **)(iVar3 + 0x58);
  local_78 = *(undefined8 *)(iVar3 + 0x50);
  if (_Size_00 == 0) {
    pvVar11 = (LPVOID)0x1;
  }
  else {
    pvVar6 = (void *)param_2[1];
    pvVar11 = FUN_10107380(0,_Size_00);
    if (pvVar11 == (LPVOID)0x0) {
      FUN_101366bc(1);
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    memcpy(pvVar11,pvVar6,_Size_00);
  }
  *(ulonglong *)(param_1 + 0xe) = CONCAT44(uStack_64,puStack_68);
  *(ulonglong *)(param_1 + 0xc) =
       CONCAT17(uStack_69,CONCAT16(cStack_6a,CONCAT15(uStack_6b,CONCAT14(bStack_6c,local_70))));
  *(undefined8 *)(param_1 + 10) = local_78;
  *param_1 = 10;
  param_1[7] = _Size_00;
  param_1[8] = pvVar11;
  param_1[9] = _Size_00;
LAB_100fc3c5:
  *(int *)(iVar3 + 0x40) = *(int *)(iVar3 + 0x40) + 1;
  return;
  while( true ) {
    puVar14 = (uint *)((int)puVar14 + -1);
    if (local_3c <= (uint *)((int)puStack_68 + -1)) goto LAB_100fc46a;
    puVar20 = (uint *)((int)puVar14 + (int)local_b0);
    if (local_44 <= puVar20) {
      FUN_10136b52(puVar20,local_44,&PTR_s_C__Users_runneradmin__rustup_too_101567b8);
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    if (*(char *)(local_40 + (int)puVar14) != *(char *)(local_48 + (int)puVar20)) break;
LAB_100fbea4:
    puVar20 = local_b0;
    if (puVar14 == (uint *)0x0) goto LAB_100fc26b;
  }
  local_b0 = (uint *)((int)local_b0 + local_60);
LAB_100fbe2e:
  puVar14 = (uint *)((int)local_b0 + local_30);
  if (local_44 <= puVar14) goto LAB_100fbf06;
  goto LAB_100fbe44;
LAB_100fbd90:
  do {
    puVar20 = local_b0;
    if (puVar14 <= local_a4) goto LAB_100fc26b;
    puVar14 = (uint *)((int)puVar14 + -1);
    if (local_3c <= puVar14) {
LAB_100fc46a:
      FUN_10136b52(puVar14,local_3c,&PTR_s_C__Users_runneradmin__rustup_too_101567a8);
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    puVar20 = (uint *)((int)puVar14 + (int)local_b0);
    if (local_44 <= puVar20) {
      FUN_10136b52(puVar20,local_44,&PTR_s_C__Users_runneradmin__rustup_too_101567b8);
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
  } while (*(char *)(local_40 + (int)puVar14) == *(char *)(local_48 + (int)puVar20));
  local_b0 = (uint *)((int)local_b0 + local_60);
  local_a4 = local_24;
LAB_100fbcf4:
  puVar14 = (uint *)(local_30 + (int)local_b0);
  if (local_44 <= puVar14) goto LAB_100fbf06;
  goto LAB_100fbd09;
}
