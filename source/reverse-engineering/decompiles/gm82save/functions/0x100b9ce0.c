// rea decompile_all
// name: FUN_100b9ce0
// address: 0x100b9ce0
// body: available
// range: 0x100b9ce0-0x100b9d8a inclusive
// range: 0x100b9d90-0x100ba54e inclusive
// range: 0x100ba550-0x100ba733 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __fastcall
FUN_100b9ce0(uint param_1,int param_2,byte param_3,int param_4,uint param_5,void *param_6,
            int param_7,byte *param_8,uint param_9)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined2 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [14];
  ulonglong uVar16;
  undefined1 auVar17 [14];
  undefined1 auVar18 [13];
  undefined1 auVar19 [13];
  uint5 uVar20;
  ulonglong uVar21;
  undefined1 auVar22 [14];
  undefined1 auVar23 [14];
  undefined1 auVar24 [14];
  undefined1 auVar25 [14];
  undefined1 auVar26 [14];
  undefined1 auVar27 [14];
  undefined1 auVar28 [14];
  undefined1 auVar29 [14];
  undefined1 auVar30 [14];
  undefined1 auVar31 [14];
  undefined1 auVar32 [15];
  undefined1 auVar33 [14];
  undefined1 auVar34 [14];
  undefined1 auVar35 [13];
  undefined1 auVar36 [14];
  undefined1 auVar37 [14];
  undefined1 auVar38 [14];
  undefined1 auVar39 [14];
  undefined1 auVar40 [14];
  undefined1 auVar41 [14];
  undefined1 auVar42 [14];
  undefined1 auVar43 [14];
  undefined1 auVar44 [14];
  undefined1 auVar45 [14];
  undefined1 auVar46 [15];
  undefined1 auVar47 [15];
  undefined1 auVar48 [15];
  undefined1 auVar49 [15];
  undefined1 auVar50 [15];
  undefined1 auVar51 [15];
  undefined1 auVar52 [15];
  undefined1 auVar53 [15];
  undefined1 auVar54 [15];
  undefined1 auVar55 [15];
  undefined1 auVar56 [15];
  undefined1 auVar57 [15];
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  undefined1 auVar78 [15];
  unkuint9 Var79;
  undefined1 auVar80 [11];
  undefined1 auVar81 [13];
  undefined1 auVar82 [15];
  unkuint9 Var83;
  undefined1 auVar84 [11];
  undefined1 auVar85 [13];
  undefined1 auVar86 [14];
  undefined1 auVar87 [14];
  undefined1 auVar88 [13];
  undefined1 auVar89 [13];
  undefined1 auVar90 [15];
  undefined1 auVar91 [15];
  undefined1 auVar92 [13];
  undefined1 auVar93 [13];
  undefined1 auVar94 [15];
  undefined1 auVar95 [15];
  undefined1 auVar96 [13];
  undefined1 auVar97 [13];
  undefined1 auVar98 [15];
  undefined1 auVar99 [15];
  undefined1 auVar100 [13];
  undefined1 auVar101 [13];
  undefined1 auVar102 [15];
  undefined1 auVar103 [15];
  undefined1 auVar104 [13];
  undefined1 auVar105 [13];
  undefined1 auVar106 [15];
  undefined1 auVar107 [15];
  undefined1 auVar108 [13];
  undefined3 uVar109;
  undefined3 uVar110;
  undefined8 uVar111;
  undefined1 auVar112 [15];
  undefined1 auVar113 [15];
  undefined8 uVar114;
  undefined1 auVar115 [15];
  undefined1 auVar116 [15];
  undefined1 auVar117 [15];
  undefined1 auVar118 [15];
  undefined1 auVar119 [15];
  undefined1 auVar120 [15];
  undefined1 auVar121 [15];
  undefined1 auVar122 [15];
  undefined1 auVar123 [15];
  undefined1 auVar124 [15];
  undefined1 auVar125 [15];
  undefined1 auVar126 [15];
  undefined5 uVar127;
  undefined5 uVar128;
  undefined1 auVar129 [12];
  undefined8 uVar130;
  undefined1 auVar131 [12];
  undefined8 uVar132;
  undefined1 auVar133 [13];
  undefined1 auVar134 [13];
  undefined1 auVar135 [14];
  ulonglong uVar136;
  undefined1 auVar137 [14];
  ulonglong uVar138;
  uint6 uVar139;
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
  uint uVar150;
  int iVar151;
  uint uVar152;
  byte *pbVar153;
  uint uVar154;
  uint uVar155;
  undefined4 extraout_ECX;
  byte bVar156;
  byte bVar161;
  byte bVar162;
  uint uVar157;
  uint uVar158;
  int iVar159;
  byte *pbVar160;
  uint uVar163;
  byte *pbVar164;
  uint uVar165;
  uint uVar166;
  uint uVar167;
  bool bVar168;
  byte bVar170;
  byte bVar171;
  byte bVar173;
  byte bVar174;
  byte bVar175;
  byte bVar176;
  byte bVar177;
  undefined1 auVar169 [15];
  longlong lVar172;
  longlong lVar180;
  longlong lVar181;
  longlong lVar182;
  byte bVar183;
  byte bVar185;
  uint uVar184;
  byte bVar186;
  byte bVar187;
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
  longlong lVar188;
  longlong lVar189;
  longlong lVar190;
  byte bVar203;
  byte bVar204;
  byte bVar205;
  byte bVar206;
  ushort uVar207;
  ushort uVar208;
  ushort uVar209;
  uint local_7c;
  uint local_40;
  byte bVar178;
  byte bVar179;

  uVar157 = (uint)param_3;
  if (param_2 != 0) goto LAB_100ba703;
  uVar163 = param_9 & 0x7fffffe0;
  uVar150 = param_9 & 0x1f;
  pbVar153 = param_8 + uVar163;
  pbVar2 = pbVar153 + uVar150;
  if (uVar163 != 0) {
    local_7c = 0xffffffff;
    uVar166 = param_9 & 0x1c;
    iVar151 = 0;
    uVar155 = 0;
    uVar167 = 0xffffffff;
    do {
      bVar156 = (&DAT_10150890)[iVar151];
      FUN_100ba740((uint)bVar156,uVar157,param_7,param_4,param_5,param_6,param_7,param_8,param_9);
      uVar154 = 0;
      uVar152 = 0;
      iVar159 = -(param_9 & 0xffffffe0);
      pbVar164 = param_8;
      do {
        bVar58 = *pbVar164;
        bVar59 = pbVar164[1];
        bVar60 = pbVar164[2];
        bVar61 = pbVar164[3];
        bVar62 = pbVar164[4];
        bVar63 = pbVar164[5];
        bVar64 = pbVar164[6];
        bVar5 = pbVar164[7];
        bVar6 = pbVar164[8];
        bVar7 = pbVar164[9];
        bVar8 = pbVar164[10];
        bVar9 = pbVar164[0xb];
        bVar170 = pbVar164[0xc];
        bVar171 = pbVar164[0xd];
        bVar65 = pbVar164[0xe];
        bVar66 = pbVar164[0xf];
        bVar67 = pbVar164[0x10];
        bVar68 = pbVar164[0x11];
        bVar69 = pbVar164[0x12];
        bVar70 = pbVar164[0x13];
        bVar71 = pbVar164[0x14];
        bVar72 = pbVar164[0x15];
        bVar73 = pbVar164[0x16];
        bVar173 = pbVar164[0x17];
        bVar174 = pbVar164[0x18];
        bVar175 = pbVar164[0x19];
        bVar176 = pbVar164[0x1a];
        bVar177 = pbVar164[0x1b];
        bVar74 = pbVar164[0x1c];
        bVar75 = pbVar164[0x1d];
        bVar76 = pbVar164[0x1e];
        bVar77 = pbVar164[0x1f];
        pbVar164 = pbVar164 + 0x20;
        auVar169 = SUB1615((undefined1  [16])0x0,1);
        bVar162 = -bVar58;
        bVar161 = -bVar59;
        bVar206 = -bVar60;
        bVar204 = -bVar61;
        bVar183 = -bVar62;
        bVar185 = -bVar63;
        bVar203 = -bVar64;
        bVar205 = -bVar5;
        bVar4 = -bVar6;
        bVar191 = auVar169[8] - bVar7;
        bVar193 = auVar169[9] - bVar8;
        bVar195 = auVar169[10] - bVar9;
        bVar197 = auVar169[0xb] - bVar170;
        bVar199 = auVar169[0xc] - bVar171;
        bVar201 = auVar169[0xd] - bVar65;
        bVar202 = auVar169[0xe] - bVar66;
        bVar186 = (bVar5 < bVar205) * bVar5 | (bVar5 >= bVar205) * bVar205;
        bVar187 = (bVar6 < bVar4) * bVar6 | (bVar6 >= bVar4) * bVar4;
        uVar207 = CONCAT11(bVar187,bVar186);
        bVar192 = (bVar7 < bVar191) * bVar7 | (bVar7 >= bVar191) * bVar191;
        uVar109 = CONCAT12(bVar192,uVar207);
        bVar194 = (bVar8 < bVar193) * bVar8 | (bVar8 >= bVar193) * bVar193;
        uVar165 = CONCAT13(bVar194,uVar109);
        bVar196 = (bVar9 < bVar195) * bVar9 | (bVar9 >= bVar195) * bVar195;
        uVar127 = CONCAT14(bVar196,uVar165);
        bVar198 = (bVar170 < bVar197) * bVar170 | (bVar170 >= bVar197) * bVar197;
        auVar135[5] = bVar198;
        auVar135._0_5_ = uVar127;
        bVar200 = (bVar171 < bVar199) * bVar171 | (bVar171 >= bVar199) * bVar199;
        auVar169 = SUB1615((undefined1  [16])0x0,1);
        bVar205 = -bVar67;
        bVar4 = -bVar68;
        bVar5 = -bVar69;
        bVar6 = -bVar70;
        bVar7 = -bVar71;
        bVar8 = -bVar72;
        bVar9 = -bVar73;
        bVar170 = -bVar173;
        bVar171 = -bVar174;
        bVar191 = auVar169[8] - bVar175;
        bVar193 = auVar169[9] - bVar176;
        bVar195 = auVar169[10] - bVar177;
        bVar197 = auVar169[0xb] - bVar74;
        bVar199 = auVar169[0xc] - bVar75;
        bVar178 = auVar169[0xd] - bVar76;
        bVar179 = auVar169[0xe] - bVar77;
        bVar170 = (bVar173 < bVar170) * bVar173 | (bVar173 >= bVar170) * bVar170;
        bVar171 = (bVar174 < bVar171) * bVar174 | (bVar174 >= bVar171) * bVar171;
        uVar208 = CONCAT11(bVar171,bVar170);
        bVar173 = (bVar175 < bVar191) * bVar175 | (bVar175 >= bVar191) * bVar191;
        uVar110 = CONCAT12(bVar173,uVar208);
        bVar174 = (bVar176 < bVar193) * bVar176 | (bVar176 >= bVar193) * bVar193;
        uVar158 = CONCAT13(bVar174,uVar110);
        bVar175 = (bVar177 < bVar195) * bVar177 | (bVar177 >= bVar195) * bVar195;
        uVar128 = CONCAT14(bVar175,uVar158);
        bVar176 = (bVar74 < bVar197) * bVar74 | (bVar74 >= bVar197) * bVar197;
        auVar137[5] = bVar176;
        auVar137._0_5_ = uVar128;
        bVar177 = (bVar75 < bVar199) * bVar75 | (bVar75 >= bVar199) * bVar199;
        uVar184 = CONCAT13(0,CONCAT12(bVar192,(ushort)bVar187));
        auVar135._6_8_ = 0;
        auVar13[0xe] = bVar186;
        auVar13._0_14_ = auVar135 << 0x38;
        uVar136 = CONCAT26(auVar13._13_2_,
                           CONCAT15((bVar64 < bVar203) * bVar64 | (bVar64 >= bVar203) * bVar203,
                                    uVar127));
        auVar129._4_8_ = 0;
        auVar129._0_4_ = uVar165;
        auVar32._12_3_ = (int3)(uVar136 >> 0x28);
        auVar32._0_12_ = auVar129 << 0x38;
        uVar130 = CONCAT44(auVar32._11_4_,
                           CONCAT13((bVar63 < bVar185) * bVar63 | (bVar63 >= bVar185) * bVar185,
                                    uVar109));
        auVar47._10_5_ = (int5)((ulonglong)uVar130 >> 0x18);
        auVar47._0_10_ = (unkuint10)uVar207 << 0x38;
        uVar111 = CONCAT62(auVar47._9_6_,
                           CONCAT11((bVar62 < bVar183) * bVar62 | (bVar62 >= bVar183) * bVar183,
                                    bVar186));
        auVar78._7_8_ = 0;
        auVar78._0_7_ = (uint7)((ulonglong)uVar111 >> 8);
        Var79 = CONCAT81(SUB158(auVar78 << 0x40,7),
                         (bVar61 < bVar204) * bVar61 | (bVar61 >= bVar204) * bVar204);
        auVar112._9_6_ = 0;
        auVar112._0_9_ = Var79;
        auVar80._1_10_ = SUB1510(auVar112 << 0x30,5);
        auVar80[0] = (bVar60 < bVar206) * bVar60 | (bVar60 >= bVar206) * bVar206;
        auVar113._11_4_ = 0;
        auVar113._0_11_ = auVar80;
        auVar81._1_12_ = SUB1512(auVar113 << 0x20,3);
        auVar81[0] = (bVar59 < bVar161) * bVar59 | (bVar59 >= bVar161) * bVar161;
        auVar57[1] = 0;
        auVar57[0] = (bVar58 < bVar162) * bVar58 | (bVar58 >= bVar162) * bVar162;
        auVar57._2_13_ = auVar81;
        uVar165 = CONCAT13(0,CONCAT12(bVar173,(ushort)bVar171));
        auVar137._6_8_ = 0;
        auVar12[0xe] = bVar170;
        auVar12._0_14_ = auVar137 << 0x38;
        uVar138 = CONCAT26(auVar12._13_2_,
                           CONCAT15((bVar73 < bVar9) * bVar73 | (bVar73 >= bVar9) * bVar9,uVar128));
        auVar131._4_8_ = 0;
        auVar131._0_4_ = uVar158;
        auVar14._12_3_ = (int3)(uVar138 >> 0x28);
        auVar14._0_12_ = auVar131 << 0x38;
        uVar132 = CONCAT44(auVar14._11_4_,
                           CONCAT13((bVar72 < bVar8) * bVar72 | (bVar72 >= bVar8) * bVar8,uVar110));
        auVar46._10_5_ = (int5)((ulonglong)uVar132 >> 0x18);
        auVar46._0_10_ = (unkuint10)uVar208 << 0x38;
        uVar114 = CONCAT62(auVar46._9_6_,
                           CONCAT11((bVar71 < bVar7) * bVar71 | (bVar71 >= bVar7) * bVar7,bVar170));
        auVar82._7_8_ = 0;
        auVar82._0_7_ = (uint7)((ulonglong)uVar114 >> 8);
        Var83 = CONCAT81(SUB158(auVar82 << 0x40,7),
                         (bVar70 < bVar6) * bVar70 | (bVar70 >= bVar6) * bVar6);
        auVar115._9_6_ = 0;
        auVar115._0_9_ = Var83;
        auVar84._1_10_ = SUB1510(auVar115 << 0x30,5);
        auVar84[0] = (bVar69 < bVar5) * bVar69 | (bVar69 >= bVar5) * bVar5;
        auVar116._11_4_ = 0;
        auVar116._0_11_ = auVar84;
        auVar85._1_12_ = SUB1512(auVar116 << 0x20,3);
        auVar85[0] = (bVar68 < bVar4) * bVar68 | (bVar68 >= bVar4) * bVar4;
        auVar56[1] = 0;
        auVar56[0] = (bVar67 < bVar205) * bVar67 | (bVar67 >= bVar205) * bVar205;
        auVar56._2_13_ = auVar85;
        uVar207 = (ushort)((ulonglong)uVar130 >> 0x18);
        uVar208 = (ushort)((ulonglong)uVar132 >> 0x18);
        auVar10._10_2_ = 0;
        auVar10._0_10_ = auVar56._0_10_;
        auVar10._12_2_ = (short)Var83;
        uVar139 = CONCAT42(auVar10._10_4_,auVar84._0_2_);
        auVar86._6_8_ = 0;
        auVar86._0_6_ = uVar139;
        auVar15._4_2_ = auVar85._0_2_;
        auVar15._0_4_ = auVar56._0_4_;
        auVar15._6_8_ = SUB148(auVar86 << 0x40,6);
        auVar33._4_10_ = auVar15._4_10_;
        auVar33._0_4_ = auVar56._0_4_ & 0xffff;
        uVar209 = (ushort)Var79;
        auVar11._10_2_ = 0;
        auVar11._0_10_ = auVar57._0_10_;
        auVar11._12_2_ = uVar209;
        auVar87._2_4_ = auVar11._10_4_;
        auVar87._0_2_ = auVar80._0_2_;
        auVar87._6_8_ = 0;
        uVar16 = SUB148(auVar87 << 0x40,6);
        auVar17._4_2_ = auVar81._0_2_;
        auVar17._0_4_ = auVar57._0_4_;
        auVar17._6_8_ = uVar16;
        auVar34._4_10_ = auVar17._4_10_;
        auVar34._0_4_ = auVar57._0_4_ & 0xffff;
        auVar18[0xc] = bVar175;
        auVar18._0_12_ = ZEXT112(bVar176) << 0x40;
        auVar19._10_3_ = auVar18._10_3_;
        auVar19._0_10_ = (unkuint10)bVar174 << 0x40;
        uVar20 = auVar19._8_5_;
        auVar88._5_8_ = 0;
        auVar88._0_5_ = uVar20;
        auVar35[4] = bVar173;
        auVar35._0_4_ = uVar165;
        auVar35[5] = 0;
        auVar35._6_7_ = SUB137(auVar88 << 0x40,6);
        auVar133[0xc] = bVar196;
        auVar133._0_12_ = ZEXT112(bVar198) << 0x40;
        auVar134._10_3_ = auVar133._10_3_;
        auVar134._0_10_ = (unkuint10)bVar194 << 0x40;
        uVar21 = SUB148(ZEXT514(auVar134._8_5_) << 0x40,6);
        auVar22[4] = bVar192;
        auVar22._0_4_ = uVar184;
        auVar22[5] = 0;
        auVar22._6_8_ = uVar21;
        auVar36._4_10_ = auVar22._4_10_;
        auVar36._0_4_ = uVar184 & 0xffff;
        lVar180 = (ulonglong)(uVar20 >> 0x20) + (ulonglong)bVar196 +
                  (ulonglong)(auVar10._10_4_ >> 0x10) + (ulonglong)uVar209 +
                  (ulonglong)(byte)((bVar77 < bVar179) * bVar77 | (bVar77 >= bVar179) * bVar179) +
                  (ulonglong)(byte)((bVar66 < bVar202) * bVar66 | (bVar66 >= bVar202) * bVar202) +
                  (ulonglong)bVar170 + (ulonglong)bVar186 +
                  (ulonglong)auVar35._4_4_ + (ulonglong)auVar22._4_4_ +
                  (ulonglong)auVar15._4_4_ + (ulonglong)auVar17._4_4_ +
                  (ulonglong)bVar177 + (ulonglong)bVar200 + (ulonglong)uVar208 + (ulonglong)uVar207
                  + ((ulonglong)uVar20 & 0xffffffff) + (uVar21 >> 0x10 & 0xffffffff) +
                    ((ulonglong)uVar139 & 0xffffffff) + (uVar16 >> 0x10 & 0xffffffff) +
                    (ulonglong)(byte)((bVar76 < bVar178) * bVar76 | (bVar76 >= bVar178) * bVar178) +
                    (ulonglong)(byte)((bVar65 < bVar201) * bVar65 | (bVar65 >= bVar201) * bVar201) +
                    (uVar138 >> 0x28 & 0xffff) + (uVar136 >> 0x28 & 0xffff) +
                    (ulonglong)(uVar165 & 0xffff) + (auVar36._0_8_ & 0xffffffff) +
                    (auVar33._0_8_ & 0xffffffff) + (auVar34._0_8_ & 0xffffffff) +
                    ((ulonglong)CONCAT14(bVar177,(uint)bVar176) & 0xffffffff) +
                    ((ulonglong)CONCAT14(bVar200,(uint)bVar198) & 0xffffffff) +
                    ((ulonglong)CONCAT24(uVar208,(uint)(ushort)((ulonglong)uVar114 >> 8)) &
                    0xffffffff) +
                    ((ulonglong)CONCAT24(uVar207,(uint)(ushort)((ulonglong)uVar111 >> 8)) &
                    0xffffffff);
        uVar165 = (uint)lVar180;
        uVar158 = (uint)((ulonglong)lVar180 >> 0x20);
        bVar168 = CARRY4(uVar154,uVar165);
        uVar154 = uVar154 + uVar165;
        uVar165 = (uint)bVar168;
        bVar168 = CARRY4(uVar152,uVar158);
        uVar158 = uVar152 + uVar158;
        uVar152 = uVar158 + uVar165;
        if (bVar168 || CARRY4(uVar158,uVar165)) {
          uVar152 = 0xffffffff;
          uVar154 = 0xffffffff;
        }
        iVar159 = iVar159 + 0x20;
      } while (iVar159 != 0);
      if (uVar150 != 0) {
        lVar180 = 0;
        pbVar164 = pbVar153;
        if (uVar150 < 4) {
LAB_100ba090:
          do {
            bVar162 = *pbVar164;
            pbVar164 = pbVar164 + 1;
            bVar161 = (char)bVar162 >> 7;
            uVar165 = (uint)(byte)((bVar162 ^ bVar161) - bVar161);
            lVar172 = lVar180 + (ulonglong)uVar165;
            lVar180 = lVar180 + (ulonglong)uVar165;
          } while (pbVar164 != pbVar2);
        }
        else {
          lVar180 = 0;
          lVar172 = 0;
          lVar181 = 0;
          lVar182 = 0;
          pbVar164 = param_8 + uVar163 + 2;
          uVar165 = uVar166;
          do {
            pbVar160 = pbVar164 + -2;
            uVar3 = *(undefined2 *)pbVar164;
            pbVar164 = pbVar164 + 4;
            uVar165 = uVar165 - 4;
            bVar183 = (byte)*(undefined2 *)pbVar160;
            bVar162 = -bVar183;
            bVar185 = (byte)((ushort)*(undefined2 *)pbVar160 >> 8);
            bVar161 = -bVar185;
            bVar203 = (byte)uVar3;
            bVar206 = -bVar203;
            bVar205 = (byte)((ushort)uVar3 >> 8);
            bVar204 = -bVar205;
            auVar140._8_7_ = 0;
            auVar140._0_8_ = SUB158(ZEXT715(0) << 0x40,7);
            auVar141._10_5_ = 0;
            auVar141._0_10_ = SUB1510(auVar140 << 0x38,5);
            auVar89._1_12_ = SUB1512(auVar141 << 0x28,3);
            auVar89[0] = (bVar185 < bVar161) * bVar185 | (bVar185 >= bVar161) * bVar161;
            auVar117._8_7_ = 0;
            auVar117._0_8_ = SUB158(ZEXT815(0),7);
            auVar90._9_6_ = 0;
            auVar90._0_9_ = SUB159(auVar117 << 0x38,6);
            auVar118._10_5_ = 0;
            auVar118._0_10_ = SUB1510(auVar90 << 0x30,5);
            auVar91._11_4_ = 0;
            auVar91._0_11_ = SUB1511(auVar118 << 0x28,4);
            auVar92._1_12_ = SUB1512(auVar91 << 0x20,3);
            auVar92[0] = (bVar205 < bVar204) * bVar205 | (bVar205 >= bVar204) * bVar204;
            auVar48[1] = 0;
            auVar48[0] = (bVar203 < bVar206) * bVar203 | (bVar203 >= bVar206) * bVar206;
            auVar48._2_13_ = auVar92;
            auVar23._4_2_ = auVar92._0_2_;
            auVar23._0_4_ = auVar48._0_4_;
            auVar23._6_8_ = SUB148(ZEXT214(0) << 0x40,6);
            auVar37._4_10_ = auVar23._4_10_;
            auVar37._0_4_ = auVar48._0_4_ & 0xffff;
            lVar181 = lVar181 + (ulonglong)
                                (byte)((bVar183 < bVar162) * bVar183 |
                                      (bVar183 >= bVar162) * bVar162);
            lVar182 = lVar182 + (ulonglong)
                                (uint)CONCAT82(SUB148(ZEXT214(0) << 0x40,6),auVar89._0_2_);
            lVar180 = lVar180 + (auVar37._0_8_ & 0xffffffff);
            lVar172 = lVar172 + (ulonglong)auVar23._4_4_;
          } while (uVar165 != 0);
          lVar180 = lVar172 + lVar182 + lVar180 + lVar181;
          pbVar164 = pbVar153 + uVar166;
          lVar172 = lVar180;
          if (uVar150 != uVar166) goto LAB_100ba090;
        }
        uVar158 = (uint)((ulonglong)lVar172 >> 0x20);
        bVar168 = CARRY4(uVar154,(uint)lVar172);
        uVar154 = uVar154 + (uint)lVar172;
        uVar165 = (uint)bVar168;
        bVar168 = CARRY4(uVar152,uVar158);
        uVar158 = uVar152 + uVar158;
        uVar152 = uVar158 + uVar165;
        if (bVar168 || CARRY4(uVar158,uVar165)) {
          uVar152 = 0xffffffff;
          uVar154 = 0xffffffff;
        }
      }
      iVar151 = iVar151 + 1;
      uVar158 = uVar167;
      uVar165 = local_7c;
      if (uVar152 < uVar167 || uVar152 - uVar167 < (uint)(uVar154 < local_7c)) {
        uVar158 = uVar152;
        uVar165 = uVar154;
      }
      param_1 = (uint)bVar156;
      if (uVar167 < uVar152 || uVar167 - uVar152 < (uint)(local_7c < uVar154)) {
        param_1 = uVar155;
      }
      uVar155 = param_1;
      uVar167 = uVar158;
      local_7c = uVar165;
    } while (iVar151 != 4);
    if ((char)param_1 == '\x04') {
      return 4;
    }
    goto LAB_100ba703;
  }
  FUN_100ba740(1,uVar157,param_7,param_4,param_5,param_6,param_7,param_8,param_9);
  if (uVar150 == 0) {
    FUN_100ba740(2,uVar157,param_7,param_4,param_5,param_6,param_7,param_8,param_9);
    FUN_100ba740(3,uVar157,param_7,param_4,param_5,param_6,param_7,param_8,param_9);
    param_1 = CONCAT31((int3)((uint)extraout_ECX >> 8),4);
    goto LAB_100ba703;
  }
  lVar180 = 0;
  pbVar164 = pbVar153;
  if (uVar150 < 4) {
LAB_100ba290:
    do {
      pbVar160 = pbVar164 + 1;
      bVar156 = (char)*pbVar164 >> 7;
      uVar163 = (uint)(byte)((*pbVar164 ^ bVar156) - bVar156);
      lVar172 = lVar180 + (ulonglong)uVar163;
      lVar180 = lVar180 + (ulonglong)uVar163;
      pbVar164 = pbVar160;
    } while (pbVar160 != pbVar2);
    FUN_100ba740(2,uVar157,param_7,param_4,param_5,param_6,param_7,param_8,param_9);
    lVar180 = 0;
    pbVar164 = pbVar153;
    if (3 < uVar150) goto LAB_100ba2ff;
LAB_100ba400:
    do {
      pbVar160 = pbVar164 + 1;
      bVar156 = (char)*pbVar164 >> 7;
      uVar163 = (uint)(byte)((*pbVar164 ^ bVar156) - bVar156);
      lVar181 = lVar180 + (ulonglong)uVar163;
      lVar180 = lVar180 + (ulonglong)uVar163;
      pbVar164 = pbVar160;
    } while (pbVar160 != pbVar2);
    FUN_100ba740(3,uVar157,param_7,param_4,param_5,param_6,param_7,param_8,param_9);
    lVar180 = 0;
    pbVar164 = pbVar153;
    if (3 < uVar150) goto LAB_100ba472;
LAB_100ba550:
    do {
      pbVar160 = pbVar164 + 1;
      bVar156 = (char)*pbVar164 >> 7;
      uVar163 = (uint)(byte)((*pbVar164 ^ bVar156) - bVar156);
      lVar188 = lVar180 + (ulonglong)uVar163;
      lVar182 = lVar180 + (ulonglong)uVar163;
      lVar180 = lVar180 + (ulonglong)uVar163;
      pbVar164 = pbVar160;
    } while (pbVar160 != pbVar2);
    FUN_100ba740(4,uVar157,param_7,param_4,param_5,param_6,param_7,param_8,param_9);
    if (3 < uVar150) goto LAB_100ba5b7;
    lVar180 = 0;
    lVar182 = lVar188;
LAB_100ba660:
    do {
      bVar156 = *pbVar153;
      pbVar153 = pbVar153 + 1;
      bVar162 = (char)bVar156 >> 7;
      uVar150 = (uint)(byte)((bVar156 ^ bVar162) - bVar162);
      lVar188 = lVar180 + (ulonglong)uVar150;
      lVar180 = lVar180 + (ulonglong)uVar150;
    } while (pbVar153 != pbVar2);
  }
  else {
    lVar181 = 0;
    lVar182 = 0;
    lVar180 = 0;
    lVar172 = 0;
    uVar155 = param_9 & 0x1c;
    pbVar160 = param_8 + 2;
    pbVar164 = pbVar153 + uVar155;
    uVar163 = uVar155;
    do {
      pbVar1 = pbVar160 + -2;
      uVar3 = *(undefined2 *)pbVar160;
      pbVar160 = pbVar160 + 4;
      uVar163 = uVar163 - 4;
      bVar204 = (byte)*(undefined2 *)pbVar1;
      bVar156 = -bVar204;
      bVar183 = (byte)((ushort)*(undefined2 *)pbVar1 >> 8);
      bVar162 = -bVar183;
      bVar185 = (byte)uVar3;
      bVar161 = -bVar185;
      bVar203 = (byte)((ushort)uVar3 >> 8);
      bVar206 = -bVar203;
      auVar142._8_7_ = 0;
      auVar142._0_8_ = SUB158(ZEXT715(0) << 0x40,7);
      auVar143._10_5_ = 0;
      auVar143._0_10_ = SUB1510(auVar142 << 0x38,5);
      auVar93._1_12_ = SUB1512(auVar143 << 0x28,3);
      auVar93[0] = (bVar183 < bVar162) * bVar183 | (bVar183 >= bVar162) * bVar162;
      auVar169[1] = 0;
      auVar169[0] = (bVar204 < bVar156) * bVar204 | (bVar204 >= bVar156) * bVar156;
      auVar169._2_13_ = auVar93;
      auVar24._4_2_ = auVar93._0_2_;
      auVar24._0_4_ = auVar169._0_4_;
      auVar24._6_8_ = SUB148(ZEXT214(0) << 0x40,6);
      auVar38._4_10_ = auVar24._4_10_;
      auVar38._0_4_ = auVar169._0_4_ & 0xffff;
      auVar119._8_7_ = 0;
      auVar119._0_8_ = SUB158(ZEXT815(0),7);
      auVar94._9_6_ = 0;
      auVar94._0_9_ = SUB159(auVar119 << 0x38,6);
      auVar120._10_5_ = 0;
      auVar120._0_10_ = SUB1510(auVar94 << 0x30,5);
      auVar95._11_4_ = 0;
      auVar95._0_11_ = SUB1511(auVar120 << 0x28,4);
      auVar96._1_12_ = SUB1512(auVar95 << 0x20,3);
      auVar96[0] = (bVar203 < bVar206) * bVar203 | (bVar203 >= bVar206) * bVar206;
      auVar49[1] = 0;
      auVar49[0] = (bVar185 < bVar161) * bVar185 | (bVar185 >= bVar161) * bVar161;
      auVar49._2_13_ = auVar96;
      auVar25._4_2_ = auVar96._0_2_;
      auVar25._0_4_ = auVar49._0_4_;
      auVar25._6_8_ = SUB148(ZEXT214(0) << 0x40,6);
      auVar39._4_10_ = auVar25._4_10_;
      auVar39._0_4_ = auVar49._0_4_ & 0xffff;
      lVar181 = lVar181 + (auVar38._0_8_ & 0xffffffff);
      lVar182 = lVar182 + (ulonglong)auVar24._4_4_;
      lVar180 = lVar180 + (auVar39._0_8_ & 0xffffffff);
      lVar172 = lVar172 + (ulonglong)auVar25._4_4_;
    } while (uVar163 != 0);
    lVar180 = lVar172 + lVar182 + lVar180 + lVar181;
    if (uVar150 != uVar155) goto LAB_100ba290;
    FUN_100ba740(2,uVar157,param_7,param_4,param_5,param_6,param_7,param_8,param_9);
    lVar172 = lVar180;
LAB_100ba2ff:
    lVar182 = 0;
    lVar188 = 0;
    lVar180 = 0;
    lVar181 = 0;
    uVar155 = param_9 & 0x1c;
    pbVar160 = param_8 + 2;
    pbVar164 = pbVar153 + uVar155;
    uVar163 = uVar155;
    do {
      pbVar1 = pbVar160 + -2;
      uVar3 = *(undefined2 *)pbVar160;
      pbVar160 = pbVar160 + 4;
      uVar163 = uVar163 - 4;
      bVar204 = (byte)*(undefined2 *)pbVar1;
      bVar156 = -bVar204;
      bVar183 = (byte)((ushort)*(undefined2 *)pbVar1 >> 8);
      bVar162 = -bVar183;
      bVar185 = (byte)uVar3;
      bVar161 = -bVar185;
      bVar203 = (byte)((ushort)uVar3 >> 8);
      bVar206 = -bVar203;
      auVar144._8_7_ = 0;
      auVar144._0_8_ = SUB158(ZEXT715(0) << 0x40,7);
      auVar145._10_5_ = 0;
      auVar145._0_10_ = SUB1510(auVar144 << 0x38,5);
      auVar97._1_12_ = SUB1512(auVar145 << 0x28,3);
      auVar97[0] = (bVar183 < bVar162) * bVar183 | (bVar183 >= bVar162) * bVar162;
      auVar50[1] = 0;
      auVar50[0] = (bVar204 < bVar156) * bVar204 | (bVar204 >= bVar156) * bVar156;
      auVar50._2_13_ = auVar97;
      auVar26._4_2_ = auVar97._0_2_;
      auVar26._0_4_ = auVar50._0_4_;
      auVar26._6_8_ = SUB148(ZEXT214(0) << 0x40,6);
      auVar40._4_10_ = auVar26._4_10_;
      auVar40._0_4_ = auVar50._0_4_ & 0xffff;
      auVar121._8_7_ = 0;
      auVar121._0_8_ = SUB158(ZEXT815(0),7);
      auVar98._9_6_ = 0;
      auVar98._0_9_ = SUB159(auVar121 << 0x38,6);
      auVar122._10_5_ = 0;
      auVar122._0_10_ = SUB1510(auVar98 << 0x30,5);
      auVar99._11_4_ = 0;
      auVar99._0_11_ = SUB1511(auVar122 << 0x28,4);
      auVar100._1_12_ = SUB1512(auVar99 << 0x20,3);
      auVar100[0] = (bVar203 < bVar206) * bVar203 | (bVar203 >= bVar206) * bVar206;
      auVar51[1] = 0;
      auVar51[0] = (bVar185 < bVar161) * bVar185 | (bVar185 >= bVar161) * bVar161;
      auVar51._2_13_ = auVar100;
      auVar27._4_2_ = auVar100._0_2_;
      auVar27._0_4_ = auVar51._0_4_;
      auVar27._6_8_ = SUB148(ZEXT214(0) << 0x40,6);
      auVar41._4_10_ = auVar27._4_10_;
      auVar41._0_4_ = auVar51._0_4_ & 0xffff;
      lVar182 = lVar182 + (auVar40._0_8_ & 0xffffffff);
      lVar188 = lVar188 + (ulonglong)auVar26._4_4_;
      lVar180 = lVar180 + (auVar41._0_8_ & 0xffffffff);
      lVar181 = lVar181 + (ulonglong)auVar27._4_4_;
    } while (uVar163 != 0);
    lVar180 = lVar181 + lVar188 + lVar180 + lVar182;
    if (uVar150 != uVar155) goto LAB_100ba400;
    FUN_100ba740(3,uVar157,param_7,param_4,param_5,param_6,param_7,param_8,param_9);
    lVar181 = lVar180;
LAB_100ba472:
    lVar188 = 0;
    lVar189 = 0;
    lVar180 = 0;
    lVar182 = 0;
    uVar155 = param_9 & 0x1c;
    pbVar164 = param_8 + 2;
    uVar163 = uVar155;
    do {
      pbVar160 = pbVar164 + -2;
      uVar3 = *(undefined2 *)pbVar164;
      pbVar164 = pbVar164 + 4;
      uVar163 = uVar163 - 4;
      bVar204 = (byte)*(undefined2 *)pbVar160;
      bVar156 = -bVar204;
      bVar183 = (byte)((ushort)*(undefined2 *)pbVar160 >> 8);
      bVar162 = -bVar183;
      bVar185 = (byte)uVar3;
      bVar161 = -bVar185;
      bVar203 = (byte)((ushort)uVar3 >> 8);
      bVar206 = -bVar203;
      auVar146._8_7_ = 0;
      auVar146._0_8_ = SUB158(ZEXT715(0) << 0x40,7);
      auVar147._10_5_ = 0;
      auVar147._0_10_ = SUB1510(auVar146 << 0x38,5);
      auVar101._1_12_ = SUB1512(auVar147 << 0x28,3);
      auVar101[0] = (bVar183 < bVar162) * bVar183 | (bVar183 >= bVar162) * bVar162;
      auVar52[1] = 0;
      auVar52[0] = (bVar204 < bVar156) * bVar204 | (bVar204 >= bVar156) * bVar156;
      auVar52._2_13_ = auVar101;
      auVar28._4_2_ = auVar101._0_2_;
      auVar28._0_4_ = auVar52._0_4_;
      auVar28._6_8_ = SUB148(ZEXT214(0) << 0x40,6);
      auVar42._4_10_ = auVar28._4_10_;
      auVar42._0_4_ = auVar52._0_4_ & 0xffff;
      auVar123._8_7_ = 0;
      auVar123._0_8_ = SUB158(ZEXT815(0),7);
      auVar102._9_6_ = 0;
      auVar102._0_9_ = SUB159(auVar123 << 0x38,6);
      auVar124._10_5_ = 0;
      auVar124._0_10_ = SUB1510(auVar102 << 0x30,5);
      auVar103._11_4_ = 0;
      auVar103._0_11_ = SUB1511(auVar124 << 0x28,4);
      auVar104._1_12_ = SUB1512(auVar103 << 0x20,3);
      auVar104[0] = (bVar203 < bVar206) * bVar203 | (bVar203 >= bVar206) * bVar206;
      auVar53[1] = 0;
      auVar53[0] = (bVar185 < bVar161) * bVar185 | (bVar185 >= bVar161) * bVar161;
      auVar53._2_13_ = auVar104;
      auVar29._4_2_ = auVar104._0_2_;
      auVar29._0_4_ = auVar53._0_4_;
      auVar29._6_8_ = SUB148(ZEXT214(0) << 0x40,6);
      auVar43._4_10_ = auVar29._4_10_;
      auVar43._0_4_ = auVar53._0_4_ & 0xffff;
      lVar188 = lVar188 + (auVar42._0_8_ & 0xffffffff);
      lVar189 = lVar189 + (ulonglong)auVar28._4_4_;
      lVar180 = lVar180 + (auVar43._0_8_ & 0xffffffff);
      lVar182 = lVar182 + (ulonglong)auVar29._4_4_;
    } while (uVar163 != 0);
    lVar180 = lVar182 + lVar189 + lVar180 + lVar188;
    pbVar164 = pbVar153 + uVar155;
    if (uVar150 != uVar155) goto LAB_100ba550;
    FUN_100ba740(4,uVar157,param_7,param_4,param_5,param_6,param_7,param_8,param_9);
    lVar182 = lVar180;
LAB_100ba5b7:
    lVar189 = 0;
    lVar190 = 0;
    lVar180 = 0;
    lVar188 = 0;
    uVar155 = param_9 & 0x1c;
    pbVar164 = param_8 + 2;
    pbVar153 = pbVar153 + uVar155;
    uVar163 = uVar155;
    do {
      pbVar160 = pbVar164 + -2;
      uVar3 = *(undefined2 *)pbVar164;
      pbVar164 = pbVar164 + 4;
      uVar163 = uVar163 - 4;
      bVar161 = (byte)*(undefined2 *)pbVar160;
      bVar156 = -bVar161;
      bVar206 = (byte)((ushort)*(undefined2 *)pbVar160 >> 8);
      bVar162 = -bVar206;
      auVar148._8_7_ = 0;
      auVar148._0_8_ = SUB158(ZEXT715(0) << 0x40,7);
      auVar149._10_5_ = 0;
      auVar149._0_10_ = SUB1510(auVar148 << 0x38,5);
      auVar105._1_12_ = SUB1512(auVar149 << 0x28,3);
      auVar105[0] = (bVar206 < bVar162) * bVar206 | (bVar206 >= bVar162) * bVar162;
      auVar54[1] = 0;
      auVar54[0] = (bVar161 < bVar156) * bVar161 | (bVar161 >= bVar156) * bVar156;
      auVar54._2_13_ = auVar105;
      auVar30._4_2_ = auVar105._0_2_;
      auVar30._0_4_ = auVar54._0_4_;
      auVar30._6_8_ = SUB148(ZEXT214(0) << 0x40,6);
      auVar44._4_10_ = auVar30._4_10_;
      auVar44._0_4_ = auVar54._0_4_ & 0xffff;
      bVar161 = (byte)uVar3;
      bVar156 = -bVar161;
      bVar206 = (byte)((ushort)uVar3 >> 8);
      bVar162 = -bVar206;
      lVar189 = lVar189 + (auVar44._0_8_ & 0xffffffff);
      lVar190 = lVar190 + (ulonglong)auVar30._4_4_;
      auVar125._8_7_ = 0;
      auVar125._0_8_ = SUB158(ZEXT815(0),7);
      auVar106._9_6_ = 0;
      auVar106._0_9_ = SUB159(auVar125 << 0x38,6);
      auVar126._10_5_ = 0;
      auVar126._0_10_ = SUB1510(auVar106 << 0x30,5);
      auVar107._11_4_ = 0;
      auVar107._0_11_ = SUB1511(auVar126 << 0x28,4);
      auVar108._1_12_ = SUB1512(auVar107 << 0x20,3);
      auVar108[0] = (bVar206 < bVar162) * bVar206 | (bVar206 >= bVar162) * bVar162;
      auVar55[1] = 0;
      auVar55[0] = (bVar161 < bVar156) * bVar161 | (bVar161 >= bVar156) * bVar156;
      auVar55._2_13_ = auVar108;
      auVar31._4_2_ = auVar108._0_2_;
      auVar31._0_4_ = auVar55._0_4_;
      auVar31._6_8_ = SUB148(ZEXT214(0) << 0x40,6);
      auVar45._4_10_ = auVar31._4_10_;
      auVar45._0_4_ = auVar55._0_4_ & 0xffff;
      lVar180 = lVar180 + (auVar45._0_8_ & 0xffffffff);
      lVar188 = lVar188 + (ulonglong)auVar31._4_4_;
    } while (uVar163 != 0);
    lVar180 = lVar188 + lVar190 + lVar180 + lVar189;
    lVar188 = lVar180;
    if (uVar150 != uVar155) goto LAB_100ba660;
  }
  uVar163 = (uint)((ulonglong)lVar172 >> 0x20);
  uVar150 = (uint)((ulonglong)lVar181 >> 0x20);
  local_40 = (uint)lVar181;
  uVar167 = (uint)((ulonglong)lVar182 >> 0x20);
  uVar155 = (uint)((ulonglong)lVar188 >> 0x20);
  lVar180 = lVar172;
  if (uVar150 < uVar163 || uVar150 - uVar163 < (uint)(local_40 < (uint)lVar172)) {
    lVar180 = lVar181;
  }
  uVar166 = (uint)((ulonglong)lVar180 >> 0x20);
  lVar181 = lVar180;
  if (uVar167 < uVar166 || uVar167 - uVar166 < (uint)((uint)lVar182 < (uint)lVar180)) {
    lVar181 = lVar182;
  }
  uVar152 = (uint)((ulonglong)lVar181 >> 0x20);
  param_1 = 3;
  if (uVar166 < uVar167 || uVar166 - uVar167 < (uint)((uint)lVar180 < (uint)lVar182)) {
    param_1 = (uint)(byte)(2 - (uVar163 < uVar150 ||
                               uVar163 - uVar150 < (uint)((uint)lVar172 < local_40)));
  }
  if (uVar155 <= uVar152 && (uint)((uint)lVar181 < (uint)lVar188) <= uVar152 - uVar155) {
    return CONCAT31((int3)((ulonglong)lVar188 >> 8),4);
  }
LAB_100ba703:
  FUN_100ba740(param_1 & 0xff,uVar157,param_7,param_4,param_5,param_6,param_7,param_8,param_9);
  return param_1;
}
