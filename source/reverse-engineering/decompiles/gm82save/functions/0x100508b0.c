// rea decompile_all
// name: FUN_100508b0
// address: 0x100508b0
// body: available
// range: 0x100508b0-0x100508f9 inclusive
// range: 0x10050900-0x10050a31 inclusive
// range: 0x10050a40-0x10052125 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
FUN_100508b0(byte *param_1,undefined1 (*param_2) [16],undefined1 *param_3,undefined4 param_4,
            undefined4 param_5)

{
  char *pcVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  code *pcVar4;
  byte bVar5;
  byte bVar6;
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  char cVar59;
  char cVar60;
  char cVar61;
  char cVar62;
  char cVar63;
  char cVar64;
  char cVar65;
  char cVar66;
  char cVar67;
  char cVar68;
  char cVar69;
  char cVar70;
  char cVar71;
  char cVar72;
  char cVar73;
  char cVar74;
  char cVar75;
  char cVar76;
  char cVar77;
  char cVar78;
  char cVar79;
  char cVar80;
  unkuint9 Var81;
  undefined1 auVar82 [11];
  undefined1 auVar83 [13];
  unkuint9 Var84;
  undefined1 auVar85 [11];
  undefined1 auVar86 [13];
  unkuint9 Var87;
  undefined1 auVar88 [11];
  undefined1 auVar89 [13];
  undefined1 auVar90 [11];
  undefined1 auVar91 [13];
  undefined1 auVar92 [13];
  undefined1 auVar93 [13];
  undefined1 auVar94 [13];
  undefined1 auVar95 [13];
  undefined1 auVar96 [13];
  undefined1 auVar97 [15];
  undefined1 auVar98 [11];
  undefined1 auVar99 [13];
  undefined1 auVar100 [15];
  undefined1 auVar101 [11];
  undefined1 auVar102 [13];
  undefined1 auVar103 [15];
  undefined1 auVar104 [11];
  undefined1 auVar105 [13];
  undefined1 auVar106 [15];
  unkuint9 Var107;
  undefined1 auVar108 [11];
  undefined1 auVar109 [13];
  undefined1 auVar110 [15];
  undefined1 auVar111 [11];
  undefined1 auVar112 [13];
  undefined1 auVar113 [13];
  undefined1 auVar114 [13];
  undefined1 auVar115 [11];
  undefined1 auVar116 [13];
  undefined1 auVar117 [11];
  undefined1 auVar118 [13];
  undefined1 auVar119 [11];
  undefined1 auVar120 [13];
  undefined1 auVar121 [11];
  undefined1 auVar122 [13];
  undefined1 auVar123 [15];
  undefined1 auVar124 [15];
  undefined1 auVar125 [15];
  undefined1 auVar126 [15];
  undefined1 auVar127 [15];
  undefined1 auVar128 [15];
  undefined1 auVar129 [15];
  undefined1 auVar130 [15];
  undefined1 auVar131 [15];
  undefined1 auVar132 [15];
  undefined3 uVar133;
  undefined1 auVar134 [15];
  undefined1 auVar135 [15];
  undefined1 auVar136 [15];
  undefined1 auVar137 [15];
  undefined1 auVar138 [15];
  undefined1 auVar139 [15];
  undefined1 auVar140 [15];
  undefined1 auVar141 [15];
  undefined1 auVar142 [15];
  undefined1 auVar143 [15];
  undefined1 auVar144 [15];
  undefined1 auVar145 [15];
  undefined1 auVar146 [15];
  undefined1 auVar147 [15];
  undefined1 auVar148 [15];
  undefined1 auVar149 [15];
  undefined5 uVar150;
  undefined1 auVar151 [12];
  undefined8 uVar152;
  undefined1 auVar153 [12];
  undefined8 uVar154;
  undefined8 uVar155;
  undefined1 auVar156 [14];
  undefined8 uVar157;
  double dVar158;
  double dVar159;
  undefined1 auVar160 [15];
  undefined1 auVar161 [15];
  undefined1 auVar162 [15];
  undefined1 auVar163 [15];
  undefined1 auVar164 [15];
  undefined1 auVar165 [15];
  undefined1 auVar166 [15];
  undefined1 auVar167 [15];
  undefined1 auVar168 [15];
  undefined1 auVar169 [15];
  undefined1 auVar170 [15];
  undefined1 auVar171 [15];
  undefined1 auVar172 [15];
  undefined1 auVar173 [15];
  undefined1 auVar174 [15];
  undefined1 auVar175 [15];
  undefined1 auVar176 [15];
  undefined1 auVar177 [15];
  undefined1 auVar178 [15];
  undefined1 auVar179 [15];
  undefined1 auVar180 [15];
  undefined1 auVar181 [15];
  undefined1 auVar182 [15];
  undefined1 auVar183 [15];
  undefined1 uVar184;
  undefined1 uVar185;
  undefined1 uVar186;
  undefined1 uVar187;
  undefined1 uVar188;
  undefined1 uVar189;
  undefined1 uVar190;
  undefined1 uVar191;
  ushort uVar192;
  ushort uVar193;
  undefined1 *puVar194;
  undefined1 (*pauVar195) [16];
  undefined1 (*pauVar196) [16];
  int iVar197;
  uint uVar198;
  undefined1 (*pauVar199) [16];
  undefined4 *puVar200;
  byte bVar206;
  uint uVar201;
  char *pcVar202;
  uint uVar203;
  byte *pbVar204;
  undefined4 uVar205;
  byte bVar207;
  char cVar208;
  ushort uVar209;
  undefined1 *puVar210;
  uint uVar211;
  byte bVar212;
  char cVar213;
  undefined1 (*pauVar214) [16];
  uint uVar215;
  uint uVar216;
  ushort uVar217;
  undefined1 (*pauVar218) [16];
  undefined1 (*pauVar219) [16];
  uint *puVar220;
  bool bVar221;
  short sVar229;
  short sVar230;
  undefined1 in_XMM0 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 auVar228 [14];
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  short sVar231;
  undefined1 auVar227 [16];
  byte bVar232;
  byte bVar233;
  byte bVar234;
  byte bVar244;
  byte bVar246;
  byte bVar250;
  ushort uVar248;
  byte bVar249;
  byte bVar251;
  byte bVar253;
  ushort uVar252;
  byte bVar254;
  byte bVar256;
  ushort uVar255;
  byte bVar257;
  byte bVar260;
  short sVar258;
  byte bVar261;
  byte bVar263;
  short sVar262;
  byte bVar264;
  short sVar265;
  undefined1 auVar235 [16];
  undefined1 auVar236 [16];
  undefined1 auVar237 [16];
  undefined1 auVar238 [16];
  byte bVar245;
  byte bVar247;
  undefined1 auVar239 [16];
  undefined1 auVar240 [16];
  undefined1 auVar241 [16];
  undefined1 auVar242 [16];
  undefined1 auVar243 [16];
  double dVar259;
  double dVar266;
  byte bVar272;
  undefined1 auVar267 [16];
  undefined1 auVar268 [16];
  undefined1 auVar269 [16];
  undefined1 auVar270 [16];
  undefined1 auVar271 [16];
  byte bVar273;
  byte bVar274;
  byte bVar277;
  byte bVar278;
  short sVar275;
  byte bVar279;
  byte bVar280;
  byte bVar281;
  byte bVar282;
  byte bVar283;
  byte bVar284;
  double dVar276;
  double dVar285;
  short sVar286;
  short sVar294;
  short sVar296;
  short sVar297;
  short sVar299;
  short sVar300;
  short sVar301;
  undefined1 auVar288 [16];
  undefined1 auVar289 [16];
  undefined1 auVar290 [16];
  short sVar287;
  short sVar295;
  short sVar302;
  undefined1 auVar291 [16];
  undefined1 auVar292 [16];
  undefined1 auVar293 [16];
  short sVar303;
  short sVar306;
  undefined1 auVar304 [16];
  undefined1 auVar305 [16];
  undefined8 uVar312;
  undefined1 local_190 [32];
  undefined1 local_170 [6];
  short sStack_16a;
  undefined8 uStack_168;
  undefined1 local_160 [32];
  undefined1 (*local_140) [16];
  undefined4 uStack_13c;
  double dStack_138;
  undefined1 local_130 [20];
  byte local_11c;
  byte local_11b;
  undefined6 local_11a;
  undefined1 uStack_114;
  undefined1 uStack_113;
  undefined1 uStack_112;
  undefined1 uStack_111;
  undefined1 uStack_110;
  undefined1 uStack_10f;
  undefined1 uStack_10e;
  undefined1 uStack_10d;
  ulonglong local_10c;
  undefined1 local_104;
  byte local_103;
  undefined1 local_100 [16];
  byte local_f0;
  byte bStack_ef;
  byte bStack_ee;
  byte bStack_ed;
  undefined1 uStack_ec;
  undefined1 uStack_eb;
  undefined1 uStack_ea;
  undefined1 uStack_e9;
  undefined1 uStack_e8;
  undefined1 uStack_e7;
  undefined1 uStack_e6;
  undefined1 uStack_e5;
  undefined1 uStack_e4;
  undefined1 uStack_e3;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  ulonglong local_dc;
  undefined1 local_d4;
  undefined1 uStack_ca;
  undefined1 uStack_c9;
  undefined1 uStack_c8;
  undefined1 uStack_c7;
  undefined1 uStack_c6;
  undefined1 uStack_c5;
  undefined1 uStack_c4;
  undefined1 uStack_c3;
  undefined1 local_c0 [16];
  byte *local_a8;
  undefined1 *local_a4;
  undefined6 local_a0;
  undefined2 uStack_9a;
  undefined6 uStack_98;
  undefined8 local_80;
  double dStack_78;
  double local_70;
  double local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  ushort uVar298;
  ushort uVar307;
  ushort uVar308;
  short sVar309;
  short sVar310;
  short sVar311;

  pauVar219 = *(undefined1 (**) [16])(param_2[0x21] + 0xc);
  pauVar199 = *(undefined1 (**) [16])(param_2[0x22] + 4);
  auVar151 = stack0xfffffe94;
  if ((undefined1 *)((int)pauVar219 - (int)pauVar199) < param_3) {
    puVar194 = param_2[0x21] + 4;
    do {
      auVar151 = stack0xfffffe94;
      bVar206 = (byte)puVar194;
      if (param_2[0x21][0] != '\0') {
        local_11c = 0x1d;
        goto LAB_10050bff;
      }
      pauVar214 = *(undefined1 (**) [16])param_2[0x22];
      if (pauVar214 != (undefined1 (*) [16])0x0) {
        if (pauVar219 < pauVar214) {
          FUN_10136a50((uint)pauVar214,(uint)pauVar219,(uint)pauVar219,
                       &PTR_s_C__Users_runneradmin__rustup_too_1015de74);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        memmove(*(void **)(param_2[0x21] + 8),
                (undefined1 *)((int)*(void **)(param_2[0x21] + 8) + (int)pauVar214),
                (int)pauVar219 - (int)pauVar214);
        *(int *)(param_2[0x21] + 0xc) = (int)pauVar219 - (int)pauVar214;
        *(int *)(param_2[0x22] + 4) = (int)pauVar199 - (int)pauVar214;
        *(undefined4 *)param_2[0x22] = 0;
      }
      FUN_100496e0((undefined1 (*) [16])&local_11c,param_2);
      auVar240._12_4_ = 0;
      auVar240._0_12_ = stack0xfffffe94;
      _local_170 = auVar240 << 0x20;
      uStack_ca = uStack_114;
      uStack_c9 = uStack_113;
      uStack_c8 = uStack_112;
      uStack_c7 = uStack_111;
      uStack_c6 = uStack_110;
      uStack_c5 = uStack_10f;
      uStack_c4 = uStack_10e;
      uStack_c3 = uStack_10d;
      if (local_103 == 0xff) {
        uVar3 = CONCAT17(uStack_113,CONCAT16(uStack_114,local_11a));
        bVar206 = local_11b;
        if (local_11c != 0xff) {
          uStack_98 = CONCAT15(uStack_10d,
                               CONCAT14(uStack_10e,
                                        CONCAT13(uStack_10f,
                                                 CONCAT12(uStack_110,CONCAT11(uStack_111,uStack_112)
                                                         ))));
          local_a0 = local_11a;
          uStack_9a = (undefined2)(CONCAT17(uStack_113,CONCAT16(uStack_114,local_11a)) >> 0x30);
          goto LAB_10050bff;
        }
      }
      else {
        local_d4 = local_104;
        local_dc = local_10c;
        bVar206 = local_103 - 2;
        if (local_103 < 2) {
          bVar206 = 6;
        }
        if ((9 < bVar206) || ((0x38dU >> (bVar206 & 0x1f) & 1) == 0)) {
          local_a8 = &local_11c;
          local_a4 = &LAB_100914e0;
          FUN_101369c0(&DAT_1015063c,&local_a8,&PTR_s_C__Users_runneradmin__cargo_regi_10141240);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar3 = local_10c;
        bVar206 = (&DAT_1015fd2f)[bVar206];
      }
      in_XMM0._8_8_ = 0;
      in_XMM0._0_8_ = uVar3;
      if (bVar206 == 1) {
        if (*(int *)(param_2[0x23] + 4) == 0) {
          FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10141bf0);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        *(int *)(param_2[0x23] + 4) = *(int *)(param_2[0x23] + 4) + -1;
        param_2[0x21][0] = 1;
      }
      pauVar219 = *(undefined1 (**) [16])(param_2[0x21] + 0xc);
      pauVar199 = *(undefined1 (**) [16])(param_2[0x22] + 4);
      puVar194 = (undefined1 *)((int)pauVar219 - (int)pauVar199);
    } while (puVar194 < param_3);
  }
  stack0xfffffe94 = auVar151;
  auVar240 = _DAT_1013e950;
  if (pauVar219 < pauVar199) {
    FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                 ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_1015036c);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  local_140 = *(undefined1 (**) [16])param_2[0x22];
  pauVar214 = (undefined1 (*) [16])((int)pauVar199 - (int)local_140);
  if (pauVar199 < local_140) {
    FUN_10136a50((uint)local_140,(uint)pauVar199,(uint)pauVar199,
                 &PTR_s_C__Users_runneradmin__cargo_regi_1015039c);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (pauVar219 == pauVar199) {
    FUN_10136b52(0,0,&PTR_s_C__Users_runneradmin__cargo_regi_1015037c);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  iVar197 = *(int *)(param_2[0x21] + 8);
  pbVar204 = *pauVar199 + iVar197;
  local_190._0_4_ = iVar197;
  local_160._0_4_ = pbVar204;
  bVar206 = *pbVar204;
  pauVar195 = (undefined1 (*) [16])(uint)bVar206;
  if ((undefined1 (*) [16])&DAT_00000004 < pauVar195) {
    local_11c = 0x19;
LAB_10050bff:
    *param_1 = local_11c;
    param_1[1] = bVar206;
    *(ulonglong *)(param_1 + 2) = CONCAT26(uStack_9a,local_a0);
    *(ulonglong *)(param_1 + 8) = CONCAT62(uStack_98,uStack_9a);
    return;
  }
  local_170._0_4_ = pauVar199;
  local_80._0_4_ = param_3 + -1;
  dVar266 = (double)CONCAT44(local_80._4_4_,(undefined1 *)local_80);
  if ((undefined1 *)((int)pauVar219 - (int)pauVar199) <= (undefined1 *)local_80) {
    FUN_10136a50(1,(uint)param_3,(uint)((int)pauVar219 - (int)pauVar199),
                 &PTR_s_C__Users_runneradmin__cargo_regi_1015038c);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar201 = (uint)(byte)param_2[0x23][0xd];
  puVar220 = (uint *)(pbVar204 + 1);
  auVar291 = local_130._0_16_;
  dVar259 = dVar266;
  dVar276 = dVar266;
  dVar285 = dVar266;
  dVar158 = dVar266;
  dVar159 = dVar266;
  if (pauVar199 == local_140) {
    pauVar196 = (undefined1 (*) [16])
                ((&switchD_10050b1a::switchdataD_1005217c)[(int)pauVar195] + 0x100508d3);
    pauVar219 = local_140;
    local_80 = (double)CONCAT44(local_80._4_4_,(undefined1 *)local_80);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar206) {
    case 0:
    case 2:
      goto switchD_10050b1a_caseD_0;
    case 1:
    case 4:
      goto switchD_10050b1a_caseD_1;
    case 3:
      goto switchD_10050b1a_caseD_3;
    case 5:
      goto switchD_10050b1a_caseD_5;
    case 6:
      goto switchD_10050b1a_caseD_6;
    case 7:
      goto switchD_10050b1a_caseD_7;
    case 8:
      goto switchD_10050b1a_caseD_8;
    default:
      goto switchD_10050b1a_caseD_9;
    case 10:
      goto switchD_10050b1a_caseD_a;
    case 0xc:
      goto switchD_10050b1a_caseD_c;
    case 0xd:
      goto switchD_10050b1a_caseD_d;
    case 0xe:
      goto switchD_10050b1a_caseD_e;
    case 0xf:
      goto switchD_10050b1a_caseD_f;
    case 0x10:
      goto switchD_10050b1a_caseD_10;
    case 0x12:
      goto switchD_10050b1a_caseD_12;
    case 0x14:
      goto switchD_10050b1a_caseD_14;
    case 0x15:
      goto switchD_10050b1a_caseD_15;
    case 0x17:
      goto switchD_10050b1a_caseD_17;
    case 0x18:
      goto switchD_10050b1a_caseD_18;
    case 0x19:
      goto switchD_10050b1a_caseD_19;
    case 0x1b:
      goto switchD_10050b1a_caseD_1b;
    case 0x1c:
      goto switchD_10050b1a_caseD_1c;
    case 0x1d:
      goto switchD_10050b1a_caseD_1d;
    case 0x1e:
      goto switchD_10050b1a_caseD_1e;
    case 0x1f:
      goto switchD_10050b1a_caseD_1f;
    case 0x20:
      goto switchD_10050b1a_caseD_20;
    case 0x21:
      goto switchD_10050b1a_caseD_21;
    case 0x22:
      goto switchD_10050b1a_caseD_22;
    }
  }
  pauVar195 = (undefined1 (*) [16])
              ((&switchD_10050b8b::switchdataD_10052128)[(int)pauVar195] + 0x100508d3);
  pauVar219 = (undefined1 (*) [16])(*local_140 + iVar197);
  pauVar196 = local_140;
  pauVar218 = pauVar219;
  local_80 = dVar266;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar206) {
  case 0:
  case 0x15:
  case 0x17:
    break;
  case 1:
  case 0x16:
  case 0x19:
switchD_10050b1a_caseD_1:
    uVar201 = uVar201 - 1;
    pauVar196 = (undefined1 (*) [16])((&UINT_100521b0)[uVar201] + 0x100508d3);
    local_80 = (double)CONCAT44(local_80._4_4_,(undefined1 *)local_80);
    dVar259 = (double)CONCAT44(local_80._4_4_,(undefined1 *)local_80);
    dVar276 = (double)CONCAT44(local_80._4_4_,(undefined1 *)local_80);
    dVar285 = dVar266;
    dVar158 = dVar266;
    dVar159 = dVar266;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(pauVar196) {
    case (undefined1 (*) [16])0x10050b9b:
      goto switchD_10050b1a_caseD_d;
    case (undefined1 (*) [16])0x10050de3:
      goto switchD_10050b1a_caseD_10;
    case (undefined1 (*) [16])0x10050e29:
      goto switchD_10050b1a_caseD_e;
    case (undefined1 (*) [16])0x10050e67:
      goto switchD_10050b1a_caseD_f;
    case (undefined1 (*) [16])0x10050eb0:
      goto switchD_10050b1a_caseD_14;
    case (undefined1 (*) [16])0x10050ee9:
      goto switchD_10050b1a_caseD_12;
    case (undefined1 (*) [16])0x1005143f:
      goto switchD_10050b1a_caseD_c;
    case (undefined1 (*) [16])0x10051c23:
      goto switchD_10050b1a_caseD_15;
    case (undefined1 (*) [16])0x10051c39:
      goto switchD_10050b1a_caseD_17;
    case (undefined1 (*) [16])0x10051cac:
      goto switchD_10050b1a_caseD_18;
    case (undefined1 (*) [16])0x10051d00:
      goto switchD_10050b1a_caseD_19;
    case (undefined1 (*) [16])0x10051f30:
      goto switchD_10050b1a_caseD_20;
    case (undefined1 (*) [16])0x10051f40:
      goto switchD_10050b1a_caseD_1c;
    case (undefined1 (*) [16])0x1005202e:
      goto switchD_10050b1a_caseD_1d;
    case (undefined1 (*) [16])0x10052038:
      goto switchD_10050b1a_caseD_1e;
    case (undefined1 (*) [16])0x10052045:
      goto switchD_10050b1a_caseD_1f;
    case (undefined1 (*) [16])0x10052052:
      goto switchD_10050b1a_caseD_21;
    case (undefined1 (*) [16])0x1005205c:
      goto switchD_10050b1a_caseD_22;
    case (undefined1 (*) [16])0x10052124:
      goto switchD_10050b1a_caseD_9;
    }
    goto switchD_10050b1a_caseD_1b;
  case 2:
    pauVar195 = (undefined1 (*) [16])(param_3 + -1);
    if (pauVar195 <= pauVar214) {
      pauVar214 = pauVar195;
    }
    if (pauVar195 != (undefined1 (*) [16])0x0) {
      pauVar195 = (undefined1 (*) [16])0x0;
      if (pauVar214 < (undefined1 (*) [16])&DAT_00000004) goto LAB_10051b66;
      pauVar196 = (undefined1 (*) [16])0x0;
      if ((undefined1 (*) [16])&DAT_0000001f < pauVar214) {
        local_130._0_4_ = pauVar219;
        pauVar195 = (undefined1 (*) [16])((uint)pauVar214 & 0xffffffe0);
        puVar194 = pauVar199[1];
        pauVar199 = (undefined1 (*) [16])0x0;
        do {
          in_XMM0 = *(undefined1 (*) [16])(pauVar199[-1] + (int)(local_140[1] + iVar197));
          pcVar1 = pauVar199[-1] + (int)(puVar194 + iVar197 + 1);
          cVar208 = pcVar1[1];
          cVar213 = pcVar1[2];
          cVar36 = pcVar1[3];
          cVar37 = pcVar1[4];
          cVar38 = pcVar1[5];
          cVar39 = pcVar1[6];
          cVar40 = pcVar1[7];
          cVar41 = pcVar1[8];
          cVar42 = pcVar1[9];
          cVar43 = pcVar1[10];
          cVar44 = pcVar1[0xb];
          cVar45 = pcVar1[0xc];
          cVar46 = pcVar1[0xd];
          cVar47 = pcVar1[0xe];
          cVar48 = pcVar1[0xf];
          pcVar202 = *pauVar199 + (int)(local_140[1] + iVar197);
          cVar49 = *pcVar202;
          cVar50 = pcVar202[1];
          cVar51 = pcVar202[2];
          cVar52 = pcVar202[3];
          cVar53 = pcVar202[4];
          cVar54 = pcVar202[5];
          cVar55 = pcVar202[6];
          cVar56 = pcVar202[7];
          cVar57 = pcVar202[8];
          cVar58 = pcVar202[9];
          cVar59 = pcVar202[10];
          cVar60 = pcVar202[0xb];
          cVar61 = pcVar202[0xc];
          cVar62 = pcVar202[0xd];
          cVar63 = pcVar202[0xe];
          cVar64 = pcVar202[0xf];
          pcVar202 = puVar194 + iVar197 + 1 + (int)pauVar199;
          cVar65 = *pcVar202;
          cVar66 = pcVar202[1];
          cVar67 = pcVar202[2];
          cVar68 = pcVar202[3];
          cVar69 = pcVar202[4];
          cVar70 = pcVar202[5];
          cVar71 = pcVar202[6];
          cVar72 = pcVar202[7];
          cVar73 = pcVar202[8];
          cVar74 = pcVar202[9];
          cVar75 = pcVar202[10];
          cVar76 = pcVar202[0xb];
          cVar77 = pcVar202[0xc];
          cVar78 = pcVar202[0xd];
          cVar79 = pcVar202[0xe];
          cVar80 = pcVar202[0xf];
          pcVar202 = pauVar199[-1] + (int)(puVar194 + iVar197 + 1);
          *pcVar202 = *pcVar1 + in_XMM0[0];
          pcVar202[1] = cVar208 + in_XMM0[1];
          pcVar202[2] = cVar213 + in_XMM0[2];
          pcVar202[3] = cVar36 + in_XMM0[3];
          pcVar202[4] = cVar37 + in_XMM0[4];
          pcVar202[5] = cVar38 + in_XMM0[5];
          pcVar202[6] = cVar39 + in_XMM0[6];
          pcVar202[7] = cVar40 + in_XMM0[7];
          pcVar202[8] = cVar41 + in_XMM0[8];
          pcVar202[9] = cVar42 + in_XMM0[9];
          pcVar202[10] = cVar43 + in_XMM0[10];
          pcVar202[0xb] = cVar44 + in_XMM0[0xb];
          pcVar202[0xc] = cVar45 + in_XMM0[0xc];
          pcVar202[0xd] = cVar46 + in_XMM0[0xd];
          pcVar202[0xe] = cVar47 + in_XMM0[0xe];
          pcVar202[0xf] = cVar48 + in_XMM0[0xf];
          pcVar202 = puVar194 + iVar197 + 1 + (int)pauVar199;
          *pcVar202 = cVar65 + cVar49;
          pcVar202[1] = cVar66 + cVar50;
          pcVar202[2] = cVar67 + cVar51;
          pcVar202[3] = cVar68 + cVar52;
          pcVar202[4] = cVar69 + cVar53;
          pcVar202[5] = cVar70 + cVar54;
          pcVar202[6] = cVar71 + cVar55;
          pcVar202[7] = cVar72 + cVar56;
          pcVar202[8] = cVar73 + cVar57;
          pcVar202[9] = cVar74 + cVar58;
          pcVar202[10] = cVar75 + cVar59;
          pcVar202[0xb] = cVar76 + cVar60;
          pcVar202[0xc] = cVar77 + cVar61;
          pcVar202[0xd] = cVar78 + cVar62;
          pcVar202[0xe] = cVar79 + cVar63;
          pcVar202[0xf] = cVar80 + cVar64;
          pauVar199 = pauVar199 + 2;
        } while (pauVar195 != pauVar199);
        auVar291 = local_130._0_16_;
        if (pauVar214 == pauVar195) break;
        pauVar196 = pauVar195;
        if (((uint)pauVar214 & 0x1c) == 0) goto LAB_10051b66;
      }
      pauVar195 = (undefined1 (*) [16])((uint)pauVar214 & 0xfffffffc);
      do {
        uVar201 = *(uint *)(*pauVar196 + (int)*pauVar219);
        in_XMM0 = ZEXT416(uVar201);
        uVar205 = *(undefined4 *)((int)puVar220 + (int)pauVar196);
        pbVar204 = (byte *)((int)puVar220 + (int)pauVar196);
        *pbVar204 = (char)uVar205 + (char)uVar201;
        pbVar204[1] = (char)((uint)uVar205 >> 8) + (char)(uVar201 >> 8);
        pbVar204[2] = (char)((uint)uVar205 >> 0x10) + (char)(uVar201 >> 0x10);
        pbVar204[3] = (char)((uint)uVar205 >> 0x18) + (char)(uVar201 >> 0x18);
        pauVar196 = (undefined1 (*) [16])(*pauVar196 + 4);
      } while (pauVar195 != pauVar196);
      for (; auVar291 = local_130._0_16_, pauVar214 != pauVar195;
          pauVar195 = (undefined1 (*) [16])(*pauVar195 + 1)) {
LAB_10051b66:
        *(byte *)((int)puVar220 + (int)pauVar195) =
             *(byte *)((int)puVar220 + (int)pauVar195) + (*pauVar195)[(int)*pauVar219];
      }
    }
    break;
  case 3:
    uVar201 = uVar201 - 1;
    pauVar196 = (undefined1 (*) [16])((&UINT_1005215c)[uVar201] + 0x100508d3);
    pauVar195 = pauVar219;
    pauVar219 = pauVar214;
    pauVar218 = pauVar214;
    local_80 = (double)CONCAT44(local_80._4_4_,(undefined1 *)local_80);
    dVar259 = (double)CONCAT44(local_80._4_4_,(undefined1 *)local_80);
    dVar276 = (double)CONCAT44(local_80._4_4_,(undefined1 *)local_80);
    dVar285 = (double)CONCAT44(local_80._4_4_,(undefined1 *)local_80);
    dVar158 = (double)CONCAT44(local_80._4_4_,(undefined1 *)local_80);
    dVar159 = (double)CONCAT44(local_80._4_4_,(undefined1 *)local_80);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_2[0x23][0xd]) {
    case 0:
      goto switchD_10050b8b_caseD_c;
    case 1:
      goto switchD_10050b8b_caseD_d;
    case 2:
      goto switchD_10050b8b_caseD_e;
    case 3:
      goto switchD_10050b8b_caseD_f;
    case 4:
      goto switchD_10050b8b_caseD_10;
    default:
      goto switchD_10050b1a_caseD_9;
    case 6:
      goto switchD_10050b8b_caseD_12;
    case 8:
      goto switchD_10050b8b_caseD_14;
    case 9:
    case 0xb:
      break;
    case 10:
    case 0xd:
      goto switchD_10050b1a_caseD_1;
    case 0xc:
      goto switchD_10050b1a_caseD_3;
    case 0xe:
      goto switchD_10050b1a_caseD_5;
    case 0xf:
      goto switchD_10050b1a_caseD_6;
    case 0x10:
      goto switchD_10050b1a_caseD_7;
    case 0x11:
      goto switchD_10050b1a_caseD_8;
    case 0x13:
      goto switchD_10050b1a_caseD_a;
    case 0x15:
      goto switchD_10050b1a_caseD_c;
    case 0x16:
      goto switchD_10050b1a_caseD_d;
    case 0x17:
      goto switchD_10050b1a_caseD_e;
    case 0x18:
      goto switchD_10050b1a_caseD_f;
    case 0x19:
      goto switchD_10050b1a_caseD_10;
    case 0x1b:
      goto switchD_10050b1a_caseD_12;
    case 0x1d:
      goto switchD_10050b1a_caseD_14;
    case 0x1e:
      goto switchD_10050b1a_caseD_15;
    case 0x20:
      goto switchD_10050b1a_caseD_17;
    case 0x21:
      goto switchD_10050b1a_caseD_18;
    case 0x22:
      goto switchD_10050b1a_caseD_19;
    case 0x24:
      goto switchD_10050b1a_caseD_1b;
    case 0x25:
      goto switchD_10050b1a_caseD_1c;
    case 0x26:
      goto switchD_10050b1a_caseD_1d;
    case 0x27:
      goto switchD_10050b1a_caseD_1e;
    case 0x28:
      goto switchD_10050b1a_caseD_1f;
    case 0x29:
      goto switchD_10050b1a_caseD_20;
    case 0x2a:
      goto switchD_10050b1a_caseD_21;
    case 0x2b:
      goto switchD_10050b1a_caseD_22;
    }
  case 4:
switchD_10050b8b_caseD_4:
    pauVar195 = pauVar219;
    uVar201 = uVar201 - 1;
    pauVar196 = (undefined1 (*) [16])((&UINT_1005213c)[uVar201] + 0x100508d3);
    pauVar219 = pauVar214;
    pauVar218 = pauVar214;
    local_80 = (double)CONCAT44(local_80._4_4_,(undefined1 *)local_80);
    dVar259 = (double)CONCAT44(local_80._4_4_,(undefined1 *)local_80);
    dVar276 = (double)CONCAT44(local_80._4_4_,(undefined1 *)local_80);
    dVar285 = (double)CONCAT44(local_80._4_4_,(undefined1 *)local_80);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(pauVar196) {
    case (undefined1 (*) [16])0x10050b1c:
      goto switchD_10050b1a_caseD_3;
    case (undefined1 (*) [16])0x10050b2a:
      goto switchD_10050b1a_caseD_5;
    case (undefined1 (*) [16])0x10050b8d:
      goto switchD_10050b1a_caseD_1;
    case (undefined1 (*) [16])0x10050b9b:
      goto switchD_10050b1a_caseD_d;
    case (undefined1 (*) [16])0x10050c29:
      goto switchD_10050b8b_caseD_4;
    case (undefined1 (*) [16])0x10050c3b:
      goto switchD_10050b8b_caseD_5;
    case (undefined1 (*) [16])0x10050db1:
      goto switchD_10050b8b_caseD_d;
    case (undefined1 (*) [16])0x10050de3:
      goto switchD_10050b1a_caseD_10;
    case (undefined1 (*) [16])0x10050e29:
      goto switchD_10050b1a_caseD_e;
    case (undefined1 (*) [16])0x10050e67:
      goto switchD_10050b1a_caseD_f;
    case (undefined1 (*) [16])0x10050eb0:
      goto switchD_10050b1a_caseD_14;
    case (undefined1 (*) [16])0x10050ee9:
      goto switchD_10050b1a_caseD_12;
    case (undefined1 (*) [16])0x10050f48:
      goto switchD_10050b1a_caseD_8;
    case (undefined1 (*) [16])0x10050f90:
      goto switchD_10050b8b_caseD_8;
    case (undefined1 (*) [16])0x10051088:
      goto switchD_10050b1a_caseD_6;
    case (undefined1 (*) [16])0x100510c1:
      goto switchD_10050b8b_caseD_6;
    case (undefined1 (*) [16])0x100511db:
      goto switchD_10050b1a_caseD_7;
    case (undefined1 (*) [16])0x10051220:
      goto switchD_10050b8b_caseD_7;
    case (undefined1 (*) [16])0x100513de:
      goto switchD_10050b8b_caseD_10;
    case (undefined1 (*) [16])0x1005143f:
      goto switchD_10050b1a_caseD_c;
    case (undefined1 (*) [16])0x10051487:
      goto switchD_10050b8b_caseD_c;
    case (undefined1 (*) [16])0x1005157f:
      goto switchD_10050b8b_caseD_e;
    case (undefined1 (*) [16])0x100515ef:
      goto switchD_10050b1a_caseD_a;
    case (undefined1 (*) [16])0x1005165c:
      goto switchD_10050b8b_caseD_a;
    case (undefined1 (*) [16])0x100518af:
      goto switchD_10050b8b_caseD_f;
    case (undefined1 (*) [16])0x10051937:
      goto switchD_10050b8b_caseD_14;
    case (undefined1 (*) [16])0x10051998:
      goto switchD_10050b8b_caseD_12;
    case (undefined1 (*) [16])0x10051b70:
      goto switchD_10050b1a_caseD_0;
    case (undefined1 (*) [16])0x10051c23:
      goto switchD_10050b1a_caseD_15;
    case (undefined1 (*) [16])0x10051c39:
      goto switchD_10050b1a_caseD_17;
    case (undefined1 (*) [16])0x10051cac:
      goto switchD_10050b1a_caseD_18;
    case (undefined1 (*) [16])0x10051d00:
      goto switchD_10050b1a_caseD_19;
    case (undefined1 (*) [16])0x10051f30:
      goto switchD_10050b1a_caseD_20;
    case (undefined1 (*) [16])0x10051f40:
      goto switchD_10050b1a_caseD_1c;
    case (undefined1 (*) [16])0x1005202e:
      goto switchD_10050b1a_caseD_1d;
    case (undefined1 (*) [16])0x10052038:
      goto switchD_10050b1a_caseD_1e;
    case (undefined1 (*) [16])0x10052045:
      goto switchD_10050b1a_caseD_1f;
    case (undefined1 (*) [16])0x10052052:
      goto switchD_10050b1a_caseD_21;
    case (undefined1 (*) [16])0x1005205c:
      goto switchD_10050b1a_caseD_22;
    case (undefined1 (*) [16])0x10052124:
      goto switchD_10050b1a_caseD_9;
    }
    goto switchD_10050b1a_caseD_1b;
  case 5:
switchD_10050b8b_caseD_5:
    pauVar199 = (undefined1 (*) [16])(param_3 + -1);
    if (pauVar199 <= pauVar219) {
      pauVar219 = pauVar199;
    }
    if (pauVar199 != (undefined1 (*) [16])0x0) {
      local_130._0_4_ = pauVar195;
      local_160._0_4_ = pauVar219;
      uVar201 = 0;
      pauVar199 = (undefined1 (*) [16])0x0;
      bVar206 = 0;
      do {
        local_f0 = bVar206;
        local_140 = pauVar199;
        bVar207 = (*local_140)[(int)*pauVar195];
        uVar211 = CONCAT31(0,bVar207);
        local_170._0_4_ = uVar201;
        bStack_ef = 0;
        bStack_ee = 0;
        bStack_ed = 0;
        local_190._0_4_ = uVar211;
        local_100._0_4_ = uVar211 - uVar201;
        sVar286 = (short)uVar201;
        uVar217 = sVar286 - (ushort)bVar207;
        if (uVar201 < uVar211) {
          uVar217 = (ushort)bVar207 - sVar286;
        }
        uVar217 = uVar217 & 0xff;
        uVar209 = sVar286 - (ushort)local_f0;
        if (uVar201 < local_f0) {
          uVar209 = (ushort)local_f0 - sVar286;
        }
        uVar192 = ((ushort)local_f0 - sVar286) + (short)(uVar211 - uVar201);
        uVar193 = -uVar192;
        if ((short)uVar193 < 0) {
          uVar193 = uVar192;
        }
        bVar206 = local_f0;
        if ((uVar209 & 0xff) < uVar217) {
          uVar217 = uVar209 & 0xff;
          bVar206 = bVar207;
        }
        if (uVar193 < uVar217) {
          bVar206 = (byte)uVar201;
        }
        bVar206 = bVar206 + *(byte *)((int)puVar220 + (int)local_140);
        *(byte *)((int)puVar220 + (int)local_140) = bVar206;
        uVar201 = uVar211;
        pauVar199 = (undefined1 (*) [16])(*local_140 + 1);
        auVar291 = local_130._0_16_;
      } while (pauVar219 != (undefined1 (*) [16])(*local_140 + 1));
    }
    break;
  case 6:
switchD_10050b8b_caseD_6:
    pauVar219 = (undefined1 (*) [16])((uint)pauVar218 >> 1);
    if ((undefined1 (*) [16])((uint)(param_3 + -1) >> 1) <=
        (undefined1 (*) [16])((uint)pauVar218 >> 1)) {
      pauVar219 = (undefined1 (*) [16])((uint)(param_3 + -1) >> 1);
    }
    if (pauVar219 != (undefined1 (*) [16])0x0) {
      local_50 = (undefined1  [16])0x0;
      pauVar214 = (undefined1 (*) [16])0x0;
      auVar240 = (undefined1  [16])0x0;
      do {
        uVar217 = *(ushort *)(*pauVar195 + (int)pauVar214 * 2);
        bVar206 = auVar240[0];
        bVar272 = local_50[0];
        bVar207 = auVar240[1];
        bVar234 = local_50[1];
        auVar160._8_7_ = 0;
        auVar160._0_8_ = SUB158(ZEXT115(0) << 0x40,7);
        auVar161._10_5_ = 0;
        auVar161._0_10_ = SUB1510(auVar160 << 0x38,5);
        auVar91._1_12_ = SUB1512(auVar161 << 0x28,3);
        auVar91[0] = bVar207;
        auVar224._0_2_ = CONCAT11(0,bVar206);
        auVar224._2_13_ = auVar91;
        auVar224[0xf] = 0;
        local_190._0_16_ = ZEXT216(uVar217);
        uVar209 = *(ushort *)(*pauVar199 + (int)pauVar214 * 2 + iVar197 + 1);
        bVar232 = (byte)uVar217;
        bVar212 = (byte)(uVar217 >> 8);
        auVar162._8_7_ = 0;
        auVar162._0_8_ = SUB158(ZEXT715(0) << 0x40,7);
        auVar163._10_5_ = 0;
        auVar163._0_10_ = SUB1510(auVar162 << 0x38,5);
        auVar92._1_12_ = SUB1512(auVar163 << 0x28,3);
        auVar92[0] = ((bVar212 < bVar207) * bVar207 | (bVar212 >= bVar207) * bVar212) -
                     ((bVar207 < bVar212) * bVar207 | (bVar207 >= bVar212) * bVar212);
        uVar193 = (ushort)(byte)(((bVar232 < bVar206) * bVar206 | (bVar232 >= bVar206) * bVar232) -
                                ((bVar206 < bVar232) * bVar206 | (bVar206 >= bVar232) * bVar232));
        auVar164._8_7_ = 0;
        auVar164._0_8_ = SUB158(ZEXT715(0) << 0x40,7);
        auVar165._10_5_ = 0;
        auVar165._0_10_ = SUB1510(auVar164 << 0x38,5);
        auVar93._1_12_ = SUB1512(auVar165 << 0x28,3);
        auVar93[0] = ((bVar234 < bVar207) * bVar207 | (bVar234 >= bVar207) * bVar234) -
                     ((bVar207 < bVar234) * bVar207 | (bVar207 >= bVar234) * bVar234);
        uVar192 = (ushort)(byte)(((bVar272 < bVar206) * bVar206 | (bVar272 >= bVar206) * bVar272) -
                                ((bVar206 < bVar272) * bVar206 | (bVar206 >= bVar272) * bVar272));
        uVar248 = auVar93._0_2_;
        uVar252 = auVar92._0_2_;
        auVar269 = ZEXT416(CONCAT22(-(ushort)(uVar248 < uVar252),-(ushort)(uVar192 < uVar193)));
        auVar289 = packsswb(auVar269,auVar269);
        auVar166._8_7_ = 0;
        auVar166._0_8_ = SUB158(ZEXT115(0) << 0x40,7);
        auVar167._10_5_ = 0;
        auVar167._0_10_ = SUB1510(auVar166 << 0x38,5);
        auVar32[2] = bVar234;
        auVar32._0_2_ = local_50._0_2_;
        auVar32._3_12_ = SUB1512(auVar167 << 0x28,3);
        local_170._2_2_ = auVar91._0_2_;
        sVar303 = (local_50._0_2_ & 0xff) + auVar224._0_2_ * -2 + (uVar217 & 0xff);
        sVar306 = auVar32._2_2_ + local_170._2_2_ * -2 + (uVar217 >> 8);
        auVar228 = SUB1614((undefined1  [16])0x0,2);
        sVar286 = -sVar303;
        sVar294 = -sVar306;
        auVar236._0_2_ =
             -(ushort)((short)((ushort)(sVar286 < sVar303) * sVar303 |
                              (ushort)(sVar286 >= sVar303) * sVar286) <
                      (short)((uVar193 < uVar192) * uVar193 | (uVar193 >= uVar192) * uVar192));
        auVar236._2_2_ =
             -(ushort)((short)((ushort)(sVar294 < sVar306) * sVar306 |
                              (ushort)(sVar294 >= sVar306) * sVar294) <
                      (short)((uVar252 < uVar248) * uVar252 | (uVar252 >= uVar248) * uVar248));
        auVar236._4_6_ = 0;
        auVar236._10_2_ = -(ushort)((short)((ushort)(-1 < auVar228._8_2_) * auVar228._8_2_) < 0);
        auVar236._12_2_ = -(ushort)((short)((ushort)(-1 < auVar228._10_2_) * auVar228._10_2_) < 0);
        auVar236._14_2_ = -(ushort)((short)((ushort)(-1 < auVar228._12_2_) * auVar228._12_2_) < 0);
        auVar269 = packsswb(auVar236,auVar236);
        auVar240 = ~auVar269 & (~auVar289 & local_50 | local_190._0_16_ & auVar289) |
                   auVar240 & auVar269;
        local_50._0_2_ = CONCAT11(auVar240[1] + (char)(uVar209 >> 8),auVar240[0] + (char)uVar209);
        local_50._2_6_ = 0;
        local_50[8] = auVar240[8];
        local_50[9] = auVar240[9];
        local_50[10] = auVar240[10];
        local_50[0xb] = auVar240[0xb];
        local_50[0xc] = auVar240[0xc];
        local_50[0xd] = auVar240[0xd];
        local_50[0xe] = auVar240[0xe];
        local_50[0xf] = auVar240[0xf];
        *(ushort *)(*pauVar199 + (int)pauVar214 * 2 + iVar197 + 1) = local_50._0_2_;
        pauVar214 = (undefined1 (*) [16])(*pauVar214 + 1);
        in_XMM0 = ZEXT216(uVar209);
        auVar240 = local_190._0_16_;
        _local_170 = auVar224;
      } while (pauVar219 != pauVar214);
    }
    break;
  case 7:
switchD_10050b8b_caseD_7:
    uVar201 = (uint)pauVar219 / 3;
    if ((uint)(param_3 + -1) / 3 <= (uint)pauVar219 / 3) {
      uVar201 = (uint)(param_3 + -1) / 3;
    }
    if (uVar201 != 0) {
      local_40 = (undefined1  [16])0x0;
      bVar206 = 0;
      uVar211 = 0;
      auVar240 = (undefined1  [16])0x0;
      do {
        local_f0 = (byte)uVar201;
        bStack_ef = (byte)(uVar201 >> 8);
        bStack_ee = (byte)(uVar201 >> 0x10);
        bStack_ed = (byte)(uVar201 >> 0x18);
        uVar198 = (uint)bVar206;
        bVar207 = auVar240[0];
        bVar272 = local_40[0];
        bVar212 = auVar240[1];
        bVar234 = local_40[1];
        local_160._0_4_ = uVar211;
        auVar168._8_7_ = 0;
        auVar168._0_8_ = SUB158(ZEXT115(0) << 0x40,7);
        auVar169._10_5_ = 0;
        auVar169._0_10_ = SUB1510(auVar168 << 0x38,5);
        auVar94._1_12_ = SUB1512(auVar169 << 0x28,3);
        auVar94[0] = bVar212;
        uVar215 = CONCAT31(0,(*local_140)[local_190._0_4_ + 2]);
        uVar217 = *(ushort *)(*local_140 + local_190._0_4_);
        uVar203 = -(uVar211 - uVar198);
        if (uVar198 <= uVar211) {
          uVar203 = uVar211 - uVar198;
        }
        local_130._0_4_ = uVar203;
        auVar291 = local_130._0_16_;
        local_60 = ZEXT216(uVar217);
        local_100._0_4_ = uVar215;
        bVar244 = (byte)uVar217;
        bVar232 = (byte)(uVar217 >> 8);
        auVar170._8_7_ = 0;
        auVar170._0_8_ = SUB158(ZEXT715(0) << 0x40,7);
        auVar171._10_5_ = 0;
        auVar171._0_10_ = SUB1510(auVar170 << 0x38,5);
        auVar95._1_12_ = SUB1512(auVar171 << 0x28,3);
        auVar95[0] = ((bVar232 < bVar212) * bVar212 | (bVar232 >= bVar212) * bVar232) -
                     ((bVar212 < bVar232) * bVar212 | (bVar212 >= bVar232) * bVar232);
        uVar209 = (ushort)(byte)(((bVar244 < bVar207) * bVar207 | (bVar244 >= bVar207) * bVar244) -
                                ((bVar207 < bVar244) * bVar207 | (bVar207 >= bVar244) * bVar244));
        auVar172._8_7_ = 0;
        auVar172._0_8_ = SUB158(ZEXT715(0) << 0x40,7);
        auVar173._10_5_ = 0;
        auVar173._0_10_ = SUB1510(auVar172 << 0x38,5);
        auVar96._1_12_ = SUB1512(auVar173 << 0x28,3);
        auVar96[0] = ((bVar234 < bVar212) * bVar212 | (bVar234 >= bVar212) * bVar234) -
                     ((bVar212 < bVar234) * bVar212 | (bVar212 >= bVar234) * bVar234);
        uVar193 = (ushort)(byte)(((bVar272 < bVar207) * bVar207 | (bVar272 >= bVar207) * bVar272) -
                                ((bVar207 < bVar272) * bVar207 | (bVar207 >= bVar272) * bVar272));
        uVar216 = -(uVar211 - uVar215);
        if (uVar215 <= uVar211) {
          uVar216 = uVar211 - uVar215;
        }
        uVar192 = (short)(uVar211 - uVar215) + (short)(uVar211 - uVar198);
        local_130[0] = (byte)uVar203;
        pauVar219 = (undefined1 (*) [16])(uVar203 & 0xff);
        uVar248 = auVar96._0_2_;
        uVar252 = auVar95._0_2_;
        auVar269 = ZEXT416(CONCAT22(-(ushort)(uVar248 < uVar252),-(ushort)(uVar193 < uVar209)));
        auVar269 = packsswb(auVar269,auVar269);
        local_c0 = local_60 & auVar269;
        if ((short)uVar192 < 0) {
          uVar192 = -uVar192;
        }
        auVar174._8_7_ = 0;
        auVar174._0_8_ = SUB158(ZEXT115(0) << 0x40,7);
        auVar175._10_5_ = 0;
        auVar175._0_10_ = SUB1510(auVar174 << 0x38,5);
        auVar33[2] = bVar234;
        auVar33._0_2_ = local_40._0_2_;
        auVar33._3_12_ = SUB1512(auVar175 << 0x28,3);
        bVar221 = (ushort)local_130[0] < (ushort)(undefined1 (*) [16])(uVar216 & 0xff);
        pauVar214 = (undefined1 (*) [16])(uVar216 & 0xff);
        if (bVar221) {
          pauVar214 = pauVar219;
        }
        sVar286 = (local_40._0_2_ & 0xff) + (ushort)bVar207 * -2 + (uVar217 & 0xff);
        sVar294 = auVar33._2_2_ + auVar94._0_2_ * -2 + (uVar217 >> 8);
        if (bVar221) {
          bVar206 = (*local_140)[local_190._0_4_ + 2];
        }
        auVar228 = SUB1614((undefined1  [16])0x0,2);
        sVar303 = -sVar286;
        sVar306 = -sVar294;
        auVar237._0_2_ =
             -(ushort)((short)((ushort)(sVar303 < sVar286) * sVar286 |
                              (ushort)(sVar303 >= sVar286) * sVar303) <
                      (short)((uVar209 < uVar193) * uVar209 | (uVar209 >= uVar193) * uVar193));
        auVar237._2_2_ =
             -(ushort)((short)((ushort)(sVar306 < sVar294) * sVar294 |
                              (ushort)(sVar306 >= sVar294) * sVar306) <
                      (short)((uVar252 < uVar248) * uVar252 | (uVar252 >= uVar248) * uVar248));
        auVar237._4_6_ = 0;
        auVar237._10_2_ = -(ushort)((short)((ushort)(-1 < auVar228._8_2_) * auVar228._8_2_) < 0);
        auVar237._12_2_ = -(ushort)((short)((ushort)(-1 < auVar228._10_2_) * auVar228._10_2_) < 0);
        auVar237._14_2_ = -(ushort)((short)((ushort)(-1 < auVar228._12_2_) * auVar228._12_2_) < 0);
        auVar289 = packsswb(auVar237,auVar237);
        uVar217 = *(ushort *)(*pauVar199 + local_190._0_4_ + 1);
        auVar240 = ~auVar289 & (~auVar269 & local_40 | local_c0) | auVar240 & auVar289;
        local_40._0_2_ = CONCAT11(auVar240[1] + (char)(uVar217 >> 8),auVar240[0] + (char)uVar217);
        local_40._2_6_ = 0;
        local_40[8] = auVar240[8];
        local_40[9] = auVar240[9];
        local_40[10] = auVar240[10];
        local_40[0xb] = auVar240[0xb];
        local_40[0xc] = auVar240[0xc];
        local_40[0xd] = auVar240[0xd];
        local_40[0xe] = auVar240[0xe];
        local_40[0xf] = auVar240[0xf];
        if (uVar192 < (ushort)pauVar214) {
          bVar206 = (byte)uVar211;
        }
        bVar206 = bVar206 + (*pauVar199)[local_190._0_4_ + 3];
        *(ushort *)(*pauVar199 + local_190._0_4_ + 1) = local_40._0_2_;
        (*pauVar199)[local_190._0_4_ + 3] = bVar206;
        local_190._0_4_ = local_190._0_4_ + 3;
        uVar201 = uVar201 - 1;
        uVar211 = uVar215;
        in_XMM0 = ZEXT216(uVar217);
        auVar240 = local_60;
        local_130._0_16_ = auVar291;
      } while (uVar201 != 0);
    }
    break;
  case 8:
switchD_10050b8b_caseD_8:
    pauVar219 = (undefined1 (*) [16])((uint)pauVar218 >> 2);
    if ((undefined1 (*) [16])((uint)(param_3 + -1) >> 2) <=
        (undefined1 (*) [16])((uint)pauVar218 >> 2)) {
      pauVar219 = (undefined1 (*) [16])((uint)(param_3 + -1) >> 2);
    }
    if (pauVar219 != (undefined1 (*) [16])0x0) {
      auVar288 = (undefined1  [16])0x0;
      pauVar199 = (undefined1 (*) [16])0x0;
      auVar240 = (undefined1  [16])0x0;
      do {
        bVar206 = auVar240[0];
        bVar232 = auVar288[0];
        bVar207 = auVar240[1];
        bVar244 = auVar288[1];
        bVar212 = auVar240[2];
        bVar246 = auVar288[2];
        bVar272 = auVar240[3];
        bVar249 = auVar288[3];
        Var81 = CONCAT81(SUB158(ZEXT115(0) << 0x40,7),bVar272);
        auVar123._9_6_ = 0;
        auVar123._0_9_ = Var81;
        auVar82._1_10_ = SUB1510(auVar123 << 0x30,5);
        auVar82[0] = bVar212;
        auVar124._11_4_ = 0;
        auVar124._0_11_ = auVar82;
        auVar83._1_12_ = SUB1512(auVar124 << 0x20,3);
        auVar83[0] = bVar207;
        auVar223._0_2_ = CONCAT11(0,bVar206);
        auVar223._2_13_ = auVar83;
        auVar223[0xf] = 0;
        uVar201 = *(uint *)(*pauVar195 + (int)pauVar199 * 4);
        local_190._0_16_ = ZEXT416(uVar201);
        bVar273 = (byte)uVar201;
        bVar277 = (byte)(uVar201 >> 8);
        bVar279 = (byte)(uVar201 >> 0x10);
        bVar234 = (byte)(uVar201 >> 0x18);
        Var84 = CONCAT81(SUB158(ZEXT715(0) << 0x40,7),
                         ((bVar234 < bVar272) * bVar272 | (bVar234 >= bVar272) * bVar234) -
                         ((bVar272 < bVar234) * bVar272 | (bVar272 >= bVar234) * bVar234));
        auVar125._9_6_ = 0;
        auVar125._0_9_ = Var84;
        auVar85._1_10_ = SUB1510(auVar125 << 0x30,5);
        auVar85[0] = ((bVar279 < bVar212) * bVar212 | (bVar279 >= bVar212) * bVar279) -
                     ((bVar212 < bVar279) * bVar212 | (bVar212 >= bVar279) * bVar279);
        auVar126._11_4_ = 0;
        auVar126._0_11_ = auVar85;
        auVar86._1_12_ = SUB1512(auVar126 << 0x20,3);
        auVar86[0] = ((bVar277 < bVar207) * bVar207 | (bVar277 >= bVar207) * bVar277) -
                     ((bVar207 < bVar277) * bVar207 | (bVar207 >= bVar277) * bVar277);
        uVar217 = (ushort)(byte)(((bVar273 < bVar206) * bVar206 | (bVar273 >= bVar206) * bVar273) -
                                ((bVar206 < bVar273) * bVar206 | (bVar206 >= bVar273) * bVar273));
        Var87 = CONCAT81(SUB158(ZEXT715(0) << 0x40,7),
                         ((bVar249 < bVar272) * bVar272 | (bVar249 >= bVar272) * bVar249) -
                         ((bVar272 < bVar249) * bVar272 | (bVar272 >= bVar249) * bVar249));
        auVar127._9_6_ = 0;
        auVar127._0_9_ = Var87;
        auVar88._1_10_ = SUB1510(auVar127 << 0x30,5);
        auVar88[0] = ((bVar246 < bVar212) * bVar212 | (bVar246 >= bVar212) * bVar246) -
                     ((bVar212 < bVar246) * bVar212 | (bVar212 >= bVar246) * bVar246);
        auVar128._11_4_ = 0;
        auVar128._0_11_ = auVar88;
        auVar89._1_12_ = SUB1512(auVar128 << 0x20,3);
        auVar89[0] = ((bVar244 < bVar207) * bVar207 | (bVar244 >= bVar207) * bVar244) -
                     ((bVar207 < bVar244) * bVar207 | (bVar207 >= bVar244) * bVar244);
        uVar209 = (ushort)(byte)(((bVar232 < bVar206) * bVar206 | (bVar232 >= bVar206) * bVar232) -
                                ((bVar206 < bVar232) * bVar206 | (bVar206 >= bVar232) * bVar232));
        auVar304._0_2_ = -(ushort)(uVar209 < uVar217);
        uVar193 = auVar89._0_2_;
        uVar252 = auVar86._0_2_;
        auVar304._2_2_ = -(ushort)(uVar193 < uVar252);
        uVar192 = auVar88._0_2_;
        uVar255 = auVar85._0_2_;
        auVar304._4_2_ = -(ushort)(uVar192 < uVar255);
        uVar248 = (ushort)Var87;
        uVar298 = (ushort)Var84;
        auVar304._6_2_ = -(ushort)(uVar248 < uVar298);
        auVar304._8_8_ = 0;
        auVar289 = packsswb(auVar304,auVar304);
        Var84 = CONCAT81(SUB158(ZEXT115(0) << 0x40,7),bVar249);
        auVar129._9_6_ = 0;
        auVar129._0_9_ = Var84;
        auVar90._1_10_ = SUB1510(auVar129 << 0x30,5);
        auVar90[0] = bVar246;
        auVar130._11_4_ = 0;
        auVar130._0_11_ = auVar90;
        auVar31[2] = bVar244;
        auVar31._0_2_ = auVar288._0_2_;
        auVar31._3_12_ = SUB1512(auVar130 << 0x20,3);
        local_170._2_2_ = auVar83._0_2_;
        local_170._4_2_ = auVar82._0_2_;
        sStack_16a = (short)Var81;
        sVar275 = (auVar288._0_2_ & 0xff) + auVar223._0_2_ * -2 + (ushort)bVar273;
        sVar229 = auVar31._2_2_ + local_170._2_2_ * -2 + (ushort)bVar277;
        sVar230 = auVar90._0_2_ + local_170._4_2_ * -2 + (ushort)bVar279;
        sVar231 = (short)Var84 + sStack_16a * -2 + (ushort)bVar234;
        auVar228 = SUB1614((undefined1  [16])0x0,2);
        sVar286 = -sVar275;
        sVar294 = -sVar229;
        sVar303 = -sVar230;
        sVar306 = -sVar231;
        in_XMM0._0_2_ =
             (ushort)(sVar286 < sVar275) * sVar275 | (ushort)(sVar286 >= sVar275) * sVar286;
        in_XMM0._2_2_ =
             (ushort)(sVar294 < sVar229) * sVar229 | (ushort)(sVar294 >= sVar229) * sVar294;
        in_XMM0._4_2_ =
             (ushort)(sVar303 < sVar230) * sVar230 | (ushort)(sVar303 >= sVar230) * sVar303;
        in_XMM0._6_2_ =
             (ushort)(sVar306 < sVar231) * sVar231 | (ushort)(sVar306 >= sVar231) * sVar306;
        in_XMM0._8_2_ = 0;
        sVar294 = (ushort)(-1 < auVar228._8_2_) * auVar228._8_2_;
        in_XMM0._10_2_ = sVar294;
        sVar286 = (ushort)(-1 < auVar228._10_2_) * auVar228._10_2_;
        in_XMM0._12_2_ = sVar286;
        sVar303 = (ushort)(-1 < auVar228._12_2_) * auVar228._12_2_;
        in_XMM0._14_2_ = sVar303;
        auVar235._0_2_ =
             -(ushort)((short)in_XMM0._0_2_ <
                      (short)((uVar217 < uVar209) * uVar217 | (uVar217 >= uVar209) * uVar209));
        auVar235._2_2_ =
             -(ushort)((short)in_XMM0._2_2_ <
                      (short)((uVar252 < uVar193) * uVar252 | (uVar252 >= uVar193) * uVar193));
        auVar235._4_2_ =
             -(ushort)((short)in_XMM0._4_2_ <
                      (short)((uVar255 < uVar192) * uVar255 | (uVar255 >= uVar192) * uVar192));
        auVar235._6_2_ =
             -(ushort)((short)in_XMM0._6_2_ <
                      (short)((uVar298 < uVar248) * uVar298 | (uVar298 >= uVar248) * uVar248));
        auVar235._8_2_ = 0;
        auVar235._10_2_ = -(ushort)(sVar294 < 0);
        auVar235._12_2_ = -(ushort)(sVar286 < 0);
        auVar235._14_2_ = -(ushort)(sVar303 < 0);
        auVar269 = packsswb(auVar235,auVar235);
        auVar240 = ~auVar269 & (~auVar289 & auVar288 | local_190._0_16_ & auVar289) |
                   auVar240 & auVar269;
        uVar201 = puVar220[(int)pauVar199];
        auVar288._0_4_ =
             CONCAT13(auVar240[3] + (char)(uVar201 >> 0x18),
                      CONCAT12(auVar240[2] + (char)(uVar201 >> 0x10),
                               CONCAT11(auVar240[1] + (char)(uVar201 >> 8),
                                        auVar240[0] + (char)uVar201)));
        auVar288._4_4_ = 0;
        auVar288[8] = auVar240[8];
        auVar288[9] = auVar240[9];
        auVar288[10] = auVar240[10];
        auVar288[0xb] = auVar240[0xb];
        auVar288[0xc] = auVar240[0xc];
        auVar288[0xd] = auVar240[0xd];
        auVar288[0xe] = auVar240[0xe];
        auVar288[0xf] = auVar240[0xf];
        puVar220[(int)pauVar199] = auVar288._0_4_;
        pauVar199 = (undefined1 (*) [16])(*pauVar199 + 1);
        auVar240 = local_190._0_16_;
        _local_170 = auVar223;
      } while (pauVar219 != pauVar199);
    }
    break;
  default:
    goto switchD_10050b1a_caseD_9;
  case 10:
switchD_10050b8b_caseD_a:
    uVar201 = (uint)pauVar219 / 6;
    if ((uint)(param_3 + -1) / 6 <= (uint)pauVar219 / 6) {
      uVar201 = (uint)(param_3 + -1) / 6;
    }
    if (uVar201 != 0) {
      local_190._0_4_ = iVar197 + 4;
      local_30 = (undefined1  [16])0x0;
      local_c0 = (undefined1  [16])0x0;
      auVar240 = (undefined1  [16])0x0;
      bVar206 = 0;
      bVar207 = 0;
      bVar212 = 0;
      bVar272 = 0;
      uVar184 = 0;
      uVar185 = 0;
      uVar186 = 0;
      uVar187 = 0;
      uVar188 = 0;
      uVar189 = 0;
      uVar190 = 0;
      uVar191 = 0;
      do {
        uStack_e1 = uVar191;
        uStack_e2 = uVar190;
        uStack_e3 = uVar189;
        uStack_e4 = uVar188;
        uStack_e5 = uVar187;
        uStack_e6 = uVar186;
        uStack_e7 = uVar185;
        uStack_e8 = uVar184;
        bStack_ed = bVar272;
        bStack_ee = bVar212;
        bStack_ef = bVar207;
        local_f0 = bVar206;
        local_160._0_16_ = local_c0;
        uStack_e9 = 0;
        uStack_ea = 0;
        uStack_eb = 0;
        uStack_ec = 0;
        bVar206 = auVar240[0];
        bVar234 = local_30[0];
        bVar207 = auVar240[1];
        bVar232 = local_30[1];
        auVar176._8_7_ = 0;
        auVar176._0_8_ = SUB158(ZEXT115(0) << 0x40,7);
        auVar177._10_5_ = 0;
        auVar177._0_10_ = SUB1510(auVar176 << 0x38,5);
        auVar112._1_12_ = SUB1512(auVar177 << 0x28,3);
        auVar112[0] = bVar207;
        uVar217 = *(ushort *)(*local_140 + local_190._0_4_);
        local_100 = ZEXT216(uVar217);
        bVar272 = (byte)uVar217;
        bVar212 = (byte)(uVar217 >> 8);
        auVar178._8_7_ = 0;
        auVar178._0_8_ = SUB158(ZEXT715(0) << 0x40,7);
        auVar179._10_5_ = 0;
        auVar179._0_10_ = SUB1510(auVar178 << 0x38,5);
        auVar113._1_12_ = SUB1512(auVar179 << 0x28,3);
        auVar113[0] = ((bVar212 < bVar207) * bVar207 | (bVar212 >= bVar207) * bVar212) -
                      ((bVar207 < bVar212) * bVar207 | (bVar207 >= bVar212) * bVar212);
        uVar209 = (ushort)(byte)(((bVar272 < bVar206) * bVar206 | (bVar272 >= bVar206) * bVar272) -
                                ((bVar206 < bVar272) * bVar206 | (bVar206 >= bVar272) * bVar272));
        auVar180._8_7_ = 0;
        auVar180._0_8_ = SUB158(ZEXT715(0) << 0x40,7);
        auVar181._10_5_ = 0;
        auVar181._0_10_ = SUB1510(auVar180 << 0x38,5);
        auVar114._1_12_ = SUB1512(auVar181 << 0x28,3);
        auVar114[0] = ((bVar232 < bVar207) * bVar207 | (bVar232 >= bVar207) * bVar232) -
                      ((bVar207 < bVar232) * bVar207 | (bVar207 >= bVar232) * bVar232);
        uVar193 = (ushort)(byte)(((bVar234 < bVar206) * bVar206 | (bVar234 >= bVar206) * bVar234) -
                                ((bVar206 < bVar234) * bVar206 | (bVar206 >= bVar234) * bVar234));
        uVar192 = auVar114._0_2_;
        uVar248 = auVar113._0_2_;
        auVar291 = ZEXT416(CONCAT22(-(ushort)(uVar192 < uVar248),-(ushort)(uVar193 < uVar209)));
        auVar292 = packsswb(auVar291,auVar291);
        auVar182._8_7_ = 0;
        auVar182._0_8_ = SUB158(ZEXT115(0) << 0x40,7);
        auVar183._10_5_ = 0;
        auVar183._0_10_ = SUB1510(auVar182 << 0x38,5);
        auVar35[2] = bVar232;
        auVar35._0_2_ = local_30._0_2_;
        auVar35._3_12_ = SUB1512(auVar183 << 0x28,3);
        local_130._2_2_ = auVar112._0_2_;
        sVar303 = (local_30._0_2_ & 0xff) + (ushort)bVar206 * -2 + (uVar217 & 0xff);
        sVar306 = auVar35._2_2_ + local_130._2_2_ * -2 + (uVar217 >> 8);
        auVar228 = SUB1614((undefined1  [16])0x0,2);
        sVar286 = -sVar303;
        sVar294 = -sVar306;
        auVar289._0_2_ =
             -(ushort)((short)((ushort)(sVar286 < sVar303) * sVar303 |
                              (ushort)(sVar286 >= sVar303) * sVar286) <
                      (short)((uVar209 < uVar193) * uVar209 | (uVar209 >= uVar193) * uVar193));
        auVar289._2_2_ =
             -(ushort)((short)((ushort)(sVar294 < sVar306) * sVar306 |
                              (ushort)(sVar294 >= sVar306) * sVar294) <
                      (short)((uVar248 < uVar192) * uVar248 | (uVar248 >= uVar192) * uVar192));
        auVar289._4_6_ = 0;
        auVar289._10_2_ = -(ushort)((short)((ushort)(-1 < auVar228._8_2_) * auVar228._8_2_) < 0);
        auVar289._12_2_ = -(ushort)((short)((ushort)(-1 < auVar228._10_2_) * auVar228._10_2_) < 0);
        auVar289._14_2_ = -(ushort)((short)((ushort)(-1 < auVar228._12_2_) * auVar228._12_2_) < 0);
        auVar269 = packsswb(auVar289,auVar289);
        bVar246 = local_160[3];
        Var81 = CONCAT81(SUB158(ZEXT115(0) << 0x40,7),bVar246);
        auVar142._9_6_ = 0;
        auVar142._0_9_ = Var81;
        bVar244 = local_160[2];
        auVar115._1_10_ = SUB1510(auVar142 << 0x30,5);
        auVar115[0] = bVar244;
        auVar143._11_4_ = 0;
        auVar143._0_11_ = auVar115;
        bVar232 = local_160[1];
        auVar116._1_12_ = SUB1512(auVar143 << 0x20,3);
        auVar116[0] = bVar232;
        bVar234 = local_160[0];
        auVar291._0_2_ = CONCAT11(0,bVar234);
        auVar291._2_13_ = auVar116;
        auVar291[0xf] = 0;
        auVar240 = ~auVar269 & (~auVar292 & local_30 | local_100 & auVar292) | auVar240 & auVar269;
        local_30._0_2_ =
             CONCAT11(auVar240[1] +
                      (char)((ushort)*(undefined2 *)(*pauVar199 + local_190._0_4_ + 1) >> 8),
                      auVar240[0] + (char)*(undefined2 *)(*pauVar199 + local_190._0_4_ + 1));
        local_30._2_6_ = 0;
        local_30[8] = auVar240[8];
        local_30[9] = auVar240[9];
        local_30[10] = auVar240[10];
        local_30[0xb] = auVar240[0xb];
        local_30[0xc] = auVar240[0xc];
        local_30[0xd] = auVar240[0xd];
        local_30[0xe] = auVar240[0xe];
        local_30[0xf] = auVar240[0xf];
        uVar211 = *(uint *)(local_140[-1] + local_190._0_4_ + 0xc);
        local_c0 = ZEXT416(uVar211);
        auVar269[1] = bStack_ef;
        auVar269[0] = local_f0;
        auVar269[2] = bStack_ee;
        auVar269[3] = bStack_ed;
        auVar269._4_4_ = 0;
        auVar269[8] = uStack_e8;
        auVar269[9] = uStack_e7;
        auVar269[10] = uStack_e6;
        auVar269[0xb] = uStack_e5;
        auVar269[0xc] = uStack_e4;
        auVar269[0xd] = uStack_e3;
        auVar269[0xe] = uStack_e2;
        auVar269[0xf] = uStack_e1;
        bVar207 = (byte)uVar211;
        bVar212 = (byte)(uVar211 >> 8);
        bVar272 = (byte)(uVar211 >> 0x10);
        bVar206 = (byte)(uVar211 >> 0x18);
        Var84 = CONCAT81(SUB158(ZEXT715(0) << 0x40,7),
                         ((bVar206 < bVar246) * bVar246 | (bVar206 >= bVar246) * bVar206) -
                         ((bVar246 < bVar206) * bVar246 | (bVar246 >= bVar206) * bVar206));
        auVar144._9_6_ = 0;
        auVar144._0_9_ = Var84;
        auVar117._1_10_ = SUB1510(auVar144 << 0x30,5);
        auVar117[0] = ((bVar272 < bVar244) * bVar244 | (bVar272 >= bVar244) * bVar272) -
                      ((bVar244 < bVar272) * bVar244 | (bVar244 >= bVar272) * bVar272);
        auVar145._11_4_ = 0;
        auVar145._0_11_ = auVar117;
        auVar118._1_12_ = SUB1512(auVar145 << 0x20,3);
        auVar118[0] = ((bVar212 < bVar232) * bVar232 | (bVar212 >= bVar232) * bVar212) -
                      ((bVar232 < bVar212) * bVar232 | (bVar232 >= bVar212) * bVar212);
        uVar209 = (ushort)(byte)(((bVar207 < bVar234) * bVar234 | (bVar207 >= bVar234) * bVar207) -
                                ((bVar234 < bVar207) * bVar234 | (bVar234 >= bVar207) * bVar207));
        Var87 = CONCAT81(SUB158(ZEXT715(0) << 0x40,7),
                         ((bStack_ed < bVar246) * bVar246 | (bStack_ed >= bVar246) * bStack_ed) -
                         ((bVar246 < bStack_ed) * bVar246 | (bVar246 >= bStack_ed) * bStack_ed));
        auVar146._9_6_ = 0;
        auVar146._0_9_ = Var87;
        auVar119._1_10_ = SUB1510(auVar146 << 0x30,5);
        auVar119[0] = ((bStack_ee < bVar244) * bVar244 | (bStack_ee >= bVar244) * bStack_ee) -
                      ((bVar244 < bStack_ee) * bVar244 | (bVar244 >= bStack_ee) * bStack_ee);
        auVar147._11_4_ = 0;
        auVar147._0_11_ = auVar119;
        auVar120._1_12_ = SUB1512(auVar147 << 0x20,3);
        auVar120[0] = ((bStack_ef < bVar232) * bVar232 | (bStack_ef >= bVar232) * bStack_ef) -
                      ((bVar232 < bStack_ef) * bVar232 | (bVar232 >= bStack_ef) * bStack_ef);
        uVar217 = (ushort)(byte)(((local_f0 < bVar234) * bVar234 | (local_f0 >= bVar234) * local_f0)
                                - ((bVar234 < local_f0) * bVar234 | (bVar234 >= local_f0) * local_f0
                                  ));
        auVar293._0_2_ = -(ushort)(uVar217 < uVar209);
        uVar193 = auVar120._0_2_;
        uVar252 = auVar118._0_2_;
        auVar293._2_2_ = -(ushort)(uVar193 < uVar252);
        uVar192 = auVar119._0_2_;
        uVar255 = auVar117._0_2_;
        auVar293._4_2_ = -(ushort)(uVar192 < uVar255);
        uVar248 = (ushort)Var87;
        uVar298 = (ushort)Var84;
        auVar293._6_2_ = -(ushort)(uVar248 < uVar298);
        auVar293._8_8_ = 0;
        uVar205 = *(undefined4 *)(pauVar199[-1] + local_190._0_4_ + 0xd);
        auVar289 = packsswb(auVar293,auVar293);
        Var84 = CONCAT81(SUB158(ZEXT715(0) << 0x40,7),bStack_ed);
        auVar148._9_6_ = 0;
        auVar148._0_9_ = Var84;
        auVar121._1_10_ = SUB1510(auVar148 << 0x30,5);
        auVar121[0] = bStack_ee;
        auVar149._11_4_ = 0;
        auVar149._0_11_ = auVar121;
        auVar122._1_12_ = SUB1512(auVar149 << 0x20,3);
        auVar122[0] = bStack_ef;
        local_130._2_2_ = auVar116._0_2_;
        local_130._4_2_ = auVar115._0_2_;
        local_130._6_2_ = (undefined2)Var81;
        sVar275 = (ushort)local_f0 + auVar291._0_2_ * -2 + ((ushort)uVar211 & 0xff);
        sVar229 = auVar122._0_2_ + local_130._2_2_ * -2 + (ushort)bVar212;
        sVar230 = auVar121._0_2_ + local_130._4_2_ * -2 + (ushort)bVar272;
        sVar231 = (short)Var84 + local_130._6_2_ * -2 + (ushort)bVar206;
        auVar228 = SUB1614((undefined1  [16])0x0,2);
        sVar286 = -sVar275;
        sVar294 = -sVar229;
        sVar303 = -sVar230;
        sVar306 = -sVar231;
        auVar292._0_2_ =
             -(ushort)((short)((ushort)(sVar286 < sVar275) * sVar275 |
                              (ushort)(sVar286 >= sVar275) * sVar286) <
                      (short)((uVar209 < uVar217) * uVar209 | (uVar209 >= uVar217) * uVar217));
        auVar292._2_2_ =
             -(ushort)((short)((ushort)(sVar294 < sVar229) * sVar229 |
                              (ushort)(sVar294 >= sVar229) * sVar294) <
                      (short)((uVar252 < uVar193) * uVar252 | (uVar252 >= uVar193) * uVar193));
        auVar292._4_2_ =
             -(ushort)((short)((ushort)(sVar303 < sVar230) * sVar230 |
                              (ushort)(sVar303 >= sVar230) * sVar303) <
                      (short)((uVar255 < uVar192) * uVar255 | (uVar255 >= uVar192) * uVar192));
        auVar292._6_2_ =
             -(ushort)((short)((ushort)(sVar306 < sVar231) * sVar231 |
                              (ushort)(sVar306 >= sVar231) * sVar306) <
                      (short)((uVar298 < uVar248) * uVar298 | (uVar298 >= uVar248) * uVar248));
        auVar292._8_2_ = 0;
        auVar292._10_2_ = -(ushort)((short)((ushort)(-1 < auVar228._8_2_) * auVar228._8_2_) < 0);
        auVar292._12_2_ = -(ushort)((short)((ushort)(-1 < auVar228._10_2_) * auVar228._10_2_) < 0);
        auVar292._14_2_ = -(ushort)((short)((ushort)(-1 < auVar228._12_2_) * auVar228._12_2_) < 0);
        auVar240 = packsswb(auVar292,auVar292);
        auVar269 = ~auVar240 & (~auVar289 & auVar269 | local_c0 & auVar289) |
                   local_160._0_16_ & auVar240;
        bVar206 = auVar269[0] + (char)uVar205;
        bVar207 = auVar269[1] + (char)((uint)uVar205 >> 8);
        bVar212 = auVar269[2] + (char)((uint)uVar205 >> 0x10);
        bVar272 = auVar269[3] + (char)((uint)uVar205 >> 0x18);
        pbVar204 = pauVar199[-1] + local_190._0_4_ + 0xd;
        *pbVar204 = bVar206;
        pbVar204[1] = bVar207;
        pbVar204[2] = bVar212;
        pbVar204[3] = bVar272;
        *(ushort *)(*pauVar199 + local_190._0_4_ + 1) = local_30._0_2_;
        pauVar219 = (undefined1 (*) [16])(local_190._0_4_ + 6);
        uVar201 = uVar201 - 1;
        local_190._0_4_ = pauVar219;
        in_XMM0 = local_c0;
        auVar240 = local_100;
        uVar184 = auVar269[8];
        uVar185 = auVar269[9];
        uVar186 = auVar269[10];
        uVar187 = auVar269[0xb];
        uVar188 = auVar269[0xc];
        uVar189 = auVar269[0xd];
        uVar190 = auVar269[0xe];
        uVar191 = auVar269[0xf];
      } while (uVar201 != 0);
    }
    break;
  case 0xc:
switchD_10050b8b_caseD_c:
    pauVar219 = (undefined1 (*) [16])((uint)pauVar218 >> 3);
    if ((undefined1 (*) [16])((uint)(param_3 + -1) >> 3) <=
        (undefined1 (*) [16])((uint)pauVar218 >> 3)) {
      pauVar219 = (undefined1 (*) [16])((uint)(param_3 + -1) >> 3);
    }
    if (pauVar219 != (undefined1 (*) [16])0x0) {
      auVar290 = (undefined1  [16])0x0;
      pauVar199 = (undefined1 (*) [16])0x0;
      auVar240 = (undefined1  [16])0x0;
      do {
        bVar206 = auVar240[0];
        bVar233 = auVar290[0];
        bVar207 = auVar240[1];
        bVar245 = auVar290[1];
        bVar212 = auVar240[2];
        bVar247 = auVar290[2];
        bVar272 = auVar240[3];
        bVar250 = auVar290[3];
        bVar234 = auVar240[4];
        bVar251 = auVar290[4];
        bVar232 = auVar240[5];
        bVar253 = auVar290[5];
        bVar244 = auVar240[6];
        bVar254 = auVar290[6];
        bVar246 = auVar240[7];
        bVar256 = auVar290[7];
        bVar249 = auVar240[8];
        bVar257 = auVar290[8];
        bVar273 = auVar240[9];
        bVar260 = auVar290[9];
        bVar277 = auVar240[10];
        bVar261 = auVar290[10];
        bVar279 = auVar240[0xb];
        bVar263 = auVar290[0xb];
        bVar5 = auVar240[0xc];
        bVar264 = auVar290[0xc];
        auVar10[0xd] = 0;
        auVar10._0_13_ = auVar240._0_13_;
        auVar10[0xe] = bVar246;
        auVar13[0xc] = bVar244;
        auVar13._0_12_ = auVar240._0_12_;
        auVar13._13_2_ = auVar10._13_2_;
        auVar18[0xb] = 0;
        auVar18._0_11_ = auVar240._0_11_;
        auVar18._12_3_ = auVar13._12_3_;
        auVar21[10] = bVar232;
        auVar21._0_10_ = auVar240._0_10_;
        auVar21._11_4_ = auVar18._11_4_;
        auVar26[9] = 0;
        auVar26._0_9_ = auVar240._0_9_;
        auVar26._10_5_ = auVar21._10_5_;
        auVar29[8] = bVar234;
        auVar29._0_8_ = auVar240._0_8_;
        auVar29._9_6_ = auVar26._9_6_;
        auVar97._7_8_ = 0;
        auVar97._0_7_ = auVar29._8_7_;
        Var81 = CONCAT81(SUB158(auVar97 << 0x40,7),bVar272);
        auVar131._9_6_ = 0;
        auVar131._0_9_ = Var81;
        auVar98._1_10_ = SUB1510(auVar131 << 0x30,5);
        auVar98[0] = bVar212;
        auVar132._11_4_ = 0;
        auVar132._0_11_ = auVar98;
        auVar99._1_12_ = SUB1512(auVar132 << 0x20,3);
        auVar99[0] = bVar207;
        auVar226._0_2_ = CONCAT11(0,bVar206);
        auVar226._2_13_ = auVar99;
        auVar226[0xf] = 0;
        uVar3 = *(ulonglong *)(*pauVar195 + (int)pauVar199 * 8);
        local_190._8_8_ = 0;
        local_190._0_8_ = uVar3;
        bVar274 = (byte)uVar3;
        bVar278 = (byte)(uVar3 >> 8);
        bVar280 = (byte)(uVar3 >> 0x10);
        bVar281 = (byte)(uVar3 >> 0x18);
        bVar282 = (byte)(uVar3 >> 0x20);
        bVar283 = (byte)(uVar3 >> 0x28);
        bVar284 = (byte)(uVar3 >> 0x30);
        bVar6 = (byte)(uVar3 >> 0x38);
        cVar208 = ((bVar6 < bVar246) * bVar246 | (bVar6 >= bVar246) * bVar6) -
                  ((bVar246 < bVar6) * bVar246 | (bVar246 >= bVar6) * bVar6);
        uVar217 = CONCAT11((bVar249 != 0) * bVar249,cVar208);
        uVar133 = CONCAT12((bVar273 != 0) * bVar273,uVar217);
        uVar201 = CONCAT13((bVar277 != 0) * bVar277,uVar133);
        uVar150 = CONCAT14((bVar279 != 0) * bVar279,uVar201);
        auVar228[5] = (bVar5 != 0) * bVar5;
        auVar228._0_5_ = uVar150;
        auVar228._6_8_ = 0;
        auVar7[0xe] = cVar208;
        auVar7._0_14_ = auVar228 << 0x38;
        uVar155 = CONCAT26(auVar7._13_2_,
                           CONCAT15(((bVar284 < bVar244) * bVar244 | (bVar284 >= bVar244) * bVar284)
                                    - ((bVar244 < bVar284) * bVar244 |
                                      (bVar244 >= bVar284) * bVar284),uVar150));
        auVar151._4_8_ = 0;
        auVar151._0_4_ = uVar201;
        auVar14._12_3_ = (int3)((ulonglong)uVar155 >> 0x28);
        auVar14._0_12_ = auVar151 << 0x38;
        uVar152 = CONCAT44(auVar14._11_4_,
                           CONCAT13(((bVar283 < bVar232) * bVar232 | (bVar283 >= bVar232) * bVar283)
                                    - ((bVar232 < bVar283) * bVar232 |
                                      (bVar232 >= bVar283) * bVar283),uVar133));
        auVar22._10_5_ = (int5)((ulonglong)uVar152 >> 0x18);
        auVar22._0_10_ = (unkuint10)uVar217 << 0x38;
        uVar2 = CONCAT62(auVar22._9_6_,
                         CONCAT11(((bVar282 < bVar234) * bVar234 | (bVar282 >= bVar234) * bVar282) -
                                  ((bVar234 < bVar282) * bVar234 | (bVar234 >= bVar282) * bVar282),
                                  cVar208));
        auVar100._7_8_ = 0;
        auVar100._0_7_ = (uint7)((ulonglong)uVar2 >> 8);
        Var84 = CONCAT81(SUB158(auVar100 << 0x40,7),
                         ((bVar281 < bVar272) * bVar272 | (bVar281 >= bVar272) * bVar281) -
                         ((bVar272 < bVar281) * bVar272 | (bVar272 >= bVar281) * bVar281));
        auVar134._9_6_ = 0;
        auVar134._0_9_ = Var84;
        auVar101._1_10_ = SUB1510(auVar134 << 0x30,5);
        auVar101[0] = ((bVar280 < bVar212) * bVar212 | (bVar280 >= bVar212) * bVar280) -
                      ((bVar212 < bVar280) * bVar212 | (bVar212 >= bVar280) * bVar280);
        auVar135._11_4_ = 0;
        auVar135._0_11_ = auVar101;
        auVar102._1_12_ = SUB1512(auVar135 << 0x20,3);
        auVar102[0] = ((bVar278 < bVar207) * bVar207 | (bVar278 >= bVar207) * bVar278) -
                      ((bVar207 < bVar278) * bVar207 | (bVar207 >= bVar278) * bVar278);
        uVar193 = (ushort)(byte)(((bVar274 < bVar206) * bVar206 | (bVar274 >= bVar206) * bVar274) -
                                ((bVar206 < bVar274) * bVar206 | (bVar206 >= bVar274) * bVar274));
        cVar208 = ((bVar256 < bVar246) * bVar246 | (bVar256 >= bVar246) * bVar256) -
                  ((bVar246 < bVar256) * bVar246 | (bVar246 >= bVar256) * bVar256);
        uVar217 = CONCAT11(((bVar257 < bVar249) * bVar249 | (bVar257 >= bVar249) * bVar257) -
                           ((bVar249 < bVar257) * bVar249 | (bVar249 >= bVar257) * bVar257),cVar208)
        ;
        uVar133 = CONCAT12(((bVar260 < bVar273) * bVar273 | (bVar260 >= bVar273) * bVar260) -
                           ((bVar273 < bVar260) * bVar273 | (bVar273 >= bVar260) * bVar260),uVar217)
        ;
        uVar201 = CONCAT13(((bVar261 < bVar277) * bVar277 | (bVar261 >= bVar277) * bVar261) -
                           ((bVar277 < bVar261) * bVar277 | (bVar277 >= bVar261) * bVar261),uVar133)
        ;
        uVar150 = CONCAT14(((bVar263 < bVar279) * bVar279 | (bVar263 >= bVar279) * bVar263) -
                           ((bVar279 < bVar263) * bVar279 | (bVar279 >= bVar263) * bVar263),uVar201)
        ;
        auVar156[5] = ((bVar264 < bVar5) * bVar5 | (bVar264 >= bVar5) * bVar264) -
                      ((bVar5 < bVar264) * bVar5 | (bVar5 >= bVar264) * bVar264);
        auVar156._0_5_ = uVar150;
        auVar156._6_8_ = 0;
        auVar8[0xe] = cVar208;
        auVar8._0_14_ = auVar156 << 0x38;
        uVar157 = CONCAT26(auVar8._13_2_,
                           CONCAT15(((bVar254 < bVar244) * bVar244 | (bVar254 >= bVar244) * bVar254)
                                    - ((bVar244 < bVar254) * bVar244 |
                                      (bVar244 >= bVar254) * bVar254),uVar150));
        auVar153._4_8_ = 0;
        auVar153._0_4_ = uVar201;
        auVar15._12_3_ = (int3)((ulonglong)uVar157 >> 0x28);
        auVar15._0_12_ = auVar153 << 0x38;
        uVar154 = CONCAT44(auVar15._11_4_,
                           CONCAT13(((bVar253 < bVar232) * bVar232 | (bVar253 >= bVar232) * bVar253)
                                    - ((bVar232 < bVar253) * bVar232 |
                                      (bVar232 >= bVar253) * bVar253),uVar133));
        auVar23._10_5_ = (int5)((ulonglong)uVar154 >> 0x18);
        auVar23._0_10_ = (unkuint10)uVar217 << 0x38;
        uVar312 = CONCAT62(auVar23._9_6_,
                           CONCAT11(((bVar251 < bVar234) * bVar234 | (bVar251 >= bVar234) * bVar251)
                                    - ((bVar234 < bVar251) * bVar234 |
                                      (bVar234 >= bVar251) * bVar251),cVar208));
        auVar103._7_8_ = 0;
        auVar103._0_7_ = (uint7)((ulonglong)uVar312 >> 8);
        Var87 = CONCAT81(SUB158(auVar103 << 0x40,7),
                         ((bVar250 < bVar272) * bVar272 | (bVar250 >= bVar272) * bVar250) -
                         ((bVar272 < bVar250) * bVar272 | (bVar272 >= bVar250) * bVar250));
        auVar136._9_6_ = 0;
        auVar136._0_9_ = Var87;
        auVar104._1_10_ = SUB1510(auVar136 << 0x30,5);
        auVar104[0] = ((bVar247 < bVar212) * bVar212 | (bVar247 >= bVar212) * bVar247) -
                      ((bVar212 < bVar247) * bVar212 | (bVar212 >= bVar247) * bVar247);
        auVar137._11_4_ = 0;
        auVar137._0_11_ = auVar104;
        auVar105._1_12_ = SUB1512(auVar137 << 0x20,3);
        auVar105[0] = ((bVar245 < bVar207) * bVar207 | (bVar245 >= bVar207) * bVar245) -
                      ((bVar207 < bVar245) * bVar207 | (bVar207 >= bVar245) * bVar245);
        uVar192 = (ushort)(byte)(((bVar233 < bVar206) * bVar206 | (bVar233 >= bVar206) * bVar233) -
                                ((bVar206 < bVar233) * bVar206 | (bVar206 >= bVar233) * bVar233));
        auVar11._8_6_ = 0;
        auVar11._0_8_ = uVar3;
        auVar11[0xe] = bVar6;
        auVar16._8_4_ = 0;
        auVar16._0_8_ = uVar3;
        auVar16[0xc] = bVar284;
        auVar16._13_2_ = auVar11._13_2_;
        auVar19._8_4_ = 0;
        auVar19._0_8_ = uVar3;
        auVar19._12_3_ = auVar16._12_3_;
        auVar24._8_2_ = 0;
        auVar24._0_8_ = uVar3;
        auVar24[10] = bVar283;
        auVar24._11_4_ = auVar19._11_4_;
        auVar27._8_2_ = 0;
        auVar27._0_8_ = uVar3;
        auVar27._10_5_ = auVar24._10_5_;
        auVar30[8] = bVar282;
        auVar30._0_8_ = uVar3;
        auVar30._9_6_ = auVar27._9_6_;
        auVar106._7_8_ = 0;
        auVar106._0_7_ = auVar30._8_7_;
        Var107 = CONCAT81(SUB158(auVar106 << 0x40,7),bVar281);
        auVar138._9_6_ = 0;
        auVar138._0_9_ = Var107;
        auVar108._1_10_ = SUB1510(auVar138 << 0x30,5);
        auVar108[0] = bVar280;
        auVar139._11_4_ = 0;
        auVar139._0_11_ = auVar108;
        auVar109._1_12_ = SUB1512(auVar139 << 0x20,3);
        auVar109[0] = bVar278;
        auVar305._0_2_ = -(ushort)(uVar192 < uVar193);
        uVar248 = auVar105._0_2_;
        uVar298 = auVar102._0_2_;
        auVar305._2_2_ = -(ushort)(uVar248 < uVar298);
        uVar252 = auVar104._0_2_;
        uVar307 = auVar101._0_2_;
        auVar305._4_2_ = -(ushort)(uVar252 < uVar307);
        uVar255 = (ushort)Var87;
        uVar308 = (ushort)Var84;
        auVar305._6_2_ = -(ushort)(uVar255 < uVar308);
        sVar258 = (short)((ulonglong)uVar312 >> 8);
        sVar309 = (short)((ulonglong)uVar2 >> 8);
        auVar305._8_2_ = -(ushort)(sVar258 < sVar309);
        sVar262 = (short)((ulonglong)uVar154 >> 0x18);
        sVar310 = (short)((ulonglong)uVar152 >> 0x18);
        auVar305._10_2_ = -(ushort)(sVar262 < sVar310);
        sVar265 = (short)((ulonglong)uVar157 >> 0x28);
        sVar311 = (short)((ulonglong)uVar155 >> 0x28);
        uVar209 = auVar7._13_2_ >> 8;
        auVar305._12_2_ = -(ushort)(sVar265 < sVar311);
        uVar217 = auVar8._13_2_ >> 8;
        auVar305._14_2_ = -(ushort)(uVar217 < uVar209);
        auVar289 = packsswb(auVar305,auVar305);
        auVar9[0xd] = 0;
        auVar9._0_13_ = auVar290._0_13_;
        auVar9[0xe] = bVar256;
        auVar12[0xc] = bVar254;
        auVar12._0_12_ = auVar290._0_12_;
        auVar12._13_2_ = auVar9._13_2_;
        auVar17[0xb] = 0;
        auVar17._0_11_ = auVar290._0_11_;
        auVar17._12_3_ = auVar12._12_3_;
        auVar20[10] = bVar253;
        auVar20._0_10_ = auVar290._0_10_;
        auVar20._11_4_ = auVar17._11_4_;
        auVar25[9] = 0;
        auVar25._0_9_ = auVar290._0_9_;
        auVar25._10_5_ = auVar20._10_5_;
        auVar28[8] = bVar251;
        auVar28._0_8_ = auVar290._0_8_;
        auVar28._9_6_ = auVar25._9_6_;
        auVar110._7_8_ = 0;
        auVar110._0_7_ = auVar28._8_7_;
        Var84 = CONCAT81(SUB158(auVar110 << 0x40,7),bVar250);
        auVar140._9_6_ = 0;
        auVar140._0_9_ = Var84;
        auVar111._1_10_ = SUB1510(auVar140 << 0x30,5);
        auVar111[0] = bVar247;
        auVar141._11_4_ = 0;
        auVar141._0_11_ = auVar111;
        auVar34[2] = bVar245;
        auVar34._0_2_ = auVar290._0_2_;
        auVar34._3_12_ = SUB1512(auVar141 << 0x20,3);
        local_170._2_2_ = auVar99._0_2_;
        local_170._4_2_ = auVar98._0_2_;
        sStack_16a = (short)Var81;
        uStack_168._0_2_ = auVar29._8_2_;
        uStack_168._2_2_ = auVar21._10_2_;
        uStack_168._4_2_ = auVar13._12_2_;
        sVar287 = (auVar290._0_2_ & 0xff) + auVar226._0_2_ * -2 + (ushort)bVar274;
        sVar295 = auVar34._2_2_ + local_170._2_2_ * -2 + auVar109._0_2_;
        sVar296 = auVar111._0_2_ + local_170._4_2_ * -2 + auVar108._0_2_;
        sVar297 = (short)Var84 + sStack_16a * -2 + (short)Var107;
        sVar299 = auVar28._8_2_ + (short)uStack_168 * -2 + auVar30._8_2_;
        sVar300 = auVar20._10_2_ + uStack_168._2_2_ * -2 + auVar24._10_2_;
        sVar301 = auVar12._12_2_ + uStack_168._4_2_ * -2 + auVar16._12_2_;
        sVar302 = (auVar9._13_2_ >> 8) + (auVar10._13_2_ >> 8) * -2 + (auVar11._13_2_ >> 8);
        auVar228 = SUB1614((undefined1  [16])0x0,2);
        sVar286 = -sVar287;
        sVar294 = -sVar295;
        sVar303 = -sVar296;
        sVar306 = -sVar297;
        sVar275 = -sVar299;
        sVar229 = auVar228._8_2_ - sVar300;
        sVar230 = auVar228._10_2_ - sVar301;
        sVar231 = auVar228._12_2_ - sVar302;
        in_XMM0._0_2_ =
             (ushort)(sVar286 < sVar287) * sVar287 | (ushort)(sVar286 >= sVar287) * sVar286;
        in_XMM0._2_2_ =
             (ushort)(sVar294 < sVar295) * sVar295 | (ushort)(sVar294 >= sVar295) * sVar294;
        in_XMM0._4_2_ =
             (ushort)(sVar303 < sVar296) * sVar296 | (ushort)(sVar303 >= sVar296) * sVar303;
        in_XMM0._6_2_ =
             (ushort)(sVar306 < sVar297) * sVar297 | (ushort)(sVar306 >= sVar297) * sVar306;
        in_XMM0._8_2_ =
             (ushort)(sVar275 < sVar299) * sVar299 | (ushort)(sVar275 >= sVar299) * sVar275;
        in_XMM0._10_2_ =
             (ushort)(sVar229 < sVar300) * sVar300 | (ushort)(sVar229 >= sVar300) * sVar229;
        in_XMM0._12_2_ =
             (ushort)(sVar230 < sVar301) * sVar301 | (ushort)(sVar230 >= sVar301) * sVar230;
        in_XMM0._14_2_ =
             (ushort)(sVar231 < sVar302) * sVar302 | (ushort)(sVar231 >= sVar302) * sVar231;
        auVar239._0_2_ =
             -(ushort)((short)in_XMM0._0_2_ <
                      (short)((uVar193 < uVar192) * uVar193 | (uVar193 >= uVar192) * uVar192));
        auVar239._2_2_ =
             -(ushort)((short)in_XMM0._2_2_ <
                      (short)((uVar298 < uVar248) * uVar298 | (uVar298 >= uVar248) * uVar248));
        auVar239._4_2_ =
             -(ushort)((short)in_XMM0._4_2_ <
                      (short)((uVar307 < uVar252) * uVar307 | (uVar307 >= uVar252) * uVar252));
        auVar239._6_2_ =
             -(ushort)((short)in_XMM0._6_2_ <
                      (short)((uVar308 < uVar255) * uVar308 | (uVar308 >= uVar255) * uVar255));
        auVar239._8_2_ =
             -(ushort)((short)in_XMM0._8_2_ <
                      (short)((ushort)(sVar309 < sVar258) * sVar309 |
                             (ushort)(sVar309 >= sVar258) * sVar258));
        auVar239._10_2_ =
             -(ushort)((short)in_XMM0._10_2_ <
                      (short)((ushort)(sVar310 < sVar262) * sVar310 |
                             (ushort)(sVar310 >= sVar262) * sVar262));
        auVar239._12_2_ =
             -(ushort)((short)in_XMM0._12_2_ <
                      (short)((ushort)(sVar311 < sVar265) * sVar311 |
                             (ushort)(sVar311 >= sVar265) * sVar265));
        auVar239._14_2_ =
             -(ushort)((short)in_XMM0._14_2_ <
                      (short)((uVar209 < uVar217) * uVar209 | (uVar209 >= uVar217) * uVar217));
        auVar269 = packsswb(auVar239,auVar239);
        auVar240 = ~auVar269 & (~auVar289 & auVar290 | local_190._0_16_ & auVar289) |
                   auVar240 & auVar269;
        uVar2 = *(undefined8 *)(puVar220 + (int)pauVar199 * 2);
        auVar290._0_8_ =
             CONCAT17(auVar240[7] + (char)((ulonglong)uVar2 >> 0x38),
                      CONCAT16(auVar240[6] + (char)((ulonglong)uVar2 >> 0x30),
                               CONCAT15(auVar240[5] + (char)((ulonglong)uVar2 >> 0x28),
                                        CONCAT14(auVar240[4] + (char)((ulonglong)uVar2 >> 0x20),
                                                 CONCAT13(auVar240[3] +
                                                          (char)((ulonglong)uVar2 >> 0x18),
                                                          CONCAT12(auVar240[2] +
                                                                   (char)((ulonglong)uVar2 >> 0x10),
                                                                   CONCAT11(auVar240[1] +
                                                                            (char)((ulonglong)uVar2
                                                                                  >> 8),
                                                                            auVar240[0] +
                                                                            (char)uVar2)))))));
        auVar290[8] = auVar240[8];
        auVar290[9] = auVar240[9];
        auVar290[10] = auVar240[10];
        auVar290[0xb] = auVar240[0xb];
        auVar290[0xc] = auVar240[0xc];
        auVar290[0xd] = auVar240[0xd];
        auVar290[0xe] = auVar240[0xe];
        auVar290[0xf] = auVar240[0xf];
        *(undefined8 *)(puVar220 + (int)pauVar199 * 2) = auVar290._0_8_;
        pauVar199 = (undefined1 (*) [16])(*pauVar199 + 1);
        auVar240 = local_190._0_16_;
        _local_170 = auVar226;
      } while (pauVar219 != pauVar199);
    }
    break;
  case 0xd:
switchD_10050b8b_caseD_d:
    pauVar199 = (undefined1 (*) [16])(param_3 + -1);
    if (pauVar199 <= pauVar219) {
      pauVar219 = pauVar199;
    }
    if (pauVar199 != (undefined1 (*) [16])0x0) {
      pauVar199 = (undefined1 (*) [16])0x0;
      bVar206 = 0;
      do {
        bVar206 = (char)((uint)bVar206 + (uint)(byte)(*pauVar199)[(int)*pauVar195] >> 1) +
                  *(byte *)((int)puVar220 + (int)pauVar199);
        *(byte *)((int)puVar220 + (int)pauVar199) = bVar206;
        pauVar199 = (undefined1 (*) [16])(*pauVar199 + 1);
      } while (pauVar219 != pauVar199);
    }
    break;
  case 0xe:
switchD_10050b8b_caseD_e:
    pauVar214 = (undefined1 (*) [16])((uint)pauVar219 >> 1);
    if ((undefined1 (*) [16])((uint)(param_3 + -1) >> 1) <=
        (undefined1 (*) [16])((uint)pauVar219 >> 1)) {
      pauVar214 = (undefined1 (*) [16])((uint)(param_3 + -1) >> 1);
    }
    if (pauVar214 != (undefined1 (*) [16])0x0) {
      pauVar219 = (undefined1 (*) [16])0x0;
      bVar207 = 0;
      local_160._0_4_ = pauVar214;
      local_140 = (undefined1 (*) [16])(*local_140 + iVar197 + 1);
      bVar206 = 0;
      do {
        bVar207 = (char)((uint)bVar207 + (uint)(byte)local_140[-1][(int)pauVar219 * 2 + 0xf] >> 1) +
                  (*pauVar199)[(int)pauVar219 * 2 + iVar197 + 1];
        bVar206 = (char)((uint)bVar206 + (uint)(byte)(*local_140)[(int)pauVar219 * 2] >> 1) +
                  (*pauVar199)[(int)pauVar219 * 2 + iVar197 + 2];
        (*pauVar199)[(int)pauVar219 * 2 + iVar197 + 1] = bVar207;
        (*pauVar199)[(int)pauVar219 * 2 + iVar197 + 2] = bVar206;
        pauVar219 = (undefined1 (*) [16])(*pauVar219 + 1);
      } while (pauVar214 != pauVar219);
    }
    break;
  case 0xf:
switchD_10050b8b_caseD_f:
    uVar201 = (uint)pauVar219 / 3;
    if ((uint)(param_3 + -1) / 3 <= (uint)pauVar219 / 3) {
      uVar201 = (uint)(param_3 + -1) / 3;
    }
    pauVar219 = (undefined1 (*) [16])0x0;
    if (uVar201 != 0) {
      bVar206 = 0;
      bVar212 = 0;
      bVar207 = 0;
      do {
        local_160._0_4_ = uVar201;
        bVar207 = (char)((uint)bVar207 + (uint)(byte)(*local_140)[local_190._0_4_] >> 1) +
                  (*pauVar199)[local_190._0_4_ + 1];
        bVar212 = (char)((uint)bVar212 + (uint)(byte)(*local_140)[local_190._0_4_ + 1] >> 1) +
                  (*pauVar199)[local_190._0_4_ + 2];
        bVar206 = (char)((uint)bVar206 + (uint)(byte)(*local_140)[local_190._0_4_ + 2] >> 1) +
                  (*pauVar199)[local_190._0_4_ + 3];
        (*pauVar199)[local_190._0_4_ + 1] = bVar207;
        (*pauVar199)[local_190._0_4_ + 2] = bVar212;
        (*pauVar199)[local_190._0_4_ + 3] = bVar206;
        local_190._0_4_ = local_190._0_4_ + 3;
        uVar201 = uVar201 - 1;
      } while (uVar201 != 0);
      pauVar219 = (undefined1 (*) [16])0x0;
    }
    break;
  case 0x10:
switchD_10050b8b_caseD_10:
    pauVar219 = (undefined1 (*) [16])((uint)pauVar218 >> 2);
    if ((undefined1 (*) [16])((uint)(param_3 + -1) >> 2) <=
        (undefined1 (*) [16])((uint)pauVar218 >> 2)) {
      pauVar219 = (undefined1 (*) [16])((uint)(param_3 + -1) >> 2);
    }
    if (pauVar219 != (undefined1 (*) [16])0x0) {
      auVar238 = (undefined1  [16])0x0;
      pauVar199 = (undefined1 (*) [16])0x0;
      do {
        uVar201 = puVar220[(int)pauVar199];
        auVar269 = ZEXT416(*(uint *)(*pauVar195 + (int)pauVar199 * 4)) ^ auVar238;
        auVar289 = ZEXT416(*(uint *)(*pauVar195 + (int)pauVar199 * 4)) & auVar238;
        auVar267._0_2_ = auVar269._0_2_ >> 1;
        auVar267._2_2_ = auVar269._2_2_ >> 1;
        auVar267._4_4_ = 0;
        auVar267._8_2_ = auVar269._8_2_ >> 1;
        auVar267._10_2_ = auVar269._10_2_ >> 1;
        auVar267._12_2_ = auVar269._12_2_ >> 1;
        auVar267._14_2_ = auVar269._14_2_ >> 1;
        auVar267 = auVar267 & auVar240;
        auVar238._0_4_ =
             CONCAT13(auVar267[3] + auVar289[3] + (char)(uVar201 >> 0x18),
                      CONCAT12(auVar267[2] + auVar289[2] + (char)(uVar201 >> 0x10),
                               CONCAT11(auVar267[1] + auVar289[1] + (char)(uVar201 >> 8),
                                        auVar267[0] + auVar289[0] + (char)uVar201)));
        auVar238._4_4_ = 0;
        auVar238[8] = auVar267[8] + auVar289[8];
        auVar238[9] = auVar267[9] + auVar289[9];
        auVar238[10] = auVar267[10] + auVar289[10];
        auVar238[0xb] = auVar267[0xb] + auVar289[0xb];
        auVar238[0xc] = auVar267[0xc] + auVar289[0xc];
        auVar238[0xd] = auVar267[0xd] + auVar289[0xd];
        auVar238[0xe] = auVar267[0xe] + auVar289[0xe];
        auVar238[0xf] = auVar267[0xf] + auVar289[0xf];
        puVar220[(int)pauVar199] = auVar238._0_4_;
        pauVar199 = (undefined1 (*) [16])(*pauVar199 + 1);
        in_XMM0 = auVar240;
      } while (pauVar219 != pauVar199);
    }
    break;
  case 0x12:
switchD_10050b8b_caseD_12:
    uVar201 = (uint)pauVar219 / 6;
    if ((uint)(param_3 + -1) / 6 <= (uint)pauVar219 / 6) {
      uVar201 = (uint)(param_3 + -1) / 6;
    }
    if (uVar201 != 0) {
      local_190._0_4_ = iVar197 + 5;
      auVar242 = (undefined1  [16])0x0;
      bVar206 = 0;
      bVar207 = 0;
      do {
        auVar269 = ZEXT416(*(uint *)(local_140[-1] + local_190._0_4_ + 0xb)) ^ auVar242;
        auVar271._0_2_ = auVar269._0_2_ >> 1;
        auVar271._2_2_ = auVar269._2_2_ >> 1;
        auVar271._4_4_ = 0;
        auVar271._8_2_ = auVar269._8_2_ >> 1;
        auVar271._10_2_ = auVar269._10_2_ >> 1;
        auVar271._12_2_ = auVar269._12_2_ >> 1;
        auVar271._14_2_ = auVar269._14_2_ >> 1;
        auVar269 = ZEXT416(*(uint *)(local_140[-1] + local_190._0_4_ + 0xb)) & auVar242;
        auVar271 = auVar271 & auVar240;
        uVar205 = *(undefined4 *)(pauVar199[-1] + local_190._0_4_ + 0xc);
        bVar207 = (char)((uint)bVar207 + (uint)(byte)local_140[-1][local_190._0_4_ + 0xf] >> 1) +
                  (*pauVar199)[local_190._0_4_];
        bVar206 = (char)((uint)bVar206 + (uint)(byte)(*local_140)[local_190._0_4_] >> 1) +
                  (*pauVar199)[local_190._0_4_ + 1];
        auVar242._0_4_ =
             CONCAT13(auVar271[3] + auVar269[3] + (char)((uint)uVar205 >> 0x18),
                      CONCAT12(auVar271[2] + auVar269[2] + (char)((uint)uVar205 >> 0x10),
                               CONCAT11(auVar271[1] + auVar269[1] + (char)((uint)uVar205 >> 8),
                                        auVar271[0] + auVar269[0] + (char)uVar205)));
        auVar242._4_4_ = 0;
        auVar242[8] = auVar271[8] + auVar269[8];
        auVar242[9] = auVar271[9] + auVar269[9];
        auVar242[10] = auVar271[10] + auVar269[10];
        auVar242[0xb] = auVar271[0xb] + auVar269[0xb];
        auVar242[0xc] = auVar271[0xc] + auVar269[0xc];
        auVar242[0xd] = auVar271[0xd] + auVar269[0xd];
        auVar242[0xe] = auVar271[0xe] + auVar269[0xe];
        auVar242[0xf] = auVar271[0xf] + auVar269[0xf];
        *(uint *)(pauVar199[-1] + local_190._0_4_ + 0xc) = auVar242._0_4_;
        (*pauVar199)[local_190._0_4_] = bVar207;
        (*pauVar199)[local_190._0_4_ + 1] = bVar206;
        pauVar219 = (undefined1 (*) [16])(local_190._0_4_ + 6);
        uVar201 = uVar201 - 1;
        local_190._0_4_ = pauVar219;
        in_XMM0 = auVar240;
      } while (uVar201 != 0);
    }
    break;
  case 0x14:
switchD_10050b8b_caseD_14:
    pauVar219 = (undefined1 (*) [16])((uint)pauVar218 >> 3);
    if ((undefined1 (*) [16])((uint)(param_3 + -1) >> 3) <=
        (undefined1 (*) [16])((uint)pauVar218 >> 3)) {
      pauVar219 = (undefined1 (*) [16])((uint)(param_3 + -1) >> 3);
    }
    if (pauVar219 != (undefined1 (*) [16])0x0) {
      auVar241 = (undefined1  [16])0x0;
      pauVar199 = (undefined1 (*) [16])0x0;
      do {
        auVar268._8_8_ = 0;
        auVar268._0_8_ = *(ulonglong *)(*pauVar195 + (int)pauVar199 * 8);
        uVar2 = *(undefined8 *)(puVar220 + (int)pauVar199 * 2);
        auVar269 = auVar268 ^ auVar241;
        auVar268 = auVar268 & auVar241;
        auVar270._0_2_ = auVar269._0_2_ >> 1;
        auVar270._2_2_ = auVar269._2_2_ >> 1;
        auVar270._4_2_ = auVar269._4_2_ >> 1;
        auVar270._6_2_ = auVar269._6_2_ >> 1;
        auVar270._8_2_ = auVar269._8_2_ >> 1;
        auVar270._10_2_ = auVar269._10_2_ >> 1;
        auVar270._12_2_ = auVar269._12_2_ >> 1;
        auVar270._14_2_ = auVar269._14_2_ >> 1;
        auVar270 = auVar270 & auVar240;
        auVar241._0_8_ =
             CONCAT17(auVar270[7] + auVar268[7] + (char)((ulonglong)uVar2 >> 0x38),
                      CONCAT16(auVar270[6] + auVar268[6] + (char)((ulonglong)uVar2 >> 0x30),
                               CONCAT15(auVar270[5] + auVar268[5] + (char)((ulonglong)uVar2 >> 0x28)
                                        ,CONCAT14(auVar270[4] +
                                                  auVar268[4] + (char)((ulonglong)uVar2 >> 0x20),
                                                  CONCAT13(auVar270[3] +
                                                           auVar268[3] +
                                                           (char)((ulonglong)uVar2 >> 0x18),
                                                           CONCAT12(auVar270[2] +
                                                                    auVar268[2] +
                                                                    (char)((ulonglong)uVar2 >> 0x10)
                                                                    ,CONCAT11(auVar270[1] +
                                                                              auVar268[1] +
                                                                              (char)((ulonglong)
                                                                                     uVar2 >> 8),
                                                                              auVar270[0] +
                                                                              auVar268[0] +
                                                                              (char)uVar2)))))));
        auVar241[8] = auVar270[8] + auVar268[8];
        auVar241[9] = auVar270[9] + auVar268[9];
        auVar241[10] = auVar270[10] + auVar268[10];
        auVar241[0xb] = auVar270[0xb] + auVar268[0xb];
        auVar241[0xc] = auVar270[0xc] + auVar268[0xc];
        auVar241[0xd] = auVar270[0xd] + auVar268[0xd];
        auVar241[0xe] = auVar270[0xe] + auVar268[0xe];
        auVar241[0xf] = auVar270[0xf] + auVar268[0xf];
        *(undefined8 *)(puVar220 + (int)pauVar199 * 2) = auVar241._0_8_;
        pauVar199 = (undefined1 (*) [16])(*pauVar199 + 1);
        in_XMM0 = auVar240;
      } while (pauVar219 != pauVar199);
    }
    break;
  case 0x18:
switchD_10050b1a_caseD_3:
    uVar201 = uVar201 - 1;
    pauVar196 = (undefined1 (*) [16])((&UINT_10052190)[uVar201] + 0x100508d3);
    local_80 = (double)CONCAT44(local_80._4_4_,(undefined1 *)local_80);
    dVar259 = (double)CONCAT44(local_80._4_4_,(undefined1 *)local_80);
    dVar276 = (double)CONCAT44(local_80._4_4_,(undefined1 *)local_80);
    dVar285 = (double)CONCAT44(local_80._4_4_,(undefined1 *)local_80);
    dVar158 = dVar266;
    dVar159 = dVar266;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(pauVar196) {
    case (undefined1 (*) [16])0x10050b2a:
      goto switchD_10050b1a_caseD_5;
    case (undefined1 (*) [16])0x10050b8d:
      goto switchD_10050b1a_caseD_1;
    case (undefined1 (*) [16])0x10050b9b:
      goto switchD_10050b1a_caseD_d;
    case (undefined1 (*) [16])0x10050de3:
      goto switchD_10050b1a_caseD_10;
    case (undefined1 (*) [16])0x10050e29:
      goto switchD_10050b1a_caseD_e;
    case (undefined1 (*) [16])0x10050e67:
      goto switchD_10050b1a_caseD_f;
    case (undefined1 (*) [16])0x10050eb0:
      goto switchD_10050b1a_caseD_14;
    case (undefined1 (*) [16])0x10050ee9:
      goto switchD_10050b1a_caseD_12;
    case (undefined1 (*) [16])0x10050f48:
      goto switchD_10050b1a_caseD_8;
    case (undefined1 (*) [16])0x10051088:
      goto switchD_10050b1a_caseD_6;
    case (undefined1 (*) [16])0x100511db:
      goto switchD_10050b1a_caseD_7;
    case (undefined1 (*) [16])0x1005143f:
      goto switchD_10050b1a_caseD_c;
    case (undefined1 (*) [16])0x100515ef:
      goto switchD_10050b1a_caseD_a;
    case (undefined1 (*) [16])0x10051c23:
      goto switchD_10050b1a_caseD_15;
    case (undefined1 (*) [16])0x10051c39:
      goto switchD_10050b1a_caseD_17;
    case (undefined1 (*) [16])0x10051cac:
      goto switchD_10050b1a_caseD_18;
    case (undefined1 (*) [16])0x10051d00:
      goto switchD_10050b1a_caseD_19;
    case (undefined1 (*) [16])0x10051f30:
      goto switchD_10050b1a_caseD_20;
    case (undefined1 (*) [16])0x10051f40:
      goto switchD_10050b1a_caseD_1c;
    case (undefined1 (*) [16])0x1005202e:
      goto switchD_10050b1a_caseD_1d;
    case (undefined1 (*) [16])0x10052038:
      goto switchD_10050b1a_caseD_1e;
    case (undefined1 (*) [16])0x10052045:
      goto switchD_10050b1a_caseD_1f;
    case (undefined1 (*) [16])0x10052052:
      goto switchD_10050b1a_caseD_21;
    case (undefined1 (*) [16])0x1005205c:
      goto switchD_10050b1a_caseD_22;
    case (undefined1 (*) [16])0x10052124:
      goto switchD_10050b1a_caseD_9;
    }
    goto switchD_10050b1a_caseD_1b;
  case 0x1a:
switchD_10050b1a_caseD_5:
    if ((param_3 != (undefined1 *)0x1) && (param_3 != (undefined1 *)0x2)) {
      bVar206 = (byte)*puVar220;
      local_160._0_4_ = pbVar204 + 2;
      puVar194 = param_3 + -2;
      do {
        bVar206 = (bVar206 >> 1) + *(byte *)local_160._0_4_;
        *(byte *)local_160._0_4_ = bVar206;
        puVar194 = puVar194 + -1;
        local_160._0_4_ = (byte *)(local_160._0_4_ + 1);
      } while (puVar194 != (undefined1 *)0x0);
    }
    break;
  case 0x1b:
switchD_10050b1a_caseD_6:
    if (((uint)(param_3 + -1) & 0x7ffffffe) != 0) {
      bVar206 = 0;
      bVar207 = 0;
      iVar197 = -((uint)(param_3 + -1) & 0x7ffffffe);
      do {
        bVar207 = (bVar207 >> 1) + (byte)*puVar220;
        bVar206 = (bVar206 >> 1) + *(byte *)((int)puVar220 + 1);
        *(byte *)puVar220 = bVar207;
        *(byte *)((int)puVar220 + 1) = bVar206;
        puVar220 = (uint *)((int)puVar220 + 2);
        iVar197 = iVar197 + 2;
      } while (iVar197 != 0);
    }
    break;
  case 0x1c:
switchD_10050b1a_caseD_7:
    pauVar219 = (undefined1 (*) [16])(((uint)(param_3 + -1) / 3) * 3);
    if ((undefined1 (*) [16])0x2 < pauVar219) {
      bVar207 = 0;
      bVar212 = 0;
      bVar206 = 0;
      do {
        pauVar219 = (undefined1 (*) [16])(pauVar219[-1] + 0xd);
        bVar206 = (bVar206 >> 1) + (byte)*puVar220;
        bVar212 = (bVar212 >> 1) + *(byte *)((int)puVar220 + 1);
        bVar207 = (bVar207 >> 1) + *(byte *)((int)puVar220 + 2);
        *(byte *)puVar220 = bVar206;
        *(byte *)((int)puVar220 + 1) = bVar212;
        *(byte *)((int)puVar220 + 2) = bVar207;
        puVar220 = (uint *)((int)puVar220 + 3);
      } while ((undefined1 (*) [16])0x2 < pauVar219);
    }
    break;
  case 0x1d:
switchD_10050b1a_caseD_8:
    if (((uint)(param_3 + -1) & 0x7ffffffc) != 0) {
      in_XMM0 = (undefined1  [16])0x0;
      iVar197 = -((uint)(param_3 + -1) & 0x7ffffffc);
      do {
        uVar201 = *puVar220;
        auVar222._0_2_ = in_XMM0._0_2_ >> 1;
        auVar222._2_2_ = in_XMM0._2_2_ >> 1;
        auVar222._4_4_ = 0;
        auVar222._8_2_ = in_XMM0._8_2_ >> 1;
        auVar222._10_2_ = in_XMM0._10_2_ >> 1;
        auVar222._12_2_ = in_XMM0._12_2_ >> 1;
        auVar222._14_2_ = in_XMM0._14_2_ >> 1;
        iVar197 = iVar197 + 4;
        auVar222 = auVar222 & auVar240;
        in_XMM0._0_4_ =
             CONCAT13(auVar222[3] + (char)(uVar201 >> 0x18),
                      CONCAT12(auVar222[2] + (char)(uVar201 >> 0x10),
                               CONCAT11(auVar222[1] + (char)(uVar201 >> 8),
                                        auVar222[0] + (char)uVar201)));
        in_XMM0._4_4_ = 0;
        in_XMM0[8] = auVar222[8];
        in_XMM0[9] = auVar222[9];
        in_XMM0[10] = auVar222[10];
        in_XMM0[0xb] = auVar222[0xb];
        in_XMM0[0xc] = auVar222[0xc];
        in_XMM0[0xd] = auVar222[0xd];
        in_XMM0[0xe] = auVar222[0xe];
        in_XMM0[0xf] = auVar222[0xf];
        *puVar220 = in_XMM0._0_4_;
        puVar220 = puVar220 + 1;
      } while (iVar197 != 0);
    }
    break;
  case 0x1f:
switchD_10050b1a_caseD_a:
    uVar201 = ((uint)(param_3 + -1) / 3 & 0xfffffffe) * 3;
    if (5 < uVar201) {
      in_XMM0 = (undefined1  [16])0x0;
      bVar207 = 0;
      pbVar204 = *pauVar199 + iVar197 + 6;
      bVar206 = 0;
      do {
        uVar205 = *(undefined4 *)(pbVar204 + -5);
        auVar227._0_2_ = in_XMM0._0_2_ >> 1;
        auVar227._2_2_ = in_XMM0._2_2_ >> 1;
        auVar227._4_4_ = 0;
        auVar227._8_2_ = in_XMM0._8_2_ >> 1;
        auVar227._10_2_ = in_XMM0._10_2_ >> 1;
        auVar227._12_2_ = in_XMM0._12_2_ >> 1;
        auVar227._14_2_ = in_XMM0._14_2_ >> 1;
        uVar201 = uVar201 - 6;
        bVar207 = (bVar207 >> 1) + pbVar204[-1];
        bVar206 = (bVar206 >> 1) + *pbVar204;
        auVar227 = auVar227 & auVar240;
        in_XMM0._0_4_ =
             CONCAT13(auVar227[3] + (char)((uint)uVar205 >> 0x18),
                      CONCAT12(auVar227[2] + (char)((uint)uVar205 >> 0x10),
                               CONCAT11(auVar227[1] + (char)((uint)uVar205 >> 8),
                                        auVar227[0] + (char)uVar205)));
        in_XMM0._4_4_ = 0;
        in_XMM0[8] = auVar227[8];
        in_XMM0[9] = auVar227[9];
        in_XMM0[10] = auVar227[10];
        in_XMM0[0xb] = auVar227[0xb];
        in_XMM0[0xc] = auVar227[0xc];
        in_XMM0[0xd] = auVar227[0xd];
        in_XMM0[0xe] = auVar227[0xe];
        in_XMM0[0xf] = auVar227[0xf];
        *(uint *)(pbVar204 + -5) = in_XMM0._0_4_;
        pbVar204[-1] = bVar207;
        *pbVar204 = bVar206;
        pbVar204 = pbVar204 + 6;
      } while (5 < uVar201);
    }
    break;
  case 0x21:
switchD_10050b1a_caseD_c:
    if (((uint)(param_3 + -1) & 0x7ffffff8) != 0) {
      in_XMM0 = (undefined1  [16])0x0;
      iVar197 = -((uint)(param_3 + -1) & 0x7ffffff8);
      do {
        uVar2 = *(undefined8 *)puVar220;
        auVar225._0_2_ = in_XMM0._0_2_ >> 1;
        auVar225._2_2_ = in_XMM0._2_2_ >> 1;
        auVar225._4_2_ = in_XMM0._4_2_ >> 1;
        auVar225._6_2_ = in_XMM0._6_2_ >> 1;
        auVar225._8_2_ = in_XMM0._8_2_ >> 1;
        auVar225._10_2_ = in_XMM0._10_2_ >> 1;
        auVar225._12_2_ = in_XMM0._12_2_ >> 1;
        auVar225._14_2_ = in_XMM0._14_2_ >> 1;
        iVar197 = iVar197 + 8;
        auVar225 = auVar225 & auVar240;
        in_XMM0._0_8_ =
             CONCAT17(auVar225[7] + (char)((ulonglong)uVar2 >> 0x38),
                      CONCAT16(auVar225[6] + (char)((ulonglong)uVar2 >> 0x30),
                               CONCAT15(auVar225[5] + (char)((ulonglong)uVar2 >> 0x28),
                                        CONCAT14(auVar225[4] + (char)((ulonglong)uVar2 >> 0x20),
                                                 CONCAT13(auVar225[3] +
                                                          (char)((ulonglong)uVar2 >> 0x18),
                                                          CONCAT12(auVar225[2] +
                                                                   (char)((ulonglong)uVar2 >> 0x10),
                                                                   CONCAT11(auVar225[1] +
                                                                            (char)((ulonglong)uVar2
                                                                                  >> 8),
                                                                            auVar225[0] +
                                                                            (char)uVar2)))))));
        in_XMM0[8] = auVar225[8];
        in_XMM0[9] = auVar225[9];
        in_XMM0[10] = auVar225[10];
        in_XMM0[0xb] = auVar225[0xb];
        in_XMM0[0xc] = auVar225[0xc];
        in_XMM0[0xd] = auVar225[0xd];
        in_XMM0[0xe] = auVar225[0xe];
        in_XMM0[0xf] = auVar225[0xf];
        *(ulonglong *)puVar220 = in_XMM0._0_8_;
        puVar220 = puVar220 + 2;
      } while (iVar197 != 0);
    }
    break;
  case 0x22:
switchD_10050b1a_caseD_d:
    if ((param_3 != (undefined1 *)0x1) && (param_3 != (undefined1 *)0x2)) {
      bVar206 = (byte)*puVar220;
      local_160._0_4_ = pbVar204 + 2;
      puVar194 = param_3 + -2;
      do {
        bVar206 = bVar206 + *(byte *)local_160._0_4_;
        *(byte *)local_160._0_4_ = bVar206;
        puVar194 = puVar194 + -1;
        local_160._0_4_ = (byte *)(local_160._0_4_ + 1);
      } while (puVar194 != (undefined1 *)0x0);
    }
    break;
  case 0x23:
switchD_10050b1a_caseD_e:
    if (((uint)(param_3 + -1) & 0x7ffffffe) != 0) {
      bVar206 = 0;
      bVar207 = 0;
      iVar197 = -((uint)(param_3 + -1) & 0x7ffffffe);
      do {
        bVar207 = bVar207 + (byte)*puVar220;
        bVar206 = bVar206 + *(byte *)((int)puVar220 + 1);
        *(byte *)puVar220 = bVar207;
        *(byte *)((int)puVar220 + 1) = bVar206;
        puVar220 = (uint *)((int)puVar220 + 2);
        iVar197 = iVar197 + 2;
      } while (iVar197 != 0);
    }
    break;
  case 0x24:
switchD_10050b1a_caseD_f:
    uVar201 = ((uint)(param_3 + -1) / 3) * 3;
    if (2 < uVar201) {
      bVar206 = 0;
      bVar207 = 0;
      bVar212 = 0;
      do {
        bVar212 = bVar212 + (byte)*puVar220;
        bVar207 = bVar207 + *(byte *)((int)puVar220 + 1);
        bVar206 = bVar206 + *(byte *)((int)puVar220 + 2);
        uVar201 = uVar201 - 3;
        *(byte *)puVar220 = bVar212;
        *(byte *)((int)puVar220 + 1) = bVar207;
        *(byte *)((int)puVar220 + 2) = bVar206;
        puVar220 = (uint *)((int)puVar220 + 3);
      } while (2 < uVar201);
    }
    break;
  case 0x25:
switchD_10050b1a_caseD_10:
    if (((uint)(param_3 + -1) & 0x7ffffffc) != 0) {
      iVar197 = -((uint)(param_3 + -1) & 0x7ffffffc);
      auVar240 = (undefined1  [16])0x0;
      do {
        uVar201 = *puVar220;
        iVar197 = iVar197 + 4;
        in_XMM0._0_4_ =
             CONCAT13(auVar240[3] + (char)(uVar201 >> 0x18),
                      CONCAT12(auVar240[2] + (char)(uVar201 >> 0x10),
                               CONCAT11(auVar240[1] + (char)(uVar201 >> 8),
                                        auVar240[0] + (char)uVar201)));
        in_XMM0._4_4_ = 0;
        in_XMM0[8] = auVar240[8];
        in_XMM0[9] = auVar240[9];
        in_XMM0[10] = auVar240[10];
        in_XMM0[0xb] = auVar240[0xb];
        in_XMM0[0xc] = auVar240[0xc];
        in_XMM0[0xd] = auVar240[0xd];
        in_XMM0[0xe] = auVar240[0xe];
        in_XMM0[0xf] = auVar240[0xf];
        *puVar220 = in_XMM0._0_4_;
        puVar220 = puVar220 + 1;
        auVar240 = in_XMM0;
      } while (iVar197 != 0);
    }
    break;
  case 0x27:
switchD_10050b1a_caseD_12:
    uVar201 = ((uint)(param_3 + -1) / 3 & 0xfffffffe) * 3;
    if (5 < uVar201) {
      cVar213 = '\0';
      pcVar202 = *pauVar199 + iVar197 + 6;
      cVar208 = '\0';
      auVar240 = (undefined1  [16])0x0;
      do {
        uVar205 = *(undefined4 *)(pcVar202 + -5);
        cVar213 = cVar213 + pcVar202[-1];
        cVar208 = cVar208 + *pcVar202;
        uVar201 = uVar201 - 6;
        in_XMM0._0_4_ =
             CONCAT13(auVar240[3] + (char)((uint)uVar205 >> 0x18),
                      CONCAT12(auVar240[2] + (char)((uint)uVar205 >> 0x10),
                               CONCAT11(auVar240[1] + (char)((uint)uVar205 >> 8),
                                        auVar240[0] + (char)uVar205)));
        in_XMM0._4_4_ = 0;
        in_XMM0[8] = auVar240[8];
        in_XMM0[9] = auVar240[9];
        in_XMM0[10] = auVar240[10];
        in_XMM0[0xb] = auVar240[0xb];
        in_XMM0[0xc] = auVar240[0xc];
        in_XMM0[0xd] = auVar240[0xd];
        in_XMM0[0xe] = auVar240[0xe];
        in_XMM0[0xf] = auVar240[0xf];
        *(uint *)(pcVar202 + -5) = in_XMM0._0_4_;
        pcVar202[-1] = cVar213;
        *pcVar202 = cVar208;
        pcVar202 = pcVar202 + 6;
        auVar240 = in_XMM0;
      } while (5 < uVar201);
    }
    break;
  case 0x29:
switchD_10050b1a_caseD_14:
    if (((uint)(param_3 + -1) & 0x7ffffff8) != 0) {
      iVar197 = -((uint)(param_3 + -1) & 0x7ffffff8);
      auVar240 = (undefined1  [16])0x0;
      do {
        uVar2 = *(undefined8 *)puVar220;
        iVar197 = iVar197 + 8;
        in_XMM0._0_8_ =
             CONCAT17(auVar240[7] + (char)((ulonglong)uVar2 >> 0x38),
                      CONCAT16(auVar240[6] + (char)((ulonglong)uVar2 >> 0x30),
                               CONCAT15(auVar240[5] + (char)((ulonglong)uVar2 >> 0x28),
                                        CONCAT14(auVar240[4] + (char)((ulonglong)uVar2 >> 0x20),
                                                 CONCAT13(auVar240[3] +
                                                          (char)((ulonglong)uVar2 >> 0x18),
                                                          CONCAT12(auVar240[2] +
                                                                   (char)((ulonglong)uVar2 >> 0x10),
                                                                   CONCAT11(auVar240[1] +
                                                                            (char)((ulonglong)uVar2
                                                                                  >> 8),
                                                                            auVar240[0] +
                                                                            (char)uVar2)))))));
        in_XMM0[8] = auVar240[8];
        in_XMM0[9] = auVar240[9];
        in_XMM0[10] = auVar240[10];
        in_XMM0[0xb] = auVar240[0xb];
        in_XMM0[0xc] = auVar240[0xc];
        in_XMM0[0xd] = auVar240[0xd];
        in_XMM0[0xe] = auVar240[0xe];
        in_XMM0[0xf] = auVar240[0xf];
        *(ulonglong *)puVar220 = in_XMM0._0_8_;
        puVar220 = puVar220 + 2;
        auVar240 = in_XMM0;
      } while (iVar197 != 0);
    }
    break;
  case 0x2a:
    goto switchD_10050b1a_caseD_15;
  case 0x2c:
    goto switchD_10050b1a_caseD_17;
  case 0x2d:
    goto switchD_10050b1a_caseD_18;
  case 0x2e:
    goto switchD_10050b1a_caseD_19;
  case 0x30:
    goto switchD_10050b1a_caseD_1b;
  case 0x31:
    goto switchD_10050b1a_caseD_1c;
  case 0x32:
    goto switchD_10050b1a_caseD_1d;
  case 0x33:
    goto switchD_10050b1a_caseD_1e;
  case 0x34:
    goto switchD_10050b1a_caseD_1f;
  case 0x35:
    goto switchD_10050b1a_caseD_20;
  case 0x36:
    goto switchD_10050b1a_caseD_21;
  case 0x37:
    goto switchD_10050b1a_caseD_22;
  }
switchD_10050b1a_caseD_0:
  local_130._0_16_ = auVar291;
  puVar194 = (undefined1 *)(*(int *)(param_2[0x22] + 4) + 1);
  puVar210 = param_3 + *(int *)(param_2[0x22] + 4);
  *(undefined1 **)param_2[0x22] = puVar194;
  *(undefined1 **)(param_2[0x22] + 4) = puVar210;
  if ((puVar210 < puVar194) || (*(undefined1 **)(param_2[0x21] + 0xc) < puVar210)) {
    FUN_10136a50((uint)puVar194,(uint)puVar210,(uint)*(undefined1 **)(param_2[0x21] + 0xc),
                 &PTR_s_C__Users_runneradmin__cargo_regi_101503ac);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  puVar194 = puVar194 + *(int *)(param_2[0x21] + 8);
  if (*(int *)param_2[0x1d] == 0) {
    local_170._0_4_ = puVar194;
    if (*(int *)param_2[6] == -1) goto LAB_100520ec;
    local_11c = param_2[0x1a][0];
    pauVar196 = (undefined1 (*) [16])(uint)local_11c;
    pauVar195 = *(undefined1 (**) [16])(param_2[0x23] + 8);
    local_190[0] = ((uint)pauVar195 & 0x10000) != 0 || *(int *)(param_2[0x12] + 0xc) != -2;
    uVar201 = (uint)((byte)pauVar195 & pauVar196 == (undefined1 (*) [16])&DAT_00000010);
    pauVar214 = param_2;
    local_80 = (double)CONCAT44(local_80._4_4_,(undefined1 *)local_80);
    dVar259 = (double)CONCAT44(local_80._4_4_,(undefined1 *)local_80);
    dVar276 = dVar266;
    dVar285 = dVar266;
    dVar158 = dVar266;
    dVar159 = dVar266;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_2[0x19][0xf]) {
    case 0:
switchD_10050b1a_caseD_15:
      bVar221 = ((uint)pauVar195 & 0x10010) != 0;
      uVar201 = (uint)CONCAT11(bVar221,(char)uVar201);
      if (!bVar221 || 7 < (byte)pauVar196) goto switchD_10050b1a_caseD_17;
LAB_10051d12:
      puVar200 = FUN_10107380(0,4);
      if (puVar200 == (undefined4 *)0x0) goto LAB_100520f8;
      puVar194 = &LAB_100bb920;
      uVar2 = CONCAT44(&DAT_101508b8,puVar200);
      uVar312 = CONCAT44(&DAT_101508b8,puVar200);
      if (local_190[0] != '\0') {
        puVar194 = &LAB_100bb4b0;
      }
      *puVar200 = puVar194;
      pauVar219 = *(undefined1 (**) [16])param_2[0x1d];
      puVar194 = (undefined1 *)local_170._0_4_;
      break;
    default:
      goto switchD_10050b1a_caseD_9;
    case 2:
switchD_10050b1a_caseD_17:
      if ((local_190[0] & ((uint)pauVar195 & 0x10010) != 0) == 0) goto switchD_10050b1a_caseD_1b;
      puVar194 = &LAB_100bb310;
      if ((char)uVar201 != '\0') {
        puVar194 = &LAB_100bb1d0;
      }
      puVar210 = &LAB_100bb3e0;
      if (pauVar196 != (undefined1 (*) [16])&DAT_00000008) {
        puVar210 = puVar194;
      }
      if ((((char)uVar201 == '\0') && (pauVar196 != (undefined1 (*) [16])&DAT_00000008)) &&
         (pauVar196 != (undefined1 (*) [16])&DAT_00000010)) {
        FUN_1013d67b(&local_11c,&DAT_101508a4,0,&PTR_s_C__Users_runneradmin__cargo_regi_101508a8);
switchD_10050b1a_caseD_9:
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      puVar200 = FUN_10107380(0,4);
      if (puVar200 == (undefined4 *)0x0) {
LAB_100520f8:
        FUN_1013679e(4,4);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      *puVar200 = puVar210;
      uVar2 = CONCAT44(&DAT_101508b8,puVar200);
      uVar312 = CONCAT44(&DAT_101508b8,puVar200);
      pauVar219 = *(undefined1 (**) [16])param_2[0x1d];
      puVar194 = (undefined1 *)local_170._0_4_;
      break;
    case 3:
switchD_10050b1a_caseD_18:
      if (((uint)pauVar195 & 0x10010) != 0) {
        iVar197 = *(int *)(param_2[0x13] + 8);
        if ((iVar197 == -2) || ((char)pauVar196 == '\x10')) {
          param_1[1] = 0x10;
          param_1[2] = 3;
          *param_1 = iVar197 == -2 ^ 0xf;
          return;
        }
        puVar194 = (undefined1 *)local_170._0_4_;
        if (local_190[0] == '\0') {
          uVar312 = FUN_100bbc00((int)(param_2 + 6));
          pauVar219 = *(undefined1 (**) [16])param_2[0x1d];
          uVar2 = uVar312;
        }
        else {
          uVar312 = FUN_100bbc70((int)(param_2 + 6));
          uVar2 = CONCAT44(&DAT_10150a04,(int)uVar312);
          uVar312 = CONCAT44(&DAT_10150a04,(int)uVar312);
          pauVar219 = *(undefined1 (**) [16])param_2[0x1d];
        }
        break;
      }
      goto LAB_10051d6f;
    case 4:
switchD_10050b1a_caseD_19:
      if (((uint)pauVar195 & 0x10010) != 0 && (byte)pauVar196 < 8) goto LAB_10051d12;
    case 6:
switchD_10050b1a_caseD_1b:
      if ((char)uVar201 == '\0') {
LAB_10051d6f:
        uVar2 = 0x101508d000000001;
        uVar312 = 0x101508d000000001;
        pauVar219 = *(undefined1 (**) [16])param_2[0x1d];
        puVar194 = (undefined1 *)local_170._0_4_;
      }
      else {
        uVar312 = 0x101508e800000001;
        pauVar219 = *(undefined1 (**) [16])param_2[0x1d];
        uVar2 = uVar312;
        puVar194 = (undefined1 *)local_170._0_4_;
      }
      break;
    case 7:
      goto switchD_10050b1a_caseD_1c;
    case 8:
      goto switchD_10050b1a_caseD_1d;
    case 9:
      goto switchD_10050b1a_caseD_1e;
    case 10:
      goto switchD_10050b1a_caseD_1f;
    case 0xb:
      goto switchD_10050b1a_caseD_20;
    case 0xc:
      goto switchD_10050b1a_caseD_21;
    case 0xd:
      goto switchD_10050b1a_caseD_22;
    }
    if (pauVar219 != (undefined1 (*) [16])0x0) {
      puVar200 = *(undefined4 **)(param_2[0x1d] + 4);
      if ((code *)*puVar200 != (code *)0x0) {
        (*(code *)*puVar200)();
      }
      uVar2 = uVar312;
      if (puVar200[1] != 0) {
        FUN_10093cf0(pauVar219,puVar200[2]);
      }
    }
    *(undefined8 *)param_2[0x1d] = uVar2;
    iVar197 = *(int *)param_2[6];
  }
  else {
    uVar2 = CONCAT44(*(undefined4 *)(param_2[0x1d] + 4),*(int *)param_2[0x1d]);
    iVar197 = *(int *)param_2[6];
  }
  if (iVar197 == -1) {
LAB_100520ec:
    FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10141b94);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  pauVar214 = (undefined1 (*) [16])uVar2;
  (**(code **)((int)((ulonglong)uVar2 >> 0x20) + 0x14))
            (pauVar214,puVar194,(undefined1 *)local_80,param_4,param_5,param_2 + 6);
  if (*(int *)(param_2[0x1d] + 8) == 1) {
    uVar201 = *(uint *)(param_2[0x1d] + 0xc);
    pauVar219 = *(undefined1 (**) [16])(param_2[0x1e] + 4);
    if (pauVar219 == (undefined1 (*) [16])0x0 || *(uint *)param_2[0x1e] <= uVar201) {
      pauVar214 = (undefined1 (*) [16])(uint)(byte)param_2[0x1f][0];
      auVar243._0_8_ = *(ulonglong *)(param_2[0x1e] + 8) & 0xffffffff;
      auVar243._8_4_ = (int)(*(ulonglong *)(param_2[0x1e] + 8) >> 0x20);
      auVar243._12_4_ = 0;
      local_160._0_8_ = SUB168(auVar243 | _DAT_1013e960,0) - (double)DAT_1013e960;
      dVar259 = SUB168(auVar243 | _DAT_1013e960,8) - DAT_1013e960._8_8_;
      local_80 = ((double)local_160._0_8_ + -0.0) * 0.5;
      dStack_78 = (dVar259 + -2.0) * 0.25;
      dVar266 = ((double)local_160._0_8_ + -1.0) * 0.5;
      dStack_138 = (dVar259 + -0.0) * 0.5;
      local_100._8_8_ = (dVar259 + -0.0) * 0.25;
      local_100._0_8_ = ((double)local_160._0_8_ + -2.0) * 0.25;
      dVar276 = ((double)local_160._0_8_ + -0.0) * 0.25;
      dVar285 = (dVar259 + -4.0) * 0.125;
      local_f0 = SUB81(dVar276,0);
      bStack_ef = (byte)((ulonglong)dVar276 >> 8);
      bStack_ee = (byte)((ulonglong)dVar276 >> 0x10);
      bStack_ed = (byte)((ulonglong)dVar276 >> 0x18);
      uStack_ec = (undefined1)((ulonglong)dVar276 >> 0x20);
      uStack_eb = (undefined1)((ulonglong)dVar276 >> 0x28);
      uStack_ea = (undefined1)((ulonglong)dVar276 >> 0x30);
      uStack_e9 = (undefined1)((ulonglong)dVar276 >> 0x38);
      uStack_e8 = SUB81(dVar285,0);
      uStack_e7 = (undefined1)((ulonglong)dVar285 >> 8);
      uStack_e6 = (undefined1)((ulonglong)dVar285 >> 0x10);
      uStack_e5 = (undefined1)((ulonglong)dVar285 >> 0x18);
      uStack_e4 = (undefined1)((ulonglong)dVar285 >> 0x20);
      uStack_e3 = (undefined1)((ulonglong)dVar285 >> 0x28);
      uStack_e2 = (undefined1)((ulonglong)dVar285 >> 0x30);
      uStack_e1 = (undefined1)((ulonglong)dVar285 >> 0x38);
      local_130._8_8_ = (dVar259 + -0.0) * 0.125;
      local_130._0_8_ = ((double)local_160._0_8_ + -4.0) * 0.125;
      local_190._8_8_ = dVar259 * 0.125;
      local_190._0_8_ = (double)local_160._0_8_ * 0.125;
      local_160._8_8_ = (dVar259 + -1.0) * 0.5;
      do {
        uStack_13c = (undefined4)((ulonglong)dVar266 >> 0x20);
        local_140 = SUB84(dVar266,0);
        if (6 < (byte)pauVar214) {
          uVar205 = 0xffffffff;
          goto LAB_10052085;
        }
        uVar201 = (uint)pauVar214 & 0xff;
        bVar206 = (byte)pauVar214 + 1;
        pauVar214 = (undefined1 (*) [16])(uint)bVar206;
        param_2[0x1f][0] = bVar206;
        in_XMM0 = local_190._0_16_;
        dVar259 = local_80;
        dVar276 = local_80;
        dVar285 = local_80;
        dVar158 = local_80;
        dVar159 = local_80;
        dVar266 = local_80;
        switch(uVar201) {
        case 1:
switchD_10050b1a_caseD_1d:
          in_XMM0 = local_130._0_16_;
          local_80 = dVar259;
          break;
        case 2:
switchD_10050b1a_caseD_1e:
          in_XMM0[1] = bStack_ef;
          in_XMM0[0] = local_f0;
          in_XMM0[2] = bStack_ee;
          in_XMM0[3] = bStack_ed;
          in_XMM0[4] = uStack_ec;
          in_XMM0[5] = uStack_eb;
          in_XMM0[6] = uStack_ea;
          in_XMM0[7] = uStack_e9;
          in_XMM0[8] = uStack_e8;
          in_XMM0[9] = uStack_e7;
          in_XMM0[10] = uStack_e6;
          in_XMM0[0xb] = uStack_e5;
          in_XMM0[0xc] = uStack_e4;
          in_XMM0[0xd] = uStack_e3;
          in_XMM0[0xe] = uStack_e2;
          in_XMM0[0xf] = uStack_e1;
          local_80 = dVar276;
          break;
        case 3:
switchD_10050b1a_caseD_1f:
          in_XMM0 = local_100;
          local_80 = dVar285;
          break;
        case 4:
switchD_10050b1a_caseD_20:
          in_XMM0._8_8_ = dStack_78;
          in_XMM0._0_8_ = (ulonglong)dVar158;
          local_80 = dVar158;
          break;
        case 5:
switchD_10050b1a_caseD_21:
          in_XMM0._4_4_ = uStack_13c;
          in_XMM0._0_4_ = (uint)local_140;
          in_XMM0._8_8_ = dStack_138;
          local_80 = dVar159;
          break;
        case 6:
switchD_10050b1a_caseD_22:
          in_XMM0 = local_160._0_16_;
          local_80 = dVar266;
        }
switchD_10050b1a_caseD_1c:
        dVar266 = (double)CONCAT44(uStack_13c,local_140);
        local_68 = ceil(in_XMM0._0_8_);
        dVar259 = local_68;
        if (local_68 <= 0.0) {
          dVar259 = 0.0;
        }
        if (4294967295.0 <= dVar259) {
          dVar259 = 4294967295.0;
        }
        pauVar219 = (undefined1 (*) [16])
                    ((int)(dVar259 - 2147483648.0) & (int)dVar259 >> 0x1f | (int)dVar259);
        *(undefined1 (**) [16])(param_2[0x1e] + 4) = pauVar219;
        uStack_168 = in_XMM0._8_8_;
        local_70 = ceil(uStack_168);
        dVar259 = local_70;
        if (local_70 <= 0.0) {
          dVar259 = 0.0;
        }
        if (4294967295.0 <= dVar259) {
          dVar259 = 4294967295.0;
        }
        uVar201 = (uint)dVar259;
        uVar211 = (int)(dVar259 - 2147483648.0) & (int)uVar201 >> 0x1f | uVar201;
        uVar201 = CONCAT31((int3)(uVar201 >> 8),uVar211 != 0);
        *(uint *)param_2[0x1e] = uVar211;
        *(undefined4 *)(param_2[0x1d] + 0xc) = 0;
      } while (uVar211 == 0 || pauVar219 == (undefined1 (*) [16])0x0);
      uVar205 = 1;
      uVar201 = 0;
    }
    else {
      pauVar214 = (undefined1 (*) [16])(uint)(byte)param_2[0x1f][0];
      uVar205 = 1;
    }
  }
  else {
    uVar201 = *(uint *)(param_2[0x1d] + 0xc);
    uVar205 = 0xffffffff;
    if (*(uint *)param_2[0x1e] <= uVar201) goto LAB_10052085;
    uVar205 = 0;
  }
  *(uint *)(param_2[0x1d] + 0xc) = uVar201 + 1;
LAB_10052085:
  *(undefined4 *)(param_2[0x1f] + 4) = uVar205;
  *(uint *)(param_2[0x1f] + 8) = uVar201;
  *(undefined1 (**) [16])(param_2[0x1f] + 0xc) = pauVar219;
  param_2[0x20][0] = (char)pauVar214;
  *param_1 = 0xff;
                    /* WARNING: Read-only address (ram,0x1013e950) is written */
                    /* WARNING: Read-only address (ram,0x1013e960) is written */
  return;
}
