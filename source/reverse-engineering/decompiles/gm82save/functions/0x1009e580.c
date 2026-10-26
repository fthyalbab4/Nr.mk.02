// rea decompile_all
// name: FUN_1009e580
// address: 0x1009e580
// body: available
// range: 0x1009e580-0x1009eb66 inclusive
// range: 0x1009eb70-0x1009ec37 inclusive
// range: 0x1009ec40-0x1009ed4a inclusive
// range: 0x1009ed50-0x1009f0b8 inclusive
// range: 0x1009f0c0-0x1009f21d inclusive
// range: 0x1009f220-0x1009f783 inclusive
// range: 0x1009f790-0x1009f880 inclusive
// range: 0x1009f890-0x1009fcbb inclusive
// range: 0x1009fcc0-0x1009fe20 inclusive
// range: 0x1009fe30-0x100a0021 inclusive
// range: 0x100a0030-0x100a0147 inclusive
// range: 0x100a0150-0x100a0276 inclusive
// range: 0x100a0280-0x100a1e31 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void __fastcall
FUN_1009e580(uint *param_1,uint *param_2,uint *param_3,uint *param_4,int param_5,uint *param_6,
            uint *param_7,char param_8)

{
  undefined1 *puVar1;
  ushort uVar2;
  void *_Dst;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 uVar29;
  char cVar30;
  undefined2 uVar31;
  byte bVar33;
  HANDLE pvVar32;
  byte bVar34;
  byte bVar35;
  short sVar36;
  uint *puVar37;
  undefined4 *puVar38;
  uint *puVar39;
  byte bVar42;
  uint uVar40;
  undefined1 *puVar41;
  byte bVar43;
  undefined1 uVar44;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  uint *puVar45;
  uint *puVar46;
  int iVar47;
  undefined1 *puVar48;
  int iVar49;
  uint uVar50;
  uint *puVar51;
  uint uVar52;
  uint *puVar53;
  undefined1 *puVar54;
  uint *puVar55;
  uint *puVar56;
  uint *puVar57;
  uint uVar58;
  undefined1 *puVar59;
  uint uVar60;
  undefined4 *puVar61;
  undefined1 *puVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  undefined1 *puVar68;
  undefined4 *puVar69;
  bool bVar70;
  undefined1 auVar71 [16];
  undefined **ppuVar72;
  uint *local_324;
  uint *local_320;
  uint *local_31c;
  uint *local_318;
  uint *local_314;
  uint *local_310;
  uint *local_30c;
  uint *local_308;
  uint *local_300;
  uint *local_2fc;
  uint *local_2f8;
  uint *local_2e8;
  uint local_2d4;
  uint local_2c8;
  uint local_2c4;
  uint local_2c0;
  uint local_2b8;
  uint *local_2b4;
  undefined4 local_2b0;
  uint *local_2ac;
  uint *local_2a8;
  uint *local_2a4;
  undefined1 local_2a0 [15];
  undefined4 uStack_291;
  undefined1 auStack_28d [13];
  undefined1 local_280 [16];
  undefined1 local_270 [16];
  undefined1 local_260 [8];
  ulonglong uStack_258;
  undefined1 local_250 [14];
  undefined2 uStack_242;
  undefined6 uStack_240;
  undefined2 local_60;

  bVar42 = *(byte *)((int)param_2 + 0x3a3);
  if (bVar42 == 7) {
    param_1[1] = 0;
    param_1[2] = 0;
LAB_1009e5b4:
    uVar29 = 0;
  }
  else {
    puVar55 = (uint *)((int)param_6 - (int)param_7);
    if (param_6 < param_7) {
      ppuVar72 = &PTR_s_C__Users_runneradmin__cargo_regi_1014f24c;
      goto LAB_1009e865;
    }
    local_30c = (uint *)(uint)bVar42;
    puVar46 = (uint *)param_2[0xe4];
    uVar60 = param_2[0xe2];
    param_2[0xe2] = 0;
    local_318 = param_7;
    if ((uVar60 & 1) != 0) {
      local_318 = puVar46;
      if (puVar55 < puVar46) {
        local_318 = puVar55;
      }
      memset((void *)(param_5 + (int)param_7),(uint)(byte)param_2[0xe3],(size_t)local_318);
      if (puVar55 < puVar46) {
        param_2[0xe2] = 1;
        param_2[0xe4] = (int)puVar46 - (int)local_318;
        param_1[1] = 0;
        param_1[2] = (uint)local_318;
        goto LAB_1009e5b4;
      }
      local_318 = (uint *)((int)local_318 + (int)param_7);
    }
    uVar60 = param_2[0xe6];
    puVar55 = (uint *)param_2[0xe7];
    uVar50 = param_2[0xe5];
    param_2[0xe5] = 0;
    if ((uVar50 & 1) != 0) {
      puVar37 = (uint *)((int)param_6 - (int)local_318);
      local_320 = puVar55;
      if (puVar37 < puVar55) {
        local_320 = puVar37;
      }
      if (local_320 != (uint *)0x0) {
        local_2e8 = (uint *)0x0;
        local_31c = (uint *)((int)param_6 - (int)local_318);
        if (param_6 < local_318) {
          local_31c = (uint *)0x0;
        }
        puVar45 = (uint *)((int)local_318 - uVar60);
        puVar46 = puVar45;
        if (puVar45 < param_6) {
          puVar46 = param_6;
        }
        puVar46 = (uint *)((int)puVar46 + (uVar60 - (int)local_318));
        if (local_31c <= puVar46) {
          puVar46 = local_31c;
        }
        if ((uint *)((int)local_320 + -1) < puVar46) {
          puVar46 = (uint *)((int)local_320 + -1);
        }
        if (0xf < uVar60 && (uint *)0xf < puVar46) {
          uVar63 = (uint)((int)puVar46 + 1) & 0xf;
          uVar50 = 0x10;
          if (uVar63 != 0) {
            uVar50 = uVar63;
          }
          local_2e8 = (uint *)((undefined1 *)((int)puVar46 + 1) + -uVar50);
          iVar47 = ~(uint)puVar46 + uVar50;
          puVar38 = (undefined4 *)(param_5 + (int)local_318);
          do {
            puVar61 = (undefined4 *)((int)puVar38 - uVar60);
            uVar4 = puVar61[1];
            uVar5 = puVar61[2];
            uVar6 = puVar61[3];
            *puVar38 = *puVar61;
            puVar38[1] = uVar4;
            puVar38[2] = uVar5;
            puVar38[3] = uVar6;
            puVar38 = puVar38 + 4;
            iVar47 = iVar47 + 0x10;
          } while (iVar47 != 0);
        }
        puVar48 = (undefined1 *)(param_5 + (int)local_318);
        iVar47 = param_5 + (int)puVar45;
        puVar39 = local_318;
        puVar46 = local_320;
        do {
          if (param_6 <= (uint *)((int)local_2e8 + (int)puVar45)) {
            FUN_10136b52((uint *)((int)local_2e8 + (int)puVar45),param_6,
                         &PTR_s_C__Users_runneradmin__cargo_regi_1014f25c);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (local_2e8 == local_31c) {
            FUN_10136b52((undefined1 *)((int)local_2e8 + (int)puVar39),param_6,
                         &PTR_s_C__Users_runneradmin__cargo_regi_1014f26c);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          local_31c = (uint *)((int)local_31c + -1);
          puVar46 = (uint *)((int)puVar46 + -1);
          puVar41 = (undefined1 *)(iVar47 + (int)local_2e8);
          iVar47 = iVar47 + 1;
          puVar45 = (uint *)((int)puVar45 + 1);
          puVar48[(int)local_2e8] = *puVar41;
          puVar48 = puVar48 + 1;
          puVar39 = (uint *)((int)puVar39 + 1);
        } while (local_2e8 != puVar46);
      }
      if (puVar37 < puVar55) {
        param_2[0xe5] = 1;
        param_1[1] = 0;
        param_1[2] = (uint)local_320;
        param_2[0xe7] = (int)puVar55 - (int)local_320;
        goto LAB_1009e5b4;
      }
      local_318 = (uint *)((int)local_318 + (int)local_320);
    }
    local_314 = param_3;
    puVar55 = param_6 + -4;
    local_31c = param_4;
    puVar37 = param_2 + 0x80;
    local_2a4 = param_2 + 0xd8;
    puVar45 = param_2 + 0xdb;
    puVar53 = (uint *)(uint)bVar42;
    puVar57 = param_4;
    puVar39 = local_2a4;
    local_2ac = puVar45;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar42) {
    case 0:
switchD_1009e828_caseD_0:
      puVar45 = puVar53;
      if (local_31c < &DAT_00000008) {
        bVar42 = *(byte *)((int)param_2 + 0x3a2);
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uStack_258;
        _local_260 = auVar18 << 0x40;
        auVar7._12_4_ = 0;
        auVar7._0_12_ = stack0xfffffda4;
        _local_260 = auVar7 << 0x20;
        puVar39 = (uint *)(0x3f - bVar42 >> 3);
        if (local_31c <= puVar39) {
          puVar39 = local_31c;
        }
        memcpy(local_260,local_314,(size_t)puVar39);
        uVar63 = local_260._0_4_ << (bVar42 & 0x1f);
        uVar50 = uVar63;
        uVar60 = local_260._4_4_ << (bVar42 & 0x1f) |
                 (uint)local_260._0_4_ >> 0x20 - (bVar42 & 0x1f);
        if ((bVar42 & 0x20) != 0) {
          uVar50 = 0;
          uVar60 = uVar63;
        }
        if (0x3f < bVar42) {
          uVar60 = 0;
          uVar50 = 0;
        }
        bVar42 = (char)puVar39 * '\b' + bVar42;
        uVar60 = uVar60 | param_2[0xd5];
        uVar50 = uVar50 | param_2[0xd4];
        local_310 = (uint *)((int)local_31c - (int)puVar39);
        param_2[0xd4] = uVar50;
        param_2[0xd5] = uVar60;
        *(byte *)((int)param_2 + 0x3a2) = bVar42;
        if (bVar42 < 0x10) {
          puVar45 = (uint *)0x0;
          puVar46 = param_2;
          puVar39 = param_6;
          local_31c = local_310;
LAB_100a0b60:
          cVar30 = (char)puVar45;
          if ((cVar30 != '\a') && (*(char *)((int)puVar46 + 0x3a6) == '\0')) {
            if ((local_318 < param_7) || (puVar39 < local_318)) {
              ppuVar72 = &PTR_s_C__Users_runneradmin__cargo_regi_1014f28c;
              puVar46 = param_7;
              puVar53 = local_318;
              param_6 = puVar39;
              goto LAB_100a117a;
            }
            uVar31 = (*(code *)param_2[0xd6])
                               (param_2[0xd7],*(undefined2 *)((int)param_2 + 0x35e),
                                param_5 + (int)param_7,(int)local_318 - (int)param_7);
            *(undefined2 *)(param_2 + 0xd7) = uVar31;
            *(undefined2 *)((int)param_2 + 0x35e) = extraout_DX_00;
            cVar30 = *(char *)((int)param_2 + 0x3a3);
          }
          if (((cVar30 != '\a') && (param_8 != '\0')) && (local_318 != puVar39)) {
            *(undefined1 *)((int)param_1 + 1) = 1;
            goto LAB_100a116e;
          }
          uVar60 = (int)local_318 - (int)param_7;
LAB_100a0be7:
          param_1[1] = (int)param_4 - (int)local_31c;
          param_1[2] = uVar60;
          goto LAB_1009e5b4;
        }
      }
      else {
        bVar42 = *(byte *)((int)param_2 + 0x3a2);
        uVar50 = 0;
        uVar60 = *local_314 << (bVar42 & 0x1f);
        if ((bVar42 & 0x20) == 0) {
          uVar50 = uVar60;
          uVar60 = local_314[1] << (bVar42 & 0x1f) | *local_314 >> 0x20 - (bVar42 & 0x1f);
        }
        uVar60 = uVar60 | param_2[0xd5];
        uVar50 = uVar50 | param_2[0xd4];
        puVar39 = (uint *)(0x3f - bVar42 >> 3);
        local_310 = (uint *)((int)local_31c - (int)puVar39);
        param_2[0xd4] = uVar50;
        param_2[0xd5] = uVar60;
        puVar53 = local_31c;
        if (local_31c < puVar39) {
LAB_100a0f4c:
          puVar46 = puVar39;
          ppuVar72 = &PTR_s_C__Users_runneradmin__cargo_regi_1014e110;
          param_6 = puVar53;
LAB_100a117a:
          FUN_10136a50((uint)puVar46,(uint)puVar53,(uint)param_6,ppuVar72);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        bVar42 = bVar42 | 0x38;
        *(byte *)((int)param_2 + 0x3a2) = bVar42;
      }
      if ((((uVar50 & 0x200f) == 8) && ((uVar50 & 0xf0) < 0x71)) &&
         ((ushort)(((ushort)uVar50 << 8 | (ushort)uVar50 >> 8) * 0x7bdf) < 0x843)) {
        local_314 = (uint *)((int)local_314 + (int)puVar39);
        param_2[0xd5] = uVar60 >> 0x10;
        param_2[0xd4] = uVar50 >> 0x10 | uVar60 << 0x10;
        *(byte *)((int)param_2 + 0x3a2) = bVar42 - 0x10;
        *(undefined1 *)((int)param_2 + 0x3a3) = 1;
        puVar46 = param_2;
        puVar39 = param_6;
        local_31c = local_310;
        local_30c = puVar45;
LAB_100a093d:
        puVar57 = local_310;
        bVar42 = *(byte *)((int)puVar46 + 0x3a3);
        if ((byte)puVar45 == bVar42) goto LAB_100a0b60;
        puVar53 = (uint *)(uint)bVar42;
        puVar46 = param_1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(bVar42) {
        case 0:
          goto switchD_1009e828_caseD_0;
        case 1:
switchD_1009e828_caseD_1:
          local_30c = (uint *)(uint)bVar42;
          bVar42 = *(byte *)((int)param_2 + 0x3a2);
          uVar60 = param_2[0xd4];
          puVar56 = (uint *)param_2[0xd5];
          local_324 = local_314;
          local_314 = local_31c;
          while( true ) {
            if (local_314 < &DAT_00000008) {
              auVar20._8_8_ = 0;
              auVar20._0_8_ = uStack_258;
              _local_260 = auVar20 << 0x40;
              auVar9._12_4_ = 0;
              auVar9._0_12_ = stack0xfffffda4;
              _local_260 = auVar9 << 0x20;
              local_310 = (uint *)(0x3f - bVar42 >> 3);
              if (local_314 <= local_310) {
                local_310 = local_314;
              }
              memcpy(local_260,local_324,(size_t)local_310);
              uVar64 = local_260._0_4_ << (bVar42 & 0x1f);
              uVar63 = uVar64;
              uVar50 = local_260._4_4_ << (bVar42 & 0x1f) |
                       (uint)local_260._0_4_ >> 0x20 - (bVar42 & 0x1f);
              if ((bVar42 & 0x20) != 0) {
                uVar63 = 0;
                uVar50 = uVar64;
              }
              if (0x3f < bVar42) {
                uVar50 = 0;
                uVar63 = 0;
              }
              puVar56 = (uint *)(uVar50 | (uint)puVar56);
              puVar46 = (uint *)(uVar63 | uVar60);
              bVar42 = (char)local_310 * '\b' + bVar42;
              puVar45 = (uint *)((uint)bVar42 << 8);
              local_31c = (uint *)((int)local_314 - (int)local_310);
              local_314 = (uint *)((int)local_310 + (int)local_324);
              param_2[0xd5] = (uint)puVar56;
              param_2[0xd4] = (uint)puVar46;
              *(byte *)((int)param_2 + 0x3a2) = bVar42;
              if (bVar42 < 10) goto LAB_1009f50b;
              *(byte *)(param_2 + 0xe9) = (byte)puVar46 & 1;
              puVar57 = param_6;
              puVar39 = param_2;
              local_320 = puVar56;
              switch((uint)puVar46 >> 1 & 3) {
              case 0:
                goto switchD_1009e828_caseD_8;
              case 2:
                goto switchD_1009e828_caseD_a;
              case 3:
                goto switchD_1009e828_caseD_b;
              }
            }
            else {
              uVar64 = *local_324 << (bVar42 & 0x1f);
              uVar63 = uVar64;
              uVar50 = local_324[1] << (bVar42 & 0x1f) | *local_324 >> 0x20 - (bVar42 & 0x1f);
              if ((bVar42 & 0x20) != 0) {
                uVar63 = 0;
                uVar50 = uVar64;
              }
              local_320 = (uint *)(uVar50 | (uint)puVar56);
              puVar46 = (uint *)(uVar63 | uVar60);
              puVar39 = (uint *)(0x3f - bVar42 >> 3);
              param_2[0xd5] = (uint)local_320;
              param_2[0xd4] = (uint)puVar46;
              local_31c = (uint *)((int)local_314 - (int)puVar39);
              puVar53 = local_314;
              if (local_314 < puVar39) goto LAB_100a0f4c;
              local_314 = (uint *)((int)local_324 + (int)puVar39);
              puVar45 = (uint *)((uint)(bVar42 | 0x38) << 8);
              *(byte *)((int)param_2 + 0x3a2) = bVar42 | 0x38;
              *(byte *)(param_2 + 0xe9) = (byte)puVar46 & 1;
              puVar57 = param_6;
              puVar39 = param_2;
              switch((uint)puVar46 >> 1 & 3) {
              case 0:
                goto switchD_1009e828_caseD_8;
              case 2:
                goto switchD_1009e828_caseD_a;
              case 3:
                goto switchD_1009e828_caseD_b;
              }
            }
switchD_1009e828_caseD_9:
            puVar39[0xd5] = (uint)local_320 >> 3;
            puVar39[0xd4] = (int)local_320 << 0x1d | (uint)puVar46 >> 3;
            cVar30 = (char)((uint)puVar45 >> 8);
            *(char *)((int)puVar39 + 0x3a2) = cVar30 + -3;
            if (((uint)puVar46 & 0x3f8) != 0) {
              puVar53 = puVar57;
              if (*(char *)((int)puVar39 + 0x3a5) == '\0') {
                *(undefined1 *)((int)puVar39 + 0x3a5) = 1;
                _Dst = (void *)puVar39[0xde];
                memcpy(_Dst,&DAT_1014e96c,0x800);
                memcpy((void *)((int)_Dst + 0x800),&DAT_1014e96c,0x800);
                memcpy((void *)((int)_Dst + 0x1000),&DAT_1014e96c,0x800);
                memcpy((void *)((int)_Dst + 0x1800),&DAT_1014e96c,0x800);
                memcpy((void *)((int)_Dst + 0x2000),&DAT_1014e96c,0x800);
                memcpy((void *)((int)_Dst + 0x2800),&DAT_1014e96c,0x800);
                memcpy((void *)((int)_Dst + 0x3000),&DAT_1014e96c,0x800);
                memcpy((void *)((int)_Dst + 0x3800),&DAT_1014e96c,0x800);
                puVar38 = (undefined4 *)param_2[0xdf];
                puVar61 = &DAT_1014e8ec;
                puVar69 = puVar38;
                for (iVar47 = 0x20; iVar47 != 0; iVar47 = iVar47 + -1) {
                  *puVar69 = *puVar61;
                  puVar61 = puVar61 + 1;
                  puVar69 = puVar69 + 1;
                }
                puVar61 = &DAT_1014e8ec;
                puVar69 = puVar38 + 0x20;
                for (iVar47 = 0x20; iVar47 != 0; iVar47 = iVar47 + -1) {
                  *puVar69 = *puVar61;
                  puVar61 = puVar61 + 1;
                  puVar69 = puVar69 + 1;
                }
                puVar61 = &DAT_1014e8ec;
                puVar69 = puVar38 + 0x40;
                for (iVar47 = 0x20; iVar47 != 0; iVar47 = iVar47 + -1) {
                  *puVar69 = *puVar61;
                  puVar61 = puVar61 + 1;
                  puVar69 = puVar69 + 1;
                }
                puVar61 = &DAT_1014e8ec;
                puVar69 = puVar38 + 0x60;
                for (iVar47 = 0x20; iVar47 != 0; iVar47 = iVar47 + -1) {
                  *puVar69 = *puVar61;
                  puVar61 = puVar61 + 1;
                  puVar69 = puVar69 + 1;
                }
                puVar61 = &DAT_1014e8ec;
                puVar69 = puVar38 + 0x80;
                for (iVar47 = 0x20; iVar47 != 0; iVar47 = iVar47 + -1) {
                  *puVar69 = *puVar61;
                  puVar61 = puVar61 + 1;
                  puVar69 = puVar69 + 1;
                }
                puVar61 = &DAT_1014e8ec;
                puVar69 = puVar38 + 0xa0;
                for (iVar47 = 0x20; iVar47 != 0; iVar47 = iVar47 + -1) {
                  *puVar69 = *puVar61;
                  puVar61 = puVar61 + 1;
                  puVar69 = puVar69 + 1;
                }
                puVar61 = &DAT_1014e8ec;
                puVar69 = puVar38 + 0xc0;
                for (iVar47 = 0x20; iVar47 != 0; iVar47 = iVar47 + -1) {
                  *puVar69 = *puVar61;
                  puVar61 = puVar61 + 1;
                  puVar69 = puVar69 + 1;
                }
                puVar61 = &DAT_1014e8ec;
                puVar69 = puVar38 + 0xe0;
                for (iVar47 = 0x20; iVar47 != 0; iVar47 = iVar47 + -1) {
                  *puVar69 = *puVar61;
                  puVar61 = puVar61 + 1;
                  puVar69 = puVar69 + 1;
                }
                puVar61 = &DAT_1014e8ec;
                puVar69 = puVar38 + 0x100;
                for (iVar47 = 0x20; iVar47 != 0; iVar47 = iVar47 + -1) {
                  *puVar69 = *puVar61;
                  puVar61 = puVar61 + 1;
                  puVar69 = puVar69 + 1;
                }
                puVar61 = &DAT_1014e8ec;
                puVar69 = puVar38 + 0x120;
                for (iVar47 = 0x20; iVar47 != 0; iVar47 = iVar47 + -1) {
                  *puVar69 = *puVar61;
                  puVar61 = puVar61 + 1;
                  puVar69 = puVar69 + 1;
                }
                puVar61 = &DAT_1014e8ec;
                puVar69 = puVar38 + 0x140;
                for (iVar47 = 0x20; iVar47 != 0; iVar47 = iVar47 + -1) {
                  *puVar69 = *puVar61;
                  puVar61 = puVar61 + 1;
                  puVar69 = puVar69 + 1;
                }
                puVar61 = &DAT_1014e8ec;
                puVar69 = puVar38 + 0x160;
                for (iVar47 = 0x20; iVar47 != 0; iVar47 = iVar47 + -1) {
                  *puVar69 = *puVar61;
                  puVar61 = puVar61 + 1;
                  puVar69 = puVar69 + 1;
                }
                puVar61 = &DAT_1014e8ec;
                puVar69 = puVar38 + 0x180;
                for (iVar47 = 0x20; iVar47 != 0; iVar47 = iVar47 + -1) {
                  *puVar69 = *puVar61;
                  puVar61 = puVar61 + 1;
                  puVar69 = puVar69 + 1;
                }
                puVar61 = &DAT_1014e8ec;
                puVar69 = puVar38 + 0x1a0;
                for (iVar47 = 0x20; iVar47 != 0; iVar47 = iVar47 + -1) {
                  *puVar69 = *puVar61;
                  puVar61 = puVar61 + 1;
                  puVar69 = puVar69 + 1;
                }
                puVar61 = &DAT_1014e8ec;
                puVar69 = puVar38 + 0x1c0;
                for (iVar47 = 0x20; iVar47 != 0; iVar47 = iVar47 + -1) {
                  *puVar69 = *puVar61;
                  puVar61 = puVar61 + 1;
                  puVar69 = puVar69 + 1;
                }
                puVar57 = &DAT_1014e8ec;
                puVar46 = puVar38 + 0x1e0;
                for (iVar47 = 0x20; iVar47 != 0; iVar47 = iVar47 + -1) {
                  *puVar46 = *puVar57;
                  puVar57 = puVar57 + 1;
                  puVar46 = puVar46 + 1;
                }
                *(undefined1 *)(param_2 + 0xe1) = 7;
                param_2[0xe0] = 0x7f0000;
                puVar39 = param_2;
                puVar53 = param_6;
              }
              *(undefined1 *)((int)puVar39 + 0x3a3) = 4;
              goto LAB_1009f5ba;
            }
            bVar42 = cVar30 - 10;
            puVar56 = (uint *)((uint)local_320 >> 10);
            uVar60 = (int)local_320 << 0x16 | (uint)puVar46 >> 10;
            puVar39[0xd5] = (uint)puVar56;
            puVar39[0xd4] = uVar60;
            *(byte *)((int)puVar39 + 0x3a2) = bVar42;
            local_324 = local_314;
            puVar53 = local_31c;
            if (((uint)puVar46 & 1) != 0) break;
            while ((local_314 = puVar53, 9 < bVar42 && ((uVar60 & 0x3ff) == 2))) {
              uVar50 = uVar60 >> 10 | (int)puVar56 << 0x16;
              local_320 = (uint *)((uint)puVar56 >> 10);
              bVar42 = bVar42 - 10;
              param_2[0xd5] = (uint)local_320;
              param_2[0xd4] = uVar50;
              *(byte *)((int)param_2 + 0x3a2) = bVar42;
              if (puVar53 < &DAT_00000008) {
                auVar21._8_8_ = 0;
                auVar21._0_8_ = uStack_258;
                _local_260 = auVar21 << 0x40;
                auVar10._12_4_ = 0;
                auVar10._0_12_ = stack0xfffffda4;
                _local_260 = auVar10 << 0x20;
                puVar39 = (uint *)(0x3f - bVar42 >> 3);
                if (puVar53 <= puVar39) {
                  puVar39 = puVar53;
                }
                memcpy(local_260,local_324,(size_t)puVar39);
                uVar64 = local_260._0_4_ << (bVar42 & 0x1f);
                uVar60 = uVar64;
                uVar63 = local_260._4_4_ << (bVar42 & 0x1f) |
                         (uint)local_260._0_4_ >> 0x20 - (bVar42 & 0x1f);
                if ((bVar42 & 0x20) != 0) {
                  uVar60 = 0;
                  uVar63 = uVar64;
                }
                if (0x3f < bVar42) {
                  uVar63 = 0;
                  uVar60 = 0;
                }
                puVar56 = (uint *)(uVar63 | (uint)local_320);
                uVar60 = uVar60 | uVar50;
                bVar42 = bVar42 + (char)puVar39 * '\b';
                param_2[0xd5] = (uint)puVar56;
                param_2[0xd4] = uVar60;
              }
              else {
                uVar64 = *local_324 << (bVar42 & 0x1f);
                uVar60 = uVar64;
                uVar63 = local_324[1] << (bVar42 & 0x1f) | *local_324 >> 0x20 - (bVar42 & 0x1f);
                if ((bVar42 & 0x20) != 0) {
                  uVar60 = 0;
                  uVar63 = uVar64;
                }
                uVar60 = uVar60 | uVar50;
                puVar56 = (uint *)(uVar63 | (uint)local_320);
                puVar39 = (uint *)(0x3f - bVar42 >> 3);
                param_2[0xd4] = uVar60;
                param_2[0xd5] = (uint)puVar56;
                if (puVar53 < puVar39) goto LAB_100a0f4c;
                bVar42 = bVar42 | 0x38;
              }
              *(byte *)((int)param_2 + 0x3a2) = bVar42;
              local_324 = (uint *)((int)local_324 + (int)puVar39);
              puVar53 = (uint *)((int)puVar53 - (int)puVar39);
            }
          }
          puVar45 = (uint *)((uint)local_30c & 0xff);
          *(undefined1 *)((int)puVar39 + 0x3a3) = 6;
          puVar46 = puVar39;
          local_310 = puVar56;
          puVar39 = puVar57;
          goto LAB_100a093d;
        case 2:
switchD_1009e828_caseD_2:
          local_30c = (uint *)(uint)bVar42;
          if (local_31c < &DAT_00000008) {
            bVar33 = *(byte *)((int)param_2 + 0x3a2);
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uStack_258;
            _local_260 = auVar22 << 0x40;
            auVar11._12_4_ = 0;
            auVar11._0_12_ = stack0xfffffda4;
            _local_260 = auVar11 << 0x20;
            puVar39 = (uint *)(0x3f - bVar33 >> 3);
            if (local_31c <= puVar39) {
              puVar39 = local_31c;
            }
            memcpy(local_260,local_314,(size_t)puVar39);
            uVar63 = local_260._0_4_ << (bVar33 & 0x1f);
            uVar50 = uVar63;
            uVar60 = local_260._4_4_ << (bVar33 & 0x1f) |
                     (uint)local_260._0_4_ >> 0x20 - (bVar33 & 0x1f);
            if ((bVar33 & 0x20) != 0) {
              uVar50 = 0;
              uVar60 = uVar63;
            }
            if (0x3f < bVar33) {
              uVar60 = 0;
              uVar50 = 0;
            }
            bVar33 = (char)puVar39 * '\b' + bVar33;
            local_320 = (uint *)(uVar60 | param_2[0xd5]);
            uVar50 = uVar50 | param_2[0xd4];
            param_2[0xd4] = uVar50;
            param_2[0xd5] = (uint)local_320;
            *(byte *)((int)param_2 + 0x3a2) = bVar33;
          }
          else {
            bVar33 = *(byte *)((int)param_2 + 0x3a2);
            uVar50 = 0;
            uVar60 = *local_314 << (bVar33 & 0x1f);
            if ((bVar33 & 0x20) == 0) {
              uVar50 = uVar60;
              uVar60 = local_314[1] << (bVar33 & 0x1f) | *local_314 >> 0x20 - (bVar33 & 0x1f);
            }
            local_320 = (uint *)(uVar60 | param_2[0xd5]);
            uVar50 = uVar50 | param_2[0xd4];
            param_2[0xd4] = uVar50;
            param_2[0xd5] = (uint)local_320;
            puVar39 = (uint *)(0x3f - bVar33 >> 3);
            puVar53 = local_31c;
            if (local_31c < puVar39) goto LAB_100a0f4c;
            bVar33 = bVar33 | 0x38;
            *(byte *)((int)param_2 + 0x3a2) = bVar33;
          }
          uVar60 = param_2[0xd2];
          local_314 = (uint *)((int)local_314 + (int)puVar39);
          puVar39 = (uint *)((int)local_31c - (int)puVar39);
          local_310 = (uint *)(uVar60 * 3);
          local_31c = puVar39;
          if ((uint *)((uint)bVar33 + (int)puVar39 * 8) < local_310) {
LAB_1009f73a:
            bVar42 = (byte)local_30c;
            goto LAB_100a0937;
          }
          local_2a0 = SUB1615((undefined1  [16])0x0,0);
          uStack_291 = 0;
          if (uVar60 != 0) {
            iVar47 = -0x13;
            local_308 = local_314;
            do {
              local_2a0[(int)(&PTR_s_C__Users_runneradmin__cargo_regi_1014f208)[iVar47]] =
                   (byte)uVar50 & 7;
              uVar50 = uVar50 >> 3 | (int)local_320 << 0x1d;
              local_320 = (uint *)((uint)local_320 >> 3);
              bVar33 = bVar33 - 3;
              if (iVar47 == -2) {
                if (local_31c < &DAT_00000008) {
                  auVar23._8_8_ = 0;
                  auVar23._0_8_ = uStack_258;
                  _local_260 = auVar23 << 0x40;
                  auVar12._12_4_ = 0;
                  auVar12._0_12_ = stack0xfffffda4;
                  _local_260 = auVar12 << 0x20;
                  puVar39 = (uint *)(0x3f - bVar33 >> 3);
                  if (local_31c <= puVar39) {
                    puVar39 = local_31c;
                  }
                  memcpy(local_260,local_314,(size_t)puVar39);
                  uVar52 = local_260._0_4_ << (bVar33 & 0x1f);
                  uVar64 = uVar52;
                  uVar63 = local_260._4_4_ << (bVar33 & 0x1f) |
                           (uint)local_260._0_4_ >> 0x20 - (bVar33 & 0x1f);
                  if ((bVar33 & 0x20) != 0) {
                    uVar64 = 0;
                    uVar63 = uVar52;
                  }
                  if (0x3f < bVar33) {
                    uVar63 = 0;
                    uVar64 = 0;
                  }
                  local_320 = (uint *)(uVar63 | (uint)local_320);
                  uVar50 = uVar64 | uVar50;
                  bVar33 = bVar33 + (char)puVar39 * '\b';
                }
                else {
                  uVar52 = *local_314 << (bVar33 & 0x1f);
                  uVar64 = uVar52;
                  uVar63 = local_314[1] << (bVar33 & 0x1f) | *local_314 >> 0x20 - (bVar33 & 0x1f);
                  if ((bVar33 & 0x20) != 0) {
                    uVar64 = 0;
                    uVar63 = uVar52;
                  }
                  uVar50 = uVar64 | uVar50;
                  local_320 = (uint *)(uVar63 | (uint)local_320);
                  puVar39 = (uint *)(0x3f - bVar33 >> 3);
                  if (local_31c < puVar39) {
                    param_2[0xd5] = (uint)local_320;
                    param_2[0xd4] = uVar50;
                    *(byte *)((int)param_2 + 0x3a2) = bVar33;
                    puVar53 = local_31c;
                    goto LAB_100a0f4c;
                  }
                  bVar33 = bVar33 | 0x38;
                }
                local_314 = (uint *)((int)puVar39 + (int)local_314);
                puVar39 = (uint *)((int)local_31c - (int)puVar39);
                local_31c = puVar39;
                local_308 = local_314;
                if (-uVar60 == -0x12) goto LAB_1009f950;
              }
              else if (-uVar60 + iVar47 == -0x14) goto LAB_1009f950;
              iVar47 = iVar47 + 1;
              if (iVar47 == 0) {
                param_2[0xd5] = (uint)local_320;
                param_2[0xd4] = uVar50;
                *(byte *)((int)param_2 + 0x3a2) = bVar33;
                FUN_10136b52(0x13,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_1014f208);
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
            } while( true );
          }
          goto LAB_1009f980;
        case 3:
switchD_1009e828_caseD_3:
          local_30c = (uint *)(uint)bVar42;
          puVar46 = (uint *)param_2[0xd0];
          puVar45 = (uint *)param_2[0xd3];
          puVar57 = (uint *)(param_2[0xd1] + (int)puVar46);
          if (puVar45 < puVar57) {
            do {
              if (local_31c < &DAT_00000008) {
                bVar33 = *(byte *)((int)param_2 + 0x3a2);
                local_320 = (uint *)(uint)bVar33;
                auVar19._8_8_ = 0;
                auVar19._0_8_ = uStack_258;
                _local_260 = auVar19 << 0x40;
                auVar8._12_4_ = 0;
                auVar8._0_12_ = stack0xfffffda4;
                _local_260 = auVar8 << 0x20;
                puVar46 = (uint *)(0x3fU - (int)local_320 >> 3);
                if (local_31c <= puVar46) {
                  puVar46 = local_31c;
                }
                memcpy(local_260,local_314,(size_t)puVar46);
                uVar63 = local_260._0_4_ << (bVar33 & 0x1f);
                uVar50 = uVar63;
                uVar60 = local_260._4_4_ << (bVar33 & 0x1f) |
                         (uint)local_260._0_4_ >> 0x20 - (bVar33 & 0x1f);
                if ((bVar33 & 0x20) != 0) {
                  uVar50 = 0;
                  uVar60 = uVar63;
                }
                if ((uint *)0x3f < local_320) {
                  uVar60 = 0;
                  uVar50 = 0;
                }
                local_31c = (uint *)((int)local_31c - (int)puVar46);
                local_314 = (uint *)((int)local_314 + (int)puVar46);
                bVar33 = (char)puVar46 * '\b' + bVar33;
                local_310 = (uint *)(uVar60 | param_2[0xd5]);
                uVar50 = uVar50 | param_2[0xd4];
                param_2[0xd4] = uVar50;
                param_2[0xd5] = (uint)local_310;
                *(byte *)((int)param_2 + 0x3a2) = bVar33;
                if (bVar33 < 7) goto LAB_1009f50b;
              }
              else {
                bVar33 = *(byte *)((int)param_2 + 0x3a2);
                uVar63 = *local_314 << (bVar33 & 0x1f);
                uVar50 = uVar63;
                uVar60 = local_314[1] << (bVar33 & 0x1f) | *local_314 >> 0x20 - (bVar33 & 0x1f);
                if ((bVar33 & 0x20) != 0) {
                  uVar50 = 0;
                  uVar60 = uVar63;
                }
                local_310 = (uint *)(uVar60 | param_2[0xd5]);
                uVar50 = uVar50 | param_2[0xd4];
                puVar39 = (uint *)(0x3f - bVar33 >> 3);
                param_2[0xd4] = uVar50;
                param_2[0xd5] = (uint)local_310;
                puVar53 = local_31c;
                if (local_31c < puVar39) goto LAB_100a0f4c;
                local_314 = (uint *)((int)local_314 + (int)puVar39);
                bVar33 = bVar33 | 0x38;
                *(byte *)((int)param_2 + 0x3a2) = bVar33;
                local_31c = (uint *)((int)local_31c - (int)puVar39);
              }
              uVar60 = param_2[uVar50 & 0x7f];
              bVar43 = (byte)uVar60 & 7;
              bVar34 = (byte)(uVar60 >> 0x10);
              local_320 = (uint *)(CONCAT31(local_320._1_3_,(byte)uVar60) & 0xffffff07);
              if (0xf < bVar34) {
                if (bVar34 < 0x13) {
                  if (bVar34 == 0x12) {
                    bVar43 = bVar43 + 7;
                    if (bVar33 < bVar43) goto LAB_1009f73a;
                    local_308 = (uint *)0xb;
LAB_1009edd0:
                    bVar33 = 0;
LAB_1009edd2:
                    iVar47 = ((uVar50 & ~(-1 << bVar43)) >> (byte)local_320 |
                             ((uint)local_310 & ~(0x7fffffffU >> (~bVar43 & 0x1f) | -1 << bVar43))
                             << 0x20 - (byte)local_320) + (int)local_308;
                    if ((uint *)((int)puVar45 + iVar47) <= puVar57) {
                      iVar49 = 0;
                      do {
                        uVar60 = iVar49 + param_2[0xd3];
                        if (0x13f < uVar60) {
                          FUN_10136b52(uVar60,0x140,&PTR_s_C__Users_runneradmin__cargo_regi_1014f19c
                                      );
                    /* WARNING: Does not return */
                          pcVar3 = (code *)invalidInstructionException();
                          (*pcVar3)();
                        }
                        *(byte *)((int)puVar37 + iVar49 + param_2[0xd3]) = bVar33;
                        iVar49 = iVar49 + 1;
                      } while (iVar47 != iVar49);
                      puVar45 = (uint *)(iVar47 + param_2[0xd3]);
                      param_2[0xd3] = (uint)puVar45;
                      uVar60 = param_2[0xd5];
                      uVar50 = param_2[0xd4] >> bVar43 | uVar60 << 0x20 - bVar43;
                      goto LAB_1009eb9a;
                    }
                  }
                  else {
                    if ((uVar60 >> 0x10 & 0xff) == 0x11) {
                      bVar43 = bVar43 + 3;
                      if (bVar43 <= bVar33) {
                        local_308 = (uint *)0x3;
                        goto LAB_1009edd0;
                      }
                      goto LAB_1009f73a;
                    }
                    bVar43 = bVar43 + 2;
                    if (bVar33 < bVar43) goto LAB_1009f50b;
                    if (puVar45 != (uint *)0x0) {
                      if ((uint *)0x140 < puVar45) {
                        FUN_10136b52((undefined1 *)((int)puVar45 + -1),0x140,
                                     &PTR_s_C__Users_runneradmin__cargo_regi_1014f18c);
                    /* WARNING: Does not return */
                        pcVar3 = (code *)invalidInstructionException();
                        (*pcVar3)();
                      }
                      local_308 = (uint *)0x3;
                      bVar33 = *(byte *)((int)param_2 + 0x1ff + (int)puVar45);
                      goto LAB_1009edd2;
                    }
                  }
                  uVar29 = 6;
                  goto LAB_100a195e;
                }
                ppuVar72 = &PTR_s_C__Users_runneradmin__cargo_regi_1014f17c;
                goto LAB_1009e865;
              }
              if ((uint *)0x13f < puVar45) {
                FUN_10136b52(puVar45,0x140,&PTR_s_C__Users_runneradmin__cargo_regi_1014f1ac);
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              *(byte *)((int)(param_2 + 0x80) + (int)puVar45) = bVar34;
              puVar45 = (uint *)(param_2[0xd3] + 1);
              param_2[0xd3] = (uint)puVar45;
              uVar60 = param_2[0xd5];
              uVar50 = param_2[0xd4] >> (byte)local_320 | uVar60 << 0x20 - (byte)local_320;
              bVar43 = (byte)local_320;
LAB_1009eb9a:
              param_2[0xd4] = uVar50;
              param_2[0xd5] = uVar60 >> bVar43;
              *(char *)((int)param_2 + 0x3a2) = *(char *)((int)param_2 + 0x3a2) - bVar43;
            } while (puVar45 < puVar57);
            puVar46 = (uint *)param_2[0xd0];
          }
          puVar53 = puVar57;
          if (puVar57 < (uint *)0x141) {
            if (puVar57 < puVar46) {
              ppuVar72 = &PTR_s_C__Users_runneradmin__rustup_too_1015de74;
              goto LAB_100a0f65;
            }
            if (0x20 < (uint)((int)puVar57 - (int)puVar46)) {
              ppuVar72 = &PTR_s_C__Users_runneradmin__cargo_regi_1014f16c;
LAB_100a1184:
              FUN_101369c0("dest is out of boundsC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\inflate\\writer.rs"
                           ,0x2b,ppuVar72);
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            memmove(param_2 + 200,(byte *)((int)puVar46 + (int)puVar37),(int)puVar57 - (int)puVar46)
            ;
            uVar60 = param_2[0xd0];
            if (uVar60 < 0x120) {
              memset((void *)((int)param_2 + uVar60 + 0x200),0,0x120 - uVar60);
              uVar60 = param_2[0xd1];
              if (0x13f < uVar60 + 0x120) goto LAB_1009eec4;
LAB_1009f027:
              memset((void *)((int)param_2 + uVar60 + 800),0,0x20 - uVar60);
              bVar33 = (byte)param_2[0xc0];
            }
            else {
              uVar60 = param_2[0xd1];
              if (uVar60 + 0x120 < 0x140) goto LAB_1009f027;
LAB_1009eec4:
              bVar33 = (byte)param_2[0xc0];
            }
            if (bVar33 != 0) {
              puVar53 = (uint *)param_2[0xd0];
              memset(local_260,0,0x240);
              param_2[0xda] = 0;
              if ((uint *)0x140 < puVar53) {
                puVar46 = (uint *)0x0;
                ppuVar72 = &PTR_s_C__Users_runneradmin__cargo_regi_1014e630;
                goto LAB_100a0f65;
              }
              if (puVar53 < (uint *)0x121) {
                cVar30 = FUN_100a1e70((byte *)puVar37,(uint)puVar53,0x1014e120,0x120,(int)local_260,
                                      (uint)puVar53,(uint *)param_2[0xde],0x1000,local_2a4,'\0',
                                      '\x01');
                if (cVar30 != '\0') {
                  *(undefined2 *)(param_2 + 0xe0) = local_60;
                  *(ushort *)((int)param_2 + 0x382) = ~(ushort)(-1 << (bVar33 & 0xf));
                  *(byte *)(param_2 + 0xe1) = bVar33;
                  auVar71._0_4_ = -(uint)(param_2[0xcc] == 0 && param_2[200] == 0);
                  auVar71._4_4_ = -(uint)(param_2[0xcd] == 0 && param_2[0xc9] == 0);
                  auVar71._8_4_ = -(uint)(param_2[0xce] == 0 && param_2[0xca] == 0);
                  auVar71._12_4_ = -(uint)(param_2[0xcf] == 0 && param_2[0xcb] == 0);
                  iVar47 = movmskps((uint)bVar33,auVar71);
                  if (iVar47 == 0xf) {
                    memset((void *)param_2[0xdf],0,0x800);
                  }
                  else {
                    local_270 = (undefined1  [16])0x0;
                    local_280 = (undefined1  [16])0x0;
                    auStack_28d = SUB1613((undefined1  [16])0x0,3);
                    local_2a0 = SUB1615((undefined1  [16])0x0,0);
                    uStack_291 = 0;
                    cVar30 = FUN_100a1e70((byte *)(param_2 + 200),0x20,0x1014e5b0,0x20,
                                          (int)local_2a0,0x20,(uint *)param_2[0xdf],0x200,local_2ac,
                                          '\x01','\0');
                    if (cVar30 == '\0') {
                      uVar29 = 9;
                      goto LAB_100a195e;
                    }
                  }
                  *(undefined1 *)((int)param_2 + 0x3a3) = 4;
                  puVar57 = param_6;
                  goto LAB_1009f529;
                }
                uVar29 = 7;
                goto LAB_100a195e;
              }
              puVar46 = (uint *)0x0;
              ppuVar72 = &PTR_s_C__Users_runneradmin__cargo_regi_1014e5a0;
              param_6 = (uint *)0x120;
              goto LAB_100a117a;
            }
            uVar29 = 8;
            goto LAB_100a195e;
          }
          puVar46 = (uint *)0x0;
          ppuVar72 = &PTR_s_C__Users_runneradmin__rustup_too_1015de64;
LAB_100a0f65:
          param_6 = (uint *)0x140;
          goto LAB_100a117a;
        case 4:
switchD_1009e828_caseD_4:
          puVar45 = puVar53;
          if (local_31c < &DAT_00000008) {
            bVar42 = *(byte *)((int)param_2 + 0x3a2);
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uStack_258;
            _local_260 = auVar26 << 0x40;
            auVar15._12_4_ = 0;
            auVar15._0_12_ = stack0xfffffda4;
            _local_260 = auVar15 << 0x20;
            puVar46 = (uint *)(0x3f - bVar42 >> 3);
            if (local_31c <= puVar46) {
              puVar46 = local_31c;
            }
            memcpy(local_260,local_314,(size_t)puVar46);
            uVar63 = local_260._0_4_ << (bVar42 & 0x1f);
            uVar50 = uVar63;
            uVar60 = local_260._4_4_ << (bVar42 & 0x1f) |
                     (uint)local_260._0_4_ >> 0x20 - (bVar42 & 0x1f);
            if ((bVar42 & 0x20) != 0) {
              uVar50 = 0;
              uVar60 = uVar63;
            }
            if (0x3f < bVar42) {
              uVar60 = 0;
              uVar50 = 0;
            }
            local_310 = (uint *)(uVar60 | param_2[0xd5]);
            local_30c = (uint *)(uVar50 | param_2[0xd4]);
            bVar42 = (char)puVar46 * '\b' + bVar42;
            local_314 = (uint *)((int)local_314 + (int)puVar46);
            param_2[0xd4] = (uint)local_30c;
            param_2[0xd5] = (uint)local_310;
            *(byte *)((int)param_2 + 0x3a2) = bVar42;
            local_2c8 = param_2[0xdc];
            local_2c4 = param_2[0xd9];
            local_31c = (uint *)((int)local_31c - (int)puVar46);
            local_2c0 = param_2[0xdf];
            local_2d4 = param_2[0xdd];
            if (local_31c < &DAT_00000008) goto LAB_100a118e;
          }
          else {
            bVar42 = *(byte *)((int)param_2 + 0x3a2);
            uVar50 = 0;
            uVar60 = *local_314 << (bVar42 & 0x1f);
            if ((bVar42 & 0x20) == 0) {
              uVar50 = uVar60;
              uVar60 = local_314[1] << (bVar42 & 0x1f) | *local_314 >> 0x20 - (bVar42 & 0x1f);
            }
            local_310 = (uint *)(uVar60 | param_2[0xd5]);
            local_308 = (uint *)(uVar50 | param_2[0xd4]);
            param_2[0xd5] = (uint)local_310;
            param_2[0xd4] = (uint)local_308;
            puVar39 = (uint *)(0x3f - bVar42 >> 3);
            puVar57 = (uint *)((int)local_31c - (int)puVar39);
            puVar53 = local_31c;
            if (local_31c < puVar39) goto LAB_100a0f4c;
            bVar42 = bVar42 | 0x38;
            local_314 = (uint *)((int)local_314 + (int)puVar39);
            *(byte *)((int)param_2 + 0x3a2) = bVar42;
            local_2c4 = param_2[0xd9];
            local_2c8 = param_2[0xdc];
            local_2c0 = param_2[0xdf];
            local_2d4 = param_2[0xdd];
            if (param_6 < local_318 + 2) {
LAB_100a0969:
              local_30c = local_308;
              local_31c = puVar57;
              if (puVar57 < &DAT_00000008) goto LAB_100a118e;
            }
            else {
              if (&DAT_00000008 <= puVar57) {
                uVar60 = param_2[0xde];
                local_2f8 = *(uint **)(uVar60 + ((uint)local_308 & 0xfff) * 4);
                puVar53 = puVar57;
LAB_1009fb20:
                if ((short)local_2f8 < 0) {
                  bVar33 = (byte)local_2f8;
                  local_30c = (uint *)((uint)local_2f8 & 0xff);
                  puVar46 = (uint *)((uint)local_310 >> (bVar33 & 0x1f));
                  local_300 = puVar46;
                  puVar57 = (uint *)((uint)local_308 >> (bVar33 & 0x1f) |
                                    (int)local_310 << 0x20 - (bVar33 & 0x1f));
                  if (((uint)local_2f8 & 0x20) != 0) {
                    local_300 = (uint *)0x0;
                    puVar57 = puVar46;
                  }
                  puVar46 = *(uint **)(uVar60 + ((uint)puVar57 & 0xfff) * 4);
                  bVar43 = (char)puVar46 + bVar33;
                  uVar64 = (uint)local_310 >> (bVar43 & 0x1f);
                  uVar63 = uVar64;
                  uVar50 = (uint)local_308 >> (bVar43 & 0x1f) |
                           (int)local_310 << 0x20 - (bVar43 & 0x1f);
                  if ((bVar43 & 0x20) != 0) {
                    uVar63 = 0;
                    uVar50 = uVar64;
                  }
                  local_320 = *(uint **)(uVar60 + (uVar50 & 0xfff) * 4);
                  bVar34 = bVar43 + (char)local_320;
                  uVar40 = (uint)local_310 >> (bVar34 & 0x1f);
                  uVar52 = uVar40;
                  uVar64 = (uint)local_308 >> (bVar34 & 0x1f) |
                           (int)local_310 << 0x20 - (bVar34 & 0x1f);
                  if ((bVar34 & 0x20) != 0) {
                    uVar52 = 0;
                    uVar64 = uVar40;
                  }
                  if (param_6 <= local_318) {
                    FUN_10136b52(local_318,param_6,&PTR_s_C__Users_runneradmin__cargo_regi_1014e640)
                    ;
                    /* WARNING: Does not return */
                    pcVar3 = (code *)invalidInstructionException();
                    (*pcVar3)();
                  }
                  local_2a8 = *(uint **)(uVar60 + (uVar64 & 0xfff) * 4);
                  *(char *)(param_5 + (int)local_318) = (char)((uint)local_2f8 >> 0x10);
                  if (param_6 <= (uint *)((int)local_318 + 1)) {
                    FUN_10136b52((uint *)((int)local_318 + 1),param_6,
                                 &PTR_s_C__Users_runneradmin__cargo_regi_1014e650);
                    /* WARNING: Does not return */
                    pcVar3 = (code *)invalidInstructionException();
                    (*pcVar3)();
                  }
                  *(char *)(param_5 + 1 + (int)local_318) = (char)((uint)local_2f8 >> 0x18);
                  local_318 = (uint *)(((uint)local_2f8 >> 8 & 0xf) + (int)local_318);
                  if (-1 < (short)puVar46) {
                    bVar42 = bVar42 - bVar33;
                    param_2[0xd4] = (uint)puVar57;
                    param_2[0xd5] = (uint)local_300;
                    *(byte *)((int)param_2 + 0x3a2) = bVar42;
                    if (bVar42 < 0x30) {
                      uVar64 = *local_314 << (bVar42 & 0x1f);
                      uVar63 = uVar64;
                      uVar50 = local_314[1] << (bVar42 & 0x1f) |
                               *local_314 >> 0x20 - (bVar42 & 0x1f);
                      if ((bVar42 & 0x20) != 0) {
                        uVar63 = 0;
                        uVar50 = uVar64;
                      }
                      puVar51 = (uint *)(uVar63 | (uint)puVar57);
                      puVar56 = (uint *)(uVar50 | (uint)local_300);
                      param_2[0xd5] = (uint)puVar56;
                      param_2[0xd4] = (uint)puVar51;
                      puVar39 = (uint *)(uint)((byte)(0x3f - bVar42) >> 3);
                      local_320 = puVar46;
                      local_308 = puVar57;
                      goto LAB_1009fd91;
                    }
                    local_2f8 = (uint *)((uint)puVar46 & 0xff);
                    local_320 = puVar46;
                    local_310 = local_300;
                    local_308 = puVar57;
                    goto LAB_1009fe00;
                  }
                  if (param_6 <= local_318) {
                    FUN_10136b52(local_318,param_6,&PTR_s_C__Users_runneradmin__cargo_regi_1014e660)
                    ;
                    /* WARNING: Does not return */
                    pcVar3 = (code *)invalidInstructionException();
                    (*pcVar3)();
                  }
                  *(char *)(param_5 + (int)local_318) = (char)((uint)puVar46 >> 0x10);
                  if (param_6 <= (uint *)((int)local_318 + 1)) {
                    FUN_10136b52((uint *)((int)local_318 + 1),param_6,
                                 &PTR_s_C__Users_runneradmin__cargo_regi_1014e670);
                    /* WARNING: Does not return */
                    pcVar3 = (code *)invalidInstructionException();
                    (*pcVar3)();
                  }
                  *(char *)(param_5 + 1 + (int)local_318) = (char)((uint)puVar46 >> 0x18);
                  local_318 = (uint *)((int)local_318 + ((uint)puVar46 >> 8 & 0xf));
                  if (-1 < (short)local_320) {
                    param_2[0xd4] = uVar50;
                    bVar42 = bVar42 - bVar43;
                    param_2[0xd5] = uVar63;
                    uVar40 = *local_314 << (bVar42 & 0x1f);
                    uVar52 = uVar40;
                    uVar64 = local_314[1] << (bVar42 & 0x1f) | *local_314 >> 0x20 - (bVar42 & 0x1f);
                    if ((bVar42 & 0x20) != 0) {
                      uVar52 = 0;
                      uVar64 = uVar40;
                    }
                    puVar56 = (uint *)(uVar64 | uVar63);
                    puVar51 = (uint *)(uVar52 | uVar50);
                    puVar39 = (uint *)(0x3f - bVar42 >> 3);
                    *(byte *)((int)param_2 + 0x3a2) = bVar42;
                    param_2[0xd5] = (uint)puVar56;
                    param_2[0xd4] = (uint)puVar51;
                    local_308 = puVar51;
                    local_300 = puVar56;
                    if (puVar39 <= puVar53) {
LAB_1009fd91:
                      local_2fc = (uint *)((uint)local_320 & 0xff);
                      bVar42 = bVar42 | 0x38;
                      puVar53 = (uint *)((int)puVar53 - (int)puVar39);
                      local_314 = (uint *)((int)local_314 + (int)puVar39);
                      local_310 = local_300;
                      local_30c = local_308;
                      *(byte *)((int)param_2 + 0x3a2) = bVar42;
                      puVar46 = local_320;
                      local_2f8 = local_2fc;
                      puVar57 = local_308;
                      local_308 = puVar51;
                      local_300 = puVar56;
                      goto LAB_1009fe00;
                    }
                    goto LAB_100a0f4c;
                  }
                  if (param_6 <= local_318) {
                    FUN_10136b52(local_318,param_6,&PTR_s_C__Users_runneradmin__cargo_regi_1014e7fc)
                    ;
                    /* WARNING: Does not return */
                    pcVar3 = (code *)invalidInstructionException();
                    (*pcVar3)();
                  }
                  *(char *)(param_5 + (int)local_318) = (char)((uint)local_320 >> 0x10);
                  puVar39 = (uint *)((int)local_318 + 1);
                  if (param_6 <= puVar39) {
                    FUN_10136b52(puVar39,param_6,&PTR_s_C__Users_runneradmin__cargo_regi_1014e80c);
                    /* WARNING: Does not return */
                    pcVar3 = (code *)invalidInstructionException();
                    (*pcVar3)();
                  }
                  *(char *)(param_5 + (int)puVar39) = (char)((uint)local_320 >> 0x18);
                  param_2[0xd5] = uVar52;
                  bVar42 = bVar42 - bVar34;
                  param_2[0xd4] = uVar64;
                  *(byte *)((int)param_2 + 0x3a2) = bVar42;
                  uVar40 = *local_314 << (bVar42 & 0x1f);
                  uVar63 = uVar40;
                  uVar50 = local_314[1] << (bVar42 & 0x1f) | *local_314 >> 0x20 - (bVar42 & 0x1f);
                  if ((bVar42 & 0x20) != 0) {
                    uVar63 = 0;
                    uVar50 = uVar40;
                  }
                  local_310 = (uint *)(uVar50 | uVar52);
                  local_30c = (uint *)(uVar63 | uVar64);
                  param_2[0xd5] = (uint)local_310;
                  param_2[0xd4] = (uint)local_30c;
                  puVar39 = (uint *)(0x3f - bVar42 >> 3);
                  puVar57 = (uint *)((int)puVar53 - (int)puVar39);
                  if (puVar53 < puVar39) goto LAB_100a0f4c;
                  bVar42 = bVar42 | 0x38;
                  *(byte *)((int)param_2 + 0x3a2) = bVar42;
                  local_314 = (uint *)((int)local_314 + (int)puVar39);
                  local_318 = (uint *)((int)local_318 + ((uint)local_320 >> 8 & 0xf));
                  local_320 = puVar46;
                  local_2f8 = local_2a8;
                }
                else {
                  local_300 = local_310;
                  puVar46 = local_2f8;
                  puVar57 = local_308;
LAB_1009fe00:
                  if (((uint)puVar46 & 0x4000) == 0) {
                    local_2fc = (uint *)((uint)puVar46 >> 0x10);
                  }
                  else {
                    if (((uint)puVar46 & 0x2000) == 0) {
                      bVar33 = (byte)local_2f8;
                      if (bVar33 == 0) goto LAB_100a1cd3;
                      uVar60 = (uint)local_300 >> (bVar33 & 0x1f);
                      uVar50 = 0;
                      if (((uint)local_2f8 & 0x20) == 0) {
                        uVar50 = uVar60;
                        uVar60 = (uint)local_308 >> (bVar33 & 0x1f) |
                                 (int)local_300 << 0x20 - (bVar33 & 0x1f);
                      }
                      param_2[0xd4] = uVar60;
                      param_2[0xd5] = uVar50;
                      bVar33 = bVar42 - bVar33;
LAB_100a1c71:
                      *(byte *)((int)param_2 + 0x3a2) = bVar33;
                      *(char *)((int)param_2 + 0x3a3) =
                           ((char)param_2[0xe9] != '\0') * '\x05' + '\x01';
                      puVar46 = param_2;
                      local_310 = puVar57;
                      puVar39 = param_6;
                      local_31c = puVar53;
                      goto LAB_100a093d;
                    }
                    uVar50 = ((uint)puVar57 >> 0xc & (uint)puVar46 & 0xff) + ((uint)puVar46 >> 0x10)
                    ;
                    if (param_2[0xda] <= uVar50) {
                      FUN_10136b52(uVar50,param_2[0xda],
                                   &PTR_s_C__Users_runneradmin__cargo_regi_1014e680);
                    /* WARNING: Does not return */
                      pcVar3 = (code *)invalidInstructionException();
                      (*pcVar3)();
                    }
                    uVar2 = *(ushort *)(local_2c4 + uVar50 * 2);
                    puVar46 = (uint *)(uint)(uVar2 >> 4);
                    bVar33 = (byte)uVar2 & 0xf;
                    local_2f8 = (uint *)(uint)bVar33;
                    if (uVar2 < 0x1000) {
                      uVar50 = (uint)local_308 >> bVar33 | (int)local_300 << 0x20 - bVar33;
                      uVar63 = (uint)local_300 >> bVar33;
                      param_2[0xd5] = uVar63;
                      param_2[0xd4] = uVar50;
                      bVar42 = bVar42 - bVar33;
                      *(byte *)((int)param_2 + 0x3a2) = bVar42;
                      local_2f8 = *(uint **)(uVar60 + (uVar50 & 0xfff) * 4);
                      if (puVar53 < &DAT_00000008) {
                        auVar25._8_8_ = 0;
                        auVar25._0_8_ = uStack_258;
                        _local_260 = auVar25 << 0x40;
                        auVar14._12_4_ = 0;
                        auVar14._0_12_ = stack0xfffffda4;
                        _local_260 = auVar14 << 0x20;
                        puVar39 = (uint *)(0x3f - bVar42 >> 3);
                        if (puVar53 <= puVar39) {
                          puVar39 = puVar53;
                        }
                        memcpy(local_260,local_314,(size_t)puVar39);
                        uVar40 = local_260._0_4_ << (bVar42 & 0x1f);
                        uVar52 = uVar40;
                        uVar64 = local_260._4_4_ << (bVar42 & 0x1f) |
                                 (uint)local_260._0_4_ >> 0x20 - (bVar42 & 0x1f);
                        if ((bVar42 & 0x20) != 0) {
                          uVar52 = 0;
                          uVar64 = uVar40;
                        }
                        if (0x3f < bVar42) {
                          uVar64 = 0;
                          uVar52 = 0;
                        }
                        local_310 = (uint *)(uVar64 | uVar63);
                        local_30c = (uint *)(uVar52 | uVar50);
                        bVar42 = bVar42 + (char)puVar39 * '\b';
                        param_2[0xd5] = (uint)local_310;
                        param_2[0xd4] = (uint)local_30c;
                      }
                      else {
                        uVar40 = *local_314 << (bVar42 & 0x1f);
                        uVar52 = uVar40;
                        uVar64 = local_314[1] << (bVar42 & 0x1f) |
                                 *local_314 >> 0x20 - (bVar42 & 0x1f);
                        if ((bVar42 & 0x20) != 0) {
                          uVar52 = 0;
                          uVar64 = uVar40;
                        }
                        local_310 = (uint *)(uVar64 | uVar63);
                        local_30c = (uint *)(uVar52 | uVar50);
                        puVar39 = (uint *)(0x3f - bVar42 >> 3);
                        param_2[0xd5] = (uint)local_310;
                        param_2[0xd4] = (uint)local_30c;
                        if (puVar53 < puVar39) goto LAB_100a0f4c;
                        bVar42 = bVar42 | 0x38;
                      }
                      *(byte *)((int)param_2 + 0x3a2) = bVar42;
                      if (param_6 <= local_318) {
                        FUN_10136b52(local_318,param_6,
                                     &PTR_s_C__Users_runneradmin__cargo_regi_1014e7ec);
                    /* WARNING: Does not return */
                        pcVar3 = (code *)invalidInstructionException();
                        (*pcVar3)();
                      }
                      puVar57 = (uint *)((int)puVar53 - (int)puVar39);
                      local_314 = (uint *)((int)local_314 + (int)puVar39);
                      *(char *)(param_5 + (int)local_318) = (char)(uVar2 >> 4);
                      local_318 = (uint *)((int)local_318 + 1);
                      local_320 = puVar46;
                      goto LAB_100a0713;
                    }
                    if (puVar46 == (uint *)0x100) {
                      param_2[0xd4] = (uint)local_308 >> bVar33 | (int)local_300 << 0x20 - bVar33;
                      param_2[0xd5] = (uint)local_300 >> bVar33;
                      bVar33 = bVar42 - bVar33;
                      puVar57 = param_2;
                      goto LAB_100a1c71;
                    }
                    if ((undefined1 *)0x1c < (undefined1 *)((int)puVar46 + -0x101)) {
                      FUN_10136b52((undefined1 *)((int)puVar46 + -0x101),0x1d,
                                   &PTR_s_C__Users_runneradmin__cargo_regi_1014e704);
                    /* WARNING: Does not return */
                      pcVar3 = (code *)invalidInstructionException();
                      (*pcVar3)();
                    }
                    local_2fc = *(uint **)(&DAT_1014e28c + (int)puVar46 * 4);
                    puVar46 = (uint *)((uint)*(byte *)((int)puVar46 + 0x1015cb6b) << 8);
                  }
                  bVar33 = (byte)local_2f8;
                  uVar64 = (uint)local_310 >> (bVar33 & 0x1f);
                  uVar63 = uVar64;
                  uVar50 = (uint)puVar57 >> (bVar33 & 0x1f) |
                           (int)local_310 << 0x20 - (bVar33 & 0x1f);
                  if (((uint)local_2f8 & 0x20) != 0) {
                    uVar63 = 0;
                    uVar50 = uVar64;
                  }
                  bVar43 = (byte)((uint)puVar46 >> 8);
                  uVar52 = uVar63 >> (bVar43 & 0x1f);
                  uVar64 = uVar52;
                  if (((uint)puVar46 & 0x2000) != 0) {
                    uVar64 = 0;
                  }
                  uVar63 = uVar50 >> (bVar43 & 0x1f) | uVar63 << 0x20 - (bVar43 & 0x1f);
                  if (((uint)puVar46 & 0x2000) != 0) {
                    uVar63 = uVar52;
                  }
                  uVar52 = -1 << (bVar43 & 0x1f);
                  if (((uint)puVar46 & 0x2000) != 0) {
                    uVar52 = 0;
                  }
                  uVar40 = *(uint *)(local_2c0 + (uVar63 & 0x1ff) * 4);
                  if ((short)(ushort)uVar40 < 0) {
                    uVar65 = (uint)((ushort)uVar40 & 0xfff);
                    uVar40 = uVar40 >> 0x10;
                  }
                  else {
                    uVar29 = 0xb;
                    if ((uVar40 & 0xffff7f00) == 0) goto LAB_100a195e;
                    uVar40 = (uVar63 >> 9 & uVar40 & 0xff) + (uVar40 >> 0x10);
                    if (local_2d4 <= uVar40) {
                      FUN_10136b52(uVar40,local_2d4,&PTR_s_C__Users_runneradmin__cargo_regi_1014e714
                                  );
                    /* WARNING: Does not return */
                      pcVar3 = (code *)invalidInstructionException();
                      (*pcVar3)();
                    }
                    uVar2 = *(ushort *)(local_2c8 + uVar40 * 2);
                    if (0x1df < uVar2) goto LAB_100a195e;
                    uVar40 = (uint)*(ushort *)(&DAT_1014e724 + (uint)(uVar2 >> 4) * 2);
                    uVar65 = CONCAT11((&DAT_1015cca8)[uVar2 >> 4],(char)uVar2) & 0xffffff0f;
                  }
                  bVar34 = (byte)uVar65;
                  bVar35 = (byte)(uVar65 >> 8);
                  uVar58 = uVar64 >> (bVar34 & 0x1f);
                  if ((uVar65 & 0x20) == 0) {
                    uVar58 = uVar63 >> (bVar34 & 0x1f) | uVar64 << 0x20 - (bVar34 & 0x1f);
                  }
                  uVar63 = -1 << (bVar35 & 0x1f);
                  if ((uVar65 & 0x2000) != 0) {
                    uVar63 = 0;
                  }
                  uVar58 = ~uVar63 & uVar58;
                  puVar56 = (uint *)(uVar40 + uVar58);
                  puVar46 = (uint *)((int)local_318 - (int)puVar56);
                  if (local_318 < puVar56) goto LAB_100a195c;
                  bVar35 = bVar33 + bVar43 + bVar34 + bVar35;
                  uVar65 = (uint)local_300 >> (bVar35 & 0x1f);
                  uVar64 = uVar65;
                  uVar63 = (uint)local_308 >> (bVar35 & 0x1f) |
                           (int)local_300 << 0x20 - (bVar35 & 0x1f);
                  if ((bVar35 & 0x20) != 0) {
                    uVar64 = 0;
                    uVar63 = uVar65;
                  }
                  param_2[0xd4] = uVar63;
                  param_2[0xd5] = uVar64;
                  bVar42 = bVar42 - bVar35;
                  *(byte *)((int)param_2 + 0x3a2) = bVar42;
                  if (puVar53 < &DAT_00000008) {
                    auVar24._8_8_ = 0;
                    auVar24._0_8_ = uStack_258;
                    _local_260 = auVar24 << 0x40;
                    auVar13._12_4_ = 0;
                    auVar13._0_12_ = stack0xfffffda4;
                    _local_260 = auVar13 << 0x20;
                    puVar39 = (uint *)(0x3f - bVar42 >> 3);
                    if (puVar53 <= puVar39) {
                      puVar39 = puVar53;
                    }
                    memcpy(local_260,local_314,(size_t)puVar39);
                    uVar66 = local_260._0_4_ << (bVar42 & 0x1f);
                    uVar67 = uVar66;
                    uVar65 = local_260._4_4_ << (bVar42 & 0x1f) |
                             (uint)local_260._0_4_ >> 0x20 - (bVar42 & 0x1f);
                    if ((bVar42 & 0x20) != 0) {
                      uVar67 = 0;
                      uVar65 = uVar66;
                    }
                    if (0x3f < bVar42) {
                      uVar65 = 0;
                      uVar67 = 0;
                    }
                    local_310 = (uint *)(uVar65 | uVar64);
                    local_30c = (uint *)(uVar67 | uVar63);
                    bVar42 = bVar42 + (char)puVar39 * '\b';
                    param_2[0xd5] = (uint)local_310;
                    param_2[0xd4] = (uint)local_30c;
                    *(byte *)((int)param_2 + 0x3a2) = bVar42;
                  }
                  else {
                    uVar66 = *local_314 << (bVar42 & 0x1f);
                    uVar67 = uVar66;
                    uVar65 = local_314[1] << (bVar42 & 0x1f) | *local_314 >> 0x20 - (bVar42 & 0x1f);
                    if ((bVar42 & 0x20) != 0) {
                      uVar67 = 0;
                      uVar65 = uVar66;
                    }
                    local_310 = (uint *)(uVar65 | uVar64);
                    local_30c = (uint *)(uVar67 | uVar63);
                    puVar39 = (uint *)(0x3f - bVar42 >> 3);
                    param_2[0xd5] = (uint)local_310;
                    param_2[0xd4] = (uint)local_30c;
                    if (puVar53 < puVar39) goto LAB_100a0f4c;
                    bVar42 = bVar42 | 0x38;
                    *(byte *)((int)param_2 + 0x3a2) = bVar42;
                  }
                  puVar57 = (uint *)((int)puVar53 - (int)puVar39);
                  local_314 = (uint *)((int)local_314 + (int)puVar39);
                  local_2f8 = *(uint **)(uVar60 + ((uint)local_30c & 0xfff) * 4);
                  puVar41 = (undefined1 *)((int)local_2fc + (uVar50 & ~uVar52));
                  puVar68 = (undefined1 *)((int)param_6 - (int)local_318);
                  puVar48 = puVar41;
                  if (puVar68 < puVar41) {
                    puVar48 = puVar68;
                  }
                  local_320 = puVar46;
                  local_31c = puVar57;
                  if (uVar40 + uVar58 == 1) {
                    if (param_6 <= (uint *)((int)local_318 + -1)) {
                      FUN_10136b52((uint *)((int)local_318 + -1),param_6,
                                   &PTR_s_C__Users_runneradmin__cargo_regi_1014e760);
                    /* WARNING: Does not return */
                      pcVar3 = (code *)invalidInstructionException();
                      (*pcVar3)();
                    }
                    bVar33 = *(byte *)(param_5 + -1 + (int)local_318);
                    memset((undefined1 *)(param_5 + (int)local_318),(uint)bVar33,(size_t)puVar48);
                    if (puVar68 < puVar41) {
                      param_2[0xe2] = 1;
                      *(byte *)(param_2 + 0xe3) = bVar33;
                      param_2[0xe4] = (int)puVar41 - (int)puVar48;
                      local_318 = param_6;
                      goto LAB_100a1942;
                    }
                  }
                  else if (param_6 < (uint *)((int)local_318 + (int)(puVar41 + 0xf))) {
                    puVar59 = (undefined1 *)(uVar58 + uVar40);
                    if (puVar59 < puVar48) {
                      local_300 = (uint *)0x0;
                      local_308 = (uint *)((int)param_6 - (int)local_318);
                      if (param_6 < local_318) {
                        local_308 = (uint *)0x0;
                      }
                      puVar39 = puVar46;
                      if (puVar46 < param_6) {
                        puVar39 = param_6;
                      }
                      puVar62 = (undefined1 *)((int)puVar39 + ((uVar58 + uVar40) - (int)local_318));
                      if (local_308 <= puVar62) {
                        puVar62 = (undefined1 *)local_308;
                      }
                      if (puVar48 + -1 < puVar62) {
                        puVar62 = puVar48 + -1;
                      }
                      if (((undefined1 *)0xf < puVar62) && ((undefined1 *)0xf < puVar59)) {
                        uVar50 = (uint)(puVar62 + 1) & 0xf;
                        if (uVar50 == 0) {
                          uVar50 = 0x10;
                        }
                        local_300 = (uint *)(puVar62 + 1 + -uVar50);
                        iVar47 = ~(uint)puVar62 + uVar50;
                        puVar38 = (undefined4 *)(param_5 + (int)local_318);
                        do {
                          puVar61 = (undefined4 *)((int)puVar38 - (int)puVar59);
                          uVar4 = puVar61[1];
                          uVar5 = puVar61[2];
                          uVar6 = puVar61[3];
                          *puVar38 = *puVar61;
                          puVar38[1] = uVar4;
                          puVar38[2] = uVar5;
                          puVar38[3] = uVar6;
                          puVar38 = puVar38 + 4;
                          iVar47 = iVar47 + 0x10;
                        } while (iVar47 != 0);
                      }
                      puVar59 = (undefined1 *)(param_5 + (int)local_318);
                      puVar62 = (undefined1 *)(param_5 + (int)puVar46);
                      puVar39 = local_318;
                      puVar54 = puVar48;
                      do {
                        local_320 = puVar46;
                        if (param_6 <= (uint *)((int)local_320 + (int)local_300)) {
                          FUN_10136b52((uint *)((int)local_320 + (int)local_300),param_6,
                                       &PTR_s_C__Users_runneradmin__cargo_regi_1014e780);
                    /* WARNING: Does not return */
                          pcVar3 = (code *)invalidInstructionException();
                          (*pcVar3)();
                        }
                        if (local_300 == local_308) {
                          FUN_10136b52((undefined1 *)((int)local_300 + (int)puVar39),param_6,
                                       &PTR_s_C__Users_runneradmin__cargo_regi_1014e790);
                    /* WARNING: Does not return */
                          pcVar3 = (code *)invalidInstructionException();
                          (*pcVar3)();
                        }
                        puVar1 = puVar62 + (int)local_300;
                        local_308 = (uint *)((int)local_308 + -1);
                        puVar54 = puVar54 + -1;
                        puVar62 = puVar62 + 1;
                        puVar59[(int)local_300] = *puVar1;
                        puVar59 = puVar59 + 1;
                        puVar39 = (uint *)((int)puVar39 + 1);
                        puVar46 = (uint *)((int)local_320 + 1);
                      } while (local_300 != (uint *)puVar54);
                    }
                    else {
                      puVar53 = (uint *)((int)local_318 + ((int)puVar48 - (int)puVar59));
                      if (param_6 < puVar53) goto LAB_100a1d00;
                      if (puVar53 < puVar46) goto LAB_100a1d0d;
                      if ((uint *)((int)param_6 - ((int)puVar53 - (int)puVar46)) < local_318) {
                        ppuVar72 = &PTR_s_C__Users_runneradmin__cargo_regi_1014e770;
                        goto LAB_100a1184;
                      }
                      memmove((undefined1 *)(param_5 + (int)local_318),
                              (undefined1 *)((int)puVar46 + param_5),(int)puVar53 - (int)puVar46);
                    }
                    if (puVar68 < puVar41) {
                      param_2[0xe5] = 1;
                      param_2[0xe6] = (uint)puVar56;
                      param_2[0xe7] = (int)puVar41 - (int)puVar48;
                      local_318 = param_6;
                      goto LAB_100a1942;
                    }
                  }
                  else {
                    puVar53 = puVar46 + 4;
                    if (param_6 < puVar53) {
                      puVar46 = (uint *)0x0;
                      ppuVar72 = &PTR_s_C__Users_runneradmin__rustup_too_1015de64;
                      goto LAB_100a117a;
                    }
                    if ((uint *)0xffffffef < puVar46) {
                      ppuVar72 = &PTR_s_C__Users_runneradmin__rustup_too_1015de74;
                      goto LAB_100a117a;
                    }
                    if (puVar55 < local_318) {
                      ppuVar72 = &PTR_s_C__Users_runneradmin__cargo_regi_1014e7a0;
                      goto LAB_100a1184;
                    }
                    uVar4 = *(undefined4 *)(param_5 + (int)puVar46);
                    uVar5 = ((undefined4 *)(param_5 + (int)puVar46))[1];
                    *(undefined8 *)(param_5 + 8 + (int)local_318) =
                         *(undefined8 *)(param_5 + 8 + (int)puVar46);
                    *(undefined4 *)(param_5 + (int)local_318) = uVar4;
                    ((undefined4 *)(param_5 + (int)local_318))[1] = uVar5;
                    if (((undefined1 *)0x10 < puVar41) || (puVar56 < &DAT_00000010)) {
                      puVar39 = (uint *)&DAT_00000010;
                      if ((puVar56 < &DAT_00000011) && (puVar39 = puVar56, puVar56 == (uint *)0x0))
                      goto LAB_100a1d4c;
                      uVar50 = ((uint)puVar41 / (uint)puVar39 + 1) -
                               (uint)((uint)puVar41 % (uint)puVar39 == 0);
                      if (1 < uVar50) {
                        puVar53 = (uint *)((int)(puVar39 + 4) + (int)puVar46);
                        if (param_6 < puVar53) goto LAB_100a1cde;
                        puVar46 = (uint *)((int)puVar46 + (int)puVar39);
                        if ((uint *)0xffffffef < puVar46) goto LAB_100a1cf1;
                        if (puVar55 < (uint *)((int)puVar39 + (int)local_318)) {
LAB_100a0edc:
                          ppuVar72 = &PTR_s_C__Users_runneradmin__cargo_regi_1014e7dc;
                          goto LAB_100a1184;
                        }
                        local_308 = (uint *)(uVar50 - 2);
                        local_320 = (uint *)((int)puVar39 * 2 - (int)puVar56);
                        puVar41 = (undefined1 *)(param_5 - (int)puVar56);
                        puVar56 = puVar39;
                        iVar47 = param_5;
                        while( true ) {
                          puVar41 = (undefined1 *)((int)puVar39 + (int)puVar41);
                          iVar47 = iVar47 + (int)puVar39;
                          uVar4 = *(undefined4 *)(puVar41 + (int)local_318);
                          uVar5 = *(undefined4 *)((int)(puVar41 + (int)local_318) + 4);
                          bVar70 = local_308 == (uint *)0x0;
                          local_308 = (uint *)((int)local_308 + -1);
                          *(undefined8 *)(iVar47 + 8 + (int)local_318) =
                               *(undefined8 *)(puVar41 + 8 + (int)local_318);
                          *(undefined4 *)(iVar47 + (int)local_318) = uVar4;
                          ((undefined4 *)(iVar47 + (int)local_318))[1] = uVar5;
                          if (bVar70) break;
                          puVar53 = (uint *)((int)(local_318 + 4) + (int)local_320);
                          if (param_6 < (uint *)((int)(local_318 + 4) + (int)local_320)) {
                            puVar53 = (uint *)((int)(local_318 + 4) + (int)local_320);
                            goto LAB_100a1cde;
                          }
                          puVar46 = (uint *)((int)local_318 + (int)local_320);
                          if ((uint *)0xffffffef < puVar46) goto LAB_100a1cf1;
                          puVar56 = (uint *)((int)puVar56 + (int)puVar39);
                          local_320 = (uint *)((int)local_320 + (int)puVar39);
                          if (puVar55 < (uint *)((int)local_318 + (int)puVar56)) goto LAB_100a0edc;
                        }
                      }
                    }
                  }
                  local_318 = (uint *)((int)local_318 + (int)puVar48);
                }
LAB_100a0713:
                local_308 = local_30c;
                if ((param_6 < local_318 + 2) || (puVar53 = puVar57, puVar57 < &DAT_00000008))
                goto LAB_100a0969;
                goto LAB_1009fb20;
              }
              local_31c = puVar57;
              local_30c = local_308;
              if (puVar57 < &DAT_00000008) goto LAB_100a118e;
            }
          }
LAB_100a0976:
          uVar63 = *local_314 << (bVar42 & 0x1f);
          uVar50 = uVar63;
          uVar60 = local_314[1] << (bVar42 & 0x1f) | *local_314 >> 0x20 - (bVar42 & 0x1f);
          if ((bVar42 & 0x20) != 0) {
            uVar50 = 0;
            uVar60 = uVar63;
          }
          puVar46 = (uint *)(uVar50 | (uint)local_30c);
          local_30c = (uint *)(uVar60 | (uint)local_310);
          puVar39 = (uint *)(0x3f - bVar42 >> 3);
          param_2[0xd4] = (uint)puVar46;
          param_2[0xd5] = (uint)local_30c;
          puVar53 = local_31c;
          if (puVar39 <= local_31c) {
            *(byte *)((int)param_2 + 0x3a2) = bVar42 | 0x38;
            bVar43 = bVar42 | 0x38;
            local_310 = puVar46;
LAB_100a1241:
            local_31c = (uint *)((int)local_31c - (int)puVar39);
            local_314 = (uint *)((int)local_314 + (int)puVar39);
            puVar48 = (undefined1 *)((int)param_6 - (int)local_318);
            puVar53 = local_31c;
            puVar57 = local_30c;
            bVar42 = bVar43;
            if (puVar48 == (undefined1 *)0x0) {
              uVar60 = param_2[0xe5];
              local_320 = param_6;
            }
            else {
              uVar60 = *(uint *)(param_2[0xde] + ((uint)local_310 & 0xfff) * 4);
              bVar34 = (byte)uVar60;
              if ((short)uVar60 < 0) {
                bVar42 = bVar43 - bVar34;
                if (bVar43 < bVar34) goto LAB_100a1b14;
                uVar50 = uVar60 >> 8 & 0xf;
                puVar46 = (uint *)((int)local_318 + 1);
                uVar29 = (undefined1)(uVar60 >> 0x10);
                uVar44 = (undefined1)(uVar60 >> 0x18);
                if (param_6 <= puVar46) {
                  local_320 = puVar46;
                  if ((uint *)(uVar50 + (int)local_318) == param_6) {
                    if (param_6 <= local_318) {
                      FUN_10136b52(local_318,param_6,
                                   &PTR_s_C__Users_runneradmin__cargo_regi_1014e8cc);
                    /* WARNING: Does not return */
                      pcVar3 = (code *)invalidInstructionException();
                      (*pcVar3)();
                    }
                    *(undefined1 *)(param_5 + (int)local_318) = uVar29;
                    local_310 = (uint *)((uint)local_310 >> (bVar34 & 0x1f) |
                                        (int)local_30c << 0x20 - (bVar34 & 0x1f));
                    puVar57 = (uint *)((uint)local_30c >> (bVar34 & 0x1f));
                    if ((uVar60 & 0x20) != 0) {
                      local_310 = puVar57;
                      puVar57 = (uint *)0x0;
                    }
                    bVar42 = bVar43 - bVar34;
                    param_2[0xd5] = (uint)puVar57;
                    param_2[0xd4] = (uint)local_310;
                    *(byte *)((int)param_2 + 0x3a2) = bVar42;
                    uVar60 = param_2[0xe5];
                  }
                  else {
                    if (param_6 <= local_318) {
                      FUN_10136b52(local_318,param_6,
                                   &PTR_s_C__Users_runneradmin__cargo_regi_1014e8bc);
                    /* WARNING: Does not return */
                      pcVar3 = (code *)invalidInstructionException();
                      (*pcVar3)();
                    }
                    *(undefined1 *)(param_5 + (int)local_318) = uVar29;
                    param_2[0xe2] = 1;
                    *(undefined1 *)(param_2 + 0xe3) = uVar44;
                    param_2[0xe4] = 1;
                    local_310 = (uint *)((uint)local_310 >> (bVar34 & 0x1f) |
                                        (int)local_30c << 0x20 - (bVar34 & 0x1f));
                    puVar57 = (uint *)((uint)local_30c >> (bVar34 & 0x1f));
                    if ((uVar60 & 0x20) != 0) {
                      local_310 = puVar57;
                      puVar57 = (uint *)0x0;
                    }
                    param_2[0xd5] = (uint)puVar57;
                    param_2[0xd4] = (uint)local_310;
                    *(byte *)((int)param_2 + 0x3a2) = bVar42;
                    uVar60 = param_2[0xe5];
                  }
                  goto joined_r0x100a164a;
                }
                if (param_6 <= local_318) {
                  FUN_10136b52(local_318,param_6,&PTR_s_C__Users_runneradmin__cargo_regi_1014e8dc);
                    /* WARNING: Does not return */
                  pcVar3 = (code *)invalidInstructionException();
                  (*pcVar3)();
                }
                *(undefined1 *)(param_5 + (int)local_318) = uVar29;
                *(undefined1 *)(param_5 + 1 + (int)local_318) = uVar44;
                local_318 = (uint *)((int)local_318 + uVar50);
                uVar50 = (uint)local_310 >> (bVar34 & 0x1f);
                puVar46 = (uint *)((uint)local_30c >> (bVar34 & 0x1f));
                local_310 = puVar46;
                local_30c = (uint *)(uVar50 | (int)local_30c << 0x20 - (bVar34 & 0x1f));
                if ((uVar60 & 0x20) != 0) {
                  local_310 = (uint *)0x0;
                  local_30c = puVar46;
                }
                bVar42 = bVar43 - bVar34;
                param_2[0xd5] = (uint)local_310;
                param_2[0xd4] = (uint)local_30c;
                *(byte *)((int)param_2 + 0x3a2) = bVar42;
LAB_100a1942:
                if ((uint *)0x7 < local_31c) goto LAB_100a0976;
LAB_100a118e:
                auVar28._8_8_ = 0;
                auVar28._0_8_ = uStack_258;
                _local_260 = auVar28 << 0x40;
                auVar17._12_4_ = 0;
                auVar17._0_12_ = stack0xfffffda4;
                _local_260 = auVar17 << 0x20;
                puVar39 = (uint *)(0x3f - bVar42 >> 3);
                if (local_31c <= puVar39) {
                  puVar39 = local_31c;
                }
                memcpy(local_260,local_314,(size_t)puVar39);
                uVar63 = local_260._0_4_ << (bVar42 & 0x1f);
                uVar50 = uVar63;
                uVar60 = local_260._4_4_ << (bVar42 & 0x1f) |
                         (uint)local_260._0_4_ >> 0x20 - (bVar42 & 0x1f);
                if ((bVar42 & 0x20) != 0) {
                  uVar50 = 0;
                  uVar60 = uVar63;
                }
                if (0x3f < bVar42) {
                  uVar60 = 0;
                  uVar50 = 0;
                }
                bVar43 = (char)puVar39 * '\b' + bVar42;
                puVar46 = (uint *)(uVar60 | (uint)local_310);
                param_2[0xd5] = (uint)puVar46;
                param_2[0xd4] = uVar50 | (uint)local_30c;
                *(byte *)((int)param_2 + 0x3a2) = bVar43;
                local_310 = (uint *)(uVar50 | (uint)local_30c);
                local_30c = puVar46;
                goto LAB_100a1241;
              }
              if ((uVar60 & 0x4000) != 0) {
                if ((uVar60 & 0x2000) == 0) {
                  if (bVar34 == 0) goto LAB_100a1cd3;
                  bVar33 = bVar43 - bVar34;
                  if (bVar34 <= bVar43) {
                    puVar57 = (uint *)((uint)local_310 >> (bVar34 & 0x1f) |
                                      (int)local_30c << 0x20 - (bVar34 & 0x1f));
                    puVar46 = (uint *)((uint)local_30c >> (bVar34 & 0x1f));
                    if ((uVar60 & 0x20) != 0) {
                      puVar57 = puVar46;
                      puVar46 = (uint *)0x0;
                    }
                    param_2[0xd5] = (uint)puVar46;
                    param_2[0xd4] = (uint)puVar57;
                    goto LAB_100a1c71;
                  }
                }
                else {
                  uVar60 = ((uint)local_310 >> 0xc & uVar60 & 0xff) + (uVar60 >> 0x10);
                  if (param_2[0xda] <= uVar60) {
                    FUN_10136b52(uVar60,param_2[0xda],
                                 &PTR_s_C__Users_runneradmin__cargo_regi_1014e81c);
                    /* WARNING: Does not return */
                    pcVar3 = (code *)invalidInstructionException();
                    (*pcVar3)();
                  }
                  uVar2 = *(ushort *)(local_2c4 + uVar60 * 2);
                  bVar34 = (byte)uVar2 & 0xf;
                  bVar33 = bVar43 - bVar34;
                  if (bVar34 <= bVar43) {
                    uVar60 = (uint)(uVar2 >> 4);
                    if (uVar2 < 0x1000) {
                      puVar46 = (uint *)((uint)local_310 >> bVar34 | (int)local_30c << 0x20 - bVar34
                                        );
                      param_2[0xd4] = (uint)puVar46;
                      bVar42 = bVar43 - bVar34;
                      local_310 = (uint *)((uint)local_30c >> bVar34);
                      param_2[0xd5] = (uint)local_310;
                      *(byte *)((int)param_2 + 0x3a2) = bVar42;
                      if (param_6 <= local_318) {
                        FUN_10136b52(local_318,param_6,
                                     &PTR_s_C__Users_runneradmin__cargo_regi_1014e8ac);
                    /* WARNING: Does not return */
                        pcVar3 = (code *)invalidInstructionException();
                        (*pcVar3)();
                      }
                      *(char *)(param_5 + (int)local_318) = (char)(uVar2 >> 4);
                      local_318 = (uint *)((int)local_318 + 1);
                      local_30c = puVar46;
                      goto LAB_100a1942;
                    }
                    if (uVar60 != 0x100) {
                      if (0x1c < uVar60 - 0x101) {
                        FUN_10136b52(uVar60 - 0x101,0x1d,
                                     &PTR_s_C__Users_runneradmin__cargo_regi_1014e82c);
                    /* WARNING: Does not return */
                        pcVar3 = (code *)invalidInstructionException();
                        (*pcVar3)();
                      }
                      uVar50 = *(uint *)(&DAT_1014e28c + uVar60 * 4);
                      uVar60 = (uint)(CONCAT11((&DAT_1015cb6b)[uVar60],(byte)uVar2) & 0xff0f);
                      goto LAB_100a141b;
                    }
                    param_2[0xd5] = (uint)local_30c >> bVar34;
                    param_2[0xd4] = (uint)local_310 >> bVar34 | (int)local_30c << 0x20 - bVar34;
                    puVar57 = (uint *)(uint)bVar33;
                    goto LAB_100a1c71;
                  }
                }
LAB_100a1b14:
                uVar60 = param_2[0xe5];
                bVar42 = bVar43;
                local_320 = local_318;
                goto joined_r0x100a164a;
              }
              uVar50 = uVar60 >> 0x10;
LAB_100a141b:
              bVar33 = (byte)uVar60;
              uVar52 = (uint)local_30c >> (bVar33 & 0x1f);
              uVar64 = uVar52;
              uVar63 = (uint)local_310 >> (bVar33 & 0x1f) | (int)local_30c << 0x20 - (bVar33 & 0x1f)
              ;
              if ((uVar60 & 0x20) != 0) {
                uVar64 = 0;
                uVar63 = uVar52;
              }
              bVar34 = (byte)(uVar60 >> 8);
              uVar40 = uVar64 >> (bVar34 & 0x1f);
              uVar52 = uVar40;
              if ((uVar60 & 0x2000) != 0) {
                uVar52 = 0;
              }
              uVar64 = uVar63 >> (bVar34 & 0x1f) | uVar64 << 0x20 - (bVar34 & 0x1f);
              if ((uVar60 & 0x2000) != 0) {
                uVar64 = uVar40;
              }
              uVar40 = -1 << (bVar34 & 0x1f);
              if ((uVar60 & 0x2000) != 0) {
                uVar40 = 0;
              }
              uVar60 = *(uint *)(local_2c0 + (uVar64 & 0x1ff) * 4);
              if ((short)(ushort)uVar60 < 0) {
                uVar65 = (uint)((ushort)uVar60 & 0xfff);
                uVar60 = uVar60 >> 0x10;
              }
              else {
                if (bVar43 <= (byte)(bVar34 + bVar33 + 9)) {
                  uVar60 = param_2[0xe5];
                  local_320 = local_318;
                  goto joined_r0x100a164a;
                }
                uVar29 = 0xb;
                if ((uVar60 & 0xffff7f00) == 0) goto LAB_100a195e;
                uVar60 = (uVar64 >> 9 & uVar60 & 0xff) + (uVar60 >> 0x10);
                if (local_2d4 <= uVar60) {
                  FUN_10136b52(uVar60,local_2d4,&PTR_s_C__Users_runneradmin__cargo_regi_1014e83c);
                    /* WARNING: Does not return */
                  pcVar3 = (code *)invalidInstructionException();
                  (*pcVar3)();
                }
                uVar2 = *(ushort *)(local_2c8 + uVar60 * 2);
                uVar29 = 0xb;
                if (0x1df < uVar2) goto LAB_100a195e;
                uVar60 = (uint)*(ushort *)(&DAT_1014e724 + (uint)(uVar2 >> 4) * 2);
                uVar65 = CONCAT11((&DAT_1015cca8)[uVar2 >> 4],(char)uVar2) & 0xffffff0f;
              }
              bVar42 = (byte)uVar65;
              bVar35 = (byte)(uVar65 >> 8);
              uVar58 = uVar52 >> (bVar42 & 0x1f);
              if ((uVar65 & 0x20) == 0) {
                uVar58 = uVar64 >> (bVar42 & 0x1f) | uVar52 << 0x20 - (bVar42 & 0x1f);
              }
              uVar64 = -1 << (bVar35 & 0x1f);
              if ((uVar65 & 0x2000) != 0) {
                uVar64 = 0;
              }
              bVar35 = bVar34 + bVar33 + bVar42 + bVar35;
              bVar42 = bVar43 - bVar35;
              if (bVar35 <= bVar43) {
                uVar58 = uVar58 & ~uVar64;
                puVar39 = (uint *)(uVar60 + uVar58);
                puVar46 = (uint *)((int)local_318 - (int)puVar39);
                if (local_318 < puVar39) goto LAB_100a195c;
                puVar41 = (undefined1 *)(uVar50 + (uVar63 & ~uVar40));
                uVar50 = (uint)local_310 >> (bVar35 & 0x1f);
                puVar57 = (uint *)((uint)local_30c >> (bVar35 & 0x1f));
                local_310 = puVar57;
                local_30c = (uint *)(uVar50 | (int)local_30c << 0x20 - (bVar35 & 0x1f));
                if ((bVar35 & 0x20) != 0) {
                  local_310 = (uint *)0x0;
                  local_30c = puVar57;
                }
                param_2[0xd4] = (uint)local_30c;
                param_2[0xd5] = (uint)local_310;
                puVar68 = (undefined1 *)(uVar58 + uVar60);
                *(byte *)((int)param_2 + 0x3a2) = bVar42;
                puVar59 = puVar41;
                if (puVar48 < puVar41) {
                  puVar59 = puVar48;
                }
                local_320 = puVar46;
                if (puVar68 == (undefined1 *)0x1) {
                  if (param_6 <= (uint *)((int)local_318 + -1)) {
                    FUN_10136b52((uint *)((int)local_318 + -1),param_6,
                                 &PTR_s_C__Users_runneradmin__cargo_regi_1014e84c);
                    /* WARNING: Does not return */
                    pcVar3 = (code *)invalidInstructionException();
                    (*pcVar3)();
                  }
                  bVar33 = *(byte *)(param_5 + -1 + (int)local_318);
                  memset((undefined1 *)(param_5 + (int)local_318),(uint)bVar33,(size_t)puVar59);
                  if (puVar48 < puVar41) {
                    param_2[0xe2] = 1;
                    *(byte *)(param_2 + 0xe3) = bVar33;
                    param_2[0xe4] = (int)puVar41 - (int)puVar59;
                    uVar60 = param_2[0xe5];
                    puVar57 = local_310;
                    local_320 = param_6;
                    local_310 = local_30c;
                    goto joined_r0x100a164a;
                  }
                }
                else if (param_6 < (uint *)((int)local_318 + (int)(puVar41 + 0xf))) {
                  if (puVar68 < puVar59) {
                    local_300 = (uint *)0x0;
                    local_308 = (uint *)((int)param_6 - (int)local_318);
                    if (param_6 < local_318) {
                      local_308 = (uint *)0x0;
                    }
                    puVar53 = puVar46;
                    if (puVar46 < param_6) {
                      puVar53 = param_6;
                    }
                    puVar62 = (undefined1 *)((int)puVar53 + ((uVar58 + uVar60) - (int)local_318));
                    if (local_308 <= puVar62) {
                      puVar62 = (undefined1 *)local_308;
                    }
                    if (puVar59 + -1 < puVar62) {
                      puVar62 = puVar59 + -1;
                    }
                    if (((undefined1 *)0xf < puVar62) && ((undefined1 *)0xf < puVar68)) {
                      uVar60 = (uint)(puVar62 + 1) & 0xf;
                      if (uVar60 == 0) {
                        uVar60 = 0x10;
                      }
                      local_300 = (uint *)(puVar62 + 1 + -uVar60);
                      iVar47 = ~(uint)puVar62 + uVar60;
                      puVar38 = (undefined4 *)(param_5 + (int)local_318);
                      do {
                        puVar61 = (undefined4 *)((int)puVar38 - (int)puVar68);
                        uVar4 = puVar61[1];
                        uVar5 = puVar61[2];
                        uVar6 = puVar61[3];
                        *puVar38 = *puVar61;
                        puVar38[1] = uVar4;
                        puVar38[2] = uVar5;
                        puVar38[3] = uVar6;
                        puVar38 = puVar38 + 4;
                        iVar47 = iVar47 + 0x10;
                      } while (iVar47 != 0);
                    }
                    puVar68 = (undefined1 *)(param_5 + (int)local_318);
                    puVar62 = (undefined1 *)(param_5 + (int)puVar46);
                    puVar53 = local_318;
                    puVar54 = puVar59;
                    do {
                      local_320 = puVar46;
                      if (param_6 <= (uint *)((int)local_320 + (int)local_300)) {
                        FUN_10136b52((uint *)((int)local_320 + (int)local_300),param_6,
                                     &PTR_s_C__Users_runneradmin__cargo_regi_1014e86c);
                    /* WARNING: Does not return */
                        pcVar3 = (code *)invalidInstructionException();
                        (*pcVar3)();
                      }
                      if (local_300 == local_308) {
                        FUN_10136b52((undefined1 *)((int)local_300 + (int)puVar53),param_6,
                                     &PTR_s_C__Users_runneradmin__cargo_regi_1014e87c);
                    /* WARNING: Does not return */
                        pcVar3 = (code *)invalidInstructionException();
                        (*pcVar3)();
                      }
                      puVar1 = puVar62 + (int)local_300;
                      local_308 = (uint *)((int)local_308 + -1);
                      puVar54 = puVar54 + -1;
                      puVar62 = puVar62 + 1;
                      puVar68[(int)local_300] = *puVar1;
                      puVar68 = puVar68 + 1;
                      puVar53 = (uint *)((int)puVar53 + 1);
                      puVar46 = (uint *)((int)local_320 + 1);
                    } while (local_300 != (uint *)puVar54);
                  }
                  else {
                    puVar53 = (uint *)((int)local_318 + ((int)puVar59 - (int)puVar68));
                    if (param_6 < puVar53) goto LAB_100a1d00;
                    if (puVar53 < puVar46) goto LAB_100a1d0d;
                    if ((uint *)((int)param_6 - ((int)puVar53 - (int)puVar46)) < local_318) {
                      ppuVar72 = &PTR_s_C__Users_runneradmin__cargo_regi_1014e85c;
                      goto LAB_100a1184;
                    }
                    memmove((undefined1 *)(param_5 + (int)local_318),
                            (undefined1 *)((int)puVar46 + param_5),(int)puVar53 - (int)puVar46);
                  }
                  if (puVar48 < puVar41) {
                    param_2[0xe5] = 1;
                    param_2[0xe6] = (uint)puVar39;
                    param_2[0xe7] = (int)puVar41 - (int)puVar59;
                    puVar46 = param_2;
                    local_310 = local_318;
                    puVar39 = param_6;
                    local_318 = param_6;
                    goto LAB_100a093d;
                  }
                }
                else {
                  puVar53 = puVar46 + 4;
                  if (param_6 < puVar53) {
                    puVar46 = (uint *)0x0;
                    ppuVar72 = &PTR_s_C__Users_runneradmin__rustup_too_1015de64;
                    goto LAB_100a117a;
                  }
                  if ((uint *)0xffffffef < puVar46) {
                    ppuVar72 = &PTR_s_C__Users_runneradmin__rustup_too_1015de74;
                    goto LAB_100a117a;
                  }
                  if (puVar55 < local_318) {
                    ppuVar72 = &PTR_s_C__Users_runneradmin__cargo_regi_1014e88c;
                    goto LAB_100a1184;
                  }
                  uVar4 = *(undefined4 *)(param_5 + (int)puVar46);
                  uVar5 = ((undefined4 *)(param_5 + (int)puVar46))[1];
                  *(undefined8 *)(param_5 + 8 + (int)local_318) =
                       *(undefined8 *)(param_5 + 8 + (int)puVar46);
                  *(undefined4 *)(param_5 + (int)local_318) = uVar4;
                  ((undefined4 *)(param_5 + (int)local_318))[1] = uVar5;
                  if (((undefined1 *)0x10 < puVar41) || (puVar68 < (undefined1 *)0x10)) {
                    puVar48 = (undefined1 *)0x10;
                    if ((puVar68 < (undefined1 *)0x11) &&
                       (puVar48 = puVar68, puVar68 == (undefined1 *)0x0)) goto LAB_100a1d4c;
                    uVar60 = ((uint)puVar41 / (uint)puVar48 + 1) -
                             (uint)((uint)puVar41 % (uint)puVar48 == 0);
                    if (1 < uVar60) {
                      puVar53 = (uint *)(puVar48 + 0x10 + (int)puVar46);
                      if (param_6 < puVar53) goto LAB_100a1cde;
                      puVar46 = (uint *)((int)puVar46 + (int)puVar48);
                      if ((uint *)0xffffffef < puVar46) goto LAB_100a1cf1;
                      if (puVar55 < puVar48 + (int)local_318) {
LAB_100a18cb:
                        ppuVar72 = &PTR_s_C__Users_runneradmin__cargo_regi_1014e89c;
                        goto LAB_100a1184;
                      }
                      local_308 = (uint *)(uVar60 - 2);
                      local_320 = (uint *)((int)puVar48 * 2 - (int)puVar68);
                      puVar68 = puVar48 + (param_5 - (int)puVar68);
                      puVar41 = puVar48;
                      iVar47 = param_5;
                      while( true ) {
                        iVar47 = iVar47 + (int)puVar48;
                        uVar4 = *(undefined4 *)(puVar68 + (int)local_318);
                        uVar5 = *(undefined4 *)((int)(puVar68 + (int)local_318) + 4);
                        bVar70 = local_308 == (uint *)0x0;
                        local_308 = (uint *)((int)local_308 + -1);
                        *(undefined8 *)(iVar47 + 8 + (int)local_318) =
                             *(undefined8 *)(puVar68 + 8 + (int)local_318);
                        *(undefined4 *)(iVar47 + (int)local_318) = uVar4;
                        ((undefined4 *)(iVar47 + (int)local_318))[1] = uVar5;
                        if (bVar70) break;
                        puVar53 = (uint *)((int)(local_318 + 4) + (int)local_320);
                        if (param_6 < (uint *)((int)(local_318 + 4) + (int)local_320)) {
                          puVar53 = (uint *)((int)(local_318 + 4) + (int)local_320);
                          goto LAB_100a1cde;
                        }
                        puVar46 = (uint *)((int)local_318 + (int)local_320);
                        if ((uint *)0xffffffef < puVar46) goto LAB_100a1cf1;
                        puVar68 = puVar68 + (int)puVar48;
                        puVar41 = puVar41 + (int)puVar48;
                        local_320 = (uint *)((int)local_320 + (int)puVar48);
                        if (puVar55 < (uint *)((int)local_318 + (int)puVar41)) goto LAB_100a18cb;
                      }
                    }
                  }
                }
                local_318 = (uint *)((int)local_318 + (int)puVar59);
                goto LAB_100a1942;
              }
              uVar60 = param_2[0xe5];
              bVar42 = bVar43;
              local_320 = local_318;
            }
joined_r0x100a164a:
            puVar46 = param_2;
            puVar39 = param_6;
            local_318 = local_320;
            if ((((uVar60 != 0) || ((char)param_2[0xe2] != '\0')) || (bVar42 < 0xf)) ||
               ((*(ushort *)((int)param_2 + 0x382) & (ushort)local_310 & 0x7fff) !=
                (ushort)param_2[0xe0])) goto LAB_100a093d;
            bVar33 = (byte)param_2[0xe1];
            puVar39 = (uint *)((uint)local_310 >> (bVar33 & 0x1f) |
                              (int)puVar57 << 0x20 - (bVar33 & 0x1f));
            puVar57 = (uint *)((uint)puVar57 >> (bVar33 & 0x1f));
            puVar46 = puVar57;
            if ((bVar33 & 0x20) != 0) {
              puVar39 = puVar57;
              puVar46 = (uint *)0x0;
            }
            param_2[0xd5] = (uint)puVar46;
            param_2[0xd4] = (uint)puVar39;
            bVar33 = bVar42 - bVar33;
            goto LAB_100a1c71;
          }
          goto LAB_100a0f4c;
        case 5:
switchD_1009e828_caseD_5:
          local_30c = (uint *)(uint)bVar42;
          if (*(char *)((int)param_2 + 0x3a2) != '\0') {
            uVar60 = param_2[0xe8];
            uVar50 = param_2[0xd4];
            uVar63 = param_2[0xd5];
            cVar30 = *(char *)((int)param_2 + 0x3a2) + -8;
            do {
              uVar60 = uVar60 - 1;
              if (((short)uVar60 == -1) || (param_6 <= local_318)) goto LAB_1009eaa1;
              *(char *)(param_5 + (int)local_318) = (char)uVar50;
              uVar50 = uVar50 >> 8 | uVar63 << 0x18;
              uVar63 = uVar63 >> 8;
              local_318 = (uint *)((int)local_318 + 1);
              param_2[0xd5] = uVar63;
              param_2[0xd4] = uVar50;
              *(char *)((int)param_2 + 0x3a2) = cVar30;
              cVar30 = cVar30 + -8;
              *(short *)(param_2 + 0xe8) = (short)uVar60;
            } while (cVar30 != -8);
          }
          param_2[0xd5] = 0;
          param_2[0xd4] = 0;
LAB_1009eaa1:
          if (local_318 <= param_6) goto code_r0x1009eab0;
          ppuVar72 = &PTR_s_C__Users_runneradmin__cargo_regi_1014f27c;
          puVar46 = local_318;
          puVar53 = param_6;
          goto LAB_100a117a;
        case 6:
switchD_1009e828_caseD_6:
          local_30c = (uint *)(uint)bVar42;
          if (local_31c < &DAT_00000008) {
            bVar33 = *(byte *)((int)param_2 + 0x3a2);
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uStack_258;
            _local_260 = auVar27 << 0x40;
            auVar16._12_4_ = 0;
            auVar16._0_12_ = stack0xfffffda4;
            _local_260 = auVar16 << 0x20;
            puVar39 = (uint *)(0x3f - bVar33 >> 3);
            if (local_31c <= puVar39) {
              puVar39 = local_31c;
            }
            memcpy(local_260,local_314,(size_t)puVar39);
            uVar63 = local_260._0_4_ << (bVar33 & 0x1f);
            uVar50 = uVar63;
            uVar60 = local_260._4_4_ << (bVar33 & 0x1f) |
                     (uint)local_260._0_4_ >> 0x20 - (bVar33 & 0x1f);
            if ((bVar33 & 0x20) != 0) {
              uVar50 = 0;
              uVar60 = uVar63;
            }
            if (0x3f < bVar33) {
              uVar60 = 0;
              uVar50 = 0;
            }
            param_2[0xd4] = param_2[0xd4] | uVar50;
            param_2[0xd5] = param_2[0xd5] | uVar60;
            bVar33 = (char)puVar39 * '\b' + bVar33;
            *(byte *)((int)param_2 + 0x3a2) = bVar33;
            local_310 = param_2;
          }
          else {
            bVar33 = *(byte *)((int)param_2 + 0x3a2);
            puVar45 = (uint *)(local_314[1] << (bVar33 & 0x1f) |
                              *local_314 >> 0x20 - (bVar33 & 0x1f));
            local_310 = (uint *)(*local_314 << (bVar33 & 0x1f));
            puVar46 = local_310;
            if ((bVar33 & 0x20) != 0) {
              puVar45 = local_310;
              puVar46 = (uint *)0x0;
            }
            param_2[0xd4] = param_2[0xd4] | (uint)puVar46;
            param_2[0xd5] = param_2[0xd5] | (uint)puVar45;
            puVar39 = (uint *)(0x3f - bVar33 >> 3);
            puVar53 = local_31c;
            if (local_31c < puVar39) goto LAB_100a0f4c;
            bVar33 = bVar33 | 0x38;
            *(byte *)((int)param_2 + 0x3a2) = bVar33;
          }
          local_31c = (uint *)((int)local_31c - (int)puVar39);
          bVar43 = bVar33 & 7;
          if ((bVar43 | 0x20) <= bVar33) {
            uVar60 = (int)local_318 - (int)param_7;
            if ((local_318 < param_7) || (param_6 < local_318)) {
              ppuVar72 = &PTR_s_C__Users_runneradmin__cargo_regi_1014f29c;
              puVar46 = param_7;
              puVar53 = local_318;
              goto LAB_100a117a;
            }
            uVar31 = (*(code *)param_2[0xd6])
                               (param_2[0xd7],*(undefined2 *)((int)param_2 + 0x35e),
                                param_5 + (int)param_7,uVar60);
            *(undefined2 *)(param_2 + 0xd7) = uVar31;
            *(undefined2 *)((int)param_2 + 0x35e) = extraout_DX;
            uVar50 = param_2[0xd4];
            uVar63 = param_2[0xd5];
            if (bVar43 != 0) {
              uVar50 = uVar50 >> bVar43 | uVar63 << 0x20 - bVar43;
              uVar63 = uVar63 >> bVar43;
              param_2[0xd5] = uVar63;
              param_2[0xd4] = uVar50;
              *(char *)((int)param_2 + 0x3a2) = *(char *)((int)param_2 + 0x3a2) - bVar43;
            }
            if ((*(char *)((int)param_2 + 0x3a6) != '\0') ||
               ((uVar50 >> 0x18 | (uVar50 & 0xff0000) >> 8 | (uVar50 & 0xff00) << 8 | uVar50 << 0x18
                ) == param_2[0xd7])) {
              *(undefined1 *)((int)param_2 + 0x3a3) = 7;
              param_2[0xd4] = uVar63;
              param_2[0xd5] = 0;
              *(char *)((int)param_2 + 0x3a2) = *(char *)((int)param_2 + 0x3a2) + -0x20;
              goto LAB_100a0be7;
            }
            *(undefined1 *)((int)param_1 + 1) = 0xe;
            goto LAB_100a116e;
          }
          local_314 = (uint *)((int)local_314 + (int)puVar39);
LAB_100a0937:
          puVar45 = (uint *)(uint)bVar42;
          puVar46 = param_2;
          puVar39 = param_6;
          goto LAB_100a093d;
        case 7:
          goto switchD_1009e828_caseD_7;
        case 8:
switchD_1009e828_caseD_8:
          bVar43 = (byte)((uint)puVar45 >> 8);
          bVar33 = bVar43 + 5 & 7;
          bVar42 = bVar33 + 0x23;
          if (bVar42 <= bVar43) {
            bVar34 = bVar33 + 0x13;
            uVar60 = -1 << (bVar34 & 0x1f);
            local_310 = (uint *)((~uVar60 & (uint)puVar46) >> bVar33 + 3 |
                                (~(0x7fffffffU >> (~bVar34 & 0x1f) | uVar60) & (uint)local_320) <<
                                0x20 - (bVar33 + 3));
            uVar63 = -1 << (bVar42 & 0x1f);
            uVar50 = uVar63;
            uVar60 = 0xffffffff;
            if ((bVar42 & 0x20) != 0) {
              uVar50 = 0;
              uVar60 = uVar63;
            }
            uVar2 = (ushort)local_310;
            if ((ushort)(((ushort)((~uVar50 & (uint)puVar46) >> (bVar34 & 0x1f)) |
                         (ushort)((~uVar60 & (uint)local_320) << 0x20 - (bVar34 & 0x1f))) ^ uVar2)
                != 0xffff) {
              uVar29 = 3;
              goto LAB_100a195e;
            }
            uVar63 = (uint)local_320 >> (bVar42 & 0x1f);
            *(undefined1 *)((int)param_2 + 0x3a3) = 5;
            *(ushort *)(param_2 + 0xe8) = uVar2;
            puVar45 = (uint *)(uint)CONCAT11(bVar43 - bVar42,(byte)local_30c);
            uVar50 = uVar63;
            uVar60 = (uint)puVar46 >> (bVar42 & 0x1f) | (int)local_320 << 0x20 - (bVar42 & 0x1f);
            if ((bVar42 & 0x20) != 0) {
              uVar50 = 0;
              uVar60 = uVar63;
            }
            param_2[0xd5] = uVar50;
            param_2[0xd4] = uVar60;
            *(byte *)((int)param_2 + 0x3a2) = bVar43 - bVar42;
            puVar46 = param_2;
            puVar39 = param_6;
            goto LAB_100a093d;
          }
          break;
        case 9:
          goto switchD_1009e828_caseD_9;
        case 10:
switchD_1009e828_caseD_a:
          bVar42 = (byte)((uint)puVar45 >> 8);
          if (0x10 < bVar42) {
            uVar60 = (uint)puVar46 >> 3 & 0x1f;
            param_2[0xd0] = uVar60 + 0x101;
            uVar50 = (uint)puVar46 >> 8 & 0x1f;
            param_2[0xd1] = uVar50 + 1;
            puVar57 = (uint *)(((uint)puVar46 >> 0xd & 0xf) + 4);
            param_2[0xd2] = (uint)puVar57;
            if (0x1d < uVar60) {
              uVar29 = 4;
              goto LAB_100a195e;
            }
            if (0x1d < uVar50) {
              uVar29 = 5;
              goto LAB_100a195e;
            }
            param_2[0xd5] = (uint)local_320 >> 0x11;
            param_2[0xd4] = (uint)puVar46 >> 0x11 | (int)local_320 << 0xf;
            *(byte *)((int)param_2 + 0x3a2) = bVar42 - 0x11;
            *(undefined1 *)((int)param_2 + 0x3a3) = 2;
            *(undefined1 *)((int)param_2 + 0x3a5) = 0;
            puVar39 = param_2;
            puVar53 = param_6;
LAB_1009f5ba:
            puVar45 = (uint *)((uint)local_30c & 0xff);
            puVar46 = puVar39;
            local_310 = puVar57;
            puVar39 = puVar53;
            goto LAB_100a093d;
          }
          break;
        case 0xb:
          goto switchD_1009e828_caseD_b;
        }
        bVar42 = (byte)local_30c;
LAB_1009f529:
        puVar45 = (uint *)(uint)bVar42;
        puVar46 = param_2;
        local_310 = puVar57;
        puVar39 = puVar57;
        goto LAB_100a093d;
      }
      uVar29 = 1;
      *(undefined1 *)((int)param_1 + 1) = 0;
      break;
    case 1:
      goto switchD_1009e828_caseD_1;
    case 2:
      goto switchD_1009e828_caseD_2;
    case 3:
      goto switchD_1009e828_caseD_3;
    case 4:
      goto switchD_1009e828_caseD_4;
    case 5:
      goto switchD_1009e828_caseD_5;
    case 6:
      goto switchD_1009e828_caseD_6;
    case 7:
switchD_1009e828_caseD_7:
      ppuVar72 = &PTR_s_C__Users_runneradmin__cargo_regi_1014f2ac;
LAB_1009e865:
      FUN_10136b40(ppuVar72);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    case 8:
      goto switchD_1009e828_caseD_8;
    case 9:
      goto switchD_1009e828_caseD_9;
    case 10:
      goto switchD_1009e828_caseD_a;
    case 0xb:
switchD_1009e828_caseD_b:
      uVar29 = 2;
LAB_100a195e:
      *(undefined1 *)((int)param_1 + 1) = uVar29;
LAB_100a116e:
      uVar29 = 1;
    }
  }
LAB_100a1170:
  *(undefined1 *)param_1 = uVar29;
  return;
code_r0x1009eab0:
  uVar2 = (ushort)param_2[0xe8];
  puVar46 = (uint *)(uint)uVar2;
  if (local_31c < (uint *)(uint)uVar2) {
    puVar46 = local_31c;
  }
  if ((uint *)((int)param_6 - (int)local_318) < puVar46) {
    puVar46 = (uint *)((int)param_6 - (int)local_318);
  }
  memcpy((undefined1 *)(param_5 + (int)local_318),local_314,(size_t)puVar46);
  local_318 = (uint *)((int)local_318 + (int)puVar46);
  local_31c = (uint *)((int)local_31c - (int)puVar46);
  local_310 = (uint *)((int)local_314 + (int)puVar46);
  sVar36 = uVar2 - (short)puVar46;
  *(short *)(param_2 + 0xe8) = sVar36;
  local_314 = local_310;
  if (sVar36 == 0) {
    *(char *)((int)param_2 + 0x3a3) = ((char)param_2[0xe9] != '\0') * '\x05' + '\x01';
    puVar45 = (uint *)(uint)bVar42;
    puVar46 = param_2;
    puVar39 = param_6;
  }
  else {
LAB_1009f50b:
    puVar45 = (uint *)((uint)local_30c & 0xff);
    puVar46 = param_2;
    puVar39 = param_6;
  }
  goto LAB_100a093d;
LAB_100a1cd3:
  uVar29 = 10;
  goto LAB_100a195e;
LAB_100a195c:
  uVar29 = 0xd;
  goto LAB_100a195e;
LAB_100a1d4c:
  ppuVar72 = &PTR_s_C__Users_runneradmin__rustup_too_1014e7cc;
  goto LAB_1009e865;
LAB_100a1cde:
  puVar46 = (uint *)0x0;
  ppuVar72 = &PTR_s_C__Users_runneradmin__rustup_too_1015de64;
  goto LAB_100a117a;
LAB_100a1cf1:
  ppuVar72 = &PTR_s_C__Users_runneradmin__rustup_too_1015de74;
  goto LAB_100a117a;
LAB_100a1d00:
  puVar46 = (uint *)0x0;
  ppuVar72 = &PTR_s_C__Users_runneradmin__rustup_too_1015de64;
  goto LAB_100a117a;
LAB_100a1d0d:
  ppuVar72 = &PTR_s_C__Users_runneradmin__rustup_too_1015de74;
  puVar46 = local_320;
  goto LAB_100a117a;
LAB_1009f950:
  param_2[0xd5] = (uint)local_320;
  param_2[0xd4] = uVar50;
  local_314 = local_308;
  *(byte *)((int)param_2 + 0x3a2) = bVar33;
  local_31c = puVar39;
LAB_1009f980:
  local_2b8 = 0;
  local_2b4 = (uint *)0x2;
  local_2b0 = 0;
  uStack_240 = 0;
  local_250 = SUB1614((undefined1  [16])0x0,0);
  uStack_242 = 0;
  _local_260 = (undefined1  [16])0x0;
  cVar30 = FUN_100a1e70(local_2a0,0x13,4,0,(int)local_260,0x13,param_2,0x80,&local_2b8,'\0','\0');
  puVar46 = local_2b4;
  if (cVar30 == '\0') {
    if (local_2b8 != 0) {
      pvVar32 = GetProcessHeap();
      HeapFree(pvVar32,0,puVar46);
    }
    uVar29 = 1;
    *(undefined1 *)((int)param_1 + 1) = 7;
    goto LAB_100a1170;
  }
  local_310 = (uint *)local_260;
  if (local_2b8 != 0) {
    pvVar32 = GetProcessHeap();
    HeapFree(pvVar32,0,puVar46);
    local_310 = puVar46;
  }
  puVar45 = (uint *)(uint)bVar42;
  *(undefined1 *)((int)param_2 + 0x3a3) = 3;
  param_2[0xd3] = 0;
  puVar46 = param_2;
  puVar39 = param_6;
  goto LAB_100a093d;
}
