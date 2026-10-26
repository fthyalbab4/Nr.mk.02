// rea decompile_all
// name: FUN_100031f0
// address: 0x100031f0
// body: available
// range: 0x100031f0-0x10003273 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100031f0(undefined4 *param_1,undefined1 (*param_2) [16],int *param_3)

{
  uint uVar1;
  short sVar2;
  undefined1 auVar3 [15];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  char local_24;
  char cStack_23;
  char cStack_22;
  char cStack_21;
  char cStack_20;
  char cStack_1f;
  char cStack_1e;
  char cStack_1d;
  char cStack_1c;
  char cStack_1b;
  char cStack_1a;
  char cStack_19;
  char cStack_18;
  char cStack_17;
  char cStack_16;
  char cStack_15;
  uint local_14;
  ushort local_10;
  ushort local_e;
  undefined1 local_c;
  undefined1 local_b;

  auVar12 = *param_2;
  uVar1 = *(uint *)param_2[1];
  local_c = param_2[1][8];
  auVar3[0xd] = 0;
  auVar3._0_13_ = auVar12._0_13_;
  auVar3[0xe] = auVar12[7];
  auVar4[0xc] = auVar12[6];
  auVar4._0_12_ = auVar12._0_12_;
  auVar4._13_2_ = auVar3._13_2_;
  auVar5[0xb] = 0;
  auVar5._0_11_ = auVar12._0_11_;
  auVar5._12_3_ = auVar4._12_3_;
  auVar6[10] = auVar12[5];
  auVar6._0_10_ = auVar12._0_10_;
  auVar6._11_4_ = auVar5._11_4_;
  auVar7[9] = 0;
  auVar7._0_9_ = auVar12._0_9_;
  auVar7._10_5_ = auVar6._10_5_;
  auVar8[8] = auVar12[4];
  auVar8._0_8_ = auVar12._0_8_;
  auVar8._9_6_ = auVar7._9_6_;
  auVar9._7_8_ = 0;
  auVar9._0_7_ = auVar8._8_7_;
  auVar10._1_8_ = SUB158(auVar9 << 0x40,7);
  auVar10[0] = auVar12[3];
  auVar10._9_6_ = 0;
  auVar11._1_10_ = SUB1510(auVar10 << 0x30,5);
  auVar11[0] = auVar12[2];
  auVar11._11_4_ = 0;
  auVar14._3_12_ = SUB1512(auVar11 << 0x20,3);
  auVar14[2] = auVar12[1];
  auVar14[0] = auVar12[0];
  auVar14[1] = 0;
  auVar14[0xf] = 0;
  local_14 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  auVar13[1] = 0;
  auVar13[0] = auVar12[8];
  auVar13[2] = auVar12[9];
  auVar13[3] = 0;
  auVar13[4] = auVar12[10];
  auVar13[5] = 0;
  auVar13[6] = auVar12[0xb];
  auVar13[7] = 0;
  auVar13[8] = auVar12[0xc];
  auVar13[9] = 0;
  auVar13[10] = auVar12[0xd];
  auVar13[0xb] = 0;
  auVar13[0xc] = auVar12[0xe];
  auVar13[0xd] = 0;
  auVar13[0xe] = auVar12[0xf];
  auVar13[0xf] = 0;
  auVar12 = pshuflw(auVar14,auVar14,0x1b);
  auVar14 = pshuflw(auVar13,auVar13,0x1b);
  auVar12 = pshufhw(auVar12,auVar12,0x1b);
  auVar14 = pshufhw(auVar14,auVar14,0x1b);
  sVar2 = auVar12._0_2_;
  local_24 = (0 < sVar2) * (sVar2 < 0x100) * auVar12[0] - (0xff < sVar2);
  sVar2 = auVar12._2_2_;
  cStack_23 = (0 < sVar2) * (sVar2 < 0x100) * auVar12[2] - (0xff < sVar2);
  sVar2 = auVar12._4_2_;
  cStack_22 = (0 < sVar2) * (sVar2 < 0x100) * auVar12[4] - (0xff < sVar2);
  sVar2 = auVar12._6_2_;
  cStack_21 = (0 < sVar2) * (sVar2 < 0x100) * auVar12[6] - (0xff < sVar2);
  sVar2 = auVar12._8_2_;
  cStack_20 = (0 < sVar2) * (sVar2 < 0x100) * auVar12[8] - (0xff < sVar2);
  sVar2 = auVar12._10_2_;
  cStack_1f = (0 < sVar2) * (sVar2 < 0x100) * auVar12[10] - (0xff < sVar2);
  sVar2 = auVar12._12_2_;
  cStack_1e = (0 < sVar2) * (sVar2 < 0x100) * auVar12[0xc] - (0xff < sVar2);
  sVar2 = auVar12._14_2_;
  cStack_1d = (0 < sVar2) * (sVar2 < 0x100) * auVar12[0xe] - (0xff < sVar2);
  sVar2 = auVar14._0_2_;
  cStack_1c = (0 < sVar2) * (sVar2 < 0x100) * auVar14[0] - (0xff < sVar2);
  sVar2 = auVar14._2_2_;
  cStack_1b = (0 < sVar2) * (sVar2 < 0x100) * auVar14[2] - (0xff < sVar2);
  sVar2 = auVar14._4_2_;
  cStack_1a = (0 < sVar2) * (sVar2 < 0x100) * auVar14[4] - (0xff < sVar2);
  sVar2 = auVar14._6_2_;
  cStack_19 = (0 < sVar2) * (sVar2 < 0x100) * auVar14[6] - (0xff < sVar2);
  sVar2 = auVar14._8_2_;
  cStack_18 = (0 < sVar2) * (sVar2 < 0x100) * auVar14[8] - (0xff < sVar2);
  sVar2 = auVar14._10_2_;
  cStack_17 = (0 < sVar2) * (sVar2 < 0x100) * auVar14[10] - (0xff < sVar2);
  sVar2 = auVar14._12_2_;
  cStack_16 = (0 < sVar2) * (sVar2 < 0x100) * auVar14[0xc] - (0xff < sVar2);
  sVar2 = auVar14._14_2_;
  cStack_15 = (0 < sVar2) * (sVar2 < 0x100) * auVar14[0xe] - (0xff < sVar2);
  local_10 = *(ushort *)(param_2[1] + 4) << 8 | *(ushort *)(param_2[1] + 4) >> 8;
  local_b = param_2[1][9];
  local_e = *(ushort *)(param_2[1] + 6) << 8 | *(ushort *)(param_2[1] + 6) >> 8;
  FUN_100182e0(param_1,param_3,0x4c546366,(undefined1 (*) [16])&local_24,(int *)0x1a);
  return;
}
