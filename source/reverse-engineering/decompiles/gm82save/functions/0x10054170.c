// rea decompile_all
// name: FUN_10054170
// address: 0x10054170
// body: available
// range: 0x10054170-0x10054458 inclusive
// range: 0x10054460-0x10054bfe inclusive
// range: 0x10054c30-0x10054cc9 inclusive
// range: 0x10054cd0-0x10054d24 inclusive
// range: 0x10054ed7-0x1005500b inclusive
// range: 0x10055074-0x10055096 inclusive
// range: 0x100550a0-0x100554d3 inclusive
// range: 0x100554e3-0x10055560 inclusive
// range: 0x10055572-0x100555a7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1005421d) */
/* WARNING: Removing unreachable block (ram,0x10054eef) */
/* WARNING: Removing unreachable block (ram,0x10054f00) */
/* WARNING: Removing unreachable block (ram,0x10054f55) */
/* WARNING: Removing unreachable block (ram,0x10055074) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
FUN_10054170(undefined1 *param_1,byte *param_2,uint *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,int param_7)

{
  uint **_Src;
  code *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  ushort uVar4;
  undefined2 uVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined3 uVar16;
  int iVar11;
  undefined4 uVar12;
  LPVOID pvVar13;
  uint *puVar14;
  void *pvVar15;
  HANDLE hHeap;
  undefined1 extraout_CL;
  undefined1 extraout_CL_00;
  undefined1 uVar17;
  uint *puVar18;
  uint *extraout_ECX;
  uint *extraout_ECX_00;
  uint *extraout_ECX_01;
  uint *extraout_ECX_02;
  byte bVar19;
  SIZE_T extraout_EDX;
  SIZE_T SVar20;
  int extraout_EDX_00;
  uint *puVar21;
  uint uVar22;
  uint *extraout_EDX_01;
  uint *puVar23;
  SIZE_T SVar24;
  SIZE_T SVar25;
  uint *puVar26;
  uint *puVar27;
  int *piVar28;
  bool bVar29;
  uint *in_XMM0_Da;
  LPVOID in_XMM0_Db;
  undefined8 uVar30;
  uint *puStack_144;
  uint *puStack_140;
  uint *puStack_138;
  undefined4 uStack_134;
  uint *puStack_130;
  undefined4 uStack_12c;
  uint *puStack_128;
  uint *puStack_124;
  undefined4 uStack_120;
  LPVOID pvStack_11c;
  uint *puStack_118;
  LPVOID pvStack_114;
  LPVOID pvStack_110;
  int iStack_10c;
  uint *puStack_108;
  uint *puStack_104;
  byte *local_100;
  uint *local_fc;
  undefined4 uStack_f8;
  uint **ppuStack_f4;
  uint *puStack_f0;
  uint **ppuStack_ec;
  int iStack_e8;
  uint *puStack_e4;
  uint *puStack_e0;
  undefined1 *local_dc;
  uint *local_d8;
  LPVOID pvStack_d4;
  undefined4 local_d0;
  int *local_c8;
  uint *local_c4;
  int local_c0;
  uint *local_bc;
  uint *local_b8;
  uint *local_b4;
  uint local_b0;
  uint *puStack_ac;
  undefined4 uStack_a8;
  undefined1 uStack_a4;
  uint *puStack_a0;
  uint *puStack_9c;
  undefined2 uStack_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  undefined4 *puStack_74;
  uint local_70;
  int *piStack_6c;
  uint *local_68;
  LPVOID pvStack_64;
  undefined4 local_60;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;

  local_c0 = 0x10054190;
  local_fc = param_3;
  local_100 = param_2;
  local_dc = param_1;
  pbVar6 = (byte *)FUN_10110b00(param_2,(uint)param_3);
  if (pbVar6 != (byte *)0x0) {
    SVar24 = extraout_EDX;
    SVar20 = extraout_EDX;
    pbVar2 = pbVar6;
    if ((extraout_EDX == 2) && (SVar24 = extraout_EDX, *(short *)pbVar6 == 0x2e2e)) {
      SVar24 = 2;
      pbVar3 = (byte *)0x0;
      if (pbVar6 != (byte *)0x0) {
        pbVar3 = pbVar6;
      }
    }
    else {
      do {
        SVar25 = SVar24;
        if (SVar25 == 0) {
          SVar24 = 0;
          pbVar2 = (byte *)0x0;
          pbVar3 = pbVar6;
          goto joined_r0x10054213;
        }
        SVar24 = SVar25 - 1;
      } while (pbVar6[SVar25 - 1] != 0x2e);
      if (SVar24 == 0) {
        SVar24 = extraout_EDX;
        pbVar3 = (byte *)0x0;
        if (pbVar6 != (byte *)0x0) {
          pbVar3 = pbVar6;
        }
      }
      else {
        SVar20 = extraout_EDX - SVar25;
        pbVar3 = pbVar6 + SVar25;
        if (pbVar6 != (byte *)0x0) {
          pbVar3 = pbVar6;
        }
      }
    }
joined_r0x10054213:
    if (pbVar3 != (byte *)0x0) {
      if (pbVar2 == (byte *)0x0) {
        SVar24 = SVar20;
      }
      FUN_100935a0((undefined8 *)&local_68,pbVar3,SVar24);
      local_d0 = local_60;
      local_d8 = local_68;
      pvStack_d4 = pvStack_64;
      in_XMM0_Da = local_68;
      in_XMM0_Db = pvStack_64;
      goto LAB_10054255;
    }
  }
  local_d8 = (uint *)0x0;
  pvStack_d4 = (LPVOID)0x1;
  local_d0 = 0;
LAB_10054255:
  FUN_100969a0(&local_68,param_5,param_6,&DAT_1013f3f1,0x17);
  local_28 = 0;
  local_24 = param_6;
  local_20 = 1;
  local_80 = param_7 + 0x180;
  local_84 = param_7 + 0x150;
  local_7c = param_7 + 0x1b0;
  local_c8 = (int *)(param_7 + 0x120);
  local_88 = param_7 + 0xf0;
  local_8c = param_7 + 0xc0;
  local_90 = param_7 + 0x90;
  local_94 = param_7 + 0x60;
  local_78 = param_7 + 0x30;
LAB_100542fd:
  do {
    pbVar6 = (byte *)FUN_10053300((int *)&local_68);
    if (pbVar6 == (byte *)0x0) {
      *local_dc = 0xff;
LAB_10055430:
      pvVar13 = pvStack_d4;
      if (0 < (int)local_d8) {
        hHeap = GetProcessHeap();
        HeapFree(hHeap,0,pvVar13);
      }
      return;
    }
    uVar30 = FUN_10002090(pbVar6,extraout_EDX_00);
  } while ((int)((ulonglong)uVar30 >> 0x20) == 0);
  FUN_10001d30((int *)&local_bc,(int)pbVar6,extraout_EDX_00,"*/",2);
  puVar21 = local_b8;
  puVar27 = local_bc;
  if (local_bc != (uint *)0x0) {
    local_c4 = local_b4;
    local_70 = local_b0;
    iStack_10c = (*(code *)0x5a51d4)();
    puStack_74 = (undefined4 *)(iStack_10c + 0x4c);
    local_bc = (uint *)0xa;
    local_b8 = puVar27;
    local_b4 = puVar21;
    local_b0 = 0;
    puStack_ac = puVar21;
    uStack_a8 = 10;
    uStack_a4 = 1;
    puStack_a0 = (uint *)0x0;
    puStack_9c = puVar21;
    puStack_108 = (uint *)0x0;
    uStack_98 = 0;
    uStack_f8 = 0;
    piStack_6c = (int *)(iStack_10c + 0x50);
LAB_10054421:
    puVar27 = local_b8;
    FUN_10090ba0(&uStack_134,(int)&local_bc);
    puVar21 = puStack_a0;
    if (uStack_134 != (uint *)0x1) {
      if (uStack_98._1_1_ == '\0') {
        uStack_98 = CONCAT11(1,(char)uStack_98);
        if (((char)uStack_98 == '\x01') || (puStack_9c != puStack_a0)) {
          puVar26 = (uint *)((int)puStack_9c - (int)puStack_a0);
          puVar27 = local_b8;
          if (puVar26 != (uint *)0x0) goto LAB_100544b7;
          goto LAB_10054413;
        }
      }
      goto LAB_100550a0;
    }
    puStack_a0 = uStack_12c;
    puVar26 = (uint *)((int)uStack_12c - (int)puVar21);
    if (puVar26 == (uint *)0x0) goto LAB_10054413;
LAB_100544b7:
    puVar27 = (uint *)((int)puVar27 + (int)puVar21);
    if (((byte *)((int)puVar27 + -1))[(int)puVar26] == 10) {
      if ((uint *)((int)puVar26 + -1) == (uint *)0x0) {
        puVar21 = (uint *)0xffffffff;
        puVar18 = (uint *)0x0;
      }
      else {
        puVar21 = (uint *)((int)puVar26 + -2);
        puVar18 = (uint *)0x0;
        if (((byte *)((int)puVar27 + -2))[(int)puVar26] == 0xd) {
          puVar18 = puVar27;
        }
      }
      puVar26 = (uint *)((int)puVar26 + -1);
      if (puVar18 != (uint *)0x0) {
        puVar27 = puVar18;
        puVar26 = puVar21;
      }
      if (puVar26 == (uint *)0x0) goto LAB_10054413;
    }
    puStack_128 = (uint *)0x0;
    uStack_134 = (uint *)0x3d;
    pvStack_11c = (LPVOID)CONCAT31(pvStack_11c._1_3_,1);
    uStack_120 = 0x3d;
    puStack_130 = puVar27;
    uStack_12c = puVar26;
    puStack_124 = puVar26;
    uVar12 = FUN_10090ba0(&iStack_e8,(int)&uStack_134);
    if (iStack_e8 != 1) {
      puStack_138 = (uint *)CONCAT31((int3)((uint)uVar12 >> 8),6);
      uVar5 = SUB42(puStack_138,0);
      puVar21 = puVar26;
      if (param_3 != (uint *)0x0) {
        puStack_144 = (uint *)0x0;
        puStack_140 = FUN_10107380(0,(SIZE_T)param_3);
        if (puStack_140 != (uint *)0x0) {
          pvVar15 = memcpy(puStack_140,local_100,(size_t)param_3);
          uVar5 = SUB42(pvVar15,0);
          uVar17 = extraout_CL_00;
          goto LAB_100553f8;
        }
        goto LAB_10055545;
      }
      puStack_140 = (uint *)0x1;
      puStack_144 = (uint *)0x0;
      local_fc = (uint *)0x0;
      param_3 = (uint *)0x0;
      uVar17 = extraout_CL;
      goto LAB_100553f8;
    }
    puStack_104 = puStack_e4;
    puVar18 = puStack_e4 + -1;
    puVar14 = puStack_e4;
    puVar23 = param_3;
    if (&DAT_00000006 < puVar18) {
switchD_1005455c_caseD_10055243:
      puStack_140 = (uint *)0x1;
      if (param_3 != (uint *)0x0) {
        puStack_140 = FUN_10107380(0,(SIZE_T)param_3);
        if (puStack_140 == (uint *)0x0) goto LAB_10055553;
        puVar14 = memcpy(puStack_140,local_100,(size_t)param_3);
        puVar18 = extraout_ECX;
      }
      if (puStack_104 == (uint *)0x0) {
        puStack_138 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),7);
        pvStack_110 = (LPVOID)0x1;
        puVar26 = (uint *)0x0;
        puStack_144 = (uint *)0x0;
        puVar27 = puStack_138;
      }
      else {
LAB_10055282:
        puVar26 = puStack_104;
        puStack_144 = (uint *)0x0;
        pvStack_110 = FUN_10107380(0,(SIZE_T)puStack_104);
        if (pvStack_110 == (LPVOID)0x0) {
LAB_10055553:
          FUN_101366bc(1);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        pvVar15 = memcpy(pvStack_110,puVar27,(size_t)puVar26);
        puStack_138 = (uint *)CONCAT31((int3)((uint)pvVar15 >> 8),7);
        puVar27 = puStack_138;
        puVar18 = extraout_ECX_00;
      }
      goto LAB_100553f2;
    }
    puVar18 = (uint *)((&switchD_1005455c::switchdataD_100555a8)[(int)puVar18] + local_c0);
    puVar21 = (uint *)((int)puVar26 - (int)puStack_e0);
    _Src = (uint **)((int)puVar27 + (int)puStack_e0);
    puVar14 = puStack_e0;
    switch(puVar18) {
    case (uint *)0x1005455e:
      if (((((*puVar27 != 0x30677261) && (*puVar27 != 0x31677261)) && (*puVar27 != 0x32677261)) &&
          ((*puVar27 != 0x33677261 && (*puVar27 != 0x34677261)))) &&
         ((*puVar27 != 0x35677261 && ((*puVar27 != 0x36677261 && (*puVar27 != 0x37677261)))))) {
LAB_1005517b:
        if (param_3 == (uint *)0x0) {
          puStack_140 = (uint *)0x1;
        }
        else {
          puStack_140 = FUN_10107380(0,(SIZE_T)param_3);
          if (puStack_140 == (uint *)0x0) {
LAB_10055572:
            FUN_101366bc(1);
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          memcpy(puStack_140,local_100,(size_t)param_3);
        }
        goto LAB_10055282;
      }
      if (((uint)puStack_108 & 1) != 0) {
        uVar8 = (uint)(char)*(byte *)((int)puVar27 + 3);
        if ((int)uVar8 < 0) {
          puVar18 = (uint *)(uint)*(byte *)((int)puVar27 + 2);
          if ((char)*(byte *)((int)puVar27 + 2) < -0x40) {
            bVar19 = *(byte *)((int)puVar27 + 1);
            if ((char)bVar19 < -0x40) {
              uVar9 = (bVar19 & 0x3f) + ((byte)*puVar27 & 7) * 0x40;
            }
            else {
              uVar9 = bVar19 & 0xf;
            }
            uVar9 = (uint)puVar18 & 0x3f | uVar9 << 6;
            puStack_104 = puVar18;
          }
          else {
            uVar9 = (uint)puVar18 & 0x1f;
          }
          uVar8 = uVar8 & 0x3f | uVar9 << 6;
        }
        puStack_140 = (uint *)(uVar8 - 0x30);
        if ((uint *)0x7 < puStack_140) {
          FUN_10136b20(&PTR_s_src_load_rs_1013fd9c);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        ppuStack_ec = &local_d8;
        iVar7 = *(int *)(iStack_10c + -0x9c + uVar8 * 4);
        uVar8 = iVar7 - 5;
        ppuStack_f4 = _Src;
        puStack_f0 = puVar21;
        if (iVar7 == 0xd || 9 < uVar8) {
          FUN_1006ba50(&uStack_134,(int)_Src,(SIZE_T)puVar21);
          iVar11 = FUN_100033c0(&uStack_134);
          iVar7 = iStack_10c + 0x4c;
          (*(code *)0x407ea8)();
          *(int *)(iVar7 + (int)puStack_140 * 4) = iVar11;
          puStack_108 = (uint *)CONCAT31((int3)((uint)iVar11 >> 8),1);
        }
        else {
          if (puVar26 != puStack_e0) {
                    /* WARNING: Could not recover jumptable at 0x10054bfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(*(int *)(&DAT_100555c4 + uVar8 * 4) + local_c0))();
            return;
          }
          puVar27 = FUN_10107380(0,0xb);
          if (puVar27 == (uint *)0x0) {
            FUN_101366bc(1);
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          *(byte *)puVar27 = 0x2d;
                    /* WARNING: Ignoring partial resolution of indirect */
          uStack_12c._1_1_ = 0x31;
          puStack_e0 = (uint *)0x1;
          iStack_e8 = 0xb;
          puStack_104 = (uint *)0x1;
          puStack_108 = puVar27;
          puStack_e4 = puVar27;
          memcpy((byte *)((int)puVar27 + 1),(void *)((int)&uStack_12c + 1),1);
          puStack_e0 = (uint *)0x2;
          iVar11 = FUN_100033c0(&iStack_e8);
          iVar7 = iStack_10c + 0x4c;
          (*(code *)0x407ea8)();
          *(int *)(iVar7 + (int)puStack_140 * 4) = iVar11;
          puStack_108 = (uint *)CONCAT31((int3)((uint)iVar11 >> 8),1);
        }
        break;
      }
      puStack_138 = (uint *)CONCAT31((int3)((uint)puStack_e0 >> 8),6);
      puVar26 = (uint *)&DAT_00000004;
      if (param_3 != (uint *)0x0) {
        puStack_144 = (uint *)0x0;
        puStack_140 = FUN_10107380(0,(SIZE_T)param_3);
        if (puStack_140 != (uint *)0x0) {
          puVar27 = memcpy(puStack_140,local_100,(size_t)param_3);
          puVar26 = (uint *)&DAT_00000004;
          puVar18 = extraout_ECX_01;
          goto LAB_100553f2;
        }
        goto LAB_10055545;
      }
      puStack_140 = (uint *)0x1;
      local_fc = (uint *)0x0;
      puStack_144 = (uint *)0x0;
      puVar23 = (uint *)0x0;
      puVar27 = puStack_138;
      goto LAB_100553f2;
    case (uint *)0x100545fa:
      iVar7 = memcmp(puVar27,&DAT_1013fd89,10);
      if (iVar7 != 0) goto LAB_1005517b;
      if (puVar21 == (uint *)0x0) {
        uVar12 = 0xfffffffc;
      }
      else if (puVar21 == (uint *)&DAT_00000004) {
        if (*_Src != (uint *)0x666c6573) goto LAB_100548b6;
        uVar12 = 0xffffffff;
      }
      else if ((puVar21 == (uint *)0x5) &&
              (*(char *)(_Src + 1) == 'r' && *_Src == (uint *)0x6568746f)) {
        uVar12 = 0xfffffffe;
      }
      else {
LAB_100548b6:
        puVar10 = (undefined4 *)FUN_100025a0(local_c8,(uint *)_Src,(uint)puVar21);
        if (puVar10 == (undefined4 *)0x0) {
          if (puVar21 == (uint *)0x0) {
            puStack_144 = (uint *)0x1;
          }
          else {
            puStack_144 = FUN_10107380(0,(SIZE_T)puVar21);
            if (puStack_144 == (uint *)0x0) goto LAB_10055572;
            memcpy(puStack_144,_Src,(size_t)puVar21);
          }
          ppuStack_f4 = &local_d8;
          puStack_f0 = (uint *)&LAB_100922c0;
          FUN_10093970((undefined8 *)&pvStack_11c,(ushort *)&DAT_1013f92d,(uint)&ppuStack_f4);
          pvStack_110 = pvStack_11c;
          uVar5 = (undefined2)((uint)uStack_134 >> 0x10);
          puStack_140 = (uint *)&DAT_00000006;
          puStack_138 = (uint *)0x5;
          param_3 = (uint *)&DAT_1013f94f;
          in_XMM0_Da = puStack_118;
          in_XMM0_Db = pvStack_114;
          local_fc = puVar21;
          uVar17 = uStack_134._1_1_;
          goto LAB_100553f8;
        }
        uVar12 = *puVar10;
      }
      *(undefined4 *)(iStack_10c + 0x44) = uVar12;
      break;
    case (uint *)0x10054652:
      uVar8 = *puVar27 ^ 0x616c6572;
      if (puVar27[1] != 0x65766974 || uVar8 != 0) {
        uVar22 = 0x656d616e;
        uVar9 = *puVar27 ^ 0x5f726176;
        uVar8 = puVar27[1];
        goto LAB_10054691;
      }
      puVar26 = (uint *)&DAT_00000008;
      uVar16 = 0x657669;
      if (puVar21 == (uint *)0x1) {
        puVar18 = (uint *)0x616c6501;
        puVar23 = (uint *)0x6576690a;
        bVar19 = *(byte *)_Src;
        puVar27 = (uint *)(uint)bVar19;
        if ((puVar27 == (uint *)0x2b) || (puVar27 == (uint *)0x2d)) goto LAB_100551fb;
      }
      else {
        if (puVar21 == (uint *)0x0) {
LAB_10055365:
          puVar23 = (uint *)CONCAT31(uVar16,10);
          puVar27 = (uint *)CONCAT31((int3)(uVar8 >> 8),9);
          puStack_138 = puVar27;
          goto LAB_100553d4;
        }
        bVar19 = *(byte *)_Src;
      }
      puStack_138 = (uint *)0x9;
      puVar23 = (uint *)0x6576690a;
      uVar8 = (int)puVar21 - (uint)(bVar19 == 0x2b);
      pbVar6 = (byte *)((int)_Src + (uint)(bVar19 == 0x2b));
      if (uVar8 < 3) {
        if (uVar8 == 0) {
          puVar27 = (uint *)0x0;
        }
        else {
          puVar18 = (uint *)0x1;
          puVar27 = (uint *)(*pbVar6 - 0x30);
          if ((uint *)0x9 < puVar27) goto LAB_100551fb;
          if (uVar8 != 1) {
            puStack_144 = (uint *)0x0;
            if (9 < pbVar6[1] - 0x30) goto LAB_100553f2;
            puVar27 = (uint *)(uint)(byte)((char)(pbVar6[1] - 0x30) + (char)puVar27 * '\n');
          }
        }
      }
      else {
        puVar27 = (uint *)0x0;
        while (bVar29 = uVar8 != 0, uVar8 = uVar8 - 1, bVar29) {
          bVar19 = *pbVar6;
          uVar4 = (ushort)(byte)puVar27 * 10;
          puVar27 = (uint *)(uint)uVar4;
          if ((char)(uVar4 >> 8) != '\0') goto LAB_100554c4;
          if (9 < bVar19 - 0x30) goto LAB_10055129;
          pbVar6 = pbVar6 + 1;
          bVar19 = (byte)(bVar19 - 0x30);
          puVar27 = (uint *)(uint)(byte)((byte)uVar4 + bVar19);
          if (CARRY1((byte)uVar4,bVar19)) goto LAB_100554b5;
        }
      }
      *(bool *)(iStack_10c + 0x48) = (char)puVar27 != '\0';
      break;
    case (uint *)0x10054680:
      uVar22 = 0x73746165;
      uVar9 = *puVar27 ^ 0x65706572;
      uVar8 = *(uint *)((int)puVar27 + 3);
LAB_10054691:
      if (uVar8 != uVar22 || uVar9 != 0) goto LAB_1005517b;
      iVar7 = FUN_10003510((byte *)_Src,(int)puVar21);
      piVar28 = (int *)(iStack_10c + 0x4c);
      (*(code *)0x407ea8)();
      *piVar28 = iVar7;
      break;
    case (uint *)0x100546bf:
      if ((short)puVar27[1] != 0x6469 || *puVar27 != 0x5f62696c) {
        uVar8 = *puVar27 ^ 0x65766e69;
        if ((short)puVar27[1] != 0x7472 || uVar8 != 0) goto LAB_1005517b;
        puVar26 = (uint *)&DAT_00000006;
        uVar16 = 0;
        if (puVar21 == (uint *)0x1) {
          puVar18 = (uint *)0x65766e01;
          puVar23 = (uint *)0xa;
          bVar19 = *(byte *)_Src;
          puVar27 = (uint *)(uint)bVar19;
          if ((puVar27 == (uint *)0x2b) || (puVar27 == (uint *)0x2d)) goto LAB_100551fb;
        }
        else {
          if (puVar21 == (uint *)0x0) goto LAB_10055365;
          bVar19 = *(byte *)_Src;
        }
        puStack_138 = (uint *)0x9;
        puVar23 = (uint *)0xa;
        uVar8 = (int)puVar21 - (uint)(bVar19 == 0x2b);
        pbVar6 = (byte *)((int)_Src + (uint)(bVar19 == 0x2b));
        if (uVar8 < 3) {
          if (uVar8 == 0) {
            puVar27 = (uint *)0x0;
          }
          else {
            puVar18 = (uint *)0x1;
            puVar27 = (uint *)(*pbVar6 - 0x30);
            if ((uint *)0x9 < puVar27) goto LAB_100551fb;
            if (uVar8 != 1) {
              puStack_144 = (uint *)0x0;
              if (9 < pbVar6[1] - 0x30) goto LAB_100553f2;
              puVar27 = (uint *)(uint)(byte)((char)(pbVar6[1] - 0x30) + (char)puVar27 * '\n');
            }
          }
        }
        else {
          puVar27 = (uint *)0x0;
          while (bVar29 = uVar8 != 0, uVar8 = uVar8 - 1, bVar29) {
            bVar19 = *pbVar6;
            uVar4 = (ushort)(byte)puVar27 * 10;
            puVar27 = (uint *)(uint)uVar4;
            if ((char)(uVar4 >> 8) != '\0') goto LAB_100554c4;
            if (9 < bVar19 - 0x30) goto LAB_10055129;
            pbVar6 = pbVar6 + 1;
            bVar19 = (byte)(bVar19 - 0x30);
            puVar27 = (uint *)(uint)(byte)((byte)uVar4 + bVar19);
            if (CARRY1((byte)uVar4,bVar19)) goto LAB_100554b5;
          }
        }
        *(bool *)(iStack_10c + 0x6c) = (char)puVar27 != '\0';
        break;
      }
      puVar26 = (uint *)&DAT_00000006;
      if (puVar21 == (uint *)0x1) {
        puVar18 = (uint *)0x5f626901;
        bVar19 = *(byte *)_Src;
        puVar27 = (uint *)(uint)bVar19;
        puVar23 = (uint *)0x0;
        if ((puVar27 != (uint *)0x2b) && (puVar27 != (uint *)0x2d)) goto LAB_10054977;
LAB_100551fb:
        puStack_138 = (uint *)0x9;
        puStack_144 = (uint *)0x0;
      }
      else {
        puVar23 = (uint *)0x0;
        if (puVar21 != (uint *)0x0) {
          bVar19 = *(byte *)_Src;
LAB_10054977:
          puStack_138 = (uint *)0x9;
          pbVar6 = (byte *)((int)_Src + (uint)(bVar19 == 0x2b));
          puVar23 = (uint *)((int)puVar21 - (uint)(bVar19 == 0x2b));
          if (&DAT_00000008 < puVar23) {
            puVar27 = (uint *)0x0;
            while (bVar29 = puVar23 != (uint *)0x0, puVar23 = (uint *)((int)puVar23 + -1), bVar29) {
              puVar21 = (uint *)(ZEXT48(puVar27) * 10 >> 0x20);
              uVar8 = (uint)(ZEXT48(puVar27) * 10);
              if (puVar21 != (uint *)0x0) {
                bVar19 = *pbVar6 - 0x30;
                puStack_144 = (uint *)0x0;
                puVar26 = (uint *)&DAT_00000006;
                puVar18 = (uint *)(uint)(byte)((bVar19 < 10) + 1);
                puVar27 = (uint *)(uint)bVar19;
                puVar23 = puVar21;
                goto LAB_100553f2;
              }
              puVar14 = (uint *)(*pbVar6 - 0x30);
              puStack_144 = (uint *)0x0;
              if ((uint *)0x9 < puVar14) {
                puVar18 = (uint *)0x1;
                puVar26 = (uint *)&DAT_00000006;
                puVar27 = puVar14;
                puVar23 = puVar21;
                goto LAB_100553f2;
              }
              pbVar6 = pbVar6 + 1;
              puVar27 = (uint *)((int)puVar14 + uVar8);
              if (CARRY4((uint)puVar14,uVar8)) {
                puVar18 = (uint *)0x2;
                puVar26 = (uint *)&DAT_00000006;
                puVar23 = puVar21;
                goto LAB_100553f2;
              }
            }
          }
          else if (puVar23 == (uint *)0x0) {
            puVar27 = (uint *)0x0;
          }
          else {
            puVar27 = (uint *)0x0;
            puVar26 = (uint *)&DAT_00000006;
            do {
              bVar19 = *pbVar6;
              if (9 < bVar19 - 0x30) goto LAB_10055129;
              pbVar6 = pbVar6 + 1;
              puVar23 = (uint *)((int)puVar23 + -1);
              puVar27 = (uint *)((bVar19 - 0x30) + (int)puVar27 * 10);
            } while (puVar23 != (uint *)0x0);
          }
          puVar26 = (uint *)&DAT_00000006;
          bVar29 = (char)uStack_f8 == '\x01';
          *(uint **)(iStack_10c + 4) = puVar27;
          uStack_f8 = CONCAT31((int3)((uint)puVar27 >> 8),1);
          if (bVar29) goto LAB_10055373;
          break;
        }
LAB_100553c4:
        puVar27 = puVar21;
        puStack_138 = (uint *)0x9;
LAB_100553d4:
        puVar18 = (uint *)0x0;
        puStack_144 = puVar21;
      }
      goto LAB_100553f2;
    case (uint *)0x1005471f:
      iVar7 = memcmp(puVar27,&DAT_1013fd80,9);
      if (iVar7 == 0) {
        puVar26 = (uint *)0x9;
        puVar23 = extraout_EDX_01;
        if (puVar21 == (uint *)0x1) {
          puVar18 = (uint *)0x1;
          bVar19 = *(byte *)_Src;
          puVar27 = (uint *)(uint)bVar19;
          if ((puVar27 == (uint *)0x2b) || (puVar27 == (uint *)0x2d)) goto LAB_100551fb;
        }
        else {
          if (puVar21 == (uint *)0x0) goto LAB_100553c4;
          bVar19 = *(byte *)_Src;
        }
        pbVar6 = (byte *)((int)_Src + (uint)(bVar19 == 0x2b));
        puVar21 = (uint *)((int)puVar21 - (uint)(bVar19 == 0x2b));
        if (&DAT_00000008 < puVar21) {
          puVar23 = (uint *)0x0;
          while (bVar29 = puVar21 != (uint *)0x0, puVar21 = (uint *)((int)puVar21 + -1),
                puVar27 = puVar23, bVar29) {
            puVar27 = (uint *)(ZEXT48(puVar23) * 10);
            if ((int)(ZEXT48(puVar23) * 10 >> 0x20) != 0) {
              bVar19 = *pbVar6 - 0x30;
              puVar23 = (uint *)(uint)bVar19;
              goto LAB_1005550f;
            }
            puVar23 = (uint *)(*pbVar6 - 0x30);
            if ((uint *)0x9 < puVar23) goto LAB_10055129;
            pbVar6 = pbVar6 + 1;
            bVar29 = CARRY4((uint)puVar23,(uint)puVar27);
            puVar23 = (uint *)((int)puVar23 + (int)puVar27);
            if (bVar29) goto LAB_100554b5;
          }
        }
        else if (puVar21 == (uint *)0x0) {
          puStack_140 = (uint *)0x0;
          puVar27 = puStack_140;
        }
        else {
          puStack_140 = (uint *)0x0;
          puVar23 = puVar21;
          do {
            puVar27 = (uint *)(*pbVar6 - 0x30);
            if ((uint *)0x9 < puVar27) goto LAB_10055129;
            pbVar6 = pbVar6 + 1;
            puVar23 = (uint *)((int)puVar23 + -1);
            puStack_140 = (uint *)((int)puVar27 + (int)puStack_140 * 10);
            puVar27 = puStack_140;
          } while (puVar23 != (uint *)0x0);
        }
        puStack_140 = puVar27;
        *(uint **)(iStack_10c + 8) = puStack_140;
        if (((char)uStack_f8 == '\x01') && (((uint)puStack_108 & 1) == 0)) {
          puStack_144 = (uint *)0x0;
          puVar23 = *(uint **)(iStack_10c + 4);
          puStack_138 = (uint *)&DAT_00000008;
          puVar27 = (uint *)0x0;
          puVar18 = puStack_138;
          if (_DAT_0077f5dc != 0) {
            puVar18 = (uint *)&DAT_0079a660;
            puVar27 = (uint *)(&DAT_0079a660 + _DAT_0077f5dc * 4);
            do {
              uVar8 = *puVar18;
              if (*(uint **)(uVar8 + 8) == puVar23) {
                piVar28 = *(int **)(uVar8 + 0x30);
                iVar7 = *(int *)(uVar8 + 0x2c) << 2;
                while (iVar7 != 0) {
                  iVar11 = *piVar28;
                  piVar28 = piVar28 + 1;
                  iVar7 = iVar7 + -4;
                  puVar27 = puStack_140;
                  if (*(uint **)(iVar11 + 8) == puStack_140) {
                    uVar12 = (*(code *)0x710544)();
                    uVar16 = (undefined3)((uint)uVar12 >> 8);
                    uStack_f8 = CONCAT31(uVar16,1);
                    puStack_108 = (uint *)CONCAT31(uVar16,1);
                    goto LAB_10054413;
                  }
                }
              }
              puVar18 = puVar18 + 1;
            } while (puVar18 != (uint *)(&DAT_0079a660 + _DAT_0077f5dc * 4));
            puVar26 = (uint *)0x9;
          }
          goto LAB_100553f2;
        }
LAB_10055373:
        FUN_10110c20(&uStack_134,local_100,(SIZE_T)param_3);
        puStack_140 = puStack_130;
        local_fc = uStack_12c;
        puStack_144 = puStack_128;
        puStack_138 = (uint *)CONCAT31((int3)((uint)puStack_128 >> 8),6);
        puVar27 = puStack_138;
        puVar18 = extraout_ECX_02;
        puVar23 = uStack_134;
        goto LAB_100553f2;
      }
      iVar7 = memcmp(puVar27,&DAT_1013fd93,9);
      if (iVar7 != 0) goto LAB_1005517b;
      iVar7 = FUN_10003510((byte *)_Src,(int)puVar21);
      piVar28 = piStack_6c;
      (*(code *)0x407ea8)();
      *piVar28 = iVar7;
      break;
    case (uint *)0x10055243:
      goto switchD_1005455c_caseD_10055243;
    }
LAB_10054413:
    if (uStack_98._1_1_ != '\0') goto LAB_100550a0;
    goto LAB_10054421;
  }
  if (param_3 == (uint *)0x0) {
    pvVar13 = (LPVOID)0x1;
  }
  else {
    pvVar13 = FUN_10107380(0,(SIZE_T)param_3);
    if (pvVar13 == (LPVOID)0x0) {
LAB_10055545:
      FUN_101366bc(1);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    memcpy(pvVar13,local_100,(size_t)param_3);
  }
  *local_dc = 6;
  *(uint **)(local_dc + 4) = param_3;
  *(LPVOID *)(local_dc + 8) = pvVar13;
  *(uint **)(local_dc + 0xc) = param_3;
  *(undefined4 *)(local_dc + 0x10) = 0;
  goto LAB_10055430;
LAB_100554c4:
  bVar19 = bVar19 - 0x30;
LAB_1005550f:
  puStack_138 = (uint *)0x9;
  puStack_144 = (uint *)0x0;
  puVar18 = (uint *)(uint)(byte)((bVar19 < 10) + 1);
LAB_100553f2:
  uVar5 = SUB42(puVar27,0);
  in_XMM0_Db = (LPVOID)0x0;
  param_3 = puVar23;
  puVar21 = puVar26;
  in_XMM0_Da = puVar26;
  uVar17 = (char)puVar18;
LAB_100553f8:
  *local_dc = (char)puStack_138;
  local_dc[1] = uVar17;
  *(undefined2 *)(local_dc + 2) = uVar5;
  *(uint **)(local_dc + 4) = param_3;
  *(uint **)(local_dc + 8) = puStack_140;
  *(uint **)(local_dc + 0xc) = local_fc;
  *(uint **)(local_dc + 0x10) = puStack_144;
  *(uint **)(local_dc + 0x14) = puVar21;
  *(LPVOID *)(local_dc + 0x18) = pvStack_110;
  *(uint **)(local_dc + 0x1c) = in_XMM0_Da;
  *(LPVOID *)(local_dc + 0x20) = in_XMM0_Db;
  goto LAB_10055430;
LAB_100554b5:
  puStack_138 = (uint *)0x9;
  puStack_144 = (uint *)0x0;
  puVar18 = (uint *)0x2;
  goto LAB_100553f2;
LAB_10055129:
  puStack_138 = (uint *)0x9;
  puStack_144 = (uint *)0x0;
  puVar18 = (uint *)0x1;
  goto LAB_100553f2;
LAB_100550a0:
  if (*(int *)(iStack_10c + 0xc) == 7) {
    puVar27 = local_c4;
    if (local_70 == 0) {
      SVar24 = 0;
    }
    else if ((byte)*local_c4 == 10) {
      if ((local_70 != 1) && ((char)*(byte *)((int)local_c4 + 1) < -0x40)) {
        FUN_10136b90((int)local_c4,local_70,1,local_70,&PTR_s_src_load_rs_10141e4c);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      puVar27 = (uint *)((int)local_c4 + 1);
      SVar24 = local_70 - 1;
    }
    else {
      SVar24 = 1;
      if ((local_70 != 1) && (SVar24 = local_70, (short)*local_c4 == 0xa0d)) {
        if ((2 < local_70) && ((char)*(byte *)((int)local_c4 + 2) < -0x40)) {
          FUN_10136b90((int)local_c4,local_70,2,local_70,&PTR_s_src_load_rs_10141e3c);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        SVar24 = local_70 - 2;
        puVar27 = (uint *)((int)local_c4 + 2);
      }
    }
    uVar12 = FUN_10064e50(puVar27,SVar24);
    puVar10 = puStack_74;
    (*(code *)0x407ea8)();
    *puVar10 = uVar12;
  }
  goto LAB_100542fd;
}
