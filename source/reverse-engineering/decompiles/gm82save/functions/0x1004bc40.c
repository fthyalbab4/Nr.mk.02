// rea decompile_all
// name: FUN_1004bc40
// address: 0x1004bc40
// body: available
// range: 0x1004bc40-0x1004bd8b inclusive
// range: 0x1004bd90-0x1004bdca inclusive
// range: 0x1004bdd0-0x1004bea6 inclusive
// range: 0x1004beb0-0x1004beee inclusive
// range: 0x1004bef0-0x1004bf9d inclusive
// range: 0x1004bfa0-0x1004bffb inclusive
// range: 0x1004c000-0x1004c03a inclusive
// range: 0x1004c040-0x1004c116 inclusive
// range: 0x1004c120-0x1004c15e inclusive
// range: 0x1004c160-0x1004c20d inclusive
// range: 0x1004c210-0x1004c25b inclusive
// range: 0x1004c260-0x1004c29a inclusive
// range: 0x1004c2a0-0x1004c376 inclusive
// range: 0x1004c380-0x1004c3be inclusive
// range: 0x1004c3c0-0x1004c484 inclusive
// range: 0x1004c490-0x1004c539 inclusive
// range: 0x1004c540-0x1004c57a inclusive
// range: 0x1004c580-0x1004c619 inclusive
// range: 0x1004c620-0x1004c65a inclusive
// range: 0x1004c660-0x1004c6f9 inclusive
// range: 0x1004c700-0x1004c73a inclusive
// range: 0x1004c740-0x1004c8cb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __fastcall FUN_1004bc40(undefined4 *param_1,byte *param_2)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  HANDLE hHeap;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined1 (*pauVar15) [16];
  byte *pbVar16;
  byte bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar20;
  byte *local_90;
  byte *local_8c;
  byte *local_88;
  byte *local_84;
  byte *local_80;
  byte *local_7c;
  byte *local_78;
  byte *local_74;
  undefined1 (*local_70) [16];
  undefined4 *local_6c;
  byte *local_68;
  byte *local_64;
  byte *local_60;
  byte *local_5c;
  uint local_58;
  int local_54;
  uint local_50;
  byte *local_4c;
  int local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  undefined1 local_30 [16];
  char local_20;
  char cStack_1f;
  char cStack_1e;
  char cStack_1d;
  char cStack_1c;
  char cStack_1b;
  char cStack_1a;
  char cStack_19;
  char cStack_18;
  char cStack_17;
  char cStack_16;
  char cStack_15;
  char cStack_14;
  char cStack_13;
  char cStack_12;
  byte bStack_11;

  uVar20 = FUN_1002d2b0((int *)param_1[4],param_1[5],param_1[6],param_1[7],(int *)param_2);
  if (param_1[2] == 0) {
    FUN_101321a0(param_1,param_1 + 4);
  }
  local_58 = param_1[1];
  local_40 = *(int *)(param_2 + 0xc);
  pauVar15 = (undefined1 (*) [16])*param_1;
  bVar5 = *param_2;
  local_54 = 0;
  local_48 = 0;
  local_50 = local_58 & (uint)uVar20;
  local_38 = (uint)uVar20 >> 0x19;
  local_5c = *(byte **)(param_2 + 8);
  bVar17 = (byte)((ulonglong)uVar20 >> 0x18) >> 1;
  auVar18 = ZEXT216(CONCAT11(bVar17,bVar17));
  auVar18 = pshuflw(auVar18,auVar18,0);
  local_30._0_8_ = auVar18._0_8_;
  local_30._8_4_ = auVar18._0_4_;
  local_30._12_4_ = auVar18._4_4_;
  local_4c = local_5c + local_40;
  local_70 = pauVar15;
  local_6c = param_1;
  local_68 = param_2;
  do {
    pcVar1 = *pauVar15 + local_50;
    local_20 = *pcVar1;
    cStack_1f = pcVar1[1];
    cStack_1e = pcVar1[2];
    cStack_1d = pcVar1[3];
    cStack_1c = pcVar1[4];
    cStack_1b = pcVar1[5];
    cStack_1a = pcVar1[6];
    cStack_19 = pcVar1[7];
    cStack_18 = pcVar1[8];
    cStack_17 = pcVar1[9];
    cStack_16 = pcVar1[10];
    cStack_15 = pcVar1[0xb];
    cStack_14 = pcVar1[0xc];
    cStack_13 = pcVar1[0xd];
    cStack_12 = pcVar1[0xe];
    bStack_11 = pcVar1[0xf];
    auVar18[0] = -(local_20 == local_30[0]);
    auVar18[1] = -(cStack_1f == local_30[1]);
    auVar18[2] = -(cStack_1e == local_30[2]);
    auVar18[3] = -(cStack_1d == local_30[3]);
    auVar18[4] = -(cStack_1c == local_30[4]);
    auVar18[5] = -(cStack_1b == local_30[5]);
    auVar18[6] = -(cStack_1a == local_30[6]);
    auVar18[7] = -(cStack_19 == local_30[7]);
    auVar18[8] = -(cStack_18 == local_30[8]);
    auVar18[9] = -(cStack_17 == local_30[9]);
    auVar18[10] = -(cStack_16 == local_30[10]);
    auVar18[0xb] = -(cStack_15 == local_30[0xb]);
    auVar18[0xc] = -(cStack_14 == local_30[0xc]);
    auVar18[0xd] = -(cStack_13 == local_30[0xd]);
    auVar18[0xe] = -(cStack_12 == local_30[0xe]);
    auVar18[0xf] = -(bStack_11 == local_30[0xf]);
    local_44 = (uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar18[0xf] >> 7) << 0xf);
LAB_1004bce9:
    local_34 = local_44;
    if ((short)local_44 != 0) {
      iVar9 = 0;
      for (uVar7 = local_44; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        iVar9 = iVar9 + 1;
      }
      uVar6 = iVar9 + local_50 & local_58;
      uVar7 = local_44 - 1 & local_44;
      if (bVar5 != 0) {
        local_8c = *(byte **)(pauVar15[-1 - uVar6] + 8);
        pbVar12 = (byte *)0xffffffff;
        local_84 = local_8c + *(int *)(pauVar15[-1 - uVar6] + 0xc);
        local_64 = local_84;
        if (pauVar15[-1 - uVar6][0] == '\0') {
          pbVar14 = (byte *)0xffffffff;
          pbVar11 = local_5c;
          pbVar13 = param_2;
joined_r0x1004c220:
          do {
            local_44 = uVar7;
            pbVar10 = local_90;
            pbVar3 = local_68;
            pbVar4 = local_68;
            if (pbVar14 != (byte *)0xffffffff) {
              pbVar8 = pbVar14 + -0x110000;
              if (pbVar14 < (byte *)0x110000) {
                pbVar8 = (byte *)0x3;
              }
              if (pbVar8 != (byte *)0x0) {
                pbVar16 = pbVar13;
                if (pbVar8 == (byte *)0x1) {
                  local_80 = (byte *)0x110000;
                  pbVar8 = pbVar13;
                }
                else if (pbVar8 == (byte *)0x2) {
                  local_80 = (byte *)0x110001;
                  pbVar8 = local_84;
                }
                else {
                  local_80 = (byte *)0x110002;
                  pbVar8 = pbVar14;
                  pbVar16 = local_84;
                  local_84 = pbVar13;
                }
                pbVar14 = pbVar12;
                pbVar13 = local_88;
                param_2 = local_68;
                if (pbVar16 != (byte *)0xffffffff) {
                  do {
                    local_60 = pbVar16;
                    local_88 = pbVar13;
                    local_90 = pbVar10;
                    param_1 = local_6c;
                    pauVar15 = local_70;
                    local_68 = param_2;
                    if (pbVar14 != (byte *)0xffffffff) {
                      pbVar12 = pbVar14 + -0x110000;
                      if (pbVar14 < (byte *)0x110000) {
                        pbVar12 = (byte *)0x3;
                      }
                      if (pbVar12 != (byte *)0x0) goto LAB_1004c410;
                    }
                    if (local_8c == local_64) goto LAB_1004bce9;
                    bVar17 = *local_8c;
                    uVar7 = (uint)bVar17;
                    if ((char)bVar17 < '\0') {
                      pbVar12 = local_8c + 1;
                      if (bVar17 < 0xe0) {
                        local_8c = local_8c + 2;
                        uVar7 = (uVar7 & 0x1f) << 6 | *pbVar12 & 0x3f;
                      }
                      else {
                        uVar6 = local_8c[2] & 0x3f | (*pbVar12 & 0x3f) << 6;
                        if (bVar17 < 0xf0) {
                          local_8c = local_8c + 3;
                          uVar7 = uVar6 | (uVar7 & 0x1f) << 0xc;
                        }
                        else {
                          pbVar12 = local_8c + 3;
                          local_8c = local_8c + 4;
                          uVar7 = *pbVar12 & 0x3f | uVar6 << 6 | (uVar7 & 7) << 0x12;
                        }
                      }
                    }
                    else {
                      local_8c = local_8c + 1;
                    }
                    FUN_1011fc20(&local_7c,uVar7);
                    param_2 = local_68;
                    param_1 = local_6c;
                    pauVar15 = local_70;
                    pbVar14 = local_7c;
                    pbVar16 = local_60;
                    pbVar10 = local_78;
                    pbVar13 = local_74;
                    if (local_7c == (byte *)0xffffffff) goto LAB_1004bce9;
                  } while( true );
                }
                break;
              }
            }
            if (pbVar11 == local_4c) break;
            bVar17 = *pbVar11;
            uVar7 = (uint)bVar17;
            if ((char)bVar17 < '\0') {
              pbVar14 = pbVar11 + 1;
              if (bVar17 < 0xe0) {
                pbVar11 = pbVar11 + 2;
                uVar7 = (uVar7 & 0x1f) << 6 | *pbVar14 & 0x3f;
              }
              else {
                uVar6 = pbVar11[2] & 0x3f | (*pbVar14 & 0x3f) << 6;
                if (bVar17 < 0xf0) {
                  pbVar11 = pbVar11 + 3;
                  uVar7 = uVar6 | (uVar7 & 0x1f) << 0xc;
                }
                else {
                  pbVar14 = pbVar11 + 3;
                  pbVar11 = pbVar11 + 4;
                  uVar7 = *pbVar14 & 0x3f | uVar6 << 6 | (uVar7 & 7) << 0x12;
                }
              }
            }
            else {
              pbVar11 = pbVar11 + 1;
            }
            FUN_1011fc20(&local_7c,uVar7);
            local_84 = local_74;
            pbVar14 = local_7c;
            pbVar13 = local_78;
            uVar7 = local_44;
            pbVar3 = local_68;
            pbVar4 = local_68;
          } while (local_7c != (byte *)0xffffffff);
          goto joined_r0x1004c5e3;
        }
        pbVar14 = (byte *)0xffffffff;
        pbVar11 = local_5c;
        pbVar13 = param_2;
joined_r0x1004bd51:
        do {
          local_44 = uVar7;
          pbVar10 = local_90;
          pbVar3 = local_68;
          pbVar4 = local_68;
          if (pbVar14 != (byte *)0xffffffff) {
            pbVar8 = pbVar14 + -0x110000;
            if (pbVar14 < (byte *)0x110000) {
              pbVar8 = (byte *)0x3;
            }
            if (pbVar8 != (byte *)0x0) {
              pbVar16 = pbVar13;
              if (pbVar8 == (byte *)0x1) {
                local_80 = (byte *)0x110000;
                pbVar8 = pbVar13;
              }
              else if (pbVar8 == (byte *)0x2) {
                local_80 = (byte *)0x110001;
                pbVar8 = local_84;
              }
              else {
                local_80 = (byte *)0x110002;
                pbVar8 = pbVar14;
                pbVar16 = local_84;
                local_84 = pbVar13;
              }
              pbVar14 = pbVar12;
              pbVar13 = local_88;
              param_2 = local_68;
              if (pbVar16 != (byte *)0xffffffff) {
                do {
                  local_60 = pbVar16;
                  local_88 = pbVar13;
                  local_90 = pbVar10;
                  param_1 = local_6c;
                  pauVar15 = local_70;
                  local_68 = param_2;
                  if (pbVar14 != (byte *)0xffffffff) {
                    pbVar12 = pbVar14 + -0x110000;
                    if (pbVar14 < (byte *)0x110000) {
                      pbVar12 = (byte *)0x3;
                    }
                    if (pbVar12 != (byte *)0x0) goto LAB_1004bf44;
                  }
                  if (local_8c == local_64) goto LAB_1004bce9;
                  bVar17 = *local_8c;
                  uVar7 = (uint)bVar17;
                  if ((char)bVar17 < '\0') {
                    pbVar12 = local_8c + 1;
                    if (bVar17 < 0xe0) {
                      local_8c = local_8c + 2;
                      uVar7 = (uVar7 & 0x1f) << 6 | *pbVar12 & 0x3f;
                    }
                    else {
                      uVar6 = local_8c[2] & 0x3f | (*pbVar12 & 0x3f) << 6;
                      if (bVar17 < 0xf0) {
                        local_8c = local_8c + 3;
                        uVar7 = uVar6 | (uVar7 & 0x1f) << 0xc;
                      }
                      else {
                        pbVar12 = local_8c + 3;
                        local_8c = local_8c + 4;
                        uVar7 = *pbVar12 & 0x3f | uVar6 << 6 | (uVar7 & 7) << 0x12;
                      }
                    }
                  }
                  else {
                    local_8c = local_8c + 1;
                  }
                  FUN_1011fc20(&local_7c,uVar7);
                  param_2 = local_68;
                  param_1 = local_6c;
                  pauVar15 = local_70;
                  pbVar14 = local_7c;
                  pbVar16 = local_60;
                  pbVar10 = local_78;
                  pbVar13 = local_74;
                  if (local_7c == (byte *)0xffffffff) goto LAB_1004bce9;
                } while( true );
              }
              break;
            }
          }
          if (pbVar11 == local_4c) break;
          bVar17 = *pbVar11;
          uVar7 = (uint)bVar17;
          if ((char)bVar17 < '\0') {
            pbVar14 = pbVar11 + 1;
            if (bVar17 < 0xe0) {
              pbVar11 = pbVar11 + 2;
              uVar7 = (uVar7 & 0x1f) << 6 | *pbVar14 & 0x3f;
            }
            else {
              uVar6 = pbVar11[2] & 0x3f | (*pbVar14 & 0x3f) << 6;
              if (bVar17 < 0xf0) {
                pbVar11 = pbVar11 + 3;
                uVar7 = uVar6 | (uVar7 & 0x1f) << 0xc;
              }
              else {
                pbVar14 = pbVar11 + 3;
                pbVar11 = pbVar11 + 4;
                uVar7 = *pbVar14 & 0x3f | uVar6 << 6 | (uVar7 & 7) << 0x12;
              }
            }
          }
          else {
            pbVar11 = pbVar11 + 1;
          }
          FUN_1011fc20(&local_7c,uVar7);
          local_84 = local_74;
          pbVar14 = local_7c;
          pbVar13 = local_78;
          uVar7 = local_44;
          pbVar3 = local_68;
          pbVar4 = local_68;
        } while (local_7c != (byte *)0xffffffff);
        goto joined_r0x1004c6c3;
      }
      if (pauVar15[-1 - uVar6][0] != '\0') {
        local_8c = *(byte **)(pauVar15[-1 - uVar6] + 8);
        pbVar13 = (byte *)0xffffffff;
        local_84 = local_8c + *(int *)(pauVar15[-1 - uVar6] + 0xc);
        pbVar12 = (byte *)0xffffffff;
        pbVar14 = local_5c;
        pbVar11 = param_2;
        local_64 = local_84;
joined_r0x1004bfcd:
        do {
          local_44 = uVar7;
          pbVar10 = local_90;
          pbVar3 = local_68;
          pbVar4 = local_68;
          if (pbVar12 != (byte *)0xffffffff) {
            pbVar8 = pbVar12 + -0x110000;
            if (pbVar12 < (byte *)0x110000) {
              pbVar8 = (byte *)0x3;
            }
            if (pbVar8 != (byte *)0x0) {
              pbVar16 = pbVar11;
              if (pbVar8 == (byte *)0x1) {
                local_80 = (byte *)0x110000;
                pbVar8 = pbVar11;
              }
              else if (pbVar8 == (byte *)0x2) {
                local_80 = (byte *)0x110001;
                pbVar8 = local_84;
              }
              else {
                local_80 = (byte *)0x110002;
                pbVar8 = pbVar12;
                pbVar16 = local_84;
                local_84 = pbVar11;
              }
              pbVar12 = pbVar13;
              pbVar11 = local_88;
              param_2 = local_68;
              if (pbVar16 != (byte *)0xffffffff) {
                do {
                  local_60 = pbVar16;
                  local_88 = pbVar11;
                  local_90 = pbVar10;
                  param_1 = local_6c;
                  pauVar15 = local_70;
                  local_68 = param_2;
                  if (pbVar12 != (byte *)0xffffffff) {
                    pbVar13 = pbVar12 + -0x110000;
                    if (pbVar12 < (byte *)0x110000) {
                      pbVar13 = (byte *)0x3;
                    }
                    if (pbVar13 != (byte *)0x0) goto LAB_1004c1b4;
                  }
                  if (local_8c == local_64) goto LAB_1004bce9;
                  bVar17 = *local_8c;
                  uVar7 = (uint)bVar17;
                  if ((char)bVar17 < '\0') {
                    pbVar12 = local_8c + 1;
                    if (bVar17 < 0xe0) {
                      local_8c = local_8c + 2;
                      uVar7 = (uVar7 & 0x1f) << 6 | *pbVar12 & 0x3f;
                    }
                    else {
                      uVar6 = local_8c[2] & 0x3f | (*pbVar12 & 0x3f) << 6;
                      if (bVar17 < 0xf0) {
                        local_8c = local_8c + 3;
                        uVar7 = uVar6 | (uVar7 & 0x1f) << 0xc;
                      }
                      else {
                        pbVar12 = local_8c + 3;
                        local_8c = local_8c + 4;
                        uVar7 = *pbVar12 & 0x3f | uVar6 << 6 | (uVar7 & 7) << 0x12;
                      }
                    }
                  }
                  else {
                    local_8c = local_8c + 1;
                  }
                  FUN_1011fc20(&local_7c,uVar7);
                  param_2 = local_68;
                  param_1 = local_6c;
                  pauVar15 = local_70;
                  pbVar12 = local_7c;
                  pbVar16 = local_60;
                  pbVar10 = local_78;
                  pbVar11 = local_74;
                  if (local_7c == (byte *)0xffffffff) goto LAB_1004bce9;
                } while( true );
              }
              break;
            }
          }
          if (pbVar14 == local_4c) break;
          bVar17 = *pbVar14;
          uVar7 = (uint)bVar17;
          if ((char)bVar17 < '\0') {
            pbVar12 = pbVar14 + 1;
            if (bVar17 < 0xe0) {
              pbVar14 = pbVar14 + 2;
              uVar7 = (uVar7 & 0x1f) << 6 | *pbVar12 & 0x3f;
            }
            else {
              uVar6 = pbVar14[2] & 0x3f | (*pbVar12 & 0x3f) << 6;
              if (bVar17 < 0xf0) {
                pbVar14 = pbVar14 + 3;
                uVar7 = uVar6 | (uVar7 & 0x1f) << 0xc;
              }
              else {
                pbVar12 = pbVar14 + 3;
                pbVar14 = pbVar14 + 4;
                uVar7 = *pbVar12 & 0x3f | uVar6 << 6 | (uVar7 & 7) << 0x12;
              }
            }
          }
          else {
            pbVar14 = pbVar14 + 1;
          }
          FUN_1011fc20(&local_7c,uVar7);
          local_84 = local_74;
          pbVar12 = local_7c;
          pbVar11 = local_78;
          uVar7 = local_44;
          pbVar3 = local_68;
          pbVar4 = local_68;
        } while (local_7c != (byte *)0xffffffff);
        goto joined_r0x1004c502;
      }
      local_44 = uVar7;
      if (local_40 == *(int *)(pauVar15[-1 - uVar6] + 0xc)) {
        iVar9 = 0;
        do {
          if (local_40 == iVar9) goto LAB_1004c82d;
          pbVar12 = local_5c + iVar9;
          bVar17 = *(byte *)(*(int *)(pauVar15[-1 - uVar6] + 8) + iVar9);
          iVar9 = iVar9 + 1;
        } while ((byte)(((byte)(*pbVar12 + 0xbf) < 0x1a) << 5 | *pbVar12) ==
                 (byte)(((byte)(bVar17 + 0xbf) < 0x1a) << 5 | bVar17));
      }
      goto LAB_1004bce9;
    }
    auVar2[1] = cStack_1f;
    auVar2[0] = local_20;
    auVar2[2] = cStack_1e;
    auVar2[3] = cStack_1d;
    auVar2[4] = cStack_1c;
    auVar2[5] = cStack_1b;
    auVar2[6] = cStack_1a;
    auVar2[7] = cStack_19;
    auVar2[8] = cStack_18;
    auVar2[9] = cStack_17;
    auVar2[10] = cStack_16;
    auVar2[0xb] = cStack_15;
    auVar2[0xc] = cStack_14;
    auVar2[0xd] = cStack_13;
    auVar2[0xe] = cStack_12;
    auVar2[0xf] = bStack_11;
    if (local_54 == 1) {
LAB_1004c7ed:
      auVar19[0] = -(local_20 == -1);
      auVar19[1] = -(cStack_1f == -1);
      auVar19[2] = -(cStack_1e == -1);
      auVar19[3] = -(cStack_1d == -1);
      auVar19[4] = -(cStack_1c == -1);
      auVar19[5] = -(cStack_1b == -1);
      auVar19[6] = -(cStack_1a == -1);
      auVar19[7] = -(cStack_19 == -1);
      auVar19[8] = -(cStack_18 == -1);
      auVar19[9] = -(cStack_17 == -1);
      auVar19[10] = -(cStack_16 == -1);
      auVar19[0xb] = -(cStack_15 == -1);
      auVar19[0xc] = -(cStack_14 == -1);
      auVar19[0xd] = -(cStack_13 == -1);
      auVar19[0xe] = -(cStack_12 == -1);
      auVar19[0xf] = -(bStack_11 == 0xff);
      if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar19 >> 0x17,0) & 1) != 0) || (SUB161(auVar19 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar19 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar19 >> 0x3f,0) & 1) != 0) || (SUB161(auVar19 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar19 >> 0x4f,0) & 1) != 0) || (SUB161(auVar19 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar19 >> 0x5f,0) & 1) != 0) || (SUB161(auVar19 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar19 >> 0x6f,0) & 1) != 0) || (SUB161(auVar19 >> 0x77,0) & 1) != 0) ||
          auVar19[0xf] < '\0') {
        bVar5 = (*pauVar15)[local_3c];
        if (-1 < (char)bVar5) {
          auVar18 = *pauVar15;
          local_3c = 0;
          for (uVar7 = (uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar18[0xf] >> 7) << 0xf); (uVar7 & 1) == 0;
              uVar7 = uVar7 >> 1 | 0x80000000) {
            local_3c = local_3c + 1;
          }
          bVar5 = (*pauVar15)[local_3c];
        }
        param_1[2] = param_1[2] - (uint)(bVar5 & 1);
        (*pauVar15)[local_3c] = (char)local_38;
        pauVar15[1][local_58 & local_3c - 0x10] = (char)local_38;
        param_1[3] = param_1[3] + 1;
        uVar20 = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)pauVar15[-1 - local_3c] = *(undefined8 *)param_2;
        *(undefined8 *)(pauVar15[-1 - local_3c] + 8) = uVar20;
LAB_1004c846:
        return (short)local_34 != 0;
      }
      local_54 = 1;
    }
    else {
      uVar7 = (uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                            (ushort)(bStack_11 >> 7) << 0xf);
      if (uVar7 != 0) {
        iVar9 = 0;
        for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          iVar9 = iVar9 + 1;
        }
        local_3c = iVar9 + local_50 & local_58;
        goto LAB_1004c7ed;
      }
      local_54 = 0;
    }
    iVar9 = local_48 + 0x10;
    local_48 = local_48 + 0x10;
    local_50 = iVar9 + local_50 & local_58;
  } while( true );
LAB_1004c410:
  if (pbVar12 == (byte *)0x1) {
    pbVar12 = (byte *)0x110000;
  }
  else if (pbVar12 == (byte *)0x2) {
    pbVar12 = (byte *)0x110001;
    local_90 = pbVar13;
  }
  else {
    pbVar12 = (byte *)0x110002;
    local_88 = pbVar10;
    pbVar10 = pbVar13;
    local_90 = pbVar14;
  }
  pbVar14 = local_80;
  pbVar13 = pbVar8;
  uVar7 = local_44;
  if (local_60 != pbVar10) goto LAB_1004bce9;
  goto joined_r0x1004c220;
joined_r0x1004c5e3:
  local_68 = pbVar4;
  param_2 = local_68;
  local_68 = pbVar3;
  if (pbVar12 != (byte *)0xffffffff) {
    pbVar14 = pbVar12 + -0x110000;
    if (pbVar12 < (byte *)0x110000) {
      pbVar14 = (byte *)0x3;
    }
    if (pbVar14 != (byte *)0x0) goto LAB_1004c790;
  }
  if (local_8c == local_64) goto LAB_1004c82d;
  bVar17 = *local_8c;
  uVar7 = (uint)bVar17;
  if ((char)bVar17 < '\0') {
    pbVar12 = local_8c + 1;
    if (bVar17 < 0xe0) {
      local_8c = local_8c + 2;
      uVar7 = (uVar7 & 0x1f) << 6 | *pbVar12 & 0x3f;
    }
    else {
      uVar6 = local_8c[2] & 0x3f | (*pbVar12 & 0x3f) << 6;
      if (bVar17 < 0xf0) {
        local_8c = local_8c + 3;
        uVar7 = uVar6 | (uVar7 & 0x1f) << 0xc;
      }
      else {
        pbVar12 = local_8c + 3;
        local_8c = local_8c + 4;
        uVar7 = *pbVar12 & 0x3f | uVar6 << 6 | (uVar7 & 7) << 0x12;
      }
    }
  }
  else {
    local_8c = local_8c + 1;
  }
  FUN_1011fc20(&local_7c,uVar7);
  pbVar12 = local_7c;
  pbVar10 = local_78;
  local_88 = local_74;
  pbVar3 = local_68;
  pbVar4 = param_2;
  if (local_7c == (byte *)0xffffffff) goto LAB_1004c82d;
  goto joined_r0x1004c5e3;
LAB_1004bf44:
  if (pbVar12 == (byte *)0x1) {
    pbVar12 = (byte *)0x110000;
  }
  else if (pbVar12 == (byte *)0x2) {
    pbVar12 = (byte *)0x110001;
    local_90 = pbVar13;
  }
  else {
    pbVar12 = (byte *)0x110002;
    local_88 = pbVar10;
    pbVar10 = pbVar13;
    local_90 = pbVar14;
  }
  pbVar14 = local_80;
  pbVar13 = pbVar8;
  uVar7 = local_44;
  if (local_60 != pbVar10) goto LAB_1004bce9;
  goto joined_r0x1004bd51;
joined_r0x1004c6c3:
  local_68 = pbVar4;
  param_2 = local_68;
  local_68 = pbVar3;
  if (pbVar12 != (byte *)0xffffffff) {
    pbVar14 = pbVar12 + -0x110000;
    if (pbVar12 < (byte *)0x110000) {
      pbVar14 = (byte *)0x3;
    }
    if (pbVar14 != (byte *)0x0) goto LAB_1004c790;
  }
  if (local_8c == local_64) goto LAB_1004c82d;
  bVar17 = *local_8c;
  uVar7 = (uint)bVar17;
  if ((char)bVar17 < '\0') {
    pbVar12 = local_8c + 1;
    if (bVar17 < 0xe0) {
      local_8c = local_8c + 2;
      uVar7 = (uVar7 & 0x1f) << 6 | *pbVar12 & 0x3f;
    }
    else {
      uVar6 = local_8c[2] & 0x3f | (*pbVar12 & 0x3f) << 6;
      if (bVar17 < 0xf0) {
        local_8c = local_8c + 3;
        uVar7 = uVar6 | (uVar7 & 0x1f) << 0xc;
      }
      else {
        pbVar12 = local_8c + 3;
        local_8c = local_8c + 4;
        uVar7 = *pbVar12 & 0x3f | uVar6 << 6 | (uVar7 & 7) << 0x12;
      }
    }
  }
  else {
    local_8c = local_8c + 1;
  }
  FUN_1011fc20(&local_7c,uVar7);
  pbVar12 = local_7c;
  pbVar10 = local_78;
  local_88 = local_74;
  pbVar3 = local_68;
  pbVar4 = param_2;
  if (local_7c == (byte *)0xffffffff) goto LAB_1004c82d;
  goto joined_r0x1004c6c3;
LAB_1004c1b4:
  if (pbVar13 == (byte *)0x1) {
    pbVar13 = (byte *)0x110000;
  }
  else if (pbVar13 == (byte *)0x2) {
    pbVar13 = (byte *)0x110001;
    local_90 = pbVar11;
  }
  else {
    pbVar13 = (byte *)0x110002;
    local_88 = pbVar10;
    pbVar10 = pbVar11;
    local_90 = pbVar12;
  }
  pbVar12 = local_80;
  pbVar11 = pbVar8;
  uVar7 = local_44;
  if (local_60 != pbVar10) goto LAB_1004bce9;
  goto joined_r0x1004bfcd;
joined_r0x1004c502:
  local_68 = pbVar4;
  param_2 = local_68;
  local_68 = pbVar3;
  if (pbVar13 != (byte *)0xffffffff) {
    pbVar14 = pbVar13 + -0x110000;
    if (pbVar13 < (byte *)0x110000) {
      pbVar14 = (byte *)0x3;
    }
    if (pbVar14 != (byte *)0x0) goto LAB_1004c790;
  }
  if (local_8c == local_64) goto LAB_1004c82d;
  bVar17 = *local_8c;
  uVar7 = (uint)bVar17;
  if ((char)bVar17 < '\0') {
    pbVar12 = local_8c + 1;
    if (bVar17 < 0xe0) {
      local_8c = local_8c + 2;
      uVar7 = (uVar7 & 0x1f) << 6 | *pbVar12 & 0x3f;
    }
    else {
      uVar6 = local_8c[2] & 0x3f | (*pbVar12 & 0x3f) << 6;
      if (bVar17 < 0xf0) {
        local_8c = local_8c + 3;
        uVar7 = uVar6 | (uVar7 & 0x1f) << 0xc;
      }
      else {
        pbVar12 = local_8c + 3;
        local_8c = local_8c + 4;
        uVar7 = *pbVar12 & 0x3f | uVar6 << 6 | (uVar7 & 7) << 0x12;
      }
    }
  }
  else {
    local_8c = local_8c + 1;
  }
  FUN_1011fc20(&local_7c,uVar7);
  pbVar13 = local_7c;
  pbVar10 = local_78;
  local_88 = local_74;
  pbVar3 = local_68;
  pbVar4 = param_2;
  if (local_7c == (byte *)0xffffffff) goto LAB_1004c82d;
  goto joined_r0x1004c502;
LAB_1004c790:
  pbVar12 = local_88;
  if (pbVar14 + -1 < (byte *)0x2) {
    pbVar12 = pbVar10;
  }
  param_1 = local_6c;
  pauVar15 = local_70;
  if (pbVar12 == (byte *)0xffffffff) {
LAB_1004c82d:
    if (*(int *)(param_2 + 4) != 0) {
      hHeap = GetProcessHeap();
      HeapFree(hHeap,0,local_5c);
    }
    goto LAB_1004c846;
  }
  goto LAB_1004bce9;
}
