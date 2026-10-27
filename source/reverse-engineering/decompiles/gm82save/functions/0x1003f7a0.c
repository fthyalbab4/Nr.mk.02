// rea decompile_all
// name: FUN_1003f7a0
// address: 0x1003f7a0
// body: available
// range: 0x1003f7a0-0x10040f80 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_1003f7a0(int *param_1,undefined4 *param_2)

{
  undefined1 auVar1 [16];
  bool bVar2;
  code *pcVar3;
  char *pcVar4;
  undefined1 (*pauVar5) [16];
  double *pdVar6;
  SIZE_T SVar7;
  short *psVar8;
  int *piVar9;
  undefined4 uVar10;
  HANDLE pvVar11;
  byte *_Src;
  undefined1 *puVar12;
  int iVar13;
  undefined2 extraout_var;
  undefined1 (*pauVar14) [16];
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined2 extraout_var_00;
  bool bVar18;
  ushort *puVar19;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined1 (*_Size) [16];
  undefined1 (*pauVar20) [16];
  int iVar21;
  uint *puVar22;
  uint uVar23;
  undefined1 (*pauVar24) [16];
  int *piVar25;
  uint *puVar26;
  bool bVar27;
  float10 fVar28;
  undefined1 (*local_140) [16];
  undefined2 local_13c;
  undefined1 local_13a;
  undefined1 (*local_138) [16];
  uint local_134;
  undefined1 local_130;
  undefined1 (*local_12c) [16];
  undefined1 (*local_128) [16];
  undefined1 (*local_120) [16];
  undefined1 (*local_11c) [16];
  undefined4 local_118;
  undefined1 (*pauStack_114) [16];
  undefined1 (*local_110) [16];
  ushort uStack_10c;
  undefined2 uStack_10a;
  undefined1 *local_108;
  undefined1 (*local_104) [16];
  undefined1 *local_100;
  undefined1 *puStack_fc;
  undefined4 uStack_f8;
  undefined7 local_c0;
  undefined4 uStack_b9;
  undefined1 *local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  uint local_9c;
  double *local_98;
  int local_94;
  uint local_90;
  int local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 (*local_78) [16];
  int local_30;
  undefined1 (*pauStack_2c) [16];
  undefined1 (*pauStack_28) [16];
  undefined4 uStack_24;
  int aiStack_20 [4];

  puVar19 = (ushort *)*param_1;
  DAT_10163288 = 0;
  if (puVar19 == (ushort *)0x0) {
    puVar19 = (ushort *)0x2;
    SVar7 = 0;
  }
  else {
    SVar7 = *(SIZE_T *)(puVar19 + -2);
  }
  FUN_10093310((undefined8 *)&local_118,puVar19,SVar7);
  pauVar5 = local_110;
  pauVar24 = pauStack_114;
  local_b0 = CONCAT44(pauStack_114,
                      CONCAT13(local_118._3_1_,CONCAT21(local_118._1_2_,(byte)local_118)));
  local_a8 = CONCAT26(uStack_10a,CONCAT24(uStack_10c,local_110));
  psVar8 = (short *)FUN_10110b00((byte *)pauStack_114,(uint)local_110);
  if ((psVar8 == (short *)0x0) ||
     ((iVar13 = extraout_EDX, extraout_EDX == 2 && (iVar13 = extraout_EDX, *psVar8 == 0x2e2e)))) {
LAB_1003f84f:
    piVar9 = (int *)FUN_10110b00((byte *)pauVar24,(uint)pauVar5);
    if ((extraout_EDX_00 != 5 || piVar9 == (int *)0x0) ||
       ((char)piVar9[1] != '2' || *piVar9 != 0x386d672e)) {
      FUN_1007a660();
      uVar10 = (*(code *)0x405a4c)();
      *param_2 = uVar10;
      uVar10 = (*(code *)0x705798)();
      if ((uint)local_b0 == 0) {
        return uVar10;
      }
      pvVar11 = GetProcessHeap();
      local_b0._4_4_ = pauVar24;
      goto LAB_1003fc9c;
    }
  }
  else {
    do {
      iVar16 = iVar13;
      if (iVar16 == 0) goto LAB_1003f84f;
      iVar13 = iVar16 + -1;
    } while (*(char *)((int)psVar8 + iVar16 + -1) != '.');
    if ((extraout_EDX - iVar16 != 4 || iVar16 + -1 == 0) ||
       (*(int *)((int)psVar8 + iVar16) != 0x32386d67)) goto LAB_1003f84f;
  }
  bVar27 = DAT_10163038 != -1;
  bVar2 = DAT_10163290 != 0.0;
  bVar18 = bVar2 && bVar27;
  FUN_1007a660();
  iVar13 = _DAT_0077f428;
  DAT_1016328b = 0;
  piVar9 = (int *)&DAT_00000004;
  if (_DAT_0077f1ac != (int *)0x0) {
    piVar9 = _DAT_0077f1ac;
  }
  uVar23 = _DAT_0077f1c0 << 2;
  do {
    local_9c = uVar23;
    if (local_9c == 0) break;
    iVar16 = *piVar9;
    piVar9 = piVar9 + 1;
    uVar23 = local_9c - 4;
  } while (iVar16 == 0);
  piVar9 = (int *)&DAT_00000004;
  if (_DAT_0077f4fc != (int *)0x0) {
    piVar9 = _DAT_0077f4fc;
  }
  iVar16 = _DAT_0077f50c << 2;
  do {
    local_30 = iVar16;
    if (local_30 == 0) break;
    iVar21 = *piVar9;
    piVar9 = piVar9 + 1;
    iVar16 = local_30 + -4;
  } while (iVar21 == 0);
  piVar9 = (int *)&DAT_00000004;
  if (_DAT_0077f0d0 != (int *)0x0) {
    piVar9 = _DAT_0077f0d0;
  }
  puVar12 = (undefined1 *)(_DAT_0077f0e0 << 2);
  do {
    local_b4 = puVar12;
    if (local_b4 == (undefined1 *)0x0) break;
    iVar16 = *piVar9;
    piVar9 = piVar9 + 1;
    puVar12 = local_b4 + -4;
  } while (iVar16 == 0);
  piVar9 = (int *)&DAT_00000004;
  if (_DAT_0077f608 != (int *)0x0) {
    piVar9 = _DAT_0077f608;
  }
  pdVar6 = (double *)(_DAT_0077f618 << 2);
  do {
    local_98 = pdVar6;
    if (local_98 == (double *)0x0) break;
    iVar16 = *piVar9;
    piVar9 = piVar9 + 1;
    pdVar6 = (double *)((int)local_98 + -4);
  } while (iVar16 == 0);
  piVar9 = (int *)&DAT_00000004;
  if (_DAT_0077f2cc != (int *)0x0) {
    piVar9 = _DAT_0077f2cc;
  }
  iVar16 = _DAT_0077f2dc << 2;
  do {
    local_94 = iVar16;
    if (local_94 == 0) break;
    iVar21 = *piVar9;
    piVar9 = piVar9 + 1;
    iVar16 = local_94 + -4;
  } while (iVar21 == 0);
  piVar9 = (int *)&DAT_00000004;
  if (_DAT_0077f2b8 != (int *)0x0) {
    piVar9 = _DAT_0077f2b8;
  }
  iVar16 = _DAT_0077f2c8 << 2;
  do {
    iVar21 = iVar16;
    if (iVar21 == 0) break;
    iVar17 = *piVar9;
    piVar9 = piVar9 + 1;
    iVar16 = iVar21 + -4;
  } while (iVar17 == 0);
  piVar9 = (int *)&DAT_00000004;
  if (_DAT_0077f4c4 != (int *)0x0) {
    piVar9 = _DAT_0077f4c4;
  }
  pauVar14 = (undefined1 (*) [16])(_DAT_0077f4d8 << 2);
  do {
    pauVar20 = pauVar14;
    if (pauVar20 == (undefined1 (*) [16])0x0) break;
    iVar16 = *piVar9;
    piVar9 = piVar9 + 1;
    pauVar14 = (undefined1 (*) [16])(pauVar20[-1] + 0xc);
  } while (iVar16 == 0);
  piVar9 = (int *)&DAT_00000004;
  if (_DAT_0077f4e4 != (int *)0x0) {
    piVar9 = _DAT_0077f4e4;
  }
  uVar23 = _DAT_0077f4f4 << 2;
  do {
    local_90 = uVar23;
    if (local_90 == 0) break;
    iVar16 = *piVar9;
    piVar9 = piVar9 + 1;
    uVar23 = local_90 - 4;
  } while (iVar16 == 0);
  local_8c = _DAT_0077f3f8;
  _Src = (byte *)FUN_10110f10((byte *)pauVar24,(uint)pauVar5);
  if (_Src == (byte *)0x0) {
    FUN_10136b20(&PTR_s_src_save_rs_10142818);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  FUN_101126e0((char *)&local_118,_Src,(int *)_Size);
  if ((byte)local_118 == 0xff) {
    FUN_100759c0((undefined1 *)&local_118,local_b0._4_4_,(SIZE_T)local_a8);
    local_134._0_1_ = (byte)local_118;
    if ((byte)local_118 != 0xff) goto LAB_1003fb65;
    iVar16 = CONCAT22(uStack_10a,uStack_10c);
    local_88 = CONCAT44(local_110,pauStack_114);
    local_78 = local_104;
    local_80 = CONCAT44(local_108,iVar16);
    if ((uint)((int)pauStack_114 - iVar16) < 0x10) {
      FUN_101364f0((undefined8 *)&local_118,(int *)&local_88,(int *)&DAT_10142828,(int *)0xf);
      pauVar24 = (undefined1 (*) [16])&local_118;
      if ((byte)local_118 == 0xff) goto LAB_1003fd24;
LAB_1003fd8f:
      local_140 = (undefined1 (*) [16])
                  CONCAT13(local_118._3_1_,CONCAT21(local_118._1_2_,(byte)local_118));
LAB_1003fd96:
      local_138 = pauStack_114;
      pauVar14 = pauStack_114;
LAB_1003fd9e:
      local_130 = SUB41(pauVar14,0);
      local_134._0_1_ = 0;
    }
    else {
      builtin_strncpy(pcVar4 + iVar16,"gm82_version=5\n",0xf);
      pcVar4 = *local_110;
      local_80 = CONCAT44(local_108,iVar16 + 0xf);
LAB_1003fd24:
      pauVar24 = (undefined1 (*) [16])&local_118;
      local_118._0_1_ = (byte)&local_120;
      local_118._1_2_ = (undefined2)((uint)&local_120 >> 8);
      local_118._3_1_ = (undefined1)((uint)&local_120 >> 0x18);
      pauStack_114 = (undefined1 (*) [16])&LAB_10096fc0;
      local_120 = _DAT_007907f4;
      FUN_10092aa0((undefined8 *)&local_12c,(int *)&local_88,(ushort *)&DAT_10142837,(uint)pauVar24)
      ;
      if ((char)local_12c != -1) goto LAB_1003fd5d;
      FUN_10092aa0((undefined8 *)&local_118,(int *)&local_88,(ushort *)&DAT_10157df0,3);
      if ((byte)local_118 != 0xff) goto LAB_1003fd8f;
      FUN_10049460((undefined1 *)&local_118,_DAT_0077f5a8);
      if ((byte)local_118 == 0xff) {
        local_128 = local_110;
        local_12c = pauStack_114;
        local_118._0_1_ = (byte)&local_12c;
        local_118._1_2_ = (undefined2)((uint)&local_12c >> 8);
        local_118._3_1_ = (undefined1)((uint)&local_12c >> 0x18);
        pauStack_114 = (undefined1 (*) [16])&LAB_100922c0;
        FUN_10092aa0((undefined8 *)&local_120,(int *)&local_88,(ushort *)&DAT_10142843,
                     (uint)&local_118);
        local_140 = local_120;
        pauVar5 = local_128;
        if ((char)local_120 == -1) {
          if (local_12c != (undefined1 (*) [16])0x0) {
            pvVar11 = GetProcessHeap();
            HeapFree(pvVar11,0,pauVar5);
          }
          pauVar24 = (undefined1 (*) [16])&local_118;
          FUN_10049460((undefined1 *)pauVar24,_DAT_0077f5ac);
          if ((byte)local_118 != 0xff) goto LAB_1003fde7;
          local_128 = local_110;
          local_12c = pauStack_114;
          local_118._0_1_ = (byte)&local_12c;
          local_118._1_2_ = (undefined2)((uint)&local_12c >> 8);
          local_118._3_1_ = (undefined1)((uint)&local_12c >> 0x18);
          pauStack_114 = (undefined1 (*) [16])&LAB_100922c0;
          FUN_10092aa0((undefined8 *)&local_120,(int *)&local_88,(ushort *)&DAT_10142854,
                       (uint)pauVar24);
          local_140 = local_120;
          pauVar5 = local_128;
          if ((char)local_120 != -1) {
            local_138 = local_11c;
            local_11c = local_120;
            if (local_12c != (undefined1 (*) [16])0x0) {
              pvVar11 = GetProcessHeap();
              local_11c = (undefined1 (*) [16])HeapFree(pvVar11,0,pauVar5);
              pauVar20 = pauVar5;
            }
            goto LAB_1003feb1;
          }
          if (local_12c != (undefined1 (*) [16])0x0) {
            pvVar11 = GetProcessHeap();
            HeapFree(pvVar11,0,pauVar5);
          }
          FUN_100495c0((char *)&local_118,_DAT_0077f5b0);
          if ((byte)local_118 != 0xff) goto LAB_1003ffbc;
          local_128 = local_110;
          local_12c = pauStack_114;
          local_118._0_1_ = (byte)&local_12c;
          local_118._1_2_ = (undefined2)((uint)&local_12c >> 8);
          local_118._3_1_ = (undefined1)((uint)&local_12c >> 0x18);
          pauStack_114 = (undefined1 (*) [16])&LAB_100922c0;
          FUN_10092aa0((undefined8 *)&local_120,(int *)&local_88,(ushort *)&DAT_10142866,
                       (uint)&local_118);
          pauVar5 = local_128;
          if ((char)local_120 != -1) goto LAB_10040061;
          pauVar24 = (undefined1 (*) [16])&local_118;
          if (local_12c != (undefined1 (*) [16])0x0) {
            pvVar11 = GetProcessHeap();
            HeapFree(pvVar11,0,pauVar5);
            pauVar24 = pauVar5;
          }
          FUN_10092aa0((undefined8 *)&local_118,(int *)&local_88,(ushort *)&DAT_10157df0,3);
          if ((byte)local_118 != 0xff) goto LAB_1003fd8f;
          FUN_10049460((undefined1 *)&local_118,_DAT_0077f5c4);
          if ((byte)local_118 != 0xff) {
LAB_1003ffbc:
            local_13a = local_118._3_1_;
            local_c0 = CONCAT43(puStack_fc,local_100._1_3_);
            pauVar20 = (undefined1 (*) [16])CONCAT22(uStack_10a,uStack_10c);
            local_13c = local_118._1_2_;
            local_138 = local_110;
            local_140 = pauStack_114;
            uStack_b9 = uStack_f8;
            local_b4 = local_108;
            local_130 = SUB41(local_100,0);
            pauVar24 = local_104;
            local_134._0_1_ = (byte)local_118;
            goto LAB_1003fdaa;
          }
          local_128 = local_110;
          local_12c = pauStack_114;
          local_118._0_1_ = (byte)&local_12c;
          local_118._1_2_ = (undefined2)((uint)&local_12c >> 8);
          local_118._3_1_ = (undefined1)((uint)&local_12c >> 0x18);
          pauStack_114 = (undefined1 (*) [16])&LAB_100922c0;
          FUN_10092aa0((undefined8 *)&local_120,(int *)&local_88,(ushort *)&DAT_1014287c,
                       (uint)&local_118);
          pauVar24 = local_128;
          if ((char)local_120 != -1) {
LAB_10040061:
            pauVar5 = local_128;
            pauVar24 = (undefined1 (*) [16])&local_118;
            local_140 = local_120;
            local_138 = local_11c;
            pauVar14 = local_120;
            if (local_12c != (undefined1 (*) [16])0x0) {
              pvVar11 = GetProcessHeap();
              pauVar14 = (undefined1 (*) [16])HeapFree(pvVar11,0,pauVar5);
              pauVar20 = pauVar5;
            }
            goto LAB_1003fd9e;
          }
          if (local_12c != (undefined1 (*) [16])0x0) {
            pvVar11 = GetProcessHeap();
            HeapFree(pvVar11,0,pauVar24);
          }
          FUN_10049460((undefined1 *)&local_118,_DAT_0077f5c8);
          if ((byte)local_118 != 0xff) goto LAB_1003ffbc;
          local_128 = local_110;
          local_12c = pauStack_114;
          local_118._0_1_ = (byte)&local_12c;
          local_118._1_2_ = (undefined2)((uint)&local_12c >> 8);
          local_118._3_1_ = (undefined1)((uint)&local_12c >> 0x18);
          pauStack_114 = (undefined1 (*) [16])&LAB_100922c0;
          FUN_10092aa0((undefined8 *)&local_120,(int *)&local_88,(ushort *)&DAT_1014288d,
                       (uint)&local_118);
          pauVar24 = local_128;
          if ((char)local_120 != -1) goto LAB_10040061;
          if (local_12c != (undefined1 (*) [16])0x0) {
            pvVar11 = GetProcessHeap();
            HeapFree(pvVar11,0,pauVar24);
          }
          FUN_10049460((undefined1 *)&local_118,_DAT_0077f5cc);
          if ((byte)local_118 != 0xff) goto LAB_1003ffbc;
          local_128 = local_110;
          local_12c = pauStack_114;
          local_118._0_1_ = (byte)&local_12c;
          local_118._1_2_ = (undefined2)((uint)&local_12c >> 8);
          local_118._3_1_ = (undefined1)((uint)&local_12c >> 0x18);
          pauStack_114 = (undefined1 (*) [16])&LAB_100922c0;
          FUN_10092aa0((undefined8 *)&local_120,(int *)&local_88,(ushort *)&DAT_1014289e,
                       (uint)&local_118);
          pauVar24 = local_128;
          if ((char)local_120 != -1) goto LAB_10040061;
          if (local_12c != (undefined1 (*) [16])0x0) {
            pvVar11 = GetProcessHeap();
            HeapFree(pvVar11,0,pauVar24);
          }
          FUN_10049460((undefined1 *)&local_118,_DAT_0077f5d0);
          if ((byte)local_118 != 0xff) goto LAB_1003ffbc;
          local_128 = local_110;
          local_12c = pauStack_114;
          local_118._0_1_ = (byte)&local_12c;
          local_118._1_2_ = (undefined2)((uint)&local_12c >> 8);
          local_118._3_1_ = (undefined1)((uint)&local_12c >> 0x18);
          pauStack_114 = (undefined1 (*) [16])&LAB_100922c0;
          FUN_10092aa0((undefined8 *)&local_120,(int *)&local_88,(ushort *)&DAT_101428b1,
                       (uint)&local_118);
          pauVar24 = local_128;
          if ((char)local_120 != -1) goto LAB_10040061;
          if (local_12c != (undefined1 (*) [16])0x0) {
            pvVar11 = GetProcessHeap();
            HeapFree(pvVar11,0,pauVar24);
          }
          local_118._0_1_ = 0xb4;
          local_118._1_2_ = 0x77f5;
          local_118._3_1_ = 0;
          pauStack_114 = (undefined1 (*) [16])&LAB_10096fc0;
          local_110 = (undefined1 (*) [16])&DAT_0077f5b8;
          uStack_10c = 0x6fc0;
          uStack_10a = 0x1009;
          local_108 = &DAT_0077f5bc;
          local_104 = (undefined1 (*) [16])&LAB_10096fc0;
          local_100 = &DAT_0077f5c0;
          puStack_fc = &LAB_10096fc0;
          FUN_10092aa0((undefined8 *)&local_12c,(int *)&local_88,(ushort *)&DAT_101428c6,
                       (uint)&local_118);
          if ((char)local_12c != -1) goto LAB_1003fd5d;
          pauVar24 = (undefined1 (*) [16])&local_118;
          FUN_10092aa0((undefined8 *)pauVar24,(int *)&local_88,(ushort *)&DAT_10157df0,3);
          if ((byte)local_118 != 0xff) goto LAB_1003fd8f;
          local_118._0_1_ = (byte)&local_120;
          local_118._1_2_ = (undefined2)((uint)&local_120 >> 8);
          local_118._3_1_ = (undefined1)((uint)&local_120 >> 0x18);
          pauStack_114 = (undefined1 (*) [16])&LAB_10097da0;
          local_120 = (undefined1 (*) [16])CONCAT31(local_120._1_3_,local_9c != 0);
          FUN_10092aa0((undefined8 *)&local_12c,(int *)&local_88,(ushort *)&DAT_101428e0,
                       (uint)pauVar24);
          if ((char)local_12c == -1) {
            local_118._0_1_ = (byte)&local_120;
            local_118._1_2_ = (undefined2)((uint)&local_120 >> 8);
            local_118._3_1_ = (undefined1)((uint)&local_120 >> 0x18);
            pauStack_114 = (undefined1 (*) [16])&LAB_10097da0;
            local_120 = (undefined1 (*) [16])CONCAT31(local_120._1_3_,iVar13 != 0);
            FUN_10092aa0((undefined8 *)&local_12c,(int *)&local_88,(ushort *)&DAT_101428f5,
                         (uint)pauVar24);
            if ((char)local_12c == -1) {
              local_118._0_1_ = (byte)&local_120;
              local_118._1_2_ = (undefined2)((uint)&local_120 >> 8);
              local_118._3_1_ = (undefined1)((uint)&local_120 >> 0x18);
              pauStack_114 = (undefined1 (*) [16])&LAB_10097da0;
              local_120 = (undefined1 (*) [16])CONCAT31(local_120._1_3_,local_30 != 0);
              FUN_10092aa0((undefined8 *)&local_12c,(int *)&local_88,(ushort *)&DAT_10142908,
                           (uint)pauVar24);
              if ((char)local_12c == -1) {
                local_118._0_1_ = (byte)&local_120;
                local_118._1_2_ = (undefined2)((uint)&local_120 >> 8);
                local_118._3_1_ = (undefined1)((uint)&local_120 >> 0x18);
                pauStack_114 = (undefined1 (*) [16])&LAB_10097da0;
                local_120 = (undefined1 (*) [16])
                            CONCAT31(local_120._1_3_,local_b4 != (undefined1 *)0x0);
                FUN_10092aa0((undefined8 *)&local_12c,(int *)&local_88,(ushort *)&DAT_10142917,
                             (uint)pauVar24);
                if ((char)local_12c == -1) {
                  local_118._0_1_ = (byte)&local_120;
                  local_118._1_2_ = (undefined2)((uint)&local_120 >> 8);
                  local_118._3_1_ = (undefined1)((uint)&local_120 >> 0x18);
                  pauStack_114 = (undefined1 (*) [16])&LAB_10097da0;
                  local_120 = (undefined1 (*) [16])
                              CONCAT31(local_120._1_3_,local_98 != (double *)0x0);
                  FUN_10092aa0((undefined8 *)&local_12c,(int *)&local_88,(ushort *)&DAT_10142928,
                               (uint)pauVar24);
                  if ((char)local_12c == -1) {
                    local_118._0_1_ = (byte)&local_120;
                    local_118._1_2_ = (undefined2)((uint)&local_120 >> 8);
                    local_118._3_1_ = (undefined1)((uint)&local_120 >> 0x18);
                    pauStack_114 = (undefined1 (*) [16])&LAB_10097da0;
                    local_120 = (undefined1 (*) [16])CONCAT31(local_120._1_3_,local_94 != 0);
                    FUN_10092aa0((undefined8 *)&local_12c,(int *)&local_88,(ushort *)&DAT_10142937,
                                 (uint)pauVar24);
                    if ((char)local_12c == -1) {
                      local_118._0_1_ = (byte)&local_120;
                      local_118._1_2_ = (undefined2)((uint)&local_120 >> 8);
                      local_118._3_1_ = (undefined1)((uint)&local_120 >> 0x18);
                      local_120 = (undefined1 (*) [16])CONCAT31(local_120._1_3_,iVar21 != 0);
                      pauStack_114 = (undefined1 (*) [16])&LAB_10097da0;
                      FUN_10092aa0((undefined8 *)&local_12c,(int *)&local_88,(ushort *)&DAT_10142948
                                   ,(uint)pauVar24);
                      if ((char)local_12c == -1) {
                        local_118._0_1_ = (byte)&local_120;
                        local_118._1_2_ = (undefined2)((uint)&local_120 >> 8);
                        local_118._3_1_ = (undefined1)((uint)&local_120 >> 0x18);
                        local_120 = (undefined1 (*) [16])
                                    CONCAT31(local_120._1_3_,pauVar20 != (undefined1 (*) [16])0x0);
                        pauStack_114 = (undefined1 (*) [16])&LAB_10097da0;
                        FUN_10092aa0((undefined8 *)&local_12c,(int *)&local_88,
                                     (ushort *)&DAT_10142958,(uint)pauVar24);
                        if ((char)local_12c == -1) {
                          local_118._0_1_ = (byte)&local_120;
                          local_118._1_2_ = (undefined2)((uint)&local_120 >> 8);
                          local_118._3_1_ = (undefined1)((uint)&local_120 >> 0x18);
                          pauStack_114 = (undefined1 (*) [16])&LAB_10097da0;
                          local_120 = (undefined1 (*) [16])CONCAT31(local_120._1_3_,local_90 != 0);
                          FUN_10092aa0((undefined8 *)&local_12c,(int *)&local_88,
                                       (ushort *)&DAT_10142969,(uint)pauVar24);
                          if ((char)local_12c == -1) {
                            local_118._0_1_ = (byte)&local_120;
                            local_118._1_2_ = (undefined2)((uint)&local_120 >> 8);
                            local_118._3_1_ = (undefined1)((uint)&local_120 >> 0x18);
                            pauStack_114 = (undefined1 (*) [16])&LAB_10097da0;
                            local_120 = (undefined1 (*) [16])CONCAT31(local_120._1_3_,local_8c != 0)
                            ;
                            FUN_10092aa0((undefined8 *)&local_12c,(int *)&local_88,
                                         (ushort *)&DAT_1014297c,(uint)pauVar24);
                            if ((char)local_12c == -1) {
                              FUN_10053090((undefined8 *)&local_118,(int)&local_88);
                              if (((byte)local_118 != 0xff) &&
                                 (local_140 = (undefined1 (*) [16])
                                              CONCAT13(local_118._3_1_,
                                                       CONCAT21(local_118._1_2_,(byte)local_118)),
                                 (byte)local_118 != 0xff)) goto LAB_1003fd96;
                              FUN_10005aa0((int *)&local_88);
                              FUN_1011b820((int)&local_b0);
                              (*(code *)0x6ca2ac)();
                              FUN_1006fb30((char *)&local_118,(undefined *)&local_b0,bVar18);
                              local_134._0_1_ = (byte)local_118;
                              if ((byte)local_118 == 0xff) {
                                (*(code *)0x6ca2ac)();
                                if (local_8c == 0) {
LAB_100406f1:
                                  (*(code *)0x6ca2ac)();
                                  if (iVar21 != 0) {
                                    if (bVar18) goto LAB_1004071e;
LAB_10040730:
                                    piVar9 = _DAT_0077f2b8;
                                    if (_DAT_0077f2b8 == (int *)0x0) {
                                      piVar9 = (int *)&DAT_00000004;
                                    }
                                    piVar25 = _DAT_0077f2c0;
                                    if (_DAT_0077f2c0 == (int *)0x0) {
                                      piVar25 = (int *)&DAT_00000004;
                                    }
                                    iVar16 = 8;
                                    if (_DAT_0077f2c4 != 0) {
                                      iVar16 = _DAT_0077f2c4;
                                    }
                                    FUN_1000fff0((byte *)&local_118,piVar9,_DAT_0077f2c8,piVar25,
                                                 _DAT_0077f2c8,iVar16,_DAT_0077f2c8,bVar18,
                                                 (uint *)&local_b0);
                                    local_134._0_1_ = (byte)local_118;
                                    if ((byte)local_118 != 0xff) goto LAB_1003fb65;
                                  }
                                }
                                else {
                                  if ((!bVar2 || !bVar27) || (DAT_00790058 != '\0')) {
                                    FUN_100710a0((byte *)&local_118,(uint *)&local_b0);
                                    local_134._0_1_ = (byte)local_118;
                                    if ((byte)local_118 != 0xff) goto LAB_1003fb65;
                                    goto LAB_100406f1;
                                  }
                                  (*(code *)0x6ca2ac)();
                                  if (iVar21 != 0) {
LAB_1004071e:
                                    if ((DAT_0078a1b0 != '\0') || (DAT_0077f5f4 != '\0'))
                                    goto LAB_10040730;
                                  }
                                }
                                (*(code *)0x6ca2ac)();
                                if (pauVar20 == (undefined1 (*) [16])0x0) {
LAB_10040815:
                                  (*(code *)0x6ca2ac)();
                                  if (local_9c != 0) {
                                    if (bVar18) goto LAB_1004084e;
LAB_10040860:
                                    piVar9 = _DAT_0077f1ac;
                                    if (_DAT_0077f1ac == (int *)0x0) {
                                      piVar9 = (int *)&DAT_00000004;
                                    }
                                    piVar25 = _DAT_0077f1b4;
                                    if (_DAT_0077f1b4 == (int *)0x0) {
                                      piVar25 = (int *)&DAT_00000004;
                                    }
                                    iVar16 = 8;
                                    if (_DAT_0077f1b8 != 0) {
                                      iVar16 = _DAT_0077f1b8;
                                    }
                                    FUN_1000c9b0((byte *)&local_118,piVar9,_DAT_0077f1c0,piVar25,
                                                 _DAT_0077f1c0,iVar16,_DAT_0077f1c0,bVar18,
                                                 (uint *)&local_b0);
                                    local_134._0_1_ = (byte)local_118;
                                    if ((byte)local_118 != 0xff) goto LAB_1003fb65;
                                  }
                                }
                                else {
                                  if (((!bVar2 || !bVar27) || (DAT_00790170 != '\0')) ||
                                     (DAT_0077f5f4 != '\0')) {
                                    piVar9 = _DAT_0077f4c4;
                                    if (_DAT_0077f4c4 == (int *)0x0) {
                                      piVar9 = (int *)&DAT_00000004;
                                    }
                                    piVar25 = _DAT_0077f4cc;
                                    if (_DAT_0077f4cc == (int *)0x0) {
                                      piVar25 = (int *)&DAT_00000004;
                                    }
                                    iVar16 = 8;
                                    if (_DAT_0077f4d0 != 0) {
                                      iVar16 = _DAT_0077f4d0;
                                    }
                                    FUN_100128b0((byte *)&local_118,piVar9,_DAT_0077f4d8,piVar25,
                                                 _DAT_0077f4d8,iVar16,_DAT_0077f4d8,bVar18,
                                                 (uint *)&local_b0);
                                    local_134._0_1_ = (byte)local_118;
                                    if ((byte)local_118 != 0xff) goto LAB_1003fb65;
                                    goto LAB_10040815;
                                  }
                                  (*(code *)0x6ca2ac)();
                                  if (local_9c != 0) {
LAB_1004084e:
                                    if ((DAT_0078a168 != '\0') || (DAT_0077f5f4 != '\0'))
                                    goto LAB_10040860;
                                  }
                                }
                                (*(code *)0x6ca2ac)();
                                if (local_98 != (double *)0x0) {
                                  piVar9 = _DAT_0077f608;
                                  if (_DAT_0077f608 == (int *)0x0) {
                                    piVar9 = (int *)&DAT_00000004;
                                  }
                                  piVar25 = _DAT_0077f610;
                                  if (_DAT_0077f610 == (int *)0x0) {
                                    piVar25 = (int *)&DAT_00000004;
                                  }
                                  iVar16 = 8;
                                  if (_DAT_0077f614 != 0) {
                                    iVar16 = _DAT_0077f614;
                                  }
                                  FUN_1000e4d0((byte *)&local_118,piVar9,_DAT_0077f618,piVar25,
                                               _DAT_0077f618,iVar16,_DAT_0077f618,bVar18,
                                               (uint *)&local_b0);
                                  local_134._0_1_ = (byte)local_118;
                                  if ((byte)local_118 != 0xff) goto LAB_1003fb65;
                                }
                                (*(code *)0x6ca2ac)();
                                if (local_94 == 0) {
LAB_100409b3:
                                  (*(code *)0x6ca2ac)();
                                  if (local_30 != 0) {
                                    if (bVar18) goto LAB_100409ec;
LAB_100409fe:
                                    piVar9 = _DAT_0077f4fc;
                                    if (_DAT_0077f4fc == (int *)0x0) {
                                      piVar9 = (int *)&DAT_00000004;
                                    }
                                    piVar25 = _DAT_0077f504;
                                    if (_DAT_0077f504 == (int *)0x0) {
                                      piVar25 = (int *)&DAT_00000004;
                                    }
                                    iVar16 = 8;
                                    if (_DAT_0077f508 != 0) {
                                      iVar16 = _DAT_0077f508;
                                    }
                                    FUN_1000d740((byte *)&local_118,piVar9,_DAT_0077f50c,piVar25,
                                                 _DAT_0077f50c,iVar16,_DAT_0077f50c,bVar18,
                                                 (uint *)&local_b0);
                                    local_134._0_1_ = (byte)local_118;
                                    if ((byte)local_118 != 0xff) goto LAB_1003fb65;
                                  }
                                }
                                else {
                                  if (((!bVar2 || !bVar27) || (DAT_0078a1b8 != '\0')) ||
                                     (DAT_0077f5f4 != '\0')) {
                                    piVar9 = _DAT_0077f2cc;
                                    if (_DAT_0077f2cc == (int *)0x0) {
                                      piVar9 = (int *)&DAT_00000004;
                                    }
                                    piVar25 = _DAT_0077f2d4;
                                    if (_DAT_0077f2d4 == (int *)0x0) {
                                      piVar25 = (int *)&DAT_00000004;
                                    }
                                    iVar16 = 8;
                                    if (_DAT_0077f2d8 != 0) {
                                      iVar16 = _DAT_0077f2d8;
                                    }
                                    FUN_10011b20((byte *)&local_118,piVar9,_DAT_0077f2dc,piVar25,
                                                 _DAT_0077f2dc,iVar16,_DAT_0077f2dc,bVar18,
                                                 (uint *)&local_b0);
                                    local_134._0_1_ = (byte)local_118;
                                    if ((byte)local_118 != 0xff) goto LAB_1003fb65;
                                    goto LAB_100409b3;
                                  }
                                  (*(code *)0x6ca2ac)();
                                  if (local_30 != 0) {
LAB_100409ec:
                                    if ((DAT_00790190 != '\0') || (DAT_0077f5f4 != '\0'))
                                    goto LAB_100409fe;
                                  }
                                }
                                (*(code *)0x6ca2ac)();
                                if (local_90 != 0) {
                                  piVar9 = _DAT_0077f4e4;
                                  if (_DAT_0077f4e4 == (int *)0x0) {
                                    piVar9 = (int *)&DAT_00000004;
                                  }
                                  piVar25 = _DAT_0077f4ec;
                                  if (_DAT_0077f4ec == (int *)0x0) {
                                    piVar25 = (int *)&DAT_00000004;
                                  }
                                  iVar16 = 8;
                                  if (_DAT_0077f4f0 != 0) {
                                    iVar16 = _DAT_0077f4f0;
                                  }
                                  FUN_10013640((byte *)&local_118,piVar9,_DAT_0077f4f4,piVar25,
                                               _DAT_0077f4f4,iVar16,_DAT_0077f4f4,bVar18,
                                               (uint *)&local_b0);
                                  local_134._0_1_ = (byte)local_118;
                                  if ((byte)local_118 != 0xff) goto LAB_1003fb65;
                                }
                                (*(code *)0x6ca2ac)();
                                if (local_b4 == (undefined1 *)0x0) {
LAB_10040b38:
                                  (*(code *)0x6ca2ac)();
                                  local_134 = 0;
                                  local_9c = _DAT_0077f3b8;
                                  local_b4 = _DAT_0077f3a8;
                                  if (_DAT_0077f3a8 == (undefined1 *)0x0) {
                                    local_b4 = &DAT_00000004;
                                  }
                                  local_94 = 8;
                                  if (_DAT_0077f3b4 != 0) {
                                    local_94 = _DAT_0077f3b4;
                                  }
LAB_10040b86:
                                  uVar15 = local_9c;
                                  uVar23 = local_134;
                                  if (local_9c < local_134) {
                                    uVar15 = local_134;
                                  }
LAB_10040b96:
                                  local_134 = uVar23;
                                  if (uVar15 != local_134) goto code_r0x10040ba2;
                                  puVar12 = _DAT_0077f3a8;
                                  if (_DAT_0077f3a8 == (undefined1 *)0x0) {
                                    puVar12 = &DAT_00000004;
                                  }
                                  piVar9 = _DAT_0077f3b0;
                                  if (_DAT_0077f3b0 == (int *)0x0) {
                                    piVar9 = (int *)&DAT_00000004;
                                  }
                                  iVar16 = 8;
                                  if (_DAT_0077f3b4 != 0) {
                                    iVar16 = _DAT_0077f3b4;
                                  }
                                  FUN_1000f260((byte *)&local_118,puVar12,_DAT_0077f3b8,piVar9,
                                               _DAT_0077f3b8,iVar16,_DAT_0077f3b8,bVar18,
                                               (uint *)&local_b0);
                                  local_134._0_1_ = (byte)local_118;
                                  if ((byte)local_118 != 0xff) goto LAB_1003fb65;
                                  (*(code *)0x6ca2ac)();
                                  if (iVar13 == 0) {
LAB_10040dff:
                                    if (!bVar2 || !bVar27) goto LAB_10040ee2;
                                  }
                                  else if ((!bVar2 || !bVar27) || (DAT_007900a0 != '\0')) {
                                    FUN_10074250((char *)&local_118,(uint *)&local_b0,bVar18);
                                    local_134._0_1_ = (byte)local_118;
                                    if ((byte)local_118 == 0xff) goto LAB_10040dff;
                                    goto LAB_1003fb65;
                                  }
                                  if ((DAT_00790170 == '\0') && (DAT_0078a168 == '\0')) {
                                    FUN_10111020((uint *)&local_b0,&DAT_1014263f,5);
                                    FUN_1011c320(&local_118,(int)local_b0._4_4_,(SIZE_T)local_a8);
                                    if ((CONCAT13(local_118._3_1_,
                                                  CONCAT21(local_118._1_2_,(byte)local_118)) &
                                        (uint)pauStack_114) == 0xffffffff) {
                                      local_80 = CONCAT26(uStack_10a,CONCAT24(uStack_10c,local_110))
                                      ;
                                      local_88 = 0xffffffffffffffff;
                                      FUN_10003a60((uint *)&local_88);
                                      FUN_1011b820((int)&local_b0);
                                    }
                                    else {
                                      puVar22 = &local_118;
                                      puVar26 = (uint *)&local_88;
                                      for (iVar13 = 0x16; iVar13 != 0; iVar13 = iVar13 + -1) {
                                        *puVar26 = *puVar22;
                                        puVar22 = puVar22 + 1;
                                        puVar26 = puVar26 + 1;
                                      }
                                      uVar23 = (uint)(undefined4 *)local_88 & (uint)local_88._4_4_;
                                      FUN_10003a60((uint *)&local_88);
                                      FUN_1011b820((int)&local_b0);
                                      if (uVar23 != 0xffffffff) {
LAB_10040f05:
                                        (*(code *)0x6ca2ac)();
                                        local_118._0_1_ = 0;
                                        local_118._1_2_ = 0;
                                        local_118._3_1_ = 0;
                                        pauStack_114 = (undefined1 (*) [16])0x0;
                                        (*(code *)PTR_FUN_101631b4)(&local_118);
                                        DAT_10163014 = CONCAT13(local_118._3_1_,
                                                                CONCAT21(local_118._1_2_,
                                                                         (byte)local_118));
                                        DAT_10163010 = local_11c;
                                        fVar28 = (float10)(*(code *)0x4199b0)();
                                        DAT_10163290 = (double)fVar28;
                                        if (DAT_1016328c == '\0') {
                                          FUN_10079850((uint *)&local_b4);
                                        }
                                        (*(code *)0x6ca2cc)();
                                        uVar10 = CONCAT22(extraout_var_00,0x101);
                                        goto joined_r0x10040f76;
                                      }
                                    }
                                  }
LAB_10040ee2:
                                  FUN_10072a20(&local_118,(uint *)&local_b0,bVar18);
                                  local_134._0_1_ = (byte)local_118;
                                  if ((byte)local_118 == 0xff) goto LAB_10040f05;
                                  goto LAB_1003fb65;
                                }
                                piVar9 = _DAT_0077f0d0;
                                if (_DAT_0077f0d0 == (int *)0x0) {
                                  piVar9 = (int *)&DAT_00000004;
                                }
                                piVar25 = _DAT_0077f0d8;
                                if (_DAT_0077f0d8 == (int *)0x0) {
                                  piVar25 = (int *)&DAT_00000004;
                                }
                                iVar16 = 8;
                                if (_DAT_0077f0dc != 0) {
                                  iVar16 = _DAT_0077f0dc;
                                }
                                FUN_10010d80((byte *)&local_118,piVar9,_DAT_0077f0e0,piVar25,
                                             _DAT_0077f0e0,iVar16,_DAT_0077f0e0,bVar18,
                                             (uint *)&local_b0);
                                local_134._0_1_ = (byte)local_118;
                                if ((byte)local_118 == 0xff) goto LAB_10040b38;
                              }
LAB_1003fb65:
                              local_c0 = CONCAT43(puStack_fc,local_100._1_3_);
                              local_138 = local_110;
                              local_13c = local_118._1_2_;
                              local_140 = pauStack_114;
                              pauVar20 = (undefined1 (*) [16])CONCAT22(uStack_10a,uStack_10c);
                              local_13a = local_118._3_1_;
                              uStack_b9 = uStack_f8;
                              pauVar24 = local_104;
                              goto LAB_1003fbc2;
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
LAB_1003fd5d:
          pauVar24 = (undefined1 (*) [16])&local_118;
          local_140 = local_12c;
          local_138 = local_128;
          pauVar14 = local_12c;
          goto LAB_1003fd9e;
        }
        local_138 = local_11c;
        pauVar24 = (undefined1 (*) [16])&local_118;
        if (local_12c != (undefined1 (*) [16])0x0) {
          pvVar11 = GetProcessHeap();
          local_11c = (undefined1 (*) [16])HeapFree(pvVar11,0,pauVar5);
          pauVar20 = pauVar5;
          pauVar24 = local_140;
        }
LAB_1003feb1:
        local_130 = SUB41(local_11c,0);
        local_134._0_1_ = 0;
      }
      else {
LAB_1003fde7:
        local_c0 = CONCAT43(puStack_fc,local_100._1_3_);
        pauVar20 = (undefined1 (*) [16])CONCAT22(uStack_10a,uStack_10c);
        local_13a = local_118._3_1_;
        local_13c = local_118._1_2_;
        local_138 = local_110;
        uStack_b9 = uStack_f8;
        local_b4 = local_108;
        local_130 = SUB41(local_100,0);
        pauVar24 = local_104;
        local_140 = pauStack_114;
        local_134._0_1_ = (byte)local_118;
      }
    }
LAB_1003fdaa:
    FUN_10005aa0((int *)&local_88);
    local_108 = local_b4;
    local_100._0_1_ = local_130;
  }
  else {
    local_140 = (undefined1 (*) [16])
                CONCAT13(local_118._3_1_,CONCAT21(local_118._1_2_,(byte)local_118));
    local_138 = pauStack_114;
    if (_Size == (undefined1 (*) [16])0x0) {
      local_108 = (undefined1 *)0x1;
    }
    else {
      puVar12 = FUN_10107380(0,(SIZE_T)_Size);
      if (puVar12 == (undefined1 *)0x0) {
        FUN_101366bc(1);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      memcpy(puVar12,_Src,(size_t)_Size);
      local_108 = puVar12;
    }
    local_134._0_1_ = 2;
    local_100._0_1_ = 0;
    pauVar20 = _Size;
    pauVar24 = _Size;
  }
LAB_1003fbc2:
  local_118._1_2_ = local_13c;
  local_118._3_1_ = local_13a;
  pauStack_114 = local_140;
  local_110 = local_138;
  uStack_10c = (ushort)pauVar20;
  uStack_10a = (undefined2)((uint)pauVar20 >> 0x10);
  local_100._1_3_ = (undefined3)local_c0;
  puStack_fc = (undefined1 *)((uint7)local_c0 >> 0x18);
  uStack_f8 = uStack_b9;
  local_118._0_1_ = (byte)local_134;
  local_104 = pauVar24;
  FUN_1007a660();
  (*(code *)0x6ca2cc)();
  local_88._4_4_ = FUN_1007f4d0;
  local_88._0_4_ = &local_118;
  FUN_10093970((undefined8 *)aiStack_20,(ushort *)&DAT_1014066f,(uint)&local_88);
  iVar13 = FUN_100033c0(aiStack_20);
  local_88 = CONCAT44(local_88._4_4_,iVar13);
  (*(code *)0x4d43f8)();
  (*(code *)0x407ea8)();
  FUN_10005ca0((undefined1 *)&local_118);
  uVar10 = CONCAT22(extraout_var,0x100);
joined_r0x10040f76:
  if ((uint)local_b0 == 0) {
    return uVar10;
  }
  local_b0._4_4_ = (undefined1 (*) [16])((ulonglong)local_b0 >> 0x20);
  pvVar11 = GetProcessHeap();
LAB_1003fc9c:
  HeapFree(pvVar11,0,local_b0._4_4_);
  return uVar10;
code_r0x10040ba2:
  uVar23 = local_134 + 1;
  iVar16 = *(int *)(local_b4 + local_134 * 4);
  if (iVar16 != 0) goto code_r0x10040bb7;
  goto LAB_10040b96;
code_r0x10040bb7:
  if (DAT_10163248 == (undefined1 (*) [16])0x0) {
    FUN_10002aa0(&local_118);
    local_30 = CONCAT13(local_118._3_1_,CONCAT21(local_118._1_2_,(byte)local_118));
    uStack_24 = CONCAT22(uStack_10a,uStack_10c);
    pauStack_2c = pauStack_114;
    pauStack_28 = local_110;
    FUN_10002aa0(&local_118);
    DAT_10163278._1_2_ = local_118._1_2_;
    DAT_10163278._0_1_ = (byte)local_118;
    DAT_10163278._3_1_ = local_118._3_1_;
    unique0x10000d23 = pauStack_114;
    unique0x10000d27 = local_110;
    unique0x10000d2b = uStack_10c;
    unique0x10000d2d = uStack_10a;
    _DAT_10163248 = 0x10159670;
    _DAT_10163250 = 0;
    DAT_10163258 = local_30;
    DAT_1016325c = pauStack_2c;
    DAT_10163260 = pauStack_28;
    DAT_10163264 = uStack_24;
    _DAT_10163268 = 0x10159670;
    _DAT_10163270 = 0;
  }
  local_98 = (double *)(local_94 + local_134 * 8);
  iVar21 = *(int *)(iVar16 + 0x2f4);
  if (iVar21 == 0) {
    iVar21 = 4;
  }
  local_30 = iVar21 + *(int *)(iVar16 + 0x2f0) * 0x18;
  local_134 = uVar23;
  if (*(int *)(iVar16 + 0x2f0) != 0) {
    do {
      local_90 = *(uint *)(iVar21 + 0xc);
      FUN_10048100(&local_118,local_90);
      if (CONCAT22(uStack_10a,uStack_10c) == 0) {
        local_80 = local_80 & 0xffffffff;
      }
      else {
        local_80 = CONCAT26(uStack_10a,CONCAT24(uStack_10c,local_110));
      }
      local_88 = CONCAT44(pauStack_114,
                          CONCAT13(local_118._3_1_,CONCAT21(local_118._1_2_,(byte)local_118)));
      iVar16 = FUN_1004bb10((uint *)&local_88);
      pdVar6 = local_98;
      if (*(int *)(iVar16 + 0x18) == 0) {
        DAT_0078a1f8 = 1;
        fVar28 = (float10)(*(code *)0x4199b0)();
        *pdVar6 = (double)fVar28;
        do {
          iVar16 = (*(code *)0x4047b0)();
          auVar1 = *DAT_10163248;
          local_110 = (undefined1 (*) [16])(*DAT_10163248 + DAT_1016324c + 1);
          local_118._0_1_ = (byte)_DAT_10163248;
          local_118._1_2_ = (undefined2)((ulonglong)_DAT_10163248 >> 8);
          local_118._3_1_ = (undefined1)((ulonglong)_DAT_10163248 >> 0x18);
          pauStack_114 = DAT_10163248 + 1;
          uStack_10c = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
          local_108 = DAT_10163254;
          uVar10 = FUN_1002d070(&local_118,iVar16);
        } while ((char)uVar10 != '\0');
        iVar17 = FUN_100028f0(local_90);
        if (iVar17 == 0) {
          FUN_10136b20(&PTR_s_src_save_rs_10142990);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        *(int *)(iVar17 + 0x18) = iVar16;
      }
      iVar21 = iVar21 + 0x18;
    } while (iVar21 != local_30);
  }
  goto LAB_10040b86;
}
