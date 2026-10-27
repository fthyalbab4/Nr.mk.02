// rea decompile_all
// name: FUN_100c2de0
// address: 0x100c2de0
// body: available
// range: 0x100c2de0-0x100c3083 inclusive
// range: 0x100c309f-0x100c3105 inclusive
// range: 0x100c3160-0x100c32ab inclusive
// range: 0x100c3319-0x100c33bf inclusive
// range: 0x100c3688-0x100c3a99 inclusive
// range: 0x100c3ae9-0x100c3bae inclusive
// range: 0x100c3c50-0x100c3c61 inclusive
// range: 0x100c3c7c-0x100c40d3 inclusive
// range: 0x100c4117-0x100c41a1 inclusive
// range: 0x100c41b0-0x100c42e8 inclusive
// range: 0x100c42f0-0x100c4454 inclusive
// range: 0x100c48ad-0x100c48cd inclusive
// range: 0x100c5c8d-0x100c5d01 inclusive
// range: 0x100c5d10-0x100c5dc5 inclusive
// range: 0x100c5e5e-0x100c5e73 inclusive
// range: 0x100c5e80-0x100c5f7b inclusive
// range: 0x100c5f80-0x100c60e7 inclusive
// range: 0x100c61b1-0x100c67b3 inclusive
// range: 0x100c681c-0x100c6827 inclusive
// range: 0x100c6839-0x100c68a6 inclusive
// range: 0x100c68b8-0x100c68eb inclusive
// range: 0x100c690e-0x100c694c inclusive
// range: 0x100c69f3-0x100c6a1f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
FUN_100c2de0(undefined4 *param_1,undefined8 *param_2,undefined4 param_3,uint *******param_4)

{
  char cVar1;
  undefined1 uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined2 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  uint ***********pppppppppppuVar9;
  uint uVar10;
  uint *************pppppppppppppuVar11;
  uint ************ppppppppppppuVar12;
  HANDLE pvVar13;
  uint *puVar14;
  uint *puVar15;
  undefined4 *puVar16;
  LPVOID pvVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint ***********pppppppppppuVar20;
  undefined8 *puVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  undefined1 *puVar25;
  uint ***********pppppppppppuVar26;
  uint uVar27;
  uint ***********pppppppppppuVar28;
  uint ***********pppppppppppuVar29;
  uint *puVar30;
  uint ***********pppppppppppuVar31;
  int *piVar32;
  ulonglong uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  uint **********ppppppppppuVar36;
  uint ***********pppppppppppuVar37;
  undefined4 uVar38;
  uint *************pppppppppppppuVar39;
  int *piVar40;
  uint *************local_2f0;
  uint *************local_2ec;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  ulonglong local_2d0;
  undefined4 local_2c8;
  undefined1 uStack_2bd;
  uint ***********local_2bc;
  uint *************local_2b8;
  uint *************local_2b4;
  uint ***********local_2b0;
  uint *************pppppppppppppuStack_2ac;
  uint ***********local_2a8;
  uint ***********pppppppppppuStack_2a4;
  uint ***********pppppppppppuStack_2a0;
  uint ***********pppppppppppuStack_29c;
  uint ***********pppppppppppuStack_298;
  undefined1 *local_294;
  undefined4 uStack_290;
  uint ***********local_288;
  uint ***********pppppppppppuStack_284;
  undefined8 local_280;
  undefined8 local_278;
  uint ***********local_270;
  uint ***********pppppppppppuStack_26c;
  uint ***********local_260;
  uint ***********local_25c;
  uint *************local_258;
  uint *************pppppppppppppuStack_254;
  uint ***********pppppppppppuStack_250;
  uint ***********pppppppppppuStack_24c;
  uint ***********local_248;
  uint ***********pppppppppppuStack_244;
  undefined1 *local_240;
  undefined1 uStack_23c;
  undefined2 uStack_23b;
  undefined1 uStack_239;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 local_230;
  undefined4 uStack_22c;
  uint ***********local_228;
  uint ***********local_224;
  undefined4 uStack_220;
  undefined4 local_21c;
  uint ***********local_1e8;
  uint ***********pppppppppppuStack_1e4;
  undefined1 *local_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  uint ***********local_1c8;
  uint ***********pppppppppppuStack_1c4;
  int local_1bc;
  undefined1 local_1b6;
  undefined1 local_1b5;
  undefined8 *local_1b4;
  undefined4 local_1b0;
  uint *******local_1ac;
  undefined8 local_1a8;
  uint *************local_1a0;
  uint ***********local_19c;
  undefined8 local_198;
  uint ***********local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  ulonglong local_180;
  undefined8 *local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined1 local_168;
  undefined1 uStack_167;
  undefined1 uStack_166;
  undefined1 uStack_165;
  undefined4 local_164;
  undefined4 local_160;
  char local_15c [4];
  uint *************pppppppppppppuStack_158;
  uint ***********pppppppppppuStack_154;
  uint ***********pppppppppppuStack_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined1 local_144;
  undefined1 local_143;
  undefined1 local_142;
  undefined1 local_141;
  uint local_140;
  int *local_13c;
  uint local_138;
  undefined4 *local_134;
  uint local_130;
  uint *local_12c;
  uint local_128;
  undefined2 uStack_124;
  undefined1 uStack_122;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 *puStack_104;
  undefined8 *local_100;
  uint *local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  uint ***********local_e8;
  int local_e0;
  undefined1 *local_dc;
  int local_d8;
  int local_d4;
  undefined1 *local_d0;
  undefined4 local_cc;
  int local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  uint ***********local_88;
  uint *local_58;
  undefined6 *local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  uint *******local_44;

  local_14c = 0;
  local_143 = *(undefined1 *)((int)param_2 + 0x51);
  pppppppppppuStack_24c = (uint ***********)0x1;
  local_130 = 0;
  local_12c = (uint *)&DAT_00000004;
  local_140 = 0;
  local_13c = (int *)&DAT_00000004;
  local_128 = 0;
  local_138 = 0;
  local_1bc = 0x100c2df4;
  local_148 = *(undefined4 *)((int)param_2 + 0x4c);
  local_1b4 = &local_1a8;
  local_141 = *(undefined1 *)((int)param_2 + 0x52);
  local_48 = param_3;
  local_1b0 = param_3;
  local_144 = *(undefined1 *)(param_2 + 10);
  local_44 = param_4;
  local_1ac = param_4;
  local_1a0 = (uint *************)&DAT_00000004;
  local_190 = (uint ***********)&DAT_00000004;
  local_184 = 0;
  local_178 = (undefined8 *)0x0;
  local_174 = 0;
  local_170 = 4;
  local_16c = 0;
  local_168 = 0;
  uStack_167 = 0;
  uStack_166 = 0;
  uStack_165 = 0;
  local_164 = 0;
  local_160 = 1;
  local_15c[0] = '\0';
  local_15c[1] = '\0';
  local_15c[2] = '\0';
  local_15c[3] = '\0';
  pppppppppppppuStack_158 = (uint *************)0x0;
  pppppppppppuStack_154 = (uint ***********)0x1;
  pppppppppppuStack_150 = (uint ***********)0x1;
  local_19c = (uint ***********)0x0;
  local_1a8 = 0;
  local_18c = 0;
  local_198 = 0;
  local_180 = 4;
  local_188 = 0;
  local_2ec = (uint *************)&local_260;
  pppppppppppppuStack_254 = (uint *************)0x0;
  pppppppppppuStack_250 = (uint ***********)0x1;
  local_258 = (uint *************)0x1;
  pppppppppppuStack_2a4 = (uint ***********)0x0;
  pppppppppppuStack_2a0 = (uint ***********)0x1;
  pppppppppppuStack_29c = (uint ***********)0x1;
  pppppppppppuStack_298 = (uint ***********)0x0;
  local_294 = (undefined1 *)0x1;
  uStack_290 = 1;
  local_2b0 = (uint ***********)0x0;
  pppppppppppppuStack_2ac = (uint *************)&DAT_00000004;
  local_2a8 = (uint ***********)0x0;
  local_142 = local_144;
  local_134 = param_1;
  local_100 = param_2;
  while( true ) {
    pppppppppppuVar37 = (uint ***********)pppppppppppppuStack_2ac;
    pppppppppppuVar26 = local_2a8;
    FUN_100f0910((int *)&local_1b4);
    if (pppppppppppppuStack_158 == (uint *************)param_4) break;
    uVar10 = FUN_100f0c40((int *)&local_1b4);
    if (uVar10 - 0x28 < 0x34) {
                    /* WARNING: Could not recover jumptable at 0x100c3104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(*(int *)(&DAT_100c6a20 + (uVar10 - 0x28) * 4) + local_1bc))();
      return;
    }
    if (uVar10 == 0x7b) {
      local_2d8 = CONCAT44(pppppppppppuStack_29c,pppppppppppuStack_2a0);
      local_2d0 = CONCAT44(local_294,pppppppppppuStack_298);
      local_2e8 = CONCAT44(pppppppppppppuStack_2ac,local_2b0);
      local_2e0 = CONCAT44(pppppppppppuStack_2a4,local_2a8);
      local_2c8 = uStack_290;
      FUN_100f41a0((int *)&local_260,(int *)&local_1b4,(int *)&local_2e8);
      local_270 = local_260;
      local_280 = CONCAT44(pppppppppppuStack_244,local_248);
      local_278 = CONCAT17(uStack_239,CONCAT25(uStack_23b,CONCAT14(uStack_23c,local_240)));
      local_1d0 = local_230;
      uStack_1cc = uStack_22c;
      local_1d8 = local_238;
      uStack_1d4 = uStack_234;
      if (local_260 != (uint ***********)0xffffffff) goto LAB_100c3eb1;
      local_2b0 = local_25c;
      pppppppppppppuStack_2ac = local_258;
      local_2a8 = (uint ***********)pppppppppppppuStack_254;
      pppppppppppuStack_2a4 = pppppppppppuStack_250;
      pppppppppppuStack_2a0 = pppppppppppuStack_24c;
      local_294 = local_240;
      uStack_290 = (undefined4)((ulonglong)local_278 >> 0x20);
      pppppppppppuStack_29c = local_248;
      pppppppppppuStack_298 = pppppppppppuStack_244;
    }
    else if (uVar10 == 0x7c) {
      local_2d8 = CONCAT44(pppppppppppuStack_29c,pppppppppppuStack_2a0);
      local_2d0 = CONCAT44(local_294,pppppppppppuStack_298);
      local_2e8 = CONCAT44(pppppppppppppuStack_2ac,local_2b0);
      local_2e0 = CONCAT44(pppppppppppuStack_2a4,local_2a8);
      local_2c8 = uStack_290;
      FUN_100f2ee0(&local_260,(int *)&local_1b4,(int *)&local_2e8);
      local_270 = local_260;
      local_280 = CONCAT44(pppppppppppuStack_244,local_248);
      local_278 = CONCAT17(uStack_239,CONCAT25(uStack_23b,CONCAT14(uStack_23c,local_240)));
      local_1d0 = local_230;
      uStack_1cc = uStack_22c;
      local_1d8 = local_238;
      uStack_1d4 = uStack_234;
      if (local_260 != (uint ***********)0xffffffff) {
LAB_100c3eb1:
        local_1e8 = (uint ***********)local_280;
        pppppppppppuStack_1e4 = (uint ***********)((ulonglong)local_280 >> 0x20);
        local_1e0 = (undefined1 *)local_278;
        uStack_1dc = (undefined4)((ulonglong)local_278 >> 0x20);
        pppppppppppuVar20 = local_260;
        pppppppppppppuVar11 = (uint *************)local_25c;
        pppppppppppuVar31 = pppppppppppuStack_24c;
        pppppppppppuVar29 = pppppppppppuStack_250;
        pppppppppppuVar37 = local_224;
        local_2f0 = pppppppppppppuStack_254;
        local_2b8 = local_258;
        local_270 = local_260;
        local_1c8 = local_228;
        goto LAB_100c3ef9;
      }
      local_294 = local_240;
      uStack_290 = (undefined4)((ulonglong)local_278 >> 0x20);
      pppppppppppuStack_29c = local_248;
      pppppppppppuStack_298 = pppppppppppuStack_244;
      local_2b0 = local_25c;
      pppppppppppppuStack_2ac = local_258;
      local_2a8 = (uint ***********)pppppppppppppuStack_254;
      pppppppppppuStack_2a4 = pppppppppppuStack_250;
      pppppppppppuStack_2a0 = pppppppppppuStack_24c;
    }
    else {
      pppppppppppppuVar11 = (uint *************)FUN_100f0c40((int *)&local_1b4);
      pppppppppppppuVar39 = pppppppppppppuStack_158;
      if (0x5b < (int)pppppppppppppuVar11) {
        if (pppppppppppppuVar11 != (uint *************)0x5c) {
          if (pppppppppppppuVar11 != (uint *************)0x5e) goto LAB_100c385f;
          uVar10 = FUN_100f0c40((int *)&local_1b4);
          uVar19 = 1;
          if ((0x7f < uVar10) && (uVar19 = 2, 0x7ff < uVar10)) {
            uVar19 = 4 - (uVar10 < 0x10000);
          }
          if (CARRY4(uVar19,(uint)pppppppppppppuVar39)) goto LAB_100c6839;
          if (pppppppppppuStack_150 == (uint ***********)0xffffffff) goto LAB_100c6845;
          pppppppppppuVar28 = (uint ***********)((int)pppppppppppuStack_150 + 1);
          pppppppppppuVar37 = pppppppppppuStack_154;
          uVar10 = FUN_100f0c40((int *)&local_1b4);
          if (uVar10 == 10) {
            pppppppppppuVar28 = (uint ***********)0x1;
          }
          pppppppppppuStack_250 = pppppppppppuStack_150;
          local_258 = pppppppppppppuStack_158;
          pppppppppppppuStack_254 = (uint *************)pppppppppppuStack_154;
          FUN_100f1250((int *)&local_1b4);
          local_240 = (undefined1 *)((uint)local_240 & 0xffffff00);
          local_248 = (uint ***********)((uint)(uVar10 == 10) + (int)pppppppppppuVar37);
          pppppppppppuStack_244 = pppppppppppuVar28;
          goto LAB_100c3a15;
        }
        FUN_100f1350((uint *)&local_260,(int *)&local_1b4);
        pppppppppppuVar31 = pppppppppppuStack_24c;
        pppppppppppuVar28 = pppppppppppuStack_250;
        if (local_260 == (uint ***********)0xffffffff) goto LAB_100c3a21;
        local_2f0 = pppppppppppppuStack_254;
        local_118 = CONCAT44(pppppppppppuStack_244,local_248);
        local_110 = CONCAT17(uStack_239,CONCAT25(uStack_23b,CONCAT14(uStack_23c,local_240)));
        local_f0 = CONCAT44(uStack_22c,local_230);
        local_f8 = CONCAT44(uStack_234,local_238);
        uStack_1dc = (undefined4)((ulonglong)local_110 >> 0x20);
        local_270 = local_260;
        local_288 = local_25c;
        local_2b8 = local_258;
        local_e8 = local_228;
        local_1d0 = local_230;
        uStack_1cc = uStack_22c;
        local_1c8 = local_228;
        pppppppppppppuVar39 = pppppppppppppuStack_2ac;
        pppppppppppppuVar11 = pppppppppppppuStack_2ac;
        pppppppppppuVar37 = local_224;
        local_1e8 = local_248;
        pppppppppppuStack_1e4 = pppppppppppuStack_244;
        local_1e0 = local_240;
        local_1d8 = local_238;
        uStack_1d4 = uStack_234;
        uVar33 = local_f8;
        for (; pppppppppppuVar26 != (uint ***********)0x0;
            pppppppppppuVar26 = (uint ***********)((int)pppppppppppuVar26 + -1)) {
          FUN_100f4d00((uint *)pppppppppppppuVar39);
          pppppppppppppuVar39 = pppppppppppppuVar39 + 2;
        }
        if (local_2b0 != (uint ***********)0x0) {
          pvVar13 = GetProcessHeap();
          HeapFree(pvVar13,0,pppppppppppppuVar11);
        }
        pppppppppppuVar20 = local_270;
        pppppppppppuVar26 = local_288;
        pppppppppppppuVar11 = (uint *************)local_288;
        pppppppppppuVar29 = pppppppppppuVar28;
        if (local_270 == (uint ***********)0xffffffff) goto LAB_100c4183;
        goto LAB_100c3ef9;
      }
      if (pppppppppppppuVar11 == (uint *************)&DAT_00000024) {
        uVar10 = FUN_100f0c40((int *)&local_1b4);
        uVar19 = 1;
        if ((0x7f < uVar10) && (uVar19 = 2, 0x7ff < uVar10)) {
          uVar19 = 4 - (uVar10 < 0x10000);
        }
        if (CARRY4(uVar19,(uint)pppppppppppppuVar39)) goto LAB_100c6839;
        if (pppppppppppuStack_150 == (uint ***********)0xffffffff) goto LAB_100c6845;
        pppppppppppuVar28 = (uint ***********)((int)pppppppppppuStack_150 + 1);
        pppppppppppuVar37 = pppppppppppuStack_154;
        uVar10 = FUN_100f0c40((int *)&local_1b4);
        if (uVar10 == 10) {
          pppppppppppuVar28 = (uint ***********)0x1;
        }
        pppppppppppuStack_250 = pppppppppppuStack_150;
        local_258 = pppppppppppppuStack_158;
        pppppppppppppuStack_254 = (uint *************)pppppppppppuStack_154;
        FUN_100f1250((int *)&local_1b4);
        local_240 = (undefined1 *)CONCAT31(local_240._1_3_,1);
        local_248 = (uint ***********)((uint)(uVar10 == 10) + (int)pppppppppppuVar37);
        pppppppppppuStack_244 = pppppppppppuVar28;
LAB_100c3a15:
        pppppppppppuStack_24c = (uint ***********)(uVar19 + (int)pppppppppppppuVar39);
        local_25c = (uint ***********)0x80000003;
      }
      else if (pppppppppppppuVar11 == (uint *************)0x2e) {
        uVar10 = FUN_100f0c40((int *)&local_1b4);
        uVar19 = 1;
        if ((0x7f < uVar10) && (uVar19 = 2, 0x7ff < uVar10)) {
          uVar19 = 4 - (uVar10 < 0x10000);
        }
        if (CARRY4(uVar19,(uint)pppppppppppppuVar39)) goto LAB_100c6839;
        if (pppppppppppuStack_150 == (uint ***********)0xffffffff) goto LAB_100c6845;
        pppppppppppuVar28 = (uint ***********)((int)pppppppppppuStack_150 + 1);
        pppppppppppuVar37 = pppppppppppuStack_154;
        uVar10 = FUN_100f0c40((int *)&local_1b4);
        if (uVar10 == 10) {
          pppppppppppuVar28 = (uint ***********)0x1;
        }
        pppppppppppuStack_250 = pppppppppppuStack_150;
        local_258 = pppppppppppppuStack_158;
        pppppppppppppuStack_254 = (uint *************)pppppppppppuStack_154;
        FUN_100f1250((int *)&local_1b4);
        local_25c = (uint ***********)0x80000004;
        pppppppppppuStack_24c = (uint ***********)(uVar19 + (int)pppppppppppppuVar39);
        local_248 = (uint ***********)((uint)(uVar10 == 10) + (int)pppppppppppuVar37);
        pppppppppppuStack_244 = pppppppppppuVar28;
      }
      else {
LAB_100c385f:
        uVar10 = FUN_100f0c40((int *)&local_1b4);
        pppppppppppuVar37 = pppppppppppuStack_154;
        uVar19 = 1;
        if ((0x7f < uVar10) && (uVar19 = 2, 0x7ff < uVar10)) {
          uVar19 = 4 - (uVar10 < 0x10000);
        }
        if (CARRY4(uVar19,(uint)pppppppppppppuVar39)) {
LAB_100c6839:
          FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10153fb0);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if (pppppppppppuStack_150 == (uint ***********)0xffffffff) {
LAB_100c6845:
          FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10153fa0);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        puVar25 = (undefined1 *)((int)pppppppppppuStack_150 + 1);
        uVar10 = FUN_100f0c40((int *)&local_1b4);
        if (uVar10 == 10) {
          puVar25 = (undefined1 *)0x1;
        }
        pppppppppppuStack_24c = pppppppppppuStack_150;
        pppppppppppppuStack_254 = pppppppppppppuStack_158;
        pppppppppppuStack_250 = pppppppppppuStack_154;
        FUN_100f1250((int *)&local_1b4);
        local_25c = (uint ***********)0x80000002;
        uStack_23c = 0;
        local_258 = pppppppppppppuVar11;
        local_248 = (uint ***********)(uVar19 + (int)pppppppppppppuVar39);
        pppppppppppuStack_244 = (uint ***********)((uint)(uVar10 == 10) + (int)pppppppppppuVar37);
        local_240 = puVar25;
      }
LAB_100c3a21:
      pppppppppppuVar28 = pppppppppppuStack_24c;
      pppppppppppppuVar39 = local_258;
      pppppppppppuVar37 = local_25c;
      local_110 = CONCAT17(uStack_239,CONCAT25(uStack_23b,CONCAT14(uStack_23c,local_240)));
      local_118 = CONCAT44(pppppppppppuStack_244,local_248);
      local_f8 = CONCAT44(uStack_234,local_238);
      local_f0 = CONCAT44(uStack_22c,local_230);
      local_e8 = local_228;
      if ((uint ***********)0x80000001 < local_25c) {
                    /* WARNING: Could not recover jumptable at 0x100c3a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(*(int *)(&UNK_100c6af0 + (int)((int)local_25c + 0x7ffffffe) * 4) + local_1bc))();
        return;
      }
      local_270 = pppppppppppuStack_250;
      pppppppppppppuVar11 = pppppppppppppuStack_254;
      ppppppppppppuVar12 = FUN_10107380(0,0x38);
      if (ppppppppppppuVar12 == (uint ************)0x0) {
        FUN_1013679e(4,0x38);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      *ppppppppppppuVar12 = pppppppppppuVar37;
      ppppppppppppuVar12[1] = (uint ***********)pppppppppppppuVar39;
      ppppppppppppuVar12[2] = (uint ***********)pppppppppppppuVar11;
      ppppppppppppuVar12[3] = local_270;
      ppppppppppppuVar12[4] = pppppppppppuVar28;
      *(undefined8 *)(ppppppppppppuVar12 + 5) = local_118;
      *(undefined8 *)(ppppppppppppuVar12 + 7) = local_110;
      *(ulonglong *)(ppppppppppppuVar12 + 9) = local_f8;
      *(undefined8 *)(ppppppppppppuVar12 + 0xb) = local_f0;
      ppppppppppppuVar12[0xd] = local_e8;
      if (pppppppppppuVar26 == local_2b0) {
        FUN_10135ee0((uint *)&local_2b0);
      }
      pppppppppppppuStack_2ac[(int)pppppppppppuVar26 * 2] = (uint ************)0x5;
      pppppppppppppuStack_2ac[(int)pppppppppppuVar26 * 2 + 1] = ppppppppppppuVar12;
      local_2a8 = (uint ***********)((int)pppppppppppuVar26 + 1);
    }
  }
  local_2d8 = CONCAT44(pppppppppppuStack_29c,pppppppppppuStack_2a0);
  uVar33 = CONCAT44(local_294,pppppppppppuStack_298);
  local_2c8 = uStack_290;
  local_2e8 = CONCAT44(pppppppppppppuStack_2ac,local_2b0);
  local_2e0 = CONCAT44(pppppppppppuStack_2a4,local_2a8);
  local_2d0 = uVar33;
  FUN_100f0d00((undefined8 *)&local_260,(int *)&local_1b4,(int *)&local_2e8);
  pppppppppppppuVar39 = local_258;
  pppppppppppuVar26 = local_25c;
  if (local_260 == (uint ***********)0xffffffff) {
    local_280 = CONCAT44(local_258,local_25c);
    FUN_100f4ef0((int *)&local_280);
    pppppppppppuVar28 = local_19c;
    local_2ec = local_1a0;
    pppppppppppuVar31 = local_248;
    pppppppppppuVar29 = pppppppppppuStack_24c;
    pppppppppppppuVar11 = local_258;
    pppppppppppuStack_26c = local_25c;
    if (local_25c == (uint ***********)0xffffffff) {
      if (local_1a8._4_4_ != (uint *************)0x0) {
        FUN_10136bb0(&PTR_s_C__Users_runneradmin__cargo_regi_10154470);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pppppppppppuVar31 = (uint ***********)local_198;
      local_1a0 = (uint *************)0x0;
      local_19c = (uint ***********)&DAT_00000004;
      local_198 = local_198 & 0xffffffff00000000;
      local_2b4 = pppppppppppppuVar39;
LAB_100c4183:
      local_2bc = pppppppppppuVar28;
      local_288 = pppppppppppuVar26;
      if (pppppppppppuVar31 != (uint ***********)0x0) {
        pppppppppppuVar28 = pppppppppppuVar28 + 1;
        do {
          if (pppppppppppuVar28[-1] != (uint **********)0x0) {
            ppppppppppuVar36 = *pppppppppppuVar28;
            pvVar13 = GetProcessHeap();
            HeapFree(pvVar13,0,ppppppppppuVar36);
          }
          pppppppppppuVar28 = pppppppppppuVar28 + 9;
          pppppppppppuVar31 = (uint ***********)((int)pppppppppppuVar31 + -1);
        } while (pppppppppppuVar31 != (uint ***********)0x0);
      }
      if (local_2f0 != (uint *************)0x0) {
        pvVar13 = GetProcessHeap();
        HeapFree(pvVar13,0,local_2bc);
      }
      FUN_100c8ce0((int)&local_1a8);
      uVar10 = local_128;
      if (local_128 == local_130) {
        FUN_10135ee0(&local_130);
      }
      local_ac = 0;
      local_12c[uVar10 * 2] = (uint)local_288;
      local_58 = local_12c + uVar10 * 2 + 2;
      local_12c[uVar10 * 2 + 1] = (uint)local_2b8;
      local_128 = uVar10 + 1;
      local_54 = (undefined6 *)((int)local_100 + 0x45);
      local_1b5 = *(undefined1 *)((int)local_100 + 0x44);
      local_1b6 = *(undefined1 *)((int)local_100 + 0x4b);
      puVar14 = local_12c;
      iVar24 = 0;
      do {
        if (iVar24 == 8) {
          iVar23 = 8;
          local_fc = puVar14;
LAB_100c4348:
          puVar21 = &local_118;
          puVar14 = (uint *)0x0;
        }
        else {
          if (local_ac != 0) {
            FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10151f10);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          iVar23 = iVar24 + 8;
          local_ac = 1;
          local_fc = local_58;
          if (puVar14 == local_58) goto LAB_100c4348;
          local_fc = puVar14 + 2;
          local_118 = CONCAT44(local_118._4_4_,(int)&local_48 + iVar24);
          puVar21 = &local_280;
        }
        *(uint **)puVar21 = puVar14;
        uVar10 = local_138;
        piVar32 = local_13c;
        if ((undefined4 *)local_118 == (undefined4 *)0x0) {
          cVar1 = *(char *)((int)local_100 + 0x34);
          uVar5 = *(undefined2 *)((int)local_100 + 0x3a);
          uVar2 = *(undefined1 *)((int)local_100 + 0x3c);
          puVar21 = local_100;
          if ((cVar1 != -1) && (cVar1 != '\x02')) {
            uVar33 = local_100[5];
            piVar40 = *(int **)(local_100 + 5);
            LOCK();
            iVar24 = *piVar40;
            *piVar40 = *piVar40 + 1;
            UNLOCK();
            if (*piVar40 == 0 || SCARRY4(iVar24,1) != *piVar40 < 0) goto LAB_100c626d;
            puVar21 = *(undefined8 **)(local_100 + 6);
          }
          local_174 = CONCAT31(local_174._1_3_,cVar1);
          uStack_166 = *(undefined1 *)((int)local_100 + 0x42);
          local_1a0 = *(uint **************)(local_100 + 1);
          local_1a8 = *local_100;
          uStack_167 = *(undefined1 *)((int)local_100 + 0x41);
          local_19c = *(uint ************)((int)local_100 + 0xc);
          local_198 = local_100[2];
          local_190 = *(uint ************)(local_100 + 3);
          local_18c = *(undefined4 *)((int)local_100 + 0x1c);
          local_188 = *(undefined4 *)(local_100 + 4);
          local_184 = *(undefined4 *)((int)local_100 + 0x24);
          local_16c = CONCAT31((int3)*(undefined4 *)((int)local_100 + 0x3d),uVar2);
          local_168 = (undefined1)((uint)*(undefined4 *)((int)local_100 + 0x3d) >> 0x18);
          local_170 = CONCAT22(uVar5,*(undefined2 *)(local_100 + 7));
          uVar19 = local_138;
          local_180 = uVar33;
          local_178 = puVar21;
          if (local_138 == 0) {
            puVar14 = (uint *)&DAT_00000004;
            pppppppppppuVar26 = (uint ***********)FUN_100c6ba0((undefined4 *)&local_1a8,4,0);
            uVar27 = 0;
            puVar15 = (uint *)&DAT_00000004;
            goto LAB_100c650f;
          }
          uVar27 = 0;
          puVar15 = FUN_10107380(0,local_138 * 4);
          if (puVar15 == (uint *)0x0) {
            FUN_101366bc(4);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (uVar10 < 8) goto LAB_100c6490;
          puVar14 = puVar15 + 4;
          uVar27 = uVar10 & 0xfffffff8;
          uVar22 = uVar27;
          auVar34 = _DAT_1013e810;
          do {
            auVar35._0_4_ = auVar34._0_4_ + 8;
            auVar35._4_4_ = auVar34._4_4_ + 8;
            auVar35._8_4_ = auVar34._8_4_ + 8;
            auVar35._12_4_ = auVar34._12_4_ + 8;
            puVar25 = (undefined1 *)((int)((auVar34._8_8_ & 0xffffffff) * 0x1c) + (int)piVar32);
            puVar14[-4] = (uint)(piVar32 + auVar34._0_4_ * 7);
            puVar14[-3] = (uint)(piVar32 + auVar34._4_4_ * 7);
            puVar14[-2] = (uint)puVar25;
            puVar14[-1] = (uint)(piVar32 + auVar34._12_4_ * 7);
            *puVar14 = (uint)(piVar32 + auVar34._0_4_ * 7 + 0x1c);
            puVar14[1] = (uint)(piVar32 + auVar34._4_4_ * 7 + 0x1c);
            puVar14[2] = (uint)(puVar25 + 0x70);
            puVar14[3] = (uint)(piVar32 + auVar34._12_4_ * 7 + 0x1c);
            puVar14 = puVar14 + 8;
            uVar22 = uVar22 - 8;
            auVar34 = auVar35;
          } while (uVar22 != 0);
          if (uVar10 != uVar27) {
LAB_100c6490:
            iVar24 = uVar10 - uVar27;
            piVar32 = piVar32 + uVar27 * 7;
            puVar14 = puVar15 + uVar27;
            do {
              *puVar14 = (uint)piVar32;
              puVar14 = puVar14 + 1;
              piVar32 = piVar32 + 7;
              iVar24 = iVar24 + -1;
            } while (iVar24 != 0);
          }
          pppppppppppuVar26 =
               (uint ***********)FUN_100c6ba0((undefined4 *)&local_1a8,(int)puVar15,uVar10);
          uVar27 = uVar10;
          puVar14 = puVar15;
LAB_100c650f:
          FUN_100c6f70(&local_260,(uint *)pppppppppppuVar26,puVar15,uVar27);
          pppppppppppppuVar39 = local_258;
          pppppppppppuVar37 = local_25c;
          if (local_260 == (uint ***********)0xffffffff) {
            LOCK();
            ppppppppppuVar36 = *local_25c;
            *local_25c = (uint **********)((int)*local_25c + 1);
            UNLOCK();
            local_270 = pppppppppppuVar26;
            if (*local_25c == (uint **********)0x0 ||
                SCARRY4((int)ppppppppppuVar36,1) != (int)*local_25c < 0) {
LAB_100c626d:
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            puVar16 = FUN_10107380(0,8);
            if (puVar16 == (undefined4 *)0x0) {
              FUN_1013679e(4,8);
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            *puVar16 = pppppppppppuVar37;
            puVar16[1] = pppppppppppppuVar39;
            pvVar17 = FUN_10107380(0,0x240);
            if (pvVar17 == (LPVOID)0x0) {
              FUN_101366bc(0x40);
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            uVar10 = (uint)pvVar17 & 0xffffffc0;
            *(LPVOID *)(uVar10 + 0x3c) = pvVar17;
            *(undefined4 *)(uVar10 + 0x40) = 0;
            *(undefined4 *)(uVar10 + 0x44) = 0;
            *(undefined4 *)(uVar10 + 0x48) = 4;
            *(undefined4 *)(uVar10 + 0x4c) = 0;
            *(undefined4 *)(uVar10 + 0x80) = 0;
            *(undefined4 *)(uVar10 + 0x84) = 0;
            *(undefined4 *)(uVar10 + 0x88) = 4;
            *(undefined4 *)(uVar10 + 0x8c) = 0;
            *(undefined4 *)(uVar10 + 0xc0) = 0;
            *(undefined4 *)(uVar10 + 0xc4) = 0;
            *(undefined4 *)(uVar10 + 200) = 4;
            *(undefined4 *)(uVar10 + 0xcc) = 0;
            *(undefined4 *)(uVar10 + 0x100) = 0;
            *(undefined4 *)(uVar10 + 0x104) = 0;
            *(undefined4 *)(uVar10 + 0x108) = 4;
            *(undefined4 *)(uVar10 + 0x10c) = 0;
            *(undefined4 *)(uVar10 + 0x140) = 0;
            *(undefined4 *)(uVar10 + 0x144) = 0;
            *(undefined4 *)(uVar10 + 0x148) = 4;
            *(undefined4 *)(uVar10 + 0x14c) = 0;
            *(undefined4 *)(uVar10 + 0x180) = 0;
            *(undefined4 *)(uVar10 + 0x184) = 0;
            *(undefined4 *)(uVar10 + 0x188) = 4;
            *(undefined4 *)(uVar10 + 0x18c) = 0;
            *(undefined4 *)(uVar10 + 0x1c0) = 0;
            *(undefined4 *)(uVar10 + 0x1c4) = 0;
            *(undefined4 *)(uVar10 + 0x1c8) = 4;
            *(undefined4 *)(uVar10 + 0x1cc) = 0;
            *(undefined4 *)(uVar10 + 0x200) = 0;
            *(undefined4 *)(uVar10 + 0x204) = 0;
            *(undefined4 *)(uVar10 + 0x208) = 4;
            *(undefined4 *)(uVar10 + 0x20c) = 0;
            puVar18 = FUN_10107380(0,0x9c);
            if (puVar18 == (undefined4 *)0x0) {
              FUN_1013679e(4,0x9c);
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            *puVar18 = 8;
            puVar18[1] = uVar10 + 0x40;
            puVar18[2] = 8;
            puVar18[3] = puVar16;
            puVar18[4] = &PTR_LAB_101519dc;
            puVar18[5] = 0;
            puVar18[6] = 0xffffffff;
            puVar16 = FUN_10107380(0,0x14);
            if (puVar16 == (undefined4 *)0x0) {
              FUN_1013679e(4,0x14);
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            *puVar16 = 1;
            puVar16[1] = 1;
            puVar16[2] = pppppppppppuVar37;
            puVar16[3] = pppppppppppppuVar39;
            puVar16[4] = local_270;
            local_134[1] = puVar16;
            local_134[2] = puVar18;
            *local_134 = 0xffffffff;
            uVar10 = uVar19;
          }
          else {
            *(ulonglong *)(local_134 + 0xd) = CONCAT44(local_228,uStack_22c);
            *(ulonglong *)(local_134 + 0xb) = CONCAT44(local_230,uStack_234);
            local_134[0x11] = local_21c;
            *(ulonglong *)(local_134 + 0xf) = CONCAT44(uStack_220,local_224);
            *(ulonglong *)(local_134 + 9) =
                 CONCAT44(local_238,CONCAT13(uStack_239,CONCAT21(uStack_23b,uStack_23c)));
            *(ulonglong *)(local_134 + 7) = CONCAT44(local_240,pppppppppppuStack_244);
            *(ulonglong *)(local_134 + 5) = CONCAT44(local_248,pppppppppppuStack_24c);
            *(ulonglong *)(local_134 + 3) = CONCAT44(pppppppppppuStack_250,pppppppppppppuStack_254);
            *local_134 = local_260;
            local_134[1] = local_25c;
            local_134[2] = local_258;
            LOCK();
            *pppppppppppuVar26 = (uint **********)((int)*pppppppppppuVar26 - 1);
            UNLOCK();
            if (*pppppppppppuVar26 == (uint **********)0x0) {
              FUN_100c8810(pppppppppppuVar26);
            }
          }
          piVar32 = local_13c;
          piVar40 = local_13c;
          uVar19 = local_138;
          if (uVar10 != 0) {
            pvVar13 = GetProcessHeap();
            HeapFree(pvVar13,0,puVar14);
            piVar32 = local_13c;
            piVar40 = local_13c;
            uVar19 = local_138;
          }
          for (; uVar19 != 0; uVar19 = uVar19 - 1) {
            FUN_100e81b0(piVar32);
            FUN_100c88d0(piVar32);
            pvVar17 = (LPVOID)piVar32[6];
            pvVar13 = GetProcessHeap();
            HeapFree(pvVar13,0,pvVar17);
            piVar32 = piVar32 + 7;
          }
          puVar14 = local_12c;
          puVar15 = local_12c;
          uVar10 = local_128;
          if (local_140 != 0) {
            pvVar13 = GetProcessHeap();
            HeapFree(pvVar13,0,piVar40);
            puVar14 = local_12c;
            puVar15 = local_12c;
            uVar10 = local_128;
          }
          for (; puVar30 = local_12c, local_12c = puVar15, uVar10 != 0; uVar10 = uVar10 - 1) {
            FUN_100c8a30(puVar14);
            puVar14 = puVar14 + 2;
            puVar15 = local_12c;
            local_12c = puVar30;
          }
          goto LAB_100c405d;
        }
        uVar38 = 4;
        local_2e8 = 0;
        local_2e0 = 4;
        local_2d8 = CONCAT17(local_1b5,CONCAT16(local_1b6,*local_54));
        local_50 = *(undefined4 *)local_118;
        local_2b4 = (uint *************)((undefined4 *)local_118)[1];
        local_e0 = 0;
        local_dc = &DAT_00000004;
        local_d4 = 0;
        local_d0 = &DAT_00000004;
        local_d8 = 0;
        local_cc = 0;
        local_f8 = CONCAT44(local_50,&local_2e8);
        local_f0 = CONCAT44(local_f0._4_4_,local_2b4);
        local_288 = (uint ***********)local_280;
        local_4c = iVar23;
        while( true ) {
          if ((int)*local_288 - 7U < 5) {
                    /* WARNING: Could not recover jumptable at 0x100c4453. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(*(int *)(&DAT_100c6b04 + ((int)*local_288 - 7U) * 4) + local_1bc))();
            return;
          }
          if ((int)*local_288 - 7U < 5) {
                    /* WARNING: Could not recover jumptable at 0x100c48cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(*(int *)(&DAT_100c6b34 + ((int)*local_288 - 7U) * 4) + local_1bc))
                      (pppppppppppuVar37,uVar38);
            return;
          }
          ppppppppppuVar36 = *local_288;
          FUN_100e51b0((int)ppppppppppuVar36);
          pppppppppppppuVar11 = local_258;
          pppppppppppuVar20 = local_248;
          uVar5 = uStack_23b;
          uVar2 = uStack_239;
          pppppppppppuVar26 = pppppppppppuStack_244;
          pppppppppppuVar28 = pppppppppppuStack_24c;
          puVar7 = local_240;
          uVar8 = uStack_23c;
          pppppppppppuVar31 = local_25c;
          pppppppppppuVar29 = local_25c;
          pppppppppppppuVar39 = pppppppppppppuStack_254;
          pppppppppppuVar9 = pppppppppppuStack_250;
          puVar25 = local_dc;
          if (local_25c != (uint ***********)0xffffffff) goto joined_r0x100c5f09;
          if (local_d4 == 0) break;
          puVar16 = (undefined4 *)(local_d8 + -0x14 + local_d4 * 0x14);
          iVar24 = local_d4;
LAB_100c5ce0:
          pppppppppppuVar26 = (uint ***********)puVar16[1];
          puVar14 = (uint *)*puVar16;
          iVar23 = iVar24 + -1;
          if (pppppppppppuVar26 < (uint ***********)0x2) {
LAB_100c5d14:
            ppppppppppuVar36 = (uint **********)*puVar14;
            FUN_100e51b0((int)ppppppppppuVar36);
            pppppppppppppuVar11 = local_258;
            pppppppppppuVar20 = local_248;
            uVar5 = uStack_23b;
            uVar2 = uStack_239;
            pppppppppppuVar26 = pppppppppppuStack_244;
            pppppppppppuVar28 = pppppppppppuStack_24c;
            puVar7 = local_240;
            uVar8 = uStack_23c;
            pppppppppppuVar31 = local_25c;
            pppppppppppuVar29 = local_25c;
            pppppppppppppuVar39 = pppppppppppppuStack_254;
            pppppppppppuVar9 = pppppppppppuStack_250;
            puVar25 = local_dc;
            if (local_25c != (uint ***********)0xffffffff) goto joined_r0x100c5f09;
            puVar16 = puVar16 + -5;
            iVar24 = iVar23;
            if (iVar23 == 0) break;
            goto LAB_100c5ce0;
          }
          local_288 = (uint ***********)puVar16[3];
          pppppppppppuVar28 = (uint ***********)puVar16[4];
          if (pppppppppppuVar26 == (uint ***********)0x2) {
            if (pppppppppppuVar28 != (uint ***********)0x0) goto LAB_100c5da4;
            goto LAB_100c5d14;
          }
          if (pppppppppppuVar28 == (uint ***********)0x0) goto LAB_100c5d14;
          local_d8 = iVar23;
          if ((uint)local_2e8 != 0) {
            FUN_10136bb0(&PTR_s_C__Users_runneradmin__cargo_regi_10154ac8);
            goto LAB_100c626d;
          }
          local_2e8._0_4_ = -1;
          iVar23 = (int)local_2e0._4_4_;
          local_270 = pppppppppppuVar26;
          if (local_2e0._4_4_ == (uint ************)local_2e8._4_4_) {
            FUN_10138ca0((uint *)((int)&local_2e8 + 4));
          }
          *(undefined4 *)((int)(undefined4 *)local_2e0 + iVar23 * 0x1c) = 0xf;
          local_2e0 = CONCAT44(iVar23 + 1,(undefined4 *)local_2e0);
          local_2e8 = CONCAT44(local_2e8._4_4_,(uint)local_2e8 + 1);
          pppppppppppuVar26 = local_270;
          pppppppppppuVar37 = pppppppppppuVar28;
LAB_100c5da4:
          *puVar16 = puVar14;
          puVar16[1] = pppppppppppuVar26;
          puVar16[2] = local_288;
          puVar16[4] = (undefined1 *)((int)pppppppppppuVar28 + -1);
          puVar16[3] = local_288 + 2;
          local_d8 = iVar24;
        }
        lVar6 = local_2e8;
        uVar10 = (uint)local_2e8;
        if (0x7ffffffe < (uint)local_2e8) {
          FUN_10136be0(&PTR_s_C__Users_runneradmin__cargo_regi_101558b8);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        local_2e8 = CONCAT44(local_2e8._4_4_,(uint)local_2e8 + 1);
        local_260 = (uint ***********)local_2e0._4_4_;
        if (local_2e0._4_4_ != (uint ************)0x1) {
          FUN_101369ea(0,&local_260,&DAT_1015738c,0,ppppppppppuVar36,
                       &PTR_s_C__Users_runneradmin__cargo_regi_101558d8);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if (uVar10 != 0) {
          local_2e8 = lVar6;
          FUN_10136bb0(&PTR_s_C__Users_runneradmin__cargo_regi_10154ab8);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        puVar16 = (undefined4 *)local_2e0;
        local_2e0 = local_2e0 & 0xffffffff;
        pppppppppppuVar26 = (uint ***********)*puVar16;
        local_2e8 = (ulonglong)local_2e8._4_4_ << 0x20;
        if (pppppppppppuVar26 == (uint ***********)0xffffffff) {
          FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_101558c8);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        pppppppppppuStack_24c = (uint ***********)*(undefined8 *)(puVar16 + 5);
        local_248 = (uint ***********)((ulonglong)*(undefined8 *)(puVar16 + 5) >> 0x20);
        uVar33 = *(ulonglong *)(puVar16 + 1);
        pppppppppppppuStack_254 = (uint *************)puVar16[3];
        pppppppppppuStack_250 = (uint ***********)puVar16[4];
        uVar4 = *(ulonglong *)(puVar16 + 4);
        puVar25 = (undefined1 *)((int)pppppppppppuVar26 + -7);
        if (pppppppppppuVar26 < (uint ***********)0x7) {
          puVar25 = (undefined1 *)0x0;
        }
        local_25c = (uint ***********)uVar33;
        local_258 = (uint *************)(uVar33 >> 0x20);
        local_260 = pppppppppppuVar26;
        if (puVar25 == (undefined1 *)0x0) {
          local_1a8 = CONCAT44(local_25c,pppppppppppuVar26);
          local_19c = (uint ***********)pppppppppppppuStack_254;
          local_190 = local_248;
          local_1a0 = local_258;
          uVar33 = uVar4;
          local_198 = uVar4;
        }
        else {
          if (puVar25 != (undefined1 *)0x1) {
            local_1a8 = CONCAT44(&LAB_100e7be0,&local_260);
            FUN_101369c0(&DAT_10153a9b,&local_1a8,&PTR_s_C__Users_runneradmin__cargo_regi_10153b3c);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          FUN_100e8010((undefined4 *)&local_1a8,(uint *)&local_25c);
        }
        if (&DAT_00000008 < pppppppppppuVar26) {
          FUN_100e8140((uint *)local_2ec);
        }
        pppppppppppppuVar11 = local_1a8._4_4_;
        pppppppppppuVar20 = local_198._4_4_;
        uVar5 = uStack_124;
        uVar2 = uStack_122;
        pppppppppppuVar26 = local_190;
        pppppppppppuVar28 = (uint ***********)local_198;
        puVar7 = puStack_104;
        uVar8 = uStack_2bd;
        pppppppppppuVar31 = (uint ***********)0xffffffff;
        pppppppppppuVar29 = (uint ***********)local_1a8;
        pppppppppppppuVar39 = local_1a0;
        pppppppppppuVar9 = local_19c;
        puVar25 = local_dc;
joined_r0x100c5f09:
        pppppppppppuVar37 = pppppppppppuVar9;
        uStack_2bd = uVar8;
        puStack_104 = puVar7;
        uStack_122 = uVar2;
        uStack_124 = uVar5;
        pppppppppppuStack_284 = pppppppppppuVar20;
        local_2b4 = pppppppppppppuVar11;
        local_dc = puVar25;
        if (local_e0 != 0) {
          pvVar13 = GetProcessHeap();
          HeapFree(pvVar13,0,puVar25);
        }
        puVar25 = local_d0;
        if (local_d4 != 0) {
          pvVar13 = GetProcessHeap();
          HeapFree(pvVar13,0,puVar25);
        }
        if (pppppppppppuVar31 != (uint ***********)0xffffffff) goto LAB_100c61e1;
        FUN_100c8c20((int)&local_2e8);
        uVar10 = local_138;
        if (local_138 == local_140) {
          FUN_10138ca0(&local_140);
        }
        local_138 = uVar10 + 1;
        local_13c[uVar10 * 7] = (int)pppppppppppuVar29;
        local_13c[uVar10 * 7 + 1] = (int)local_2b4;
        local_13c[uVar10 * 7 + 3] = (int)pppppppppppuVar37;
        local_13c[uVar10 * 7 + 2] = (int)pppppppppppppuVar39;
        local_13c[uVar10 * 7 + 4] = (int)pppppppppppuVar28;
        local_13c[uVar10 * 7 + 6] = (int)pppppppppppuVar26;
        local_13c[uVar10 * 7 + 5] = (int)pppppppppppuStack_284;
        puVar14 = local_fc;
        iVar24 = local_4c;
      } while( true );
    }
    uStack_1dc = CONCAT13(uStack_239,CONCAT21(uStack_23b,uStack_23c));
    local_2b4 = pppppppppppppuStack_254;
    local_1d8 = local_238;
    pppppppppppuStack_1e4 = pppppppppppuStack_244;
    local_1e0 = local_240;
    uStack_1d4 = uStack_234;
    local_1d0 = local_230;
    uStack_1cc = uStack_22c;
    local_1c8 = local_228;
    pppppppppppuStack_1c4 = local_224;
    FUN_100f4d00((uint *)((int)&local_280 + 4));
    pppppppppppuVar20 = pppppppppppuStack_26c;
  }
  else {
    local_2b8 = local_258;
    local_2f0 = pppppppppppppuStack_254;
    local_1e0 = local_240;
    uStack_1dc = (undefined4)
                 (CONCAT17(uStack_239,CONCAT25(uStack_23b,CONCAT14(uStack_23c,local_240))) >> 0x20);
    local_1e8 = local_248;
    pppppppppppuStack_1e4 = pppppppppppuStack_244;
    local_1d8 = local_238;
    uStack_1d4 = uStack_234;
    local_1c8 = local_228;
    local_1d0 = local_230;
    uStack_1cc = uStack_22c;
    pppppppppppuVar20 = local_260;
    pppppppppppppuVar11 = (uint *************)local_25c;
    pppppppppppuVar31 = pppppppppppuStack_24c;
    pppppppppppuVar29 = pppppppppppuStack_250;
    pppppppppppuVar37 = local_224;
  }
LAB_100c3ef9:
  local_a0 = CONCAT44(uStack_1dc,local_1e0);
  local_88 = local_1c8;
  local_134[3] = pppppppppppppuVar11;
  local_134[4] = local_2b8;
  local_a8 = CONCAT44(pppppppppppuStack_1e4,local_1e8);
  local_134[5] = local_2f0;
  local_134[6] = pppppppppppuVar29;
  local_134[7] = pppppppppppuVar31;
  *(undefined8 *)(local_134 + 10) = local_a0;
  *(ulonglong *)(local_134 + 0xc) = CONCAT44(uStack_1d4,local_1d8);
  local_134[0x10] = local_1c8;
  *(ulonglong *)(local_134 + 0xe) = CONCAT44(uStack_1cc,local_1d0);
  *(undefined8 *)(local_134 + 8) = local_a8;
  local_134[0x11] = pppppppppppuVar37;
  *local_134 = 0;
  local_134[1] = 0;
  local_134[2] = pppppppppppuVar20;
  FUN_100c8ce0((int)&local_1a8);
  piVar32 = local_13c;
  piVar40 = local_13c;
  uVar10 = local_138;
joined_r0x100c3fe8:
  for (; uVar10 != 0; uVar10 = uVar10 - 1) {
    FUN_100e81b0(piVar32);
    FUN_100c88d0(piVar32);
    pvVar17 = (LPVOID)piVar32[6];
    pvVar13 = GetProcessHeap();
    HeapFree(pvVar13,0,pvVar17);
    piVar32 = piVar32 + 7;
  }
  puVar14 = local_12c;
  puVar15 = local_12c;
  uVar10 = local_128;
  if (local_140 != 0) {
    pvVar13 = GetProcessHeap();
    HeapFree(pvVar13,0,piVar40);
    puVar14 = local_12c;
    puVar15 = local_12c;
    uVar10 = local_128;
  }
  for (; puVar30 = local_12c, local_12c = puVar15, uVar10 != 0; uVar10 = uVar10 - 1) {
    FUN_100c8a30(puVar14);
    puVar14 = puVar14 + 2;
    puVar15 = local_12c;
    local_12c = puVar30;
  }
LAB_100c405d:
  if (local_130 != 0) {
    pvVar13 = GetProcessHeap();
    HeapFree(pvVar13,0,puVar30);
  }
  return;
LAB_100c61e1:
  local_134[8] = pppppppppppuVar28;
  local_134[9] = pppppppppppuStack_284;
  local_134[10] = pppppppppppuVar26;
  local_134[0xb] = puStack_104;
  *(undefined1 *)(local_134 + 0xc) = uStack_2bd;
  *(undefined2 *)((int)local_134 + 0x31) = uStack_124;
  *(undefined1 *)((int)local_134 + 0x33) = uStack_122;
  local_134[4] = pppppppppppuVar29;
  local_134[3] = pppppppppppuVar31;
  local_134[5] = local_2b4;
  local_134[7] = pppppppppppuVar37;
  local_134[6] = pppppppppppppuVar39;
  *local_134 = 0;
  local_134[1] = 0;
  local_134[2] = 0xffffffff;
  FUN_100c8c20((int)&local_2e8);
  piVar32 = local_13c;
  piVar40 = local_13c;
  uVar10 = local_138;
  goto joined_r0x100c3fe8;
}
