// rea decompile_all
// name: FUN_100bee60
// address: 0x100bee60
// body: available
// range: 0x100bee60-0x100bf174 inclusive
// range: 0x100bf180-0x100bf252 inclusive
// range: 0x100bf260-0x100bf3eb inclusive
// range: 0x100bf3f0-0x100bfb02 inclusive
// range: 0x100bfb10-0x100bfc6e inclusive
// range: 0x100bfc70-0x100c0434 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x100c0140) */
/* WARNING: Removing unreachable block (ram,0x100bffc8) */
/* WARNING: Removing unreachable block (ram,0x100bffd3) */
/* WARNING: Removing unreachable block (ram,0x100bffd9) */
/* WARNING: Removing unreachable block (ram,0x100bffe3) */
/* WARNING: Removing unreachable block (ram,0x100c00f9) */
/* WARNING: Removing unreachable block (ram,0x100c0104) */
/* WARNING: Removing unreachable block (ram,0x100c010a) */
/* WARNING: Removing unreachable block (ram,0x100c0110) */
/* WARNING: Removing unreachable block (ram,0x100c0116) */
/* WARNING: Removing unreachable block (ram,0x100c0119) */
/* WARNING: Removing unreachable block (ram,0x100c0129) */
/* WARNING: Removing unreachable block (ram,0x100c0142) */

void __fastcall FUN_100bee60(uint *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  SIZE_T SVar7;
  PSRWLOCK pRVar8;
  undefined4 uVar9;
  code *pcVar10;
  byte bVar11;
  byte bVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined4 lpMem;
  char cVar15;
  LPVOID pvVar16;
  LPVOID pvVar17;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  LPVOID pvVar21;
  uint uVar22;
  int *piVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  HANDLE pvVar26;
  int *piVar27;
  undefined4 *puVar28;
  uint uVar29;
  undefined1 *puVar30;
  uint uVar31;
  uint uVar32;
  byte *pbVar33;
  int iVar34;
  int iVar35;
  void *pvVar36;
  int iVar37;
  uint uVar38;
  undefined8 *puVar39;
  undefined4 *puVar40;
  bool bVar41;
  LPVOID local_244;
  LPVOID local_23c;
  int local_238;
  uint local_234;
  LPVOID local_230;
  undefined4 *local_22c;
  undefined1 *local_224;
  uint local_220;
  _union_530 local_218;
  int *local_1f4;
  int *piStack_1f0;
  _union_530 local_1ec;
  int *piStack_1e8;
  undefined4 *local_1e4;
  undefined4 *local_1e0;
  LPVOID local_1dc;
  undefined4 *local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  int local_1cc;
  byte bStack_1c8;
  ushort uStack_1c7;
  byte bStack_1c5;
  HANDLE pvStack_1c4;
  undefined8 local_1c0;
  undefined8 local_1b8;
  int *local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined1 local_198 [32];
  int *piStack_178;
  undefined4 local_174;
  SIZE_T local_170;
  _union_530 local_16c;
  void *pvStack_168;
  LPVOID local_164;
  int *piStack_160;
  undefined4 uStack_15c;
  int *local_158;
  undefined4 uStack_154;
  int local_150;
  char local_14c;
  undefined2 uStack_14b;
  undefined1 uStack_149;
  int *piStack_148;
  int iStack_144;
  undefined1 local_140 [12];
  undefined4 uStack_134;
  undefined1 local_130 [8];
  undefined8 uStack_128;
  ulonglong local_120;
  undefined8 uStack_118;
  int iStack_110;
  undefined8 uStack_10c;
  undefined8 uStack_104;
  LPVOID local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  int local_68;
  LPVOID pvStack_60;
  LPVOID pvStack_5c;
  LPVOID pvStack_58;

  pvVar16 = (LPVOID)param_2[2];
  if (pvVar16 != (LPVOID)0x0) goto LAB_100bee82;
  FUN_1011d280((int *)local_140,0x10151484);
  uVar6 = local_140._4_4_;
  if (local_140._0_4_ == 0xfffffffe) {
    uVar6 = local_140._8_4_;
    if (uStack_134 == (LPVOID)0x0) {
LAB_100bff11:
      bVar41 = false;
    }
    else {
      if (uStack_134 == (LPVOID)0x1) {
        cVar15 = *(char *)local_140._8_4_;
        bVar41 = false;
        if ((cVar15 == '+') || (bVar41 = false, cVar15 == '-')) goto joined_r0x100c01f4;
      }
      else {
        cVar15 = *(char *)local_140._8_4_;
      }
      uVar29 = (int)uStack_134 - (uint)(cVar15 == '+');
      pbVar33 = (byte *)(local_140._8_4_ + (uint)(cVar15 == '+'));
      if (uVar29 < 9) {
        pvVar16 = (LPVOID)0x0;
        bVar41 = true;
        for (; uVar29 != 0; uVar29 = uVar29 - 1) {
          bVar3 = *pbVar33;
          if (9 < bVar3 - 0x30) goto LAB_100bff11;
          pbVar33 = pbVar33 + 1;
          pvVar16 = (LPVOID)((bVar3 - 0x30) + (int)pvVar16 * 10);
        }
      }
      else {
        pvVar16 = (LPVOID)0x0;
        while (bVar41 = uVar29 != 0, uVar29 = uVar29 - 1, bVar41) {
          uVar38 = (uint)(ZEXT48(pvVar16) * 10);
          if ((int)(ZEXT48(pvVar16) * 10 >> 0x20) != 0) goto LAB_100bff11;
          uVar22 = *pbVar33 - 0x30;
          pvVar16 = (LPVOID)(uVar38 + uVar22);
          bVar41 = false;
          if ((9 < uVar22) || (pbVar33 = pbVar33 + 1, CARRY4(uVar38,uVar22)))
          goto joined_r0x100c01f4;
        }
        bVar41 = true;
      }
    }
joined_r0x100c01f4:
    if ((LPVOID)local_140._4_4_ != (LPVOID)0x0) {
      pvVar26 = GetProcessHeap();
      HeapFree(pvVar26,0,(LPVOID)uVar6);
    }
    if (bVar41) {
      if (pvVar16 == (LPVOID)0x0) {
        local_120 = local_120 & 0xffffffff00000000;
        _local_130 = (undefined1  [16])0x0;
        _local_140 = (undefined1  [16])0x0;
        GetSystemInfo((LPSYSTEM_INFO)local_140);
        pvVar16 = (LPVOID)local_130._4_4_;
        if ((LPVOID)local_130._4_4_ == (LPVOID)0x0) {
          pvVar16 = (LPVOID)0x1;
        }
      }
      goto LAB_100bee82;
    }
  }
  else if (0 < (int)local_140._0_4_) {
    pvVar26 = GetProcessHeap();
    HeapFree(pvVar26,0,(LPVOID)uVar6);
    pvVar16 = (LPVOID)uVar6;
  }
  FUN_1011d280((int *)local_140,0x10151495);
  if (local_140._0_4_ == 0xfffffffe) {
    bVar12 = 1;
    bVar3 = 1;
    bVar11 = 1;
    bVar4 = 1;
    if (uStack_134 != (LPVOID)0x0) {
      if (uStack_134 == (LPVOID)0x1) {
        cVar15 = *(char *)local_140._8_4_;
        if ((cVar15 == '+') || (cVar15 == '-')) goto joined_r0x100c0050;
      }
      else {
        cVar15 = *(char *)local_140._8_4_;
      }
      pvVar16 = (LPVOID)0x0;
      uVar29 = (int)uStack_134 - (uint)(cVar15 == '+');
      pbVar33 = (byte *)(local_140._8_4_ + (uint)(cVar15 == '+'));
      bVar3 = bVar4;
      bVar12 = bVar11;
      if (uVar29 < 9) {
        for (; uVar29 != 0; uVar29 = uVar29 - 1) {
          bVar4 = *pbVar33;
          if (9 < bVar4 - 0x30) goto joined_r0x100c0050;
          pbVar33 = pbVar33 + 1;
          pvVar16 = (LPVOID)((bVar4 - 0x30) + (int)pvVar16 * 10);
        }
LAB_100c0185:
        bVar12 = 0;
        bVar3 = 0;
      }
      else {
        while( true ) {
          bVar41 = uVar29 == 0;
          uVar29 = uVar29 - 1;
          if (bVar41) goto LAB_100c0185;
          uVar38 = (uint)(ZEXT48(pvVar16) * 10);
          if ((int)(ZEXT48(pvVar16) * 10 >> 0x20) != 0) break;
          uVar22 = *pbVar33 - 0x30;
          pvVar16 = (LPVOID)(uVar38 + uVar22);
          if ((9 < uVar22) || (pbVar33 = pbVar33 + 1, CARRY4(uVar38,uVar22))) break;
        }
      }
    }
joined_r0x100c0050:
    if ((LPVOID)local_140._4_4_ != (LPVOID)0x0) {
      pvVar26 = GetProcessHeap();
      HeapFree(pvVar26,0,(LPVOID)local_140._8_4_);
      bVar3 = bVar12;
    }
    if (!(bool)(bVar3 | pvVar16 == (LPVOID)0x0)) goto LAB_100bee82;
  }
  else if (0 < (int)local_140._0_4_) {
    pvVar26 = GetProcessHeap();
    HeapFree(pvVar26,0,(LPVOID)local_140._4_4_);
  }
  local_120 = local_120 & 0xffffffff00000000;
  _local_130 = (undefined1  [16])0x0;
  _local_140 = (undefined1  [16])0x0;
  GetSystemInfo((LPSYSTEM_INFO)local_140);
  pvVar16 = (LPVOID)local_130._4_4_;
  if ((LPVOID)local_130._4_4_ == (LPVOID)0x0) {
    pvVar16 = (LPVOID)0x1;
  }
LAB_100bee82:
  cVar15 = *(char *)((int)param_2 + 0x2d);
  _local_140 = ZEXT816(0x400000000);
  local_130 = (undefined1  [8])0x4;
  pvVar21 = (LPVOID)0xff;
  if (pvVar16 < (LPVOID)0xff) {
    pvVar21 = pvVar16;
  }
  if (pvVar16 == (LPVOID)0x0) {
    _local_140 = ZEXT816(0x400000000);
    local_198._8_4_ = (LPVOID)0x0;
    iVar35 = 0x40;
    local_220 = 0;
    local_224 = &DAT_00000004;
    local_23c = (LPVOID)0x0;
    local_22c = (undefined4 *)&DAT_00000004;
    local_234 = 0;
    local_244 = (LPVOID)0x0;
    local_218.dwOemId = 0;
    local_230 = (LPVOID)0x0;
    local_198._0_4_ = (_union_530)0x0;
    local_198._4_4_ = 4;
    piVar19 = (int *)&DAT_00000004;
  }
  else {
    FUN_10139aa0((uint *)local_140,0,(uint)pvVar21,0x10);
    if ((LPVOID)((int)uStack_134 - local_130._4_4_) < pvVar21) {
      FUN_10139aa0((uint *)(local_140 + 0xc),local_130._4_4_,(uint)pvVar21,8);
    }
    uVar6 = local_130._0_4_;
    local_244 = (LPVOID)local_140._8_4_;
    local_1b0 = (int *)local_140._4_4_;
    piVar19 = (int *)(local_140._4_4_ + local_140._8_4_ * 4 * 4);
    uVar29 = local_130._4_4_;
    pvVar16 = pvVar21;
    do {
      uVar38 = uVar29;
      if (cVar15 == '\0') {
        piVar27 = FUN_10107380(0,0x200);
        if (piVar27 == (int *)0x0) {
          FUN_101366bc(4);
                    /* WARNING: Does not return */
          pcVar10 = (code *)invalidInstructionException();
          (*pcVar10)();
        }
        puVar28 = FUN_10107380(0,8);
        if (puVar28 == (undefined4 *)0x0) {
          FUN_1013679e(4,8);
                    /* WARNING: Does not return */
          pcVar10 = (code *)invalidInstructionException();
          (*pcVar10)();
        }
        *puVar28 = piVar27;
        puVar28[1] = 0x40;
        pvVar17 = FUN_10107380(0,0x100);
        if (pvVar17 == (LPVOID)0x0) goto LAB_100c029e;
        uVar29 = (uint)pvVar17 & 0xffffffc0;
        local_1f4 = (int *)(uVar29 + 0x40);
        *(LPVOID *)(uVar29 + 0x3c) = pvVar17;
        *(undefined4 *)(uVar29 + 0x40) = 1;
        *(undefined4 *)(uVar29 + 0x44) = 1;
        *(undefined4 **)(uVar29 + 0x80) = puVar28;
        *(undefined4 *)(uVar29 + 0xc0) = 0;
        *(undefined4 *)(uVar29 + 0xc4) = 0;
        local_1ec.dwOemId = 0x40;
        piStack_1e8 = (int *)CONCAT31(piStack_1e8._1_3_,1);
        piStack_1f0 = piVar27;
      }
      else {
        FUN_100c0440((int *)&local_1f4);
      }
      LOCK();
      iVar35 = *local_1f4;
      *local_1f4 = *local_1f4 + 1;
      UNLOCK();
      if (*local_1f4 == 0 || SCARRY4(iVar35,1) != *local_1f4 < 0) goto LAB_100c02ad;
      local_1c0 = CONCAT44(piStack_1f0,local_1f4);
      local_1b8 = CONCAT44(piStack_1e8,local_1ec.dwOemId);
      local_244 = (LPVOID)((int)local_244 + 1);
      *(undefined8 *)(piVar19 + 2) = local_1b8;
      *(undefined8 *)piVar19 = local_1c0;
      *(int **)(uVar6 + uVar38 * 8) = local_1f4;
      *(undefined1 *)(uVar6 + uVar38 * 8 + 4) = piStack_1e8._0_1_;
      piVar19 = piVar19 + 4;
      uVar29 = uVar38 + 1;
      pvVar16 = (LPVOID)((int)pvVar16 - 1);
    } while (pvVar16 != (LPVOID)0x0);
    local_218 = (_union_530)local_140._0_4_;
    local_80 = uStack_134;
    _local_140 = ZEXT816(0x400000000);
    local_130 = (undefined1  [8])0x4;
    FUN_10139aa0((uint *)local_140,0,(uint)pvVar21,0x10);
    if ((LPVOID)((int)uStack_134 - local_130._4_4_) < pvVar21) {
      FUN_10139aa0((uint *)(local_140 + 0xc),local_130._4_4_,(uint)pvVar21,8);
      local_234 = local_130._4_4_;
    }
    else {
      local_234 = local_130._4_4_;
    }
    uVar9 = local_130._0_4_;
    local_230 = (LPVOID)local_140._8_4_;
    local_22c = (undefined4 *)local_130._0_4_;
    puVar39 = (undefined8 *)(local_140._8_4_ * 0x10 + local_140._4_4_);
    pvVar16 = pvVar21;
    do {
      FUN_100c0440((int *)&local_1f4);
      LOCK();
      iVar35 = *local_1f4;
      *local_1f4 = *local_1f4 + 1;
      UNLOCK();
      if (*local_1f4 == 0 || SCARRY4(iVar35,1) != *local_1f4 < 0) goto LAB_100c02ad;
      local_1c0 = CONCAT44(piStack_1f0,local_1f4);
      local_1b8 = CONCAT44(piStack_1e8,local_1ec.dwOemId);
      local_230 = (LPVOID)((int)local_230 + 1);
      puVar39[1] = local_1b8;
      *puVar39 = local_1c0;
      puVar39 = puVar39 + 2;
      *(int **)(uVar9 + local_234 * 2 * 4) = local_1f4;
      *(undefined1 *)(uVar9 + (local_234 * 2 + 1) * 4) = piStack_1e8._0_1_;
      local_234 = local_234 + 1;
      pvVar16 = (LPVOID)((int)pvVar16 - 1);
    } while (pvVar16 != (LPVOID)0x0);
    local_198._0_8_ = local_140._0_8_;
    local_198._8_4_ = local_230;
    if (0x38e38e2 < uVar38) {
      FUN_101367b0();
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    local_23c = uStack_134;
    local_230 = (LPVOID)0x0;
    if (uVar29 * 0x24 == 0) {
      local_224 = &DAT_00000004;
      local_220 = 0;
    }
    else {
      local_224 = FUN_10107380(0,uVar29 * 0x24);
      local_220 = uVar29;
      if (local_224 == (undefined1 *)0x0) {
        FUN_101366bc(4);
                    /* WARNING: Does not return */
        pcVar10 = (code *)invalidInstructionException();
        (*pcVar10)();
      }
    }
    puVar30 = local_224 + 0x20;
    do {
      uVar9 = *(undefined4 *)(uVar6 + (int)local_230 * 8);
      uVar1 = *(undefined1 *)(uVar6 + (int)local_230 * 8 + 4);
      *(undefined4 *)(puVar30 + -0x20) = 0;
      puVar30[-0x1c] = 0;
      *(undefined4 *)(puVar30 + -0x18) = 0;
      *(undefined4 *)(puVar30 + -0x14) = 0;
      puVar30[-0x10] = 0;
      *(undefined4 *)(puVar30 + -0xc) = 0;
      *(undefined4 *)(puVar30 + -8) = 0;
      *(undefined4 *)(puVar30 + -4) = uVar9;
      *puVar30 = uVar1;
      iVar35 = (int)local_230 * 8;
      local_230 = (LPVOID)((int)local_230 + 1);
      puVar30 = puVar30 + 0x24;
    } while ((LPVOID)(uVar6 + iVar35 + 8) != (LPVOID)(uVar6 + uVar29 * 8));
    if (local_80 != (LPVOID)0x0) {
      pvVar26 = GetProcessHeap();
      HeapFree(pvVar26,0,(LPVOID)uVar6);
    }
    pvVar16 = FUN_10107380(0,(int)pvVar21 * 0x40 + 0x40);
    if (pvVar16 == (LPVOID)0x0) {
      FUN_101366bc(0x40);
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    uVar29 = (uint)pvVar16 & 0xffffffc0;
    *(LPVOID *)(uVar29 + 0x3c) = pvVar16;
    iVar35 = uVar29 + 0x40;
    puVar28 = (undefined4 *)(uVar29 + 0x48);
    pvVar16 = pvVar21;
    do {
      puVar28[-2] = 0;
      *(undefined1 *)(puVar28 + -1) = 0;
      *puVar28 = 0;
      puVar28 = puVar28 + 0x10;
      pvVar16 = (LPVOID)((int)pvVar16 - 1);
      piVar19 = local_1b0;
    } while (pvVar16 != (LPVOID)0x0);
  }
  pvVar16 = FUN_10107380(8,0x2f8);
  if (pvVar16 == (LPVOID)0x0) {
    FUN_1013679e(4,0x2f8);
                    /* WARNING: Does not return */
    pcVar10 = (code *)invalidInstructionException();
    (*pcVar10)();
  }
  local_238 = 0;
  uVar6 = param_2[3];
  uVar9 = param_2[4];
  local_1b0 = (int *)param_2[7];
  uStack_1ac = param_2[8];
  param_2[3] = 0;
  param_2[7] = 0;
  local_80 = (LPVOID)param_2[9];
  uStack_7c = param_2[10];
  param_2[9] = 0;
  uStack_1a8 = 0;
  uStack_1a4 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  pvVar17 = FUN_10107380(0,0x180);
  if (pvVar17 == (LPVOID)0x0) {
    FUN_1013679e(0x40,0x140);
                    /* WARNING: Does not return */
    pcVar10 = (code *)invalidInstructionException();
    (*pcVar10)();
  }
  uVar29 = (uint)pvVar17 & 0xffffffc0;
  *(LPVOID *)(uVar29 + 0x3c) = pvVar17;
  *(undefined4 *)(uVar29 + 0x40) = 1;
  *(undefined4 *)(uVar29 + 0x44) = 1;
  *(undefined4 *)(uVar29 + 0x80) = 0;
  *(LPVOID *)(uVar29 + 0x84) = pvVar16;
  *(undefined4 *)(uVar29 + 0xc0) = 0;
  *(LPVOID *)(uVar29 + 0xc4) = pvVar16;
  *(undefined4 *)(uVar29 + 0x100) = 0;
  *(undefined8 *)(uVar29 + 0x104) = local_198._0_8_;
  *(undefined4 *)(uVar29 + 0x10c) = local_198._8_4_;
  *(undefined4 *)(uVar29 + 0x110) = uVar6;
  *(undefined4 *)(uVar29 + 0x114) = uVar9;
  *(int **)(uVar29 + 0x118) = local_1b0;
  *(undefined4 *)(uVar29 + 0x11c) = uStack_1ac;
  *(ulonglong *)(uVar29 + 0x120) = CONCAT44(uStack_7c,local_80);
  *(undefined4 *)(uVar29 + 0x128) = 1;
  *(LPVOID *)(uVar29 + 300) = pvVar21;
  *(int *)(uVar29 + 0x130) = iVar35;
  *(LPVOID *)(uVar29 + 0x134) = pvVar21;
  *(undefined4 *)(uVar29 + 0x138) = 0;
  *(uint *)(uVar29 + 0x13c) = local_220;
  *(undefined1 **)(uVar29 + 0x140) = local_224;
  *(LPVOID *)(uVar29 + 0x144) = local_230;
  local_1ec.dwOemId = local_218.dwOemId;
  piVar18 = piVar19 + (int)local_244 * 4;
  local_1e4 = local_22c;
  local_1e0 = local_22c;
  local_1dc = local_23c;
  piVar27 = (int *)(uVar29 + 0x40);
  puVar28 = local_22c + local_234 * 2;
  local_1d4 = 0;
  local_1d0 = 0;
  local_1cc = 0;
  local_1f4 = piVar19;
  piStack_1e8 = piVar18;
  local_1d8 = puVar28;
  if (local_244 != (LPVOID)0x0) {
    local_198._16_4_ = uVar29 + 0x128;
    local_244 = (LPVOID)0x0;
    local_238 = 0;
    iVar35 = param_2[5];
    local_198._28_4_ = param_2[6];
    uVar6 = *param_2;
    SVar7 = param_2[1];
    local_80 = (LPVOID)CONCAT31(local_80._1_3_,*(undefined1 *)(param_2 + 0xb));
    piVar20 = piVar19;
    piStack_1f0 = piVar19;
    do {
      while( true ) {
        piVar19 = piVar20 + 4;
        cVar15 = (char)piVar20[3];
        if (cVar15 == '\x02') goto LAB_100bf7ba;
        local_140._8_4_ = piVar20[2];
        local_140._0_8_ = *(undefined8 *)piVar20;
        auVar14 = _local_140;
        uStack_134._1_2_ = *(undefined2 *)((int)piVar20 + 0xd);
        uStack_134._3_1_ = *(undefined1 *)((int)piVar20 + 0xf);
        local_140 = auVar14._0_12_;
        uStack_134._0_1_ = cVar15;
        auVar14 = _local_140;
        if (local_22c == puVar28) {
          local_1cc = local_238;
          local_140._0_4_ = (undefined4)*(undefined8 *)piVar20;
          LOCK();
          *(int *)local_140._0_4_ = *(int *)local_140._0_4_ + -1;
          iVar35 = *(int *)local_140._0_4_;
          UNLOCK();
          piStack_1f0 = piVar19;
          local_1e0 = local_22c;
          _local_140 = auVar14;
          if (iVar35 == 0) {
            FUN_100be220((int *)local_140);
          }
          goto LAB_100bf7d3;
        }
        piVar23 = (int *)*local_22c;
        uVar1 = *(undefined1 *)(local_22c + 1);
        local_68 = piVar20[2];
        local_70 = *(undefined8 *)piVar20;
        uVar2 = *(undefined1 *)((int)piVar20 + 0xf);
        uVar5 = *(undefined2 *)((int)piVar20 + 0xd);
        local_1b0 = piVar19;
        if (iVar35 == 0) {
          local_140._0_4_ = 0xffffffff;
          LOCK();
          iVar34 = *piVar27;
          *piVar27 = *piVar27 + 1;
          UNLOCK();
          if (*piVar27 == 0 || SCARRY4(iVar34,1) != *piVar27 < 0) goto LAB_100c02ad;
        }
        else {
          (**(code **)(local_198._28_4_ + 0x10))(local_140,iVar35,local_244);
          LOCK();
          iVar34 = *piVar27;
          *piVar27 = *piVar27 + 1;
          UNLOCK();
          if (*piVar27 == 0 || SCARRY4(iVar34,1) != *piVar27 < 0) goto LAB_100c02ad;
        }
        auVar14 = _local_140;
        pvVar16 = (LPVOID)local_140._8_4_;
        local_22c = local_22c + 2;
        local_164 = (LPVOID)local_140._8_4_;
        local_16c = (_union_530)local_140._0_4_;
        pvStack_168 = (void *)local_140._4_4_;
        uVar13 = _local_16c;
        local_158 = (int *)local_70;
        uStack_154 = (undefined4)((ulonglong)local_70 >> 0x20);
        local_150 = local_68;
        uStack_15c = CONCAT31(uStack_15c._1_3_,uVar1);
        iStack_144 = (int)local_244;
        local_238 = (int)local_244 + 1;
        local_174 = uVar6;
        local_170 = SVar7;
        piStack_160 = piVar23;
        local_14c = cVar15;
        uStack_14b = uVar5;
        uStack_149 = uVar2;
        piStack_148 = piVar27;
        _local_140 = auVar14;
        if ((local_244 != (LPVOID)0x0) || ((char)local_80 == '\0')) break;
        piVar19 = FUN_100be180();
        if (piVar19 == (int *)0x0) {
LAB_100c02c0:
          FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
          pcVar10 = (code *)invalidInstructionException();
          (*pcVar10)();
        }
        if (*piVar19 != 0) {
          piStack_1f0 = local_1b0;
          *(undefined1 *)param_1 = 5;
          local_1e0 = local_22c;
          local_1cc = local_238;
          if (0 < (int)local_16c.dwOemId) {
            pvVar36 = pvStack_168;
            pvVar26 = GetProcessHeap();
            HeapFree(pvVar26,0,pvVar36);
          }
          LOCK();
          *local_158 = *local_158 + -1;
          UNLOCK();
          if (*local_158 == 0) {
            FUN_100be220((int *)&local_158);
            LOCK();
            *piVar23 = *piVar23 + -1;
            UNLOCK();
            if (*piVar23 == 0) goto LAB_100bfa2a;
LAB_100bfa17:
            LOCK();
            *piVar27 = *piVar27 + -1;
            iVar35 = *piVar27;
            UNLOCK();
          }
          else {
            LOCK();
            *piVar23 = *piVar23 + -1;
            UNLOCK();
            if (*piVar23 != 0) goto LAB_100bfa17;
LAB_100bfa2a:
            FUN_100be220((int *)&piStack_160);
            LOCK();
            *piVar27 = *piVar27 + -1;
            iVar35 = *piVar27;
            UNLOCK();
          }
          if (iVar35 == 0) {
            FUN_100be280((int)piVar27);
          }
LAB_100bfab9:
          FUN_100c0500(&local_1f4);
          LOCK();
          *(int *)local_198._16_4_ = *(int *)local_198._16_4_ + -1;
          UNLOCK();
          if ((*(int *)local_198._16_4_ == 0) && (*(int *)(uVar29 + 0x144) != 0)) {
            uVar38 = 0;
            iVar34 = 8;
            iVar35 = *(int *)(uVar29 + 0x144) * 0x24;
            piVar19 = (int *)(*(int *)(uVar29 + 0x140) + 0x18);
            do {
              LOCK();
              iVar37 = *piVar19;
              *piVar19 = 3;
              UNLOCK();
              if (iVar37 == 2) {
                if (*(uint *)(uVar29 + 0x134) <= uVar38) {
                  FUN_10136b52(uVar38,*(uint *)(uVar29 + 0x134),&DAT_10151464);
                    /* WARNING: Does not return */
                  pcVar10 = (code *)invalidInstructionException();
                  (*pcVar10)();
                }
                iVar37 = *(int *)(uVar29 + 0x130);
                pRVar8 = (PSRWLOCK)(iVar37 + -8 + iVar34);
                AcquireSRWLockExclusive(pRVar8);
                if (*(char *)(iVar37 + -4 + iVar34) != '\0') {
                  *(undefined1 *)(iVar37 + -4 + iVar34) = 0;
                  WakeConditionVariable((PCONDITION_VARIABLE)(iVar37 + iVar34));
                  LOCK();
                  *(int *)(uVar29 + 0x138) = *(int *)(uVar29 + 0x138) + -1;
                  UNLOCK();
                }
                ReleaseSRWLockExclusive(pRVar8);
              }
              piVar19 = piVar19 + 9;
              iVar34 = iVar34 + 0x40;
              uVar38 = uVar38 + 1;
              iVar35 = iVar35 + -0x24;
            } while (iVar35 != 0);
          }
          LOCK();
          *piVar27 = *piVar27 + -1;
          UNLOCK();
          if (*piVar27 == 0) {
            FUN_100be280((int)piVar27);
          }
          goto LAB_100bf7ed;
        }
        FUN_100bdec0((undefined4 *)local_140,(int)&local_174);
        pvVar16 = FUN_10107380(0,0x100);
        if (pvVar16 == (LPVOID)0x0) goto LAB_100c029e;
        *(LPVOID *)(((uint)pvVar16 & 0xffffffc0) + 0x3c) = pvVar16;
        pvVar36 = (void *)(((uint)pvVar16 & 0xffffffc0) + 0x40);
        memcpy(pvVar36,local_140,0xc0);
        piVar20 = FUN_100be180();
        piVar19 = local_1b0;
        if (piVar20 == (int *)0x0) goto LAB_100c02c0;
        if (*piVar20 != 0) {
          FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10151400);
                    /* WARNING: Does not return */
          pcVar10 = (code *)invalidInstructionException();
          (*pcVar10)();
        }
        *piVar20 = (int)pvVar36;
        if (*(int *)(uVar29 + 0x144) == 0) {
          FUN_10136b52(0,0,&PTR_s_C__Users_runneradmin__cargo_regi_101513bc);
                    /* WARNING: Does not return */
          pcVar10 = (code *)invalidInstructionException();
          (*pcVar10)();
        }
        pRVar8 = *(PSRWLOCK *)(uVar29 + 0x140);
        AcquireSRWLockExclusive(pRVar8);
        *(undefined1 *)&pRVar8[1].Ptr = 1;
        WakeAllConditionVariable((PCONDITION_VARIABLE)(pRVar8 + 2));
        ReleaseSRWLockExclusive(pRVar8);
        local_244 = (LPVOID)0x1;
        piVar20 = piVar19;
        if (piVar19 == piVar18) goto LAB_100bf7ba;
      }
      local_16c = auVar14._0_4_;
      _local_16c = uVar13;
      if (local_16c == (_union_530)0xffffffff) {
        pvVar16 = (LPVOID)0xffffffff;
      }
      else if ((LPVOID)local_140._8_4_ == (LPVOID)0x0) {
        local_198._24_4_ = (LPVOID)0x1;
        pvVar16 = (LPVOID)0x0;
        local_198._20_4_ = (LPVOID)0x0;
      }
      else {
        pvStack_168 = auVar14._4_4_;
        pvVar36 = pvStack_168;
        pvVar21 = FUN_10107380(0,(SIZE_T)pvVar16);
        if (pvVar21 == (LPVOID)0x0) {
          FUN_101366bc(1);
                    /* WARNING: Does not return */
          pcVar10 = (code *)invalidInstructionException();
          (*pcVar10)();
        }
        memcpy(pvVar21,pvVar36,(size_t)pvVar16);
        local_198._24_4_ = pvVar21;
        local_198._20_4_ = pvVar16;
      }
      local_234._0_1_ = (char)uVar6;
      uVar38 = SVar7;
      pvStack_60 = pvVar16;
      pvStack_5c = (LPVOID)local_198._24_4_;
      pvStack_58 = (LPVOID)local_198._20_4_;
      if ((char)local_234 == '\0') {
        if (DAT_101632f8 == 0) {
          FUN_1010c370((undefined8 *)local_140,0x10156c2c,0xe);
          uVar9 = local_140._0_4_;
          if (local_140._0_4_ == 0xffffffff) {
            uVar38 = 0x200000;
          }
          else {
            lpMem = local_140._4_4_;
            FUN_10095490((undefined4 *)&local_1c0,local_140._4_4_,local_140._8_4_);
            if (((uint)local_1c0 == 1) || ((int)local_1b8 == 0)) {
LAB_100bf57e:
              uVar38 = 0x200000;
            }
            else {
              if ((int)local_1b8 == 1) {
                cVar15 = *local_1c0._4_4_;
                if ((cVar15 == '+') || (cVar15 == '-')) goto LAB_100bf57e;
              }
              else {
                cVar15 = *local_1c0._4_4_;
              }
              uVar38 = 0;
              uVar22 = (int)local_1b8 - (uint)(cVar15 == '+');
              pbVar33 = (byte *)(local_1c0._4_4_ + (cVar15 == '+'));
              if (8 < uVar22) {
                while( true ) {
                  bVar41 = uVar22 == 0;
                  uVar22 = uVar22 - 1;
                  if (bVar41) goto joined_r0x100bf585;
                  uVar32 = (uint)((ulonglong)uVar38 * 10);
                  if ((int)((ulonglong)uVar38 * 10 >> 0x20) != 0) break;
                  uVar31 = *pbVar33 - 0x30;
                  uVar38 = uVar32 + uVar31;
                  if ((9 < uVar31) || (pbVar33 = pbVar33 + 1, CARRY4(uVar32,uVar31))) break;
                }
                goto LAB_100bf57e;
              }
              for (; uVar22 != 0; uVar22 = uVar22 - 1) {
                bVar3 = *pbVar33;
                if (9 < bVar3 - 0x30) {
                  uVar38 = 0x200000;
                  break;
                }
                pbVar33 = pbVar33 + 1;
                uVar38 = (bVar3 - 0x30) + uVar38 * 10;
              }
            }
joined_r0x100bf585:
            if (uVar9 != 0) {
              pvVar26 = GetProcessHeap();
              HeapFree(pvVar26,0,(LPVOID)lpMem);
            }
          }
          DAT_101632f8 = uVar38 + 1;
        }
        else {
          uVar38 = DAT_101632f8 - 1;
        }
      }
      uVar22 = (uint)DAT_10163398;
      uVar32 = DAT_10163398._4_4_;
      do {
        if ((uVar22 & uVar32) == 0xffffffff) {
          FUN_1013c0e0();
                    /* WARNING: Does not return */
          pcVar10 = (code *)invalidInstructionException();
          (*pcVar10)();
        }
        iVar34 = uVar22 + 1;
        iVar37 = uVar32 + (0xfffffffe < uVar22);
        LOCK();
        bVar41 = CONCAT44(uVar32,uVar22) == DAT_10163398;
        if (bVar41) {
          DAT_10163398 = CONCAT44(iVar37,iVar34);
        }
        else {
          uVar32 = (uint)((ulonglong)DAT_10163398 >> 0x20);
          uVar22 = (uint)DAT_10163398;
        }
        UNLOCK();
      } while (!bVar41);
      piVar20 = (int *)FUN_1010c9e0(iVar34,iVar37,(uint *)&pvStack_60);
      piStack_178 = piVar20;
      FUN_1011ae10((uint *)&local_1c0,&piStack_178);
      piVar23 = FUN_10107380(0,0x18);
      if (piVar23 == (int *)0x0) {
        FUN_1013679e(4,0x18);
                    /* WARNING: Does not return */
        pcVar10 = (code *)invalidInstructionException();
        (*pcVar10)();
      }
      *piVar23 = 1;
      piVar23[1] = 1;
      piVar23[2] = 0;
      piVar23[3] = 0;
      LOCK();
      iVar34 = *piVar23;
      *piVar23 = *piVar23 + 1;
      UNLOCK();
      if (*piVar23 == 0 || SCARRY4(iVar34,1) != *piVar23 < 0) goto LAB_100c02ad;
      local_120 = CONCAT44(local_150,uStack_154);
      uStack_128._4_4_ = local_158;
      uStack_128._0_4_ = uStack_15c;
      uStack_118 = CONCAT44(piStack_148,CONCAT13(uStack_149,CONCAT21(uStack_14b,local_14c)));
      local_140._4_4_ = local_170;
      local_140._0_4_ = local_174;
      local_130._4_4_ = piStack_160;
      local_130._0_4_ = local_164;
      iStack_110 = iStack_144;
      local_140._8_4_ = local_16c;
      uStack_134 = pvStack_168;
      uStack_10c = local_1c0;
      uStack_104 = local_1b8;
      puVar24 = FUN_10107380(0,0x48);
      if (puVar24 == (undefined4 *)0x0) {
        FUN_1013679e(4,0x48);
                    /* WARNING: Does not return */
        pcVar10 = (code *)invalidInstructionException();
        (*pcVar10)();
      }
      puVar25 = (undefined4 *)local_140;
      puVar40 = puVar24;
      for (iVar34 = 0x11; iVar34 != 0; iVar34 = iVar34 + -1) {
        *puVar40 = *puVar25;
        puVar25 = puVar25 + 1;
        puVar40 = puVar40 + 1;
      }
      puVar24[0x11] = piVar23;
      LOCK();
      iVar34 = *piVar20;
      *piVar20 = *piVar20 + 1;
      UNLOCK();
      if (*piVar20 == 0 || SCARRY4(iVar34,1) != *piVar20 < 0) goto LAB_100c02ad;
      puVar25 = FUN_10107380(0,0xc);
      piVar19 = local_1b0;
      if (puVar25 == (undefined4 *)0x0) {
        FUN_1013679e(4,0xc);
                    /* WARNING: Does not return */
        pcVar10 = (code *)invalidInstructionException();
        (*pcVar10)();
      }
      *puVar25 = piVar20;
      puVar25[1] = puVar24;
      puVar25[2] = &PTR_LAB_101513cc;
      FUN_1010f5d0(&bStack_1c8,uVar38,puVar25);
      if (bStack_1c8 != 0xff) {
        LOCK();
        *piVar23 = *piVar23 + -1;
        UNLOCK();
        if (*piVar23 == 0) {
          FUN_1011afa0(piVar23);
        }
        LOCK();
        *piVar20 = *piVar20 + -1;
        UNLOCK();
        if (*piVar20 == 0) {
          FUN_10107640(piVar20);
        }
        param_1[1] = (uint)pvStack_1c4;
        *param_1 = (uint)bStack_1c5 << 0x18 | (uint)uStack_1c7 << 8 | (uint)bStack_1c8;
        piStack_1f0 = local_1b0;
        local_1e0 = local_22c;
        local_1cc = local_238;
        goto LAB_100bfab9;
      }
      CloseHandle(pvStack_1c4);
      LOCK();
      *piVar20 = *piVar20 + -1;
      UNLOCK();
      if (*piVar20 == 0) {
        FUN_10107640(piVar20);
      }
      LOCK();
      *piVar23 = *piVar23 + -1;
      UNLOCK();
      if (*piVar23 == 0) {
        FUN_1011afa0(piVar23);
      }
      piVar20 = piVar19;
      local_244 = (LPVOID)local_238;
    } while (piVar19 != piVar18);
  }
LAB_100bf7ba:
  local_1cc = local_238;
  piStack_1f0 = piVar19;
  local_1e0 = local_22c;
LAB_100bf7d3:
  FUN_100c0500(&local_1f4);
  param_1[1] = (uint)piVar27;
  *(undefined1 *)param_1 = 0xff;
LAB_100bf7ed:
  pvVar16 = (LPVOID)param_2[3];
  if (pvVar16 != (LPVOID)0x0) {
    puVar28 = (undefined4 *)param_2[4];
    if ((code *)*puVar28 != (code *)0x0) {
      (*(code *)*puVar28)(pvVar16);
    }
    if (puVar28[1] != 0) {
      if (8 < (uint)puVar28[2]) {
        pvVar16 = *(LPVOID *)((int)pvVar16 + -4);
      }
      pvVar26 = GetProcessHeap();
      HeapFree(pvVar26,0,pvVar16);
    }
  }
  pvVar16 = (LPVOID)param_2[5];
  if (pvVar16 != (LPVOID)0x0) {
    puVar28 = (undefined4 *)param_2[6];
    if ((code *)*puVar28 != (code *)0x0) {
      (*(code *)*puVar28)(pvVar16);
    }
    if (puVar28[1] != 0) {
      if (8 < (uint)puVar28[2]) {
        pvVar16 = *(LPVOID *)((int)pvVar16 + -4);
      }
      pvVar26 = GetProcessHeap();
      HeapFree(pvVar26,0,pvVar16);
    }
  }
  pvVar16 = (LPVOID)param_2[7];
  if (pvVar16 != (LPVOID)0x0) {
    puVar28 = (undefined4 *)param_2[8];
    if ((code *)*puVar28 != (code *)0x0) {
      (*(code *)*puVar28)(pvVar16);
    }
    if (puVar28[1] != 0) {
      if (8 < (uint)puVar28[2]) {
        pvVar16 = *(LPVOID *)((int)pvVar16 + -4);
      }
      pvVar26 = GetProcessHeap();
      HeapFree(pvVar26,0,pvVar16);
    }
  }
  pvVar16 = (LPVOID)param_2[9];
  if (pvVar16 != (LPVOID)0x0) {
    puVar28 = (undefined4 *)param_2[10];
    if ((code *)*puVar28 != (code *)0x0) {
      (*(code *)*puVar28)(pvVar16);
    }
    if (puVar28[1] != 0) {
      if (8 < (uint)puVar28[2]) {
        pvVar16 = *(LPVOID *)((int)pvVar16 + -4);
      }
      pvVar26 = GetProcessHeap();
      HeapFree(pvVar26,0,pvVar16);
    }
  }
  return;
LAB_100c029e:
  FUN_1013679e(0x40,0xc0);
LAB_100c02ad:
                    /* WARNING: Does not return */
  pcVar10 = (code *)invalidInstructionException();
  (*pcVar10)();
}
