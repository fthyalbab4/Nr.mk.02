// rea decompile_all
// name: FUN_1006be80
// address: 0x1006be80
// body: available
// range: 0x1006be80-0x1006dcc1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1006be80(char *param_1,int param_2,byte *param_3,SIZE_T param_4)

{
  undefined4 *puVar1;
  undefined *puVar2;
  void *_Src;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined1 (*pauVar6) [16];
  byte *pbVar7;
  char cVar8;
  undefined4 uVar9;
  char cVar10;
  byte bVar11;
  byte bVar12;
  HANDLE pvVar13;
  int *piVar14;
  undefined1 (*pauVar15) [16];
  SIZE_T SVar16;
  LPVOID pvVar17;
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  uint uVar20;
  uint uVar21;
  undefined1 (*pauVar22) [16];
  int iVar23;
  undefined1 (*pauVar24) [16];
  size_t sVar25;
  undefined2 extraout_DX;
  uint uVar26;
  uint uVar27;
  ushort uVar28;
  undefined1 (*pauVar29) [16];
  uint uVar30;
  undefined1 (**ppauVar31) [16];
  undefined8 *puVar32;
  uint uVar33;
  char *pcVar34;
  undefined1 (*_Size) [16];
  uint uVar35;
  uint uVar36;
  int iVar37;
  bool bVar38;
  undefined1 (*pauVar39) [16];
  undefined **ppuVar40;
  undefined1 (*local_3b0) [16];
  undefined1 (*local_3ac) [16];
  char local_3a8;
  undefined1 (*local_3a4) [16];
  undefined1 (*local_3a0) [16];
  undefined1 (*local_394) [16];
  uint local_38c;
  undefined1 (*local_380) [16];
  undefined1 (*pauStack_37c) [16];
  undefined1 (*pauStack_378) [16];
  undefined1 (*pauStack_374) [16];
  undefined1 (*pauStack_370) [16];
  undefined1 (*pauStack_36c) [16];
  undefined1 (*local_368) [16];
  undefined1 (*pauStack_364) [16];
  undefined1 (*local_360) [16];
  undefined1 (*pauStack_35c) [16];
  undefined1 (*local_358) [16];
  undefined1 (*pauStack_354) [16];
  uint local_350;
  uint uStack_34c;
  undefined1 (*local_348) [16];
  undefined1 (*pauStack_344) [16];
  undefined1 (*local_340) [16];
  undefined1 (*pauStack_33c) [16];
  undefined1 local_338;
  undefined7 uStack_337;
  undefined1 (*local_328) [16];
  undefined1 (*local_324) [16];
  undefined1 (*local_320) [16];
  undefined1 (*local_310) [16];
  undefined1 (*local_30c) [16];
  undefined8 local_308;
  undefined1 (*local_300) [16];
  undefined1 (*pauStack_2fc) [16];
  undefined1 (*local_2f8) [16];
  undefined1 (*pauStack_2f4) [16];
  undefined1 (*local_2f0) [16];
  undefined1 (*pauStack_2ec) [16];
  undefined1 (*local_2e8) [16];
  undefined1 (*pauStack_2e4) [16];
  char *local_2dc;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined1 (*local_2c8) [16];
  undefined1 (*local_2bc) [16];
  undefined1 local_2b5;
  undefined1 (*local_2b4) [16];
  undefined1 *local_2b0;
  uint local_2ac;
  undefined8 local_2a8;
  undefined1 (*local_2a0) [16];
  undefined1 uStack_29c;
  undefined2 uStack_29b;
  undefined1 uStack_299;
  undefined1 (*pauStack_298) [16];
  undefined1 (*pauStack_294) [16];
  undefined1 (*pauStack_290) [16];
  undefined2 uStack_28c;
  undefined2 uStack_28a;
  undefined1 (*pauStack_288) [16];
  undefined1 (*local_284) [16];
  undefined1 (*pauStack_280) [16];
  undefined1 (*local_27c) [16];
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  LPVOID local_240;
  undefined4 local_23c;
  int local_238 [2];
  int local_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  uint local_220;
  byte *local_21c;
  uint local_218;
  byte *local_214;
  uint local_210;
  uint local_20c;
  uint local_208;
  uint uStack_204;
  undefined1 (*local_200) [16];
  undefined1 (*local_1fc) [16];
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined1 (*local_1f0) [16];
  undefined1 (*local_1ec) [16];
  undefined1 (*local_1e8) [16];
  undefined1 (*local_1e4) [16];
  undefined1 (*local_1e0) [16];
  int local_1dc [2];
  undefined8 local_1d4;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  ulonglong local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined1 (*local_198) [16];
  uint local_190;
  uint local_18c;
  undefined3 uStack_187;
  undefined4 local_184;
  undefined4 uStack_180;
  undefined1 (*local_17c) [16];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 (*local_168) [16];
  undefined4 local_160 [2];
  undefined4 local_158;
  int local_134;
  undefined1 (*pauStack_130) [16];
  undefined1 (*local_12c) [16];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_fc;
  undefined4 local_d0;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_94;
  undefined4 local_88;
  undefined4 local_7c;
  undefined4 local_70;
  undefined4 local_64;
  undefined4 local_58;
  undefined1 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined1 (*local_18) [16];

  FUN_100759c0((undefined1 *)&local_380,param_3,param_4);
  pauVar24 = pauStack_370;
  pauVar15 = pauStack_374;
  pauVar39 = pauStack_37c;
  if ((char)local_380 != -1) {
    pauStack_298 = (undefined1 (*) [16])(CONCAT44(pauStack_36c,pauStack_370) >> 8);
    *(ulonglong *)(param_1 + 0x18) = CONCAT44(pauStack_364,local_368);
    *(undefined1 (**) [16])(param_1 + 0x20) = local_360;
    *(ulonglong *)(param_1 + 0x10) =
         CONCAT35((int3)((uint)pauStack_36c >> 8),CONCAT41(pauStack_298,pauStack_370._0_1_));
    *(ulonglong *)(param_1 + 1) =
         CONCAT17(pauStack_378._0_1_,CONCAT43(pauStack_37c,local_380._1_3_));
    *(ulonglong *)(param_1 + 9) =
         CONCAT17(pauStack_370._0_1_,CONCAT43(pauStack_374,pauStack_378._1_3_));
    *param_1 = (char)local_380;
    return;
  }
  uVar30 = *(uint *)(param_2 + 4);
  uVar26 = *(uint *)(param_2 + 8);
  uStack_22c = pauStack_370;
  local_230 = (int)pauStack_374;
  local_340 = (undefined1 (*) [16])local_238;
  local_160[0] = 0;
  local_158 = 0;
  local_134 = 0;
  local_128 = 0;
  local_120 = 0;
  local_fc = 0;
  local_d0 = 0;
  local_c4 = 0;
  local_c0 = 4;
  local_bc = 0;
  local_b8 = 0;
  local_b4 = 4;
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 4;
  local_a4 = 0;
  local_a0 = 0xfffffffe;
  local_94 = 0xfffffffe;
  local_88 = 0xfffffffe;
  local_7c = 0xfffffffe;
  local_70 = 0xfffffffe;
  local_64 = 0xfffffffe;
  local_58 = 2;
  local_4c = 2;
  local_30._0_2_ = CONCAT11(2,(undefined1)local_30);
  local_20 = 8;
  local_24 = 0x6ff0000;
  local_1c = 1;
  local_228 = pauStack_36c;
  pauStack_294 = (undefined1 (*) [16])local_40;
  pauStack_290 = (undefined1 (*) [16])((ulonglong)local_40 >> 0x20);
  local_2a8 = ZEXT48(pauStack_130) << 0x20;
  local_284 = local_30;
  uStack_28c = (undefined2)local_38;
  uStack_28a = (undefined2)((ulonglong)local_38 >> 0x10);
  pauStack_288 = (undefined1 (*) [16])((ulonglong)local_38 >> 0x20);
  uStack_29c = (undefined1)local_48;
  uStack_29b = (undefined2)((ulonglong)local_48 >> 8);
  uStack_299 = (undefined1)((ulonglong)local_48 >> 0x18);
  pauStack_298 = (undefined1 (*) [16])((ulonglong)local_48 >> 0x20);
  pauVar6 = (undefined1 (*) [16])0x0;
  pauStack_374 = pauStack_130;
  local_2a0 = local_12c;
  local_368 = pauStack_298;
  pauStack_364 = pauStack_294;
  local_360 = pauStack_290;
  pauStack_35c = (undefined1 (*) [16])
                 (CONCAT26(uStack_28a,CONCAT24(uStack_28c,pauStack_290)) >> 0x20);
  local_358 = pauStack_288;
  pauStack_354 = local_30;
  pauStack_370 = local_12c;
  pauStack_36c = (undefined1 (*) [16])
                 (CONCAT17(uStack_299,CONCAT25(uStack_29b,CONCAT14(uStack_29c,local_12c))) >> 0x20);
  local_348 = (undefined1 (*) [16])0x8060000;
  pauStack_344 = (undefined1 (*) [16])0x1;
  pauStack_37c = (undefined1 (*) [16])0x0;
  local_380 = (undefined1 (*) [16])0x0;
  pauStack_33c = (undefined1 (*) [16])0x0;
  local_338 = 0;
  local_350 = uVar30;
  uStack_34c = uVar26;
  local_2dc = param_1;
  local_2c = uVar30;
  local_28 = uVar26;
  local_18 = local_340;
  if (uVar30 == 0) {
    local_3b0 = (undefined1 (*) [16])&DAT_00000004;
    local_3a8 = '\0';
    pauStack_378 = pauVar6;
LAB_1006c267:
    FUN_100182e0((undefined4 *)&local_2a8,local_238,0x444e4549,(undefined1 (*) [16])0x1,(int *)0x0);
    pauVar39 = local_2a0;
    if ((((uint)local_2a8 != 0xffffffff) && ((uint)local_2a8 == 3)) && (local_2a8._4_1_ == '\x03'))
    {
      puVar1 = *(undefined4 **)((int)*local_2a0 + 4);
      puVar2 = *(undefined **)*local_2a0;
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)(puVar2);
      }
      if (puVar1[1] != 0) {
        FUN_10093cf0(puVar2,puVar1[2]);
      }
      pvVar13 = GetProcessHeap();
      HeapFree(pvVar13,0,pauVar39);
    }
    FUN_100b7130((int)local_160);
  }
  else {
    if (uVar26 == 0) {
      local_3a8 = '\x01';
      local_3b0 = (undefined1 (*) [16])&DAT_00000004;
      pauStack_378 = pauVar6;
      goto LAB_1006c267;
    }
    if ((uint)((int)pauVar39 - (int)pauVar15) < 9) {
      pauStack_378 = pauVar6;
      FUN_101364f0(&local_2a8,local_238,(int *)&DAT_10141ca8,(int *)&DAT_00000008);
      if ((char)local_2a8 == -1) goto LAB_1006c1c6;
      local_3b0 = (undefined1 (*) [16])0x3;
      local_2ac = local_2a8._4_4_;
      local_3a8 = (char)local_2a8;
LAB_1006c232:
      local_3ac = (undefined1 (*) [16])(local_2ac << 8);
      local_38c = local_2ac >> 0x18;
      goto LAB_1006c267;
    }
    *(undefined4 *)(*pauStack_378 + (int)pauVar15 + 4) = 0xa1a0a0d;
    *(undefined4 *)(*pauStack_378 + (int)pauVar15) = 0x474e5089;
    uStack_22c = pauVar24;
    local_230 = (int)pauVar15 + 8;
    pauStack_378 = pauVar6;
LAB_1006c1c6:
    local_2a8 = CONCAT44(uVar26 >> 0x18 | (uVar26 & 0xff0000) >> 8 | (uVar26 & 0xff00) << 8 |
                         uVar26 << 0x18,
                         uVar30 >> 0x18 | (uVar30 & 0xff0000) >> 8 | (uVar30 & 0xff00) << 8 |
                         uVar30 << 0x18);
    local_2a0 = (undefined1 (*) [16])&DAT_00000608;
    uStack_29c = 0;
    FUN_10018510(&local_2b4,&local_340,0x52444849,(undefined1 (*) [16])&local_2a8,(int *)0xd);
    if (local_2b4 != (undefined1 (*) [16])0xffffffff) {
LAB_1006c221:
      local_3b0 = local_2b4;
      local_3a8 = (char)local_2b0;
      goto LAB_1006c232;
    }
    if (local_134 == 1) {
      local_190 = (uint)pauStack_130 >> 0x18 | ((uint)pauStack_130 & 0xff0000) >> 8 |
                  ((uint)pauStack_130 & 0xff00) << 8 | (int)pauStack_130 << 0x18;
      local_18c = (uint)local_12c >> 0x18 | ((uint)local_12c & 0xff0000) >> 8 |
                  ((uint)local_12c & 0xff00) << 8 | (int)local_12c << 0x18;
      FUN_10018510(&local_2b4,&local_340,0x4c546361,(undefined1 (*) [16])&local_190,
                   (int *)&DAT_00000008);
      if (local_2b4 != (undefined1 (*) [16])0xffffffff) goto LAB_1006c221;
    }
    pauVar19 = local_368;
    pauVar6 = pauStack_36c;
    pauVar24 = pauStack_370;
    pauVar15 = pauStack_374;
    pauVar39 = pauStack_378;
    local_2d8._4_4_ = local_360;
    local_2d8._0_4_ = pauStack_364;
    local_2d0 = CONCAT44(local_358,pauStack_35c);
    local_300 = local_348;
    pauStack_2fc = pauStack_344;
    local_3b0 = pauStack_374;
    local_308 = CONCAT44(uStack_34c,local_350);
    local_2f0 = (undefined1 (*) [16])CONCAT71(uStack_337,local_338);
    pauStack_2ec = (undefined1 (*) [16])((uint7)uStack_337 >> 0x18);
    local_2c8 = pauStack_354;
    local_2f8 = local_340;
    pauStack_2f4 = pauStack_33c;
    local_3a8 = (char)pauStack_370;
    FUN_100b7130((int)local_160);
    if (pauVar39 != (undefined1 (*) [16])0xffffffff) {
      local_1c0 = CONCAT44(pauStack_2fc,local_300);
      _Size = (undefined1 (*) [16])(uVar30 * uVar26 * 4);
      local_1c8 = local_308;
      local_1b8 = CONCAT44(pauStack_2f4,local_2f8);
      local_198 = local_2c8;
      local_168 = local_2c8;
      local_1b0 = CONCAT44(pauStack_2ec,local_2f0);
      local_1a0 = local_2d0;
      local_1cc = local_2c8;
      local_1d4 = local_2d0;
      local_1a8 = local_2d8;
      local_1dc[0] = (int)(undefined1 (*) [16])local_2d8;
      local_1dc[1] = (int)local_2d8._4_4_;
      local_1f4 = 0;
      local_1f8 = 0;
      local_1f0 = pauVar39;
      local_1ec = pauVar15;
      local_1e4 = pauVar6;
      local_1e8 = pauVar24;
      local_1e0 = pauVar19;
      if (_Size == (undefined1 (*) [16])0x0) {
        pauVar15 = (undefined1 (*) [16])0x1;
      }
      else {
        _Src = *(void **)(param_2 + 0xc);
        pauVar15 = FUN_10107380(0,(SIZE_T)_Size);
        if (pauVar15 == (undefined1 (*) [16])0x0) goto LAB_1006c84b;
        memcpy(pauVar15,_Src,(size_t)_Size);
      }
      pauStack_378 = (undefined1 (*) [16])&DAT_00000004;
      local_380 = pauVar15;
      pauStack_37c = (undefined1 (*) [16])((uint)_Size & 0x7ffffffc);
      local_310 = pauVar15;
      piVar14 = FUN_100be180();
      if (piVar14 == (int *)0x0) {
        FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if (*piVar14 == 0) {
        piVar14 = FUN_100c0800();
      }
      else {
        piVar14 = (int *)(*piVar14 + 0x8c);
      }
      local_3b0 = (undefined1 (*) [16])0x0;
      FUN_1002b1a0(((uint)_Size & 0x7ffffffc) >> 2,'\0',*(uint *)(*piVar14 + 0x104),1,
                   (int *)&local_380,&local_2b5);
      pauVar15 = (undefined1 (*) [16])&DAT_00000004;
      if ((local_1c0._2_1_ == '\x03') && ((char)local_1c0 == '\0')) {
        local_3ac = (undefined1 (*) [16])0x3;
LAB_1006ca60:
        FUN_100935a0((undefined8 *)&local_380,param_3,param_4);
        local_308 = CONCAT44(&LAB_100922c0,&local_380);
        FUN_10093970(&local_2a8,(ushort *)&DAT_10140262,(uint)&local_308);
        pauVar39 = pauStack_37c;
        if (0 < (int)local_380) {
          pvVar13 = GetProcessHeap();
          HeapFree(pvVar13,0,pauVar39);
        }
        pcVar34 = local_2dc;
        local_184 = (undefined4)local_2a8;
        uStack_180 = (undefined4)((ulonglong)local_2a8 >> 0x20);
        local_17c = local_2a0;
        if ((pauVar15 == (undefined1 (*) [16])0x3) && ((char)local_3ac == '\x03')) {
          puVar1 = *(undefined4 **)((int)*local_3b0 + 4);
          puVar2 = *(undefined **)*local_3b0;
          if ((code *)*puVar1 != (code *)0x0) {
            (*(code *)*puVar1)(puVar2);
          }
          if (puVar1[1] != 0) {
            FUN_10093cf0(puVar2,puVar1[2]);
          }
          pvVar13 = GetProcessHeap();
          HeapFree(pvVar13,0,local_3b0);
        }
        *pcVar34 = '\x13';
        *(ulonglong *)(pcVar34 + 1) =
             CONCAT17((undefined1)uStack_180,CONCAT43(local_184,uStack_187));
        *(ulonglong *)(pcVar34 + 8) = CONCAT44(local_17c,uStack_180);
        if (_Size != (undefined1 (*) [16])0x0) {
          pvVar13 = GetProcessHeap();
          HeapFree(pvVar13,0,local_310);
        }
        if ((char)local_1b0 != '\0') goto LAB_1006c672;
        FUN_100182e0(&local_380,(int *)local_1b8,0x444e4549,(undefined1 (*) [16])0x1,(int *)0x0);
        pauVar39 = pauStack_378;
        if (((local_380 == (undefined1 (*) [16])0xffffffff) ||
            (local_380 != (undefined1 (*) [16])0x3)) || ((char)pauStack_37c != '\x03'))
        goto LAB_1006c672;
        puVar1 = *(undefined4 **)((int)*pauStack_378 + 4);
        puVar2 = *(undefined **)*pauStack_378;
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)(puVar2);
        }
        if (puVar1[1] != 0) {
          FUN_10093cf0(puVar2,puVar1[2]);
        }
        pvVar13 = GetProcessHeap();
      }
      else {
        cVar10 = local_1cc._1_1_;
        if ((local_1c0._6_1_ == '\x01') &&
           ((((uint)pauVar39 & 1) != 0 &&
            (local_3ac = (undefined1 (*) [16])0x7, local_1cc._1_1_ == '\x02')))) goto LAB_1006ca60;
        piVar14 = local_1dc;
        if (local_1cc._1_1_ == '\x02') {
          piVar14 = (int *)((int)&local_1c8 + 4);
        }
        if (local_1cc._1_1_ == '\x02') {
          pauVar19 = (undefined1 (*) [16])local_1c8;
        }
        iVar23 = *piVar14;
        SVar16 = FUN_100b7590((undefined8 *)&local_1f0,(int)pauVar19);
        pauVar39 = (undefined1 (*) [16])(SVar16 - 1);
        local_3ac = (undefined1 (*) [16])((int)pauVar39 * iVar23);
        pauVar15 = (undefined1 (*) [16])0x0;
        local_3b0 = _Size;
        if ((undefined **)((int)local_3ac + uVar30 * uVar26 * -4) != (undefined **)0x0)
        goto LAB_1006ca60;
        if ((int)pauVar39 < 0) goto LAB_1006c7d1;
        if (pauVar39 == (undefined1 (*) [16])0x0) {
          local_30c = (undefined1 (*) [16])0x1;
        }
        else {
          local_30c = FUN_10107380(8,(SIZE_T)pauVar39);
          if (local_30c == (undefined1 (*) [16])0x0) goto LAB_1006c84b;
        }
        bVar11 = FUN_100b73b0((undefined8 *)&local_1f0);
        uVar30 = (uint)local_1c0._1_1_;
        bVar12 = local_1c0._7_1_;
        uVar28 = CONCAT11(local_1c0._7_1_,local_1c0._4_1_);
        if (uVar30 == 1) {
          FUN_10106960(&local_368);
          pauStack_35c = (undefined1 (*) [16])0x0;
          local_360 = (undefined1 (*) [16])0x0;
          local_358 = (undefined1 (*) [16])((uint)local_358 & 0xffffff00);
          pauStack_37c = (undefined1 (*) [16])0x0;
          local_380 = (undefined1 (*) [16])0x0;
          pauStack_378 = (undefined1 (*) [16])0x0;
          pauStack_374 = (undefined1 (*) [16])0x1;
          pauStack_370 = (undefined1 (*) [16])0x0;
          FUN_101359e0((uint *)&pauStack_378,0,0x35,(LPVOID)0x1,1);
          pauVar15 = pauStack_370;
          memcpy(pauStack_374,&DAT_10140d3c,0x35);
          if (pauVar15 < (undefined1 (*) [16])0x35) {
            pauStack_370 = (undefined1 (*) [16])0x35;
          }
          pauStack_37c = (undefined1 (*) [16])0x0;
          local_380 = (undefined1 (*) [16])0x35;
          FUN_10048220((undefined4 *)&local_2d8,(uint *)&local_380,0xf,0,'\x05');
          cVar8 = (char)local_2d8;
          if ((char)local_2d8 == -1) {
LAB_1006cdc3:
            local_308 = CONCAT44(pauStack_370,pauStack_374);
            local_3ac = local_380;
            local_300 = pauStack_36c;
            pauStack_2fc = local_368;
            local_2e8 = pauStack_354;
            local_2f8 = pauStack_364;
            pauStack_2f4 = local_360;
            local_3b0 = pauStack_37c;
            local_2f0 = pauStack_35c;
            pauStack_2ec = local_358;
            if (pauStack_378 != (undefined1 (*) [16])0xffffffff) {
              local_27c = pauStack_354;
              uStack_28c = SUB42(pauStack_364,0);
              uStack_28a = (undefined2)((uint)pauStack_364 >> 0x10);
              pauStack_288 = local_360;
              local_284 = pauStack_35c;
              pauStack_280 = local_358;
              uStack_29c = SUB41(pauStack_374,0);
              uStack_29b = (undefined2)((uint)pauStack_374 >> 8);
              uStack_299 = (undefined1)((uint)pauStack_374 >> 0x18);
              pauStack_298 = pauStack_370;
              pauStack_294 = pauStack_36c;
              pauStack_290 = local_368;
              local_2a8 = CONCAT44(pauStack_37c,local_380);
              local_2a0 = pauStack_378;
              if ((int)SVar16 < 0) {
LAB_1006c7d1:
                FUN_101367b0();
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
              local_394 = FUN_10107380(8,SVar16);
              if (local_394 == (undefined1 (*) [16])0x0) {
                FUN_101366bc(1);
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
              if (pauVar39 == (undefined1 (*) [16])0x0) {
                FUN_101369c0("chunk size must be non-zero",0x37,
                             &PTR_s_C__Users_runneradmin__cargo_regi_10141c88);
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
              if (_Size != (undefined1 (*) [16])0x0) {
                local_218 = SVar16 & 7;
                local_220 = SVar16 & 0x7ffffff8;
                local_214 = (byte *)((int)*local_394 + 1);
                local_21c = (byte *)((int)*local_394 + local_220);
                local_208 = (uint)bVar11;
                local_20c = (uint)bVar12;
                local_210 = uVar28 & 0xff;
                pauVar15 = local_310;
                pauVar24 = _Size;
                pauVar19 = local_30c;
                local_200 = pauVar39;
LAB_1006cf7b:
                pauVar22 = pauVar24;
                if (pauVar39 < pauVar24) {
                  pauVar22 = pauVar39;
                }
                local_2bc = pauVar24;
                pauVar24 = local_200;
                local_200 = pauVar22;
                local_1fc = pauVar15;
                uVar30 = FUN_100b9ce0(local_20c,local_210,(byte)local_208,(int)pauVar19,
                                      (uint)pauVar24,pauVar15,(int)pauVar22,local_214,(uint)pauVar39
                                     );
                (*local_394)[0] = (char)uVar30;
                uStack_28c = (*(code *)pauStack_290)
                                       (CONCAT22(uStack_28a,uStack_28c),uStack_28a,local_394,SVar16)
                ;
                uStack_28a = extraout_DX;
                pbVar7 = local_21c;
                uVar30 = local_218;
                if (7 < SVar16) {
                  uVar26 = 0;
                  pauVar15 = local_394;
                  uVar35 = local_220;
                  do {
                    while( true ) {
                      puVar2 = *(undefined **)*pauVar15;
                      puVar3 = *(undefined **)((int)*pauVar15 + 4);
                      uVar35 = uVar35 - 8;
                      if (puVar2 != (undefined *)0x0 || puVar3 != (undefined *)0x0) break;
                      uVar26 = uVar26 + 8;
joined_r0x1006d1d2:
                      pauVar15 = (undefined1 (*) [16])((int)*pauVar15 + 8);
                      if (uVar35 == 0) {
                        pbVar7 = local_21c;
                        uVar30 = local_218;
                        if (uVar26 != 0) {
                          FUN_10048380((undefined8 *)&local_380,(uint *)&local_2a8,uVar26);
                          pbVar7 = local_21c;
                          uVar30 = local_218;
                          if ((char)local_380 != -1) goto LAB_1006cf3f;
                        }
                        goto joined_r0x1006d017;
                      }
                    }
                    if (uVar26 != 0) {
                      uStack_204 = 0;
                      for (puVar5 = puVar2; ((uint)puVar5 & 1) == 0;
                          puVar5 = (undefined *)((uint)puVar5 >> 1 | 0x80000000)) {
                        uStack_204 = uStack_204 + 1;
                      }
                      iVar37 = 0;
                      for (puVar5 = puVar3; ((uint)puVar5 & 1) == 0;
                          puVar5 = (undefined *)((uint)puVar5 >> 1 | 0x80000000)) {
                        iVar37 = iVar37 + 1;
                      }
                      uVar30 = iVar37 + 0x20;
                      if (puVar2 != (undefined *)0x0) {
                        uVar30 = uStack_204;
                      }
                      uVar30 = uVar30 >> 3;
                      FUN_10048380((undefined8 *)&local_380,(uint *)&local_2a8,uVar26 + uVar30);
                      if ((char)local_380 != -1) goto LAB_1006cf3f;
                      if (uVar30 != 0) {
                        uVar26 = 0x1f;
                        if (puVar2 != (undefined *)0x0) {
                          for (; (uint)puVar2 >> uVar26 == 0; uVar26 = uVar26 - 1) {
                          }
                        }
                        uVar36 = 0x1f;
                        if (puVar3 != (undefined *)0x0) {
                          for (; (uint)puVar3 >> uVar36 == 0; uVar36 = uVar36 - 1) {
                          }
                        }
                        uVar26 = uVar26 ^ 0x1f | 0x20;
                        if (puVar3 != (undefined *)0x0) {
                          uVar26 = uVar36 ^ 0x18;
                        }
                        uVar26 = uVar26 >> 3;
                        uVar36 = 8 - uVar26;
                        if (uVar36 < uVar30) {
                          FUN_10136a50(uVar30,uVar36,8,
                                       &PTR_s_C__Users_runneradmin__cargo_regi_10140d2c);
                    /* WARNING: Does not return */
                          pcVar4 = (code *)invalidInstructionException();
                          (*pcVar4)();
                        }
                        for (; uVar36 != uVar30; uVar30 = uVar30 + 1) {
                          uVar20 = (uint)*(byte *)((int)*pauVar15 + uVar30);
                          FUN_10048220(&local_380,(uint *)&local_2a8,
                                       (uint)*(ushort *)(&DAT_101409d0 + uVar20 * 2),0,
                                       (&DAT_10140c0c)[uVar20]);
                          if ((char)local_380 != -1) goto LAB_1006cf3f;
                        }
                        goto joined_r0x1006d1d2;
                      }
                    }
                    uVar30 = 0x1f;
                    if (puVar3 != (undefined *)0x0) {
                      for (; (uint)puVar3 >> uVar30 == 0; uVar30 = uVar30 - 1) {
                      }
                    }
                    uVar26 = 0x1f;
                    if (puVar2 != (undefined *)0x0) {
                      for (; (uint)puVar2 >> uVar26 == 0; uVar26 = uVar26 - 1) {
                      }
                    }
                    uVar26 = uVar26 ^ 0x1f | 0x20;
                    if (puVar3 != (undefined *)0x0) {
                      uVar26 = uVar30 ^ 0x18;
                    }
                    uVar26 = uVar26 >> 3;
                    if (uVar26 != 0) {
                      iVar37 = 0;
                      do {
                        uVar30 = (uint)*(byte *)((int)*pauVar15 + iVar37);
                        FUN_10048220(&local_380,(uint *)&local_2a8,
                                     (uint)*(ushort *)(&DAT_101409d0 + uVar30 * 2),0,
                                     (&DAT_10140c0c)[uVar30]);
                        if ((char)local_380 != -1) goto LAB_1006cf3f;
                        iVar37 = iVar37 + 1;
                      } while (8 - uVar26 != iVar37);
                      goto joined_r0x1006d1d2;
                    }
                    uVar20 = (uint)puVar2 >> 8 & 0xff;
                    bVar12 = (&DAT_10140c0c)[(uint)puVar2 & 0xff];
                    uVar36 = (uint)*(ushort *)(&DAT_101409d0 + uVar20 * 2) << (bVar12 & 0x1f);
                    uVar26 = uVar36;
                    uVar30 = 0 << (bVar12 & 0x1f) |
                             (uint)(*(ushort *)(&DAT_101409d0 + uVar20 * 2) >>
                                   0x20 - (bVar12 & 0x1f));
                    if ((bVar12 & 0x20) != 0) {
                      uVar26 = 0;
                      uVar30 = uVar36;
                    }
                    uVar21 = (uint)puVar2 >> 0x10 & 0xff;
                    bVar12 = bVar12 + (&DAT_10140c0c)[uVar20];
                    uVar27 = (uint)*(ushort *)(&DAT_101409d0 + uVar21 * 2) << (bVar12 & 0x1f);
                    uVar20 = uVar27;
                    uVar36 = 0 << (bVar12 & 0x1f) |
                             (uint)(*(ushort *)(&DAT_101409d0 + uVar21 * 2) >>
                                   0x20 - (bVar12 & 0x1f));
                    if ((bVar12 & 0x20) != 0) {
                      uVar20 = 0;
                      uVar36 = uVar27;
                    }
                    bVar12 = bVar12 + (&DAT_10140c0c)[uVar21];
                    uVar33 = (uint)*(ushort *)(&DAT_101409d0 + ((uint)puVar2 >> 0x18) * 2) <<
                             (bVar12 & 0x1f);
                    uVar27 = uVar33;
                    uVar21 = 0 << (bVar12 & 0x1f) |
                             (uint)(*(ushort *)(&DAT_101409d0 + ((uint)puVar2 >> 0x18) * 2) >>
                                   0x20 - (bVar12 & 0x1f));
                    if ((bVar12 & 0x20) != 0) {
                      uVar27 = 0;
                      uVar21 = uVar33;
                    }
                    FUN_10048220(&local_380,(uint *)&local_2a8,
                                 uVar27 | uVar20 | uVar26 | *(ushort *)
                                                             (&DAT_101409d0 +
                                                             ((uint)puVar2 & 0xff) * 2),
                                 uVar21 | uVar36 | uVar30,
                                 bVar12 + (&DAT_10140c0c)[(uint)puVar2 >> 0x18]);
                    if ((char)local_380 != -1) goto LAB_1006cf3f;
                    uVar20 = (uint)puVar3 >> 8 & 0xff;
                    bVar12 = (&DAT_10140c0c)[(uint)puVar3 & 0xff];
                    uVar36 = (uint)*(ushort *)(&DAT_101409d0 + uVar20 * 2) << (bVar12 & 0x1f);
                    uVar26 = uVar36;
                    uVar30 = 0 << (bVar12 & 0x1f) |
                             (uint)(*(ushort *)(&DAT_101409d0 + uVar20 * 2) >>
                                   0x20 - (bVar12 & 0x1f));
                    if ((bVar12 & 0x20) != 0) {
                      uVar26 = 0;
                      uVar30 = uVar36;
                    }
                    uVar21 = (uint)puVar3 >> 0x10 & 0xff;
                    bVar12 = bVar12 + (&DAT_10140c0c)[uVar20];
                    uVar27 = (uint)*(ushort *)(&DAT_101409d0 + uVar21 * 2) << (bVar12 & 0x1f);
                    uVar20 = uVar27;
                    uVar36 = 0 << (bVar12 & 0x1f) |
                             (uint)(*(ushort *)(&DAT_101409d0 + uVar21 * 2) >>
                                   0x20 - (bVar12 & 0x1f));
                    if ((bVar12 & 0x20) != 0) {
                      uVar20 = 0;
                      uVar36 = uVar27;
                    }
                    bVar12 = bVar12 + (&DAT_10140c0c)[uVar21];
                    uVar33 = (uint)*(ushort *)(&DAT_101409d0 + ((uint)puVar3 >> 0x18) * 2) <<
                             (bVar12 & 0x1f);
                    uVar27 = uVar33;
                    uVar21 = 0 << (bVar12 & 0x1f) |
                             (uint)(*(ushort *)(&DAT_101409d0 + ((uint)puVar3 >> 0x18) * 2) >>
                                   0x20 - (bVar12 & 0x1f));
                    if ((bVar12 & 0x20) != 0) {
                      uVar27 = 0;
                      uVar21 = uVar33;
                    }
                    FUN_10048220(&local_380,(uint *)&local_2a8,
                                 uVar27 | uVar20 | uVar26 | *(ushort *)
                                                             (&DAT_101409d0 +
                                                             ((uint)puVar3 & 0xff) * 2),
                                 uVar21 | uVar36 | uVar30,
                                 bVar12 + (&DAT_10140c0c)[(uint)puVar3 >> 0x18]);
                    if ((char)local_380 != -1) goto LAB_1006cf3f;
                    uVar26 = 0;
                    pauVar15 = (undefined1 (*) [16])((int)*pauVar15 + 8);
                    pbVar7 = local_21c;
                    uVar30 = local_218;
                  } while (uVar35 != 0);
                }
joined_r0x1006d017:
                do {
                  if (uVar30 == 0) goto LAB_1006cf5b;
                  FUN_10048220(&local_380,(uint *)&local_2a8,
                               (uint)*(ushort *)(&DAT_101409d0 + (uint)*pbVar7 * 2),0,
                               (&DAT_10140c0c)[*pbVar7]);
                  if ((char)local_380 != -1) goto LAB_1006cf3f;
                  pbVar7 = pbVar7 + 1;
                  uVar30 = uVar30 - 1;
                } while( true );
              }
LAB_1006d3d3:
              local_360 = pauStack_288;
              pauStack_35c = local_284;
              local_368 = pauStack_290;
              pauStack_364 = (undefined1 (*) [16])
                             (CONCAT26(uStack_28a,CONCAT24(uStack_28c,pauStack_290)) >> 0x20);
              local_358 = pauStack_280;
              pauStack_354 = local_27c;
              pauStack_370 = pauStack_298;
              pauStack_36c = pauStack_294;
              local_380 = (undefined1 (*) [16])local_2a8;
              pauStack_37c = (undefined1 (*) [16])((ulonglong)local_2a8 >> 0x20);
              pauStack_378 = local_2a0;
              pauStack_374 = (undefined1 (*) [16])
                             (CONCAT17(uStack_299,
                                       CONCAT25(uStack_29b,CONCAT14(uStack_29c,local_2a0))) >> 0x20)
              ;
              FUN_10048220((undefined4 *)&local_308,(uint *)&local_380,0x8ff,0,'\f');
              pauVar22 = pauStack_35c;
              pauVar19 = local_360;
              pauVar24 = pauStack_374;
              pauVar15 = local_380;
              if ((char)local_308 == -1) {
                bVar12 = (byte)local_358;
                if (((uint)local_358 & 7) != 0) {
                  bVar12 = ((byte)local_358 & 0xf8) + 8;
                  local_358 = (undefined1 (*) [16])CONCAT31(local_358._1_3_,bVar12);
                  if (0x3f < bVar12) {
                    if (pauStack_37c != (undefined1 (*) [16])0x0) {
                      local_3b0 = (undefined1 (*) [16])
                                  &PTR_s_cursor_position_exceeds_maximum_p_1013f6b4;
                      local_3ac = (undefined1 (*) [16])0x2;
                      goto joined_r0x1006d4da;
                    }
                    pauVar29 = (undefined1 (*) [16])((int)*local_380 + 8);
                    pauVar24 = (undefined1 (*) [16])0xffffffff;
                    if (local_380 < (undefined1 (*) [16])0xfffffff8) {
                      pauVar24 = pauVar29;
                    }
                    if ((pauStack_378 < pauVar24) &&
                       ((uint)((int)pauStack_378 - (int)pauStack_370) <
                        (uint)((int)pauVar24 - (int)pauStack_370))) {
                      FUN_101359e0((uint *)&pauStack_378,(uint)pauStack_370,
                                   (int)pauVar24 - (int)pauStack_370,(LPVOID)0x1,1);
                      sVar25 = (int)pauVar15 - (int)pauStack_370;
                      pauVar24 = pauStack_374;
                      if (pauStack_370 <= pauVar15 && sVar25 != 0) {
LAB_1006d559:
                        pauVar24 = pauStack_374;
                        memset((undefined1 *)((int)*pauStack_374 + (int)*pauStack_370),0,sVar25);
                        pauStack_370 = pauVar15;
                      }
                    }
                    else {
                      sVar25 = (int)local_380 - (int)pauStack_370;
                      pauVar24 = pauStack_374;
                      if (pauStack_370 <= local_380 && sVar25 != 0) goto LAB_1006d559;
                    }
                    *(undefined1 (**) [16])((int)*pauVar15 + (int)*pauVar24) = pauVar19;
                    *(undefined1 (**) [16])((int)((int)*pauVar24 + 4) + (int)pauVar15) = pauVar22;
                    if (pauStack_370 < pauVar29) {
                      pauStack_370 = pauVar29;
                    }
                    local_380 = (undefined1 (*) [16])((int)*pauVar15 + 8);
                    pauStack_37c = (undefined1 (*) [16])
                                   (uint)((undefined1 (*) [16])0xfffffff7 < pauVar15);
                    bVar12 = (byte)local_358 - 0x40;
                    local_358 = (undefined1 (*) [16])CONCAT31(local_358._1_3_,bVar12);
                    pauStack_35c = (undefined1 (*) [16])0x0;
                    local_360 = (undefined1 (*) [16])0x0;
                  }
                }
                pauVar15 = local_380;
                if (bVar12 != 0) {
                  local_2d8._4_4_ = pauStack_35c;
                  local_2d8._0_4_ = local_360;
                  uVar30 = (uint)(bVar12 >> 3);
                  if (0x47 < bVar12) {
                    FUN_10136a50(0,uVar30,8,&PTR_s_C__Users_runneradmin__cargo_regi_10140d84);
                    /* WARNING: Does not return */
                    pcVar4 = (code *)invalidInstructionException();
                    (*pcVar4)();
                  }
                  if (pauStack_37c != (undefined1 (*) [16])0x0) {
                    ppuVar40 = &PTR_s_C__Users_runneradmin__cargo_regi_10140d74;
                    goto LAB_1006dcab;
                  }
                  pauVar19 = (undefined1 (*) [16])((int)*local_380 + uVar30);
                  pauVar24 = (undefined1 (*) [16])0xffffffff;
                  if (!CARRY4((uint)local_380,uVar30)) {
                    pauVar24 = pauVar19;
                  }
                  if ((pauStack_378 < pauVar24) &&
                     ((uint)((int)pauStack_378 - (int)pauStack_370) <
                      (uint)((int)pauVar24 - (int)pauStack_370))) {
                    FUN_101359e0((uint *)&pauStack_378,(uint)pauStack_370,
                                 (int)pauVar24 - (int)pauStack_370,(LPVOID)0x1,1);
                    sVar25 = (int)pauVar15 - (int)pauStack_370;
                    pauVar24 = pauStack_374;
                    if (pauStack_370 <= pauVar15 && sVar25 != 0) {
LAB_1006d6b6:
                      pauVar24 = pauStack_374;
                      memset((undefined1 *)((int)*pauStack_374 + (int)*pauStack_370),0,sVar25);
                      pauStack_370 = pauVar15;
                    }
                  }
                  else {
                    sVar25 = (int)local_380 - (int)pauStack_370;
                    pauVar24 = pauStack_374;
                    if (pauStack_370 <= local_380 && sVar25 != 0) goto LAB_1006d6b6;
                  }
                  pauVar22 = pauStack_370;
                  memcpy((undefined1 *)((int)*pauVar15 + (int)*pauVar24),&local_2d8,uVar30);
                  if (pauVar22 < pauVar19) {
                    pauStack_370 = pauVar19;
                  }
                  local_380 = (undefined1 (*) [16])((int)*pauVar15 + uVar30);
                  pauStack_37c = (undefined1 (*) [16])(uint)CARRY4((uint)pauVar15,uVar30);
                  pauStack_35c = (undefined1 (*) [16])0x0;
                  local_360 = (undefined1 (*) [16])0x0;
                  local_358 = (undefined1 (*) [16])((uint)local_358 & 0xffffff00);
                }
                pauVar19 = pauStack_364;
                pauVar15 = local_380;
                if (pauStack_37c != (undefined1 (*) [16])0x0) {
                  ppuVar40 = &PTR_s_C__Users_runneradmin__cargo_regi_10140d94;
LAB_1006dcab:
                  local_308 = 0x1013f6b400000002;
                  FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_308,
                               &PTR_FUN_1013f548,ppuVar40);
                    /* WARNING: Does not return */
                  pcVar4 = (code *)invalidInstructionException();
                  (*pcVar4)();
                }
                pauVar24 = (undefined1 (*) [16])0xffffffff;
                if (local_380 < (undefined1 (*) [16])0xfffffffc) {
                  pauVar24 = (undefined1 (*) [16])((int)*local_380 + 4);
                }
                if ((pauStack_378 < pauVar24) &&
                   ((uint)((int)pauStack_378 - (int)pauStack_370) <
                    (uint)((int)pauVar24 - (int)pauStack_370))) {
                  FUN_101359e0((uint *)&pauStack_378,(uint)pauStack_370,
                               (int)pauVar24 - (int)pauStack_370,(LPVOID)0x1,1);
                }
                pauVar24 = pauStack_374;
                pauVar22 = pauStack_370;
                if (pauStack_370 <= pauVar15 && (int)pauVar15 - (int)pauStack_370 != 0) {
                  memset((undefined1 *)((int)*pauStack_374 + (int)*pauStack_370),0,
                         (int)pauVar15 - (int)pauStack_370);
                  pauVar22 = pauVar15;
                }
                pauVar29 = pauStack_378;
                local_3ac = (undefined1 (*) [16])((int)*pauVar15 + 4);
                local_3b0 = (undefined1 (*) [16])(uint)((undefined1 (*) [16])0xfffffffb < pauVar15);
                *(uint *)((int)*pauVar15 + (int)*pauVar24) =
                     (uint)pauVar19 >> 0x18 | ((uint)pauVar19 & 0xff0000) >> 8 |
                     ((uint)pauVar19 & 0xff00) << 8 | (int)pauVar19 << 0x18;
                if (pauStack_378 == (undefined1 (*) [16])0xffffffff) goto LAB_1006d483;
                pauVar19 = (undefined1 (*) [16])((int)*pauVar15 + 4);
                if ((undefined1 (*) [16])((int)*pauVar15 + 4) <= pauVar22) {
                  pauVar19 = pauVar22;
                }
                uVar30 = SVar16 * iVar23;
                if (pauVar19 <=
                    (undefined1 (*) [16])
                    (uVar30 % 0xffff + 0xb +
                    (((uVar30 - 1) + (uint)(uVar30 == 0)) / 0xffff) * 0x10004)) {
                  local_3a0 = pauVar24;
                  local_3a4 = pauStack_378;
LAB_1006da04:
                  pvVar13 = GetProcessHeap();
                  HeapFree(pvVar13,0,local_394);
                  goto joined_r0x1006da20;
                }
                local_2d0 = 0x100000000;
                local_2c8 = (undefined1 (*) [16])0x0;
                local_2d8 = 0;
                FUN_10052c50((undefined8 *)&local_380,(uint *)&local_2d8);
                local_3ac = local_380;
                local_3b0 = pauStack_37c;
                if (pauStack_378 != (undefined1 (*) [16])0xffffffff) {
                  local_308 = CONCAT44(pauStack_37c,local_380);
                  pauStack_2e4 = pauStack_35c;
                  local_300 = pauStack_378;
                  pauVar19 = local_310;
                  pauStack_2fc = pauStack_374;
                  local_2f8 = pauStack_370;
                  pauStack_2f4 = pauStack_36c;
                  local_2f0 = local_368;
                  pauStack_2ec = pauStack_364;
                  local_2e8 = local_360;
                  for (pauVar15 = _Size; pauVar15 != (undefined1 (*) [16])0x0;
                      pauVar15 = (undefined1 (*) [16])((int)pauVar15 - (int)pauVar22)) {
                    pauVar22 = pauVar15;
                    if (pauVar39 < pauVar15) {
                      pauVar22 = pauVar39;
                    }
                    FUN_10052970(&local_380,(uint *)&local_308,&DAT_1015bc3c,1);
                    if ((char)local_380 != -1) {
LAB_1006dbd8:
                      pauVar15 = pauStack_2fc;
                      local_3ac = local_380;
                      local_3b0 = pauStack_37c;
                      if (local_300 != (undefined1 (*) [16])0x0) {
                        pvVar13 = GetProcessHeap();
                        HeapFree(pvVar13,0,pauVar15);
                      }
                      goto LAB_1006dc1f;
                    }
                    FUN_10052970(&local_380,(uint *)&local_308,pauVar19,(uint)pauVar22);
                    if ((char)local_380 != -1) goto LAB_1006dbd8;
                    pauVar19 = (undefined1 (*) [16])((int)*pauVar22 + (int)*pauVar19);
                  }
                  local_380 = (undefined1 (*) [16])local_308;
                  pauStack_37c = (undefined1 (*) [16])((ulonglong)local_308 >> 0x20);
                  pauStack_378 = local_300;
                  pauStack_374 = pauStack_2fc;
                  pauStack_370 = local_2f8;
                  pauStack_36c = pauStack_2f4;
                  local_368 = local_2f0;
                  pauStack_364 = pauStack_2ec;
                  local_360 = local_2e8;
                  pauStack_35c = pauStack_2e4;
                  FUN_10052e90(&local_2d8,(uint *)&local_380);
                  pauVar19 = local_2c8;
                  local_3a4 = (undefined1 (*) [16])local_2d0;
                  if ((undefined1 (*) [16])local_2d0 != (undefined1 (*) [16])0xffffffff) {
                    local_3a0 = local_2d0._4_4_;
                    if (pauVar29 != (undefined1 (*) [16])0x0) {
                      pvVar13 = GetProcessHeap();
                      HeapFree(pvVar13,0,pauVar24);
                    }
                    goto LAB_1006da04;
                  }
                  local_3ac = (undefined1 (*) [16])local_2d8;
                  local_3b0 = local_2d8._4_4_;
                }
LAB_1006dc1f:
                if (pauVar29 != (undefined1 (*) [16])0x0) {
                  pvVar13 = GetProcessHeap();
                  goto LAB_1006d47a;
                }
              }
              else {
                local_3b0 = local_308._4_4_;
                local_3ac = (undefined1 (*) [16])local_308;
joined_r0x1006d4da:
                if (pauStack_378 != (undefined1 (*) [16])0x0) {
                  pvVar13 = GetProcessHeap();
LAB_1006d47a:
                  HeapFree(pvVar13,0,pauVar24);
                }
              }
LAB_1006d483:
              pvVar13 = GetProcessHeap();
              goto LAB_1006ca31;
            }
          }
          else {
            local_3ac = (undefined1 (*) [16])local_2d8;
            if (cVar8 == -1) goto LAB_1006cdc3;
            local_3b0 = local_2d8._4_4_;
            local_394 = pauStack_374;
            if (pauStack_378 != (undefined1 (*) [16])0x0) {
LAB_1006cd72:
              pvVar13 = GetProcessHeap();
              goto LAB_1006ca31;
            }
          }
LAB_1006ca3a:
          pauVar15 = (undefined1 (*) [16])0x3;
LAB_1006ca43:
          if (pauVar39 != (undefined1 (*) [16])0x0) {
            pvVar13 = GetProcessHeap();
            HeapFree(pvVar13,0,local_30c);
          }
          goto LAB_1006ca60;
        }
        if (pauVar39 == (undefined1 (*) [16])0x0) {
          local_394 = (undefined1 (*) [16])0x1;
        }
        else {
          local_394 = FUN_10107380(8,(SIZE_T)pauVar39);
          if (local_394 == (undefined1 (*) [16])0x0) {
LAB_1006c84b:
            FUN_101366bc(1);
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
        }
        FUN_100a3830((undefined8 *)&local_380,*(int *)(&DAT_1015fdc0 + uVar30 * 4));
        pvVar17 = FUN_10107380(0,0x8000);
        if (pvVar17 == (LPVOID)0x0) {
          FUN_101366bc(1);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        ppauVar31 = &local_380;
        puVar32 = &local_2a8;
        for (iVar23 = 0x16; iVar23 != 0; iVar23 = iVar23 + -1) {
          *(undefined1 (**) [16])puVar32 = *ppauVar31;
          ppauVar31 = ppauVar31 + 1;
          puVar32 = (undefined8 *)((int)puVar32 + 4);
        }
        local_250 = 0;
        local_24c = 1;
        local_248 = 0;
        local_244 = 0x8000;
        local_240 = pvVar17;
        local_23c = 0;
        if (pauVar39 == (undefined1 (*) [16])0x0) {
          FUN_101369c0("chunk size must be non-zero",0x37,
                       &PTR_s_C__Users_runneradmin__cargo_regi_10141c98);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if (_Size != (undefined1 (*) [16])0x0) {
          local_2bc = (undefined1 (*) [16])(uVar28 & 0xff);
          pauVar15 = local_310;
          pauVar24 = _Size;
          pauVar19 = local_30c;
          pauVar22 = pauVar39;
          do {
            pauVar18 = pauVar15;
            pauVar29 = pauVar24;
            if (pauVar39 < pauVar24) {
              pauVar29 = pauVar39;
            }
            uVar30 = FUN_100b9ce0((uint)bVar12,(int)local_2bc,bVar11,(int)pauVar19,(uint)pauVar22,
                                  pauVar18,(int)pauVar29,(byte *)local_394,(uint)pauVar39);
            local_308 = CONCAT71(local_308._1_7_,(char)uVar30);
            FUN_10092830((uint *)&local_380,&local_2a8,(int)&local_308,(undefined **)0x1);
            if ((char)local_380 != -1) {
LAB_1006ca0f:
              local_3ac = local_380;
              local_3b0 = pauStack_37c;
              FUN_100053b0(&local_2a8);
              pvVar13 = GetProcessHeap();
              goto LAB_1006ca31;
            }
            FUN_10092830((uint *)&local_380,&local_2a8,(int)local_394,(undefined **)pauVar39);
            if ((char)local_380 != -1) goto LAB_1006ca0f;
            pauVar24 = (undefined1 (*) [16])((int)pauVar24 - (int)pauVar29);
            pauVar15 = (undefined1 (*) [16])((int)*pauVar29 + (int)*pauVar18);
            pauVar19 = pauVar18;
            pauVar22 = pauVar29;
          } while (pauVar24 != (undefined1 (*) [16])0x0);
        }
        puVar32 = &local_2a8;
        ppauVar31 = &local_380;
        for (iVar23 = 0x1c; iVar23 != 0; iVar23 = iVar23 + -1) {
          *ppauVar31 = *(undefined1 (**) [16])puVar32;
          puVar32 = (undefined8 *)((int)puVar32 + 4);
          ppauVar31 = ppauVar31 + 1;
        }
        FUN_1004f710((undefined2 *)&local_308,(longlong *)&local_380);
        local_3a4 = local_328;
        if ((char)local_308 != -1) {
          local_3ac = (undefined1 (*) [16])local_308;
          local_3b0 = local_308._4_4_;
          FUN_100053b0((longlong *)&local_380);
          pvVar13 = GetProcessHeap();
LAB_1006ca31:
          HeapFree(pvVar13,0,local_394);
          goto LAB_1006ca3a;
        }
        local_328 = (undefined1 (*) [16])0xffffffff;
        if (local_3a4 == (undefined1 (*) [16])0xffffffff) {
          FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_101411ac);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        FUN_100053b0((longlong *)&local_380);
        pvVar13 = GetProcessHeap();
        HeapFree(pvVar13,0,local_394);
        pauVar19 = local_320;
        local_3a0 = local_324;
joined_r0x1006da20:
        piVar14 = (int *)local_1b8;
        pauVar15 = local_3a0;
        if (cVar10 != '\x02') {
          local_1c0._5_1_ = (char)((ulonglong)local_1c0 >> 0x28);
          bVar38 = local_1c0._5_1_ == '\0';
          if (bVar38) {
            FUN_100031f0(&local_380,(undefined1 (*) [16])&local_1e4,(int *)local_1b8);
            if (local_380 == (undefined1 (*) [16])0xffffffff) {
              local_1e4 = (undefined1 (*) [16])((int)*pauVar6 + 1);
              local_1b8 = CONCAT44(local_1b8._4_4_ + 1,(int *)local_1b8);
              goto LAB_1006da7e;
            }
          }
          else {
LAB_1006da7e:
            FUN_10052210((undefined8 *)&local_380,piVar14,local_3a0,(int *)pauVar19);
            if (local_380 == (undefined1 (*) [16])0xffffffff) goto LAB_1006dac9;
          }
LAB_1006da93:
          pauVar15 = local_380;
          local_3ac = pauStack_37c;
          local_3b0 = pauStack_378;
          if (local_3a4 != (undefined1 (*) [16])0x0) {
            pvVar13 = GetProcessHeap();
            HeapFree(pvVar13,0,local_3a0);
          }
          goto LAB_1006ca43;
        }
        for (; pauVar19 != (undefined1 (*) [16])0x0;
            pauVar19 = (undefined1 (*) [16])((int)pauVar19 - (int)pauVar24)) {
          pauVar24 = (undefined1 (*) [16])0x7fffffff;
          if (pauVar19 < (undefined1 (*) [16])0x7fffffff) {
            pauVar24 = pauVar19;
          }
          FUN_100182e0(&local_380,piVar14,0x54414449,pauVar15,(int *)pauVar24);
          if (local_380 != (undefined1 (*) [16])0xffffffff) goto LAB_1006da93;
          pauVar15 = (undefined1 (*) [16])((int)*pauVar24 + (int)*pauVar15);
        }
LAB_1006dac9:
        if (local_3a4 != (undefined1 (*) [16])0x0) {
          pvVar13 = GetProcessHeap();
          HeapFree(pvVar13,0,local_3a0);
        }
        pcVar34 = local_2dc;
        if (pauVar39 != (undefined1 (*) [16])0x0) {
          pvVar13 = GetProcessHeap();
          HeapFree(pvVar13,0,local_30c);
        }
        if ((local_1b0 & 1) == 0) {
          FUN_100182e0(&local_380,(int *)local_1b8,0x444e4549,(undefined1 (*) [16])0x1,(int *)0x0);
          pauVar39 = pauStack_378;
          if (((local_380 != (undefined1 (*) [16])0xffffffff) &&
              (local_380 == (undefined1 (*) [16])0x3)) && ((char)pauStack_37c == '\x03')) {
            puVar1 = *(undefined4 **)((int)*pauStack_378 + 4);
            puVar2 = *(undefined **)*pauStack_378;
            if ((code *)*puVar1 != (code *)0x0) {
              (*(code *)*puVar1)(puVar2);
            }
            if (puVar1[1] != 0) {
              FUN_10093cf0(puVar2,puVar1[2]);
            }
            pvVar13 = GetProcessHeap();
            HeapFree(pvVar13,0,pauVar39);
            pcVar34 = local_2dc;
          }
        }
        FUN_10053090((undefined8 *)&local_380,(int)local_238);
        if (((char)local_380 == -1) || ((char)local_380 == -1)) {
          *pcVar34 = -1;
        }
        else {
          *pcVar34 = '\0';
          *(undefined1 (**) [16])(pcVar34 + 4) = local_380;
          *(undefined1 (**) [16])(pcVar34 + 8) = pauStack_37c;
        }
        if (_Size == (undefined1 (*) [16])0x0) goto LAB_1006c672;
        pvVar13 = GetProcessHeap();
        pauVar39 = local_310;
      }
      HeapFree(pvVar13,0,pauVar39);
      goto LAB_1006c672;
    }
    local_3ac = (undefined1 (*) [16])((int)pauVar6 << 8);
    local_38c = (uint)pauVar6 >> 0x18;
  }
  FUN_100935a0((undefined8 *)&local_380,param_3,param_4);
  local_2b0 = &LAB_100922c0;
  local_2b4 = (undefined1 (*) [16])&local_380;
  FUN_10093970(&local_2a8,(ushort *)&DAT_10140262,(uint)&local_2b4);
  pauVar39 = pauStack_37c;
  if (0 < (int)local_380) {
    pvVar13 = GetProcessHeap();
    HeapFree(pvVar13,0,pauVar39);
  }
  pauVar39 = local_2a0;
  uVar30 = (uint)local_2a8;
  uVar9 = local_2a8._4_4_;
  if ((local_3b0 == (undefined1 (*) [16])0x3) && (local_3a8 == '\x03')) {
    piVar14 = (int *)(local_38c << 0x18 | (uint)local_3ac >> 8);
    puVar1 = (undefined4 *)piVar14[1];
    pvVar17 = (LPVOID)*piVar14;
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)(pvVar17);
    }
    if (puVar1[1] != 0) {
      if (8 < (uint)puVar1[2]) {
        pvVar17 = *(LPVOID *)((int)pvVar17 + -4);
      }
      pvVar13 = GetProcessHeap();
      HeapFree(pvVar13,0,pvVar17);
    }
    pvVar13 = GetProcessHeap();
    HeapFree(pvVar13,0,piVar14);
  }
  local_1a8 = uStack_178;
  local_1a0 = uStack_170;
  local_198 = local_168;
  *(undefined1 (**) [16])(local_2dc + 0x20) = local_168;
  *(undefined8 *)(local_2dc + 0x18) = uStack_170;
  *(undefined8 *)(local_2dc + 0x10) = uStack_178;
  local_2dc[0] = '\x13';
  local_2dc[1] = '\0';
  local_2dc[2] = '\0';
  local_2dc[3] = '\0';
  *(undefined4 *)(local_2dc + 8) = uVar9;
  *(uint *)(local_2dc + 4) = uVar30;
  *(undefined1 (**) [16])(local_2dc + 0xc) = pauVar39;
LAB_1006c672:
  FUN_10005aa0(local_238);
  return;
LAB_1006cf3f:
  local_3b0 = pauStack_37c;
  if ((char)local_380 != -1) {
    local_3ac = local_380;
    pvVar13 = GetProcessHeap();
    HeapFree(pvVar13,0,local_394);
    if (local_2a0 == (undefined1 (*) [16])0x0) goto LAB_1006ca3a;
    local_394 = (undefined1 (*) [16])CONCAT13(uStack_299,CONCAT21(uStack_29b,uStack_29c));
    goto LAB_1006cd72;
  }
LAB_1006cf5b:
  pauVar15 = (undefined1 (*) [16])((int)*local_200 + (int)*local_1fc);
  pauVar24 = (undefined1 (*) [16])((int)local_2bc - (int)local_200);
  pauVar19 = local_1fc;
  if (pauVar24 == (undefined1 (*) [16])0x0) goto LAB_1006d3d3;
  goto LAB_1006cf7b;
}
