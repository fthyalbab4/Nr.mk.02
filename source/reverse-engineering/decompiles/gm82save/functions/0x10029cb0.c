// rea decompile_all
// name: FUN_10029cb0
// address: 0x10029cb0
// body: available
// range: 0x10029cb0-0x10029d1a inclusive
// range: 0x10029d20-0x10029d80 inclusive
// range: 0x10029d90-0x10029e39 inclusive
// range: 0x10029e40-0x10029e67 inclusive
// range: 0x10029e70-0x10029ff4 inclusive
// range: 0x1002a000-0x1002a116 inclusive
// range: 0x1002a120-0x1002a147 inclusive
// range: 0x1002a150-0x1002a167 inclusive
// range: 0x1002a170-0x1002a1c1 inclusive
// range: 0x1002a1d0-0x1002a3b2 inclusive
// range: 0x1002a3c0-0x1002a48c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_10029cb0(uint *param_1,uint param_2,char param_3,uint param_4,uint param_5,int *param_6,
            uint param_7,undefined4 param_8,undefined4 param_9)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  uint *puVar4;
  int *piVar5;
  SIZE_T SVar6;
  int *piVar7;
  HANDLE pvVar8;
  LPVOID pvVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  ushort *puVar13;
  uint *puVar14;
  uint *puVar15;
  int *piVar16;
  code *pcVar17;
  int *piVar18;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  uint *local_b0;
  uint *local_a4;
  uint *local_9c;
  uint *local_98;
  uint *local_94;
  uint *local_88;
  uint *puStack_84;
  uint *local_80;
  uint *local_7c;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  uint *local_6c;
  uint *local_68;
  int *local_64;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  uint *local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint *local_3c;
  uint local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;

  uVar12 = param_2 >> 1;
  local_1c = param_4;
  local_18 = param_5;
  local_20 = param_2;
  if (uVar12 < param_5) {
LAB_10029cf9:
    if (param_7 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    local_30 = param_6 + param_7;
    local_38 = 0;
    puVar11 = param_1;
    pcVar17 = GetProcessHeap_exref;
LAB_10029d47:
    iVar10 = *param_6;
    local_2c = param_6;
    if (iVar10 != 0) {
      piVar16 = *(int **)(iVar10 + 4);
      bVar3 = false;
      if (piVar16 == (int *)0x0) {
        piVar16 = (int *)&DAT_00000004;
      }
      piVar18 = (int *)0x0;
      local_34 = piVar16 + *(int *)(iVar10 + 0xc);
      piVar5 = (int *)0x0;
      local_3c = puVar11;
      do {
        if ((piVar18 == (int *)0x0) || (piVar18 == local_24)) {
          if ((piVar5 == (int *)0x0) || (piVar5 == local_28)) {
            do {
              if ((piVar16 == (int *)0x0) || (piVar16 == local_34)) goto LAB_1002a120;
              iVar10 = *piVar16;
              piVar16 = piVar16 + 1;
              iVar2 = *(int *)(iVar10 + 8);
            } while (iVar2 == 0);
            piVar5 = *(int **)(iVar10 + 4);
            if (piVar5 == (int *)0x0) {
              piVar5 = (int *)&DAT_00000004;
            }
            local_28 = piVar5 + iVar2;
          }
          iVar10 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar18 = (int *)(iVar10 + 0x4c);
          local_24 = (int *)(iVar10 + 0x6c);
        }
        puVar13 = (ushort *)*piVar18;
        if (puVar13 == (ushort *)0x0) {
          puVar13 = (ushort *)0x2;
          SVar6 = 0;
        }
        else {
          SVar6 = *(SIZE_T *)(puVar13 + -2);
        }
        FUN_10093310((undefined8 *)&local_88,puVar13,SVar6);
        puVar20 = puStack_84;
        puVar15 = local_88;
        puVar22 = local_80;
        puVar11 = local_88;
        puVar4 = puStack_84;
        if ((char)local_7c != '\x01') {
          if (local_80 == (uint *)0x0) {
            puVar22 = (uint *)0x0;
          }
          else {
            puVar21 = (uint *)((int)puStack_84 + (int)local_80);
            puVar19 = puStack_84;
            do {
              bVar1 = (byte)*puVar19;
              puVar14 = (uint *)((int)puVar19 + 1);
              if ((char)bVar1 < '\0') {
                if (bVar1 < 0xe0) {
                  if (puVar14 != puVar21) {
                    puVar14 = (uint *)((int)puVar19 + 2);
                  }
                }
                else if (bVar1 == 0xed) {
                  if ((puVar14 == puVar21) || ((uint *)((int)puVar19 + 2) == puVar21)) break;
                  if (0x9f < *(byte *)((int)puVar19 + 1)) {
                    puVar22 = local_7c;
                    puVar11 = puStack_84;
                    puVar4 = local_80;
                    if (local_88 != (uint *)0xffffffff) {
                      FUN_100935a0((undefined8 *)&local_88,(byte *)puStack_84,(SIZE_T)local_80);
                      puVar22 = local_80;
                      puVar11 = puStack_84;
                      if (local_88 == (uint *)0xffffffff) {
                        if (local_80 == (uint *)0x0) {
                          pvVar9 = (LPVOID)0x1;
                        }
                        else {
                          pvVar9 = FUN_10107380(0,(SIZE_T)local_80);
                          if (pvVar9 == (LPVOID)0x0) {
                            FUN_101366bc(1);
                    /* WARNING: Does not return */
                            pcVar17 = (code *)invalidInstructionException();
                            (*pcVar17)();
                          }
                          memcpy(pvVar9,puVar11,(size_t)puVar22);
                        }
                        local_54 = CONCAT44(pvVar9,puVar22);
                      }
                      else {
                        local_54 = CONCAT44(puStack_84,local_88);
                      }
                      local_4c = puVar22;
                      if (puVar15 != (uint *)0x0) {
                        pvVar8 = GetProcessHeap();
                        HeapFree(pvVar8,0,puVar20);
                      }
                      pcVar17 = GetProcessHeap_exref;
                      puVar11 = (uint *)local_54;
                      goto joined_r0x1002a0b4;
                    }
                    break;
                  }
                  puVar14 = (uint *)((int)puVar19 + 3);
                }
                else {
                  puVar19 = (uint *)((int)puVar19 + 2);
                  if (puVar14 == puVar21) {
                    puVar19 = puVar14;
                  }
                  puVar14 = (uint *)((uint)(puVar19 != puVar21) + (int)puVar19);
                  if (0xef < bVar1) {
                    puVar14 = (uint *)((int)puVar14 + (uint)(puVar14 != puVar21));
                  }
                }
              }
              puVar19 = puVar14;
            } while (puVar14 != puVar21);
          }
        }
        local_54 = CONCAT44(puVar4,puVar11);
        pcVar17 = GetProcessHeap_exref;
        local_4c = puVar22;
joined_r0x1002a0b4:
        GetProcessHeap_exref = pcVar17;
        if (puVar11 == (uint *)0xffffffff) goto LAB_1002a120;
        FUN_10038ca0(&local_88,(int *)&local_54);
        puVar20 = local_80;
        puVar15 = puStack_84;
        puVar11 = local_88;
        if (local_88 < local_80) {
          FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10141d14);
                    /* WARNING: Does not return */
          pcVar17 = (code *)invalidInstructionException();
          (*pcVar17)();
        }
        piVar7 = FUN_100be180();
        if (piVar7 == (int *)0x0) goto LAB_1002a473;
        if (*piVar7 == 0) {
          piVar7 = FUN_100c0800();
        }
        else {
          piVar7 = (int *)(*piVar7 + 0x8c);
        }
        FUN_10028440((int *)&local_88,(uint)puVar20,'\0',*(uint *)(*piVar7 + 0x104),1,(int)puVar15,
                     (uint)puVar20);
        if (puVar11 != (uint *)0x0) {
          pvVar8 = GetProcessHeap();
          HeapFree(pvVar8,0,puVar15);
        }
        puVar11 = local_88;
        pcVar17 = GetProcessHeap_exref;
        if (bVar3) {
          if (local_a4 == (uint *)0x0) {
            local_a4 = puStack_84;
            local_94 = local_80;
            if (local_b0 == (uint *)0x0) {
              local_b0 = local_88;
            }
            else {
              do {
                puVar15 = (uint *)local_b0[3];
                if (puVar15 != (uint *)0x0) {
                  puVar15[4] = 0;
                }
                if (*local_b0 != 0) {
                  pvVar9 = (LPVOID)local_b0[1];
                  pvVar8 = GetProcessHeap();
                  pcVar17 = GetProcessHeap_exref;
                  HeapFree(pvVar8,0,pvVar9);
                }
                pvVar8 = (HANDLE)(*pcVar17)();
                HeapFree(pvVar8,0,local_b0);
                local_b0 = puVar15;
              } while (puVar15 != (uint *)0x0);
              local_b0 = puVar11;
            }
          }
          else if (local_88 != (uint *)0x0) {
            local_a4[3] = (uint)local_88;
            local_88[4] = (uint)local_a4;
            local_94 = (uint *)((int)local_94 + (int)local_80);
            goto LAB_10029da9;
          }
        }
        else {
          local_b0 = local_88;
          local_94 = local_80;
LAB_10029da9:
          local_a4 = puStack_84;
        }
        bVar3 = true;
        piVar18 = piVar18 + 1;
      } while( true );
    }
    puVar15 = (uint *)0x0;
    puVar20 = (uint *)0x0;
    puVar22 = (uint *)0x0;
    puVar4 = local_b0;
    puVar21 = puVar20;
    puVar19 = puVar22;
    puVar14 = puVar15;
    if ((char)local_38 != '\0') goto LAB_1002a18b;
    goto LAB_10029d2a;
  }
  if (param_3 == '\0') {
    if (param_4 == 0) goto LAB_10029cf9;
    local_1c = param_4 >> 1;
  }
  else {
    piVar16 = FUN_100be180();
    if (piVar16 == (int *)0x0) goto LAB_1002a473;
    if (*piVar16 == 0) {
      piVar16 = FUN_100c0800();
    }
    else {
      piVar16 = (int *)(*piVar16 + 0x8c);
    }
    local_1c = param_4 >> 1;
    if (param_4 >> 1 <= *(uint *)(*piVar16 + 0x104)) {
      local_1c = *(uint *)(*piVar16 + 0x104);
    }
  }
  local_78 = param_7 - uVar12;
  local_14 = uVar12;
  if (param_7 < uVar12) {
    FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                 ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_101438c0);
                    /* WARNING: Does not return */
    pcVar17 = (code *)invalidInstructionException();
    (*pcVar17)();
  }
  local_88 = &local_20;
  local_7c = (uint *)(param_6 + uVar12);
  local_80 = &local_1c;
  puStack_84 = &local_14;
  local_74 = param_8;
  local_70 = param_9;
  local_64 = param_6;
  local_5c = param_8;
  local_58 = param_9;
  local_6c = puStack_84;
  local_68 = local_80;
  local_60 = uVar12;
  piVar16 = FUN_100be180();
  if (piVar16 == (int *)0x0) {
LAB_1002a473:
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar17 = (code *)invalidInstructionException();
    (*pcVar17)();
  }
  iVar10 = *piVar16;
  if (iVar10 == 0) {
    piVar16 = FUN_100c0800();
    iVar2 = *piVar16;
    piVar16 = FUN_100be180();
    if (piVar16 == (int *)0x0) goto LAB_1002a473;
    iVar10 = *piVar16;
    if (iVar10 == 0) {
      FUN_1012f5b0(&local_54,(uint *)(iVar2 + 0x40),(undefined8 *)&local_88);
      goto LAB_1002a36b;
    }
    if (*(int *)(iVar10 + 0x8c) != iVar2) {
      FUN_10131ba0(&local_54,(uint *)(iVar2 + 0x40),iVar10,(undefined8 *)&local_88);
      goto LAB_1002a36b;
    }
  }
  FUN_10031740((undefined4 *)&local_54,(undefined8 *)&local_88,iVar10,0);
LAB_1002a36b:
  if (local_54._4_4_ == 0) {
    *param_1 = local_48;
    param_1[1] = local_44;
    param_1[2] = local_40;
    piVar16 = (int *)(uint *)local_54;
    pcVar17 = HeapFree_exref;
    while (piVar16 != (int *)0x0) {
      piVar18 = (int *)piVar16[3];
      if (piVar18 != (int *)0x0) {
        piVar18[4] = 0;
      }
      if (*piVar16 != 0) {
        pvVar9 = (LPVOID)piVar16[1];
        pvVar8 = GetProcessHeap();
        pcVar17 = HeapFree_exref;
        HeapFree(pvVar8,0,pvVar9);
      }
      pvVar8 = GetProcessHeap();
      (*pcVar17)(pvVar8,0,piVar16);
      piVar16 = piVar18;
    }
  }
  else {
    if (local_48 != 0) {
      local_4c = (uint *)((int)local_4c + local_40);
      *(uint *)(local_54._4_4_ + 0xc) = local_48;
      *(uint *)(local_48 + 0x10) = local_54._4_4_;
      local_54._4_4_ = local_44;
    }
    *param_1 = (uint)(uint *)local_54;
    param_1[1] = local_54._4_4_;
    param_1[2] = (uint)local_4c;
  }
  return;
LAB_1002a120:
  puVar15 = local_94;
  puVar20 = local_a4;
  puVar22 = local_b0;
  if (!bVar3) {
    puVar15 = (uint *)0x0;
    puVar20 = (uint *)0x0;
    puVar22 = (uint *)0x0;
  }
  puVar4 = local_b0;
  puVar11 = local_3c;
  puVar21 = puVar20;
  puVar19 = puVar22;
  puVar14 = puVar15;
  if ((local_38 & 1) != 0) {
LAB_1002a18b:
    puVar4 = local_b0;
    if (puVar11 == (uint *)0x0) {
      while (puVar20 = puVar21, puVar19 = puVar22, puVar14 = puVar15, local_9c != (uint *)0x0) {
        puVar11 = (uint *)local_9c[3];
        if (puVar11 != (uint *)0x0) {
          puVar11[4] = 0;
        }
        if (*local_9c != 0) {
          pvVar9 = (LPVOID)local_9c[1];
          pvVar8 = GetProcessHeap();
          pcVar17 = GetProcessHeap_exref;
          HeapFree(pvVar8,0,pvVar9);
        }
        pvVar8 = (HANDLE)(*pcVar17)();
        HeapFree(pvVar8,0,local_9c);
        puVar4 = puVar15;
        local_9c = puVar11;
      }
    }
    else {
      puVar20 = puVar11;
      puVar19 = local_9c;
      puVar14 = local_98;
      if (puVar22 != (uint *)0x0) {
        puVar11[3] = (uint)puVar22;
        puVar22[4] = (uint)puVar11;
        puVar20 = puVar21;
        puVar14 = (uint *)((int)local_98 + (int)puVar15);
      }
    }
  }
LAB_10029d2a:
  local_98 = puVar14;
  local_9c = puVar19;
  local_38 = CONCAT31((int3)((uint)puVar4 >> 8),1);
  param_6 = local_2c + 1;
  puVar11 = puVar20;
  if (param_6 == local_30) {
    *param_1 = (uint)local_9c;
    param_1[1] = (uint)puVar20;
    param_1[2] = (uint)local_98;
    return;
  }
  goto LAB_10029d47;
}
