// rea decompile_all
// name: FUN_10066990
// address: 0x10066990
// body: available
// range: 0x10066990-0x10066b22 inclusive
// range: 0x10066b30-0x100677c1 inclusive
// range: 0x100677d0-0x100678d2 inclusive
// range: 0x100678e0-0x1006b87c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_10066990(char *param_1,ulonglong ******param_2,int param_3)

{
  byte bVar1;
  ulonglong *****_Src;
  LPVOID pvVar2;
  ulonglong *********pppppppppuVar3;
  ulonglong *********_Src_00;
  ulonglong *********pppppppppuVar4;
  undefined8 *puVar5;
  undefined5 uVar6;
  undefined1 *puVar7;
  SIZE_T SVar8;
  byte bVar9;
  char cVar10;
  short sVar11;
  int iVar12;
  byte *pbVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint uVar16;
  int iVar17;
  undefined4 uVar18;
  int *piVar19;
  ulonglong ***********pppppppppppuVar20;
  HANDLE pvVar21;
  uint *puVar22;
  ulonglong ***********pppppppppppuVar23;
  ulonglong **********ppppppppppuVar24;
  ulonglong ***********pppppppppppuVar25;
  size_t sVar26;
  byte bVar27;
  uint uVar28;
  int iVar29;
  ulonglong ***********pppppppppppuVar30;
  int iVar31;
  ulonglong **********ppppppppppuVar32;
  ulonglong **********ppppppppppuVar33;
  char extraout_DL;
  char extraout_DL_00;
  char extraout_DL_01;
  char extraout_DL_02;
  char extraout_DL_03;
  undefined2 uVar34;
  uint extraout_EDX;
  SIZE_T extraout_EDX_00;
  ulonglong ***********pppppppppppuVar35;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  ulonglong ***********pppppppppppuVar36;
  SIZE_T extraout_EDX_03;
  SIZE_T SVar37;
  uint extraout_EDX_04;
  SIZE_T extraout_EDX_05;
  ulonglong ***********pppppppppppuVar38;
  ulonglong ***********pppppppppppuVar39;
  code *pcVar40;
  ulonglong ***********pppppppppppuVar41;
  int iVar42;
  ulonglong **********ppppppppppuVar43;
  int iVar44;
  bool bVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  ulonglong uVar52;
  longlong lVar53;
  ulonglong ***********pppppppppppuStack_210;
  ulonglong ***********pppppppppppuStack_208;
  ulonglong ***********pppppppppppuStack_200;
  ulonglong ***********pppppppppppuStack_1fc;
  ulonglong ***********pppppppppppuStack_1f8;
  ulonglong ***********pppppppppppuStack_1f0;
  ulonglong ***********pppppppppppuStack_1d8;
  ulonglong ***********pppppppppppuStack_1d4;
  SIZE_T SStack_1d0;
  undefined4 uStack_1c0;
  ulonglong ***********pppppppppppuStack_1bc;
  ulonglong ***********pppppppppppuStack_1b8;
  ulonglong ***********pppppppppppuStack_1b4;
  undefined4 uStack_1b0;
  ulonglong ***********pppppppppppuStack_1ac;
  ulonglong ***********pppppppppppuStack_1a8;
  ulonglong ***********pppppppppppuStack_1a4;
  ulonglong ***********pppppppppppuStack_1a0;
  undefined4 uStack_19c;
  uint *puStack_198;
  ulonglong ******ppppppuStack_194;
  ulonglong ***********pppppppppppuStack_18c;
  ulonglong ***********pppppppppppuStack_188;
  ulonglong ***********pppppppppppuStack_184;
  ulonglong ***********pppppppppppuStack_180;
  ulonglong ***********pppppppppppuStack_17c;
  ulonglong ***********pppppppppppuStack_178;
  char cStack_174;
  char cStack_173;
  undefined2 uStack_172;
  ulonglong ***********pppppppppppuStack_170;
  ulonglong ***********pppppppppppuStack_16c;
  ulonglong ***********pppppppppppuStack_168;
  ulonglong ***********pppppppppppuStack_164;
  ulonglong ***********pppppppppppuStack_160;
  ulonglong ***********pppppppppppuStack_15c;
  ulonglong ***********pppppppppppuStack_158;
  undefined4 uStack_154;
  ulonglong ***********pppppppppppuStack_150;
  int *piStack_14c;
  ulonglong ***********pppppppppppuStack_148;
  undefined2 uStack_144;
  char cStack_142;
  undefined1 uStack_141;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  ulonglong ***********pppppppppppuStack_124;
  ulonglong ***********pppppppppppuStack_120;
  uint uStack_11c;
  ulonglong ***********pppppppppppuStack_114;
  uint uStack_110;
  undefined1 *puStack_10c;
  uint uStack_108;
  uint uStack_104;
  undefined1 *puStack_100;
  uint uStack_fc;
  undefined8 uStack_f8;
  ulonglong ***********pppppppppppuStack_f0;
  undefined8 uStack_e8;
  ulonglong ***********pppppppppppuStack_e0;
  ulonglong **********ppppppppppuStack_d8;
  undefined1 uStack_d1;
  undefined8 uStack_d0;
  ulonglong ***********pppppppppppuStack_c8;
  ulonglong **********ppppppppppuStack_c4;
  ulonglong ***********pppppppppppuStack_c0;
  ulonglong ***********pppppppppppuStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulonglong ***********pppppppppppuStack_98;
  ulonglong ***********pppppppppppuStack_94;
  ulonglong ***********pppppppppppuStack_90;
  ulonglong **********ppppppppppuStack_8c;
  ulonglong **********ppppppppppuStack_88;
  undefined8 uStack_84;
  ulonglong ***********pppppppppppuStack_7c;
  ulonglong ***********pppppppppppuStack_78;
  undefined4 uStack_74;
  ulonglong ***********pppppppppppuStack_70;
  ulonglong ***********pppppppppppuStack_6c;
  undefined8 uStack_68;
  ulonglong ***********pppppppppppuStack_60;
  ulonglong ***********pppppppppppuStack_5c;
  ulonglong ***********pppppppppppuStack_58;
  undefined4 uStack_54;
  ulonglong ***********pppppppppppuStack_50;
  ulonglong ***********pppppppppppuStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulonglong ***********pppppppppppuStack_38;
  undefined8 uStack_30;
  ulonglong ***********pppppppppppuStack_28;
  undefined8 uStack_20;
  uint uStack_18;

  iVar12 = (*(code *)0x6577b8)();
  FUN_10111020((uint *)param_2,&DAT_101420e6,8);
  pbVar13 = (byte *)FUN_10110f10((byte *)param_2[1],(uint)param_2[2]);
  if ((pbVar13 == (byte *)0x0) ||
     (pbVar13 = (byte *)FUN_10110b00(pbVar13,extraout_EDX), pbVar13 == (byte *)0x0)) {
    uStack_d0 = 0x100000000;
    pppppppppppuStack_c8 = (ulonglong ***********)0x0;
  }
  else {
    FUN_100935a0((undefined8 *)&uStack_1c0,pbVar13,extraout_EDX_00);
    uStack_d0 = CONCAT44(pppppppppppuStack_1bc,
                         CONCAT13(uStack_1c0._3_1_,
                                  CONCAT12(uStack_1c0._2_1_,
                                           CONCAT11(uStack_1c0._1_1_,(char)uStack_1c0))));
    pppppppppppuStack_c8 = pppppppppppuStack_1b8;
  }
  _Src = param_2[1];
  pppppppppppuVar23 = (ulonglong ***********)param_2[2];
  FUN_1006b940((undefined1 *)&uStack_1c0,_Src,(SIZE_T)pppppppppppuVar23);
  if ((char)uStack_1c0 != -1) {
    SStack_1d0._0_1_ = uStack_1c0._1_1_;
    pppppppppppuStack_1f0 = pppppppppppuStack_1bc;
    pppppppppppuStack_1d8 = pppppppppppuStack_1b4;
    pppppppppppuStack_1f8 = uStack_1b0;
    pppppppppppuStack_1fc = pppppppppppuStack_1a8;
    pppppppppppuStack_200 = pppppppppppuStack_1a0;
    pppppppppppuVar23 = pppppppppppuStack_1ac;
    pppppppppppuVar39 = pppppppppppuStack_1b8;
    pppppppppppuStack_208 = pppppppppppuStack_1a4;
    uVar34 = CONCAT11(uStack_1c0._3_1_,uStack_1c0._2_1_);
    cVar10 = (char)uStack_1c0;
LAB_10069686:
    *param_1 = cVar10;
    param_1[1] = (char)SStack_1d0;
    *(undefined2 *)(param_1 + 2) = uVar34;
    *(ulonglong ************)(param_1 + 4) = pppppppppppuStack_1f0;
    *(ulonglong ************)(param_1 + 8) = pppppppppppuVar39;
    *(ulonglong ************)(param_1 + 0xc) = pppppppppppuStack_1d8;
    *(ulonglong ************)(param_1 + 0x10) = pppppppppppuStack_1f8;
    *(ulonglong ************)(param_1 + 0x14) = pppppppppppuVar23;
    *(ulonglong ************)(param_1 + 0x18) = pppppppppppuStack_1fc;
    *(ulonglong ************)(param_1 + 0x1c) = pppppppppppuStack_208;
    *(ulonglong ************)(param_1 + 0x20) = pppppppppppuStack_200;
    goto LAB_100696c6;
  }
  pppppppppppuStack_178 = pppppppppppuStack_1bc;
  cStack_174 = (char)pppppppppppuStack_1b8;
  cStack_173 = (char)((uint)pppppppppppuStack_1b8 >> 8);
  uStack_172 = (undefined2)((uint)pppppppppppuStack_1b8 >> 0x10);
  pppppppppppuStack_170 = pppppppppppuStack_1b4;
  pppppppppppuStack_188 = (ulonglong ***********)(param_3 + 0x120);
  pppppppppppuStack_90 = (ulonglong ***********)(param_3 + 0x90);
  pppppppppppuStack_16c = uStack_1b0;
  pppppppppppuStack_168 = pppppppppppuStack_1ac;
  pppppppppppuStack_164 = pppppppppppuStack_1a8;
  pppppppppppuStack_1d4 = (ulonglong ***********)(iVar12 + 4);
  pppppppppppuStack_148 = (ulonglong ***********)(iVar12 + 300);
  pppppppppppuStack_180 = (ulonglong ***********)(iVar12 + 0x28);
  pppppppppppuStack_184 = pppppppppppuVar23;
LAB_10066b33:
  FUN_10090ef0(&uStack_b8,(int *)&pppppppppppuStack_178);
  pppppppppppuVar23 = pppppppppppuStack_178;
  iVar17 = (int)uStack_b8;
  if ((int)uStack_b8 != -2) {
    pppppppppppuVar23 = uStack_b8._4_4_;
    pppppppppppuVar39 = (ulonglong ***********)uStack_b0;
    if ((int)uStack_b8 == -1) {
      pppppppppppuStack_18c = (ulonglong ***********)uStack_b0;
      cVar10 = '\0';
      SStack_1d0._0_1_ = (char)uStack_b8;
      pppppppppppuStack_1f0 = uStack_b8._4_4_;
      goto LAB_10069638;
    }
    if ((ulonglong ***********)uStack_b0 == (ulonglong ***********)0x0) goto LAB_10068b87;
    pppppppppppuStack_1bc = uStack_b8._4_4_;
    pppppppppppuStack_1b8 = (ulonglong ***********)uStack_b0;
    pppppppppppuStack_1b4 = (ulonglong ***********)0x0;
    uStack_1b0 = (ulonglong ***********)uStack_b0;
    uStack_1c0._0_1_ = '=';
    uStack_1c0._1_1_ = '\0';
    uStack_1c0._2_1_ = 0;
    uStack_1c0._3_1_ = '\0';
    pppppppppppuStack_1a8 = (ulonglong ***********)CONCAT31(pppppppppppuStack_1a8._1_3_,1);
    pppppppppppuStack_1ac = (ulonglong ***********)0x3d;
    FUN_10090ba0((undefined4 *)&uStack_140,(int)&uStack_1c0);
    pppppppppppuStack_1f0 = pppppppppppuStack_184;
    if ((ulonglong ***********)uStack_140 != (ulonglong ***********)0x1) {
      if (pppppppppppuStack_184 == (ulonglong ***********)0x0) {
        pppppppppppuStack_17c = (ulonglong ***********)0x1;
        SStack_1d0._0_1_ = extraout_DL;
      }
      else {
        pppppppppppuVar39 = FUN_10107380(0,(SIZE_T)pppppppppppuStack_184);
        if (pppppppppppuVar39 == (ulonglong ***********)0x0) goto LAB_1006b809;
        pppppppppppuStack_17c = pppppppppppuVar39;
        memcpy(pppppppppppuVar39,_Src,(size_t)pppppppppppuStack_1f0);
        SStack_1d0._0_1_ = extraout_DL_00;
      }
      cVar10 = '\x06';
      pppppppppppuStack_1f8 = (ulonglong ***********)0x0;
      pppppppppppuStack_1d8 = pppppppppppuStack_1f0;
      goto LAB_1006960c;
    }
    pppppppppppuVar25 = (ulonglong ***********)uStack_138;
    pppppppppppuStack_208 = uStack_140._4_4_;
    pppppppppppuStack_18c = pppppppppppuVar39;
    pppppppppppuVar35 =
         (ulonglong ***********)((int)pppppppppppuVar39 - (int)(ulonglong ***********)uStack_138);
    puVar22 = (uint *)((int)pppppppppppuVar23 + (int)(ulonglong ***********)uStack_138);
    pppppppppppuStack_1fc = (ulonglong ***********)uStack_138;
    switch(uStack_140._4_4_) {
    case (ulonglong ***********)0x0:
      FUN_10110c20(&uStack_1c0,param_2[1],(SIZE_T)param_2[2]);
      pppppppppppuStack_208 = (ulonglong ***********)0x0;
      pppppppppppuStack_1fc = (ulonglong ***********)0x1;
      SStack_1d0._0_1_ = extraout_DL_02;
      goto LAB_100695d9;
    case (ulonglong ***********)0x5:
      if (*(char *)(pppppppppppuVar23 + 1) != 'h' ||
          *pppppppppppuVar23 != (ulonglong **********)0x74646977) break;
      if (pppppppppppuVar35 == (ulonglong ***********)0x1) {
        cVar10 = (char)*puVar22;
        pppppppppppuVar39 = pppppppppppuVar23;
        if ((cVar10 == '+') || (cVar10 == '-')) goto LAB_10068fab;
      }
      else {
        pppppppppppuVar39 = pppppppppppuVar23;
        if (pppppppppppuVar35 == (ulonglong ***********)0x0) goto LAB_100690a5;
        cVar10 = (char)*puVar22;
      }
      uVar14 = 0;
      pppppppppppuVar39 = (ulonglong ***********)((int)pppppppppppuVar35 - (uint)(cVar10 == '+'));
      pbVar13 = (byte *)((int)puVar22 + (uint)(cVar10 == '+'));
      pppppppppppuVar35 = pppppppppppuVar39;
      if (&DAT_00000008 < pppppppppppuVar39) {
        while (bVar45 = pppppppppppuVar39 != (ulonglong ***********)0x0,
              pppppppppppuVar39 = (ulonglong ***********)((int)pppppppppppuVar39 + -1), bVar45) {
          uVar28 = (uint)((ulonglong)uVar14 * 10);
          bVar27 = *pbVar13;
          if ((int)((ulonglong)uVar14 * 10 >> 0x20) != 0) goto LAB_10069522;
          uVar16 = bVar27 - 0x30;
          if (9 < uVar16) goto LAB_10068ba4;
          pbVar13 = pbVar13 + 1;
          uVar14 = uVar16 + uVar28;
          if (CARRY4(uVar16,uVar28)) goto LAB_100694d0;
        }
      }
      else {
        for (; pppppppppppuVar35 != (ulonglong ***********)0x0;
            pppppppppppuVar35 = (ulonglong ***********)((int)pppppppppppuVar35 + -1)) {
          bVar27 = *pbVar13;
          pppppppppppuVar39 = pppppppppppuVar23;
          if (9 < bVar27 - 0x30) goto LAB_10068ba4;
          pbVar13 = pbVar13 + 1;
          uVar14 = (bVar27 - 0x30) + uVar14 * 10;
        }
      }
      *(uint *)(iVar12 + 0xc) = uVar14;
      goto LAB_10068b87;
    case (ulonglong ***********)0x6:
      if (*(short *)(pppppppppppuVar23 + 1) != 0x7468 ||
          *pppppppppppuVar23 != (ulonglong **********)0x67696568) {
        pppppppppppuStack_1f0 = (ulonglong ***********)0x70616e73;
        if (*(short *)(pppppppppppuVar23 + 1) == 0x785f &&
            *pppppppppppuVar23 == (ulonglong **********)0x70616e73) {
          pppppppppppuVar39 = pppppppppppuStack_1f0;
          if (pppppppppppuVar35 == (ulonglong ***********)0x1) {
            cVar10 = (char)*puVar22;
            if ((cVar10 == '+') || (cVar10 == '-')) goto LAB_10068fab;
          }
          else {
            if (pppppppppppuVar35 == (ulonglong ***********)0x0) goto LAB_100690a5;
            cVar10 = (char)*puVar22;
          }
          pppppppppppuVar39 =
               (ulonglong ***********)((int)pppppppppppuVar35 - (uint)(cVar10 == '+'));
          pbVar13 = (byte *)((int)puVar22 + (uint)(cVar10 == '+'));
          if (&DAT_00000008 < pppppppppppuVar39) {
            uVar14 = 0;
            while (bVar45 = pppppppppppuVar39 != (ulonglong ***********)0x0,
                  pppppppppppuVar39 = (ulonglong ***********)((int)pppppppppppuVar39 + -1), bVar45)
            {
              uVar28 = (uint)((ulonglong)uVar14 * 10);
              bVar27 = *pbVar13;
              if ((int)((ulonglong)uVar14 * 10 >> 0x20) != 0) goto LAB_10069522;
              uVar16 = bVar27 - 0x30;
              if (9 < uVar16) goto LAB_10068ba4;
              pbVar13 = pbVar13 + 1;
              uVar14 = uVar16 + uVar28;
              SStack_1d0._0_1_ = '\x02';
              if (CARRY4(uVar16,uVar28)) goto LAB_10068ba6;
            }
          }
          else {
            uVar14 = 0;
            for (pppppppppppuVar35 = pppppppppppuVar39;
                pppppppppppuVar35 != (ulonglong ***********)0x0;
                pppppppppppuVar35 = (ulonglong ***********)((int)pppppppppppuVar35 + -1)) {
              bVar27 = *pbVar13;
              pppppppppppuVar39 = pppppppppppuStack_1f0;
              if (9 < bVar27 - 0x30) goto LAB_10068ba4;
              pbVar13 = pbVar13 + 1;
              uVar14 = (bVar27 - 0x30) + uVar14 * 10;
            }
          }
          *(uint *)(iVar12 + 0x18) = uVar14;
          goto LAB_10068b87;
        }
        if (*(short *)(pppppppppppuVar23 + 1) != 0x795f ||
            *pppppppppppuVar23 != (ulonglong **********)0x70616e73) break;
        FUN_100528c0((undefined1 *)&uStack_1c0,(char *)puVar22,(int)pppppppppppuVar35);
        SStack_1d0._0_1_ = uStack_1c0._1_1_;
        if ((char)uStack_1c0 == '\0') {
          *(ulonglong ************)(iVar12 + 0x14) = pppppppppppuStack_1bc;
          goto LAB_10068b87;
        }
        goto LAB_10069154;
      }
      if (pppppppppppuVar35 == (ulonglong ***********)0x1) {
        cVar10 = (char)*puVar22;
        pppppppppppuVar39 = (ulonglong ***********)0x0;
        if ((cVar10 != '+') && (cVar10 != '-')) goto LAB_10067787;
        goto LAB_10068fab;
      }
      pppppppppppuVar39 = (ulonglong ***********)0x0;
      if (pppppppppppuVar35 != (ulonglong ***********)0x0) {
        cVar10 = (char)*puVar22;
LAB_10067787:
        uVar14 = 0;
        pppppppppppuVar39 = (ulonglong ***********)((int)pppppppppppuVar35 - (uint)(cVar10 == '+'));
        pbVar13 = (byte *)((int)puVar22 + (uint)(cVar10 == '+'));
        pppppppppppuVar35 = pppppppppppuVar39;
        if (&DAT_00000008 < pppppppppppuVar39) {
          while (bVar45 = pppppppppppuVar39 != (ulonglong ***********)0x0,
                pppppppppppuVar39 = (ulonglong ***********)((int)pppppppppppuVar39 + -1), bVar45) {
            uVar28 = (uint)((ulonglong)uVar14 * 10);
            bVar27 = *pbVar13;
            if ((int)((ulonglong)uVar14 * 10 >> 0x20) != 0) goto LAB_10069522;
            uVar16 = bVar27 - 0x30;
            if (9 < uVar16) goto LAB_10068ba4;
            pbVar13 = pbVar13 + 1;
            uVar14 = uVar16 + uVar28;
            if (CARRY4(uVar16,uVar28)) goto LAB_100694d0;
          }
        }
        else {
          for (; pppppppppppuVar35 != (ulonglong ***********)0x0;
              pppppppppppuVar35 = (ulonglong ***********)((int)pppppppppppuVar35 + -1)) {
            bVar27 = *pbVar13;
            pppppppppppuVar39 = (ulonglong ***********)0x0;
            if (9 < bVar27 - 0x30) goto LAB_10068ba4;
            pbVar13 = pbVar13 + 1;
            uVar14 = (bVar27 - 0x30) + uVar14 * 10;
          }
        }
        *(uint *)(iVar12 + 0x10) = uVar14;
        goto LAB_10068b87;
      }
      goto LAB_100690a5;
    case (ulonglong ***********)0x7:
      if (*(int *)((int)pppppppppppuVar23 + 3) == 0x6e6f6974 &&
          *pppppppppppuVar23 == (ulonglong **********)0x74706163) {
        ppppppppppuVar43 =
             (ulonglong **********)FUN_10003510((byte *)puVar22,(int)pppppppppppuVar35);
        (*(code *)0x407ea8)();
        *pppppppppppuStack_1d4 = ppppppppppuVar43;
        goto LAB_10068b87;
      }
      break;
    case (ulonglong ***********)0x8:
      if (pppppppppppuVar23[1] == (ulonglong **********)0x726f6c6f &&
          *pppppppppppuVar23 == (ulonglong **********)0x635f6762) {
        if (pppppppppppuVar35 == (ulonglong ***********)0x1) {
          cVar10 = (char)*puVar22;
          if ((cVar10 == '+') || (cVar10 == '-')) goto LAB_10068fab;
        }
        else {
          if (pppppppppppuVar35 == (ulonglong ***********)0x0) goto LAB_100690a5;
          cVar10 = (char)*puVar22;
        }
        if (cVar10 == '-') {
          if (&DAT_00000008 < pppppppppppuVar35) {
            iVar42 = 0;
            iVar31 = (int)(ulonglong ***********)uStack_138 + (1 - (int)pppppppppppuVar39);
            do {
              puVar22 = (uint *)((int)puVar22 + 1);
              iVar29 = (int)((longlong)iVar42 * 10);
              if ((longlong)iVar29 != (longlong)iVar42 * 10) {
                cVar10 = '\x03';
                goto LAB_1006b2b4;
              }
              uVar14 = *(byte *)puVar22 - 0x30;
              if (9 < uVar14) goto LAB_10068ba4;
              iVar42 = iVar29 - uVar14;
              if (SBORROW4(iVar29,uVar14)) goto LAB_1006b2ab;
              iVar31 = iVar31 + 1;
            } while (iVar31 != 0);
          }
          else if (pppppppppppuVar35 == (ulonglong ***********)0x1) {
            iVar42 = 0;
          }
          else {
            iVar42 = 0;
            pppppppppppuVar35 = (ulonglong ***********)((int)(ulonglong ***********)uStack_138 + 1);
            do {
              uVar14 = *(byte *)((int)pppppppppppuVar23 + (int)pppppppppppuVar35) - 0x30;
              if (9 < uVar14) goto LAB_10068ba4;
              pppppppppppuVar35 = (ulonglong ***********)((int)pppppppppppuVar35 + 1);
              iVar42 = iVar42 * 10 - uVar14;
            } while (pppppppppppuVar39 != pppppppppppuVar35);
          }
        }
        else {
          if (cVar10 == '+') {
            puVar22 = (uint *)((int)puVar22 + 1);
            pppppppppppuVar35 = (ulonglong ***********)((int)pppppppppppuVar35 + -1);
          }
          iVar42 = 0;
          if ((ulonglong ***********)0x7 < pppppppppppuVar35) {
LAB_10067976:
            iVar31 = (int)((longlong)iVar42 * 10);
            if ((longlong)iVar31 != (longlong)iVar42 * 10) {
              cVar10 = '\x02';
LAB_1006b2b4:
              SStack_1d0._0_1_ = '\x01';
              if ((byte)((char)*puVar22 - 0x30U) < 10) {
                SStack_1d0._0_1_ = cVar10;
              }
              goto LAB_10068ba6;
            }
            uVar14 = (byte)*puVar22 - 0x30;
            if (uVar14 < 10) {
              iVar42 = iVar31 + uVar14;
              if (!SCARRY4(iVar31,uVar14)) goto code_r0x10067996;
              goto LAB_100694d0;
            }
            goto LAB_10068ba4;
          }
          for (; pppppppppppuVar35 != (ulonglong ***********)0x0;
              pppppppppppuVar35 = (ulonglong ***********)((int)pppppppppppuVar35 + -1)) {
            uVar14 = (byte)*puVar22 - 0x30;
            if (9 < uVar14) goto LAB_10068ba4;
            puVar22 = (uint *)((int)puVar22 + 1);
            iVar42 = uVar14 + iVar42 * 10;
          }
        }
LAB_10068a11:
        *(int *)(iVar12 + 0x20) = iVar42;
        goto LAB_10068b87;
      }
      break;
    case (ulonglong ***********)0x9:
      iVar42 = memcmp(pppppppppppuVar23,"isometric",9);
      if (iVar42 != 0) {
        iVar42 = memcmp(pppppppppppuVar23,"roomspeed",9);
        if (iVar42 == 0) {
          if (pppppppppppuVar35 == (ulonglong ***********)0x1) {
            cVar10 = (char)*puVar22;
            pppppppppppuVar39 = pppppppppppuVar23;
            if ((cVar10 == '+') || (cVar10 == '-')) goto LAB_10068fab;
          }
          else {
            pppppppppppuVar39 = pppppppppppuVar23;
            if (pppppppppppuVar35 == (ulonglong ***********)0x0) goto LAB_100690a5;
            cVar10 = (char)*puVar22;
          }
          pppppppppppuVar39 =
               (ulonglong ***********)((int)pppppppppppuVar35 - (uint)(cVar10 == '+'));
          pbVar13 = (byte *)((int)puVar22 + (uint)(cVar10 == '+'));
          if (&DAT_00000008 < pppppppppppuVar39) {
            uVar14 = 0;
            while (bVar45 = pppppppppppuVar39 != (ulonglong ***********)0x0,
                  pppppppppppuVar39 = (ulonglong ***********)((int)pppppppppppuVar39 + -1), bVar45)
            {
              uVar28 = (uint)((ulonglong)uVar14 * 10);
              bVar27 = *pbVar13;
              if ((int)((ulonglong)uVar14 * 10 >> 0x20) != 0) goto LAB_10069522;
              uVar16 = bVar27 - 0x30;
              if (9 < uVar16) goto LAB_10068ba4;
              pbVar13 = pbVar13 + 1;
              uVar14 = uVar16 + uVar28;
              SStack_1d0._0_1_ = '\x02';
              if (CARRY4(uVar16,uVar28)) goto LAB_10068ba6;
            }
          }
          else {
            uVar14 = 0;
            for (pppppppppppuVar35 = pppppppppppuVar39;
                pppppppppppuVar35 != (ulonglong ***********)0x0;
                pppppppppppuVar35 = (ulonglong ***********)((int)pppppppppppuVar35 + -1)) {
              bVar27 = *pbVar13;
              pppppppppppuVar39 = pppppppppppuVar23;
              if (9 < bVar27 - 0x30) goto LAB_10068ba4;
              pbVar13 = pbVar13 + 1;
              uVar14 = (bVar27 - 0x30) + uVar14 * 10;
            }
          }
          *(uint *)(iVar12 + 8) = uVar14;
          goto LAB_10068b87;
        }
        break;
      }
      if (pppppppppppuVar35 == (ulonglong ***********)0x1) {
        cVar10 = (char)*puVar22;
        pppppppppppuVar39 = pppppppppppuVar23;
        if ((cVar10 == '+') || (cVar10 == '-')) goto LAB_10068fab;
      }
      else {
        pppppppppppuVar39 = pppppppppppuVar23;
        if (pppppppppppuVar35 == (ulonglong ***********)0x0) goto LAB_100690a5;
        cVar10 = (char)*puVar22;
      }
      uVar14 = (int)pppppppppppuVar35 - (uint)(cVar10 == '+');
      pbVar13 = (byte *)((int)puVar22 + (uint)(cVar10 == '+'));
      if (2 < uVar14) {
        uVar28 = 0;
        while (bVar45 = uVar14 != 0, uVar14 = uVar14 - 1, bVar45) {
          sVar11 = (ushort)(byte)uVar28 * 10;
          bVar27 = *pbVar13;
          pppppppppppuVar39 = pppppppppppuVar23;
          if ((char)((ushort)sVar11 >> 8) != '\0') goto LAB_100694a3;
          if (9 < bVar27 - 0x30) goto LAB_10068ba4;
          pbVar13 = pbVar13 + 1;
          bVar9 = (byte)sVar11;
          bVar27 = (byte)(bVar27 - 0x30);
          uVar28 = (uint)(byte)(bVar9 + bVar27);
          if (CARRY1(bVar9,bVar27)) goto LAB_100694d0;
        }
LAB_100685dd:
        *(bool *)(iVar12 + 0x1c) = (char)uVar28 != '\0';
        goto LAB_10068b87;
      }
      if (uVar14 == 0) {
        uVar28 = 0;
        goto LAB_100685dd;
      }
      uVar28 = *pbVar13 - 0x30;
      pppppppppppuVar39 = pppppppppppuVar23;
      SStack_1d0._0_1_ = '\x01';
      if (uVar28 < 10) {
        if (uVar14 == 1) goto LAB_100685dd;
        if (pbVar13[1] - 0x30 < 10) {
          uVar28 = (uint)(byte)((char)(pbVar13[1] - 0x30) + (char)uVar28 * '\n');
          goto LAB_100685dd;
        }
        goto LAB_10069497;
      }
      goto LAB_10068ba6;
    case (ulonglong ***********)0xa:
      iVar42 = memcmp(pppppppppppuVar23,"clear_view",10);
      if (iVar42 == 0) {
        if (pppppppppppuVar35 == (ulonglong ***********)0x1) {
          cVar10 = (char)*puVar22;
          pppppppppppuVar39 = pppppppppppuVar23;
          if ((cVar10 == '+') || (cVar10 == '-')) goto LAB_10068fab;
        }
        else {
          pppppppppppuVar39 = pppppppppppuVar23;
          if (pppppppppppuVar35 == (ulonglong ***********)0x0) goto LAB_100690a5;
          cVar10 = (char)*puVar22;
        }
        uVar14 = (int)pppppppppppuVar35 - (uint)(cVar10 == '+');
        pbVar13 = (byte *)((int)puVar22 + (uint)(cVar10 == '+'));
        if (uVar14 < 3) {
          if (uVar14 == 0) {
            uVar28 = 0;
          }
          else {
            uVar28 = *pbVar13 - 0x30;
            pppppppppppuVar39 = pppppppppppuVar23;
            SStack_1d0._0_1_ = '\x01';
            if (9 < uVar28) goto LAB_10068ba6;
            if (uVar14 != 1) {
              if (9 < pbVar13[1] - 0x30) goto LAB_10069497;
              uVar28 = (uint)(byte)((char)(pbVar13[1] - 0x30) + (char)uVar28 * '\n');
            }
          }
        }
        else {
          uVar28 = 0;
          while (bVar45 = uVar14 != 0, uVar14 = uVar14 - 1, bVar45) {
            sVar11 = (ushort)(byte)uVar28 * 10;
            bVar27 = *pbVar13;
            pppppppppppuVar39 = pppppppppppuVar23;
            if ((char)((ushort)sVar11 >> 8) != '\0') goto LAB_100694a3;
            if (9 < bVar27 - 0x30) goto LAB_10068ba4;
            pbVar13 = pbVar13 + 1;
            bVar9 = (byte)sVar11;
            bVar27 = (byte)(bVar27 - 0x30);
            uVar28 = (uint)(byte)(bVar9 + bVar27);
            if (CARRY1(bVar9,bVar27)) goto LAB_100694d0;
          }
        }
        *(bool *)(iVar12 + 0x129) = (char)uVar28 != '\0';
        goto LAB_10068b87;
      }
      break;
    case (ulonglong ***********)0xc:
      iVar42 = memcmp(pppppppppppuVar23,"clear_screen",0xc);
      if (iVar42 == 0) {
        if (pppppppppppuVar35 == (ulonglong ***********)0x1) {
          cVar10 = (char)*puVar22;
          pppppppppppuVar39 = pppppppppppuVar23;
          if ((cVar10 == '+') || (cVar10 == '-')) goto LAB_10068fab;
        }
        else {
          pppppppppppuVar39 = pppppppppppuVar23;
          if (pppppppppppuVar35 == (ulonglong ***********)0x0) goto LAB_100690a5;
          cVar10 = (char)*puVar22;
        }
        uVar14 = (int)pppppppppppuVar35 - (uint)(cVar10 == '+');
        pbVar13 = (byte *)((int)puVar22 + (uint)(cVar10 == '+'));
        if (uVar14 < 3) {
          if (uVar14 == 0) {
            uVar28 = 0;
          }
          else {
            uVar28 = *pbVar13 - 0x30;
            pppppppppppuVar39 = pppppppppppuVar23;
            SStack_1d0._0_1_ = '\x01';
            if (9 < uVar28) goto LAB_10068ba6;
            if (uVar14 != 1) {
              if (9 < pbVar13[1] - 0x30) goto LAB_10069497;
              uVar28 = (uint)(byte)((char)(pbVar13[1] - 0x30) + (char)uVar28 * '\n');
            }
          }
        }
        else {
          uVar28 = 0;
          while (bVar45 = uVar14 != 0, uVar14 = uVar14 - 1, bVar45) {
            sVar11 = (ushort)(byte)uVar28 * 10;
            bVar27 = *pbVar13;
            pppppppppppuVar39 = pppppppppppuVar23;
            if ((char)((ushort)sVar11 >> 8) != '\0') goto LAB_100694a3;
            if (9 < bVar27 - 0x30) goto LAB_10068ba4;
            pbVar13 = pbVar13 + 1;
            bVar9 = (byte)sVar11;
            bVar27 = (byte)(bVar27 - 0x30);
            uVar28 = (uint)(byte)(bVar9 + bVar27);
            if (CARRY1(bVar9,bVar27)) goto LAB_100694d0;
          }
        }
        *(bool *)(iVar12 + 0x24) = (char)uVar28 != '\0';
        goto LAB_10068b87;
      }
      break;
    case (ulonglong ***********)0xe:
      iVar42 = memcmp(pppppppppppuVar23,"roompersistent",0xe);
      if (iVar42 == 0) {
        if (pppppppppppuVar35 == (ulonglong ***********)0x1) {
          cVar10 = (char)*puVar22;
          pppppppppppuVar39 = pppppppppppuVar23;
          if ((cVar10 == '+') || (cVar10 == '-')) goto LAB_10068fab;
        }
        else {
          pppppppppppuVar39 = pppppppppppuVar23;
          if (pppppppppppuVar35 == (ulonglong ***********)0x0) goto LAB_100690a5;
          cVar10 = (char)*puVar22;
        }
        uVar14 = (int)pppppppppppuVar35 - (uint)(cVar10 == '+');
        pbVar13 = (byte *)((int)puVar22 + (uint)(cVar10 == '+'));
        if (uVar14 < 3) {
          if (uVar14 == 0) {
            uVar28 = 0;
          }
          else {
            uVar28 = *pbVar13 - 0x30;
            pppppppppppuVar39 = pppppppppppuVar23;
            SStack_1d0._0_1_ = '\x01';
            if (9 < uVar28) goto LAB_10068ba6;
            if (uVar14 != 1) {
              if (9 < pbVar13[1] - 0x30) goto LAB_10069497;
              uVar28 = (uint)(byte)((char)(pbVar13[1] - 0x30) + (char)uVar28 * '\n');
            }
          }
        }
        else {
          uVar28 = 0;
          while (bVar45 = uVar14 != 0, uVar14 = uVar14 - 1, bVar45) {
            sVar11 = (ushort)(byte)uVar28 * 10;
            bVar27 = *pbVar13;
            pppppppppppuVar39 = pppppppppppuVar23;
            if ((char)((ushort)sVar11 >> 8) != '\0') goto LAB_100694a3;
            if (9 < bVar27 - 0x30) goto LAB_10068ba4;
            pbVar13 = pbVar13 + 1;
            bVar9 = (byte)sVar11;
            bVar27 = (byte)(bVar27 - 0x30);
            uVar28 = (uint)(byte)(bVar9 + bVar27);
            if (CARRY1(bVar9,bVar27)) goto LAB_100694d0;
          }
        }
        *(bool *)(iVar12 + 0x1d) = (char)uVar28 != '\0';
        goto LAB_10068b87;
      }
    }
    bVar27 = *(byte *)((int)pppppppppppuVar23 + -1 + (int)pppppppppppuStack_208);
    uVar14 = (uint)bVar27;
    if (-1 < (char)bVar27) {
      pppppppppppuVar20 = pppppppppppuStack_200;
      if ((bVar27 & 0x78) != 0x30) goto LAB_1006700f;
joined_r0x10066e54:
      pppppppppppuStack_200 = (ulonglong ***********)(uVar14 - 0x30);
      if ((ulonglong ***********)0x7 < pppppppppppuStack_200) {
        FUN_10136b20(&PTR_s_src_load_rs_10140138);
                    /* WARNING: Does not return */
        pcVar40 = (code *)invalidInstructionException();
        (*pcVar40)();
      }
      pppppppppppuVar39 = (ulonglong ***********)((int)pppppppppppuStack_208 + -1);
      if (pppppppppppuVar39 != (ulonglong ***********)0x0) {
        if ((char)bVar27 < -0x40) {
          FUN_10136b90((int)pppppppppppuVar23,(uint)pppppppppppuStack_208,0,(uint)pppppppppppuVar39,
                       &PTR_s_src_load_rs_10140148);
                    /* WARNING: Does not return */
          pcVar40 = (code *)invalidInstructionException();
          (*pcVar40)();
        }
        pppppppppppuStack_1f0 = pppppppppppuVar39;
        switch(pppppppppppuStack_208) {
        case (ulonglong ***********)0xa:
          iVar42 = memcmp(pppppppppppuVar23,&DAT_10140172,(size_t)pppppppppppuVar39);
          if (iVar42 == 0) {
            if (pppppppppppuVar35 == (ulonglong ***********)0x0) {
              uVar18 = 0xffffffff;
            }
            else {
              puVar15 = (undefined4 *)
                        FUN_100025a0((int *)pppppppppppuStack_90,puVar22,(uint)pppppppppppuVar35);
              uStack_140 = CONCAT44(pppppppppppuVar35,puVar22);
              uStack_138 = CONCAT44(uStack_138._4_4_,&uStack_d0);
              if (puVar15 == (undefined4 *)0x0) {
                FUN_10037870((undefined1 *)&uStack_1c0,(undefined4 *)&uStack_140);
LAB_10068886:
                pppppppppppuStack_114 =
                     (ulonglong ***********)
                     CONCAT22(pppppppppppuStack_114._2_2_,
                              CONCAT11(uStack_1c0._3_1_,uStack_1c0._2_1_));
                pppppppppppuStack_17c = pppppppppppuStack_1b8;
                pppppppppppuStack_1d8 = pppppppppppuStack_1b4;
                pppppppppppuStack_1f8 = uStack_1b0;
                pppppppppppuStack_150 = pppppppppppuStack_1ac;
                pppppppppppuStack_1fc = pppppppppppuStack_1a8;
                pppppppppppuStack_208 = pppppppppppuStack_1a4;
                pppppppppppuStack_200 = pppppppppppuStack_1a0;
                pppppppppppuStack_1f0 = pppppppppppuStack_1bc;
                cVar10 = (char)uStack_1c0;
                SStack_1d0._0_1_ = uStack_1c0._1_1_;
                if ((char)uStack_1c0 != -1) goto LAB_1006960c;
                break;
              }
              uVar18 = *puVar15;
            }
            *(undefined4 *)(iVar12 + 0x2c + (int)pppppppppppuStack_200 * 0x20) = uVar18;
          }
          else {
            iVar42 = memcmp(pppppppppppuVar23,&DAT_1014018f,(size_t)pppppppppppuVar39);
            if (iVar42 == 0) {
              uVar52 = FUN_100540a0((byte *)puVar22,(int)pppppppppppuVar35);
              SStack_1d0._0_1_ = (char)(uVar52 >> 0x20);
              if ((uVar52 & 1) != 0) goto LAB_10069154;
              *(bool *)(iVar12 + 0x38 + (int)pppppppppppuStack_200 * 0x20) =
                   (char)SStack_1d0 != '\0';
            }
            else {
              iVar42 = memcmp(pppppppppppuVar23,&DAT_10140198,9);
              if (iVar42 == 0) {
                uVar52 = FUN_100540a0((byte *)puVar22,(int)pppppppppppuVar35);
                SStack_1d0._0_1_ = (char)(uVar52 >> 0x20);
                if ((uVar52 & 1) != 0) goto LAB_10069154;
                *(bool *)(iVar12 + 0x39 + (int)pppppppppppuStack_200 * 0x20) =
                     (char)SStack_1d0 != '\0';
              }
              else {
                iVar42 = memcmp(pppppppppppuVar23,&DAT_101401a1,9);
                if (iVar42 == 0) {
                  FUN_10053f80((undefined1 *)&uStack_1c0,(byte *)puVar22,(uint)pppppppppppuVar35);
                  SStack_1d0._0_1_ = uStack_1c0._1_1_;
                  if ((char)uStack_1c0 != '\0') goto LAB_10069154;
                  *(ulonglong ************)(iVar12 + 0x3c + (int)pppppppppppuStack_200 * 0x20) =
                       pppppppppppuStack_1bc;
                }
                else {
                  iVar42 = memcmp(pppppppppppuVar23,&DAT_101401aa,9);
                  if (iVar42 != 0) {
                    pppppppppppuStack_208 = (ulonglong ***********)0xa;
                    goto switchD_10066f62_caseD_c;
                  }
                  FUN_10053f80((undefined1 *)&uStack_1c0,(byte *)puVar22,(uint)pppppppppppuVar35);
                  SStack_1d0._0_1_ = uStack_1c0._1_1_;
                  if ((char)uStack_1c0 != '\0') goto LAB_10069154;
                  *(ulonglong ************)(iVar12 + 0x40 + (int)pppppppppppuStack_200 * 0x20) =
                       pppppppppppuStack_1bc;
                }
              }
            }
          }
          break;
        case (ulonglong ***********)0xb:
          iVar42 = memcmp(pppppppppppuVar23,&DAT_10140158,10);
          if (iVar42 == 0) {
            uVar52 = FUN_100540a0((byte *)puVar22,(int)pppppppppppuVar35);
            SStack_1d0._0_1_ = (char)(uVar52 >> 0x20);
            if ((uVar52 & 1) != 0) {
LAB_10069154:
              cVar10 = '\t';
              goto LAB_1006960c;
            }
            *(bool *)(pppppppppppuStack_180 + (int)pppppppppppuStack_200 * 8) =
                 (char)SStack_1d0 != '\0';
          }
          else {
            iVar42 = memcmp(pppppppppppuVar23,&DAT_1014017b,(size_t)pppppppppppuVar39);
            if (iVar42 == 0) {
              FUN_10053f80((undefined1 *)&uStack_1c0,(byte *)puVar22,(uint)pppppppppppuVar35);
              SStack_1d0._0_1_ = uStack_1c0._1_1_;
              if ((char)uStack_1c0 != '\0') goto LAB_10069154;
              *(ulonglong ************)(iVar12 + 0x30 + (int)pppppppppppuStack_200 * 0x20) =
                   pppppppppppuStack_1bc;
            }
            else {
              iVar42 = memcmp(pppppppppppuVar23,&DAT_10140185,10);
              if (iVar42 == 0) {
                FUN_10053f80((undefined1 *)&uStack_1c0,(byte *)puVar22,(uint)pppppppppppuVar35);
                SStack_1d0._0_1_ = uStack_1c0._1_1_;
                if ((char)uStack_1c0 != '\0') goto LAB_10069154;
                *(ulonglong ************)(iVar12 + 0x34 + (int)pppppppppppuStack_200 * 0x20) =
                     pppppppppppuStack_1bc;
              }
              else {
                iVar42 = memcmp(pppppppppppuVar23,&DAT_101401b3,(size_t)pppppppppppuVar39);
                if (iVar42 == 0) {
                  uVar52 = FUN_100540a0((byte *)puVar22,(int)pppppppppppuVar35);
                  SStack_1d0._0_1_ = (char)(uVar52 >> 0x20);
                  if ((uVar52 & 1) != 0) goto LAB_10069154;
                  *(bool *)(iVar12 + 0x44 + (int)pppppppppppuStack_200 * 0x20) =
                       (char)SStack_1d0 != '\0';
                }
                else {
                  iVar42 = memcmp(pppppppppppuVar23,&DAT_101401c9,(size_t)pppppppppppuVar39);
                  if (iVar42 == 0) {
                    FUN_10053f80((undefined1 *)&uStack_1c0,(byte *)puVar22,(uint)pppppppppppuVar35);
                    SStack_1d0._0_1_ = uStack_1c0._1_1_;
                    if ((char)uStack_1c0 != '\0') goto LAB_10069154;
                    *(ulonglong ************)(iVar12 + 0x130 + (int)pppppppppppuStack_200 * 0x38) =
                         pppppppppppuStack_1bc;
                  }
                  else {
                    iVar42 = memcmp(pppppppppppuVar23,&DAT_101401d3,10);
                    pppppppppppuStack_1f0 = (ulonglong ***********)&uStack_1c0;
                    if (iVar42 == 0) {
                      FUN_10053f80((undefined1 *)&uStack_1c0,(byte *)puVar22,(uint)pppppppppppuVar35
                                  );
                      SStack_1d0._0_1_ = uStack_1c0._1_1_;
                      if ((char)uStack_1c0 != '\0') goto LAB_10069154;
                      *(ulonglong ************)(iVar12 + 0x134 + (int)pppppppppppuStack_200 * 0x38)
                           = pppppppppppuStack_1bc;
                    }
                    else {
                      iVar42 = memcmp(pppppppppppuVar23,&DAT_101401dd,10);
                      if (iVar42 == 0) {
                        FUN_100528c0((undefined1 *)&uStack_1c0,(char *)puVar22,
                                     (int)pppppppppppuVar35);
                        SStack_1d0._0_1_ = uStack_1c0._1_1_;
                        if ((char)uStack_1c0 != '\0') goto LAB_10069154;
                        *(ulonglong ************)
                         (iVar12 + 0x138 + (int)pppppppppppuStack_200 * 0x38) =
                             pppppppppppuStack_1bc;
                      }
                      else {
                        iVar42 = memcmp(pppppppppppuVar23,&DAT_101401e7,10);
                        if (iVar42 == 0) {
                          FUN_100528c0((undefined1 *)&uStack_1c0,(char *)puVar22,
                                       (int)pppppppppppuVar35);
                          SStack_1d0._0_1_ = uStack_1c0._1_1_;
                          if ((char)uStack_1c0 != '\0') goto LAB_10069154;
                          *(ulonglong ************)
                           (iVar12 + 0x13c + (int)pppppppppppuStack_200 * 0x38) =
                               pppppppppppuStack_1bc;
                        }
                        else {
                          iVar42 = memcmp(pppppppppppuVar23,&DAT_101401f1,10);
                          if (iVar42 == 0) {
                            FUN_10053f80((undefined1 *)&uStack_1c0,(byte *)puVar22,
                                         (uint)pppppppppppuVar35);
                            SStack_1d0._0_1_ = uStack_1c0._1_1_;
                            if ((char)uStack_1c0 != '\0') goto LAB_10069154;
                            *(ulonglong ************)
                             (iVar12 + 0x140 + (int)pppppppppppuStack_200 * 0x38) =
                                 pppppppppppuStack_1bc;
                          }
                          else {
                            iVar42 = memcmp(pppppppppppuVar23,&DAT_101401fb,10);
                            if (iVar42 == 0) {
                              FUN_10053f80((undefined1 *)&uStack_1c0,(byte *)puVar22,
                                           (uint)pppppppppppuVar35);
                              SStack_1d0._0_1_ = uStack_1c0._1_1_;
                              if ((char)uStack_1c0 != '\0') goto LAB_10069154;
                              *(ulonglong ************)
                               (iVar12 + 0x144 + (int)pppppppppppuStack_200 * 0x38) =
                                   pppppppppppuStack_1bc;
                            }
                            else {
                              iVar42 = memcmp(pppppppppppuVar23,&DAT_10140205,10);
                              if (iVar42 == 0) {
                                FUN_100528c0((undefined1 *)&uStack_1c0,(char *)puVar22,
                                             (int)pppppppppppuVar35);
                                SStack_1d0._0_1_ = uStack_1c0._1_1_;
                                if ((char)uStack_1c0 != '\0') goto LAB_10069154;
                                *(ulonglong ************)
                                 (iVar12 + 0x148 + (int)pppppppppppuStack_200 * 0x38) =
                                     pppppppppppuStack_1bc;
                              }
                              else {
                                iVar42 = memcmp(pppppppppppuVar23,&DAT_1014020f,10);
                                if (iVar42 != 0) {
                                  pppppppppppuStack_208 = (ulonglong ***********)0xb;
                                  goto switchD_10066f62_caseD_c;
                                }
                                FUN_100528c0((undefined1 *)&uStack_1c0,(char *)puVar22,
                                             (int)pppppppppppuVar35);
                                SStack_1d0._0_1_ = uStack_1c0._1_1_;
                                if ((char)uStack_1c0 != '\0') goto LAB_10069154;
                                *(ulonglong ************)
                                 (iVar12 + 0x14c + (int)pppppppppppuStack_200 * 0x38) =
                                     pppppppppppuStack_1bc;
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
          }
          break;
        default:
          goto switchD_10066f62_caseD_c;
        case (ulonglong ***********)0xd:
          iVar42 = memcmp(pppppppppppuVar23,&DAT_101401bd,(size_t)pppppppppppuVar39);
          if (iVar42 != 0) {
            pppppppppppuStack_208 = (ulonglong ***********)0xd;
            goto switchD_10066f62_caseD_c;
          }
          if (pppppppppppuVar35 == (ulonglong ***********)0x1) {
            cVar10 = (char)*puVar22;
            if ((cVar10 == '+') || (cVar10 == '-')) goto LAB_10068fab;
          }
          else {
            if (pppppppppppuVar35 == (ulonglong ***********)0x0) goto LAB_100690a5;
            cVar10 = (char)*puVar22;
          }
          uVar14 = (int)pppppppppppuVar35 - (uint)(cVar10 == '+');
          pbVar13 = (byte *)((int)puVar22 + (uint)(cVar10 == '+'));
          if (uVar14 < 3) {
            if (uVar14 == 0) {
              uVar28 = 0;
            }
            else {
              SStack_1d0._0_1_ = '\x01';
              uVar28 = *pbVar13 - 0x30;
              if (9 < uVar28) goto LAB_10068ba6;
              if (uVar14 != 1) {
                if (9 < pbVar13[1] - 0x30) goto LAB_10069497;
                uVar28 = (uint)(byte)((char)(pbVar13[1] - 0x30) + (char)uVar28 * '\n');
              }
            }
          }
          else {
            uVar28 = 0;
            while (bVar45 = uVar14 != 0, uVar14 = uVar14 - 1, bVar45) {
              sVar11 = (ushort)(byte)uVar28 * 10;
              bVar27 = *pbVar13;
              if ((char)((ushort)sVar11 >> 8) != '\0') goto LAB_100694a3;
              if (9 < bVar27 - 0x30) goto LAB_10068ba4;
              pbVar13 = pbVar13 + 1;
              bVar9 = (byte)sVar11;
              bVar27 = (byte)(bVar27 - 0x30);
              uVar28 = (uint)(byte)(bVar9 + bVar27);
              if (CARRY1(bVar9,bVar27)) goto LAB_100694d0;
            }
          }
          *(bool *)(pppppppppppuStack_148 + (int)pppppppppppuStack_200 * 0xe) = (char)uVar28 != '\0'
          ;
          break;
        case (ulonglong ***********)0xf:
          iVar42 = memcmp(pppppppppppuVar23,&DAT_10140219,(size_t)pppppppppppuVar39);
          if (iVar42 == 0) {
            FUN_10053f80((undefined1 *)&uStack_1c0,(byte *)puVar22,(uint)pppppppppppuVar35);
            pppppppppppuStack_1f0 = pppppppppppuVar23;
            SStack_1d0._0_1_ = uStack_1c0._1_1_;
            if ((char)uStack_1c0 != '\0') goto LAB_10069154;
            *(ulonglong ************)(iVar12 + 0x150 + (int)pppppppppppuStack_200 * 0x38) =
                 pppppppppppuStack_1bc;
          }
          else {
            iVar42 = memcmp(pppppppppppuVar23,&DAT_10140227,0xe);
            if (iVar42 != 0) {
              pppppppppppuStack_208 = (ulonglong ***********)0xf;
              goto switchD_10066f62_caseD_c;
            }
            pppppppppppuVar39 = pppppppppppuStack_18c;
            if (pppppppppppuVar35 == (ulonglong ***********)0x1) {
              cVar10 = (char)*puVar22;
              if ((cVar10 == '+') || (cVar10 == '-')) goto LAB_10068fab;
            }
            else {
              if (pppppppppppuVar35 == (ulonglong ***********)0x0) goto LAB_100690a5;
              cVar10 = (char)*puVar22;
            }
            if (cVar10 == '-') {
              if (&DAT_00000008 < pppppppppppuVar35) {
                iVar42 = 0;
                pppppppppppuVar25 = (ulonglong ***********)((int)pppppppppppuVar25 + 1);
                do {
                  iVar31 = (int)((longlong)iVar42 * 10);
                  if ((longlong)iVar31 != (longlong)iVar42 * 10) {
                    SStack_1d0._0_1_ =
                         ((byte)(*(byte *)((int)pppppppppppuVar23 + (int)pppppppppppuVar25) - 0x30)
                         < 10) * '\x02' + '\x01';
                    goto LAB_10068ba6;
                  }
                  uVar14 = *(byte *)((int)pppppppppppuVar23 + (int)pppppppppppuVar25) - 0x30;
                  if (9 < uVar14) goto LAB_10068ba4;
                  iVar42 = iVar31 - uVar14;
                  if (SBORROW4(iVar31,uVar14)) goto LAB_1006b2ab;
                  pppppppppppuVar25 = (ulonglong ***********)((int)pppppppppppuVar25 + 1);
                } while (pppppppppppuStack_18c != pppppppppppuVar25);
              }
              else if (pppppppppppuVar35 == (ulonglong ***********)0x1) {
                iVar42 = 0;
              }
              else {
                iVar42 = 0;
                pppppppppppuVar25 = (ulonglong ***********)((int)pppppppppppuVar25 + 1);
                do {
                  uVar14 = *(byte *)((int)pppppppppppuVar23 + (int)pppppppppppuVar25) - 0x30;
                  if (9 < uVar14) goto LAB_10068ba4;
                  pppppppppppuVar25 = (ulonglong ***********)((int)pppppppppppuVar25 + 1);
                  iVar42 = iVar42 * 10 - uVar14;
                } while (pppppppppppuStack_18c != pppppppppppuVar25);
              }
            }
            else {
              if (cVar10 == '+') {
                puVar22 = (uint *)((int)puVar22 + 1);
                pppppppppppuVar35 = (ulonglong ***********)((int)pppppppppppuVar35 + -1);
              }
              iVar42 = 0;
              if (pppppppppppuVar35 < (ulonglong ***********)0x8) {
                for (; pppppppppppuVar35 != (ulonglong ***********)0x0;
                    pppppppppppuVar35 = (ulonglong ***********)((int)pppppppppppuVar35 + -1)) {
                  uVar14 = (byte)*puVar22 - 0x30;
                  if (9 < uVar14) goto LAB_10068ba4;
                  puVar22 = (uint *)((int)puVar22 + 1);
                  iVar42 = uVar14 + iVar42 * 10;
                }
              }
              else {
                do {
                  bVar27 = (byte)*puVar22;
                  iVar31 = (int)((longlong)iVar42 * 10);
                  if ((longlong)iVar31 != (longlong)iVar42 * 10) goto LAB_100694a3;
                  uVar14 = bVar27 - 0x30;
                  if (9 < uVar14) goto LAB_10068ba4;
                  iVar42 = iVar31 + uVar14;
                  if (SCARRY4(iVar31,uVar14)) goto LAB_100694d0;
                  puVar22 = (uint *)((int)puVar22 + 1);
                  pppppppppppuVar35 = (ulonglong ***********)((int)pppppppppppuVar35 + -1);
                } while (pppppppppppuVar35 != (ulonglong ***********)0x0);
              }
            }
            *(int *)(iVar12 + 0x154 + (int)pppppppppppuStack_200 * 0x38) = iVar42;
          }
          break;
        case (ulonglong ***********)0x10:
          iVar42 = memcmp(pppppppppppuVar23,&DAT_10140235,(size_t)pppppppppppuVar39);
          if (iVar42 == 0) {
            FUN_10053f80((undefined1 *)&uStack_1c0,(byte *)puVar22,(uint)pppppppppppuVar35);
            if (((char)uStack_1c0 != '\0') &&
               (FUN_100528c0((undefined1 *)&uStack_1c0,(char *)puVar22,(int)pppppppppppuVar35),
               pppppppppppuStack_1f0 = pppppppppppuVar35, SStack_1d0._0_1_ = uStack_1c0._1_1_,
               (char)uStack_1c0 != '\0')) goto LAB_10069154;
            *(ulonglong ************)(iVar12 + 0x158 + (int)pppppppppppuStack_200 * 0x38) =
                 pppppppppppuStack_1bc;
          }
          else {
            iVar42 = memcmp(pppppppppppuVar23,&DAT_10140244,0xf);
            if (iVar42 == 0) {
              FUN_10053f80((undefined1 *)&uStack_1c0,(byte *)puVar22,(uint)pppppppppppuVar35);
              if (((char)uStack_1c0 != '\0') &&
                 (FUN_100528c0((undefined1 *)&uStack_1c0,(char *)puVar22,(int)pppppppppppuVar35),
                 pppppppppppuStack_1f0 = (ulonglong ***********)&uStack_1c0,
                 SStack_1d0._0_1_ = uStack_1c0._1_1_, (char)uStack_1c0 != '\0')) goto LAB_10069154;
              *(ulonglong ************)(iVar12 + 0x15c + (int)pppppppppppuStack_200 * 0x38) =
                   pppppppppppuStack_1bc;
            }
            else {
              iVar42 = memcmp(pppppppppppuVar23,&DAT_10140253,0xf);
              if (iVar42 != 0) {
                pppppppppppuStack_208 = (ulonglong ***********)&DAT_00000010;
                goto switchD_10066f62_caseD_c;
              }
              if (pppppppppppuVar35 == (ulonglong ***********)0x0) {
                uVar18 = 0xffffffff;
              }
              else {
                puVar15 = (undefined4 *)
                          FUN_100025a0((int *)pppppppppppuStack_188,puVar22,(uint)pppppppppppuVar35)
                ;
                uStack_140 = CONCAT44(pppppppppppuVar35,puVar22);
                uStack_138 = CONCAT44(uStack_138._4_4_,&uStack_d0);
                if (puVar15 == (undefined4 *)0x0) {
                  FUN_10037900((undefined1 *)&uStack_1c0,(undefined4 *)&uStack_140);
                  goto LAB_10068886;
                }
                uVar18 = *puVar15;
              }
              *(undefined4 *)(iVar12 + 0x160 + (int)pppppppppppuStack_200 * 0x38) = uVar18;
            }
          }
          break;
        case (ulonglong ***********)0x11:
          iVar42 = memcmp(pppppppppppuVar23,&DAT_10140162,(size_t)pppppppppppuVar39);
          if (iVar42 != 0) {
            pppppppppppuStack_208 = (ulonglong ***********)&DAT_00000011;
            goto switchD_10066f62_caseD_c;
          }
          if (pppppppppppuVar35 == (ulonglong ***********)0x1) {
            cVar10 = (char)*puVar22;
            if ((cVar10 == '+') || (cVar10 == '-')) goto LAB_10068fab;
          }
          else {
            if (pppppppppppuVar35 == (ulonglong ***********)0x0) goto LAB_100690a5;
            cVar10 = (char)*puVar22;
          }
          uVar14 = (int)pppppppppppuVar35 - (uint)(cVar10 == '+');
          pbVar13 = (byte *)((int)puVar22 + (uint)(cVar10 == '+'));
          if (uVar14 < 3) {
            if (uVar14 == 0) {
              uVar28 = 0;
            }
            else {
              SStack_1d0._0_1_ = '\x01';
              uVar28 = *pbVar13 - 0x30;
              if (9 < uVar28) goto LAB_10068ba6;
              if (uVar14 != 1) {
                if (9 < pbVar13[1] - 0x30) goto LAB_10069497;
                uVar28 = (uint)(byte)((char)(pbVar13[1] - 0x30) + (char)uVar28 * '\n');
              }
            }
          }
          else {
            uVar28 = 0;
            while (bVar45 = uVar14 != 0, uVar14 = uVar14 - 1, bVar45) {
              sVar11 = (ushort)(byte)uVar28 * 10;
              bVar27 = *pbVar13;
              if ((char)((ushort)sVar11 >> 8) != '\0') goto LAB_100694a3;
              if (9 < bVar27 - 0x30) goto LAB_10068ba4;
              pbVar13 = pbVar13 + 1;
              bVar9 = (byte)sVar11;
              bVar27 = (byte)(bVar27 - 0x30);
              uVar28 = (uint)(byte)(bVar9 + bVar27);
              if (CARRY1(bVar9,bVar27)) goto LAB_100694d0;
            }
          }
          *(bool *)(iVar12 + 0x29 + (int)pppppppppppuStack_200 * 0x20) = (char)uVar28 != '\0';
        }
        goto LAB_10068b87;
      }
      pppppppppppuStack_208 = (ulonglong ***********)0x1;
      pppppppppppuStack_200 = pppppppppppuVar20;
switchD_10066f62_caseD_c:
      FUN_10110c20(&uStack_1c0,param_2[1],(SIZE_T)param_2[2]);
      pppppppppppuStack_1fc = FUN_10107380(0,(SIZE_T)pppppppppppuStack_208);
      if (pppppppppppuStack_1fc == (ulonglong ***********)0x0) {
        FUN_101366bc(1);
                    /* WARNING: Does not return */
        pcVar40 = (code *)invalidInstructionException();
        (*pcVar40)();
      }
      memcpy(pppppppppppuStack_1fc,pppppppppppuVar23,(size_t)pppppppppppuStack_208);
      cVar10 = '\a';
      pppppppppppuStack_150 = pppppppppppuStack_208;
      pppppppppppuStack_17c = pppppppppppuStack_1bc;
      pppppppppppuStack_1d8 = pppppppppppuStack_1b8;
      pppppppppppuStack_1f8 = pppppppppppuStack_1b4;
      pppppppppppuStack_1f0 =
           (ulonglong ***********)
           CONCAT13(uStack_1c0._3_1_,
                    CONCAT12(uStack_1c0._2_1_,CONCAT11(uStack_1c0._1_1_,(char)uStack_1c0)));
      SStack_1d0._0_1_ = extraout_DL_01;
      goto LAB_1006960c;
    }
    bVar9 = *(byte *)((int)((int)pppppppppppuVar23 + -2) + (int)pppppppppppuStack_208);
    if ((char)bVar9 < -0x40) {
      bVar1 = *(byte *)((int)pppppppppppuVar23 + -3 + (int)pppppppppppuStack_208);
      pppppppppppuStack_200 = (ulonglong ***********)(uint)bVar1;
      pppppppppppuStack_150 = (ulonglong ***********)((uint)pppppppppppuStack_200 & 0xf);
      pppppppppppuVar39 = pppppppppppuStack_150;
      if ((char)bVar1 < -0x40) {
        pppppppppppuVar39 =
             (ulonglong ***********)
             ((uint)pppppppppppuStack_200 & 0x3f |
             (*(byte *)((int)(pppppppppppuVar23 + -1) + (int)pppppppppppuStack_208) & 7) << 6);
      }
      if ((uVar14 & 0x38 | (int)pppppppppppuVar39 << 0xc | (bVar9 & 0x3f) << 6) == 0x30) {
        pppppppppppuVar39 = pppppppppppuStack_150;
        if ((char)bVar1 < -0x40) {
          pppppppppppuVar39 =
               (ulonglong ***********)
               ((uint)pppppppppppuStack_200 & 0x3f |
               (*(byte *)((int)(pppppppppppuVar23 + -1) + (int)pppppppppppuStack_208) & 7) << 6);
        }
        uVar28 = (int)pppppppppppuVar39 << 0xc;
LAB_10066f1b:
        uVar14 = uVar14 & 0x3f | uVar28;
        pppppppppppuVar20 = pppppppppppuStack_200;
        goto joined_r0x10066e54;
      }
    }
    else {
      uVar28 = (bVar9 & 0x1f) << 6;
      if ((uVar14 & 0x38 | uVar28) == 0x30) goto LAB_10066f1b;
    }
LAB_1006700f:
    pppppppppppuVar39 = (ulonglong ***********)0x74696465;
    pppppppppppuStack_1f0 = pppppppppppuVar39;
    switch(pppppppppppuStack_208) {
    case (ulonglong ***********)0x3:
      if (*(char *)((int)pppppppppppuVar23 + 2) == 'b' && *(short *)pppppppppppuVar23 == 0x6174) {
        if (pppppppppppuVar35 == (ulonglong ***********)0x1) {
          cVar10 = (char)*puVar22;
          if ((cVar10 == '+') || (cVar10 == '-')) goto LAB_10068fab;
        }
        else {
          if (pppppppppppuVar35 == (ulonglong ***********)0x0) goto LAB_100690a5;
          cVar10 = (char)*puVar22;
        }
        pppppppppppuVar35 = (ulonglong ***********)((int)pppppppppppuVar35 - (uint)(cVar10 == '+'));
        pbVar13 = (byte *)((int)puVar22 + (uint)(cVar10 == '+'));
        if (&DAT_00000008 < pppppppppppuVar35) {
          uVar14 = 0;
          pppppppppppuVar39 = pppppppppppuVar35;
          while (bVar45 = pppppppppppuVar39 != (ulonglong ***********)0x0,
                pppppppppppuVar39 = (ulonglong ***********)((int)pppppppppppuVar39 + -1), bVar45) {
            uVar28 = (uint)((ulonglong)uVar14 * 10);
            bVar27 = *pbVar13;
            if ((int)((ulonglong)uVar14 * 10 >> 0x20) != 0) goto LAB_10069522;
            uVar16 = bVar27 - 0x30;
            if (9 < uVar16) goto LAB_10068ba4;
            pbVar13 = pbVar13 + 1;
            uVar14 = uVar16 + uVar28;
            SStack_1d0._0_1_ = '\x02';
            if (CARRY4(uVar16,uVar28)) goto LAB_10068ba6;
          }
        }
        else {
          uVar14 = 0;
          for (; pppppppppppuVar35 != (ulonglong ***********)0x0;
              pppppppppppuVar35 = (ulonglong ***********)((int)pppppppppppuVar35 + -1)) {
            bVar27 = *pbVar13;
            if (9 < bVar27 - 0x30) goto LAB_10068ba4;
            pbVar13 = pbVar13 + 1;
            uVar14 = (bVar27 - 0x30) + uVar14 * 10;
          }
        }
        *(uint *)(iVar12 + 0x314) = uVar14;
        goto LAB_10068b87;
      }
      pppppppppppuStack_208 = (ulonglong ***********)0x3;
      break;
    case (ulonglong ***********)0x8:
      if (pppppppppppuVar23[1] == (ulonglong **********)0x7265626d &&
          *pppppppppppuVar23 == (ulonglong **********)0x656d6572) {
        uVar52 = FUN_100540a0((byte *)puVar22,(int)pppppppppppuVar35);
        SStack_1d0._0_1_ = (char)(uVar52 >> 0x20);
        if ((uVar52 & 1) != 0) goto LAB_10069154;
        *(bool *)(iVar12 + 0x300) = (char)SStack_1d0 != '\0';
      }
      else if (pppppppppppuVar23[1] == (ulonglong **********)0x785f726f &&
               *pppppppppppuVar23 == (ulonglong **********)0x74696465) {
        if (pppppppppppuVar35 == (ulonglong ***********)0x1) {
          cVar10 = (char)*puVar22;
          if ((cVar10 == '+') || (cVar10 == '-')) goto LAB_10068fab;
        }
        else {
          if (pppppppppppuVar35 == (ulonglong ***********)0x0) goto LAB_100690a5;
          cVar10 = (char)*puVar22;
        }
        pppppppppppuVar35 = (ulonglong ***********)((int)pppppppppppuVar35 - (uint)(cVar10 == '+'));
        pbVar13 = (byte *)((int)puVar22 + (uint)(cVar10 == '+'));
        if (&DAT_00000008 < pppppppppppuVar35) {
          uVar14 = 0;
          pppppppppppuVar39 = pppppppppppuVar35;
          while (bVar45 = pppppppppppuVar39 != (ulonglong ***********)0x0,
                pppppppppppuVar39 = (ulonglong ***********)((int)pppppppppppuVar39 + -1), bVar45) {
            uVar28 = (uint)((ulonglong)uVar14 * 10);
            bVar27 = *pbVar13;
            if ((int)((ulonglong)uVar14 * 10 >> 0x20) != 0) goto LAB_10069522;
            uVar16 = bVar27 - 0x30;
            if (9 < uVar16) goto LAB_10068ba4;
            pbVar13 = pbVar13 + 1;
            uVar14 = uVar16 + uVar28;
            SStack_1d0._0_1_ = '\x02';
            if (CARRY4(uVar16,uVar28)) goto LAB_10068ba6;
          }
        }
        else {
          uVar14 = 0;
          for (; pppppppppppuVar35 != (ulonglong ***********)0x0;
              pppppppppppuVar35 = (ulonglong ***********)((int)pppppppppppuVar35 + -1)) {
            bVar27 = *pbVar13;
            if (9 < bVar27 - 0x30) goto LAB_10068ba4;
            pbVar13 = pbVar13 + 1;
            uVar14 = (bVar27 - 0x30) + uVar14 * 10;
          }
        }
        *(uint *)(iVar12 + 0x318) = uVar14;
      }
      else {
        if (pppppppppppuVar23[1] != (ulonglong **********)0x795f726f ||
            *pppppppppppuVar23 != (ulonglong **********)0x74696465) {
          pppppppppppuStack_208 = (ulonglong ***********)&DAT_00000008;
          break;
        }
        FUN_100528c0((undefined1 *)&uStack_1c0,(char *)puVar22,(int)pppppppppppuVar35);
        SStack_1d0._0_1_ = uStack_1c0._1_1_;
        if ((char)uStack_1c0 == '\x01') goto LAB_10069154;
        *(ulonglong ************)(iVar12 + 0x31c) = pppppppppppuStack_1bc;
      }
      goto LAB_10068b87;
    case (ulonglong ***********)0x9:
      iVar42 = memcmp(pppppppppppuVar23,"show_grid",9);
      if (iVar42 != 0) {
        pppppppppppuStack_208 = (ulonglong ***********)0x9;
        break;
      }
      if (pppppppppppuVar35 == (ulonglong ***********)0x1) {
        cVar10 = (char)*puVar22;
        if ((cVar10 == '+') || (cVar10 == '-')) goto LAB_10068fab;
      }
      else {
        if (pppppppppppuVar35 == (ulonglong ***********)0x0) goto LAB_100690a5;
        cVar10 = (char)*puVar22;
      }
      pppppppppppuVar35 = (ulonglong ***********)((int)pppppppppppuVar35 - (uint)(cVar10 == '+'));
      pbVar13 = (byte *)((int)puVar22 + (uint)(cVar10 == '+'));
      if ((ulonglong ***********)0x2 < pppppppppppuVar35) {
        uVar14 = 0;
        pppppppppppuVar39 = pppppppppppuVar35;
        while (bVar45 = pppppppppppuVar39 != (ulonglong ***********)0x0,
              pppppppppppuVar39 = (ulonglong ***********)((int)pppppppppppuVar39 + -1), bVar45) {
          sVar11 = (ushort)(byte)uVar14 * 10;
          bVar27 = *pbVar13;
          if ((char)((ushort)sVar11 >> 8) != '\0') goto LAB_100694a3;
          if (9 < bVar27 - 0x30) goto LAB_10068ba4;
          pbVar13 = pbVar13 + 1;
          bVar9 = (byte)sVar11;
          bVar27 = (byte)(bVar27 - 0x30);
          uVar14 = (uint)(byte)(bVar9 + bVar27);
          SStack_1d0._0_1_ = '\x02';
          if (CARRY1(bVar9,bVar27)) goto LAB_10068ba6;
        }
LAB_100687ab:
        *(bool *)(iVar12 + 0x30c) = (char)uVar14 != '\0';
        goto LAB_10068b87;
      }
      if (pppppppppppuVar35 == (ulonglong ***********)0x0) {
        uVar14 = 0;
        goto LAB_100687ab;
      }
      SStack_1d0._0_1_ = '\x01';
      uVar14 = *pbVar13 - 0x30;
      if (uVar14 < 10) {
        if (pppppppppppuVar35 != (ulonglong ***********)0x1) {
          if (9 < pbVar13[1] - 0x30) {
LAB_10069497:
            SStack_1d0._0_1_ = '\x01';
            pppppppppppuStack_1f0 = pppppppppppuVar39;
            cVar10 = '\t';
            goto LAB_1006960c;
          }
          uVar14 = (uint)(byte)((char)(pbVar13[1] - 0x30) + (char)uVar14 * '\n');
        }
        goto LAB_100687ab;
      }
      goto LAB_10068ba6;
    case (ulonglong ***********)0xa:
      iVar42 = memcmp(pppppppppppuVar23,"show_tiles",10);
      if (iVar42 == 0) {
        uVar52 = FUN_100540a0((byte *)puVar22,(int)pppppppppppuVar35);
        SStack_1d0._0_1_ = (char)(uVar52 >> 0x20);
        if ((uVar52 & 1) != 0) goto LAB_10069154;
        *(bool *)(iVar12 + 0x30e) = (char)SStack_1d0 != '\0';
      }
      else {
        iVar42 = memcmp(pppppppppppuVar23,"show_views",10);
        if (iVar42 != 0) {
          pppppppppppuStack_208 = (ulonglong ***********)0xa;
          break;
        }
        if (pppppppppppuVar35 == (ulonglong ***********)0x1) {
          cVar10 = (char)*puVar22;
          if ((cVar10 == '+') || (cVar10 == '-')) goto LAB_10068fab;
        }
        else {
          if (pppppppppppuVar35 == (ulonglong ***********)0x0) goto LAB_100690a5;
          cVar10 = (char)*puVar22;
        }
        pppppppppppuVar35 = (ulonglong ***********)((int)pppppppppppuVar35 - (uint)(cVar10 == '+'));
        pbVar13 = (byte *)((int)puVar22 + (uint)(cVar10 == '+'));
        if (pppppppppppuVar35 < (ulonglong ***********)0x3) {
          if (pppppppppppuVar35 == (ulonglong ***********)0x0) {
            uVar14 = 0;
          }
          else {
            SStack_1d0._0_1_ = '\x01';
            uVar14 = *pbVar13 - 0x30;
            if (9 < uVar14) goto LAB_10068ba6;
            if (pppppppppppuVar35 != (ulonglong ***********)0x1) {
              if (9 < pbVar13[1] - 0x30) goto LAB_10069497;
              uVar14 = (uint)(byte)((char)(pbVar13[1] - 0x30) + (char)uVar14 * '\n');
            }
          }
        }
        else {
          uVar14 = 0;
          pppppppppppuVar39 = pppppppppppuVar35;
          while (bVar45 = pppppppppppuVar39 != (ulonglong ***********)0x0,
                pppppppppppuVar39 = (ulonglong ***********)((int)pppppppppppuVar39 + -1), bVar45) {
            sVar11 = (ushort)(byte)uVar14 * 10;
            bVar27 = *pbVar13;
            if ((char)((ushort)sVar11 >> 8) != '\0') goto LAB_100694a3;
            if (9 < bVar27 - 0x30) goto LAB_10068ba4;
            pbVar13 = pbVar13 + 1;
            bVar9 = (byte)sVar11;
            bVar27 = (byte)(bVar27 - 0x30);
            uVar14 = (uint)(byte)(bVar9 + bVar27);
            SStack_1d0._0_1_ = '\x02';
            if (CARRY1(bVar9,bVar27)) goto LAB_10068ba6;
          }
        }
        *(bool *)(iVar12 + 0x311) = (char)uVar14 != '\0';
      }
      goto LAB_10068b87;
    case (ulonglong ***********)0xc:
      iVar42 = memcmp(pppppppppppuVar23,"editor_width",0xc);
      if (iVar42 == 0) {
        FUN_100528c0((undefined1 *)&uStack_1c0,(char *)puVar22,(int)pppppppppppuVar35);
        SStack_1d0._0_1_ = uStack_1c0._1_1_;
        if ((char)uStack_1c0 != '\0') goto LAB_10069154;
        *(ulonglong ************)(iVar12 + 0x304) = pppppppppppuStack_1bc;
      }
      else {
        iVar42 = memcmp(pppppppppppuVar23,"show_objects",0xc);
        if (iVar42 != 0) {
          pppppppppppuStack_208 = (ulonglong ***********)&DAT_0000000c;
          break;
        }
        if (pppppppppppuVar35 == (ulonglong ***********)0x1) {
          cVar10 = (char)*puVar22;
          if ((cVar10 == '+') || (cVar10 == '-')) goto LAB_10068fab;
        }
        else {
          if (pppppppppppuVar35 == (ulonglong ***********)0x0) goto LAB_100690a5;
          cVar10 = (char)*puVar22;
        }
        pppppppppppuVar35 = (ulonglong ***********)((int)pppppppppppuVar35 - (uint)(cVar10 == '+'));
        pbVar13 = (byte *)((int)puVar22 + (uint)(cVar10 == '+'));
        if (pppppppppppuVar35 < (ulonglong ***********)0x3) {
          if (pppppppppppuVar35 == (ulonglong ***********)0x0) {
            uVar14 = 0;
          }
          else {
            SStack_1d0._0_1_ = '\x01';
            uVar14 = *pbVar13 - 0x30;
            if (9 < uVar14) goto LAB_10068ba6;
            if (pppppppppppuVar35 != (ulonglong ***********)0x1) {
              if (9 < pbVar13[1] - 0x30) goto LAB_10069497;
              uVar14 = (uint)(byte)((char)(pbVar13[1] - 0x30) + (char)uVar14 * '\n');
            }
          }
        }
        else {
          uVar14 = 0;
          pppppppppppuVar39 = pppppppppppuVar35;
          while (bVar45 = pppppppppppuVar39 != (ulonglong ***********)0x0,
                pppppppppppuVar39 = (ulonglong ***********)((int)pppppppppppuVar39 + -1), bVar45) {
            sVar11 = (ushort)(byte)uVar14 * 10;
            bVar27 = *pbVar13;
            if ((char)((ushort)sVar11 >> 8) != '\0') goto LAB_100694a3;
            if (9 < bVar27 - 0x30) goto LAB_10068ba4;
            pbVar13 = pbVar13 + 1;
            bVar9 = (byte)sVar11;
            bVar27 = (byte)(bVar27 - 0x30);
            uVar14 = (uint)(byte)(bVar9 + bVar27);
            SStack_1d0._0_1_ = '\x02';
            if (CARRY1(bVar9,bVar27)) goto LAB_10068ba6;
          }
        }
        *(bool *)(iVar12 + 0x30d) = (char)uVar14 != '\0';
      }
      goto LAB_10068b87;
    case (ulonglong ***********)0xd:
      iVar42 = memcmp(pppppppppppuVar23,"views_enabled",0xd);
      if (iVar42 == 0) {
        uVar52 = FUN_100540a0((byte *)puVar22,(int)pppppppppppuVar35);
        SStack_1d0._0_1_ = (char)(uVar52 >> 0x20);
        if ((uVar52 & 1) != 0) goto LAB_10069154;
        *(bool *)(iVar12 + 0x128) = (char)SStack_1d0 != '\0';
      }
      else {
        iVar42 = memcmp(pppppppppppuVar23,"editor_height",0xd);
        if (iVar42 != 0) {
          pppppppppppuStack_208 = (ulonglong ***********)0xd;
          break;
        }
        if (pppppppppppuVar35 == (ulonglong ***********)0x1) {
          cVar10 = (char)*puVar22;
          if ((cVar10 == '+') || (cVar10 == '-')) goto LAB_10068fab;
        }
        else {
          if (pppppppppppuVar35 == (ulonglong ***********)0x0) goto LAB_100690a5;
          cVar10 = (char)*puVar22;
        }
        pppppppppppuVar35 = (ulonglong ***********)((int)pppppppppppuVar35 - (uint)(cVar10 == '+'));
        pbVar13 = (byte *)((int)puVar22 + (uint)(cVar10 == '+'));
        if (&DAT_00000008 < pppppppppppuVar35) {
          uVar14 = 0;
          pppppppppppuVar39 = pppppppppppuVar35;
          while (bVar45 = pppppppppppuVar39 != (ulonglong ***********)0x0,
                pppppppppppuVar39 = (ulonglong ***********)((int)pppppppppppuVar39 + -1), bVar45) {
            uVar28 = (uint)((ulonglong)uVar14 * 10);
            bVar27 = *pbVar13;
            if ((int)((ulonglong)uVar14 * 10 >> 0x20) != 0) goto LAB_10069522;
            uVar16 = bVar27 - 0x30;
            if (9 < uVar16) goto LAB_10068ba4;
            pbVar13 = pbVar13 + 1;
            uVar14 = uVar16 + uVar28;
            SStack_1d0._0_1_ = '\x02';
            if (CARRY4(uVar16,uVar28)) goto LAB_10068ba6;
          }
        }
        else {
          uVar14 = 0;
          for (; pppppppppppuVar35 != (ulonglong ***********)0x0;
              pppppppppppuVar35 = (ulonglong ***********)((int)pppppppppppuVar35 + -1)) {
            bVar27 = *pbVar13;
            if (9 < bVar27 - 0x30) goto LAB_10068ba4;
            pbVar13 = pbVar13 + 1;
            uVar14 = (bVar27 - 0x30) + uVar14 * 10;
          }
        }
        *(uint *)(iVar12 + 0x308) = uVar14;
      }
LAB_10068b87:
      if (iVar17 != 0) {
        pvVar21 = GetProcessHeap();
        HeapFree(pvVar21,0,pppppppppppuVar23);
      }
      goto LAB_10066b33;
    case (ulonglong ***********)0x10:
      auVar47[0] = -(*(char *)pppppppppppuVar23 == 's');
      auVar47[1] = -(*(char *)((int)pppppppppppuVar23 + 1) == 'h');
      auVar47[2] = -(*(char *)((int)pppppppppppuVar23 + 2) == 'o');
      auVar47[3] = -(*(char *)((int)pppppppppppuVar23 + 3) == 'w');
      auVar47[4] = -(*(char *)(pppppppppppuVar23 + 1) == '_');
      auVar47[5] = -(*(char *)((int)pppppppppppuVar23 + 5) == 'b');
      auVar47[6] = -(*(char *)((int)pppppppppppuVar23 + 6) == 'a');
      auVar47[7] = -(*(char *)((int)pppppppppppuVar23 + 7) == 'c');
      auVar47[8] = -(*(char *)(pppppppppppuVar23 + 2) == 'k');
      auVar47[9] = -(*(char *)((int)pppppppppppuVar23 + 9) == 'g');
      auVar47[10] = -(*(char *)((int)pppppppppppuVar23 + 10) == 'r');
      auVar47[0xb] = -(*(char *)((int)pppppppppppuVar23 + 0xb) == 'o');
      auVar47[0xc] = -(*(char *)(pppppppppppuVar23 + 3) == 'u');
      auVar47[0xd] = -(*(char *)((int)pppppppppppuVar23 + 0xd) == 'n');
      auVar47[0xe] = -(*(char *)((int)pppppppppppuVar23 + 0xe) == 'd');
      auVar47[0xf] = -(*(char *)((int)pppppppppppuVar23 + 0xf) == 's');
      if ((ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar47[0xf] >> 7) << 0xf) == 0xffff) {
        if (pppppppppppuVar35 == (ulonglong ***********)0x1) {
          cVar10 = (char)*puVar22;
          if ((cVar10 != '+') && (cVar10 != '-')) goto LAB_1006870e;
LAB_10068fab:
          cVar10 = '\t';
          SStack_1d0._0_1_ = '\x01';
          pppppppppppuStack_1f0 = pppppppppppuVar39;
        }
        else {
          if (pppppppppppuVar35 != (ulonglong ***********)0x0) {
            cVar10 = (char)*puVar22;
LAB_1006870e:
            pppppppppppuVar35 =
                 (ulonglong ***********)((int)pppppppppppuVar35 - (uint)(cVar10 == '+'));
            pbVar13 = (byte *)((int)puVar22 + (uint)(cVar10 == '+'));
            if (pppppppppppuVar35 < (ulonglong ***********)0x3) {
              if (pppppppppppuVar35 == (ulonglong ***********)0x0) {
                uVar14 = 0;
              }
              else {
                SStack_1d0._0_1_ = '\x01';
                uVar14 = *pbVar13 - 0x30;
                if (9 < uVar14) goto LAB_10068ba6;
                if (pppppppppppuVar35 != (ulonglong ***********)0x1) {
                  if (9 < pbVar13[1] - 0x30) goto LAB_10069497;
                  uVar14 = (uint)(byte)((char)(pbVar13[1] - 0x30) + (char)uVar14 * '\n');
                }
              }
            }
            else {
              uVar14 = 0;
              pppppppppppuVar39 = pppppppppppuVar35;
              while (bVar45 = pppppppppppuVar39 != (ulonglong ***********)0x0,
                    pppppppppppuVar39 = (ulonglong ***********)((int)pppppppppppuVar39 + -1), bVar45
                    ) {
                sVar11 = (ushort)(byte)uVar14 * 10;
                bVar27 = *pbVar13;
                if ((char)((ushort)sVar11 >> 8) != '\0') goto LAB_100694a3;
                if (9 < bVar27 - 0x30) goto LAB_10068ba4;
                pbVar13 = pbVar13 + 1;
                bVar9 = (byte)sVar11;
                bVar27 = (byte)(bVar27 - 0x30);
                uVar14 = (uint)(byte)(bVar9 + bVar27);
                SStack_1d0._0_1_ = '\x02';
                if (CARRY1(bVar9,bVar27)) goto LAB_10068ba6;
              }
            }
            *(bool *)(iVar12 + 0x30f) = (char)uVar14 != '\0';
            goto LAB_10068b87;
          }
LAB_100690a5:
          cVar10 = '\t';
          SStack_1d0._0_1_ = '\0';
          pppppppppppuStack_1f0 = pppppppppppuVar39;
        }
        goto LAB_1006960c;
      }
      auVar48[0] = -(*(char *)pppppppppppuVar23 == 's');
      auVar48[1] = -(*(char *)((int)pppppppppppuVar23 + 1) == 'h');
      auVar48[2] = -(*(char *)((int)pppppppppppuVar23 + 2) == 'o');
      auVar48[3] = -(*(char *)((int)pppppppppppuVar23 + 3) == 'w');
      auVar48[4] = -(*(char *)(pppppppppppuVar23 + 1) == '_');
      auVar48[5] = -(*(char *)((int)pppppppppppuVar23 + 5) == 'f');
      auVar48[6] = -(*(char *)((int)pppppppppppuVar23 + 6) == 'o');
      auVar48[7] = -(*(char *)((int)pppppppppppuVar23 + 7) == 'r');
      auVar48[8] = -(*(char *)(pppppppppppuVar23 + 2) == 'e');
      auVar48[9] = -(*(char *)((int)pppppppppppuVar23 + 9) == 'g');
      auVar48[10] = -(*(char *)((int)pppppppppppuVar23 + 10) == 'r');
      auVar48[0xb] = -(*(char *)((int)pppppppppppuVar23 + 0xb) == 'o');
      auVar48[0xc] = -(*(char *)(pppppppppppuVar23 + 3) == 'u');
      auVar48[0xd] = -(*(char *)((int)pppppppppppuVar23 + 0xd) == 'n');
      auVar48[0xe] = -(*(char *)((int)pppppppppppuVar23 + 0xe) == 'd');
      auVar48[0xf] = -(*(char *)((int)pppppppppppuVar23 + 0xf) == 's');
      if ((ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar48[0xf] >> 7) << 0xf) == 0xffff) {
        if (pppppppppppuVar35 == (ulonglong ***********)0x1) {
          cVar10 = (char)*puVar22;
          if ((cVar10 == '+') || (cVar10 == '-')) goto LAB_10068fab;
        }
        else {
          if (pppppppppppuVar35 == (ulonglong ***********)0x0) goto LAB_100690a5;
          cVar10 = (char)*puVar22;
        }
        pppppppppppuVar35 = (ulonglong ***********)((int)pppppppppppuVar35 - (uint)(cVar10 == '+'));
        pbVar13 = (byte *)((int)puVar22 + (uint)(cVar10 == '+'));
        if (pppppppppppuVar35 < (ulonglong ***********)0x3) {
          if (pppppppppppuVar35 == (ulonglong ***********)0x0) {
            uVar14 = 0;
          }
          else {
            SStack_1d0._0_1_ = '\x01';
            uVar14 = *pbVar13 - 0x30;
            if (9 < uVar14) goto LAB_10068ba6;
            if (pppppppppppuVar35 != (ulonglong ***********)0x1) {
              if (9 < pbVar13[1] - 0x30) goto LAB_10069497;
              uVar14 = (uint)(byte)((char)(pbVar13[1] - 0x30) + (char)uVar14 * '\n');
            }
          }
        }
        else {
          uVar14 = 0;
          pppppppppppuVar39 = pppppppppppuVar35;
          while (bVar45 = pppppppppppuVar39 != (ulonglong ***********)0x0,
                pppppppppppuVar39 = (ulonglong ***********)((int)pppppppppppuVar39 + -1), bVar45) {
            sVar11 = (ushort)(byte)uVar14 * 10;
            bVar27 = *pbVar13;
            if ((char)((ushort)sVar11 >> 8) != '\0') goto LAB_100694a3;
            if (9 < bVar27 - 0x30) goto LAB_10068ba4;
            pbVar13 = pbVar13 + 1;
            bVar9 = (byte)sVar11;
            bVar27 = (byte)(bVar27 - 0x30);
            uVar14 = (uint)(byte)(bVar9 + bVar27);
            SStack_1d0._0_1_ = '\x02';
            if (CARRY1(bVar9,bVar27)) goto LAB_10068ba6;
          }
        }
        *(bool *)(iVar12 + 0x310) = (char)uVar14 != '\0';
        goto LAB_10068b87;
      }
      pppppppppppuStack_208 = (ulonglong ***********)&DAT_00000010;
      break;
    case (ulonglong ***********)0x17:
      auVar51[0] = -(*(char *)((int)pppppppppppuVar23 + 7) == 'u');
      auVar51[1] = -(*(char *)(pppppppppppuVar23 + 2) == 'n');
      auVar51[2] = -(*(char *)((int)pppppppppppuVar23 + 9) == 'd');
      auVar51[3] = -(*(char *)((int)pppppppppppuVar23 + 10) == 'e');
      auVar51[4] = -(*(char *)((int)pppppppppppuVar23 + 0xb) == 'r');
      auVar51[5] = -(*(char *)(pppppppppppuVar23 + 3) == 'l');
      auVar51[6] = -(*(char *)((int)pppppppppppuVar23 + 0xd) == 'y');
      auVar51[7] = -(*(char *)((int)pppppppppppuVar23 + 0xe) == 'i');
      auVar51[8] = -(*(char *)((int)pppppppppppuVar23 + 0xf) == 'n');
      auVar51[9] = -(*(char *)(pppppppppppuVar23 + 4) == 'g');
      auVar51[10] = -(*(char *)((int)pppppppppppuVar23 + 0x11) == '_');
      auVar51[0xb] = -(*(char *)((int)pppppppppppuVar23 + 0x12) == 't');
      auVar51[0xc] = -(*(char *)((int)pppppppppppuVar23 + 0x13) == 'i');
      auVar51[0xd] = -(*(char *)(pppppppppppuVar23 + 5) == 'l');
      auVar51[0xe] = -(*(char *)((int)pppppppppppuVar23 + 0x15) == 'e');
      auVar51[0xf] = -(*(char *)((int)pppppppppppuVar23 + 0x16) == 's');
      auVar49[0] = -(*(char *)pppppppppppuVar23 == 'd');
      auVar49[1] = -(*(char *)((int)pppppppppppuVar23 + 1) == 'e');
      auVar49[2] = -(*(char *)((int)pppppppppppuVar23 + 2) == 'l');
      auVar49[3] = -(*(char *)((int)pppppppppppuVar23 + 3) == 'e');
      auVar49[4] = -(*(char *)(pppppppppppuVar23 + 1) == 't');
      auVar49[5] = -(*(char *)((int)pppppppppppuVar23 + 5) == 'e');
      auVar49[6] = -(*(char *)((int)pppppppppppuVar23 + 6) == '_');
      auVar49[7] = -(*(char *)((int)pppppppppppuVar23 + 7) == 'u');
      auVar49[8] = -(*(char *)(pppppppppppuVar23 + 2) == 'n');
      auVar49[9] = -(*(char *)((int)pppppppppppuVar23 + 9) == 'd');
      auVar49[10] = -(*(char *)((int)pppppppppppuVar23 + 10) == 'e');
      auVar49[0xb] = -(*(char *)((int)pppppppppppuVar23 + 0xb) == 'r');
      auVar49[0xc] = -(*(char *)(pppppppppppuVar23 + 3) == 'l');
      auVar49[0xd] = -(*(char *)((int)pppppppppppuVar23 + 0xd) == 'y');
      auVar49[0xe] = -(*(char *)((int)pppppppppppuVar23 + 0xe) == 'i');
      auVar49[0xf] = -(*(char *)((int)pppppppppppuVar23 + 0xf) == 'n');
      auVar49 = auVar49 & auVar51;
      if ((ushort)((ushort)(SUB161(auVar49 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar49[0xf] >> 7) << 0xf) == 0xffff) {
        if (pppppppppppuVar35 == (ulonglong ***********)0x1) {
          cVar10 = (char)*puVar22;
          if ((cVar10 == '+') || (cVar10 == '-')) goto LAB_10068fab;
        }
        else {
          if (pppppppppppuVar35 == (ulonglong ***********)0x0) goto LAB_100690a5;
          cVar10 = (char)*puVar22;
        }
        pppppppppppuVar35 = (ulonglong ***********)((int)pppppppppppuVar35 - (uint)(cVar10 == '+'));
        pbVar13 = (byte *)((int)puVar22 + (uint)(cVar10 == '+'));
        if (pppppppppppuVar35 < (ulonglong ***********)0x3) {
          if (pppppppppppuVar35 == (ulonglong ***********)0x0) {
            uVar14 = 0;
          }
          else {
            SStack_1d0._0_1_ = '\x01';
            uVar14 = *pbVar13 - 0x30;
            if (9 < uVar14) goto LAB_10068ba6;
            if (pppppppppppuVar35 != (ulonglong ***********)0x1) {
              if (9 < pbVar13[1] - 0x30) goto LAB_10069497;
              uVar14 = (uint)(byte)((char)(pbVar13[1] - 0x30) + (char)uVar14 * '\n');
            }
          }
        }
        else {
          uVar14 = 0;
          pppppppppppuVar39 = pppppppppppuVar35;
          while (bVar45 = pppppppppppuVar39 != (ulonglong ***********)0x0,
                pppppppppppuVar39 = (ulonglong ***********)((int)pppppppppppuVar39 + -1), bVar45) {
            sVar11 = (ushort)(byte)uVar14 * 10;
            bVar27 = *pbVar13;
            if ((char)((ushort)sVar11 >> 8) != '\0') goto LAB_100694a3;
            if (9 < bVar27 - 0x30) goto LAB_10068ba4;
            pbVar13 = pbVar13 + 1;
            bVar9 = (byte)sVar11;
            bVar27 = (byte)(bVar27 - 0x30);
            uVar14 = (uint)(byte)(bVar9 + bVar27);
            SStack_1d0._0_1_ = '\x02';
            if (CARRY1(bVar9,bVar27)) goto LAB_10068ba6;
          }
        }
        *(bool *)(iVar12 + 0x313) = (char)uVar14 != '\0';
        goto LAB_10068b87;
      }
      pppppppppppuStack_208 = (ulonglong ***********)0x17;
      break;
    case (ulonglong ***********)0x19:
      auVar50[0] = -(*(char *)((int)pppppppppppuVar23 + 9) == 'd');
      auVar50[1] = -(*(char *)((int)pppppppppppuVar23 + 10) == 'e');
      auVar50[2] = -(*(char *)((int)pppppppppppuVar23 + 0xb) == 'r');
      auVar50[3] = -(*(char *)(pppppppppppuVar23 + 3) == 'l');
      auVar50[4] = -(*(char *)((int)pppppppppppuVar23 + 0xd) == 'y');
      auVar50[5] = -(*(char *)((int)pppppppppppuVar23 + 0xe) == 'i');
      auVar50[6] = -(*(char *)((int)pppppppppppuVar23 + 0xf) == 'n');
      auVar50[7] = -(*(char *)(pppppppppppuVar23 + 4) == 'g');
      auVar50[8] = -(*(char *)((int)pppppppppppuVar23 + 0x11) == '_');
      auVar50[9] = -(*(char *)((int)pppppppppppuVar23 + 0x12) == 'o');
      auVar50[10] = -(*(char *)((int)pppppppppppuVar23 + 0x13) == 'b');
      auVar50[0xb] = -(*(char *)(pppppppppppuVar23 + 5) == 'j');
      auVar50[0xc] = -(*(char *)((int)pppppppppppuVar23 + 0x15) == 'e');
      auVar50[0xd] = -(*(char *)((int)pppppppppppuVar23 + 0x16) == 'c');
      auVar50[0xe] = -(*(char *)((int)pppppppppppuVar23 + 0x17) == 't');
      auVar50[0xf] = -(*(char *)(pppppppppppuVar23 + 6) == 's');
      auVar46[0] = -(*(char *)pppppppppppuVar23 == 'd');
      auVar46[1] = -(*(char *)((int)pppppppppppuVar23 + 1) == 'e');
      auVar46[2] = -(*(char *)((int)pppppppppppuVar23 + 2) == 'l');
      auVar46[3] = -(*(char *)((int)pppppppppppuVar23 + 3) == 'e');
      auVar46[4] = -(*(char *)(pppppppppppuVar23 + 1) == 't');
      auVar46[5] = -(*(char *)((int)pppppppppppuVar23 + 5) == 'e');
      auVar46[6] = -(*(char *)((int)pppppppppppuVar23 + 6) == '_');
      auVar46[7] = -(*(char *)((int)pppppppppppuVar23 + 7) == 'u');
      auVar46[8] = -(*(char *)(pppppppppppuVar23 + 2) == 'n');
      auVar46[9] = -(*(char *)((int)pppppppppppuVar23 + 9) == 'd');
      auVar46[10] = -(*(char *)((int)pppppppppppuVar23 + 10) == 'e');
      auVar46[0xb] = -(*(char *)((int)pppppppppppuVar23 + 0xb) == 'r');
      auVar46[0xc] = -(*(char *)(pppppppppppuVar23 + 3) == 'l');
      auVar46[0xd] = -(*(char *)((int)pppppppppppuVar23 + 0xd) == 'y');
      auVar46[0xe] = -(*(char *)((int)pppppppppppuVar23 + 0xe) == 'i');
      auVar46[0xf] = -(*(char *)((int)pppppppppppuVar23 + 0xf) == 'n');
      auVar46 = auVar46 & auVar50;
      if ((ushort)((ushort)(SUB161(auVar46 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar46[0xf] >> 7) << 0xf) == 0xffff) {
        if (pppppppppppuVar35 == (ulonglong ***********)0x1) {
          cVar10 = (char)*puVar22;
          if ((cVar10 == '+') || (cVar10 == '-')) goto LAB_10068fab;
        }
        else {
          if (pppppppppppuVar35 == (ulonglong ***********)0x0) goto LAB_100690a5;
          cVar10 = (char)*puVar22;
        }
        pppppppppppuVar35 = (ulonglong ***********)((int)pppppppppppuVar35 - (uint)(cVar10 == '+'));
        pbVar13 = (byte *)((int)puVar22 + (uint)(cVar10 == '+'));
        if (pppppppppppuVar35 < (ulonglong ***********)0x3) {
          if (pppppppppppuVar35 == (ulonglong ***********)0x0) {
            uVar14 = 0;
          }
          else {
            SStack_1d0._0_1_ = '\x01';
            uVar14 = *pbVar13 - 0x30;
            if (9 < uVar14) goto LAB_10068ba6;
            if (pppppppppppuVar35 != (ulonglong ***********)0x1) {
              if (9 < pbVar13[1] - 0x30) goto LAB_10069497;
              uVar14 = (uint)(byte)((char)(pbVar13[1] - 0x30) + (char)uVar14 * '\n');
            }
          }
        }
        else {
          uVar14 = 0;
          pppppppppppuVar39 = pppppppppppuVar35;
          while (bVar45 = pppppppppppuVar39 != (ulonglong ***********)0x0,
                pppppppppppuVar39 = (ulonglong ***********)((int)pppppppppppuVar39 + -1), bVar45) {
            sVar11 = (ushort)(byte)uVar14 * 10;
            bVar27 = *pbVar13;
            if ((char)((ushort)sVar11 >> 8) != '\0') goto LAB_100694a3;
            if (9 < bVar27 - 0x30) goto LAB_10068ba4;
            pbVar13 = pbVar13 + 1;
            bVar9 = (byte)sVar11;
            bVar27 = (byte)(bVar27 - 0x30);
            uVar14 = (uint)(byte)(bVar9 + bVar27);
            SStack_1d0._0_1_ = '\x02';
            if (CARRY1(bVar9,bVar27)) goto LAB_10068ba6;
          }
        }
        *(bool *)(iVar12 + 0x312) = (char)uVar14 != '\0';
        goto LAB_10068b87;
      }
      pppppppppppuStack_208 = (ulonglong ***********)0x19;
    }
    FUN_10110c20(&uStack_1c0,param_2[1],(SIZE_T)param_2[2]);
    pppppppppppuStack_1fc = FUN_10107380(0,(SIZE_T)pppppppppppuStack_208);
    if (pppppppppppuStack_1fc == (ulonglong ***********)0x0) {
LAB_1006b809:
      FUN_101366bc(1);
                    /* WARNING: Does not return */
      pcVar40 = (code *)invalidInstructionException();
      (*pcVar40)();
    }
    memcpy(pppppppppppuStack_1fc,pppppppppppuVar23,(size_t)pppppppppppuStack_208);
    SStack_1d0._0_1_ = extraout_DL_03;
LAB_100695d9:
    pppppppppppuStack_1f0 =
         (ulonglong ***********)
         CONCAT13(uStack_1c0._3_1_,
                  CONCAT12(uStack_1c0._2_1_,CONCAT11(uStack_1c0._1_1_,(char)uStack_1c0)));
    cVar10 = '\a';
    pppppppppppuStack_17c = pppppppppppuStack_1bc;
    pppppppppppuStack_1d8 = pppppppppppuStack_1b8;
    pppppppppppuStack_1f8 = pppppppppppuStack_1b4;
    pppppppppppuStack_150 = pppppppppppuStack_208;
    goto LAB_1006960c;
  }
  if (CONCAT22(uStack_172,CONCAT11(cStack_173,cStack_174)) != 0) {
    pvVar21 = GetProcessHeap();
    HeapFree(pvVar21,0,pppppppppppuVar23);
  }
  CloseHandle(pppppppppppuStack_164);
  iVar17 = FUN_10110f10((byte *)param_2[1],(uint)param_2[2]);
  if (iVar17 != 0) {
    FUN_10110e70((int)param_2,extraout_EDX_01);
  }
  FUN_10111020((uint *)param_2,&DAT_101420ee,8);
  FUN_1011c880((undefined8 *)&pppppppppppuStack_178,(int)param_2[1],(int)param_2[2]);
  pppppppppppuVar39 = pppppppppppuStack_170;
  pppppppppppuVar23 = pppppppppppuStack_178;
  if (pppppppppppuStack_178 == (ulonglong ***********)0xffffffff) {
    uVar18 = CONCAT22(uStack_172,CONCAT11(cStack_173,cStack_174));
    FUN_10110c20((SIZE_T *)&pppppppppppuStack_1b4,param_2[1],(SIZE_T)param_2[2]);
    param_1[3] = uStack_1c0._3_1_;
    *(ushort *)(param_1 + 1) = CONCAT11(uStack_1c0._2_1_,uStack_1c0._1_1_);
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(pppppppppppuStack_1ac,uStack_1b0);
    *(ulonglong *)(param_1 + 0x18) = CONCAT44(pppppppppppuStack_1a4,pppppppppppuStack_1a8);
    *(ulonglong ************)(param_1 + 0x20) = pppppppppppuStack_1a0;
    *param_1 = '\x01';
    *(undefined4 *)(param_1 + 4) = uVar18;
    *(ulonglong ************)(param_1 + 8) = pppppppppppuVar39;
    *(ulonglong ************)(param_1 + 0xc) = pppppppppppuStack_1b4;
    goto LAB_100696c6;
  }
  pppppppppppuStack_1bc = pppppppppppuStack_178;
  pppppppppppuStack_1b8 =
       (ulonglong ***********)
       (CONCAT26(uStack_172,CONCAT15(cStack_173,CONCAT14(cStack_174,pppppppppppuStack_178))) >> 0x20
       );
  pppppppppppuVar39 = pppppppppppuStack_1b8;
  uVar18 = FUN_10064e50(pppppppppppuStack_1b8,(SIZE_T)pppppppppppuStack_170);
  (*(code *)0x407ea8)();
  *(undefined4 *)(iVar12 + 0x2ec) = uVar18;
  if (pppppppppppuVar23 != (ulonglong ***********)0x0) {
    pvVar21 = GetProcessHeap();
    HeapFree(pvVar21,0,pppppppppppuVar39);
  }
  iVar17 = FUN_10110f10((byte *)param_2[1],(uint)param_2[2]);
  if (iVar17 != 0) {
    FUN_10110e70((int)param_2,extraout_EDX_02);
  }
  FUN_10111020((uint *)param_2,&DAT_1014201f,0xd);
  FUN_1011c880((undefined8 *)&pppppppppppuStack_178,(int)param_2[1],(int)param_2[2]);
  pppppppppppuVar39 = pppppppppppuStack_170;
  pppppppppppuVar23 = pppppppppppuStack_178;
  if (pppppppppppuStack_178 == (ulonglong ***********)0xffffffff) {
    uVar18 = CONCAT22(uStack_172,CONCAT11(cStack_173,cStack_174));
    FUN_10110c20((SIZE_T *)&pppppppppppuStack_1b4,param_2[1],(SIZE_T)param_2[2]);
    uStack_144 = CONCAT11(uStack_1c0._2_1_,uStack_1c0._1_1_);
    uStack_48 = CONCAT44(pppppppppppuStack_1ac,uStack_1b0);
    uStack_40 = CONCAT44(pppppppppppuStack_1a4,pppppppppppuStack_1a8);
    cStack_142 = uStack_1c0._3_1_;
    pppppppppppuStack_38 = pppppppppppuStack_1a0;
    cVar10 = '\x01';
    pppppppppppuVar23 = pppppppppppuStack_1b4;
  }
  else {
    pppppppppppuStack_1b8 =
         (ulonglong ***********)CONCAT22(uStack_172,CONCAT11(cStack_173,cStack_174));
    pppppppppppuStack_178 = (ulonglong ***********)0xa;
    pppppppppppuStack_1bc = pppppppppppuVar23;
    pppppppppppuStack_16c = (ulonglong ***********)0x0;
    pppppppppppuStack_168 = pppppppppppuStack_170;
    pppppppppppuStack_164 = (ulonglong ***********)0xa;
    pppppppppppuStack_160 = (ulonglong ***********)CONCAT31(pppppppppppuStack_160._1_3_,1);
    pppppppppppuStack_15c = (ulonglong ***********)0x0;
    pppppppppppuStack_158 = pppppppppppuStack_170;
    pppppppppppuStack_148 = pppppppppppuVar23;
    uStack_154 = (ulonglong ***********)((uint)uStack_154 & 0xffff0000);
    pppppppppppuStack_180 = pppppppppppuStack_1b8;
    do {
      pppppppppppuStack_1f0 = (ulonglong ***********)&DAT_00000004;
      bVar45 = true;
      if (uStack_154._1_1_ != '\0') {
        pppppppppppuStack_208 = (ulonglong ***********)0x0;
        goto LAB_100697f2;
      }
      iVar17 = CONCAT22(uStack_172,CONCAT11(cStack_173,cStack_174));
      pppppppppppuStack_208 = (ulonglong ***********)0x0;
      FUN_10090ba0(&uStack_1c0,(int)&pppppppppppuStack_178);
      if (CONCAT13(uStack_1c0._3_1_,
                   CONCAT12(uStack_1c0._2_1_,CONCAT11(uStack_1c0._1_1_,(char)uStack_1c0))) == 1) {
        iVar42 = (int)pppppppppppuStack_1b8 - (int)pppppppppppuStack_15c;
        pppppppppppuVar23 = pppppppppppuStack_1b8;
      }
      else {
        if (uStack_154._1_1_ != '\0') goto LAB_100697f2;
        uStack_154._0_2_ = CONCAT11(1,(char)uStack_154);
        if (((char)uStack_154 != '\x01') && (pppppppppppuStack_158 == pppppppppppuStack_15c))
        goto LAB_100697f2;
        iVar42 = (int)pppppppppppuStack_158 - (int)pppppppppppuStack_15c;
        iVar17 = CONCAT22(uStack_172,CONCAT11(cStack_173,cStack_174));
        pppppppppppuVar23 = pppppppppppuStack_15c;
      }
      iVar17 = (int)pppppppppppuStack_15c + iVar17;
      iVar31 = iVar42;
      if ((iVar42 != 0) && (*(char *)(iVar17 + -1 + iVar42) == '\n')) {
        iVar31 = iVar42 + -1;
        if (iVar31 == 0) {
          iVar29 = 0;
          iVar42 = -1;
        }
        else {
          iVar29 = iVar17;
          if (*(char *)(iVar17 + -2 + iVar42) != '\r') {
            iVar29 = 0;
          }
          iVar42 = iVar42 + -2;
        }
        if (iVar29 != 0) {
          iVar17 = iVar29;
          iVar31 = iVar42;
        }
      }
      pppppppppppuStack_15c = pppppppppppuVar23;
      if (iVar17 == 0) goto LAB_100697f2;
    } while (iVar31 == 0);
    piVar19 = FUN_10107380(0,0x20);
    pppppppppppuVar39 = uStack_154;
    pppppppppppuVar23 = pppppppppppuStack_168;
    if (piVar19 == (int *)0x0) {
LAB_1006b841:
      FUN_101366bc(4);
                    /* WARNING: Does not return */
      pcVar40 = (code *)invalidInstructionException();
      (*pcVar40)();
    }
    *piVar19 = iVar17;
    piVar19[1] = iVar31;
    uStack_140 = CONCAT44(piVar19,4);
    piStack_14c = piVar19;
    uStack_138 = CONCAT44(uStack_138._4_4_,1);
    pppppppppppuVar35 = (ulonglong ***********)CONCAT22(uStack_172,CONCAT11(cStack_173,cStack_174));
    pppppppppppuStack_1b8 = pppppppppppuStack_170;
    pppppppppppuStack_1b4 = pppppppppppuStack_16c;
    uStack_1c0._0_1_ = (char)pppppppppppuStack_178;
    uStack_1c0._1_1_ = (char)((uint)pppppppppppuStack_178 >> 8);
    uStack_1c0._2_1_ = (undefined1)((uint)pppppppppppuStack_178 >> 0x10);
    uStack_1c0._3_1_ = (char)((uint)pppppppppppuStack_178 >> 0x18);
    uStack_1b0 = pppppppppppuStack_168;
    pppppppppppuStack_1ac = pppppppppppuStack_164;
    pppppppppppuStack_1a8 = pppppppppppuStack_160;
    pppppppppppuStack_1a4 = pppppppppppuStack_15c;
    pppppppppppuStack_1a0 = pppppppppppuStack_158;
    uStack_19c = uStack_154;
    uStack_19c._0_1_ = (byte)uStack_154;
    pppppppppppuStack_17c = pppppppppppuStack_170;
    uStack_19c._1_1_ = (byte)((uint)uStack_154 >> 8);
    pppppppppppuStack_1d4._1_3_ = (undefined3)((uint)pppppppppppuStack_1d4 >> 8);
    pppppppppppuStack_1d4 =
         (ulonglong ***********)CONCAT31(pppppppppppuStack_1d4._1_3_,uStack_19c._1_1_);
    pppppppppppuStack_1bc = pppppppppppuVar35;
    uStack_19c = pppppppppppuVar39;
    if (pppppppppppuStack_170 < pppppppppppuStack_168) {
      iVar42 = (int)pppppppppppuVar35 + (int)pppppppppppuStack_15c;
      iVar29 = (int)pppppppppppuStack_158 - (int)pppppppppppuStack_15c;
      iVar17 = iVar29 + -1;
      iVar31 = iVar29;
      if (((uint)uStack_154 & 1) == 0) {
        if (pppppppppppuStack_158 == pppppppppppuStack_15c) goto LAB_100694db;
        if (iVar17 == 0) {
          pppppppppppuStack_208 = (ulonglong ***********)0x1;
          if ((((uint)uStack_154 & 0x100) == 0) &&
             (*(char *)((int)pppppppppppuVar35 + -1 + (int)pppppppppppuStack_158) != '\n')) {
            pppppppppppuStack_208 = (ulonglong ***********)0x2;
            piVar19[2] = iVar42;
            piVar19[3] = 1;
          }
        }
        else {
          if (((uint)uStack_154 & 0x100) != 0) goto LAB_100697a7;
          if ((*(char *)((int)pppppppppppuVar35 + -1 + (int)pppppppppppuStack_158) == '\n') &&
             (iVar31 = iVar17, *(char *)(iVar42 + -1 + iVar17) == '\r')) {
            iVar31 = iVar29 + -2;
          }
          pppppppppppuStack_208 = (ulonglong ***********)0x1;
          if ((iVar42 != 0) && (iVar31 != 0)) {
            piVar19[2] = iVar42;
            goto LAB_100697cf;
          }
        }
      }
      else if (iVar29 == 0) {
LAB_100694db:
        pppppppppppuStack_208 = (ulonglong ***********)0x1;
      }
      else if (iVar17 == 0) {
        pppppppppppuStack_208 = (ulonglong ***********)0x1;
        if (((uint)uStack_154 & 0x100) == 0) {
          iVar31 = 1;
          if (*(char *)((int)pppppppppppuVar35 + -1 + (int)pppppppppppuStack_158) == '\n')
          goto LAB_100697a7;
LAB_10069797:
          piVar19[2] = iVar42;
LAB_100697cf:
          piVar19[3] = iVar31;
          pppppppppppuStack_208 = (ulonglong ***********)0x2;
        }
      }
      else {
        if (((uint)uStack_154 & 0x100) == 0) {
          if ((*(char *)((int)pppppppppppuVar35 + -1 + (int)pppppppppppuStack_158) == '\n') &&
             (iVar31 = iVar17, *(char *)(iVar42 + -1 + iVar17) == '\r')) {
            iVar31 = iVar29 + -2;
          }
          if (iVar42 != 0) {
            pppppppppppuStack_208 = (ulonglong ***********)0x1;
            if (iVar31 != 0) goto LAB_10069797;
            goto LAB_100697da;
          }
        }
LAB_100697a7:
        pppppppppppuStack_208 = (ulonglong ***********)0x1;
      }
    }
    else {
      pppppppppppuStack_200 = pppppppppppuStack_168;
      pppppppppppuStack_1a8._0_1_ = (byte)pppppppppppuStack_160;
      pppppppppppuVar25 = (ulonglong ***********)((uint)pppppppppppuStack_160 & 0xff);
      pppppppppppuStack_184 = pppppppppppuStack_158;
      pppppppppppuStack_1f8 = pppppppppppuStack_16c;
      if ((byte)pppppppppppuStack_1a8 < 5) {
        pppppppppppuStack_208 = (ulonglong ***********)0x1;
        pppppppppppuStack_94 = pppppppppppuStack_15c;
        pppppppppppuStack_18c = pppppppppppuStack_15c;
        uVar14 = (uint)uStack_19c._1_1_;
        pppppppppppuStack_1fc =
             (ulonglong ***********)CONCAT31(pppppppppppuStack_1fc._1_3_,(byte)uStack_19c);
        pppppppppppuStack_114 = pppppppppppuVar35 + 1;
        while ((uVar14 & 1) == 0) {
          if (pppppppppppuVar23 < pppppppppppuStack_1f8) {
            uStack_19c._0_2_ = CONCAT11(1,(byte)uStack_19c);
            if (((uint)pppppppppppuVar39 & 1) != 0) goto LAB_100691dc;
LAB_100693a1:
            pppppppppppuStack_1d4 = (ulonglong ***********)CONCAT31(pppppppppppuStack_1d4._1_3_,1);
            uVar14 = 1;
            pppppppppppuVar20 = pppppppppppuStack_18c;
            pppppppppppuVar30 = pppppppppppuStack_184;
            if (pppppppppppuStack_184 == pppppppppppuStack_18c) break;
          }
          else {
            bVar27 = *(byte *)((int)&uStack_1b0 + 3 + (int)pppppppppppuVar25);
            pppppppppppuVar20 = pppppppppppuStack_1f8;
            do {
              iVar17 = (int)pppppppppppuVar35 + (int)pppppppppppuVar20;
              pppppppppppuVar30 =
                   (ulonglong ***********)((int)pppppppppppuVar23 - (int)pppppppppppuVar20);
              pppppppppppuStack_1f8 = pppppppppppuVar23;
              if (pppppppppppuVar30 < (ulonglong ***********)0x8) {
                if (pppppppppppuVar23 == pppppppppppuVar20) {
LAB_1006936d:
                  uStack_19c._0_2_ = CONCAT11(1,(byte)uStack_19c);
                  goto joined_r0x1006937c;
                }
                pppppppppppuVar41 = (ulonglong ***********)0x0;
                while (*(byte *)(iVar17 + (int)pppppppppppuVar41) != bVar27) {
                  pppppppppppuVar41 = (ulonglong ***********)((int)pppppppppppuVar41 + 1);
                  if (pppppppppppuVar30 == pppppppppppuVar41) goto LAB_1006936d;
                }
              }
              else {
                pppppppppppuVar36 = (ulonglong ***********)((iVar17 + 3U & 0xfffffffc) - iVar17);
                if (pppppppppppuVar36 == (ulonglong ***********)0x0) {
                  pppppppppppuStack_150 = pppppppppppuVar30;
                  pppppppppppuVar36 = (ulonglong ***********)0x0;
LAB_10069270:
                  pppppppppppuStack_210 = pppppppppppuVar30 + -2;
                  do {
                    uVar14 = *(uint *)((int)pppppppppppuVar20 + (int)pppppppppppuStack_114 + -4 +
                                      (int)pppppppppppuVar36) ^ (uint)bVar27 * 0x1010101;
                    uVar28 = *(uint *)((int)pppppppppppuVar20 + (int)pppppppppppuStack_114 +
                                      (int)pppppppppppuVar36) ^ (uint)bVar27 * 0x1010101;
                    if ((~((0x1010100 - uVar28 | uVar28) & (0x1010100 - uVar14 | uVar14)) &
                        0x80808080) != 0) break;
                    pppppppppppuVar36 = pppppppppppuVar36 + 2;
                  } while (pppppppppppuVar36 <= pppppppppppuStack_210);
                }
                else {
                  pppppppppppuVar41 = (ulonglong ***********)0x0;
                  do {
                    if (*(byte *)(iVar17 + (int)pppppppppppuVar41) == bVar27) goto LAB_1006930c;
                    pppppppppppuVar41 = (ulonglong ***********)((int)pppppppppppuVar41 + 1);
                  } while (pppppppppppuVar36 != pppppppppppuVar41);
                  pppppppppppuStack_150 = pppppppppppuVar30;
                  if (pppppppppppuVar36 <= pppppppppppuVar30 + -2) goto LAB_10069270;
                }
                pppppppppppuStack_150 = pppppppppppuVar30;
                if (pppppppppppuVar30 == pppppppppppuVar36) break;
                iVar42 = 0;
                while (*(byte *)((int)pppppppppppuVar36 + iVar42 + iVar17) != bVar27) {
                  iVar42 = iVar42 + 1;
                  if ((int)pppppppppppuVar23 + (-(int)pppppppppppuVar20 - (int)pppppppppppuVar36) ==
                      iVar42) goto LAB_1006938e;
                }
                pppppppppppuVar41 = (ulonglong ***********)(iVar42 + (int)pppppppppppuVar36);
              }
LAB_1006930c:
              pppppppppppuVar20 =
                   (ulonglong ***********)((int)pppppppppppuVar20 + 1 + (int)pppppppppppuVar41);
              pppppppppppuStack_1f8 = pppppppppppuVar20;
              if ((pppppppppppuVar20 <= pppppppppppuStack_17c &&
                   pppppppppppuVar25 <= pppppppppppuVar20) &&
                 (iVar17 = memcmp((void *)(((int)pppppppppppuVar20 - (int)pppppppppppuVar25) +
                                          (int)pppppppppppuVar35),&pppppppppppuStack_1ac,
                                  (size_t)pppppppppppuVar25), iVar17 == 0)) {
                pppppppppppuStack_1a4 = pppppppppppuVar20;
                uVar14 = 0;
                pppppppppppuStack_94 = pppppppppppuVar20;
                pppppppppppuVar30 = pppppppppppuVar20;
                goto LAB_100693bb;
              }
            } while (pppppppppppuVar20 <= pppppppppppuVar23);
LAB_1006938e:
            uStack_19c._0_2_ = CONCAT11(1,(byte)uStack_19c);
joined_r0x1006937c:
            if (((uint)pppppppppppuVar39 & 1) == 0) goto LAB_100693a1;
LAB_100691dc:
            pppppppppppuStack_1d4 = (ulonglong ***********)CONCAT31(pppppppppppuStack_1d4._1_3_,1);
            uVar14 = 1;
            pppppppppppuVar20 = pppppppppppuStack_18c;
            pppppppppppuVar30 = pppppppppppuStack_184;
          }
LAB_100693bb:
          iVar17 = (int)pppppppppppuVar35 + (int)pppppppppppuStack_18c;
          iVar31 = (int)pppppppppppuVar30 - (int)pppppppppppuStack_18c;
          iVar42 = iVar31;
          if ((iVar31 != 0) &&
             (*(char *)((int)pppppppppppuVar35 + -1 + (int)pppppppppppuVar30) == '\n')) {
            iVar42 = iVar31 + -1;
            if (iVar42 == 0) {
              iVar29 = -1;
              iVar44 = 0;
            }
            else {
              iVar29 = iVar31 + -2;
              iVar44 = 0;
              if (*(char *)(iVar17 + -2 + iVar31) == '\r') {
                iVar44 = iVar17;
              }
            }
            if (iVar44 != 0) {
              iVar42 = iVar29;
              iVar17 = iVar44;
            }
          }
          if (iVar17 == 0) break;
          pppppppppppuStack_18c = pppppppppppuVar20;
          if (iVar42 != 0) {
            if (pppppppppppuStack_208 == (ulonglong ***********)uStack_140) {
              FUN_101359e0((uint *)&uStack_140,(uint)pppppppppppuStack_208,1,&DAT_00000004,8);
              piStack_14c = (int *)uStack_140._4_4_;
            }
            piStack_14c[(int)pppppppppppuStack_208 * 2] = iVar17;
            piStack_14c[(int)pppppppppppuStack_208 * 2 + 1] = iVar42;
            pppppppppppuStack_208 = (ulonglong ***********)((int)pppppppppppuStack_208 + 1);
            uStack_138 = CONCAT44(uStack_138._4_4_,pppppppppppuStack_208);
            pppppppppppuStack_18c = pppppppppppuStack_94;
            uVar14 = (uint)pppppppppppuStack_1d4 & 0xff;
          }
        }
      }
      else {
        iVar17 = (int)pppppppppppuStack_158 - (int)pppppppppppuStack_15c;
        if ((iVar17 == 0 & ((byte)uStack_19c ^ 1)) == 0) {
          if (pppppppppppuStack_158 == pppppppppppuStack_15c) {
            pppppppppppuStack_208 = (ulonglong ***********)0x1;
            if ((((uint)uStack_154 & 0x100) == 0) &&
               (pppppppppppuStack_16c <= pppppppppppuStack_168)) {
              bVar27 = *(byte *)((int)&uStack_1b0 + 3 + (int)pppppppppppuVar25);
              do {
                uVar14 = (int)pppppppppppuVar23 - (int)pppppppppppuStack_1f8;
                if (uVar14 < 8) {
                  uVar28 = 0;
                  if (uVar14 == 0) {
                    lVar53 = 0;
                  }
                  else {
                    do {
                      if (*(byte *)((int)pppppppppppuVar35 + (int)pppppppppppuStack_1f8 + uVar28) ==
                          bVar27) {
                        lVar53 = CONCAT44(uVar28,1);
                        goto LAB_1006b533;
                      }
                      uVar28 = uVar28 + 1;
                    } while (uVar14 != uVar28);
                    lVar53 = (ulonglong)uVar14 << 0x20;
                  }
                }
                else {
                  lVar53 = FUN_100974e0(bVar27,(int)pppppppppppuVar35 + (int)pppppppppppuStack_1f8,
                                        uVar14);
                }
LAB_1006b533:
                if ((int)lVar53 != 1) break;
                pppppppppppuStack_1f8 =
                     (ulonglong ***********)
                     ((int)pppppppppppuStack_1f8 + (int)((ulonglong)lVar53 >> 0x20) + 1);
                if (pppppppppppuVar25 <= pppppppppppuStack_1f8 &&
                    pppppppppppuStack_1f8 <= pppppppppppuStack_17c) {
LAB_1006b856:
                  FUN_10136a50(0,(uint)pppppppppppuVar25,4,
                               &PTR_s_C__Users_runneradmin__rustup_too_10156224);
                    /* WARNING: Does not return */
                  pcVar40 = (code *)invalidInstructionException();
                  (*pcVar40)();
                }
              } while (pppppppppppuStack_1f8 <= pppppppppppuVar23);
            }
          }
          else {
            iVar31 = (int)pppppppppppuStack_15c + (int)pppppppppppuVar35;
            pppppppppppuStack_208 = (ulonglong ***********)0x1;
            iVar42 = iVar17 + -1;
            while (((uint)pppppppppppuStack_1d4 & 1) == 0) {
              if (pppppppppppuStack_1f8 <= pppppppppppuVar23) {
                bVar27 = *(byte *)((int)&uStack_1b0 + 3 + (int)pppppppppppuVar25);
                do {
                  uVar14 = (int)pppppppppppuVar23 - (int)pppppppppppuStack_1f8;
                  if (uVar14 < 8) {
                    uVar28 = 0;
                    if (uVar14 == 0) {
                      lVar53 = 0;
                    }
                    else {
                      do {
                        if (*(byte *)((int)pppppppppppuVar35 + (int)pppppppppppuStack_1f8 + uVar28)
                            == bVar27) {
                          lVar53 = CONCAT44(uVar28,1);
                          goto LAB_1006b71e;
                        }
                        uVar28 = uVar28 + 1;
                      } while (uVar14 != uVar28);
                      lVar53 = (ulonglong)uVar14 << 0x20;
                    }
                  }
                  else {
                    lVar53 = FUN_100974e0(bVar27,(int)pppppppppppuVar35 + (int)pppppppppppuStack_1f8
                                          ,uVar14);
                  }
LAB_1006b71e:
                  if ((int)lVar53 != 1) {
                    pppppppppppuStack_1f8 = pppppppppppuVar23;
                    break;
                  }
                  pppppppppppuStack_1f8 =
                       (ulonglong ***********)
                       ((int)pppppppppppuStack_1f8 + (int)((ulonglong)lVar53 >> 0x20) + 1);
                  if (pppppppppppuVar25 <= pppppppppppuStack_1f8 &&
                      pppppppppppuStack_1f8 <= pppppppppppuStack_17c) goto LAB_1006b856;
                } while (pppppppppppuStack_1f8 <= pppppppppppuVar23);
              }
              uStack_19c._0_2_ = CONCAT11(1,(byte)uStack_19c);
              iVar29 = iVar17;
              iVar44 = iVar31;
              if (*(char *)((int)pppppppppppuVar35 + -1 + (int)pppppppppppuStack_184) == '\n') {
                if (iVar42 == 0) {
                  iVar29 = -1;
                  iVar44 = 0;
                }
                else {
                  iVar29 = iVar17 + -2;
                  iVar44 = 0;
                  if (*(char *)(iVar31 + -1 + iVar42) == '\r') {
                    iVar44 = iVar31;
                  }
                }
                if (iVar44 == 0) {
                  iVar29 = iVar42;
                  iVar44 = iVar31;
                }
              }
              if ((iVar44 == 0) || (iVar29 == 0)) break;
              if (pppppppppppuStack_208 == (ulonglong ***********)uStack_140) {
                FUN_101359e0((uint *)&uStack_140,(uint)pppppppppppuStack_208,1,&DAT_00000004,8);
                piStack_14c = (int *)uStack_140._4_4_;
              }
              pppppppppppuStack_1d4 = (ulonglong ***********)CONCAT31(pppppppppppuStack_1d4._1_3_,1)
              ;
              piStack_14c[(int)pppppppppppuStack_208 * 2] = iVar44;
              piStack_14c[(int)pppppppppppuStack_208 * 2 + 1] = iVar29;
              pppppppppppuStack_208 = (ulonglong ***********)((int)pppppppppppuStack_208 + 1);
              uStack_138 = CONCAT44(uStack_138._4_4_,pppppppppppuStack_208);
            }
          }
        }
        else {
          pppppppppppuStack_208 = (ulonglong ***********)0x1;
          if ((((uint)uStack_154 & 0x100) == 0) && (pppppppppppuStack_16c <= pppppppppppuStack_168))
          {
            bVar27 = *(byte *)((int)&uStack_1b0 + 3 + (int)pppppppppppuVar25);
            do {
              uVar14 = (int)pppppppppppuVar23 - (int)pppppppppppuStack_1f8;
              if (uVar14 < 8) {
                uVar28 = 0;
                if (uVar14 == 0) {
                  lVar53 = 0;
                }
                else {
                  do {
                    if (*(byte *)((int)pppppppppppuVar35 + (int)pppppppppppuStack_1f8 + uVar28) ==
                        bVar27) {
                      lVar53 = CONCAT44(uVar28,1);
                      goto LAB_1006b60c;
                    }
                    uVar28 = uVar28 + 1;
                  } while (uVar14 != uVar28);
                  lVar53 = (ulonglong)uVar14 << 0x20;
                }
              }
              else {
                lVar53 = FUN_100974e0(bVar27,(int)pppppppppppuVar35 + (int)pppppppppppuStack_1f8,
                                      uVar14);
              }
LAB_1006b60c:
              if ((int)lVar53 != 1) break;
              pppppppppppuStack_1f8 =
                   (ulonglong ***********)
                   ((int)pppppppppppuStack_1f8 + (int)((ulonglong)lVar53 >> 0x20) + 1);
              if (pppppppppppuVar25 <= pppppppppppuStack_1f8 &&
                  pppppppppppuStack_1f8 <= pppppppppppuStack_17c) goto LAB_1006b856;
            } while (pppppppppppuStack_1f8 <= pppppppppppuVar23);
          }
        }
      }
    }
LAB_100697da:
    bVar45 = (ulonglong ***********)uStack_140 == (ulonglong ***********)0x0;
    pppppppppppuStack_1f0 = uStack_140._4_4_;
LAB_100697f2:
    FUN_10110c20((SIZE_T *)&pppppppppppuStack_5c,param_2[1],(SIZE_T)param_2[2]);
    FUN_1011b820((int)param_2);
    pbVar13 = (byte *)FUN_10110b00((byte *)param_2[1],(uint)param_2[2]);
    if (pbVar13 == (byte *)0x0) {
      uStack_e8 = 0x100000000;
      pppppppppppuStack_e0 = (ulonglong ***********)0x0;
    }
    else {
      FUN_100935a0((undefined8 *)&uStack_1c0,pbVar13,extraout_EDX_03);
      uStack_e8 = CONCAT44(pppppppppppuStack_1bc,
                           CONCAT13(uStack_1c0._3_1_,
                                    CONCAT12(uStack_1c0._2_1_,
                                             CONCAT11(uStack_1c0._1_1_,(char)uStack_1c0))));
      pppppppppppuStack_e0 = pppppppppppuStack_1b8;
    }
    uStack_f8 = CONCAT44(uStack_f8._4_4_,&pppppppppppuStack_5c);
    uStack_104 = _DAT_0077f2e0 + 1;
    puVar22 = FUN_10093010();
    if (puVar22 == (uint *)0x0) {
      FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
      pcVar40 = (code *)invalidInstructionException();
      (*pcVar40)();
    }
    puVar5 = (undefined8 *)*puVar22;
    pppppppppppuVar23 = (ulonglong ***********)puVar22[1];
    pppppppppppuVar39 = (ulonglong ***********)puVar22[2];
    uVar14 = puVar22[3];
    puVar22[1] = puVar22[1] + (uint)((undefined8 *)0xfffffffe < puVar5);
    *puVar22 = (int)puVar5 + 1;
    FUN_10003280((undefined8 *)&uStack_1c0,4,(uint)pppppppppppuStack_208);
    uStack_130 = CONCAT44(pppppppppppuStack_1b4,pppppppppppuStack_1b8);
    uStack_138 = CONCAT44(pppppppppppuStack_1bc,
                          CONCAT13(uStack_1c0._3_1_,
                                   CONCAT12(uStack_1c0._2_1_,
                                            CONCAT11(uStack_1c0._1_1_,(char)uStack_1c0))));
    SStack_1d0 = (int)pppppppppppuStack_208 << 5;
    uStack_140 = uStack_140 & 0xffffffffffffff00;
    puStack_128 = puVar5;
    pppppppppppuStack_124 = pppppppppppuVar23;
    pppppppppppuStack_120 = pppppppppppuVar39;
    uStack_11c = uVar14;
    if ((ulonglong ***********)0x7ffffff < pppppppppppuStack_208 || 0x7ffffff8 < SStack_1d0) {
LAB_10069912:
      FUN_101367b0();
                    /* WARNING: Does not return */
      pcVar40 = (code *)invalidInstructionException();
      (*pcVar40)();
    }
    if (SStack_1d0 == 0) {
      pppppppppppuStack_210 = (ulonglong ***********)&DAT_00000008;
      pppppppppppuStack_1f8 = (ulonglong ***********)0x0;
    }
    else {
      pppppppppppuStack_210 = FUN_10107380(0,SStack_1d0);
      if (pppppppppppuStack_210 == (ulonglong ***********)0x0) {
        FUN_101366bc(8);
                    /* WARNING: Does not return */
        pcVar40 = (code *)invalidInstructionException();
        (*pcVar40)();
      }
      pppppppppppuStack_1f8 = pppppppppppuStack_208;
    }
    pppppppppppuVar23 = pppppppppppuStack_210;
    if (pppppppppppuStack_208 < (ulonglong ***********)0x2) {
      if (pppppppppppuStack_208 != (ulonglong ***********)0x0) goto LAB_100699a1;
    }
    else {
      iVar17 = (int)pppppppppppuStack_208 + -1;
      do {
        pppppppppppuVar23[7] = (ulonglong **********)0xffffffff;
        pppppppppppuVar23[6] = (ulonglong **********)0x0;
        pppppppppppuVar23[5] = (ulonglong **********)0x0;
        pppppppppppuVar23[4] = (ulonglong **********)0x0;
        pppppppppppuVar23[3] = (ulonglong **********)0x3ff00000;
        pppppppppppuVar23[2] = (ulonglong **********)0x0;
        pppppppppppuVar23[1] = (ulonglong **********)0x3ff00000;
        *pppppppppppuVar23 = (ulonglong **********)0x0;
        pppppppppppuVar23 = pppppppppppuVar23 + 8;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
LAB_100699a1:
      pppppppppppuVar23[7] = (ulonglong **********)0xffffffff;
      pppppppppppuVar23[6] = (ulonglong **********)0x0;
      pppppppppppuVar23[5] = (ulonglong **********)0x0;
      pppppppppppuVar23[4] = (ulonglong **********)0x0;
      pppppppppppuVar23[3] = (ulonglong **********)0x3ff00000;
      pppppppppppuVar23[2] = (ulonglong **********)0x0;
      pppppppppppuVar23[1] = (ulonglong **********)0x3ff00000;
      *pppppppppppuVar23 = (ulonglong **********)0x0;
    }
    *(ulonglong ************)(iVar12 + 0x2f0) = pppppppppppuStack_208;
    (*(code *)0x409be0)(pppppppppppuStack_208);
    pppppppppppuVar23 = *(ulonglong ************)(iVar12 + 0x2f4);
    if (pppppppppppuVar23 == (ulonglong ***********)0x0) {
      pppppppppppuVar23 = (ulonglong ***********)&DAT_00000004;
      pppppppppppuVar39 = (ulonglong ***********)0x0;
    }
    else {
      pppppppppppuVar39 = (ulonglong ***********)pppppppppppuVar23[-1];
    }
    if (pppppppppppuVar39 < pppppppppppuStack_208) {
      FUN_10136a50(0,(uint)pppppppppppuStack_208,(uint)pppppppppppuVar39,&DAT_10141db8);
                    /* WARNING: Does not return */
      pcVar40 = (code *)invalidInstructionException();
      (*pcVar40)();
    }
    pppppppppppuStack_1a8 = (ulonglong ***********)&uStack_f8;
    uStack_1c0._0_1_ = (char)pppppppppppuVar23;
    uStack_1c0._1_1_ = (char)((uint)pppppppppppuVar23 >> 8);
    uStack_1c0._2_1_ = (undefined1)((uint)pppppppppppuVar23 >> 0x10);
    uStack_1c0._3_1_ = (char)((uint)pppppppppppuVar23 >> 0x18);
    pppppppppppuStack_1bc = pppppppppppuStack_208;
    uStack_84 = CONCAT44(pppppppppppuStack_208,pppppppppppuVar23);
    ppppppppppuStack_c4 = (ulonglong **********)((uint)ppppppppppuStack_c4 & 0xffffff00);
    pppppppppppuStack_1b8 = pppppppppppuStack_1f0;
    pppppppppppuStack_1b4 = pppppppppppuStack_208;
    uStack_1b0 = pppppppppppuStack_210;
    pppppppppppuStack_1ac = pppppppppppuStack_208;
    pppppppppppuStack_7c = pppppppppppuStack_1f0;
    pppppppppppuStack_78 = pppppppppppuStack_208;
    uStack_74 = 0;
    pppppppppppuStack_70 = pppppppppppuStack_210;
    pppppppppppuStack_6c = pppppppppppuStack_208;
    pppppppppppuStack_1a4 = pppppppppppuStack_188;
    pppppppppppuStack_1a0 = (ulonglong ***********)&uStack_e8;
    puStack_198 = &uStack_104;
    pppppppppppuStack_164 = (ulonglong ***********)&uStack_d1;
    pppppppppppuStack_15c = &ppppppppppuStack_c4;
    pppppppppppuStack_158 = (ulonglong ***********)&pppppppppppuStack_1a8;
    uStack_154 = pppppppppppuStack_208;
    cStack_174 = (char)pppppppppppuStack_208;
    cStack_173 = (char)((uint)pppppppppppuStack_208 >> 8);
    uStack_172 = (undefined2)((uint)pppppppppppuStack_208 >> 0x10);
    pppppppppppuStack_170 = pppppppppppuStack_1f0;
    pppppppppppuStack_16c = pppppppppppuStack_208;
    ppppppuStack_194 = param_2;
    pppppppppppuStack_168 = (ulonglong ***********)0x0;
    uStack_19c = (ulonglong ***********)&uStack_140;
    pppppppppppuStack_178 = pppppppppppuVar23;
    pppppppppppuStack_160 = pppppppppppuStack_164;
    uVar14 = FUN_100c07c0();
    FUN_10024be0(&uStack_b8,(uint)pppppppppppuStack_208,'\0',uVar14,1,(int *)&uStack_84,
                 (undefined8 *)&pppppppppppuStack_164);
    cVar10 = (char)uStack_b8;
    if ((char)uStack_b8 == -1) {
      if (DAT_10163248 == 0) {
        FUN_10136b20(&PTR_s_src_load_rs_1014202c);
                    /* WARNING: Does not return */
        pcVar40 = (code *)invalidInstructionException();
        (*pcVar40)();
      }
      if (DAT_10163250 < pppppppppppuStack_208) {
        FUN_10133d90((uint)pppppppppppuStack_208);
      }
      iVar17 = 4;
      if (*(int *)(iVar12 + 0x2f4) != 0) {
        iVar17 = *(int *)(iVar12 + 0x2f4);
      }
      if (*(int *)(iVar12 + 0x2f0) != 0) {
        puVar22 = (uint *)(iVar17 + 0xc);
        iVar17 = *(int *)(iVar12 + 0x2f0) * 0x18;
        SVar8 = SStack_1d0;
        pppppppppppuVar23 = pppppppppppuStack_210;
        do {
          SVar37 = SVar8;
          if (SVar37 == 0) break;
          uStack_a0 = *(undefined8 *)(pppppppppppuVar23 + 6);
          pppppppppppuStack_1a4 = (ulonglong ***********)uStack_a0;
          pppppppppppuStack_1a0 = (ulonglong ***********)((ulonglong)uStack_a0 >> 0x20);
          uStack_a8 = *(undefined8 *)(pppppppppppuVar23 + 4);
          pppppppppppuStack_1ac = (ulonglong ***********)uStack_a8;
          pppppppppppuStack_1a8 = (ulonglong ***********)((ulonglong)uStack_a8 >> 0x20);
          uStack_b8 = *(undefined8 *)pppppppppppuVar23;
          uStack_b0 = *(longlong *)(pppppppppppuVar23 + 2);
          pppppppppppuVar23 = pppppppppppuVar23 + 8;
          pppppppppppuStack_1b4 = (ulonglong ***********)uStack_b0;
          uStack_1b0 = (ulonglong ***********)((ulonglong)uStack_b0 >> 0x20);
          pppppppppppuStack_1bc = (ulonglong ***********)uStack_b8;
          pppppppppppuStack_1b8 = (ulonglong ***********)((ulonglong)uStack_b8 >> 0x20);
          pppppppppppuStack_160 = pppppppppppuStack_1a8;
          pppppppppppuStack_15c = pppppppppppuStack_1a4;
          pppppppppppuStack_158 = pppppppppppuStack_1a0;
          pppppppppppuStack_170 = pppppppppppuStack_1b8;
          pppppppppppuStack_16c = pppppppppppuStack_1b4;
          pppppppppppuStack_168 = uStack_1b0;
          pppppppppppuStack_164 = pppppppppppuStack_1ac;
          pppppppppppuStack_178 =
               (ulonglong ***********)
               CONCAT13(uStack_1c0._3_1_,
                        CONCAT12(uStack_1c0._2_1_,CONCAT11(uStack_1c0._1_1_,(char)uStack_1c0)));
          cStack_174 = (char)uStack_b8;
          cStack_173 = (char)((ulonglong)uStack_b8 >> 8);
          uStack_172 = (undefined2)((ulonglong)uStack_b8 >> 0x10);
          FUN_1004cb50(&uStack_1c0,*puVar22,&uStack_b8);
          puVar22 = puVar22 + 6;
          iVar17 = iVar17 + -0x18;
          SVar8 = SVar37 - 0x20;
          SStack_1d0 = SVar37;
        } while (iVar17 != 0);
      }
      _DAT_0077f2e0 = _DAT_0077f2e0 + (int)pppppppppppuStack_208;
      if (pppppppppppuStack_1f8 != (ulonglong ***********)0x0) {
        pvVar21 = GetProcessHeap();
        HeapFree(pvVar21,0,pppppppppppuStack_210);
      }
      if ((uStack_138._4_4_ != 0) &&
         (uVar14 = uStack_138._4_4_ * 4 + 0x13U & 0xfffffff0, uStack_138._4_4_ + uVar14 != -0x11)) {
        pvVar2 = *(LPVOID *)(((int)(ulonglong ***********)uStack_138 - uVar14) + -4);
        pvVar21 = GetProcessHeap();
        HeapFree(pvVar21,0,pvVar2);
      }
      if (0 < (int)(ulonglong **********)uStack_e8) {
        pvVar2 = uStack_e8._4_4_;
        pvVar21 = GetProcessHeap();
        HeapFree(pvVar21,0,pvVar2);
      }
      pppppppppppuVar23 = pppppppppppuStack_58;
      if (pppppppppppuStack_5c != (ulonglong ***********)0x0) {
        pvVar21 = GetProcessHeap();
        HeapFree(pvVar21,0,pppppppppppuVar23);
      }
      if (!bVar45) {
        pvVar21 = GetProcessHeap();
        HeapFree(pvVar21,0,pppppppppppuStack_1f0);
      }
      if (pppppppppppuStack_148 != (ulonglong ***********)0x0) {
        pvVar21 = GetProcessHeap();
        HeapFree(pvVar21,0,pppppppppppuStack_180);
      }
      uStack_110 = 0;
      puStack_10c = &DAT_00000004;
      uStack_108 = 0;
      FUN_10111020((uint *)param_2,(byte *)"layers.txt",10);
      FUN_1006b940((undefined1 *)&uStack_1c0,param_2[1],(SIZE_T)param_2[2]);
      pppppppppppuVar35 = pppppppppppuStack_1b4;
      pppppppppppuVar39 = pppppppppppuStack_1b8;
      pppppppppppuVar23 = pppppppppppuStack_1bc;
      if ((char)uStack_1c0 == -1) {
        uStack_30 = CONCAT44(pppppppppppuStack_1ac,uStack_1b0);
        pppppppppppuStack_28 = pppppppppppuStack_1a8;
        FUN_1011b820((int)param_2);
        if (DAT_10163248 == 0) {
          FUN_10136b20(&PTR_s_src_load_rs_10141ec8);
                    /* WARNING: Does not return */
          pcVar40 = (code *)invalidInstructionException();
          (*pcVar40)();
        }
        uStack_84 = CONCAT44(pppppppppppuVar39,pppppppppppuVar23);
        uVar14 = 0;
        pppppppppppuStack_7c = pppppppppppuVar35;
        pppppppppppuStack_78 = (ulonglong ***********)uStack_30;
        uStack_74 = uStack_30._4_4_;
        pppppppppppuStack_70 = pppppppppppuStack_28;
LAB_1006a012:
        pppppppppppuStack_208._0_1_ =
             FUN_10090ef0((undefined8 *)&ppppppppppuStack_c4,(int *)&uStack_84);
        pppppppppppuVar23 = pppppppppppuStack_c0;
        ppppppppppuVar43 = ppppppppppuStack_c4;
        if (ppppppppppuStack_c4 == (ulonglong **********)0xfffffffe) {
          if (uStack_84._4_4_ != 0) {
            pvVar2 = (LPVOID)uStack_84;
            pvVar21 = GetProcessHeap();
            HeapFree(pvVar21,0,pvVar2);
          }
          CloseHandle(pppppppppppuStack_70);
          uStack_20 = CONCAT44(puStack_10c,uStack_110);
          uStack_18 = uVar14;
          FUN_10053270(iVar12,(int *)&uStack_20);
          (*(code *)0x657b48)();
          *(int *)(param_1 + 4) = iVar12;
          *param_1 = -1;
          if ((int)uStack_d0 < 1) {
            return param_1;
          }
          pvVar2 = uStack_d0._4_4_;
          pvVar21 = GetProcessHeap();
          HeapFree(pvVar21,0,pvVar2);
          return param_1;
        }
        pppppppppppuStack_1f0 = pppppppppppuStack_c0;
        if (ppppppppppuStack_c4 == (ulonglong **********)0xffffffff) {
          cVar10 = '\0';
          pppppppppppuStack_1fc = pppppppppppuStack_bc;
          goto LAB_1006b14b;
        }
        if (pppppppppppuStack_bc == (ulonglong ***********)0x0) goto LAB_1006b109;
        cVar10 = *(char *)pppppppppppuStack_c0;
        pppppppppppuVar39 = pppppppppppuStack_c0;
        if (pppppppppppuStack_bc == (ulonglong ***********)0x1) {
          if ((cVar10 == '+') || (cVar10 == '-')) {
LAB_1006b128:
            pppppppppppuStack_208._0_1_ = '\x01';
LAB_1006b12a:
            cVar10 = '\t';
            if (ppppppppppuStack_c4 != (ulonglong **********)0x0) {
              pvVar21 = GetProcessHeap();
              HeapFree(pvVar21,0,pppppppppppuStack_c0);
            }
            goto LAB_1006b14b;
          }
          pppppppppppuVar35 = (ulonglong ***********)0x1;
LAB_1006a093:
          ppppppppppuVar32 = (ulonglong **********)0x0;
          do {
            bVar27 = *(byte *)pppppppppppuVar39;
            if (9 < bVar27 - 0x30) goto LAB_1006b128;
            pppppppppppuVar39 = (ulonglong ***********)((int)pppppppppppuVar39 + 1);
            pppppppppppuVar35 = (ulonglong ***********)((int)pppppppppppuVar35 + -1);
            ppppppppppuVar32 = (ulonglong **********)((bVar27 - 0x30) + (int)ppppppppppuVar32 * 10);
          } while (pppppppppppuVar35 != (ulonglong ***********)0x0);
        }
        else if (cVar10 == '-') {
          if (&DAT_00000008 < pppppppppppuStack_bc) {
            iVar17 = (int)pppppppppppuStack_bc + -1;
            ppppppppppuVar32 = (ulonglong **********)0x0;
LAB_1006a113:
            pppppppppppuVar39 = (ulonglong ***********)((int)pppppppppppuVar39 + 1);
            iVar42 = (int)((longlong)(int)ppppppppppuVar32 * 10);
            if ((longlong)iVar42 != (longlong)(int)ppppppppppuVar32 * 10) {
              cVar10 = '\x03';
LAB_1006b64b:
              pppppppppppuStack_208._0_1_ = '\x01';
              if ((byte)(*(byte *)pppppppppppuVar39 - 0x30) < 10) {
                pppppppppppuStack_208._0_1_ = cVar10;
              }
              goto LAB_1006b12a;
            }
            uVar14 = *(byte *)pppppppppppuVar39 - 0x30;
            if (9 < uVar14) goto LAB_1006b128;
            ppppppppppuVar32 = (ulonglong **********)(iVar42 - uVar14);
            if (!SBORROW4(iVar42,uVar14)) goto code_r0x1006a133;
            pppppppppppuStack_208._0_1_ = '\x03';
            goto LAB_1006b12a;
          }
          ppppppppppuVar32 = (ulonglong **********)0x0;
          pppppppppppuVar39 = (ulonglong ***********)0x1;
          do {
            uVar14 = *(byte *)((int)pppppppppppuStack_c0 + (int)pppppppppppuVar39) - 0x30;
            if (9 < uVar14) goto LAB_1006b128;
            pppppppppppuVar39 = (ulonglong ***********)((int)pppppppppppuVar39 + 1);
            ppppppppppuVar32 = (ulonglong **********)((int)ppppppppppuVar32 * 10 - uVar14);
          } while (pppppppppppuStack_bc != pppppppppppuVar39);
        }
        else {
          pppppppppppuVar35 = pppppppppppuStack_bc;
          if (cVar10 == '+') {
            pppppppppppuVar35 = (ulonglong ***********)((int)pppppppppppuStack_bc + -1);
            pppppppppppuVar39 = (ulonglong ***********)((int)pppppppppppuStack_c0 + 1);
          }
          if (pppppppppppuVar35 < &DAT_00000008) goto LAB_1006a093;
          ppppppppppuVar32 = (ulonglong **********)0x0;
          do {
            iVar17 = (int)((longlong)(int)ppppppppppuVar32 * 10);
            if ((longlong)iVar17 != (longlong)(int)ppppppppppuVar32 * 10) {
              cVar10 = '\x02';
              goto LAB_1006b64b;
            }
            uVar14 = *(byte *)pppppppppppuVar39 - 0x30;
            if (9 < uVar14) goto LAB_1006b128;
            ppppppppppuVar32 = (ulonglong **********)(iVar17 + uVar14);
            if (SCARRY4(iVar17,uVar14)) {
              pppppppppppuStack_208._0_1_ = '\x02';
              goto LAB_1006b12a;
            }
            pppppppppppuVar39 = (ulonglong ***********)((int)pppppppppppuVar39 + 1);
            pppppppppppuVar35 = (ulonglong ***********)((int)pppppppppppuVar35 + -1);
          } while (pppppppppppuVar35 != (ulonglong ***********)0x0);
        }
LAB_1006a137:
        ppppppppppuStack_8c = ppppppppppuVar32;
        FUN_10111020((uint *)param_2,(byte *)pppppppppppuStack_c0,(uint)pppppppppppuStack_bc);
        if (ppppppppppuVar43 != (ulonglong **********)0x0) {
          pvVar21 = GetProcessHeap();
          HeapFree(pvVar21,0,pppppppppppuVar23);
        }
        FUN_10110c70((uint *)param_2,"txt",3);
        pbVar13 = (byte *)FUN_10110f10((byte *)param_2[1],(uint)param_2[2]);
        if ((pbVar13 == (byte *)0x0) ||
           (pbVar13 = (byte *)FUN_10110b00(pbVar13,extraout_EDX_04), pbVar13 == (byte *)0x0)) {
          uStack_f8 = 0x100000000;
          pppppppppppuStack_f0 = (ulonglong ***********)0x0;
        }
        else {
          FUN_100935a0((undefined8 *)&uStack_1c0,pbVar13,extraout_EDX_05);
          uStack_f8 = CONCAT44(pppppppppppuStack_1bc,
                               CONCAT13(uStack_1c0._3_1_,
                                        CONCAT12(uStack_1c0._2_1_,
                                                 CONCAT11(uStack_1c0._1_1_,(char)uStack_1c0))));
          pppppppppppuStack_f0 = pppppppppppuStack_1b8;
        }
        FUN_1011c880((undefined8 *)&pppppppppppuStack_178,(int)param_2[1],(int)param_2[2]);
        pppppppppppuVar23 = pppppppppppuStack_178;
        if (pppppppppppuStack_178 == (ulonglong ***********)0xffffffff) {
          pppppppppppuStack_1f0 =
               (ulonglong ***********)CONCAT22(uStack_172,CONCAT11(cStack_173,cStack_174));
          pppppppppppuStack_1fc = pppppppppppuStack_170;
          FUN_10110c20((SIZE_T *)&pppppppppppuStack_1b4,param_2[1],(SIZE_T)param_2[2]);
          uStack_68 = CONCAT44(pppppppppppuStack_1ac,uStack_1b0);
          SStack_1d0._0_2_ = CONCAT11(uStack_1c0._3_1_,uStack_1c0._2_1_);
          pppppppppppuStack_1d4 = pppppppppppuStack_1b4;
          pppppppppppuStack_60 = pppppppppppuStack_1a8;
          pppppppppppuStack_184 = pppppppppppuStack_1a0;
          pppppppppppuStack_200 = pppppppppppuStack_1a4;
          cVar10 = '\x01';
          pppppppppppuStack_208._0_1_ = uStack_1c0._1_1_;
          goto LAB_1006b415;
        }
        uVar6 = CONCAT14(cStack_174,pppppppppppuStack_178);
        pppppppppppuStack_178 = (ulonglong ***********)0xa;
        pppppppppppuStack_1b4 = pppppppppppuStack_170;
        pppppppppppuStack_1bc = pppppppppppuVar23;
        pppppppppppuStack_1b8 =
             (ulonglong ***********)(CONCAT26(uStack_172,CONCAT15(cStack_173,uVar6)) >> 0x20);
        pppppppppppuStack_16c = (ulonglong ***********)0x0;
        pppppppppppuStack_168 = pppppppppppuStack_170;
        pppppppppppuStack_164 = (ulonglong ***********)0xa;
        pppppppppppuStack_160 = (ulonglong ***********)CONCAT31(pppppppppppuStack_160._1_3_,1);
        pppppppppppuStack_15c = (ulonglong ***********)0x0;
        pppppppppppuStack_158 = pppppppppppuStack_170;
        pppppppppppuStack_148 = pppppppppppuStack_1b8;
        uStack_154 = (ulonglong ***********)((uint)uStack_154 & 0xffff0000);
        do {
          if (uStack_154._1_1_ != '\0') {
LAB_1006a482:
            ppppppppppuStack_d8 = (ulonglong **********)param_2;
            pppppppppppuStack_1fc = (ulonglong ***********)0x0;
            pppppppppppuStack_188 = (ulonglong ***********)&DAT_00000004;
            pppppppppppuVar39 = (ulonglong ***********)&DAT_00000008;
            pppppppppppuStack_18c = (ulonglong ***********)CONCAT31(pppppppppppuStack_18c._1_3_,1);
            bVar45 = true;
            ppppppppppuStack_88 = (ulonglong **********)(_DAT_0077f2e4 + 1);
            goto LAB_1006a4af;
          }
          iVar17 = CONCAT22(uStack_172,CONCAT11(cStack_173,cStack_174));
          FUN_10090ba0(&uStack_1c0,(int)&pppppppppppuStack_178);
          pppppppppppuVar39 = pppppppppppuStack_15c;
          if (CONCAT13(uStack_1c0._3_1_,
                       CONCAT12(uStack_1c0._2_1_,CONCAT11(uStack_1c0._1_1_,(char)uStack_1c0))) != 1)
          {
            if (uStack_154._1_1_ == '\0') {
              uStack_154._0_2_ = CONCAT11(1,(char)uStack_154);
              if (((char)uStack_154 == '\x01') || (pppppppppppuStack_158 != pppppppppppuStack_15c))
              {
                ppppppppppuVar43 =
                     (ulonglong **********)((int)pppppppppppuStack_158 - (int)pppppppppppuStack_15c)
                ;
                iVar17 = CONCAT22(uStack_172,CONCAT11(cStack_173,cStack_174));
                goto LAB_1006a322;
              }
            }
            goto LAB_1006a482;
          }
          pppppppppppuStack_15c = pppppppppppuStack_1b8;
          ppppppppppuVar43 =
               (ulonglong **********)((int)pppppppppppuStack_1b8 - (int)pppppppppppuVar39);
LAB_1006a322:
          ppppppppppuVar32 = (ulonglong **********)(iVar17 + (int)pppppppppppuVar39);
          ppppppppppuVar24 = ppppppppppuVar43;
          if ((ppppppppppuVar43 != (ulonglong **********)0x0) &&
             (*(char *)((int)ppppppppppuVar32 + -1 + (int)ppppppppppuVar43) == '\n')) {
            ppppppppppuVar24 = (ulonglong **********)((int)ppppppppppuVar43 + -1);
            if (ppppppppppuVar24 == (ulonglong **********)0x0) {
              ppppppppppuVar33 = (ulonglong **********)0x0;
              ppppppppppuVar43 = (ulonglong **********)0xffffffff;
            }
            else {
              ppppppppppuVar33 = ppppppppppuVar32;
              if (*(char *)((int)ppppppppppuVar32 + -2 + (int)ppppppppppuVar43) != '\r') {
                ppppppppppuVar33 = (ulonglong **********)0x0;
              }
              ppppppppppuVar43 = (ulonglong **********)((int)ppppppppppuVar43 + -2);
            }
            if (ppppppppppuVar33 != (ulonglong **********)0x0) {
              ppppppppppuVar32 = ppppppppppuVar33;
              ppppppppppuVar24 = ppppppppppuVar43;
            }
          }
          if (ppppppppppuVar32 == (ulonglong **********)0x0) goto LAB_1006a482;
        } while (ppppppppppuVar24 == (ulonglong **********)0x0);
        pppppppppppuVar25 = FUN_10107380(0,0x20);
        pppppppppppuVar30 = uStack_154;
        pppppppppppuVar20 = pppppppppppuStack_158;
        pppppppppppuVar35 = pppppppppppuStack_168;
        pppppppppppuVar39 = pppppppppppuStack_170;
        if (pppppppppppuVar25 != (ulonglong ***********)0x0) {
          *pppppppppppuVar25 = ppppppppppuVar32;
          pppppppppppuVar25[1] = ppppppppppuVar24;
          uStack_140 = CONCAT44(pppppppppppuVar25,4);
          pppppppppppuStack_188 = pppppppppppuVar25;
          uStack_138 = CONCAT44(uStack_138._4_4_,1);
          pppppppppppuStack_1b8 = pppppppppppuStack_170;
          pppppppppppuStack_1b4 = pppppppppppuStack_16c;
          uStack_1c0._0_1_ = (char)pppppppppppuStack_178;
          uStack_1c0._1_1_ = (char)((uint)pppppppppppuStack_178 >> 8);
          uStack_1c0._2_1_ = (undefined1)((uint)pppppppppppuStack_178 >> 0x10);
          uStack_1c0._3_1_ = (char)((uint)pppppppppppuStack_178 >> 0x18);
          pppppppppppuStack_1bc =
               (ulonglong ***********)
               (CONCAT26(uStack_172,CONCAT15(cStack_173,CONCAT14(cStack_174,pppppppppppuStack_178)))
               >> 0x20);
          pppppppppppuVar36 = pppppppppppuStack_1bc;
          uStack_1b0 = pppppppppppuStack_168;
          pppppppppppuStack_1ac = pppppppppppuStack_164;
          pppppppppppuStack_1a8 = pppppppppppuStack_160;
          pppppppppppuStack_1a4 = pppppppppppuStack_15c;
          pppppppppppuStack_1a0 = pppppppppppuStack_158;
          uStack_19c = uStack_154;
          uStack_19c._0_1_ = (byte)uStack_154;
          pppppppppppuStack_1d4 =
               (ulonglong ***********)CONCAT31(pppppppppppuStack_1d4._1_3_,(byte)uStack_19c);
          uStack_19c._1_1_ = (byte)((uint)uStack_154 >> 8);
          pppppppppppuStack_1d8 = (ulonglong ***********)(uint)uStack_19c._1_1_;
          pppppppppppuStack_200 = pppppppppppuStack_158;
          uStack_19c = pppppppppppuVar30;
          if (pppppppppppuStack_170 < pppppppppppuStack_168) {
            ppppppppppuVar24 =
                 (ulonglong **********)((int)pppppppppppuStack_158 - (int)pppppppppppuStack_15c);
            ppppppppppuVar32 =
                 (ulonglong **********)((int)pppppppppppuStack_1bc + (int)pppppppppppuStack_15c);
            ppppppppppuVar43 = (ulonglong **********)((int)ppppppppppuVar24 + -1);
            if (((uint)uStack_154 & 1) == 0) {
              if (pppppppppppuStack_158 == pppppppppppuStack_15c) goto LAB_1006a8d3;
              if (ppppppppppuVar43 != (ulonglong **********)0x0) goto LAB_1006a8e7;
              pppppppppppuStack_1fc = (ulonglong ***********)0x1;
              if ((((uint)uStack_154 & 0x100) == 0) &&
                 (*(char *)((int)pppppppppppuStack_1bc + -1 + (int)pppppppppppuStack_158) != '\n'))
              {
                pppppppppppuStack_1fc = (ulonglong ***********)0x2;
                pppppppppppuVar25[2] = ppppppppppuVar32;
                pppppppppppuVar25[3] = (ulonglong **********)0x1;
              }
            }
            else if (ppppppppppuVar24 == (ulonglong **********)0x0) {
LAB_1006a8d3:
              pppppppppppuStack_1fc = (ulonglong ***********)0x1;
            }
            else if (ppppppppppuVar43 == (ulonglong **********)0x0) {
              pppppppppppuStack_1fc = (ulonglong ***********)0x1;
              if (((uint)uStack_154 & 0x100) == 0) {
                ppppppppppuVar33 = (ulonglong **********)0x1;
                if (*(char *)((int)pppppppppppuStack_1bc + -1 + (int)pppppppppppuStack_158) == '\n')
                {
                  pppppppppppuStack_1fc = (ulonglong ***********)0x1;
                }
                else {
LAB_1006a920:
                  pppppppppppuStack_1fc = (ulonglong ***********)0x2;
                  pppppppppppuVar25[2] = ppppppppppuVar32;
                  pppppppppppuVar25[3] = ppppppppppuVar33;
                }
              }
            }
            else {
LAB_1006a8e7:
              pppppppppppuStack_1fc = (ulonglong ***********)0x1;
              if (((uint)uStack_154 & 0x100) == 0) {
                ppppppppppuVar33 = ppppppppppuVar24;
                if ((*(char *)((int)pppppppppppuStack_1bc + -1 + (int)pppppppppppuStack_158) == '\n'
                    ) && (ppppppppppuVar33 = ppppppppppuVar43,
                         *(char *)((int)ppppppppppuVar32 + -1 + (int)ppppppppppuVar43) == '\r')) {
                  ppppppppppuVar33 = (ulonglong **********)((int)ppppppppppuVar24 + -2);
                }
                if ((ppppppppppuVar32 != (ulonglong **********)0x0) &&
                   (ppppppppppuVar33 != (ulonglong **********)0x0)) goto LAB_1006a920;
              }
            }
          }
          else {
            pppppppppppuStack_1a8._0_1_ = (byte)pppppppppppuStack_160;
            pppppppppppuVar25 = (ulonglong ***********)((uint)pppppppppppuStack_160 & 0xff);
            pppppppppppuStack_180 = pppppppppppuStack_15c;
            if ((byte)pppppppppppuStack_1a8 < 5) {
              pppppppppppuStack_1f8 = pppppppppppuStack_15c;
              pppppppppppuStack_1fc = (ulonglong ***********)0x1;
              pppppppppppuStack_184 =
                   (ulonglong ***********)CONCAT31(pppppppppppuStack_184._1_3_,uStack_19c._1_1_);
              pppppppppppuVar41 = pppppppppppuStack_16c;
              while (((uint)pppppppppppuStack_1d8 & 1) == 0) {
                if (pppppppppppuVar41 <= pppppppppppuVar35) {
                  bVar27 = *(byte *)((int)&uStack_1b0 + 3 + (int)pppppppppppuVar25);
                  pppppppppppuVar38 = pppppppppppuVar41;
                  do {
                    uVar14 = (int)pppppppppppuVar35 - (int)pppppppppppuVar38;
                    if (uVar14 < 8) {
                      uVar28 = 0;
                      if (uVar14 == 0) {
                        lVar53 = 0;
                      }
                      else {
                        do {
                          if (*(byte *)((int)pppppppppppuVar36 + (int)pppppppppppuVar38 + uVar28) ==
                              bVar27) {
                            lVar53 = CONCAT44(uVar28,1);
                            goto LAB_1006a734;
                          }
                          uVar28 = uVar28 + 1;
                        } while (uVar14 != uVar28);
                        lVar53 = (ulonglong)uVar14 << 0x20;
                      }
                    }
                    else {
                      lVar53 = FUN_100974e0(bVar27,(int)pppppppppppuVar36 + (int)pppppppppppuVar38,
                                            uVar14);
                    }
LAB_1006a734:
                    pppppppppppuVar41 = pppppppppppuVar35;
                    if ((int)lVar53 != 1) break;
                    pppppppppppuVar41 =
                         (ulonglong ***********)
                         ((int)pppppppppppuVar38 + (int)((ulonglong)lVar53 >> 0x20) + 1);
                    if ((pppppppppppuVar41 <= pppppppppppuVar39 &&
                         pppppppppppuVar25 <= pppppppppppuVar41) &&
                       (iVar17 = memcmp((void *)(((int)pppppppppppuVar41 - (int)pppppppppppuVar25) +
                                                (int)pppppppppppuVar36),&pppppppppppuStack_1ac,
                                        (size_t)pppppppppppuVar25), iVar17 == 0)) {
                      pppppppppppuStack_1a4 = pppppppppppuVar41;
                      pppppppppppuStack_1d8 = (ulonglong ***********)0x0;
                      pppppppppppuStack_180 = pppppppppppuVar41;
                      pppppppppppuStack_18c = pppppppppppuVar41;
                      pppppppppppuVar38 = pppppppppppuVar41;
                      goto LAB_1006a7ec;
                    }
                    pppppppppppuVar38 = pppppppppppuVar41;
                  } while (pppppppppppuVar41 <= pppppppppppuVar35);
                }
                uStack_19c._0_2_ = CONCAT11(1,(byte)uStack_19c);
                pppppppppppuVar38 = pppppppppppuVar20;
                if (((uint)pppppppppppuVar30 & 1) == 0) {
                  pppppppppppuStack_1d8 = (ulonglong ***********)0x1;
                  pppppppppppuStack_184 =
                       (ulonglong ***********)CONCAT31(pppppppppppuStack_184._1_3_,1);
                  pppppppppppuStack_18c = pppppppppppuStack_1f8;
                  if (pppppppppppuVar20 == pppppppppppuStack_1f8) break;
                }
                else {
                  pppppppppppuStack_1d8 = (ulonglong ***********)0x1;
                  pppppppppppuStack_184 =
                       (ulonglong ***********)CONCAT31(pppppppppppuStack_184._1_3_,1);
                  pppppppppppuStack_18c = pppppppppppuStack_1f8;
                }
LAB_1006a7ec:
                ppppppppppuVar43 =
                     (ulonglong **********)((int)pppppppppppuVar36 + (int)pppppppppppuStack_1f8);
                ppppppppppuVar32 =
                     (ulonglong **********)((int)pppppppppppuVar38 - (int)pppppppppppuStack_1f8);
                pppppppppppuStack_210 = (ulonglong ***********)ppppppppppuVar32;
                if ((ppppppppppuVar32 != (ulonglong **********)0x0) &&
                   (*(char *)((int)pppppppppppuVar36 + -1 + (int)pppppppppppuVar38) == '\n')) {
                  pppppppppppuStack_210 = (ulonglong ***********)((int)ppppppppppuVar32 + -1);
                  if (pppppppppppuStack_210 == (ulonglong ***********)0x0) {
                    ppppppppppuVar24 = (ulonglong **********)0xffffffff;
                    ppppppppppuVar33 = (ulonglong **********)0x0;
                  }
                  else {
                    ppppppppppuVar24 = (ulonglong **********)((int)ppppppppppuVar32 + -2);
                    ppppppppppuVar33 = (ulonglong **********)0x0;
                    if (*(char *)((int)ppppppppppuVar43 + -2 + (int)ppppppppppuVar32) == '\r') {
                      ppppppppppuVar33 = ppppppppppuVar43;
                    }
                  }
                  if (ppppppppppuVar33 != (ulonglong **********)0x0) {
                    ppppppppppuVar43 = ppppppppppuVar33;
                    pppppppppppuStack_210 = (ulonglong ***********)ppppppppppuVar24;
                  }
                }
                if (ppppppppppuVar43 == (ulonglong **********)0x0) break;
                pppppppppppuStack_1f8 = pppppppppppuStack_18c;
                if (pppppppppppuStack_210 != (ulonglong ***********)0x0) {
                  if (pppppppppppuStack_1fc == (ulonglong ***********)uStack_140) {
                    FUN_101359e0((uint *)&uStack_140,(uint)pppppppppppuStack_1fc,1,&DAT_00000004,8);
                    pppppppppppuStack_188 = uStack_140._4_4_;
                  }
                  pppppppppppuStack_188[(int)pppppppppppuStack_1fc * 2] = ppppppppppuVar43;
                  pppppppppppuStack_188[(int)pppppppppppuStack_1fc * 2 + 1] =
                       (ulonglong **********)pppppppppppuStack_210;
                  pppppppppppuStack_1fc = (ulonglong ***********)((int)pppppppppppuStack_1fc + 1);
                  uStack_138 = CONCAT44(uStack_138._4_4_,pppppppppppuStack_1fc);
                  pppppppppppuStack_1f8 = pppppppppppuStack_180;
                  pppppppppppuStack_1d8 =
                       (ulonglong ***********)((uint)pppppppppppuStack_184 & 0xff);
                }
              }
            }
            else {
              ppppppppppuVar43 =
                   (ulonglong **********)((int)pppppppppppuStack_158 - (int)pppppppppppuStack_15c);
              if ((ppppppppppuVar43 == (ulonglong **********)0x0 & ((byte)uStack_19c ^ 1)) == 0) {
                if (pppppppppppuStack_158 == pppppppppppuStack_15c) {
                  pppppppppppuStack_1fc = (ulonglong ***********)0x1;
                  if ((((uint)uStack_154 & 0x100) == 0) &&
                     (pppppppppppuStack_16c <= pppppppppppuStack_168)) {
                    bVar27 = *(byte *)((int)&uStack_1b0 + 3 + (int)pppppppppppuVar25);
                    pppppppppppuVar20 = pppppppppppuStack_16c;
                    do {
                      uVar14 = (int)pppppppppppuVar35 - (int)pppppppppppuVar20;
                      if (uVar14 < 8) {
                        uVar28 = 0;
                        if (uVar14 == 0) {
                          lVar53 = 0;
                        }
                        else {
                          do {
                            if (*(byte *)((int)pppppppppppuVar36 + (int)pppppppppppuVar20 + uVar28)
                                == bVar27) {
                              lVar53 = CONCAT44(uVar28,1);
                              goto LAB_1006aaa1;
                            }
                            uVar28 = uVar28 + 1;
                          } while (uVar14 != uVar28);
                          lVar53 = (ulonglong)uVar14 << 0x20;
                        }
                      }
                      else {
                        lVar53 = FUN_100974e0(bVar27,(int)pppppppppppuVar36 + (int)pppppppppppuVar20
                                              ,uVar14);
                      }
LAB_1006aaa1:
                      if ((int)lVar53 != 1) break;
                      pppppppppppuVar20 =
                           (ulonglong ***********)
                           ((int)pppppppppppuVar20 + (int)((ulonglong)lVar53 >> 0x20) + 1);
                      if (pppppppppppuVar25 <= pppppppppppuVar20 &&
                          pppppppppppuVar20 <= pppppppppppuVar39) goto LAB_1006b856;
                    } while (pppppppppppuVar20 <= pppppppppppuVar35);
                  }
                }
                else {
                  pppppppppppuStack_1fc = (ulonglong ***********)0x1;
                  pppppppppppuStack_180 =
                       (ulonglong ***********)
                       ((int)pppppppppppuStack_15c + (int)pppppppppppuStack_1bc);
                  ppppppppppuVar32 = (ulonglong **********)((int)ppppppppppuVar43 + -1);
                  pppppppppppuVar30 = pppppppppppuStack_16c;
                  while (((uint)pppppppppppuStack_1d8 & 1) == 0) {
                    if (pppppppppppuVar30 <= pppppppppppuVar35) {
                      bVar27 = *(byte *)((int)&uStack_1b0 + 3 + (int)pppppppppppuVar25);
                      pppppppppppuVar41 = pppppppppppuVar30;
                      do {
                        uVar14 = (int)pppppppppppuVar35 - (int)pppppppppppuVar41;
                        if (uVar14 < 8) {
                          uVar28 = 0;
                          if (uVar14 == 0) {
                            lVar53 = 0;
                          }
                          else {
                            do {
                              if (*(byte *)((int)pppppppppppuVar36 + (int)pppppppppppuVar41 + uVar28
                                           ) == bVar27) {
                                lVar53 = CONCAT44(uVar28,1);
                                goto LAB_1006ac06;
                              }
                              uVar28 = uVar28 + 1;
                            } while (uVar14 != uVar28);
                            lVar53 = (ulonglong)uVar14 << 0x20;
                          }
                        }
                        else {
                          lVar53 = FUN_100974e0(bVar27,(int)pppppppppppuVar36 +
                                                       (int)pppppppppppuVar41,uVar14);
                        }
LAB_1006ac06:
                        pppppppppppuVar30 = pppppppppppuVar35;
                        if ((int)lVar53 != 1) break;
                        pppppppppppuVar30 =
                             (ulonglong ***********)
                             ((int)pppppppppppuVar41 + (int)((ulonglong)lVar53 >> 0x20) + 1);
                        if (pppppppppppuVar25 <= pppppppppppuVar30 &&
                            pppppppppppuVar30 <= pppppppppppuVar39) goto LAB_1006b856;
                        pppppppppppuVar41 = pppppppppppuVar30;
                      } while (pppppppppppuVar30 <= pppppppppppuVar35);
                    }
                    uStack_19c._0_2_ = CONCAT11(1,(byte)uStack_19c);
                    ppppppppppuVar24 = ppppppppppuVar43;
                    pppppppppppuVar41 = pppppppppppuStack_180;
                    if (*(char *)((int)pppppppppppuVar36 + -1 + (int)pppppppppppuVar20) == '\n') {
                      if (ppppppppppuVar32 == (ulonglong **********)0x0) {
                        ppppppppppuVar24 = (ulonglong **********)0xffffffff;
                        pppppppppppuVar41 = (ulonglong ***********)0x0;
                      }
                      else {
                        ppppppppppuVar24 = (ulonglong **********)((int)ppppppppppuVar43 + -2);
                        pppppppppppuVar41 = (ulonglong ***********)0x0;
                        if (*(char *)((int)pppppppppppuStack_180 + -1 + (int)ppppppppppuVar32) ==
                            '\r') {
                          pppppppppppuVar41 = pppppppppppuStack_180;
                        }
                      }
                      if (pppppppppppuVar41 == (ulonglong ***********)0x0) {
                        ppppppppppuVar24 = ppppppppppuVar32;
                        pppppppppppuVar41 = pppppppppppuStack_180;
                      }
                    }
                    if ((pppppppppppuVar41 == (ulonglong ***********)0x0) ||
                       (ppppppppppuVar24 == (ulonglong **********)0x0)) break;
                    if (pppppppppppuStack_1fc == (ulonglong ***********)uStack_140) {
                      FUN_101359e0((uint *)&uStack_140,(uint)pppppppppppuStack_1fc,1,&DAT_00000004,8
                                  );
                      pppppppppppuStack_188 = uStack_140._4_4_;
                    }
                    pppppppppppuStack_188[(int)pppppppppppuStack_1fc * 2] =
                         (ulonglong **********)pppppppppppuVar41;
                    pppppppppppuStack_188[(int)pppppppppppuStack_1fc * 2 + 1] = ppppppppppuVar24;
                    pppppppppppuStack_1fc = (ulonglong ***********)((int)pppppppppppuStack_1fc + 1);
                    uStack_138 = CONCAT44(uStack_138._4_4_,pppppppppppuStack_1fc);
                    pppppppppppuStack_1d8 = (ulonglong ***********)0x1;
                  }
                }
              }
              else {
                pppppppppppuStack_1fc = (ulonglong ***********)0x1;
                if ((((uint)uStack_154 & 0x100) == 0) &&
                   (pppppppppppuStack_16c <= pppppppppppuStack_168)) {
                  bVar27 = *(byte *)((int)&uStack_1b0 + 3 + (int)pppppppppppuVar25);
                  pppppppppppuVar20 = pppppppppppuStack_16c;
                  do {
                    uVar14 = (int)pppppppppppuVar35 - (int)pppppppppppuVar20;
                    if (uVar14 < 8) {
                      uVar28 = 0;
                      if (uVar14 == 0) {
                        lVar53 = 0;
                      }
                      else {
                        do {
                          if (*(byte *)((int)pppppppppppuVar36 + (int)pppppppppppuVar20 + uVar28) ==
                              bVar27) {
                            lVar53 = CONCAT44(uVar28,1);
                            goto LAB_1006ab33;
                          }
                          uVar28 = uVar28 + 1;
                        } while (uVar14 != uVar28);
                        lVar53 = (ulonglong)uVar14 << 0x20;
                      }
                    }
                    else {
                      lVar53 = FUN_100974e0(bVar27,(int)pppppppppppuVar36 + (int)pppppppppppuVar20,
                                            uVar14);
                    }
LAB_1006ab33:
                    if ((int)lVar53 != 1) break;
                    pppppppppppuVar20 =
                         (ulonglong ***********)
                         ((int)pppppppppppuVar20 + (int)((ulonglong)lVar53 >> 0x20) + 1);
                    if (pppppppppppuVar25 <= pppppppppppuVar20 &&
                        pppppppppppuVar20 <= pppppppppppuVar39) goto LAB_1006b856;
                  } while (pppppppppppuVar20 <= pppppppppppuVar35);
                }
              }
            }
          }
          ppppppppppuVar43 = (ulonglong **********)(ulonglong ***********)uStack_140;
          pppppppppppuVar39 = uStack_140._4_4_;
          if ((ulonglong ***********)(uStack_110 - uStack_108) < pppppppppppuStack_1fc) {
            pppppppppppuStack_188 = uStack_140._4_4_;
            FUN_101359e0(&uStack_110,uStack_108,(uint)pppppppppppuStack_1fc,&DAT_00000004,0x28);
            pppppppppppuVar39 = pppppppppppuStack_188;
          }
          ppppppppppuStack_d8 = (ulonglong **********)param_2;
          ppppppppppuStack_88 = (ulonglong **********)(_DAT_0077f2e4 + 1);
          if (pppppppppppuStack_1fc < (ulonglong ***********)0x5555556) {
            pppppppppppuStack_188 = pppppppppppuVar39;
            if ((int)pppppppppppuStack_1fc * 0x18 == 0) {
              pppppppppppuVar39 = (ulonglong ***********)&DAT_00000008;
              pppppppppppuVar35 = (ulonglong ***********)0x0;
            }
            else {
              pppppppppppuVar39 = FUN_10107380(0,(int)pppppppppppuStack_1fc * 0x18);
              pppppppppppuVar35 = pppppppppppuStack_1fc;
              if (pppppppppppuVar39 == (ulonglong ***********)0x0) {
                FUN_101366bc(8);
                    /* WARNING: Does not return */
                pcVar40 = (code *)invalidInstructionException();
                (*pcVar40)();
              }
            }
            pppppppppppuVar25 = pppppppppppuVar39;
            if ((ulonglong ***********)0x1 < pppppppppppuStack_1fc) {
              iVar17 = (int)pppppppppppuStack_1fc + -1;
              do {
                pppppppppppuVar25[5] = (ulonglong **********)0x0;
                pppppppppppuVar25[4] = (ulonglong **********)0xffffffff;
                pppppppppppuVar25[3] = (ulonglong **********)0x3ff00000;
                pppppppppppuVar25[2] = (ulonglong **********)0x0;
                pppppppppppuVar25[1] = (ulonglong **********)0x3ff00000;
                *pppppppppppuVar25 = (ulonglong **********)0x0;
                pppppppppppuVar25 = pppppppppppuVar25 + 6;
                iVar17 = iVar17 + -1;
              } while (iVar17 != 0);
            }
            pppppppppppuVar25[5] = (ulonglong **********)0x0;
            pppppppppppuVar25[4] = (ulonglong **********)0xffffffff;
            pppppppppppuVar25[3] = (ulonglong **********)0x3ff00000;
            pppppppppppuVar25[2] = (ulonglong **********)0x0;
            pppppppppppuVar25[1] = (ulonglong **********)0x3ff00000;
            *pppppppppppuVar25 = (ulonglong **********)0x0;
            pppppppppppuStack_18c =
                 (ulonglong ***********)
                 CONCAT31(pppppppppppuStack_18c._1_3_,
                          pppppppppppuVar35 == (ulonglong ***********)0x0);
            bVar45 = ppppppppppuVar43 == (ulonglong **********)0x0;
LAB_1006a4af:
            uStack_1b0 = &ppppppppppuStack_d8;
            uStack_1c0._0_1_ = (char)pppppppppppuStack_188;
            uStack_1c0._1_1_ = (char)((uint)pppppppppppuStack_188 >> 8);
            uStack_1c0._2_1_ = (undefined1)((uint)pppppppppppuStack_188 >> 0x10);
            uStack_1c0._3_1_ = (char)((uint)pppppppppppuStack_188 >> 0x18);
            pppppppppppuStack_1a8 = (ulonglong ***********)&uStack_f8;
            pppppppppppuStack_1a0 = &ppppppppppuStack_88;
            uStack_140 = CONCAT44(pppppppppppuStack_1fc,pppppppppppuStack_188);
            uStack_138 = CONCAT44(pppppppppppuStack_1fc,pppppppppppuVar39);
            uStack_b8 = CONCAT44(pppppppppppuStack_1fc,pppppppppppuStack_188);
            pppppppppppuStack_178 = (ulonglong ***********)0x0;
            uStack_104 = 0;
            puStack_100 = &DAT_00000004;
            uStack_54 = 0;
            cStack_174 = -1;
            uStack_fc = 0;
            uStack_141 = 0;
            pppppppppppuStack_1ac = pppppppppppuStack_90;
            pppppppppppuStack_1a4 = &ppppppppppuStack_8c;
            uStack_19c = (ulonglong ***********)&pppppppppppuStack_178;
            uStack_130 = CONCAT44(pppppppppppuStack_90,&ppppppppppuStack_d8);
            puStack_128 = &uStack_f8;
            pppppppppppuStack_124 = &ppppppppppuStack_8c;
            uStack_b0 = ZEXT48(&uStack_141) << 0x20;
            uStack_a8 = CONCAT44(&uStack_130,&uStack_19c);
            uStack_a0 = CONCAT44(uStack_a0._4_4_,pppppppppppuStack_1fc);
            pppppppppppuStack_1bc = pppppppppppuStack_1fc;
            pppppppppppuStack_1b8 = pppppppppppuVar39;
            pppppppppppuStack_1b4 = pppppppppppuStack_1fc;
            pppppppppppuStack_120 = pppppppppppuStack_1a0;
            pppppppppppuStack_5c = pppppppppppuStack_188;
            pppppppppppuStack_58 = pppppppppppuStack_1fc;
            pppppppppppuStack_50 = pppppppppppuVar39;
            pppppppppppuStack_4c = pppppppppppuStack_1fc;
            uVar14 = FUN_100c07c0();
            FUN_100265f0((undefined4 *)&uStack_e8,(uint)pppppppppppuStack_1fc,'\0',uVar14,1,
                         (int *)&pppppppppppuStack_5c,(undefined4 *)((int)&uStack_b0 + 4));
            ppppppppppuVar32 = (ulonglong **********)uStack_e8;
            ppppppppppuVar43 = (ulonglong **********)uStack_e8;
            if (pppppppppppuStack_e0 == (ulonglong ***********)0x0) goto LAB_1006ad6b;
            if ((ulonglong **********)uStack_e8 == (ulonglong **********)0x0) goto LAB_1006ad6b;
            uVar14 = 0;
            pppppppppppuVar35 = pppppppppppuStack_e0;
            do {
              pppppppppppuVar35 = (ulonglong ***********)((int)pppppppppppuVar35 + -1);
              uVar14 = uVar14 + (int)ppppppppppuVar43[2];
              if (pppppppppppuVar35 == (ulonglong ***********)0x0) break;
              ppppppppppuVar43 = (ulonglong **********)ppppppppppuVar43[3];
            } while (ppppppppppuVar43 != (ulonglong **********)0x0);
            if (uVar14 != 0) {
              FUN_101359e0(&uStack_104,0,uVar14,&DAT_00000004,0x28);
            }
            do {
              ppppppppppuVar43 = (ulonglong **********)ppppppppppuVar32[3];
              if (ppppppppppuVar43 != (ulonglong **********)0x0) {
                ppppppppppuVar43[4] = (ulonglong *********)0x0;
              }
              pppppppppuVar3 = *ppppppppppuVar32;
              _Src_00 = ppppppppppuVar32[1];
              pppppppppuVar4 = ppppppppppuVar32[2];
              pvVar21 = GetProcessHeap();
              HeapFree(pvVar21,0,ppppppppppuVar32);
              pcVar40 = HeapFree_exref;
              if (pppppppppuVar3 == (ulonglong *********)0xffffffff) goto joined_r0x1006ae1e;
              if ((ulonglong *********)(uStack_104 - uStack_fc) < pppppppppuVar4) {
                FUN_101359e0(&uStack_104,uStack_fc,(uint)pppppppppuVar4,&DAT_00000004,0x28);
LAB_1006adc3:
                uVar14 = uStack_fc;
                memcpy(puStack_100 + uStack_fc * 0x28,_Src_00,(int)pppppppppuVar4 * 0x28);
              }
              else {
                uVar14 = uStack_fc;
                if (pppppppppuVar4 != (ulonglong *********)0x0) goto LAB_1006adc3;
              }
              uStack_fc = uVar14 + (int)pppppppppuVar4;
              if (pppppppppuVar3 != (ulonglong *********)0x0) {
                pvVar21 = GetProcessHeap();
                HeapFree(pvVar21,0,_Src_00);
              }
LAB_1006ad6b:
              ppppppppppuVar32 = ppppppppppuVar43;
            } while (ppppppppppuVar43 != (ulonglong **********)0x0);
            goto LAB_1006ae24;
          }
          goto LAB_10069912;
        }
        goto LAB_1006b841;
      }
      SStack_1d0._0_2_ = CONCAT11(uStack_1c0._3_1_,uStack_1c0._2_1_);
      pppppppppppuStack_208._0_1_ = uStack_1c0._1_1_;
      uStack_68 = CONCAT44(pppppppppppuStack_1ac,uStack_1b0);
      pppppppppppuStack_1f0 = pppppppppppuStack_1bc;
      pppppppppppuStack_60 = pppppppppppuStack_1a8;
      pppppppppppuStack_1fc = pppppppppppuStack_1b8;
      pppppppppppuStack_1d4 = pppppppppppuStack_1b4;
      pppppppppppuVar23 = pppppppppppuStack_1a0;
      pppppppppppuStack_200 = pppppppppppuStack_1a4;
      cVar10 = (char)uStack_1c0;
LAB_1006b1ad:
      *param_1 = cVar10;
      param_1[1] = (char)pppppppppppuStack_208;
      *(undefined2 *)(param_1 + 2) = (undefined2)SStack_1d0;
      *(ulonglong ************)(param_1 + 4) = pppppppppppuStack_1f0;
      *(ulonglong ************)(param_1 + 8) = pppppppppppuStack_1fc;
      *(ulonglong ************)(param_1 + 0xc) = pppppppppppuStack_1d4;
      *(undefined8 *)(param_1 + 0x10) = uStack_68;
      *(ulonglong ************)(param_1 + 0x18) = pppppppppppuStack_60;
      *(ulonglong ************)(param_1 + 0x20) = pppppppppppuVar23;
      *(ulonglong ************)(param_1 + 0x1c) = pppppppppppuStack_200;
      goto LAB_100696c6;
    }
    pppppppppppuVar39 = (ulonglong ***********)uStack_b0;
    uVar18 = uStack_b8._4_4_;
    pppppppppppuVar23 = uStack_b0._4_4_;
    uStack_48 = uStack_a8;
    cStack_142 = uStack_b8._3_1_;
    uStack_144 = uStack_b8._1_2_;
    pppppppppppuStack_38 = pppppppppppuStack_98;
    uStack_40 = uStack_a0;
    if (pppppppppppuStack_1f8 != (ulonglong ***********)0x0) {
      pvVar21 = GetProcessHeap();
      HeapFree(pvVar21,0,pppppppppppuStack_210);
    }
    if ((uStack_138._4_4_ != 0) &&
       (uVar14 = uStack_138._4_4_ * 4 + 0x13U & 0xfffffff0, uStack_138._4_4_ + uVar14 != -0x11)) {
      pvVar2 = *(LPVOID *)(((int)(ulonglong ***********)uStack_138 - uVar14) + -4);
      pvVar21 = GetProcessHeap();
      HeapFree(pvVar21,0,pvVar2);
    }
    if (0 < (int)(ulonglong **********)uStack_e8) {
      pvVar2 = uStack_e8._4_4_;
      pvVar21 = GetProcessHeap();
      HeapFree(pvVar21,0,pvVar2);
    }
    pppppppppppuVar35 = pppppppppppuStack_58;
    if (pppppppppppuStack_5c != (ulonglong ***********)0x0) {
      pvVar21 = GetProcessHeap();
      HeapFree(pvVar21,0,pppppppppppuVar35);
    }
    if (!bVar45) {
      pvVar21 = GetProcessHeap();
      HeapFree(pvVar21,0,pppppppppppuStack_1f0);
    }
    if (pppppppppppuStack_148 != (ulonglong ***********)0x0) {
      pvVar21 = GetProcessHeap();
      HeapFree(pvVar21,0,pppppppppppuStack_180);
    }
  }
  *param_1 = cVar10;
  *(undefined2 *)(param_1 + 1) = uStack_144;
  param_1[3] = cStack_142;
  *(undefined4 *)(param_1 + 4) = uVar18;
  *(ulonglong ************)(param_1 + 8) = pppppppppppuVar39;
  *(ulonglong ************)(param_1 + 0xc) = pppppppppppuVar23;
  *(undefined8 *)(param_1 + 0x10) = uStack_48;
  *(undefined8 *)(param_1 + 0x18) = uStack_40;
  *(ulonglong ************)(param_1 + 0x20) = pppppppppppuStack_38;
LAB_100696c6:
  if (0 < (int)uStack_d0) {
    pvVar2 = uStack_d0._4_4_;
    pvVar21 = GetProcessHeap();
    HeapFree(pvVar21,0,pvVar2);
  }
  (*(code *)0x405a7c)();
  return param_1;
code_r0x10067996:
  puVar22 = (uint *)((int)puVar22 + 1);
  pppppppppppuVar35 = (ulonglong ***********)((int)pppppppppppuVar35 + -1);
  if (pppppppppppuVar35 == (ulonglong ***********)0x0) goto LAB_10068a11;
  goto LAB_10067976;
LAB_1006b2ab:
  pppppppppppuVar39 = pppppppppppuStack_18c;
  SStack_1d0._0_1_ = '\x03';
  goto LAB_10068ba6;
LAB_100694d0:
  SStack_1d0._0_1_ = '\x02';
  goto LAB_10068ba6;
LAB_100694a3:
  SStack_1d0._0_1_ = ((byte)(bVar27 - 0x30) < 10) + '\x01';
  goto LAB_10068ba6;
LAB_10069522:
  SStack_1d0._0_1_ = ((byte)(bVar27 - 0x30) < 10) + '\x01';
  goto LAB_10068ba6;
LAB_10068ba4:
  SStack_1d0._0_1_ = '\x01';
LAB_10068ba6:
  pppppppppppuStack_1f0 = pppppppppppuVar39;
  cVar10 = '\t';
LAB_1006960c:
  if (iVar17 != 0) {
    pvVar21 = GetProcessHeap();
    HeapFree(pvVar21,0,pppppppppppuVar23);
  }
  pppppppppppuStack_18c = pppppppppppuStack_17c;
LAB_10069638:
  pppppppppppuVar23 = pppppppppppuStack_178;
  if (CONCAT22(uStack_172,CONCAT11(cStack_173,cStack_174)) != 0) {
    pvVar21 = GetProcessHeap();
    HeapFree(pvVar21,0,pppppppppppuVar23);
  }
  CloseHandle(pppppppppppuStack_164);
  pppppppppppuVar23 = pppppppppppuStack_150;
  pppppppppppuVar39 = pppppppppppuStack_18c;
  uVar34 = pppppppppppuStack_114._0_2_;
  goto LAB_10069686;
LAB_1006b109:
  if (ppppppppppuStack_c4 != (ulonglong **********)0x0) {
    pvVar21 = GetProcessHeap();
    HeapFree(pvVar21,0,pppppppppppuVar23);
  }
  goto LAB_1006a012;
code_r0x1006a133:
  iVar17 = iVar17 + -1;
  if (iVar17 == 0) goto LAB_1006a137;
  goto LAB_1006a113;
joined_r0x1006ae1e:
  while (ppppppppppuVar43 != (ulonglong **********)0x0) {
    ppppppppppuVar32 = (ulonglong **********)ppppppppppuVar43[3];
    if (ppppppppppuVar32 != (ulonglong **********)0x0) {
      ppppppppppuVar32[4] = (ulonglong *********)0x0;
    }
    if (*ppppppppppuVar43 != (ulonglong *********)0x0) {
      pppppppppuVar3 = ppppppppppuVar43[1];
      pvVar21 = GetProcessHeap();
      pcVar40 = HeapFree_exref;
      HeapFree(pvVar21,0,pppppppppuVar3);
    }
    pvVar21 = GetProcessHeap();
    (*pcVar40)(pvVar21,0,ppppppppppuVar43);
    ppppppppppuVar43 = ppppppppppuVar32;
  }
LAB_1006ae24:
  uVar16 = uStack_fc;
  puVar7 = puStack_100;
  uVar28 = uStack_104;
  SStack_1d0._0_2_ = uStack_172;
  pppppppppppuStack_208._0_1_ = cStack_173;
  cVar10 = cStack_174;
  if (cStack_174 != -1) {
    uStack_68 = CONCAT44(pppppppppppuStack_160,pppppppppppuStack_164);
    pppppppppppuStack_1f0 = pppppppppppuStack_170;
    pppppppppppuStack_1d4 = pppppppppppuStack_168;
    pppppppppppuStack_60 = pppppppppppuStack_15c;
    pppppppppppuStack_1fc = pppppppppppuStack_16c;
    pppppppppppuStack_200 = pppppppppppuStack_158;
    pppppppppppuStack_184 = uStack_154;
    if (uStack_104 != 0) {
      pvVar21 = GetProcessHeap();
      HeapFree(pvVar21,0,puVar7);
    }
    if ((char)pppppppppppuStack_18c == '\0') {
      pvVar21 = GetProcessHeap();
      HeapFree(pvVar21,0,pppppppppppuVar39);
    }
    if (!bVar45) {
      pvVar21 = GetProcessHeap();
      HeapFree(pvVar21,0,pppppppppppuStack_188);
    }
    if (pppppppppppuVar23 != (ulonglong ***********)0x0) {
      pvVar21 = GetProcessHeap();
      HeapFree(pvVar21,0,pppppppppppuStack_148);
    }
LAB_1006b415:
    if (0 < (int)(ulonglong **********)uStack_f8) {
      pvVar2 = uStack_f8._4_4_;
      pvVar21 = GetProcessHeap();
      HeapFree(pvVar21,0,pvVar2);
    }
LAB_1006b14b:
    if (uStack_84._4_4_ != 0) {
      pvVar2 = (LPVOID)uStack_84;
      pvVar21 = GetProcessHeap();
      HeapFree(pvVar21,0,pvVar2);
    }
    CloseHandle(pppppppppppuStack_70);
    puVar7 = puStack_10c;
    pppppppppppuVar23 = pppppppppppuStack_184;
    if (uStack_110 != 0) {
      pvVar21 = GetProcessHeap();
      HeapFree(pvVar21,0,puVar7);
      pppppppppppuVar23 = pppppppppppuStack_184;
    }
    goto LAB_1006b1ad;
  }
  SStack_1d0 = uStack_104;
  if (DAT_10163270 < pppppppppppuStack_1fc) {
    FUN_101342d0((uint)pppppppppppuStack_1fc);
  }
  if (uVar16 != 0) {
    iVar17 = (int)pppppppppppuStack_1fc * 0x18;
    puVar22 = (uint *)(puVar7 + 0x20);
    sVar26 = uVar16 * 0x28;
    pppppppppppuVar35 = pppppppppppuVar39;
    do {
      if (iVar17 == 0) break;
      uStack_130 = *(undefined8 *)(pppppppppppuVar35 + 4);
      pppppppppppuStack_1ac = (ulonglong ***********)uStack_130;
      pppppppppppuStack_1a8 = (ulonglong ***********)((ulonglong)uStack_130 >> 0x20);
      uStack_140 = *(ulonglong *)pppppppppppuVar35;
      uStack_138 = *(undefined8 *)(pppppppppppuVar35 + 2);
      pppppppppppuVar35 = pppppppppppuVar35 + 6;
      pppppppppppuStack_1b4 = (ulonglong ***********)uStack_138;
      uStack_1b0 = (ulonglong ***********)((ulonglong)uStack_138 >> 0x20);
      pppppppppppuStack_1bc = (ulonglong ***********)uStack_140;
      pppppppppppuStack_1b8 = (ulonglong ***********)(uStack_140 >> 0x20);
      pppppppppppuStack_168 = uStack_1b0;
      pppppppppppuStack_164 = pppppppppppuStack_1ac;
      pppppppppppuStack_178 =
           (ulonglong ***********)
           CONCAT13(uStack_1c0._3_1_,
                    CONCAT12(uStack_1c0._2_1_,CONCAT11(uStack_1c0._1_1_,(char)uStack_1c0)));
      pppppppppppuStack_160 = pppppppppppuStack_1a8;
      pppppppppppuStack_170 = pppppppppppuStack_1b8;
      pppppppppppuStack_16c = pppppppppppuStack_1b4;
      cStack_174 = (char)uStack_140;
      cStack_173 = (char)(uStack_140 >> 8);
      uStack_172 = (undefined2)(uStack_140 >> 0x10);
      FUN_1004cdb0(&uStack_1c0,*puVar22,&uStack_140);
      iVar17 = iVar17 + -0x18;
      puVar22 = puVar22 + 10;
      sVar26 = sVar26 - 0x28;
    } while (sVar26 != 0);
  }
  _DAT_0077f2e4 = _DAT_0077f2e4 + uVar16;
  if (uStack_110 - uStack_108 < uVar16) {
    FUN_101359e0(&uStack_110,uStack_108,uVar16,&DAT_00000004,0x28);
  }
  else {
    uVar14 = uStack_108;
    if (uVar16 == 0) goto LAB_1006afa1;
  }
  uVar14 = uStack_108;
  memcpy(puStack_10c + uStack_108 * 0x28,puVar7,uVar16 * 0x28);
LAB_1006afa1:
  uVar14 = uVar14 + uVar16;
  uStack_108 = uVar14;
  FUN_1011b820((int)param_2);
  if (uVar28 != 0) {
    pvVar21 = GetProcessHeap();
    HeapFree(pvVar21,0,puVar7);
  }
  if ((char)pppppppppppuStack_18c == '\0') {
    pvVar21 = GetProcessHeap();
    HeapFree(pvVar21,0,pppppppppppuVar39);
  }
  if (!bVar45) {
    pvVar21 = GetProcessHeap();
    HeapFree(pvVar21,0,pppppppppppuStack_188);
  }
  if (pppppppppppuVar23 != (ulonglong ***********)0x0) {
    pvVar21 = GetProcessHeap();
    HeapFree(pvVar21,0,pppppppppppuStack_148);
  }
  if (0 < (int)(ulonglong **********)uStack_f8) {
    pvVar2 = uStack_f8._4_4_;
    pvVar21 = GetProcessHeap();
    HeapFree(pvVar21,0,pvVar2);
  }
  goto LAB_1006a012;
}
