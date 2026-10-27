// rea decompile_all
// name: FUN_10056cd0
// address: 0x10056cd0
// body: available
// range: 0x10056cd0-0x10057013 inclusive
// range: 0x10057020-0x1005705c inclusive
// range: 0x10057060-0x10057081 inclusive
// range: 0x10057090-0x1005728d inclusive
// range: 0x10057290-0x1005737a inclusive
// range: 0x10057380-0x100575d6 inclusive
// range: 0x100575e0-0x100577a6 inclusive
// range: 0x100577b0-0x100577c6 inclusive
// range: 0x100577d0-0x10057ac8 inclusive
// range: 0x10057ad0-0x10057b13 inclusive
// range: 0x10057b20-0x10057b45 inclusive
// range: 0x10057b50-0x10057c73 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_10056cd0(undefined4 *param_1,byte *param_2,uint param_3,char param_4,uint *param_5)

{
  SIZE_T _Size;
  void *pvVar1;
  int iVar2;
  undefined1 auVar3 [16];
  int *piVar4;
  undefined1 (*pauVar5) [16];
  LPVOID pvVar6;
  int *piVar7;
  HANDLE pvVar8;
  uint *puVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  byte bVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  byte bVar22;
  uint uVar23;
  uint extraout_EDX;
  uint extraout_EDX_00;
  code *pcVar24;
  uint uVar25;
  uint uVar26;
  byte *pbVar27;
  uint uVar28;
  undefined4 *puVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  bool bVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  uint local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_dc;
  undefined8 local_d0;
  undefined8 local_c8;
  uint local_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint local_ac;
  int *local_a8;
  int *local_a4;
  undefined1 local_a0 [28];
  byte *local_84;
  int *local_80;
  int *local_7c;
  int *local_78;
  uint local_74;
  undefined1 local_70 [16];
  int *local_60;
  int *piStack_5c;
  int local_58;
  int *local_54;
  int *local_50;
  uint local_4c;
  int local_48;
  SIZE_T local_44;
  undefined4 *local_40;
  int local_3c;
  int *local_38;
  int *local_34;
  int local_30;
  undefined4 local_2c;
  int *piStack_28;
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  undefined1 local_14 [4];

  if (param_4 == '\0') {
    puVar9 = FUN_10093010();
    if (puVar9 != (uint *)0x0) {
      *(undefined8 *)(param_1 + 4) = 0;
      *(undefined8 *)(param_1 + 2) = 0x10159670;
      uVar28 = *puVar9;
      uVar18 = puVar9[1];
      uVar25 = puVar9[2];
      uVar31 = puVar9[3];
      puVar9[1] = puVar9[1] + (uint)(0xfffffffe < uVar28);
      *puVar9 = uVar28 + 1;
      param_1[6] = uVar28;
      param_1[7] = uVar18;
      param_1[8] = uVar25;
      param_1[9] = uVar31;
      param_1[10] = 0;
      param_1[0xb] = 4;
      param_1[0xc] = 0;
      *param_1 = 0;
      return;
    }
    goto LAB_10057206;
  }
  FUN_10111020(param_5,param_2,param_3);
  FUN_10111020(param_5,&DAT_1013f4f5,9);
  local_84 = (byte *)param_5[1];
  _Size = param_5[2];
  FUN_1011c880(&local_d0,(int)local_84,_Size);
  local_54 = local_d0._4_4_;
  if ((undefined1 (*) [16])local_d0 == (undefined1 (*) [16])0xffffffff) {
    if (_Size == 0) {
      pvVar6 = (LPVOID)0x1;
    }
    else {
      pvVar6 = FUN_10107380(0,_Size);
      if (pvVar6 == (LPVOID)0x0) {
        FUN_101366bc(1);
                    /* WARNING: Does not return */
        pcVar24 = (code *)invalidInstructionException();
        (*pcVar24)();
      }
      memcpy(pvVar6,local_84,_Size);
    }
    param_1[5] = pvVar6;
    param_1[6] = _Size;
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    param_1[2] = local_d0._4_4_;
    param_1[3] = (uint)local_c8;
    param_1[4] = _Size;
    *param_1 = 1;
    return;
  }
  local_48 = (int)(undefined1 (*) [16])local_d0;
  local_ac = 0;
  local_a8 = (int *)&DAT_00000004;
  local_a4 = (int *)0x0;
  piStack_28 = local_d0._4_4_;
  local_24 = (uint)local_c8;
  local_2c = 10;
  local_1c = local_d0._4_4_;
  local_18 = (uint)local_c8;
  local_58 = (uint)local_c8;
  local_60 = (int *)0xa;
  piStack_5c = local_d0._4_4_;
  if ((uint)local_c8 == 0) {
    bVar34 = true;
  }
  else {
    bVar34 = *(char *)((int)local_d0._4_4_ + (uint)local_c8 + -1) == '\n';
  }
  local_d0 = CONCAT44((uint)local_c8,local_d0._4_4_);
  local_c8 = CONCAT44((uint)local_c8,&local_2c);
  local_c0 = CONCAT31(local_c0._1_3_,bVar34);
  local_44 = _Size;
  local_40 = param_1;
  piVar7 = FUN_100be180();
  if (piVar7 == (int *)0x0) goto LAB_10057206;
  if (*piVar7 == 0) {
    piVar7 = FUN_100c0800();
  }
  else {
    piVar7 = (int *)(*piVar7 + 0x8c);
  }
  FUN_100188f0((int *)&local_38,0,*(uint *)(*piVar7 + 0x104),(int *)&local_d0,(uint)local_14,
               &local_54);
  piVar10 = local_38;
  piVar7 = local_38;
  if (local_30 == 0) goto LAB_10056ff3;
  if (local_38 == (int *)0x0) goto LAB_10056ff3;
  uVar28 = 0;
  do {
    local_30 = local_30 + -1;
    uVar28 = uVar28 + piVar7[2];
    if (local_30 == 0) break;
    piVar7 = (int *)piVar7[3];
  } while (piVar7 != (int *)0x0);
  if (uVar28 != 0) {
    FUN_101359e0(&local_ac,0,uVar28,&DAT_00000004,0xc);
  }
  do {
    piVar7 = (int *)piVar10[3];
    if (piVar7 != (int *)0x0) {
      piVar7[4] = 0;
    }
    pvVar1 = (void *)piVar10[1];
    iVar15 = *piVar10;
    uVar28 = piVar10[2];
    pvVar8 = GetProcessHeap();
    HeapFree(pvVar8,0,piVar10);
    pcVar24 = HeapFree_exref;
    if (iVar15 == -1) goto joined_r0x10057006;
    if (local_ac - (int)local_a4 < uVar28) {
      FUN_101359e0(&local_ac,(uint)local_a4,uVar28,&DAT_00000004,0xc);
LAB_10056fb3:
      piVar10 = local_a4;
      memcpy(local_a8 + (int)local_a4 * 3,pvVar1,uVar28 * 0xc);
    }
    else {
      piVar10 = local_a4;
      if (uVar28 != 0) goto LAB_10056fb3;
    }
    local_a4 = (int *)((int)piVar10 + uVar28);
    if (iVar15 != 0) {
      pvVar8 = GetProcessHeap();
      HeapFree(pvVar8,0,pvVar1);
    }
LAB_10056ff3:
    piVar10 = piVar7;
  } while (piVar7 != (int *)0x0);
  goto LAB_100570af;
joined_r0x10057abb:
  while (piVar7 != (int *)0x0) {
    piVar10 = (int *)piVar7[3];
    if (piVar10 != (int *)0x0) {
      piVar10[4] = 0;
    }
    iVar15 = piVar7[2];
    iVar2 = piVar7[1];
    if (iVar15 != 0) {
      puVar29 = (undefined4 *)(iVar2 + 4);
      do {
        if (puVar29[-1] != 0) {
          pvVar6 = (LPVOID)*puVar29;
          pvVar8 = GetProcessHeap();
          pcVar24 = HeapFree_exref;
          HeapFree(pvVar8,0,pvVar6);
        }
        puVar29 = puVar29 + 4;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    if (*piVar7 != 0) {
      pvVar8 = GetProcessHeap();
      (*pcVar24)(pvVar8,0,iVar2);
    }
    pvVar8 = GetProcessHeap();
    (*pcVar24)(pvVar8,0,piVar7);
    piVar7 = piVar10;
  }
  goto LAB_10057bb4;
LAB_100577d0:
  bVar17 = (*pauVar5)[local_f8];
  if (-1 < (char)bVar17) {
    auVar36 = *pauVar5;
    local_f8 = 0;
    for (uVar18 = (uint)(ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar36[0xf] >> 7) << 0xf); (uVar18 & 1) == 0;
        uVar18 = uVar18 >> 1 | 0x80000000) {
      local_f8 = local_f8 + 1;
    }
    bVar17 = (*pauVar5)[local_f8];
  }
  bVar22 = bVar22 >> 1;
  (*pauVar5)[local_f8] = bVar22;
  pauVar5[1][local_f8 - 0x10 & uVar25] = bVar22;
  local_c8 = CONCAT44(local_c8._4_4_ + 1,(uint)local_c8 - (bVar17 & 1));
  *(int *)pauVar5[-1 - local_f8] = iVar15;
  *(void **)(pauVar5[-1 - local_f8] + 4) = pvVar1;
  *(uint *)(pauVar5[-1 - local_f8] + 8) = uVar28;
  *(int *)(pauVar5[-1 - local_f8] + 0xc) = iVar2;
  piVar4 = local_78;
joined_r0x100573ae:
  if (piVar10 == piVar4) goto LAB_10057b88;
  goto LAB_100573b4;
joined_r0x10057006:
  while (piVar7 != (int *)0x0) {
    piVar10 = (int *)piVar7[3];
    if (piVar10 != (int *)0x0) {
      piVar10[4] = 0;
    }
    iVar15 = piVar7[2];
    iVar2 = piVar7[1];
    if (iVar15 != 0) {
      puVar29 = (undefined4 *)(iVar2 + 4);
      do {
        if (puVar29[-1] != 0) {
          pvVar6 = (LPVOID)*puVar29;
          pvVar8 = GetProcessHeap();
          pcVar24 = HeapFree_exref;
          HeapFree(pvVar8,0,pvVar6);
        }
        puVar29 = puVar29 + 3;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    if (*piVar7 != 0) {
      pvVar8 = GetProcessHeap();
      (*pcVar24)(pvVar8,0,iVar2);
    }
    pvVar8 = GetProcessHeap();
    (*pcVar24)(pvVar8,0,piVar7);
    piVar7 = piVar10;
  }
LAB_100570af:
  piVar10 = local_a4;
  piVar7 = local_a8;
  uVar28 = local_ac;
  puVar9 = FUN_10093010();
  if (puVar9 != (uint *)0x0) {
    local_80 = piVar10;
    local_c8 = 0;
    local_d0 = 0x10159670;
    local_c0 = *puVar9;
    uStack_bc = puVar9[1];
    uStack_b8 = puVar9[2];
    uStack_b4 = puVar9[3];
    puVar9[1] = puVar9[1] + (uint)(0xfffffffe < local_c0);
    *puVar9 = local_c0 + 1;
    local_38 = piVar7;
    local_60 = piVar7;
    piStack_5c = piVar10;
    local_34 = piVar10;
    local_58 = 0;
    piVar10 = FUN_100be180();
    if (piVar10 != (int *)0x0) {
      local_4c = uVar28;
      if (*piVar10 == 0) {
        piVar10 = FUN_100c0800();
      }
      else {
        piVar10 = (int *)(*piVar10 + 0x8c);
      }
      uVar28 = (uint)(local_80 == (int *)0xffffffff);
      if ((uint)(local_80 == (int *)0xffffffff) < *(uint *)(*piVar10 + 0x104)) {
        uVar28 = *(uint *)(*piVar10 + 0x104);
      }
      FUN_10028020((int *)&piStack_28,(uint)local_80,'\0',uVar28,1,(int *)&local_60,&local_30);
      piVar10 = piStack_28;
      local_50 = piVar7;
      piVar7 = piStack_28;
      if (piStack_28 == (int *)0x0) goto LAB_10057bac;
      if (local_20 == 0) goto LAB_10057bac;
      uVar28 = 0;
      do {
        local_20 = local_20 + -1;
        uVar28 = uVar28 + piVar7[2];
        if (local_20 == 0) break;
        piVar7 = (int *)piVar7[3];
      } while (piVar7 != (int *)0x0);
      if (uVar28 != 0) {
        FUN_10132f60((undefined4 *)&local_d0,uVar28,&local_c0);
      }
      do {
        piVar7 = (int *)piVar10[3];
        if (piVar7 != (int *)0x0) {
          piVar7[4] = 0;
        }
        local_7c = (int *)piVar10[1];
        iVar15 = *piVar10;
        uVar28 = piVar10[2];
        pvVar8 = GetProcessHeap();
        HeapFree(pvVar8,0,piVar10);
        local_3c = iVar15;
        pcVar24 = HeapFree_exref;
        if (iVar15 == -1) goto joined_r0x10057abb;
        uVar18 = uVar28 >> 1;
        if (local_c8._4_4_ == 0) {
          uVar18 = 0;
        }
        piVar10 = local_7c;
        if ((uint)local_c8 < uVar28 - uVar18) {
          FUN_10132f60((undefined4 *)&local_d0,uVar28 - uVar18,&local_c0);
          piVar10 = local_7c;
        }
        local_7c = piVar10;
        if (uVar28 != 0) {
          local_78 = piVar10 + uVar28 * 4;
LAB_100573b4:
          local_f8 = uStack_bc ^ 0x6c796765;
          local_100 = uStack_bc ^ 0x736f6d65;
          uVar28 = piVar10[2];
          local_f4 = local_c0 ^ 0x6e657261;
          local_104 = local_c0 ^ 0x70736575;
          local_f0 = uStack_b4 ^ 0x74656462;
          local_dc = uStack_b4 ^ 0x646f7261;
          local_fc = uStack_b8 ^ 0x79746573;
          pvVar1 = (void *)piVar10[1];
          local_e8 = uStack_b8 ^ 0x6e646f6d;
          local_74 = uVar28 & 7;
          uVar18 = uVar28 & 0xfffffff8;
          if (uVar18 == 0) {
            uVar18 = 0;
            auVar36._12_4_ = 0;
            auVar36._0_12_ = local_70._4_12_;
            local_70 = auVar36 << 0x20;
            if (local_74 < 4) goto LAB_100575f6;
LAB_1005758c:
            local_ec = *(uint *)((int)pvVar1 + uVar18);
            uVar18 = 4;
            if (local_74 < 6) goto LAB_100575a1;
LAB_10057609:
            uVar31 = (uint)*(ushort *)((int)pvVar1 + uVar18 + local_70._0_4_);
            uVar25 = uVar31;
            local_a0._0_4_ = 0;
            if (uVar18 != 0) {
              uVar25 = 0;
              local_a0._0_4_ = uVar31;
            }
            uVar18 = uVar18 | 2;
            local_ec = local_ec | uVar25;
            if (uVar18 < local_74) goto LAB_10057641;
LAB_100575ad:
            if (local_74 == 0) {
              uVar18 = 0;
              local_a0._0_4_ = 0xff;
              goto LAB_10057850;
            }
          }
          else {
            uVar25 = 0;
            do {
              uVar13 = *(uint *)((int)pvVar1 + uVar25 + 4);
              local_f0 = local_f0 ^ uVar13;
              uVar21 = *(uint *)((int)pvVar1 + uVar25);
              local_fc = local_fc ^ uVar21;
              local_a0._0_4_ = uVar21;
              uVar31 = local_100 + local_dc + (uint)CARRY4(local_104,local_e8);
              uVar23 = local_f4 + local_fc;
              uVar19 = local_f8 + local_f0 + (uint)CARRY4(local_f4,local_fc);
              uVar26 = (local_e8 << 0xd | local_dc >> 0x13) ^ local_104 + local_e8;
              uVar12 = (local_dc << 0xd | local_e8 >> 0x13) ^ uVar31;
              uVar20 = (local_fc >> 0x10 | local_f0 << 0x10) ^ uVar19;
              uVar30 = (local_fc << 0x10 | local_f0 >> 0x10) ^ uVar23;
              local_f8 = uVar23 + uVar26;
              local_f4 = uVar19 + uVar12 + (uint)CARRY4(uVar23,uVar26);
              local_100 = local_104 + local_e8 + uVar20 + (uint)CARRY4(uVar31,uVar30);
              local_dc = (uVar12 << 0x11 | uVar26 >> 0xf) ^ local_f4;
              local_f0 = (uVar30 >> 0xb | uVar20 << 0x15) ^ local_100;
              local_100 = local_100 ^ uVar13;
              local_fc = (uVar30 << 0x15 | uVar20 >> 0xb) ^ uVar31 + uVar30;
              local_104 = uVar31 + uVar30 ^ uVar21;
              local_e8 = (uVar26 << 0x11 | uVar12 >> 0xf) ^ local_f8;
              uVar25 = uVar25 + 8;
            } while (uVar25 < uVar18);
            local_70._0_4_ = uVar18;
            if (3 < local_74) goto LAB_1005758c;
LAB_100575f6:
            uVar18 = 0;
            local_ec = 0;
            if (1 < local_74) goto LAB_10057609;
LAB_100575a1:
            local_a0._0_4_ = 0;
            if (local_74 <= uVar18) goto LAB_100575ad;
LAB_10057641:
            bVar22 = *(byte *)((int)pvVar1 + local_70._0_4_ + uVar18);
            bVar16 = (byte)(uVar18 << 3);
            bVar17 = bVar16 & 0x1f;
            uVar13 = (uint)bVar22 << (bVar16 & 0x1f);
            uVar31 = uVar13;
            uVar25 = 0 << bVar17 | (uint)(bVar22 >> 0x20 - bVar17);
            if ((uVar18 << 3 & 0x20) != 0) {
              uVar31 = 0;
              uVar25 = uVar13;
            }
            local_ec = local_ec | uVar31;
            local_a0._0_4_ = local_a0._0_4_ | uVar25;
          }
          bVar17 = (byte)(local_74 * 8);
          bVar22 = bVar17 & 0x1f;
          uVar31 = 0xff << (bVar17 & 0x1f);
          uVar25 = uVar31;
          uVar18 = 0 << bVar22 | 0xffU >> 0x20 - bVar22;
          if ((local_74 * 8 & 0x20) != 0) {
            uVar25 = 0;
            uVar18 = uVar31;
          }
          uVar18 = uVar18 | local_a0._0_4_;
          local_a0._0_4_ = uVar25 | local_ec;
          if (local_74 == 7) {
            local_f0 = local_f0 ^ uVar18;
            local_70._0_4_ = uVar18;
            local_fc = local_fc ^ local_a0._0_4_;
            uVar19 = local_100 + local_dc + (uint)CARRY4(local_104,local_e8);
            uVar25 = local_f4 + local_fc;
            uVar31 = local_f8 + local_f0 + (uint)CARRY4(local_f4,local_fc);
            uVar13 = (local_dc << 0xd | local_e8 >> 0x13) ^ uVar19;
            uVar20 = (local_e8 << 0xd | local_dc >> 0x13) ^ local_104 + local_e8;
            uVar12 = (local_fc << 0x10 | local_f0 >> 0x10) ^ uVar25;
            uVar21 = (local_fc >> 0x10 | local_f0 << 0x10) ^ uVar31;
            local_f8 = uVar25 + uVar20;
            local_f4 = uVar31 + uVar13 + (uint)CARRY4(uVar25,uVar20);
            local_100 = local_104 + local_e8 + uVar21 + (uint)CARRY4(uVar19,uVar12);
            local_dc = (uVar20 >> 0xf | uVar13 << 0x11) ^ local_f4;
            local_fc = (uVar12 << 0x15 | uVar21 >> 0xb) ^ uVar19 + uVar12;
            local_104 = uVar19 + uVar12 ^ local_a0._0_4_;
            local_f0 = (uVar12 >> 0xb | uVar21 << 0x15) ^ local_100;
            local_100 = local_100 ^ uVar18;
            auVar3._12_4_ = 0;
            auVar3._0_12_ = local_a0._4_12_;
            local_a0._0_16_ = auVar3 << 0x20;
            local_e8 = (uVar20 << 0x11 | uVar13 >> 0xf) ^ local_f8;
            uVar18 = 0;
          }
LAB_10057850:
          local_ec = uVar28 + 1;
          local_fc = local_fc ^ local_a0._0_4_;
          uVar18 = local_ec * 0x1000000 | uVar18;
          local_f0 = local_f0 ^ uVar18;
          uVar25 = local_100 + local_dc + (uint)CARRY4(local_104,local_e8);
          uVar31 = local_f4 + local_fc;
          uVar13 = local_f8 + local_f0 + (uint)CARRY4(local_f4,local_fc);
          uVar26 = (local_e8 << 0xd | local_dc >> 0x13) ^ local_104 + local_e8;
          uVar23 = (local_fc >> 0x10 | local_f0 << 0x10) ^ uVar13;
          uVar19 = (local_dc << 0xd | local_e8 >> 0x13) ^ uVar25;
          uVar12 = (local_fc << 0x10 | local_f0 >> 0x10) ^ uVar31;
          uVar13 = uVar13 + uVar19 + (uint)CARRY4(uVar31,uVar26);
          uVar21 = local_104 + local_e8 + uVar23 + (uint)CARRY4(uVar25,uVar12);
          uVar30 = (uVar26 >> 0xf | uVar19 << 0x11) ^ uVar13;
          uVar13 = uVar13 ^ 0xff;
          uVar20 = (uVar12 >> 0xb | uVar23 << 0x15) ^ uVar21;
          uVar23 = (uVar12 << 0x15 | uVar23 >> 0xb) ^ uVar25 + uVar12;
          uVar25 = uVar25 + uVar12 ^ local_a0._0_4_;
          uVar19 = (uVar26 << 0x11 | uVar19 >> 0xf) ^ uVar31 + uVar26;
          uVar12 = uVar25 + uVar19;
          uVar18 = (uVar21 ^ uVar18) + uVar30 + (uint)CARRY4(uVar25,uVar19);
          uVar32 = uVar13 + uVar23;
          uVar25 = uVar31 + uVar26 + uVar20 + (uint)CARRY4(uVar13,uVar23);
          uVar33 = (uVar19 << 0xd | uVar30 >> 0x13) ^ uVar12;
          uVar26 = (uVar23 >> 0x10 | uVar20 << 0x10) ^ uVar25;
          uVar21 = (uVar19 >> 0x13 | uVar30 << 0xd) ^ uVar18;
          uVar31 = (uVar23 << 0x10 | uVar20 >> 0x10) ^ uVar32;
          uVar25 = uVar25 + uVar21 + (uint)CARRY4(uVar32,uVar33);
          uVar20 = uVar18 + uVar31;
          uVar18 = uVar12 + uVar26 + (uint)CARRY4(uVar18,uVar31);
          uVar13 = (uVar31 >> 0xb | uVar26 << 0x15) ^ uVar18;
          uVar23 = (uVar33 << 0x11 | uVar21 >> 0xf) ^ uVar32 + uVar33;
          uVar12 = (uVar33 >> 0xf | uVar21 << 0x11) ^ uVar25;
          uVar21 = (uVar31 << 0x15 | uVar26 >> 0xb) ^ uVar20;
          uVar18 = uVar18 + uVar12 + (uint)CARRY4(uVar20,uVar23);
          uVar19 = uVar25 + uVar21;
          uVar25 = uVar32 + uVar33 + uVar13 + (uint)CARRY4(uVar25,uVar21);
          uVar31 = (uVar23 << 0xd | uVar12 >> 0x13) ^ uVar20 + uVar23;
          uVar26 = (uVar23 >> 0x13 | uVar12 << 0xd) ^ uVar18;
          uVar30 = (uVar21 << 0x10 | uVar13 >> 0x10) ^ uVar19;
          uVar12 = (uVar21 >> 0x10 | uVar13 << 0x10) ^ uVar25;
          uVar13 = uVar25 + uVar26 + (uint)CARRY4(uVar19,uVar31);
          uVar25 = uVar18 + uVar30;
          uVar20 = uVar20 + uVar23 + uVar12 + (uint)CARRY4(uVar18,uVar30);
          uVar21 = (uVar31 << 0x11 | uVar26 >> 0xf) ^ uVar19 + uVar31;
          uVar18 = (uVar31 >> 0xf | uVar26 << 0x11) ^ uVar13;
          uVar23 = (uVar30 >> 0xb | uVar12 << 0x15) ^ uVar20;
          uVar12 = (uVar30 << 0x15 | uVar12 >> 0xb) ^ uVar25;
          local_f8 = uVar13 + uVar12;
          uVar13 = uVar19 + uVar31 + uVar23 + (uint)CARRY4(uVar13,uVar12);
          uVar31 = (uVar21 << 0xd | uVar18 >> 0x13) ^ uVar25 + uVar21;
          uVar18 = (uVar21 >> 0x13 | uVar18 << 0xd) ^ uVar20 + uVar18 + (uint)CARRY4(uVar25,uVar21);
          uVar18 = uVar13 + uVar18 + (uint)CARRY4(local_f8,uVar31) ^ local_f8 + uVar31 ^
                   ((uVar23 >> 0x10 ^ local_f8) << 0x15 |
                   ((uVar12 >> 0x10 | uVar23 << 0x10) ^ uVar13) >> 0xb) ^
                   (uVar18 >> 0xf | uVar31 << 0x11);
          iVar15 = *piVar10;
          iVar2 = piVar10[3];
          if ((uint)local_c8 == 0) {
            FUN_10132f60((undefined4 *)&local_d0,1,&local_c0);
          }
          uVar25 = (uint)local_d0._4_4_;
          pauVar5 = (undefined1 (*) [16])local_d0;
          piVar10 = piVar10 + 4;
          iVar14 = 0;
          bVar34 = false;
          bVar22 = (byte)(uVar18 >> 0x18);
          bVar17 = bVar22 >> 1;
          auVar36 = ZEXT216(CONCAT11(bVar17,bVar17));
          auVar36 = pshuflw(auVar36,auVar36,0);
          auVar37._0_8_ = auVar36._0_8_;
          auVar37._8_4_ = auVar36._0_4_;
          auVar37._12_4_ = auVar36._4_4_;
          do {
            uVar18 = uVar25 & uVar18;
            auVar36 = *(undefined1 (*) [16])(*pauVar5 + uVar18);
            auVar35[0] = -(auVar36[0] == auVar37[0]);
            auVar35[1] = -(auVar36[1] == auVar37[1]);
            auVar35[2] = -(auVar36[2] == auVar37[2]);
            auVar35[3] = -(auVar36[3] == auVar37[3]);
            auVar35[4] = -(auVar36[4] == auVar37[4]);
            auVar35[5] = -(auVar36[5] == auVar37[5]);
            auVar35[6] = -(auVar36[6] == auVar37[6]);
            auVar35[7] = -(auVar36[7] == auVar37[7]);
            auVar35[8] = -(auVar36[8] == auVar37[8]);
            auVar35[9] = -(auVar36[9] == auVar37[9]);
            auVar35[10] = -(auVar36[10] == auVar37[10]);
            auVar35[0xb] = -(auVar36[0xb] == auVar37[0xb]);
            auVar35[0xc] = -(auVar36[0xc] == auVar37[0xc]);
            auVar35[0xd] = -(auVar36[0xd] == auVar37[0xd]);
            auVar35[0xe] = -(auVar36[0xe] == auVar37[0xe]);
            auVar35[0xf] = -(auVar36[0xf] == auVar37[0xf]);
            uVar31 = (uint)(ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(auVar35[0xf] >> 7) << 0xf);
            if (uVar31 != 0) {
              do {
                local_70 = auVar36;
                local_a0._0_16_ = auVar37;
                iVar11 = 0;
                for (uVar13 = uVar31; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
                  iVar11 = iVar11 + 1;
                }
                uVar13 = iVar11 + uVar18 & uVar25;
                if ((uVar28 == *(uint *)(pauVar5[-1 - uVar13] + 8)) &&
                   (iVar11 = memcmp(pvVar1,*(void **)(pauVar5[-1 - uVar13] + 4),uVar28),
                   piVar4 = local_78, iVar11 == 0)) {
                  *(int *)(pauVar5[-1 - uVar13] + 0xc) = iVar2;
                  if (iVar15 != 0) {
                    pvVar8 = GetProcessHeap();
                    HeapFree(pvVar8,0,pvVar1);
                  }
                  goto joined_r0x100573ae;
                }
                uVar31 = uVar31 - 1 & uVar31;
                auVar37 = local_a0._0_16_;
                auVar36 = local_70;
              } while ((short)uVar31 != 0);
            }
            if (bVar34) {
LAB_10057341:
              auVar38[0] = -(auVar36[0] == -1);
              auVar38[1] = -(auVar36[1] == -1);
              auVar38[2] = -(auVar36[2] == -1);
              auVar38[3] = -(auVar36[3] == -1);
              auVar38[4] = -(auVar36[4] == -1);
              auVar38[5] = -(auVar36[5] == -1);
              auVar38[6] = -(auVar36[6] == -1);
              auVar38[7] = -(auVar36[7] == -1);
              auVar38[8] = -(auVar36[8] == -1);
              auVar38[9] = -(auVar36[9] == -1);
              auVar38[10] = -(auVar36[10] == -1);
              auVar38[0xb] = -(auVar36[0xb] == -1);
              auVar38[0xc] = -(auVar36[0xc] == -1);
              auVar38[0xd] = -(auVar36[0xd] == -1);
              auVar38[0xe] = -(auVar36[0xe] == -1);
              auVar38[0xf] = -(auVar36[0xf] == 0xff);
              if ((((((((((((((((SUB161(auVar38 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar38 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar38 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar38 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar38 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar38 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar38 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar38 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar38 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar38 >> 0x4f,0) & 1) != 0) || (SUB161(auVar38 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar38 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar38 >> 0x67,0) & 1) != 0) || (SUB161(auVar38 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar38 >> 0x77,0) & 1) != 0) || auVar38[0xf] < '\0')
              goto LAB_100577d0;
              bVar34 = true;
            }
            else {
              uVar31 = (uint)(ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar36[0xf] >> 7) << 0xf);
              if (uVar31 != 0) {
                iVar11 = 0;
                for (; (uVar31 & 1) == 0; uVar31 = uVar31 >> 1 | 0x80000000) {
                  iVar11 = iVar11 + 1;
                }
                local_f8 = iVar11 + uVar18 & uVar25;
                goto LAB_10057341;
              }
              bVar34 = false;
            }
            uVar18 = iVar14 + 0x10 + uVar18;
            iVar14 = iVar14 + 0x10;
          } while( true );
        }
LAB_10057b88:
        if (local_3c != 0) {
          pvVar8 = GetProcessHeap();
          HeapFree(pvVar8,0,local_7c);
        }
LAB_10057bac:
        piVar10 = piVar7;
      } while (piVar7 != (int *)0x0);
LAB_10057bb4:
      puVar29 = local_40;
      uVar28 = local_44;
      pbVar27 = local_84;
      *(ulonglong *)(local_40 + 6) = CONCAT44(uStack_bc,local_c0);
      *(ulonglong *)(local_40 + 8) = CONCAT44(uStack_b4,uStack_b8);
      *(undefined8 *)(local_40 + 2) = local_d0;
      *(undefined8 *)(local_40 + 4) = local_c8;
      iVar15 = FUN_10110f10(local_84,local_44);
      if (iVar15 != 0) {
        FUN_10110e70((int)param_5,extraout_EDX);
        pbVar27 = (byte *)param_5[1];
        uVar28 = param_5[2];
      }
      iVar15 = FUN_10110f10(pbVar27,uVar28);
      piVar7 = local_50;
      if (iVar15 != 0) {
        FUN_10110e70((int)param_5,extraout_EDX_00);
      }
      puVar29[10] = local_4c;
      puVar29[0xb] = piVar7;
      puVar29[0xc] = local_80;
      *puVar29 = 0;
      if (local_48 != 0) {
        pvVar8 = GetProcessHeap();
        HeapFree(pvVar8,0,local_54);
      }
      return;
    }
  }
LAB_10057206:
  FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
  pcVar24 = (code *)invalidInstructionException();
  (*pcVar24)();
}
