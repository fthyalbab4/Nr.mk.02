// rea decompile_all
// name: FUN_100ba740
// address: 0x100ba740
// body: available
// range: 0x100ba740-0x100baf51 inclusive
// range: 0x100baf60-0x100bb1b0 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall
FUN_100ba740(uint param_1,uint param_2,int param_3,int param_4,uint param_5,void *param_6,
            uint param_7,void *param_8,uint param_9)

{
  char *pcVar1;
  char *pcVar2;
  byte *pbVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
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
  undefined1 auVar71 [16];
  uint uVar72;
  uint uVar73;
  char *pcVar74;
  char *pcVar75;
  int iVar76;
  uint uVar77;
  char *pcVar78;
  uint uVar79;
  uint uVar80;
  uint uVar81;
  int iVar82;
  uint uVar83;
  int iVar84;
  uint uVar85;
  uint uVar86;
  int iVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  byte bVar135;
  byte bVar136;
  byte bVar137;
  byte bVar138;
  byte bVar139;
  byte bVar140;
  byte bVar141;
  byte bVar142;
  byte bVar143;
  byte bVar144;
  byte bVar145;
  byte bVar146;
  byte bVar147;
  byte bVar148;
  byte bVar149;
  byte bVar150;
  byte bVar151;
  byte bVar152;
  byte bVar153;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  byte bVar154;
  byte bVar155;
  byte bVar156;
  byte bVar157;
  byte bVar160;
  byte bVar161;
  byte bVar162;
  byte bVar163;
  byte bVar164;
  byte bVar165;
  byte bVar166;
  byte bVar167;
  byte bVar168;
  byte bVar169;
  byte bVar170;
  byte bVar171;
  byte bVar172;
  byte bVar173;
  byte bVar174;
  byte bVar175;
  byte bVar176;
  byte bVar177;
  byte bVar178;
  byte bVar179;
  byte bVar180;
  byte bVar181;
  byte bVar182;
  byte bVar183;
  byte bVar184;
  byte bVar185;
  byte bVar186;
  byte bVar187;
  byte bVar188;
  byte bVar189;
  byte bVar190;
  byte bVar191;
  byte bVar192;
  byte bVar193;
  byte bVar194;
  byte bVar195;
  byte bVar196;
  byte bVar197;
  byte bVar198;
  byte bVar199;
  byte bVar200;
  byte bVar201;
  byte bVar202;
  byte bVar203;
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  byte bVar205;
  byte bVar206;
  byte bVar207;
  byte bVar208;
  byte bVar209;
  byte bVar210;
  byte bVar211;
  byte bVar212;
  undefined1 auVar204 [16];
  byte bVar213;
  byte bVar214;
  byte bVar215;
  byte bVar216;
  byte bVar217;
  byte bVar218;
  byte bVar219;
  byte bVar220;
  byte bVar221;
  byte bVar222;
  byte bVar223;
  byte bVar224;
  byte bVar225;
  byte bVar226;
  byte bVar227;
  byte bVar228;
  int local_30;

  auVar71 = _DAT_1013e950;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_1 & 0xff) {
  case 0:
    param_2 = param_9;
    if (param_9 != param_7) {
      FUN_10136d00(param_9,param_7,&PTR_s_C__Users_runneradmin__cargo_regi_101507c0);
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    goto LAB_100bb037;
  case 1:
    if (param_9 < param_2) {
      FUN_10136a50(param_2,param_9,param_9,&PTR_s_C__Users_runneradmin__cargo_regi_101507f0);
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    if (param_7 < param_2) {
      FUN_10136a50(param_2,param_7,param_7,&PTR_s_C__Users_runneradmin__cargo_regi_101507e0);
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    uVar72 = param_3 - param_2;
    if (param_7 < uVar72) {
      FUN_10136a50(0,uVar72,param_7,&PTR_s_C__Users_runneradmin__cargo_regi_101507d0);
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    uVar73 = param_9 - param_2 & 0x7fffffe0;
    uVar81 = param_9 - param_2 & 0x1f;
    uVar77 = uVar72 & 0xffffffe0;
    pcVar74 = (char *)((int)param_8 + param_2);
    uVar83 = param_7 - param_2 & 0x7fffffe0;
    uVar79 = param_7 - param_2 & 0x1f;
    if (uVar73 != 0) {
      iVar84 = -uVar83;
      iVar82 = -uVar73;
      iVar76 = -uVar77;
      pcVar75 = (char *)((int)param_6 + 0x10);
      pcVar78 = pcVar74;
      do {
        if ((iVar84 == 0) || (iVar76 == 0)) break;
        pcVar4 = pcVar75 + (param_2 - 0x10);
        cVar9 = pcVar4[1];
        cVar10 = pcVar4[2];
        cVar11 = pcVar4[3];
        cVar12 = pcVar4[4];
        cVar13 = pcVar4[5];
        cVar14 = pcVar4[6];
        cVar15 = pcVar4[7];
        cVar16 = pcVar4[8];
        cVar17 = pcVar4[9];
        cVar18 = pcVar4[10];
        cVar19 = pcVar4[0xb];
        cVar20 = pcVar4[0xc];
        cVar21 = pcVar4[0xd];
        cVar22 = pcVar4[0xe];
        cVar23 = pcVar4[0xf];
        pcVar1 = pcVar75 + -0x10;
        cVar24 = pcVar75[-0xf];
        cVar25 = pcVar75[-0xe];
        cVar26 = pcVar75[-0xd];
        cVar27 = pcVar75[-0xc];
        cVar28 = pcVar75[-0xb];
        cVar29 = pcVar75[-10];
        cVar30 = pcVar75[-9];
        cVar31 = pcVar75[-8];
        cVar32 = pcVar75[-7];
        cVar33 = pcVar75[-6];
        cVar34 = pcVar75[-5];
        cVar35 = pcVar75[-4];
        cVar36 = pcVar75[-3];
        cVar37 = pcVar75[-2];
        cVar38 = pcVar75[-1];
        pcVar2 = pcVar75 + param_2;
        cVar39 = *pcVar2;
        cVar40 = pcVar2[1];
        cVar41 = pcVar2[2];
        cVar42 = pcVar2[3];
        cVar43 = pcVar2[4];
        cVar44 = pcVar2[5];
        cVar45 = pcVar2[6];
        cVar46 = pcVar2[7];
        cVar47 = pcVar2[8];
        cVar48 = pcVar2[9];
        cVar49 = pcVar2[10];
        cVar50 = pcVar2[0xb];
        cVar51 = pcVar2[0xc];
        cVar52 = pcVar2[0xd];
        cVar53 = pcVar2[0xe];
        cVar54 = pcVar2[0xf];
        iVar76 = iVar76 + 0x20;
        iVar84 = iVar84 + 0x20;
        cVar55 = *pcVar75;
        cVar56 = pcVar75[1];
        cVar57 = pcVar75[2];
        cVar58 = pcVar75[3];
        cVar59 = pcVar75[4];
        cVar60 = pcVar75[5];
        cVar61 = pcVar75[6];
        cVar62 = pcVar75[7];
        cVar63 = pcVar75[8];
        cVar64 = pcVar75[9];
        cVar65 = pcVar75[10];
        cVar66 = pcVar75[0xb];
        cVar67 = pcVar75[0xc];
        cVar68 = pcVar75[0xd];
        cVar69 = pcVar75[0xe];
        cVar70 = pcVar75[0xf];
        pcVar75 = pcVar75 + 0x20;
        *pcVar78 = *pcVar4 - *pcVar1;
        pcVar78[1] = cVar9 - cVar24;
        pcVar78[2] = cVar10 - cVar25;
        pcVar78[3] = cVar11 - cVar26;
        pcVar78[4] = cVar12 - cVar27;
        pcVar78[5] = cVar13 - cVar28;
        pcVar78[6] = cVar14 - cVar29;
        pcVar78[7] = cVar15 - cVar30;
        pcVar78[8] = cVar16 - cVar31;
        pcVar78[9] = cVar17 - cVar32;
        pcVar78[10] = cVar18 - cVar33;
        pcVar78[0xb] = cVar19 - cVar34;
        pcVar78[0xc] = cVar20 - cVar35;
        pcVar78[0xd] = cVar21 - cVar36;
        pcVar78[0xe] = cVar22 - cVar37;
        pcVar78[0xf] = cVar23 - cVar38;
        pcVar78[0x10] = cVar39 - cVar55;
        pcVar78[0x11] = cVar40 - cVar56;
        pcVar78[0x12] = cVar41 - cVar57;
        pcVar78[0x13] = cVar42 - cVar58;
        pcVar78[0x14] = cVar43 - cVar59;
        pcVar78[0x15] = cVar44 - cVar60;
        pcVar78[0x16] = cVar45 - cVar61;
        pcVar78[0x17] = cVar46 - cVar62;
        pcVar78[0x18] = cVar47 - cVar63;
        pcVar78[0x19] = cVar48 - cVar64;
        pcVar78[0x1a] = cVar49 - cVar65;
        pcVar78[0x1b] = cVar50 - cVar66;
        pcVar78[0x1c] = cVar51 - cVar67;
        pcVar78[0x1d] = cVar52 - cVar68;
        pcVar78[0x1e] = cVar53 - cVar69;
        pcVar78[0x1f] = cVar54 - cVar70;
        pcVar78 = pcVar78 + 0x20;
        iVar82 = iVar82 + 0x20;
      } while (iVar82 != 0);
    }
    if (uVar79 < uVar81) {
      uVar81 = uVar79;
    }
    if ((uVar72 & 0x1f) < uVar81) {
      uVar81 = uVar72 & 0x1f;
    }
    if (uVar81 != 0) {
      iVar84 = uVar83 + param_2;
      uVar72 = 0;
      if (uVar81 < 4) goto LAB_100baf30;
      uVar79 = 0;
      uVar72 = uVar81 & 0xfffffffc;
      do {
        uVar7 = *(undefined4 *)((int)param_6 + uVar79 + uVar77);
        uVar6 = *(undefined4 *)((int)param_6 + uVar79 + iVar84);
        *(uint *)(pcVar74 + uVar79 + uVar73) =
             CONCAT13((char)((uint)uVar6 >> 0x18) - (char)((uint)uVar7 >> 0x18),
                      CONCAT12((char)((uint)uVar6 >> 0x10) - (char)((uint)uVar7 >> 0x10),
                               CONCAT11((char)((uint)uVar6 >> 8) - (char)((uint)uVar7 >> 8),
                                        (char)uVar6 - (char)uVar7)));
        uVar79 = uVar79 + 4;
      } while (uVar72 != uVar79);
      for (; uVar81 != uVar72; uVar72 = uVar72 + 1) {
LAB_100baf30:
        pcVar74[uVar72 + uVar73] =
             *(char *)((int)param_6 + uVar72 + iVar84) - *(char *)((int)param_6 + uVar72 + uVar77);
      }
    }
LAB_100bb037:
    memcpy(param_8,param_6,param_2);
    break;
  case 2:
    uVar72 = param_9 & 0x7fffffe0;
    uVar81 = param_7 & 0x7fffffe0;
    if (uVar72 != 0) {
      uVar73 = 0;
      do {
        if ((uVar81 == uVar73) || ((param_5 & 0x7fffffe0) == uVar73)) break;
        pcVar74 = (char *)((int)param_6 + uVar73);
        cVar9 = pcVar74[1];
        cVar10 = pcVar74[2];
        cVar11 = pcVar74[3];
        cVar12 = pcVar74[4];
        cVar13 = pcVar74[5];
        cVar14 = pcVar74[6];
        cVar15 = pcVar74[7];
        cVar16 = pcVar74[8];
        cVar17 = pcVar74[9];
        cVar18 = pcVar74[10];
        cVar19 = pcVar74[0xb];
        cVar20 = pcVar74[0xc];
        cVar21 = pcVar74[0xd];
        cVar22 = pcVar74[0xe];
        cVar23 = pcVar74[0xf];
        pcVar78 = (char *)(param_4 + uVar73);
        cVar24 = pcVar78[1];
        cVar25 = pcVar78[2];
        cVar26 = pcVar78[3];
        cVar27 = pcVar78[4];
        cVar28 = pcVar78[5];
        cVar29 = pcVar78[6];
        cVar30 = pcVar78[7];
        cVar31 = pcVar78[8];
        cVar32 = pcVar78[9];
        cVar33 = pcVar78[10];
        cVar34 = pcVar78[0xb];
        cVar35 = pcVar78[0xc];
        cVar36 = pcVar78[0xd];
        cVar37 = pcVar78[0xe];
        cVar38 = pcVar78[0xf];
        pcVar75 = (char *)((int)param_6 + uVar73 + 0x10);
        cVar39 = *pcVar75;
        cVar40 = pcVar75[1];
        cVar41 = pcVar75[2];
        cVar42 = pcVar75[3];
        cVar43 = pcVar75[4];
        cVar44 = pcVar75[5];
        cVar45 = pcVar75[6];
        cVar46 = pcVar75[7];
        cVar47 = pcVar75[8];
        cVar48 = pcVar75[9];
        cVar49 = pcVar75[10];
        cVar50 = pcVar75[0xb];
        cVar51 = pcVar75[0xc];
        cVar52 = pcVar75[0xd];
        cVar53 = pcVar75[0xe];
        cVar54 = pcVar75[0xf];
        pcVar75 = (char *)(param_4 + 0x10 + uVar73);
        cVar55 = *pcVar75;
        cVar56 = pcVar75[1];
        cVar57 = pcVar75[2];
        cVar58 = pcVar75[3];
        cVar59 = pcVar75[4];
        cVar60 = pcVar75[5];
        cVar61 = pcVar75[6];
        cVar62 = pcVar75[7];
        cVar63 = pcVar75[8];
        cVar64 = pcVar75[9];
        cVar65 = pcVar75[10];
        cVar66 = pcVar75[0xb];
        cVar67 = pcVar75[0xc];
        cVar68 = pcVar75[0xd];
        cVar69 = pcVar75[0xe];
        cVar70 = pcVar75[0xf];
        pcVar75 = (char *)((int)param_8 + uVar73);
        *pcVar75 = *pcVar74 - *pcVar78;
        pcVar75[1] = cVar9 - cVar24;
        pcVar75[2] = cVar10 - cVar25;
        pcVar75[3] = cVar11 - cVar26;
        pcVar75[4] = cVar12 - cVar27;
        pcVar75[5] = cVar13 - cVar28;
        pcVar75[6] = cVar14 - cVar29;
        pcVar75[7] = cVar15 - cVar30;
        pcVar75[8] = cVar16 - cVar31;
        pcVar75[9] = cVar17 - cVar32;
        pcVar75[10] = cVar18 - cVar33;
        pcVar75[0xb] = cVar19 - cVar34;
        pcVar75[0xc] = cVar20 - cVar35;
        pcVar75[0xd] = cVar21 - cVar36;
        pcVar75[0xe] = cVar22 - cVar37;
        pcVar75[0xf] = cVar23 - cVar38;
        pcVar74 = (char *)((int)param_8 + uVar73 + 0x10);
        *pcVar74 = cVar39 - cVar55;
        pcVar74[1] = cVar40 - cVar56;
        pcVar74[2] = cVar41 - cVar57;
        pcVar74[3] = cVar42 - cVar58;
        pcVar74[4] = cVar43 - cVar59;
        pcVar74[5] = cVar44 - cVar60;
        pcVar74[6] = cVar45 - cVar61;
        pcVar74[7] = cVar46 - cVar62;
        pcVar74[8] = cVar47 - cVar63;
        pcVar74[9] = cVar48 - cVar64;
        pcVar74[10] = cVar49 - cVar65;
        pcVar74[0xb] = cVar50 - cVar66;
        pcVar74[0xc] = cVar51 - cVar67;
        pcVar74[0xd] = cVar52 - cVar68;
        pcVar74[0xe] = cVar53 - cVar69;
        pcVar74[0xf] = cVar54 - cVar70;
        uVar73 = uVar73 + 0x20;
      } while (uVar72 != uVar73);
    }
    uVar73 = param_9 & 0x1f;
    if ((param_7 & 0x1f) < (param_9 & 0x1f)) {
      uVar73 = param_7 & 0x1f;
    }
    if ((param_5 & 0x1f) < uVar73) {
      uVar73 = param_5 & 0x1f;
    }
    if (uVar73 != 0) {
      iVar84 = param_4 + (param_5 & 0x7fffffe0);
      uVar77 = 0;
      if (uVar73 < 4) goto LAB_100bb149;
      uVar79 = 0;
      uVar77 = uVar73 & 0xfffffffc;
      do {
        uVar7 = *(undefined4 *)(iVar84 + uVar79);
        uVar6 = *(undefined4 *)((int)param_6 + uVar79 + uVar81);
        *(uint *)((int)param_8 + uVar79 + uVar72) =
             CONCAT13((char)((uint)uVar6 >> 0x18) - (char)((uint)uVar7 >> 0x18),
                      CONCAT12((char)((uint)uVar6 >> 0x10) - (char)((uint)uVar7 >> 0x10),
                               CONCAT11((char)((uint)uVar6 >> 8) - (char)((uint)uVar7 >> 8),
                                        (char)uVar6 - (char)uVar7)));
        uVar79 = uVar79 + 4;
      } while (uVar77 != uVar79);
      for (; uVar73 != uVar77; uVar77 = uVar77 + 1) {
LAB_100bb149:
        *(char *)((int)param_8 + uVar77 + uVar72) =
             *(char *)((int)param_6 + uVar77 + uVar81) - *(char *)(iVar84 + uVar77);
      }
    }
    break;
  case 3:
    if (param_9 < param_2) {
      FUN_10136a50(param_2,param_9,param_9,&PTR_s_C__Users_runneradmin__cargo_regi_10150830);
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    if (param_7 < param_2) {
      FUN_10136a50(param_2,param_7,param_7,&PTR_s_C__Users_runneradmin__cargo_regi_10150820);
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    uVar72 = param_3 - param_2;
    if (param_7 < uVar72) {
      FUN_10136a50(0,uVar72,param_7,&PTR_s_C__Users_runneradmin__cargo_regi_10150810);
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    if (param_5 < param_2) {
      FUN_10136a50(param_2,param_5,param_5,&PTR_s_C__Users_runneradmin__cargo_regi_10150800);
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    uVar85 = param_7 - param_2 & 0x7fffffe0;
    uVar86 = param_7 - param_2 & 0x1f;
    uVar73 = param_9 - param_2 & 0x7fffffe0;
    uVar81 = param_9 - param_2 & 0x1f;
    uVar77 = uVar72 & 0xffffffe0;
    uVar83 = param_5 - param_2 & 0x7fffffe0;
    uVar79 = param_5 - param_2 & 0x1f;
    iVar84 = param_4 + param_2;
    if (uVar73 != 0) {
      uVar80 = 0;
      do {
        if (((uVar85 == uVar80) || (uVar77 == uVar80)) || (uVar83 == uVar80)) break;
        pcVar78 = (char *)((int)param_6 + uVar80 + param_2);
        cVar9 = pcVar78[1];
        cVar10 = pcVar78[2];
        cVar11 = pcVar78[3];
        cVar12 = pcVar78[4];
        cVar13 = pcVar78[5];
        cVar14 = pcVar78[6];
        cVar15 = pcVar78[7];
        cVar16 = pcVar78[8];
        cVar17 = pcVar78[9];
        cVar18 = pcVar78[10];
        cVar19 = pcVar78[0xb];
        cVar20 = pcVar78[0xc];
        cVar21 = pcVar78[0xd];
        cVar22 = pcVar78[0xe];
        cVar23 = pcVar78[0xf];
        auVar159 = *(undefined1 (*) [16])(iVar84 + 0x10 + uVar80);
        auVar92 = *(undefined1 (*) [16])(iVar84 + uVar80) ^
                  *(undefined1 (*) [16])((int)param_6 + uVar80);
        auVar93._0_2_ = auVar92._0_2_ >> 1;
        auVar93._2_2_ = auVar92._2_2_ >> 1;
        auVar93._4_2_ = auVar92._4_2_ >> 1;
        auVar93._6_2_ = auVar92._6_2_ >> 1;
        auVar93._8_2_ = auVar92._8_2_ >> 1;
        auVar93._10_2_ = auVar92._10_2_ >> 1;
        auVar93._12_2_ = auVar92._12_2_ >> 1;
        auVar93._14_2_ = auVar92._14_2_ >> 1;
        auVar158 = *(undefined1 (*) [16])(iVar84 + uVar80) &
                   *(undefined1 (*) [16])((int)param_6 + uVar80);
        auVar92 = *(undefined1 (*) [16])((int)param_6 + uVar80 + 0x10);
        auVar93 = auVar93 & auVar71;
        auVar204 = auVar159 ^ auVar92;
        pcVar74 = (char *)((int)param_8 + uVar80 + param_2);
        *pcVar74 = *pcVar78 - (auVar93[0] + auVar158[0]);
        pcVar74[1] = cVar9 - (auVar93[1] + auVar158[1]);
        pcVar74[2] = cVar10 - (auVar93[2] + auVar158[2]);
        pcVar74[3] = cVar11 - (auVar93[3] + auVar158[3]);
        pcVar74[4] = cVar12 - (auVar93[4] + auVar158[4]);
        pcVar74[5] = cVar13 - (auVar93[5] + auVar158[5]);
        pcVar74[6] = cVar14 - (auVar93[6] + auVar158[6]);
        pcVar74[7] = cVar15 - (auVar93[7] + auVar158[7]);
        pcVar74[8] = cVar16 - (auVar93[8] + auVar158[8]);
        pcVar74[9] = cVar17 - (auVar93[9] + auVar158[9]);
        pcVar74[10] = cVar18 - (auVar93[10] + auVar158[10]);
        pcVar74[0xb] = cVar19 - (auVar93[0xb] + auVar158[0xb]);
        pcVar74[0xc] = cVar20 - (auVar93[0xc] + auVar158[0xc]);
        pcVar74[0xd] = cVar21 - (auVar93[0xd] + auVar158[0xd]);
        pcVar74[0xe] = cVar22 - (auVar93[0xe] + auVar158[0xe]);
        pcVar74[0xf] = cVar23 - (auVar93[0xf] + auVar158[0xf]);
        pcVar74 = (char *)((int)param_6 + uVar80 + param_2 + 0x10);
        cVar9 = pcVar74[1];
        cVar10 = pcVar74[2];
        cVar11 = pcVar74[3];
        cVar12 = pcVar74[4];
        cVar13 = pcVar74[5];
        cVar14 = pcVar74[6];
        cVar15 = pcVar74[7];
        cVar16 = pcVar74[8];
        cVar17 = pcVar74[9];
        cVar18 = pcVar74[10];
        cVar19 = pcVar74[0xb];
        cVar20 = pcVar74[0xc];
        cVar21 = pcVar74[0xd];
        cVar22 = pcVar74[0xe];
        cVar23 = pcVar74[0xf];
        auVar159 = auVar159 & auVar92;
        auVar92._0_2_ = auVar204._0_2_ >> 1;
        auVar92._2_2_ = auVar204._2_2_ >> 1;
        auVar92._4_2_ = auVar204._4_2_ >> 1;
        auVar92._6_2_ = auVar204._6_2_ >> 1;
        auVar92._8_2_ = auVar204._8_2_ >> 1;
        auVar92._10_2_ = auVar204._10_2_ >> 1;
        auVar92._12_2_ = auVar204._12_2_ >> 1;
        auVar92._14_2_ = auVar204._14_2_ >> 1;
        auVar92 = auVar92 & auVar71;
        pcVar78 = (char *)((int)param_8 + uVar80 + param_2 + 0x10);
        *pcVar78 = *pcVar74 - (auVar92[0] + auVar159[0]);
        pcVar78[1] = cVar9 - (auVar92[1] + auVar159[1]);
        pcVar78[2] = cVar10 - (auVar92[2] + auVar159[2]);
        pcVar78[3] = cVar11 - (auVar92[3] + auVar159[3]);
        pcVar78[4] = cVar12 - (auVar92[4] + auVar159[4]);
        pcVar78[5] = cVar13 - (auVar92[5] + auVar159[5]);
        pcVar78[6] = cVar14 - (auVar92[6] + auVar159[6]);
        pcVar78[7] = cVar15 - (auVar92[7] + auVar159[7]);
        pcVar78[8] = cVar16 - (auVar92[8] + auVar159[8]);
        pcVar78[9] = cVar17 - (auVar92[9] + auVar159[9]);
        pcVar78[10] = cVar18 - (auVar92[10] + auVar159[10]);
        pcVar78[0xb] = cVar19 - (auVar92[0xb] + auVar159[0xb]);
        pcVar78[0xc] = cVar20 - (auVar92[0xc] + auVar159[0xc]);
        pcVar78[0xd] = cVar21 - (auVar92[0xd] + auVar159[0xd]);
        pcVar78[0xe] = cVar22 - (auVar92[0xe] + auVar159[0xe]);
        pcVar78[0xf] = cVar23 - (auVar92[0xf] + auVar159[0xf]);
        uVar80 = uVar80 + 0x20;
      } while (uVar73 != uVar80);
    }
    auVar71 = _DAT_1013e950;
    if (uVar86 < uVar81) {
      uVar81 = uVar86;
    }
    if ((uVar72 & 0x1f) < uVar81) {
      uVar81 = uVar72 & 0x1f;
    }
    if (uVar79 < uVar81) {
      uVar81 = uVar79;
    }
    if (uVar81 != 0) {
      iVar84 = iVar84 + uVar83;
      iVar76 = uVar85 + param_2;
      uVar72 = 0;
      if (uVar81 < 4) goto LAB_100bb156;
      uVar79 = 0;
      uVar72 = uVar81 & 0xfffffffc;
      do {
        uVar83 = *(uint *)(iVar84 + uVar79);
        uVar85 = *(uint *)((int)param_6 + uVar79 + uVar77);
        uVar7 = *(undefined4 *)((int)param_6 + uVar79 + iVar76);
        uVar86 = uVar83 ^ uVar85;
        uVar83 = uVar83 & uVar85;
        auVar159 = ZEXT416(CONCAT22((ushort)(uVar86 >> 0x11),(ushort)uVar86 >> 1)) & auVar71;
        *(uint *)((int)param_8 + uVar79 + uVar73 + param_2) =
             CONCAT13((char)((uint)uVar7 >> 0x18) - (auVar159[3] + (char)(uVar83 >> 0x18)),
                      CONCAT12((char)((uint)uVar7 >> 0x10) - (auVar159[2] + (char)(uVar83 >> 0x10)),
                               CONCAT11((char)((uint)uVar7 >> 8) -
                                        (auVar159[1] + (char)(uVar83 >> 8)),
                                        (char)uVar7 - (auVar159[0] + (char)uVar83))));
        uVar79 = uVar79 + 4;
      } while (uVar72 != uVar79);
      for (; uVar81 != uVar72; uVar72 = uVar72 + 1) {
LAB_100bb156:
        *(char *)((int)param_8 + uVar72 + uVar73 + param_2) =
             *(char *)((int)param_6 + uVar72 + iVar76) -
             (char)((uint)*(byte *)(iVar84 + uVar72) +
                    (uint)*(byte *)((int)param_6 + uVar72 + uVar77) >> 1);
      }
    }
    uVar72 = 0;
    do {
      *(byte *)((int)param_8 + uVar72) =
           *(char *)((int)param_6 + uVar72) - (*(byte *)(param_4 + uVar72) >> 1);
      uVar72 = uVar72 + 1;
    } while (param_2 != uVar72);
    break;
  case 4:
    if (param_9 < param_2) {
      FUN_10136a50(param_2,param_9,param_9,&PTR_s_C__Users_runneradmin__cargo_regi_10150880);
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    if (param_7 < param_2) {
      FUN_10136a50(param_2,param_7,param_7,&PTR_s_C__Users_runneradmin__cargo_regi_10150870);
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    uVar72 = param_3 - param_2;
    if (param_7 < uVar72) {
      FUN_10136a50(0,uVar72,param_7,&PTR_s_C__Users_runneradmin__cargo_regi_10150860);
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    if (param_5 < param_2) {
      FUN_10136a50(param_2,param_5,param_5,&PTR_s_C__Users_runneradmin__cargo_regi_10150850);
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    if (param_5 < uVar72) {
      FUN_10136a50(0,uVar72,param_5,&PTR_s_C__Users_runneradmin__cargo_regi_10150840);
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    uVar85 = param_7 - param_2 & 0x1f;
    uVar83 = param_9 - param_2 & 0x7fffffe0;
    uVar77 = uVar72 & 0xffffffe0;
    uVar81 = param_9 - param_2 & 0x1f;
    uVar79 = param_7 - param_2 & 0x7fffffe0;
    uVar73 = param_5 - param_2 & 0x7fffffe0;
    uVar86 = param_5 - param_2 & 0x1f;
    if (uVar83 != 0) {
      uVar80 = 0;
      iVar84 = param_4 + 0x10 + param_2;
      do {
        if (((uVar79 == uVar80) || (uVar77 == uVar80)) || (uVar73 == uVar80)) break;
        pbVar3 = (byte *)(iVar84 + -0x10 + uVar80);
        bVar90 = *pbVar3;
        bVar91 = pbVar3[1];
        bVar96 = pbVar3[2];
        bVar97 = pbVar3[3];
        bVar100 = pbVar3[4];
        bVar101 = pbVar3[5];
        bVar104 = pbVar3[6];
        bVar105 = pbVar3[7];
        bVar108 = pbVar3[8];
        bVar109 = pbVar3[9];
        bVar112 = pbVar3[10];
        bVar113 = pbVar3[0xb];
        bVar116 = pbVar3[0xc];
        bVar117 = pbVar3[0xd];
        bVar120 = pbVar3[0xe];
        bVar121 = pbVar3[0xf];
        pbVar3 = (byte *)(param_4 + uVar80);
        bVar156 = *pbVar3;
        bVar157 = pbVar3[1];
        bVar162 = pbVar3[2];
        bVar163 = pbVar3[3];
        bVar166 = pbVar3[4];
        bVar167 = pbVar3[5];
        bVar170 = pbVar3[6];
        bVar171 = pbVar3[7];
        bVar174 = pbVar3[8];
        bVar175 = pbVar3[9];
        bVar178 = pbVar3[10];
        bVar179 = pbVar3[0xb];
        bVar182 = pbVar3[0xc];
        bVar183 = pbVar3[0xd];
        bVar186 = pbVar3[0xe];
        bVar187 = pbVar3[0xf];
        pbVar3 = (byte *)((int)param_6 + uVar80);
        bVar124 = *pbVar3;
        bVar125 = pbVar3[1];
        bVar128 = pbVar3[2];
        bVar129 = pbVar3[3];
        bVar132 = pbVar3[4];
        bVar133 = pbVar3[5];
        bVar136 = pbVar3[6];
        bVar137 = pbVar3[7];
        bVar140 = pbVar3[8];
        bVar141 = pbVar3[9];
        bVar144 = pbVar3[10];
        bVar145 = pbVar3[0xb];
        bVar148 = pbVar3[0xc];
        bVar149 = pbVar3[0xd];
        bVar152 = pbVar3[0xe];
        bVar153 = pbVar3[0xf];
        bVar154 = (bVar156 < bVar90) * bVar90 | (bVar156 >= bVar90) * bVar156;
        bVar160 = (bVar157 < bVar91) * bVar91 | (bVar157 >= bVar91) * bVar157;
        bVar164 = (bVar162 < bVar96) * bVar96 | (bVar162 >= bVar96) * bVar162;
        bVar168 = (bVar163 < bVar97) * bVar97 | (bVar163 >= bVar97) * bVar163;
        bVar172 = (bVar166 < bVar100) * bVar100 | (bVar166 >= bVar100) * bVar166;
        bVar176 = (bVar167 < bVar101) * bVar101 | (bVar167 >= bVar101) * bVar167;
        bVar180 = (bVar170 < bVar104) * bVar104 | (bVar170 >= bVar104) * bVar170;
        bVar184 = (bVar171 < bVar105) * bVar105 | (bVar171 >= bVar105) * bVar171;
        bVar188 = (bVar174 < bVar108) * bVar108 | (bVar174 >= bVar108) * bVar174;
        bVar190 = (bVar175 < bVar109) * bVar109 | (bVar175 >= bVar109) * bVar175;
        bVar192 = (bVar178 < bVar112) * bVar112 | (bVar178 >= bVar112) * bVar178;
        bVar194 = (bVar179 < bVar113) * bVar113 | (bVar179 >= bVar113) * bVar179;
        bVar196 = (bVar182 < bVar116) * bVar116 | (bVar182 >= bVar116) * bVar182;
        bVar198 = (bVar183 < bVar117) * bVar117 | (bVar183 >= bVar117) * bVar183;
        bVar200 = (bVar186 < bVar120) * bVar120 | (bVar186 >= bVar120) * bVar186;
        bVar202 = (bVar187 < bVar121) * bVar121 | (bVar187 >= bVar121) * bVar187;
        bVar88 = (bVar156 < bVar124) * bVar124 | (bVar156 >= bVar124) * bVar156;
        bVar94 = (bVar157 < bVar125) * bVar125 | (bVar157 >= bVar125) * bVar157;
        bVar98 = (bVar162 < bVar128) * bVar128 | (bVar162 >= bVar128) * bVar162;
        bVar102 = (bVar163 < bVar129) * bVar129 | (bVar163 >= bVar129) * bVar163;
        bVar106 = (bVar166 < bVar132) * bVar132 | (bVar166 >= bVar132) * bVar166;
        bVar110 = (bVar167 < bVar133) * bVar133 | (bVar167 >= bVar133) * bVar167;
        bVar114 = (bVar170 < bVar136) * bVar136 | (bVar170 >= bVar136) * bVar170;
        bVar118 = (bVar171 < bVar137) * bVar137 | (bVar171 >= bVar137) * bVar171;
        bVar122 = (bVar174 < bVar140) * bVar140 | (bVar174 >= bVar140) * bVar174;
        bVar126 = (bVar175 < bVar141) * bVar141 | (bVar175 >= bVar141) * bVar175;
        bVar130 = (bVar178 < bVar144) * bVar144 | (bVar178 >= bVar144) * bVar178;
        bVar134 = (bVar179 < bVar145) * bVar145 | (bVar179 >= bVar145) * bVar179;
        bVar138 = (bVar182 < bVar148) * bVar148 | (bVar182 >= bVar148) * bVar182;
        bVar142 = (bVar183 < bVar149) * bVar149 | (bVar183 >= bVar149) * bVar183;
        bVar146 = (bVar186 < bVar152) * bVar152 | (bVar186 >= bVar152) * bVar186;
        bVar150 = (bVar187 < bVar153) * bVar153 | (bVar187 >= bVar153) * bVar187;
        bVar155 = bVar154 - ((bVar90 < bVar156) * bVar90 | (bVar90 >= bVar156) * bVar156);
        bVar161 = bVar160 - ((bVar91 < bVar157) * bVar91 | (bVar91 >= bVar157) * bVar157);
        bVar165 = bVar164 - ((bVar96 < bVar162) * bVar96 | (bVar96 >= bVar162) * bVar162);
        bVar169 = bVar168 - ((bVar97 < bVar163) * bVar97 | (bVar97 >= bVar163) * bVar163);
        bVar173 = bVar172 - ((bVar100 < bVar166) * bVar100 | (bVar100 >= bVar166) * bVar166);
        bVar177 = bVar176 - ((bVar101 < bVar167) * bVar101 | (bVar101 >= bVar167) * bVar167);
        bVar181 = bVar180 - ((bVar104 < bVar170) * bVar104 | (bVar104 >= bVar170) * bVar170);
        bVar185 = bVar184 - ((bVar105 < bVar171) * bVar105 | (bVar105 >= bVar171) * bVar171);
        bVar189 = bVar188 - ((bVar108 < bVar174) * bVar108 | (bVar108 >= bVar174) * bVar174);
        bVar191 = bVar190 - ((bVar109 < bVar175) * bVar109 | (bVar109 >= bVar175) * bVar175);
        bVar193 = bVar192 - ((bVar112 < bVar178) * bVar112 | (bVar112 >= bVar178) * bVar178);
        bVar195 = bVar194 - ((bVar113 < bVar179) * bVar113 | (bVar113 >= bVar179) * bVar179);
        bVar197 = bVar196 - ((bVar116 < bVar182) * bVar116 | (bVar116 >= bVar182) * bVar182);
        bVar199 = bVar198 - ((bVar117 < bVar183) * bVar117 | (bVar117 >= bVar183) * bVar183);
        bVar201 = bVar200 - ((bVar120 < bVar186) * bVar120 | (bVar120 >= bVar186) * bVar186);
        bVar203 = bVar202 - ((bVar121 < bVar187) * bVar121 | (bVar121 >= bVar187) * bVar187);
        bVar89 = bVar88 - ((bVar124 < bVar156) * bVar124 | (bVar124 >= bVar156) * bVar156);
        bVar95 = bVar94 - ((bVar125 < bVar157) * bVar125 | (bVar125 >= bVar157) * bVar157);
        bVar99 = bVar98 - ((bVar128 < bVar162) * bVar128 | (bVar128 >= bVar162) * bVar162);
        bVar103 = bVar102 - ((bVar129 < bVar163) * bVar129 | (bVar129 >= bVar163) * bVar163);
        bVar107 = bVar106 - ((bVar132 < bVar166) * bVar132 | (bVar132 >= bVar166) * bVar166);
        bVar111 = bVar110 - ((bVar133 < bVar167) * bVar133 | (bVar133 >= bVar167) * bVar167);
        bVar115 = bVar114 - ((bVar136 < bVar170) * bVar136 | (bVar136 >= bVar170) * bVar170);
        bVar119 = bVar118 - ((bVar137 < bVar171) * bVar137 | (bVar137 >= bVar171) * bVar171);
        bVar123 = bVar122 - ((bVar140 < bVar174) * bVar140 | (bVar140 >= bVar174) * bVar174);
        bVar127 = bVar126 - ((bVar141 < bVar175) * bVar141 | (bVar141 >= bVar175) * bVar175);
        bVar131 = bVar130 - ((bVar144 < bVar178) * bVar144 | (bVar144 >= bVar178) * bVar178);
        bVar135 = bVar134 - ((bVar145 < bVar179) * bVar145 | (bVar145 >= bVar179) * bVar179);
        bVar139 = bVar138 - ((bVar148 < bVar182) * bVar148 | (bVar148 >= bVar182) * bVar182);
        bVar143 = bVar142 - ((bVar149 < bVar183) * bVar149 | (bVar149 >= bVar183) * bVar183);
        bVar147 = bVar146 - ((bVar152 < bVar186) * bVar152 | (bVar152 >= bVar186) * bVar186);
        bVar151 = bVar150 - ((bVar153 < bVar187) * bVar153 | (bVar153 >= bVar187) * bVar187);
        bVar213 = (bVar89 < bVar155) * bVar89 | (bVar89 >= bVar155) * bVar155;
        bVar214 = (bVar95 < bVar161) * bVar95 | (bVar95 >= bVar161) * bVar161;
        bVar215 = (bVar99 < bVar165) * bVar99 | (bVar99 >= bVar165) * bVar165;
        bVar216 = (bVar103 < bVar169) * bVar103 | (bVar103 >= bVar169) * bVar169;
        bVar217 = (bVar107 < bVar173) * bVar107 | (bVar107 >= bVar173) * bVar173;
        bVar218 = (bVar111 < bVar177) * bVar111 | (bVar111 >= bVar177) * bVar177;
        bVar219 = (bVar115 < bVar181) * bVar115 | (bVar115 >= bVar181) * bVar181;
        bVar220 = (bVar119 < bVar185) * bVar119 | (bVar119 >= bVar185) * bVar185;
        bVar221 = (bVar123 < bVar189) * bVar123 | (bVar123 >= bVar189) * bVar189;
        bVar222 = (bVar127 < bVar191) * bVar127 | (bVar127 >= bVar191) * bVar191;
        bVar223 = (bVar131 < bVar193) * bVar131 | (bVar131 >= bVar193) * bVar193;
        bVar224 = (bVar135 < bVar195) * bVar135 | (bVar135 >= bVar195) * bVar195;
        bVar225 = (bVar139 < bVar197) * bVar139 | (bVar139 >= bVar197) * bVar197;
        bVar226 = (bVar143 < bVar199) * bVar143 | (bVar143 >= bVar199) * bVar199;
        bVar227 = (bVar147 < bVar201) * bVar147 | (bVar147 >= bVar201) * bVar201;
        bVar228 = (bVar151 < bVar203) * bVar151 | (bVar151 >= bVar203) * bVar203;
        bVar88 = ((bVar89 < bVar155) * bVar155 | (bVar89 >= bVar155) * bVar89) - bVar213 |
                 -(bVar124 == bVar88) ^ -(bVar156 == bVar154);
        bVar94 = ((bVar95 < bVar161) * bVar161 | (bVar95 >= bVar161) * bVar95) - bVar214 |
                 -(bVar125 == bVar94) ^ -(bVar157 == bVar160);
        bVar98 = ((bVar99 < bVar165) * bVar165 | (bVar99 >= bVar165) * bVar99) - bVar215 |
                 -(bVar128 == bVar98) ^ -(bVar162 == bVar164);
        bVar102 = ((bVar103 < bVar169) * bVar169 | (bVar103 >= bVar169) * bVar103) - bVar216 |
                  -(bVar129 == bVar102) ^ -(bVar163 == bVar168);
        bVar106 = ((bVar107 < bVar173) * bVar173 | (bVar107 >= bVar173) * bVar107) - bVar217 |
                  -(bVar132 == bVar106) ^ -(bVar166 == bVar172);
        bVar110 = ((bVar111 < bVar177) * bVar177 | (bVar111 >= bVar177) * bVar111) - bVar218 |
                  -(bVar133 == bVar110) ^ -(bVar167 == bVar176);
        bVar114 = ((bVar115 < bVar181) * bVar181 | (bVar115 >= bVar181) * bVar115) - bVar219 |
                  -(bVar136 == bVar114) ^ -(bVar170 == bVar180);
        bVar118 = ((bVar119 < bVar185) * bVar185 | (bVar119 >= bVar185) * bVar119) - bVar220 |
                  -(bVar137 == bVar118) ^ -(bVar171 == bVar184);
        bVar122 = ((bVar123 < bVar189) * bVar189 | (bVar123 >= bVar189) * bVar123) - bVar221 |
                  -(bVar140 == bVar122) ^ -(bVar174 == bVar188);
        bVar126 = ((bVar127 < bVar191) * bVar191 | (bVar127 >= bVar191) * bVar127) - bVar222 |
                  -(bVar141 == bVar126) ^ -(bVar175 == bVar190);
        bVar130 = ((bVar131 < bVar193) * bVar193 | (bVar131 >= bVar193) * bVar131) - bVar223 |
                  -(bVar144 == bVar130) ^ -(bVar178 == bVar192);
        bVar134 = ((bVar135 < bVar195) * bVar195 | (bVar135 >= bVar195) * bVar135) - bVar224 |
                  -(bVar145 == bVar134) ^ -(bVar179 == bVar194);
        bVar138 = ((bVar139 < bVar197) * bVar197 | (bVar139 >= bVar197) * bVar139) - bVar225 |
                  -(bVar148 == bVar138) ^ -(bVar182 == bVar196);
        bVar142 = ((bVar143 < bVar199) * bVar199 | (bVar143 >= bVar199) * bVar143) - bVar226 |
                  -(bVar149 == bVar142) ^ -(bVar183 == bVar198);
        bVar146 = ((bVar147 < bVar201) * bVar201 | (bVar147 >= bVar201) * bVar147) - bVar227 |
                  -(bVar152 == bVar146) ^ -(bVar186 == bVar200);
        bVar150 = ((bVar151 < bVar203) * bVar203 | (bVar151 >= bVar203) * bVar151) - bVar228 |
                  -(bVar153 == bVar150) ^ -(bVar187 == bVar202);
        bVar188 = -((byte)((bVar89 < bVar88) * bVar89 | (bVar89 >= bVar88) * bVar88) == bVar89);
        bVar190 = -((byte)((bVar95 < bVar94) * bVar95 | (bVar95 >= bVar94) * bVar94) == bVar95);
        bVar192 = -((byte)((bVar99 < bVar98) * bVar99 | (bVar99 >= bVar98) * bVar98) == bVar99);
        bVar194 = -((byte)((bVar103 < bVar102) * bVar103 | (bVar103 >= bVar102) * bVar102) ==
                   bVar103);
        bVar196 = -((byte)((bVar107 < bVar106) * bVar107 | (bVar107 >= bVar106) * bVar106) ==
                   bVar107);
        bVar198 = -((byte)((bVar111 < bVar110) * bVar111 | (bVar111 >= bVar110) * bVar110) ==
                   bVar111);
        bVar200 = -((byte)((bVar115 < bVar114) * bVar115 | (bVar115 >= bVar114) * bVar114) ==
                   bVar115);
        bVar202 = -((byte)((bVar119 < bVar118) * bVar119 | (bVar119 >= bVar118) * bVar118) ==
                   bVar119);
        bVar205 = -((byte)((bVar123 < bVar122) * bVar123 | (bVar123 >= bVar122) * bVar122) ==
                   bVar123);
        bVar206 = -((byte)((bVar127 < bVar126) * bVar127 | (bVar127 >= bVar126) * bVar126) ==
                   bVar127);
        bVar207 = -((byte)((bVar131 < bVar130) * bVar131 | (bVar131 >= bVar130) * bVar130) ==
                   bVar131);
        bVar208 = -((byte)((bVar135 < bVar134) * bVar135 | (bVar135 >= bVar134) * bVar134) ==
                   bVar135);
        bVar209 = -((byte)((bVar139 < bVar138) * bVar139 | (bVar139 >= bVar138) * bVar138) ==
                   bVar139);
        bVar210 = -((byte)((bVar143 < bVar142) * bVar143 | (bVar143 >= bVar142) * bVar142) ==
                   bVar143);
        bVar211 = -((byte)((bVar147 < bVar146) * bVar147 | (bVar147 >= bVar146) * bVar146) ==
                   bVar147);
        bVar212 = -((byte)((bVar151 < bVar150) * bVar151 | (bVar151 >= bVar150) * bVar150) ==
                   bVar151);
        pcVar78 = (char *)((int)param_6 + uVar80 + param_2);
        cVar9 = pcVar78[1];
        cVar10 = pcVar78[2];
        cVar11 = pcVar78[3];
        cVar12 = pcVar78[4];
        cVar13 = pcVar78[5];
        cVar14 = pcVar78[6];
        cVar15 = pcVar78[7];
        cVar16 = pcVar78[8];
        cVar17 = pcVar78[9];
        cVar18 = pcVar78[10];
        cVar19 = pcVar78[0xb];
        cVar20 = pcVar78[0xc];
        cVar21 = pcVar78[0xd];
        cVar22 = pcVar78[0xe];
        cVar23 = pcVar78[0xf];
        bVar213 = -((byte)((bVar88 < bVar155) * bVar88 | (bVar88 >= bVar155) * bVar155) == bVar155)
                  & -(bVar213 == bVar155);
        bVar214 = -((byte)((bVar94 < bVar161) * bVar94 | (bVar94 >= bVar161) * bVar161) == bVar161)
                  & -(bVar214 == bVar161);
        bVar215 = -((byte)((bVar98 < bVar165) * bVar98 | (bVar98 >= bVar165) * bVar165) == bVar165)
                  & -(bVar215 == bVar165);
        bVar216 = -((byte)((bVar102 < bVar169) * bVar102 | (bVar102 >= bVar169) * bVar169) ==
                   bVar169) & -(bVar216 == bVar169);
        bVar217 = -((byte)((bVar106 < bVar173) * bVar106 | (bVar106 >= bVar173) * bVar173) ==
                   bVar173) & -(bVar217 == bVar173);
        bVar218 = -((byte)((bVar110 < bVar177) * bVar110 | (bVar110 >= bVar177) * bVar177) ==
                   bVar177) & -(bVar218 == bVar177);
        bVar219 = -((byte)((bVar114 < bVar181) * bVar114 | (bVar114 >= bVar181) * bVar181) ==
                   bVar181) & -(bVar219 == bVar181);
        bVar220 = -((byte)((bVar118 < bVar185) * bVar118 | (bVar118 >= bVar185) * bVar185) ==
                   bVar185) & -(bVar220 == bVar185);
        bVar189 = -((byte)((bVar122 < bVar189) * bVar122 | (bVar122 >= bVar189) * bVar189) ==
                   bVar189) & -(bVar221 == bVar189);
        bVar191 = -((byte)((bVar126 < bVar191) * bVar126 | (bVar126 >= bVar191) * bVar191) ==
                   bVar191) & -(bVar222 == bVar191);
        bVar193 = -((byte)((bVar130 < bVar193) * bVar130 | (bVar130 >= bVar193) * bVar193) ==
                   bVar193) & -(bVar223 == bVar193);
        bVar195 = -((byte)((bVar134 < bVar195) * bVar134 | (bVar134 >= bVar195) * bVar195) ==
                   bVar195) & -(bVar224 == bVar195);
        bVar197 = -((byte)((bVar138 < bVar197) * bVar138 | (bVar138 >= bVar197) * bVar197) ==
                   bVar197) & -(bVar225 == bVar197);
        bVar199 = -((byte)((bVar142 < bVar199) * bVar142 | (bVar142 >= bVar199) * bVar199) ==
                   bVar199) & -(bVar226 == bVar199);
        bVar201 = -((byte)((bVar146 < bVar201) * bVar146 | (bVar146 >= bVar201) * bVar201) ==
                   bVar201) & -(bVar227 == bVar201);
        bVar203 = -((byte)((bVar150 < bVar203) * bVar150 | (bVar150 >= bVar203) * bVar203) ==
                   bVar203) & -(bVar228 == bVar203);
        pbVar3 = (byte *)(param_4 + 0x10 + uVar80);
        bVar88 = *pbVar3;
        bVar89 = pbVar3[1];
        bVar94 = pbVar3[2];
        bVar95 = pbVar3[3];
        bVar98 = pbVar3[4];
        bVar99 = pbVar3[5];
        bVar102 = pbVar3[6];
        bVar103 = pbVar3[7];
        bVar106 = pbVar3[8];
        bVar107 = pbVar3[9];
        bVar110 = pbVar3[10];
        bVar111 = pbVar3[0xb];
        bVar114 = pbVar3[0xc];
        bVar115 = pbVar3[0xd];
        bVar118 = pbVar3[0xe];
        bVar119 = pbVar3[0xf];
        pbVar3 = (byte *)(iVar84 + uVar80);
        bVar154 = *pbVar3;
        bVar155 = pbVar3[1];
        bVar160 = pbVar3[2];
        bVar161 = pbVar3[3];
        bVar164 = pbVar3[4];
        bVar165 = pbVar3[5];
        bVar168 = pbVar3[6];
        bVar169 = pbVar3[7];
        bVar172 = pbVar3[8];
        bVar173 = pbVar3[9];
        bVar176 = pbVar3[10];
        bVar177 = pbVar3[0xb];
        bVar180 = pbVar3[0xc];
        bVar181 = pbVar3[0xd];
        bVar184 = pbVar3[0xe];
        bVar185 = pbVar3[0xf];
        pbVar3 = (byte *)((int)param_6 + uVar80 + 0x10);
        bVar122 = *pbVar3;
        bVar123 = pbVar3[1];
        bVar126 = pbVar3[2];
        bVar127 = pbVar3[3];
        bVar130 = pbVar3[4];
        bVar131 = pbVar3[5];
        bVar134 = pbVar3[6];
        bVar135 = pbVar3[7];
        bVar138 = pbVar3[8];
        bVar139 = pbVar3[9];
        bVar142 = pbVar3[10];
        bVar143 = pbVar3[0xb];
        bVar146 = pbVar3[0xc];
        bVar147 = pbVar3[0xd];
        bVar150 = pbVar3[0xe];
        bVar151 = pbVar3[0xf];
        pcVar74 = (char *)((int)param_8 + uVar80 + param_2);
        *pcVar74 = *pcVar78 -
                   (~bVar213 & (~bVar188 & bVar156 | bVar90 & bVar188) | bVar124 & bVar213);
        pcVar74[1] = cVar9 - (~bVar214 & (~bVar190 & bVar157 | bVar91 & bVar190) | bVar125 & bVar214
                             );
        pcVar74[2] = cVar10 - (~bVar215 & (~bVar192 & bVar162 | bVar96 & bVar192) |
                              bVar128 & bVar215);
        pcVar74[3] = cVar11 - (~bVar216 & (~bVar194 & bVar163 | bVar97 & bVar194) |
                              bVar129 & bVar216);
        pcVar74[4] = cVar12 - (~bVar217 & (~bVar196 & bVar166 | bVar100 & bVar196) |
                              bVar132 & bVar217);
        pcVar74[5] = cVar13 - (~bVar218 & (~bVar198 & bVar167 | bVar101 & bVar198) |
                              bVar133 & bVar218);
        pcVar74[6] = cVar14 - (~bVar219 & (~bVar200 & bVar170 | bVar104 & bVar200) |
                              bVar136 & bVar219);
        pcVar74[7] = cVar15 - (~bVar220 & (~bVar202 & bVar171 | bVar105 & bVar202) |
                              bVar137 & bVar220);
        pcVar74[8] = cVar16 - (~bVar189 & (~bVar205 & bVar174 | bVar108 & bVar205) |
                              bVar140 & bVar189);
        pcVar74[9] = cVar17 - (~bVar191 & (~bVar206 & bVar175 | bVar109 & bVar206) |
                              bVar141 & bVar191);
        pcVar74[10] = cVar18 - (~bVar193 & (~bVar207 & bVar178 | bVar112 & bVar207) |
                               bVar144 & bVar193);
        pcVar74[0xb] = cVar19 - (~bVar195 & (~bVar208 & bVar179 | bVar113 & bVar208) |
                                bVar145 & bVar195);
        pcVar74[0xc] = cVar20 - (~bVar197 & (~bVar209 & bVar182 | bVar116 & bVar209) |
                                bVar148 & bVar197);
        pcVar74[0xd] = cVar21 - (~bVar199 & (~bVar210 & bVar183 | bVar117 & bVar210) |
                                bVar149 & bVar199);
        pcVar74[0xe] = cVar22 - (~bVar201 & (~bVar211 & bVar186 | bVar120 & bVar211) |
                                bVar152 & bVar201);
        pcVar74[0xf] = cVar23 - (~bVar203 & (~bVar212 & bVar187 | bVar121 & bVar212) |
                                bVar153 & bVar203);
        bVar156 = (bVar88 < bVar154) * bVar154 | (bVar88 >= bVar154) * bVar88;
        bVar162 = (bVar89 < bVar155) * bVar155 | (bVar89 >= bVar155) * bVar89;
        bVar166 = (bVar94 < bVar160) * bVar160 | (bVar94 >= bVar160) * bVar94;
        bVar170 = (bVar95 < bVar161) * bVar161 | (bVar95 >= bVar161) * bVar95;
        bVar174 = (bVar98 < bVar164) * bVar164 | (bVar98 >= bVar164) * bVar98;
        bVar178 = (bVar99 < bVar165) * bVar165 | (bVar99 >= bVar165) * bVar99;
        bVar182 = (bVar102 < bVar168) * bVar168 | (bVar102 >= bVar168) * bVar102;
        bVar186 = (bVar103 < bVar169) * bVar169 | (bVar103 >= bVar169) * bVar103;
        bVar188 = (bVar106 < bVar172) * bVar172 | (bVar106 >= bVar172) * bVar106;
        bVar190 = (bVar107 < bVar173) * bVar173 | (bVar107 >= bVar173) * bVar107;
        bVar192 = (bVar110 < bVar176) * bVar176 | (bVar110 >= bVar176) * bVar110;
        bVar194 = (bVar111 < bVar177) * bVar177 | (bVar111 >= bVar177) * bVar111;
        bVar196 = (bVar114 < bVar180) * bVar180 | (bVar114 >= bVar180) * bVar114;
        bVar198 = (bVar115 < bVar181) * bVar181 | (bVar115 >= bVar181) * bVar115;
        bVar200 = (bVar118 < bVar184) * bVar184 | (bVar118 >= bVar184) * bVar118;
        bVar202 = (bVar119 < bVar185) * bVar185 | (bVar119 >= bVar185) * bVar119;
        bVar90 = (bVar122 < bVar88) * bVar88 | (bVar122 >= bVar88) * bVar122;
        bVar96 = (bVar123 < bVar89) * bVar89 | (bVar123 >= bVar89) * bVar123;
        bVar100 = (bVar126 < bVar94) * bVar94 | (bVar126 >= bVar94) * bVar126;
        bVar104 = (bVar127 < bVar95) * bVar95 | (bVar127 >= bVar95) * bVar127;
        bVar108 = (bVar130 < bVar98) * bVar98 | (bVar130 >= bVar98) * bVar130;
        bVar112 = (bVar131 < bVar99) * bVar99 | (bVar131 >= bVar99) * bVar131;
        bVar116 = (bVar134 < bVar102) * bVar102 | (bVar134 >= bVar102) * bVar134;
        bVar120 = (bVar135 < bVar103) * bVar103 | (bVar135 >= bVar103) * bVar135;
        bVar124 = (bVar138 < bVar106) * bVar106 | (bVar138 >= bVar106) * bVar138;
        bVar128 = (bVar139 < bVar107) * bVar107 | (bVar139 >= bVar107) * bVar139;
        bVar132 = (bVar142 < bVar110) * bVar110 | (bVar142 >= bVar110) * bVar142;
        bVar136 = (bVar143 < bVar111) * bVar111 | (bVar143 >= bVar111) * bVar143;
        bVar140 = (bVar146 < bVar114) * bVar114 | (bVar146 >= bVar114) * bVar146;
        bVar144 = (bVar147 < bVar115) * bVar115 | (bVar147 >= bVar115) * bVar147;
        bVar148 = (bVar150 < bVar118) * bVar118 | (bVar150 >= bVar118) * bVar150;
        bVar152 = (bVar151 < bVar119) * bVar119 | (bVar151 >= bVar119) * bVar151;
        bVar157 = bVar156 - ((bVar154 < bVar88) * bVar154 | (bVar154 >= bVar88) * bVar88);
        bVar163 = bVar162 - ((bVar155 < bVar89) * bVar155 | (bVar155 >= bVar89) * bVar89);
        bVar167 = bVar166 - ((bVar160 < bVar94) * bVar160 | (bVar160 >= bVar94) * bVar94);
        bVar171 = bVar170 - ((bVar161 < bVar95) * bVar161 | (bVar161 >= bVar95) * bVar95);
        bVar175 = bVar174 - ((bVar164 < bVar98) * bVar164 | (bVar164 >= bVar98) * bVar98);
        bVar179 = bVar178 - ((bVar165 < bVar99) * bVar165 | (bVar165 >= bVar99) * bVar99);
        bVar183 = bVar182 - ((bVar168 < bVar102) * bVar168 | (bVar168 >= bVar102) * bVar102);
        bVar187 = bVar186 - ((bVar169 < bVar103) * bVar169 | (bVar169 >= bVar103) * bVar103);
        bVar189 = bVar188 - ((bVar172 < bVar106) * bVar172 | (bVar172 >= bVar106) * bVar106);
        bVar191 = bVar190 - ((bVar173 < bVar107) * bVar173 | (bVar173 >= bVar107) * bVar107);
        bVar193 = bVar192 - ((bVar176 < bVar110) * bVar176 | (bVar176 >= bVar110) * bVar110);
        bVar195 = bVar194 - ((bVar177 < bVar111) * bVar177 | (bVar177 >= bVar111) * bVar111);
        bVar197 = bVar196 - ((bVar180 < bVar114) * bVar180 | (bVar180 >= bVar114) * bVar114);
        bVar199 = bVar198 - ((bVar181 < bVar115) * bVar181 | (bVar181 >= bVar115) * bVar115);
        bVar201 = bVar200 - ((bVar184 < bVar118) * bVar184 | (bVar184 >= bVar118) * bVar118);
        bVar203 = bVar202 - ((bVar185 < bVar119) * bVar185 | (bVar185 >= bVar119) * bVar119);
        bVar91 = bVar90 - ((bVar122 < bVar88) * bVar122 | (bVar122 >= bVar88) * bVar88);
        bVar97 = bVar96 - ((bVar123 < bVar89) * bVar123 | (bVar123 >= bVar89) * bVar89);
        bVar101 = bVar100 - ((bVar126 < bVar94) * bVar126 | (bVar126 >= bVar94) * bVar94);
        bVar105 = bVar104 - ((bVar127 < bVar95) * bVar127 | (bVar127 >= bVar95) * bVar95);
        bVar109 = bVar108 - ((bVar130 < bVar98) * bVar130 | (bVar130 >= bVar98) * bVar98);
        bVar113 = bVar112 - ((bVar131 < bVar99) * bVar131 | (bVar131 >= bVar99) * bVar99);
        bVar117 = bVar116 - ((bVar134 < bVar102) * bVar134 | (bVar134 >= bVar102) * bVar102);
        bVar121 = bVar120 - ((bVar135 < bVar103) * bVar135 | (bVar135 >= bVar103) * bVar103);
        bVar125 = bVar124 - ((bVar138 < bVar106) * bVar138 | (bVar138 >= bVar106) * bVar106);
        bVar129 = bVar128 - ((bVar139 < bVar107) * bVar139 | (bVar139 >= bVar107) * bVar107);
        bVar133 = bVar132 - ((bVar142 < bVar110) * bVar142 | (bVar142 >= bVar110) * bVar110);
        bVar137 = bVar136 - ((bVar143 < bVar111) * bVar143 | (bVar143 >= bVar111) * bVar111);
        bVar141 = bVar140 - ((bVar146 < bVar114) * bVar146 | (bVar146 >= bVar114) * bVar114);
        bVar145 = bVar144 - ((bVar147 < bVar115) * bVar147 | (bVar147 >= bVar115) * bVar115);
        bVar149 = bVar148 - ((bVar150 < bVar118) * bVar150 | (bVar150 >= bVar118) * bVar118);
        bVar153 = bVar152 - ((bVar151 < bVar119) * bVar151 | (bVar151 >= bVar119) * bVar119);
        bVar205 = (bVar91 < bVar157) * bVar91 | (bVar91 >= bVar157) * bVar157;
        bVar206 = (bVar97 < bVar163) * bVar97 | (bVar97 >= bVar163) * bVar163;
        bVar207 = (bVar101 < bVar167) * bVar101 | (bVar101 >= bVar167) * bVar167;
        bVar208 = (bVar105 < bVar171) * bVar105 | (bVar105 >= bVar171) * bVar171;
        bVar209 = (bVar109 < bVar175) * bVar109 | (bVar109 >= bVar175) * bVar175;
        bVar210 = (bVar113 < bVar179) * bVar113 | (bVar113 >= bVar179) * bVar179;
        bVar211 = (bVar117 < bVar183) * bVar117 | (bVar117 >= bVar183) * bVar183;
        bVar212 = (bVar121 < bVar187) * bVar121 | (bVar121 >= bVar187) * bVar187;
        bVar213 = (bVar125 < bVar189) * bVar125 | (bVar125 >= bVar189) * bVar189;
        bVar214 = (bVar129 < bVar191) * bVar129 | (bVar129 >= bVar191) * bVar191;
        bVar215 = (bVar133 < bVar193) * bVar133 | (bVar133 >= bVar193) * bVar193;
        bVar216 = (bVar137 < bVar195) * bVar137 | (bVar137 >= bVar195) * bVar195;
        bVar217 = (bVar141 < bVar197) * bVar141 | (bVar141 >= bVar197) * bVar197;
        bVar218 = (bVar145 < bVar199) * bVar145 | (bVar145 >= bVar199) * bVar199;
        bVar219 = (bVar149 < bVar201) * bVar149 | (bVar149 >= bVar201) * bVar201;
        bVar220 = (bVar153 < bVar203) * bVar153 | (bVar153 >= bVar203) * bVar203;
        bVar90 = ((bVar91 < bVar157) * bVar157 | (bVar91 >= bVar157) * bVar91) - bVar205 |
                 -(bVar122 == bVar90) ^ -(bVar88 == bVar156);
        bVar96 = ((bVar97 < bVar163) * bVar163 | (bVar97 >= bVar163) * bVar97) - bVar206 |
                 -(bVar123 == bVar96) ^ -(bVar89 == bVar162);
        bVar100 = ((bVar101 < bVar167) * bVar167 | (bVar101 >= bVar167) * bVar101) - bVar207 |
                  -(bVar126 == bVar100) ^ -(bVar94 == bVar166);
        bVar104 = ((bVar105 < bVar171) * bVar171 | (bVar105 >= bVar171) * bVar105) - bVar208 |
                  -(bVar127 == bVar104) ^ -(bVar95 == bVar170);
        bVar108 = ((bVar109 < bVar175) * bVar175 | (bVar109 >= bVar175) * bVar109) - bVar209 |
                  -(bVar130 == bVar108) ^ -(bVar98 == bVar174);
        bVar112 = ((bVar113 < bVar179) * bVar179 | (bVar113 >= bVar179) * bVar113) - bVar210 |
                  -(bVar131 == bVar112) ^ -(bVar99 == bVar178);
        bVar116 = ((bVar117 < bVar183) * bVar183 | (bVar117 >= bVar183) * bVar117) - bVar211 |
                  -(bVar134 == bVar116) ^ -(bVar102 == bVar182);
        bVar120 = ((bVar121 < bVar187) * bVar187 | (bVar121 >= bVar187) * bVar121) - bVar212 |
                  -(bVar135 == bVar120) ^ -(bVar103 == bVar186);
        bVar124 = ((bVar125 < bVar189) * bVar189 | (bVar125 >= bVar189) * bVar125) - bVar213 |
                  -(bVar138 == bVar124) ^ -(bVar106 == bVar188);
        bVar128 = ((bVar129 < bVar191) * bVar191 | (bVar129 >= bVar191) * bVar129) - bVar214 |
                  -(bVar139 == bVar128) ^ -(bVar107 == bVar190);
        bVar132 = ((bVar133 < bVar193) * bVar193 | (bVar133 >= bVar193) * bVar133) - bVar215 |
                  -(bVar142 == bVar132) ^ -(bVar110 == bVar192);
        bVar136 = ((bVar137 < bVar195) * bVar195 | (bVar137 >= bVar195) * bVar137) - bVar216 |
                  -(bVar143 == bVar136) ^ -(bVar111 == bVar194);
        bVar140 = ((bVar141 < bVar197) * bVar197 | (bVar141 >= bVar197) * bVar141) - bVar217 |
                  -(bVar146 == bVar140) ^ -(bVar114 == bVar196);
        bVar144 = ((bVar145 < bVar199) * bVar199 | (bVar145 >= bVar199) * bVar145) - bVar218 |
                  -(bVar147 == bVar144) ^ -(bVar115 == bVar198);
        bVar148 = ((bVar149 < bVar201) * bVar201 | (bVar149 >= bVar201) * bVar149) - bVar219 |
                  -(bVar150 == bVar148) ^ -(bVar118 == bVar200);
        bVar152 = ((bVar153 < bVar203) * bVar203 | (bVar153 >= bVar203) * bVar153) - bVar220 |
                  -(bVar151 == bVar152) ^ -(bVar119 == bVar202);
        bVar91 = -((byte)((bVar91 < bVar90) * bVar91 | (bVar91 >= bVar90) * bVar90) == bVar91);
        bVar97 = -((byte)((bVar97 < bVar96) * bVar97 | (bVar97 >= bVar96) * bVar96) == bVar97);
        bVar101 = -((byte)((bVar101 < bVar100) * bVar101 | (bVar101 >= bVar100) * bVar100) ==
                   bVar101);
        bVar105 = -((byte)((bVar105 < bVar104) * bVar105 | (bVar105 >= bVar104) * bVar104) ==
                   bVar105);
        bVar109 = -((byte)((bVar109 < bVar108) * bVar109 | (bVar109 >= bVar108) * bVar108) ==
                   bVar109);
        bVar113 = -((byte)((bVar113 < bVar112) * bVar113 | (bVar113 >= bVar112) * bVar112) ==
                   bVar113);
        bVar117 = -((byte)((bVar117 < bVar116) * bVar117 | (bVar117 >= bVar116) * bVar116) ==
                   bVar117);
        bVar121 = -((byte)((bVar121 < bVar120) * bVar121 | (bVar121 >= bVar120) * bVar120) ==
                   bVar121);
        bVar125 = -((byte)((bVar125 < bVar124) * bVar125 | (bVar125 >= bVar124) * bVar124) ==
                   bVar125);
        bVar129 = -((byte)((bVar129 < bVar128) * bVar129 | (bVar129 >= bVar128) * bVar128) ==
                   bVar129);
        bVar133 = -((byte)((bVar133 < bVar132) * bVar133 | (bVar133 >= bVar132) * bVar132) ==
                   bVar133);
        bVar137 = -((byte)((bVar137 < bVar136) * bVar137 | (bVar137 >= bVar136) * bVar136) ==
                   bVar137);
        bVar141 = -((byte)((bVar141 < bVar140) * bVar141 | (bVar141 >= bVar140) * bVar140) ==
                   bVar141);
        bVar145 = -((byte)((bVar145 < bVar144) * bVar145 | (bVar145 >= bVar144) * bVar144) ==
                   bVar145);
        bVar149 = -((byte)((bVar149 < bVar148) * bVar149 | (bVar149 >= bVar148) * bVar148) ==
                   bVar149);
        bVar153 = -((byte)((bVar153 < bVar152) * bVar153 | (bVar153 >= bVar152) * bVar152) ==
                   bVar153);
        bVar90 = -((byte)((bVar90 < bVar157) * bVar90 | (bVar90 >= bVar157) * bVar157) == bVar157) &
                 -(bVar205 == bVar157);
        bVar96 = -((byte)((bVar96 < bVar163) * bVar96 | (bVar96 >= bVar163) * bVar163) == bVar163) &
                 -(bVar206 == bVar163);
        bVar100 = -((byte)((bVar100 < bVar167) * bVar100 | (bVar100 >= bVar167) * bVar167) ==
                   bVar167) & -(bVar207 == bVar167);
        bVar104 = -((byte)((bVar104 < bVar171) * bVar104 | (bVar104 >= bVar171) * bVar171) ==
                   bVar171) & -(bVar208 == bVar171);
        bVar108 = -((byte)((bVar108 < bVar175) * bVar108 | (bVar108 >= bVar175) * bVar175) ==
                   bVar175) & -(bVar209 == bVar175);
        bVar112 = -((byte)((bVar112 < bVar179) * bVar112 | (bVar112 >= bVar179) * bVar179) ==
                   bVar179) & -(bVar210 == bVar179);
        bVar116 = -((byte)((bVar116 < bVar183) * bVar116 | (bVar116 >= bVar183) * bVar183) ==
                   bVar183) & -(bVar211 == bVar183);
        bVar120 = -((byte)((bVar120 < bVar187) * bVar120 | (bVar120 >= bVar187) * bVar187) ==
                   bVar187) & -(bVar212 == bVar187);
        bVar124 = -((byte)((bVar124 < bVar189) * bVar124 | (bVar124 >= bVar189) * bVar189) ==
                   bVar189) & -(bVar213 == bVar189);
        bVar128 = -((byte)((bVar128 < bVar191) * bVar128 | (bVar128 >= bVar191) * bVar191) ==
                   bVar191) & -(bVar214 == bVar191);
        bVar132 = -((byte)((bVar132 < bVar193) * bVar132 | (bVar132 >= bVar193) * bVar193) ==
                   bVar193) & -(bVar215 == bVar193);
        bVar136 = -((byte)((bVar136 < bVar195) * bVar136 | (bVar136 >= bVar195) * bVar195) ==
                   bVar195) & -(bVar216 == bVar195);
        bVar140 = -((byte)((bVar140 < bVar197) * bVar140 | (bVar140 >= bVar197) * bVar197) ==
                   bVar197) & -(bVar217 == bVar197);
        bVar144 = -((byte)((bVar144 < bVar199) * bVar144 | (bVar144 >= bVar199) * bVar199) ==
                   bVar199) & -(bVar218 == bVar199);
        bVar148 = -((byte)((bVar148 < bVar201) * bVar148 | (bVar148 >= bVar201) * bVar201) ==
                   bVar201) & -(bVar219 == bVar201);
        bVar152 = -((byte)((bVar152 < bVar203) * bVar152 | (bVar152 >= bVar203) * bVar203) ==
                   bVar203) & -(bVar220 == bVar203);
        pcVar74 = (char *)((int)param_6 + uVar80 + param_2 + 0x10);
        cVar9 = pcVar74[1];
        cVar10 = pcVar74[2];
        cVar11 = pcVar74[3];
        cVar12 = pcVar74[4];
        cVar13 = pcVar74[5];
        cVar14 = pcVar74[6];
        cVar15 = pcVar74[7];
        cVar16 = pcVar74[8];
        cVar17 = pcVar74[9];
        cVar18 = pcVar74[10];
        cVar19 = pcVar74[0xb];
        cVar20 = pcVar74[0xc];
        cVar21 = pcVar74[0xd];
        cVar22 = pcVar74[0xe];
        cVar23 = pcVar74[0xf];
        pcVar78 = (char *)((int)param_8 + uVar80 + param_2 + 0x10);
        *pcVar78 = *pcVar74 - (~bVar90 & (~bVar91 & bVar88 | bVar154 & bVar91) | bVar122 & bVar90);
        pcVar78[1] = cVar9 - (~bVar96 & (~bVar97 & bVar89 | bVar155 & bVar97) | bVar123 & bVar96);
        pcVar78[2] = cVar10 - (~bVar100 & (~bVar101 & bVar94 | bVar160 & bVar101) |
                              bVar126 & bVar100);
        pcVar78[3] = cVar11 - (~bVar104 & (~bVar105 & bVar95 | bVar161 & bVar105) |
                              bVar127 & bVar104);
        pcVar78[4] = cVar12 - (~bVar108 & (~bVar109 & bVar98 | bVar164 & bVar109) |
                              bVar130 & bVar108);
        pcVar78[5] = cVar13 - (~bVar112 & (~bVar113 & bVar99 | bVar165 & bVar113) |
                              bVar131 & bVar112);
        pcVar78[6] = cVar14 - (~bVar116 & (~bVar117 & bVar102 | bVar168 & bVar117) |
                              bVar134 & bVar116);
        pcVar78[7] = cVar15 - (~bVar120 & (~bVar121 & bVar103 | bVar169 & bVar121) |
                              bVar135 & bVar120);
        pcVar78[8] = cVar16 - (~bVar124 & (~bVar125 & bVar106 | bVar172 & bVar125) |
                              bVar138 & bVar124);
        pcVar78[9] = cVar17 - (~bVar128 & (~bVar129 & bVar107 | bVar173 & bVar129) |
                              bVar139 & bVar128);
        pcVar78[10] = cVar18 - (~bVar132 & (~bVar133 & bVar110 | bVar176 & bVar133) |
                               bVar142 & bVar132);
        pcVar78[0xb] = cVar19 - (~bVar136 & (~bVar137 & bVar111 | bVar177 & bVar137) |
                                bVar143 & bVar136);
        pcVar78[0xc] = cVar20 - (~bVar140 & (~bVar141 & bVar114 | bVar180 & bVar141) |
                                bVar146 & bVar140);
        pcVar78[0xd] = cVar21 - (~bVar144 & (~bVar145 & bVar115 | bVar181 & bVar145) |
                                bVar147 & bVar144);
        pcVar78[0xe] = cVar22 - (~bVar148 & (~bVar149 & bVar118 | bVar184 & bVar149) |
                                bVar150 & bVar148);
        pcVar78[0xf] = cVar23 - (~bVar152 & (~bVar153 & bVar119 | bVar185 & bVar153) |
                                bVar151 & bVar152);
        uVar80 = uVar80 + 0x20;
      } while (uVar83 != uVar80);
    }
    if (uVar85 < uVar81) {
      uVar81 = uVar85;
    }
    if ((uVar72 & 0x1f) < uVar81) {
      uVar81 = uVar72 & 0x1f;
    }
    if (uVar86 < uVar81) {
      uVar81 = uVar86;
    }
    if (uVar81 != 0) {
      iVar76 = (int)param_6 + param_2 + uVar79;
      local_30 = (int)param_8 + uVar83 + param_2;
      iVar84 = (int)param_6 + uVar77;
      iVar87 = uVar77 + param_4;
      uVar72 = 0;
      iVar82 = uVar73 + param_4 + param_2;
      if (7 < uVar81) {
        uVar73 = 0;
        uVar72 = uVar81 & 0xfffffff8;
        do {
          pbVar3 = (byte *)(iVar84 + uVar73);
          bVar90 = *pbVar3;
          bVar91 = pbVar3[1];
          bVar96 = pbVar3[2];
          bVar97 = pbVar3[3];
          bVar100 = pbVar3[4];
          bVar101 = pbVar3[5];
          bVar104 = pbVar3[6];
          bVar105 = pbVar3[7];
          pbVar3 = (byte *)(iVar87 + uVar73);
          bVar108 = *pbVar3;
          bVar109 = pbVar3[1];
          bVar112 = pbVar3[2];
          bVar113 = pbVar3[3];
          bVar116 = pbVar3[4];
          bVar117 = pbVar3[5];
          bVar120 = pbVar3[6];
          bVar121 = pbVar3[7];
          pbVar3 = (byte *)(iVar82 + uVar73);
          bVar124 = *pbVar3;
          bVar125 = pbVar3[1];
          bVar128 = pbVar3[2];
          bVar129 = pbVar3[3];
          bVar132 = pbVar3[4];
          bVar133 = pbVar3[5];
          bVar136 = pbVar3[6];
          bVar137 = pbVar3[7];
          bVar174 = (bVar108 < bVar124) * bVar124 | (bVar108 >= bVar124) * bVar108;
          bVar178 = (bVar109 < bVar125) * bVar125 | (bVar109 >= bVar125) * bVar109;
          bVar182 = (bVar112 < bVar128) * bVar128 | (bVar112 >= bVar128) * bVar112;
          bVar186 = (bVar113 < bVar129) * bVar129 | (bVar113 >= bVar129) * bVar113;
          bVar88 = (bVar116 < bVar132) * bVar132 | (bVar116 >= bVar132) * bVar116;
          bVar94 = (bVar117 < bVar133) * bVar133 | (bVar117 >= bVar133) * bVar117;
          bVar98 = (bVar120 < bVar136) * bVar136 | (bVar120 >= bVar136) * bVar120;
          bVar102 = (bVar121 < bVar137) * bVar137 | (bVar121 >= bVar137) * bVar121;
          bVar140 = (bVar90 < bVar108) * bVar108 | (bVar90 >= bVar108) * bVar90;
          bVar144 = (bVar91 < bVar109) * bVar109 | (bVar91 >= bVar109) * bVar91;
          bVar148 = (bVar96 < bVar112) * bVar112 | (bVar96 >= bVar112) * bVar96;
          bVar152 = (bVar97 < bVar113) * bVar113 | (bVar97 >= bVar113) * bVar97;
          bVar156 = (bVar100 < bVar116) * bVar116 | (bVar100 >= bVar116) * bVar100;
          bVar162 = (bVar101 < bVar117) * bVar117 | (bVar101 >= bVar117) * bVar101;
          bVar166 = (bVar104 < bVar120) * bVar120 | (bVar104 >= bVar120) * bVar104;
          bVar170 = (bVar105 < bVar121) * bVar121 | (bVar105 >= bVar121) * bVar105;
          bVar175 = bVar174 - ((bVar124 < bVar108) * bVar124 | (bVar124 >= bVar108) * bVar108);
          bVar179 = bVar178 - ((bVar125 < bVar109) * bVar125 | (bVar125 >= bVar109) * bVar109);
          bVar183 = bVar182 - ((bVar128 < bVar112) * bVar128 | (bVar128 >= bVar112) * bVar112);
          bVar187 = bVar186 - ((bVar129 < bVar113) * bVar129 | (bVar129 >= bVar113) * bVar113);
          bVar89 = bVar88 - ((bVar132 < bVar116) * bVar132 | (bVar132 >= bVar116) * bVar116);
          bVar95 = bVar94 - ((bVar133 < bVar117) * bVar133 | (bVar133 >= bVar117) * bVar117);
          bVar99 = bVar98 - ((bVar136 < bVar120) * bVar136 | (bVar136 >= bVar120) * bVar120);
          bVar103 = bVar102 - ((bVar137 < bVar121) * bVar137 | (bVar137 >= bVar121) * bVar121);
          bVar141 = bVar140 - ((bVar90 < bVar108) * bVar90 | (bVar90 >= bVar108) * bVar108);
          bVar145 = bVar144 - ((bVar91 < bVar109) * bVar91 | (bVar91 >= bVar109) * bVar109);
          bVar149 = bVar148 - ((bVar96 < bVar112) * bVar96 | (bVar96 >= bVar112) * bVar112);
          bVar153 = bVar152 - ((bVar97 < bVar113) * bVar97 | (bVar97 >= bVar113) * bVar113);
          bVar157 = bVar156 - ((bVar100 < bVar116) * bVar100 | (bVar100 >= bVar116) * bVar116);
          bVar163 = bVar162 - ((bVar101 < bVar117) * bVar101 | (bVar101 >= bVar117) * bVar117);
          bVar167 = bVar166 - ((bVar104 < bVar120) * bVar104 | (bVar104 >= bVar120) * bVar120);
          bVar171 = bVar170 - ((bVar105 < bVar121) * bVar105 | (bVar105 >= bVar121) * bVar121);
          bVar106 = (bVar141 < bVar175) * bVar141 | (bVar141 >= bVar175) * bVar175;
          bVar107 = (bVar145 < bVar179) * bVar145 | (bVar145 >= bVar179) * bVar179;
          bVar110 = (bVar149 < bVar183) * bVar149 | (bVar149 >= bVar183) * bVar183;
          bVar111 = (bVar153 < bVar187) * bVar153 | (bVar153 >= bVar187) * bVar187;
          bVar114 = (bVar157 < bVar89) * bVar157 | (bVar157 >= bVar89) * bVar89;
          bVar115 = (bVar163 < bVar95) * bVar163 | (bVar163 >= bVar95) * bVar95;
          bVar118 = (bVar167 < bVar99) * bVar167 | (bVar167 >= bVar99) * bVar99;
          bVar119 = (bVar171 < bVar103) * bVar171 | (bVar171 >= bVar103) * bVar103;
          bVar140 = ((bVar141 < bVar175) * bVar175 | (bVar141 >= bVar175) * bVar141) - bVar106 |
                    -(bVar90 == bVar140) ^ -(bVar108 == bVar174);
          bVar144 = ((bVar145 < bVar179) * bVar179 | (bVar145 >= bVar179) * bVar145) - bVar107 |
                    -(bVar91 == bVar144) ^ -(bVar109 == bVar178);
          bVar148 = ((bVar149 < bVar183) * bVar183 | (bVar149 >= bVar183) * bVar149) - bVar110 |
                    -(bVar96 == bVar148) ^ -(bVar112 == bVar182);
          bVar152 = ((bVar153 < bVar187) * bVar187 | (bVar153 >= bVar187) * bVar153) - bVar111 |
                    -(bVar97 == bVar152) ^ -(bVar113 == bVar186);
          bVar156 = ((bVar157 < bVar89) * bVar89 | (bVar157 >= bVar89) * bVar157) - bVar114 |
                    -(bVar100 == bVar156) ^ -(bVar116 == bVar88);
          bVar162 = ((bVar163 < bVar95) * bVar95 | (bVar163 >= bVar95) * bVar163) - bVar115 |
                    -(bVar101 == bVar162) ^ -(bVar117 == bVar94);
          bVar166 = ((bVar167 < bVar99) * bVar99 | (bVar167 >= bVar99) * bVar167) - bVar118 |
                    -(bVar104 == bVar166) ^ -(bVar120 == bVar98);
          bVar170 = ((bVar171 < bVar103) * bVar103 | (bVar171 >= bVar103) * bVar171) - bVar119 |
                    -(bVar105 == bVar170) ^ -(bVar121 == bVar102);
          bVar141 = -((byte)((bVar141 < bVar140) * bVar141 | (bVar141 >= bVar140) * bVar140) ==
                     bVar141);
          bVar145 = -((byte)((bVar145 < bVar144) * bVar145 | (bVar145 >= bVar144) * bVar144) ==
                     bVar145);
          bVar149 = -((byte)((bVar149 < bVar148) * bVar149 | (bVar149 >= bVar148) * bVar148) ==
                     bVar149);
          bVar153 = -((byte)((bVar153 < bVar152) * bVar153 | (bVar153 >= bVar152) * bVar152) ==
                     bVar153);
          bVar157 = -((byte)((bVar157 < bVar156) * bVar157 | (bVar157 >= bVar156) * bVar156) ==
                     bVar157);
          bVar163 = -((byte)((bVar163 < bVar162) * bVar163 | (bVar163 >= bVar162) * bVar162) ==
                     bVar163);
          bVar167 = -((byte)((bVar167 < bVar166) * bVar167 | (bVar167 >= bVar166) * bVar166) ==
                     bVar167);
          bVar171 = -((byte)((bVar171 < bVar170) * bVar171 | (bVar171 >= bVar170) * bVar170) ==
                     bVar171);
          bVar140 = -((byte)((bVar140 < bVar175) * bVar140 | (bVar140 >= bVar175) * bVar175) ==
                     bVar175) & -(bVar106 == bVar175);
          bVar144 = -((byte)((bVar144 < bVar179) * bVar144 | (bVar144 >= bVar179) * bVar179) ==
                     bVar179) & -(bVar107 == bVar179);
          bVar148 = -((byte)((bVar148 < bVar183) * bVar148 | (bVar148 >= bVar183) * bVar183) ==
                     bVar183) & -(bVar110 == bVar183);
          bVar152 = -((byte)((bVar152 < bVar187) * bVar152 | (bVar152 >= bVar187) * bVar187) ==
                     bVar187) & -(bVar111 == bVar187);
          bVar156 = -((byte)((bVar156 < bVar89) * bVar156 | (bVar156 >= bVar89) * bVar89) == bVar89)
                    & -(bVar114 == bVar89);
          bVar162 = -((byte)((bVar162 < bVar95) * bVar162 | (bVar162 >= bVar95) * bVar95) == bVar95)
                    & -(bVar115 == bVar95);
          bVar166 = -((byte)((bVar166 < bVar99) * bVar166 | (bVar166 >= bVar99) * bVar99) == bVar99)
                    & -(bVar118 == bVar99);
          bVar170 = -((byte)((bVar170 < bVar103) * bVar170 | (bVar170 >= bVar103) * bVar103) ==
                     bVar103) & -(bVar119 == bVar103);
          uVar5 = *(undefined8 *)(iVar76 + uVar73);
          *(ulonglong *)(local_30 + uVar73) =
               CONCAT17((char)((ulonglong)uVar5 >> 0x38) -
                        (~bVar170 & (~bVar171 & bVar121 | bVar137 & bVar171) | bVar105 & bVar170),
                        CONCAT16((char)((ulonglong)uVar5 >> 0x30) -
                                 (~bVar166 & (~bVar167 & bVar120 | bVar136 & bVar167) |
                                 bVar104 & bVar166),
                                 CONCAT15((char)((ulonglong)uVar5 >> 0x28) -
                                          (~bVar162 & (~bVar163 & bVar117 | bVar133 & bVar163) |
                                          bVar101 & bVar162),
                                          CONCAT14((char)((ulonglong)uVar5 >> 0x20) -
                                                   (~bVar156 &
                                                    (~bVar157 & bVar116 | bVar132 & bVar157) |
                                                   bVar100 & bVar156),
                                                   CONCAT13((char)((ulonglong)uVar5 >> 0x18) -
                                                            (~bVar152 &
                                                             (~bVar153 & bVar113 | bVar129 & bVar153
                                                             ) | bVar97 & bVar152),
                                                            CONCAT12((char)((ulonglong)uVar5 >> 0x10
                                                                           ) - (~bVar148 &
                                                                                (~bVar149 & bVar112
                                                                                | bVar128 & bVar149)
                                                                               | bVar96 & bVar148),
                                                                     CONCAT11((char)((ulonglong)
                                                                                     uVar5 >> 8) -
                                                                              (~bVar144 &
                                                                               (~bVar145 & bVar109 |
                                                                               bVar125 & bVar145) |
                                                                              bVar91 & bVar144),
                                                                              (char)uVar5 -
                                                                              (~bVar140 &
                                                                               (~bVar141 & bVar108 |
                                                                               bVar124 & bVar141) |
                                                                              bVar90 & bVar140))))))
                                ));
          uVar73 = uVar73 + 8;
        } while (uVar72 != uVar73);
        if (uVar81 == uVar72) goto LAB_100bab0d;
      }
      do {
        bVar90 = *(byte *)(iVar84 + uVar72);
        bVar91 = *(byte *)(iVar87 + uVar72);
        bVar96 = *(byte *)(iVar82 + uVar72);
        bVar97 = bVar96 - bVar91;
        if (bVar96 < bVar91) {
          bVar97 = bVar91 - bVar96;
        }
        bVar100 = bVar90 - bVar91;
        if (bVar90 < bVar91) {
          bVar100 = bVar91 - bVar90;
        }
        bVar101 = bVar97 - bVar100;
        if (bVar97 < bVar100) {
          bVar101 = bVar100 - bVar97;
        }
        if (bVar90 < bVar91 != bVar91 < bVar96) {
          bVar101 = 0xff;
        }
        if (bVar100 <= bVar101) {
          bVar91 = bVar96;
        }
        if (bVar101 < bVar97) {
          bVar90 = bVar91;
        }
        if (bVar100 < bVar97) {
          bVar90 = bVar91;
        }
        iVar82 = iVar82 + 1;
        iVar84 = iVar84 + 1;
        pcVar74 = (char *)(iVar76 + uVar72);
        iVar76 = iVar76 + 1;
        *(byte *)(local_30 + uVar72) = *pcVar74 - bVar90;
        local_30 = local_30 + 1;
        uVar81 = uVar81 - 1;
        iVar87 = iVar87 + 1;
      } while (uVar72 != uVar81);
    }
LAB_100bab0d:
    uVar72 = 0;
    do {
      *(char *)((int)param_8 + uVar72) =
           *(char *)((int)param_6 + uVar72) - *(char *)(param_4 + uVar72);
      uVar72 = uVar72 + 1;
    } while (param_2 != uVar72);
  }
  return param_1;
}
