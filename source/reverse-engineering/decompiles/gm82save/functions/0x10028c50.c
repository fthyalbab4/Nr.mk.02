// rea decompile_all
// name: FUN_10028c50
// address: 0x10028c50
// body: available
// range: 0x10028c50-0x10028cba inclusive
// range: 0x10028cc0-0x10028d16 inclusive
// range: 0x10028d20-0x10028da7 inclusive
// range: 0x10028db0-0x10028df7 inclusive
// range: 0x10028e00-0x10028e24 inclusive
// range: 0x10028e30-0x10028e57 inclusive
// range: 0x10028e60-0x10028ed3 inclusive
// range: 0x10028ee0-0x10028f49 inclusive
// range: 0x10028f50-0x10029009 inclusive
// range: 0x10029010-0x10029124 inclusive
// range: 0x10029130-0x10029175 inclusive
// range: 0x10029180-0x100291cc inclusive
// range: 0x100291d0-0x100293b5 inclusive
// range: 0x100293c0-0x1002948c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_10028c50(int *param_1,byte ******param_2,char param_3,byte ******param_4,byte *******param_5,
            int *param_6,byte *******param_7,undefined4 param_8,undefined4 param_9)

{
  byte ***********pppppppppppbVar1;
  byte bVar2;
  byte ********ppppppppbVar3;
  byte *********pppppppppbVar4;
  byte **********ppppppppppbVar5;
  int iVar6;
  int *piVar7;
  byte ***********pppppppppppbVar8;
  bool bVar9;
  bool bVar10;
  byte *********pppppppppbVar11;
  byte ******ppppppbVar12;
  int *piVar13;
  HANDLE pvVar14;
  LPVOID pvVar15;
  byte ***********pppppppppppbVar16;
  byte ***********lpMem;
  byte *******pppppppbVar17;
  byte ***********pppppppppppbVar18;
  byte ***********pppppppppppbVar19;
  code *pcVar20;
  int iVar21;
  byte ***********pppppppppppbVar22;
  byte ***********pppppppppppbVar23;
  byte ********ppppppppbVar24;
  byte ***********pppppppppppbVar25;
  byte ***********local_b4;
  byte ***********local_a4;
  byte ***********local_9c;
  byte ***********local_98;
  byte ***********local_94;
  byte ***********local_88;
  byte ***********pppppppppppbStack_84;
  byte ***********local_80;
  byte ***********local_7c;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  byte ***********local_6c;
  byte ***********local_68;
  int *local_64;
  byte ***********local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  byte ***********local_4c;
  int local_48;
  int local_44;
  int local_40;
  byte ***********local_3c;
  int *local_38;
  int local_34;
  int *local_30;
  byte *********local_2c;
  byte ********local_28;
  byte ********local_24;
  byte **********local_20;
  byte **********local_1c;
  byte *******local_18;
  byte ***********local_14;

  lpMem = (byte ***********)((uint)param_2 >> 1);
  local_1c = (byte **********)param_4;
  local_18 = param_5;
  local_20 = (byte **********)param_2;
  if (lpMem < param_5) {
LAB_10028c99:
    if (param_7 == (byte *******)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    local_38 = param_6 + (int)param_7;
    bVar10 = false;
    pcVar20 = GetProcessHeap_exref;
LAB_10028ce7:
    pppppppppppbVar16 = (byte ***********)0x0;
    local_30 = param_6;
    if (*param_6 != 0) {
      iVar21 = 0x1c;
      pppppppppbVar11 = (byte *********)0x0;
      ppppppppbVar24 = (byte ********)0x0;
      bVar9 = false;
      local_34 = *param_6;
      do {
        if ((ppppppppbVar24 == (byte ********)0x0) || (ppppppppbVar24 == local_28)) {
          if ((pppppppppbVar11 == (byte *********)0x0) || (pppppppppbVar11 == local_2c)) {
            do {
              if ((pppppppppppbVar16 == (byte ***********)0x0) ||
                 (pppppppppppbVar16 == (byte ***********)param_7)) {
                if (iVar21 != 0x4c) {
                  iVar21 = iVar21 + 4;
                  do {
                    pppppppppppbVar16 = *(byte ************)(local_34 + -4 + iVar21);
                    if (pppppppppppbVar16 == (byte ***********)0x0) {
                      param_7 = (byte *******)&DAT_00000004;
                    }
                    else {
                      param_7 = (byte *******)(pppppppppppbVar16 + (int)pppppppppppbVar16[-1]);
                      if (pppppppppppbVar16[-1] != (byte **********)0x0) goto LAB_10028db0;
                    }
                    iVar21 = iVar21 + 4;
                    if (iVar21 == 0x50) break;
                  } while( true );
                }
                goto LAB_10029150;
              }
LAB_10028db0:
              ppppppppppbVar5 = *pppppppppppbVar16;
              pppppppppppbVar16 = pppppppppppbVar16 + 1;
              pppppppppbVar11 = ppppppppppbVar5[1];
              pppppppppbVar4 = ppppppppppbVar5[2];
              if (pppppppppbVar11 == (byte *********)0x0) {
                pppppppppbVar11 = (byte *********)&DAT_00000004;
              }
              local_2c = pppppppppbVar11 + (int)pppppppppbVar4;
            } while (pppppppppbVar4 == (byte *********)0x0);
          }
          ppppppppbVar3 = *pppppppppbVar11;
          pppppppppbVar11 = pppppppppbVar11 + 1;
          ppppppppbVar24 = ppppppppbVar3 + 0x13;
          local_28 = ppppppppbVar3 + 0x1b;
        }
        pppppppbVar17 = *ppppppppbVar24;
        if (pppppppbVar17 == (byte *******)0x0) {
          pppppppbVar17 = (byte *******)0x2;
          ppppppbVar12 = (byte ******)0x0;
        }
        else {
          ppppppbVar12 = pppppppbVar17[-1];
        }
        local_24 = ppppppppbVar24;
        FUN_10093310((undefined8 *)&local_88,(ushort *)pppppppbVar17,(SIZE_T)ppppppbVar12);
        pppppppppppbVar8 = pppppppppppbStack_84;
        pppppppppppbVar22 = local_80;
        pppppppppppbVar19 = local_88;
        pppppppppppbVar23 = pppppppppppbStack_84;
        if ((char)local_7c != '\x01') {
          if (local_80 == (byte ***********)0x0) {
            pppppppppppbVar22 = (byte ***********)0x0;
          }
          else {
            pppppppppppbVar1 = (byte ***********)((int)pppppppppppbStack_84 + (int)local_80);
            pppppppppppbVar25 = pppppppppppbStack_84;
            do {
              bVar2 = *(byte *)pppppppppppbVar25;
              pppppppppppbVar18 = (byte ***********)((int)pppppppppppbVar25 + 1);
              if ((char)bVar2 < '\0') {
                if (bVar2 < 0xe0) {
                  if (pppppppppppbVar18 != pppppppppppbVar1) {
                    pppppppppppbVar18 = (byte ***********)((int)pppppppppppbVar25 + 2);
                  }
                }
                else if (bVar2 == 0xed) {
                  if ((pppppppppppbVar18 == pppppppppppbVar1) ||
                     ((byte ***********)((int)pppppppppppbVar25 + 2) == pppppppppppbVar1)) break;
                  if (0x9f < *(byte *)((int)pppppppppppbVar25 + 1)) {
                    pppppppppppbVar22 = local_7c;
                    pppppppppppbVar19 = pppppppppppbStack_84;
                    pppppppppppbVar23 = local_80;
                    if (local_88 != (byte ***********)0xffffffff) {
                      local_3c = local_88;
                      FUN_100935a0((undefined8 *)&local_88,(byte *)pppppppppppbStack_84,
                                   (SIZE_T)local_80);
                      pppppppppppbVar22 = local_80;
                      pppppppppppbVar19 = pppppppppppbStack_84;
                      if (local_88 == (byte ***********)0xffffffff) {
                        if (local_80 == (byte ***********)0x0) {
                          pvVar15 = (LPVOID)0x1;
                        }
                        else {
                          pvVar15 = FUN_10107380(0,(SIZE_T)local_80);
                          if (pvVar15 == (LPVOID)0x0) {
                            FUN_101366bc(1);
                    /* WARNING: Does not return */
                            pcVar20 = (code *)invalidInstructionException();
                            (*pcVar20)();
                          }
                          memcpy(pvVar15,pppppppppppbVar19,(size_t)pppppppppppbVar22);
                        }
                        local_54 = CONCAT44(pvVar15,pppppppppppbVar22);
                      }
                      else {
                        local_54 = CONCAT44(pppppppppppbStack_84,local_88);
                      }
                      local_4c = pppppppppppbVar22;
                      if (local_3c != (byte ***********)0x0) {
                        pvVar14 = GetProcessHeap();
                        HeapFree(pvVar14,0,pppppppppppbVar8);
                      }
                      pppppppppppbVar19 = (byte ***********)local_54;
                      goto joined_r0x100290bc;
                    }
                    break;
                  }
                  pppppppppppbVar18 = (byte ***********)((int)pppppppppppbVar25 + 3);
                }
                else {
                  pppppppppppbVar25 = (byte ***********)((int)pppppppppppbVar25 + 2);
                  if (pppppppppppbVar18 == pppppppppppbVar1) {
                    pppppppppppbVar25 = pppppppppppbVar18;
                  }
                  pppppppppppbVar18 =
                       (byte ***********)
                       ((uint)(pppppppppppbVar25 != pppppppppppbVar1) + (int)pppppppppppbVar25);
                  if (0xef < bVar2) {
                    pppppppppppbVar18 =
                         (byte ***********)
                         ((int)pppppppppppbVar18 + (uint)(pppppppppppbVar18 != pppppppppppbVar1));
                  }
                }
              }
              pppppppppppbVar25 = pppppppppppbVar18;
            } while (pppppppppppbVar18 != pppppppppppbVar1);
          }
        }
        local_54 = CONCAT44(pppppppppppbVar23,pppppppppppbVar19);
        local_4c = pppppppppppbVar22;
joined_r0x100290bc:
        if (pppppppppppbVar19 == (byte ***********)0xffffffff) goto LAB_10029150;
        FUN_10038ca0(&local_88,(int *)&local_54);
        pppppppppppbVar22 = local_80;
        pppppppppppbVar8 = pppppppppppbStack_84;
        pppppppppppbVar19 = local_88;
        if (local_88 < local_80) {
          FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10141d14);
                    /* WARNING: Does not return */
          pcVar20 = (code *)invalidInstructionException();
          (*pcVar20)();
        }
        piVar13 = FUN_100be180();
        if (piVar13 == (int *)0x0) goto LAB_10029473;
        if (*piVar13 == 0) {
          piVar13 = FUN_100c0800();
        }
        else {
          piVar13 = (int *)(*piVar13 + 0x8c);
        }
        FUN_10028440((int *)&local_88,(uint)pppppppppppbVar22,'\0',*(uint *)(*piVar13 + 0x104),1,
                     (int)pppppppppppbVar8,(uint)pppppppppppbVar22);
        pcVar20 = HeapFree_exref;
        if (pppppppppppbVar19 != (byte ***********)0x0) {
          pvVar14 = GetProcessHeap();
          HeapFree(pvVar14,0,pppppppppppbVar8);
        }
        if (bVar9) {
          if (local_a4 == (byte ***********)0x0) {
            pppppppppppbVar19 = local_88;
            local_a4 = pppppppppppbStack_84;
            local_94 = local_80;
            pppppppppppbVar8 = local_98;
            while (local_98 = pppppppppppbVar19, pppppppppppbVar8 != (byte ***********)0x0) {
              pppppppppppbVar22 = (byte ***********)pppppppppppbVar8[3];
              if (pppppppppppbVar22 != (byte ***********)0x0) {
                pppppppppppbVar22[4] = (byte **********)0x0;
              }
              if (*pppppppppppbVar8 != (byte **********)0x0) {
                ppppppppppbVar5 = pppppppppppbVar8[1];
                pvVar14 = GetProcessHeap();
                pcVar20 = HeapFree_exref;
                HeapFree(pvVar14,0,ppppppppppbVar5);
              }
              pvVar14 = GetProcessHeap();
              (*pcVar20)(pvVar14,0,pppppppppppbVar8);
              pppppppppppbVar8 = pppppppppppbVar22;
            }
          }
          else if (local_88 != (byte ***********)0x0) {
            local_a4[3] = (byte **********)local_88;
            local_88[4] = (byte **********)local_a4;
            local_a4 = pppppppppppbStack_84;
            local_94 = (byte ***********)((int)local_94 + (int)local_80);
          }
        }
        else {
          local_a4 = pppppppppppbStack_84;
          local_94 = local_80;
          local_98 = local_88;
        }
        bVar9 = true;
        ppppppppbVar24 = local_24 + 1;
      } while( true );
    }
    pppppppppppbVar19 = (byte ***********)0x0;
    pppppppppppbVar8 = (byte ***********)0x0;
    goto joined_r0x10029188;
  }
  if (param_3 == '\0') {
    if (param_4 == (byte ******)0x0) goto LAB_10028c99;
    local_1c = (byte **********)((uint)param_4 >> 1);
  }
  else {
    piVar13 = FUN_100be180();
    if (piVar13 == (int *)0x0) goto LAB_10029473;
    if (*piVar13 == 0) {
      piVar13 = FUN_100c0800();
    }
    else {
      piVar13 = (int *)(*piVar13 + 0x8c);
    }
    local_1c = (byte **********)((uint)param_4 >> 1);
    if ((byte **********)((uint)param_4 >> 1) <= *(byte ***********)(*piVar13 + 0x104)) {
      local_1c = *(byte ***********)(*piVar13 + 0x104);
    }
  }
  local_78 = (int)param_7 - (int)lpMem;
  local_14 = lpMem;
  if (param_7 < lpMem) {
    FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                 ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_101438c0);
                    /* WARNING: Does not return */
    pcVar20 = (code *)invalidInstructionException();
    (*pcVar20)();
  }
  local_88 = &local_20;
  local_7c = (byte ***********)(param_6 + (int)lpMem);
  local_80 = &local_1c;
  pppppppppppbStack_84 = (byte ***********)&local_14;
  local_74 = param_8;
  local_70 = param_9;
  local_64 = param_6;
  local_5c = param_8;
  local_58 = param_9;
  local_6c = pppppppppppbStack_84;
  local_68 = local_80;
  local_60 = lpMem;
  piVar13 = FUN_100be180();
  if (piVar13 == (int *)0x0) {
LAB_10029473:
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar20 = (code *)invalidInstructionException();
    (*pcVar20)();
  }
  iVar21 = *piVar13;
  if (iVar21 == 0) {
    piVar13 = FUN_100c0800();
    iVar6 = *piVar13;
    piVar13 = FUN_100be180();
    if (piVar13 == (int *)0x0) goto LAB_10029473;
    iVar21 = *piVar13;
    if (iVar21 == 0) {
      FUN_1012f250(&local_54,(uint *)(iVar6 + 0x40),(undefined8 *)&local_88);
      goto LAB_1002936e;
    }
    if (*(int *)(iVar21 + 0x8c) != iVar6) {
      FUN_10131870(&local_54,(uint *)(iVar6 + 0x40),iVar21,(undefined8 *)&local_88);
      goto LAB_1002936e;
    }
  }
  FUN_10030cf0((undefined4 *)&local_54,(undefined8 *)&local_88,iVar21,0);
LAB_1002936e:
  if (local_54._4_4_ == 0) {
    *param_1 = local_48;
    param_1[1] = local_44;
    param_1[2] = local_40;
    piVar13 = (int *)(byte ***********)local_54;
    pcVar20 = HeapFree_exref;
    while (piVar13 != (int *)0x0) {
      piVar7 = (int *)piVar13[3];
      if (piVar7 != (int *)0x0) {
        piVar7[4] = 0;
      }
      if (*piVar13 != 0) {
        pvVar15 = (LPVOID)piVar13[1];
        pvVar14 = GetProcessHeap();
        pcVar20 = HeapFree_exref;
        HeapFree(pvVar14,0,pvVar15);
      }
      pvVar14 = GetProcessHeap();
      (*pcVar20)(pvVar14,0,piVar13);
      piVar13 = piVar7;
    }
  }
  else {
    if (local_48 != 0) {
      local_4c = (byte ***********)((int)local_4c + local_40);
      *(int *)(local_54._4_4_ + 0xc) = local_48;
      *(int *)(local_48 + 0x10) = local_54._4_4_;
      local_54._4_4_ = local_44;
    }
    *param_1 = (int)(byte ***********)local_54;
    param_1[1] = local_54._4_4_;
    param_1[2] = (int)local_4c;
  }
  return;
LAB_10029150:
  pcVar20 = GetProcessHeap_exref;
  pppppppppppbVar16 = local_94;
  pppppppppppbVar19 = local_a4;
  pppppppppppbVar8 = local_98;
  if (!bVar9) {
    pppppppppppbVar16 = (byte ***********)0x0;
    pppppppppppbVar19 = (byte ***********)0x0;
    pppppppppppbVar8 = (byte ***********)0x0;
  }
joined_r0x10029188:
  pppppppppppbVar22 = pppppppppppbVar8;
  pppppppppppbVar23 = pppppppppppbVar19;
  pppppppppppbVar1 = pppppppppppbVar16;
  if (bVar10) {
    if (local_b4 == (byte ***********)0x0) {
      while (lpMem != (byte ***********)0x0) {
        pppppppppppbVar16 = (byte ***********)lpMem[3];
        if (pppppppppppbVar16 != (byte ***********)0x0) {
          pppppppppppbVar16[4] = (byte **********)0x0;
        }
        if (*lpMem != (byte **********)0x0) {
          ppppppppppbVar5 = lpMem[1];
          pvVar14 = GetProcessHeap();
          pcVar20 = GetProcessHeap_exref;
          HeapFree(pvVar14,0,ppppppppppbVar5);
        }
        pvVar14 = (HANDLE)(*pcVar20)();
        HeapFree(pvVar14,0,lpMem);
        lpMem = pppppppppppbVar16;
      }
    }
    else {
      pppppppppppbVar22 = lpMem;
      pppppppppppbVar23 = local_b4;
      pppppppppppbVar1 = local_9c;
      if (pppppppppppbVar8 != (byte ***********)0x0) {
        local_b4[3] = (byte **********)pppppppppppbVar8;
        pppppppppppbVar8[4] = (byte **********)local_b4;
        pppppppppppbVar23 = pppppppppppbVar19;
        pppppppppppbVar1 = (byte ***********)((int)local_9c + (int)pppppppppppbVar16);
      }
    }
  }
  local_9c = pppppppppppbVar1;
  local_b4 = pppppppppppbVar23;
  bVar10 = true;
  param_6 = local_30 + 1;
  lpMem = pppppppppppbVar22;
  if (param_6 == local_38) {
    *param_1 = (int)pppppppppppbVar22;
    param_1[1] = (int)local_b4;
    param_1[2] = (int)local_9c;
    return;
  }
  goto LAB_10028ce7;
}
