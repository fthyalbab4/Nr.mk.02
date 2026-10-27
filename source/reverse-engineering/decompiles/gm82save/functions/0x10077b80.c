// rea decompile_all
// name: FUN_10077b80
// address: 0x10077b80
// body: available
// range: 0x10077b80-0x10077f1d inclusive
// range: 0x10077f20-0x10077f9b inclusive
// range: 0x10077fa0-0x100784b0 inclusive
// range: 0x100784c0-0x10078590 inclusive
// range: 0x100785a0-0x1007865c inclusive
// range: 0x10078660-0x100786f5 inclusive
// range: 0x10078700-0x1007877d inclusive
// range: 0x10078780-0x10078915 inclusive
// range: 0x10078920-0x10078a64 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10077b80(void)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  int ***lpMem;
  int **ppiVar3;
  int **ppiVar4;
  int **_Src;
  int ***pppiVar5;
  LPVOID pvVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  byte bVar11;
  uint *puVar12;
  uint ****ppppuVar13;
  int *piVar14;
  HANDLE pvVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  SIZE_T SVar19;
  int iVar20;
  uint uVar21;
  uint ***pppuVar22;
  uint uVar23;
  uint uVar24;
  ushort *puVar25;
  uint ***pppuVar26;
  int iVar27;
  code *pcVar28;
  undefined1 auVar29 [4];
  uint uVar30;
  uint uVar31;
  undefined8 **ppuVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint ****ppppuVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  code *pcVar40;
  int *piVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  void *local_164;
  undefined1 uStack_14d;
  undefined1 local_14c [4];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 *local_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  int local_120;
  uint ***local_11c;
  uint local_118;
  int *local_114;
  uint local_110;
  uint ****local_10c;
  undefined1 local_105 [5];
  uint ****local_100;
  uint ****local_fc;
  uint ****local_f8;
  int ***local_f4;
  uint ****local_f0;
  undefined8 *local_ec;
  uint ***local_e8;
  int *****local_e4;
  uint ****local_e0;
  int *****local_dc;
  undefined8 **local_d8;
  uint ****local_d4;
  uint ****local_d0;
  int local_cc;
  undefined4 local_c8;
  uint ****local_c4;
  uint ***local_c0;
  undefined4 local_bc;
  uint ****local_b8;
  int local_b4;
  undefined4 local_b0;
  uint ****local_ac;
  int local_a8;
  int local_a4;
  undefined *local_a0;
  int local_9c;
  uint ****local_98;
  uint ****local_94;
  int ***local_90;
  uint ****local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  uint ****local_68;
  int local_64;
  undefined4 local_60;
  uint ****local_5c;
  uint ***local_58;
  undefined4 local_54;
  uint ****local_50;
  int local_4c;
  undefined4 local_48;
  uint ****local_44;
  undefined **local_40;
  uint ****local_3c;
  uint ****local_38;
  int ***local_34;
  uint ****local_30;
  uint ***local_2c [2];
  int local_24;
  int aiStack_20 [4];

  uVar9 = _DAT_0077f4f4;
  iVar27 = _DAT_0077f4e4;
  uVar8 = _DAT_0077f3f8;
  iVar20 = _DAT_0077f3f4;
  ppppuVar13 = _DAT_0077f3a8;
  uVar18 = _DAT_0077f2dc;
  pppuVar26 = _DAT_0077f2cc;
  ppuVar32 = _DAT_0077f0d0;
  if (DAT_10163248 == 0) {
    cVar10 = (*(code *)0x696744)();
    return cVar10 != '\0';
  }
  local_9c = _DAT_0078c14c;
  if (_DAT_0078c14c == 0) {
    local_9c = 4;
  }
  local_120 = _DAT_0077f3c4;
  local_105._1_4_ = _DAT_0078c150;
  if (_DAT_0078c150 == 0) {
    local_105._1_4_ = 4;
  }
  local_10c = _DAT_0077f3b8;
  local_14c = (undefined1  [4])_DAT_0077f0e0;
  puVar12 = FUN_10093010();
  if (puVar12 == (uint *)0x0) goto LAB_10078a59;
  local_140 = 0;
  if (iVar20 == 0) {
    iVar20 = 4;
  }
  if (pppuVar26 == (uint ***)0x0) {
    pppuVar26 = (uint ***)0x4;
  }
  local_148 = 0x10159670;
  local_138 = (undefined8 *)*puVar12;
  uStack_134 = puVar12[1];
  uStack_130 = puVar12[2];
  uStack_12c = puVar12[3];
  if (iVar27 == 0) {
    iVar27 = 4;
  }
  if (ppuVar32 == (undefined8 **)0x0) {
    ppuVar32 = (undefined8 **)&DAT_00000004;
  }
  if (ppppuVar13 == (uint ****)0x0) {
    ppppuVar13 = (uint ****)&DAT_00000004;
  }
  *puVar12 = (int)local_138 + 1;
  puVar12[1] = puVar12[1] + (uint)((undefined8 *)0xfffffffe < local_138);
  local_e0 = local_10c;
  local_dc = (int *****)local_105;
  local_78 = CONCAT44(local_dc,local_10c);
  local_d4 = (uint ****)local_14c;
  local_70 = CONCAT44(local_14c,ppuVar32);
  local_c8 = uVar9;
  local_60 = uVar9;
  local_bc = uVar18;
  local_54 = uVar18;
  local_b0 = uVar8;
  local_48 = uVar8;
  local_40 = &local_a0;
  local_88 = CONCAT44(local_120,local_105._1_4_);
  local_80 = CONCAT44(ppppuVar13,local_40);
  local_a8 = local_105._1_4_;
  local_a4 = local_120;
  local_a0 = &DAT_10142da2;
  local_11c = pppuVar26;
  local_e4 = (int *****)ppppuVar13;
  local_d8 = ppuVar32;
  local_d0 = (uint ****)local_dc;
  local_cc = iVar27;
  local_c4 = (uint ****)local_dc;
  local_c0 = pppuVar26;
  local_b8 = (uint ****)local_dc;
  local_b4 = iVar20;
  local_ac = (uint ****)local_dc;
  local_68 = (uint ****)local_dc;
  local_64 = iVar27;
  local_5c = (uint ****)local_dc;
  local_58 = pppuVar26;
  local_50 = (uint ****)local_dc;
  local_4c = iVar20;
  local_44 = (uint ****)local_dc;
  piVar14 = FUN_100be180();
  if (piVar14 == (int *)0x0) goto LAB_10078a59;
  iVar20 = *piVar14;
  if (iVar20 == 0) {
    piVar14 = FUN_100c0800();
    iVar27 = *piVar14;
    piVar14 = FUN_100be180();
    if (piVar14 == (int *)0x0) goto LAB_10078a59;
    iVar20 = *piVar14;
    if (iVar20 == 0) {
      FUN_1012d480((undefined8 *)&local_fc,(uint *)(iVar27 + 0x40),(undefined4 *)&local_88);
    }
    else {
      if (*(int *)(iVar20 + 0x8c) == iVar27) goto LAB_10077e0a;
      FUN_1012fe20((undefined8 *)&local_fc,(uint *)(iVar27 + 0x40),iVar20,(undefined4 *)&local_88);
    }
  }
  else {
LAB_10077e0a:
    FUN_1002e9b0(&local_fc,&local_88,iVar20);
  }
  if (local_f8 == (uint ****)0x0) {
    ppppuVar13 = local_fc;
    if (local_fc != (uint ****)0x0) {
      do {
        ppppuVar36 = (uint ****)ppppuVar13[3];
        if (ppppuVar36 != (uint ****)0x0) {
          ppppuVar36[4] = (uint ***)0x0;
        }
        if (*ppppuVar13 != (uint ***)0x0) {
          pppuVar26 = ppppuVar13[1];
          pvVar15 = GetProcessHeap();
          HeapFree(pvVar15,0,pppuVar26);
        }
        pvVar15 = GetProcessHeap();
        HeapFree(pvVar15,0,ppppuVar13);
        ppppuVar13 = ppppuVar36;
        pppuVar26 = local_e8;
        local_fc = local_f0;
      } while (ppppuVar36 != (uint ****)0x0);
      goto joined_r0x10077ec7;
    }
    ppppuVar13 = local_f0;
    if (local_e8 != (uint ***)0x0) goto LAB_10077ec9;
LAB_10077f0e:
    pcVar28 = GetProcessHeap_exref;
    if (ppppuVar13 == (uint ****)0x0) goto LAB_10078379;
  }
  else {
    pppuVar26 = (uint ***)local_f4;
    if (local_f0 != (uint ****)0x0) {
      local_f8[3] = (uint ***)local_f0;
      local_f0[4] = (uint ***)local_f8;
      pppuVar26 = (uint ***)((int)local_f4 + (int)local_e8);
    }
joined_r0x10077ec7:
    local_e8 = pppuVar26;
    ppppuVar13 = local_fc;
    if (local_e8 == (uint ***)0x0) goto LAB_10077f0e;
LAB_10077ec9:
    if (ppppuVar13 == (uint ****)0x0) goto LAB_10077f0e;
    uVar31 = 0;
    ppppuVar36 = ppppuVar13;
    do {
      local_e8 = (uint ***)((int)local_e8 + -1);
      uVar31 = uVar31 + (int)ppppuVar36[2];
      if (local_e8 == (uint ***)0x0) break;
      ppppuVar36 = (uint ****)ppppuVar36[3];
    } while (ppppuVar36 != (uint ****)0x0);
    pcVar28 = GetProcessHeap_exref;
    if (uVar31 != 0) {
      FUN_10135590((undefined4 *)&local_148,uVar31,(uint *)&local_138);
      pcVar28 = GetProcessHeap_exref;
    }
  }
  do {
    ppppuVar36 = (uint ****)ppppuVar13[3];
    if (ppppuVar36 != (uint ****)0x0) {
      ppppuVar36[4] = (uint ***)0x0;
    }
    local_11c = *ppppuVar13;
    pppuVar26 = ppppuVar13[2];
    local_100 = (uint ****)ppppuVar13[1];
    pvVar15 = (HANDLE)(*pcVar28)();
    HeapFree(pvVar15,0,ppppuVar13);
    pcVar40 = HeapFree_exref;
    if (local_11c == (uint ***)0xffffffff) goto joined_r0x10078373;
    pppuVar22 = (uint ***)(((uint)pppuVar26 & 1) + ((uint)pppuVar26 >> 1));
    if (local_140._4_4_ == 0) {
      pppuVar22 = pppuVar26;
    }
    ppppuVar13 = local_100;
    if ((uint ***)local_140 < pppuVar22) {
      FUN_10135590((undefined4 *)&local_148,(uint)pppuVar22,(uint *)&local_138);
      ppppuVar13 = local_100;
    }
    local_100 = ppppuVar13;
    if (pppuVar26 != (uint ***)0x0) {
      local_10c = ppppuVar13 + (int)pppuVar26;
LAB_1007809a:
      uVar23 = uStack_130 ^ 0x6e646f6d;
      uVar30 = uStack_12c ^ 0x70656462;
      uVar16 = uStack_12c ^ 0x646f7261;
      pppuVar26 = *ppppuVar13;
      uVar21 = uStack_130 ^ (uint)pppuVar26 ^ 0x79746573;
      uVar37 = ((uint)local_138 ^ 0x70736575) + uVar23;
      uVar31 = (uStack_134 ^ 0x736f6d65) + uVar16 +
               (uint)CARRY4((uint)local_138 ^ 0x70736575,uVar23);
      uVar35 = ((uint)local_138 ^ 0x6e657261) + uVar21;
      uVar17 = (uStack_134 ^ 0x6c796765) + uVar30 +
               (uint)CARRY4((uint)local_138 ^ 0x6e657261,uVar21);
      uVar38 = (uVar23 << 0xd | uVar16 >> 0x13) ^ uVar37;
      uVar24 = (uVar23 >> 0x13 | uVar16 << 0xd) ^ uVar31;
      uVar33 = (uVar21 << 0x10 | uVar30 >> 0x10) ^ uVar35;
      uVar21 = (uVar30 << 0x10 | uVar21 >> 0x10) ^ uVar17;
      uVar16 = uVar17 + uVar24 + (uint)CARRY4(uVar35,uVar38);
      uVar17 = uVar37 + uVar21 + (uint)CARRY4(uVar31,uVar33);
      uVar34 = (uVar33 >> 0xb | uVar21 << 0x15) ^ uVar17;
      uVar23 = (uVar38 << 0x11 | uVar24 >> 0xf) ^ uVar35 + uVar38;
      uVar39 = (uVar38 >> 0xf | uVar24 << 0x11) ^ uVar16;
      uVar24 = (uVar33 << 0x15 | uVar21 >> 0xb) ^ uVar31 + uVar33;
      uVar31 = uVar31 + uVar33 ^ (uint)pppuVar26;
      uVar16 = uVar16 ^ 0xff;
      uVar33 = uVar31 + uVar23;
      uVar31 = (uVar17 ^ 0x4000000) + uVar39 + (uint)CARRY4(uVar31,uVar23);
      uVar21 = uVar16 + uVar24;
      uVar35 = uVar35 + uVar38 + uVar34 + (uint)CARRY4(uVar16,uVar24);
      uVar37 = (uVar23 << 0xd | uVar39 >> 0x13) ^ uVar33;
      uVar30 = (uVar24 >> 0x10 | uVar34 << 0x10) ^ uVar35;
      uVar17 = (uVar23 >> 0x13 | uVar39 << 0xd) ^ uVar31;
      uVar24 = (uVar24 << 0x10 | uVar34 >> 0x10) ^ uVar21;
      uVar35 = uVar35 + uVar17 + (uint)CARRY4(uVar21,uVar37);
      uVar16 = uVar31 + uVar24;
      uVar31 = uVar33 + uVar30 + (uint)CARRY4(uVar31,uVar24);
      uVar34 = (uVar37 >> 0xf | uVar17 << 0x11) ^ uVar35;
      uVar23 = (uVar37 << 0x11 | uVar17 >> 0xf) ^ uVar21 + uVar37;
      uVar38 = (uVar24 >> 0xb | uVar30 << 0x15) ^ uVar31;
      uVar24 = (uVar24 << 0x15 | uVar30 >> 0xb) ^ uVar16;
      uVar31 = uVar31 + uVar34 + (uint)CARRY4(uVar16,uVar23);
      uVar17 = uVar35 + uVar24;
      uVar35 = uVar21 + uVar37 + uVar38 + (uint)CARRY4(uVar35,uVar24);
      uVar33 = (uVar23 << 0xd | uVar34 >> 0x13) ^ uVar16 + uVar23;
      uVar21 = (uVar23 >> 0x13 | uVar34 << 0xd) ^ uVar31;
      uVar30 = (uVar24 >> 0x10 | uVar38 << 0x10) ^ uVar35;
      uVar24 = (uVar24 << 0x10 | uVar38 >> 0x10) ^ uVar17;
      uVar37 = uVar35 + uVar21 + (uint)CARRY4(uVar17,uVar33);
      uVar35 = uVar31 + uVar24;
      uVar34 = uVar16 + uVar23 + uVar30 + (uint)CARRY4(uVar31,uVar24);
      uVar38 = (uVar33 << 0x11 | uVar21 >> 0xf) ^ uVar17 + uVar33;
      uVar21 = (uVar33 >> 0xf | uVar21 << 0x11) ^ uVar37;
      uVar23 = (uVar24 >> 0xb | uVar30 << 0x15) ^ uVar34;
      uVar16 = (uVar24 << 0x15 | uVar30 >> 0xb) ^ uVar35;
      uVar24 = uVar37 + uVar16;
      uVar31 = uVar17 + uVar33 + uVar23 + (uint)CARRY4(uVar37,uVar16);
      uVar17 = (uVar38 << 0xd | uVar21 >> 0x13) ^ uVar35 + uVar38;
      uVar35 = (uVar38 >> 0x13 | uVar21 << 0xd) ^ uVar34 + uVar21 + (uint)CARRY4(uVar35,uVar38);
      uVar31 = (((uVar23 << 0x10 | uVar16 >> 0x10) ^ uVar31) >> 0xb |
               (uVar23 >> 0x10 ^ uVar24) << 0x15) ^
               (uVar35 >> 0xf | uVar17 << 0x11) ^ uVar31 + uVar35 + (uint)CARRY4(uVar24,uVar17) ^
               uVar24 + uVar17;
      local_14c = (undefined1  [4])ppppuVar13;
      if ((uint ***)local_140 == (uint ***)0x0) {
        FUN_10135590((undefined4 *)&local_148,1,(uint *)&local_138);
      }
      iVar20 = 0;
      bVar7 = false;
      ppppuVar13 = (uint ****)((int)local_14c + 4);
      bVar11 = (byte)(uVar31 >> 0x18);
      bVar42 = bVar11 >> 1;
      auVar43 = ZEXT216(CONCAT11(bVar42,bVar42));
      auVar43 = pshuflw(auVar43,auVar43,0);
      do {
        uVar31 = (uint)local_148._4_4_ & uVar31;
        auVar2 = *(undefined1 (*) [16])(*(undefined1 (*) [16])local_148 + uVar31);
        auVar45[0] = -(auVar2[0] == auVar43[0]);
        auVar45[1] = -(auVar2[1] == auVar43[1]);
        auVar45[2] = -(auVar2[2] == auVar43[2]);
        auVar45[3] = -(auVar2[3] == auVar43[3]);
        auVar45[4] = -(auVar2[4] == auVar43[4]);
        auVar45[5] = -(auVar2[5] == auVar43[5]);
        auVar45[6] = -(auVar2[6] == auVar43[6]);
        auVar45[7] = -(auVar2[7] == auVar43[7]);
        auVar45[8] = -(auVar2[8] == auVar43[0]);
        auVar45[9] = -(auVar2[9] == auVar43[1]);
        auVar45[10] = -(auVar2[10] == auVar43[2]);
        auVar45[0xb] = -(auVar2[0xb] == auVar43[3]);
        auVar45[0xc] = -(auVar2[0xc] == auVar43[4]);
        auVar45[0xd] = -(auVar2[0xd] == auVar43[5]);
        bVar42 = auVar2[0xf];
        auVar45[0xe] = -(auVar2[0xe] == auVar43[6]);
        auVar45[0xf] = -(bVar42 == auVar43[7]);
        uVar35 = (uint)(ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
                               (ushort)(auVar45[0xf] >> 7) << 0xf);
        while ((short)uVar35 != 0) {
          iVar27 = 0;
          for (uVar17 = uVar35; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x80000000) {
            iVar27 = iVar27 + 1;
          }
          uVar35 = uVar35 - 1 & uVar35;
          if (pppuVar26 ==
              *(uint ****)
               ((int)(undefined1 (*) [16])local_148 +
               (iVar27 + uVar31 & (uint)local_148._4_4_) * -4 + -4)) goto LAB_10078090;
        }
        auVar29 = local_14c;
        if (bVar7) {
LAB_10078012:
          auVar44[0] = -(auVar2[0] == -1);
          auVar44[1] = -(auVar2[1] == -1);
          auVar44[2] = -(auVar2[2] == -1);
          auVar44[3] = -(auVar2[3] == -1);
          auVar44[4] = -(auVar2[4] == -1);
          auVar44[5] = -(auVar2[5] == -1);
          auVar44[6] = -(auVar2[6] == -1);
          auVar44[7] = -(auVar2[7] == 0xff);
          auVar44[8] = -(auVar2[8] == -1);
          auVar44[9] = -(auVar2[9] == -1);
          auVar44[10] = -(auVar2[10] == -1);
          auVar44[0xb] = -(auVar2[0xb] == -1);
          auVar44[0xc] = -(auVar2[0xc] == -1);
          auVar44[0xd] = -(auVar2[0xd] == -1);
          auVar44[0xe] = -(auVar2[0xe] == -1);
          auVar44[0xf] = -(bVar42 == 0xff);
          if ((((((((((((((((SUB161(auVar44 >> 7,0) & 1) != 0 || (SUB161(auVar44 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar44 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar44 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar44 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar44 >> 0x2f,0) & 1) != 0) || (SUB161(auVar44 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar44 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar44 >> 0x47,0) & 1) != 0) || (SUB161(auVar44 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar44 >> 0x57,0) & 1) != 0) || (SUB161(auVar44 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar44 >> 0x67,0) & 1) != 0) || (SUB161(auVar44 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar44 >> 0x77,0) & 1) != 0) || auVar44[0xf] < '\0') goto LAB_1007804e;
          bVar7 = true;
          local_14c = auVar29;
        }
        else {
          uVar35 = (uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
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
                                 (ushort)(bVar42 >> 7) << 0xf);
          if (uVar35 != 0) {
            iVar27 = 0;
            for (; (uVar35 & 1) == 0; uVar35 = uVar35 >> 1 | 0x80000000) {
              iVar27 = iVar27 + 1;
            }
            auVar29 = (undefined1  [4])(iVar27 + uVar31 & (uint)local_148._4_4_);
            goto LAB_10078012;
          }
          bVar7 = false;
        }
        uVar31 = iVar20 + 0x10 + uVar31;
        iVar20 = iVar20 + 0x10;
      } while( true );
    }
LAB_10078340:
    pcVar28 = GetProcessHeap_exref;
    if (local_11c != (uint ***)0x0) {
      pvVar15 = GetProcessHeap();
      HeapFree(pvVar15,0,local_100);
    }
    ppppuVar13 = ppppuVar36;
  } while (ppppuVar36 != (uint ****)0x0);
LAB_10078379:
  ppppuVar13 = _DAT_0077f3b8;
  local_78 = CONCAT44(uStack_134,local_138);
  local_70 = CONCAT44(uStack_12c,uStack_130);
  local_138 = &local_88;
  local_dc = (int *****)&local_e8;
  local_88 = local_148;
  local_80 = local_140;
  local_118 = 0;
  local_114 = (int *)&DAT_00000004;
  local_110 = 0;
  local_fc = _DAT_0077f3a8;
  if (_DAT_0077f3a8 == (uint ****)0x0) {
    local_fc = (uint ****)&DAT_00000004;
  }
  local_f4 = _DAT_0077f3b0;
  if (_DAT_0077f3b0 == (int ***)0x0) {
    local_f4 = (int ***)0x4;
  }
  local_f8 = _DAT_0077f3b8;
  local_148 = CONCAT44(_DAT_0077f3b8,local_fc);
  local_e0 = _DAT_0077f3b8;
  local_d4 = local_2c;
  local_38 = _DAT_0077f3b8;
  local_94 = _DAT_0077f3b8;
  local_f0 = _DAT_0077f3b8;
  local_140 = CONCAT44(_DAT_0077f3b8,local_f4);
  local_d8 = &local_138;
  local_30 = _DAT_0077f3b8;
  local_8c = _DAT_0077f3b8;
  local_d0 = _DAT_0077f3b8;
  local_ec = local_138;
  local_e4 = (int *****)local_fc;
  local_98 = local_fc;
  local_90 = local_f4;
  local_3c = local_fc;
  local_34 = local_f4;
  piVar14 = FUN_100be180();
  if (piVar14 == (int *)0x0) {
LAB_10078a59:
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar28 = (code *)invalidInstructionException();
    (*pcVar28)();
  }
  if (*piVar14 == 0) {
    piVar14 = FUN_100c0800();
  }
  else {
    piVar14 = (int *)(*piVar14 + 0x8c);
  }
  uVar31 = (uint)(ppppuVar13 == (uint ****)0xffffffff);
  if (uVar31 < *(uint *)(*piVar14 + 0x104)) {
    uVar31 = *(uint *)(*piVar14 + 0x104);
  }
  FUN_10027710((int *)local_2c,(uint)ppppuVar13,'\0',uVar31,1,(int *)&local_98,&local_dc);
  pppuVar26 = local_2c[0];
  if (local_24 == 0) goto joined_r0x1007858a;
  if (local_2c[0] == (uint ***)0x0) goto joined_r0x1007858a;
  uVar31 = 0;
  do {
    local_24 = local_24 + -1;
    uVar31 = uVar31 + (int)local_2c[0][2];
    if (local_24 == 0) break;
    local_2c[0] = (uint ***)local_2c[0][3];
  } while (local_2c[0] != (uint ***)0x0);
  if (uVar31 != 0) {
    FUN_101359e0(&local_118,0,uVar31,&DAT_00000004,0xc);
  }
  do {
    lpMem = (int ***)pppuVar26[3];
    if (lpMem != (int ***)0x0) {
      lpMem[4] = (int **)0x0;
    }
    ppiVar3 = (int **)*pppuVar26;
    ppiVar4 = (int **)pppuVar26[2];
    _Src = (int **)pppuVar26[1];
    pvVar15 = GetProcessHeap();
    HeapFree(pvVar15,0,pppuVar26);
    if (ppiVar3 == (int **)0xffffffff) goto joined_r0x10078653;
    if ((int **)(local_118 - local_110) < ppiVar4) {
      FUN_101359e0(&local_118,local_110,(uint)ppiVar4,&DAT_00000004,0xc);
LAB_100785f1:
      uVar31 = local_110;
      memcpy(local_114 + local_110 * 3,_Src,(int)ppiVar4 * 0xc);
    }
    else {
      uVar31 = local_110;
      if (ppiVar4 != (int **)0x0) goto LAB_100785f1;
    }
    local_110 = uVar31 + (int)ppiVar4;
    pppuVar26 = (uint ***)lpMem;
    if (ppiVar3 != (int **)0x0) {
      pvVar15 = GetProcessHeap();
      HeapFree(pvVar15,0,_Src);
    }
joined_r0x1007858a:
  } while (pppuVar26 != (uint ***)0x0);
LAB_1007869d:
  uVar35 = local_110;
  piVar14 = local_114;
  uVar31 = local_118;
  (*(code *)0x52f12c)();
  (*(code *)0x52f12c)();
  if (uVar35 != 0) {
    piVar41 = piVar14;
    do {
      if ((int *)*piVar41 == (int *)0x0) break;
      local_98 = (uint ****)piVar41[2];
      uVar17 = piVar41[1];
      puVar25 = *(ushort **)*piVar41;
      if (puVar25 == (ushort *)0x0) {
        puVar25 = (ushort *)0x2;
        SVar19 = 0;
      }
      else {
        SVar19 = *(SIZE_T *)(puVar25 + -2);
      }
      FUN_10093310(&local_148,puVar25,SVar19);
      pvVar6 = local_148._4_4_;
      FUN_10095490(&local_e4,(int)local_148._4_4_,(uint)(uint ***)local_140);
      ppppuVar13 = local_e0;
      if ((char)local_e4 != '\0') {
        FUN_10136b20(&PTR_s_src_compiler_rs_10142dc0);
                    /* WARNING: Does not return */
        pcVar28 = (code *)invalidInstructionException();
        (*pcVar28)();
      }
      local_e4 = (int *****)&local_fc;
      local_e0 = (uint ****)&LAB_10093d10;
      local_fc = ppppuVar13;
      local_f8 = (uint ****)local_dc;
      local_dc = (int *****)&local_98;
      local_d8 = (undefined8 **)&LAB_1009d5f0;
      FUN_10093970((undefined8 *)aiStack_20,(ushort *)&DAT_10142da2,(uint)&local_e4);
      if ((undefined1 (*) [16])local_148 != (undefined1 (*) [16])0x0) {
        pvVar15 = GetProcessHeap();
        HeapFree(pvVar15,0,pvVar6);
      }
      local_e4 = (int *****)FUN_100033c0(aiStack_20);
      (*(code *)0x52f168)();
      iVar20 = 10;
      (*(code *)0x407ea8)();
      uVar16 = uVar17;
      uVar21 = uVar17;
      if (999 < uVar17) {
        do {
          uVar21 = uVar16 / 10000;
          *(uint *)(local_14c + iVar20) =
               CONCAT22((&DAT_10145841)[(uVar16 % 10000) % 100],
                        (&DAT_10145841)[(uVar16 % 10000) / 100]);
          iVar20 = iVar20 + -4;
          bVar7 = 9999999 < uVar16;
          uVar16 = uVar21;
        } while (bVar7);
      }
      uVar16 = uVar21;
      if (9 < uVar21) {
        uVar16 = (uVar21 & 0xffff) / 100;
        *(undefined2 *)(local_14c + iVar20 + 2) = (&DAT_10145841)[uVar21 + uVar16 * -100 & 0xffff];
        iVar20 = iVar20 + -2;
      }
      if ((uVar17 == 0) || (uVar16 != 0)) {
        puVar1 = (undefined8 *)(local_14c + 3);
        ppppuVar13 = (uint ****)(0xb - iVar20);
        local_14c[iVar20 + 3] = *(undefined1 *)((int)&DAT_10145841 + uVar16 * 2 + 1);
LAB_1007893b:
        local_164 = (void *)((int)puVar1 + iVar20);
        ppppuVar36 = FUN_10107380(0,(SIZE_T)ppppuVar13);
        if (ppppuVar36 == (uint ****)0x0) {
          FUN_101366bc(1);
                    /* WARNING: Does not return */
          pcVar28 = (code *)invalidInstructionException();
          (*pcVar28)();
        }
        memcpy(ppppuVar36,local_164,(size_t)ppppuVar13);
      }
      else {
        ppppuVar36 = (uint ****)0x1;
        ppppuVar13 = (uint ****)-(iVar20 + -10);
        if (iVar20 != 10) {
          puVar1 = &local_148;
          goto LAB_1007893b;
        }
      }
      piVar41 = piVar41 + 3;
      local_e4 = (int *****)ppppuVar13;
      local_e0 = ppppuVar36;
      local_dc = (int *****)ppppuVar13;
      iVar20 = FUN_100033c0((int *)&local_e4);
      local_148 = CONCAT44(local_148._4_4_,iVar20);
      (*(code *)0x52f168)();
      (*(code *)0x407ea8)();
    } while (piVar41 != piVar14 + uVar35 * 3);
  }
  if (uVar31 != 0) {
    pvVar15 = GetProcessHeap();
    HeapFree(pvVar15,0,piVar14);
  }
  if (local_120 != 0) {
    iVar20 = 0;
    do {
      (*(code *)0x52f168)();
      iVar20 = iVar20 + 1;
      (*(code *)0x52f168)();
    } while (local_120 != iVar20);
  }
  if ((local_88._4_4_ != 0) &&
     (uVar31 = local_88._4_4_ * 4 + 0x13U & 0xfffffff0, local_88._4_4_ + uVar31 != -0x11)) {
    pvVar6 = *(LPVOID *)(((int)local_88 - uVar31) + -4);
    pvVar15 = GetProcessHeap();
    HeapFree(pvVar15,0,pvVar6);
  }
  return true;
joined_r0x10078373:
  while (ppppuVar36 != (uint ****)0x0) {
    ppppuVar13 = (uint ****)ppppuVar36[3];
    if (ppppuVar13 != (uint ****)0x0) {
      ppppuVar13[4] = (uint ***)0x0;
    }
    if (*ppppuVar36 != (uint ***)0x0) {
      pppuVar26 = ppppuVar36[1];
      pvVar15 = (HANDLE)(*pcVar28)();
      pcVar40 = HeapFree_exref;
      HeapFree(pvVar15,0,pppuVar26);
    }
    uVar18 = (*pcVar28)();
    (*pcVar40)(uVar18,0,ppppuVar36);
    ppppuVar36 = ppppuVar13;
  }
  goto LAB_10078379;
LAB_1007804e:
  bVar42 = (*(undefined1 (*) [16])local_148)[(int)auVar29];
  if (-1 < (char)bVar42) {
    auVar43 = *(undefined1 (*) [16])local_148;
    auVar29 = (undefined1  [4])0x0;
    for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar43[0xf] >> 7) << 0xf); (uVar31 & 1) == 0;
        uVar31 = uVar31 >> 1 | 0x80000000) {
      auVar29 = (undefined1  [4])((int)auVar29 + 1);
    }
    bVar42 = (*(undefined1 (*) [16])local_148)[(int)auVar29];
  }
  bVar11 = bVar11 >> 1;
  (*(undefined1 (*) [16])local_148)[(int)auVar29] = bVar11;
  ((undefined1 (*) [16])local_148)[1][(uint)((int)auVar29 + -0x10) & (uint)local_148._4_4_] = bVar11
  ;
  local_140 = CONCAT44(local_140._4_4_ + 1,(int)(uint ***)local_140 - (uint)(bVar42 & 1));
  *(uint ****)((int)(undefined1 (*) [16])local_148 + (int)auVar29 * -4 + -4) = pppuVar26;
LAB_10078090:
  if (ppppuVar13 == local_10c) goto LAB_10078340;
  goto LAB_1007809a;
joined_r0x10078653:
  while (lpMem != (int ***)0x0) {
    pppiVar5 = (int ***)lpMem[3];
    if (pppiVar5 != (int ***)0x0) {
      pppiVar5[4] = (int **)0x0;
    }
    if (*lpMem != (int **)0x0) {
      ppiVar3 = lpMem[1];
      pvVar15 = GetProcessHeap();
      HeapFree(pvVar15,0,ppiVar3);
    }
    pvVar15 = GetProcessHeap();
    HeapFree(pvVar15,0,lpMem);
    lpMem = pppiVar5;
  }
  goto LAB_1007869d;
}
