// rea decompile_all
// name: FUN_101064b0
// address: 0x101064b0
// body: available
// range: 0x101064b0-0x101066ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __fastcall FUN_101064b0(uint param_1,uint param_2,int param_3,uint param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 (*pauVar19) [32];
  int iVar20;
  undefined1 (*pauVar21) [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [64];
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  undefined1 auVar38 [32];

  uVar17 = param_1 & 0xffff;
  uVar18 = param_2 & 0xffff;
  uVar12 = (param_4 / 0x15a0) * 0x15a0;
  uVar15 = param_4 % 0x15a0;
  if (0x159f < uVar12) {
    auVar22._8_2_ = 1;
    auVar22._0_8_ = 0x1000100010001;
    auVar22._10_2_ = 1;
    auVar22._12_2_ = 1;
    auVar22._14_2_ = 1;
    auVar22._16_2_ = 1;
    auVar22._18_2_ = 1;
    auVar22._20_2_ = 1;
    auVar22._22_2_ = 1;
    auVar22._24_2_ = 1;
    auVar22._26_2_ = 1;
    auVar22._28_2_ = 1;
    auVar22._30_2_ = 1;
    uVar16 = uVar12;
    iVar20 = param_3;
    do {
      iVar32 = 0;
      iVar33 = 0;
      iVar34 = 0;
      iVar35 = 0;
      iVar36 = 0;
      iVar37 = 0;
      iVar14 = 0;
      iVar31 = 0;
      iVar24 = 0;
      iVar25 = 0;
      iVar26 = 0;
      iVar27 = 0;
      iVar28 = 0;
      iVar29 = 0;
      iVar30 = 0;
      auVar23 = ZEXT464(uVar17 * 0xad);
      iVar13 = -0x15a0;
      do {
        auVar38 = *(undefined1 (*) [32])(iVar20 + 0x15a0 + iVar13);
        auVar10._0_4_ = auVar23._0_4_ + iVar31;
        auVar10._4_4_ = auVar23._4_4_ + iVar24;
        auVar10._8_4_ = auVar23._8_4_ + iVar25;
        auVar10._12_4_ = auVar23._12_4_ + iVar26;
        auVar10._16_4_ = auVar23._16_4_ + iVar27;
        auVar10._20_4_ = auVar23._20_4_ + iVar28;
        auVar10._24_4_ = auVar23._24_4_ + iVar29;
        auVar10._28_4_ = auVar23._28_4_ + iVar30;
        auVar23 = ZEXT3264(auVar10);
        iVar13 = iVar13 + 0x20;
        auVar9 = vpsadbw_avx2(auVar38,SUB6432(ZEXT1664((undefined1  [16])0x0),0));
        auVar38 = vpmaddubsw_avx2(auVar38,_DAT_1013efe0);
        auVar38 = vpmaddwd_avx2(auVar38,auVar22);
        iVar31 = iVar31 + auVar9._0_4_;
        iVar24 = iVar24 + auVar9._4_4_;
        iVar25 = iVar25 + auVar9._8_4_;
        iVar26 = iVar26 + auVar9._12_4_;
        iVar27 = iVar27 + auVar9._16_4_;
        iVar28 = iVar28 + auVar9._20_4_;
        iVar29 = iVar29 + auVar9._24_4_;
        iVar30 = iVar30 + auVar9._28_4_;
        uVar18 = auVar38._0_4_ + uVar18;
        iVar32 = auVar38._4_4_ + iVar32;
        iVar33 = auVar38._8_4_ + iVar33;
        iVar34 = auVar38._12_4_ + iVar34;
        iVar35 = auVar38._16_4_ + iVar35;
        iVar36 = auVar38._20_4_ + iVar36;
        iVar37 = auVar38._24_4_ + iVar37;
        iVar14 = auVar38._28_4_ + iVar14;
      } while (iVar13 != 0);
      auVar38 = vpslld_avx2(auVar10,5);
      uVar16 = uVar16 - 0x15a0;
      iVar20 = iVar20 + 0x15a0;
      auVar8._0_4_ = iVar27 + iVar31;
      auVar8._4_4_ = iVar28 + iVar24;
      auVar8._8_4_ = iVar29 + iVar25;
      auVar8._12_4_ = iVar30 + iVar26;
      auVar6 = vpshufd_avx(auVar8,0xee);
      auVar1._0_4_ = auVar8._0_4_ + auVar6._0_4_;
      auVar1._4_4_ = auVar8._4_4_ + auVar6._4_4_;
      auVar1._8_4_ = auVar8._8_4_ + auVar6._8_4_;
      auVar1._12_4_ = auVar8._12_4_ + auVar6._12_4_;
      auVar8 = vpshufd_avx(auVar1,0x55);
      auVar6._0_4_ = iVar35 + auVar38._16_4_ + uVar18 + auVar38._0_4_;
      auVar6._4_4_ = iVar36 + auVar38._20_4_ + iVar32 + auVar38._4_4_;
      auVar6._8_4_ = iVar37 + auVar38._24_4_ + iVar33 + auVar38._8_4_;
      auVar6._12_4_ = iVar14 + auVar38._28_4_ + iVar34 + auVar38._12_4_;
      auVar7 = vpshufd_avx(auVar6,0xee);
      auVar2._0_4_ = auVar6._0_4_ + auVar7._0_4_;
      auVar2._4_4_ = auVar6._4_4_ + auVar7._4_4_;
      auVar2._8_4_ = auVar6._8_4_ + auVar7._8_4_;
      auVar2._12_4_ = auVar6._12_4_ + auVar7._12_4_;
      auVar6 = vpshufd_avx(auVar2,0x55);
      uVar17 = (auVar8._0_4_ + auVar1._0_4_ + uVar17) % 0xfff1;
      uVar18 = (uint)(auVar6._0_4_ + auVar2._0_4_) % 0xfff1;
    } while (0x159f < uVar16);
  }
  pauVar21 = (undefined1 (*) [32])(param_3 + uVar12);
  if (0x1f < uVar15) {
    auVar38._8_2_ = 1;
    auVar38._0_8_ = 0x1000100010001;
    auVar38._10_2_ = 1;
    auVar38._12_2_ = 1;
    auVar38._14_2_ = 1;
    auVar38._16_2_ = 1;
    auVar38._18_2_ = 1;
    auVar38._20_2_ = 1;
    auVar38._22_2_ = 1;
    auVar38._24_2_ = 1;
    auVar38._26_2_ = 1;
    auVar38._28_2_ = 1;
    auVar38._30_2_ = 1;
    iVar24 = 0;
    iVar25 = 0;
    iVar26 = 0;
    iVar27 = 0;
    iVar28 = 0;
    iVar29 = 0;
    iVar30 = 0;
    iVar20 = 0;
    iVar31 = 0;
    iVar32 = 0;
    iVar33 = 0;
    iVar34 = 0;
    iVar35 = 0;
    iVar36 = 0;
    iVar37 = 0;
    auVar23 = ZEXT464((uVar15 >> 5) * uVar17);
    iVar14 = -(uVar15 & 0xffffffe0);
    pauVar19 = pauVar21;
    do {
      auVar22 = *pauVar19;
      pauVar19 = pauVar19 + 1;
      auVar9._0_4_ = auVar23._0_4_ + iVar20;
      auVar9._4_4_ = auVar23._4_4_ + iVar31;
      auVar9._8_4_ = auVar23._8_4_ + iVar32;
      auVar9._12_4_ = auVar23._12_4_ + iVar33;
      auVar9._16_4_ = auVar23._16_4_ + iVar34;
      auVar9._20_4_ = auVar23._20_4_ + iVar35;
      auVar9._24_4_ = auVar23._24_4_ + iVar36;
      auVar9._28_4_ = auVar23._28_4_ + iVar37;
      auVar23 = ZEXT3264(auVar9);
      iVar14 = iVar14 + 0x20;
      auVar10 = vpsadbw_avx2(auVar22,SUB6432(ZEXT1664((undefined1  [16])0x0),0));
      auVar22 = vpmaddubsw_avx2(auVar22,_DAT_1013efe0);
      auVar22 = vpmaddwd_avx2(auVar22,auVar38);
      iVar20 = iVar20 + auVar10._0_4_;
      iVar31 = iVar31 + auVar10._4_4_;
      iVar32 = iVar32 + auVar10._8_4_;
      iVar33 = iVar33 + auVar10._12_4_;
      iVar34 = iVar34 + auVar10._16_4_;
      iVar35 = iVar35 + auVar10._20_4_;
      iVar36 = iVar36 + auVar10._24_4_;
      iVar37 = iVar37 + auVar10._28_4_;
      uVar18 = auVar22._0_4_ + uVar18;
      iVar24 = auVar22._4_4_ + iVar24;
      iVar25 = auVar22._8_4_ + iVar25;
      iVar26 = auVar22._12_4_ + iVar26;
      iVar27 = auVar22._16_4_ + iVar27;
      iVar28 = auVar22._20_4_ + iVar28;
      iVar29 = auVar22._24_4_ + iVar29;
      iVar30 = auVar22._28_4_ + iVar30;
    } while (iVar14 != 0);
    auVar22 = vpslld_avx2(auVar9,5);
    pauVar21 = (undefined1 (*) [32])(*pauVar21 + (uVar15 & 0x1fe0));
    uVar15 = uVar15 & 0x1f;
    auVar7._0_4_ = iVar34 + iVar20;
    auVar7._4_4_ = iVar35 + iVar31;
    auVar7._8_4_ = iVar36 + iVar32;
    auVar7._12_4_ = iVar37 + iVar33;
    auVar8 = vpshufd_avx(auVar7,0xee);
    auVar3._0_4_ = auVar7._0_4_ + auVar8._0_4_;
    auVar3._4_4_ = auVar7._4_4_ + auVar8._4_4_;
    auVar3._8_4_ = auVar7._8_4_ + auVar8._8_4_;
    auVar3._12_4_ = auVar7._12_4_ + auVar8._12_4_;
    auVar8 = vpshufd_avx(auVar3,0x55);
    auVar4._0_4_ = iVar27 + auVar22._16_4_ + uVar18 + auVar22._0_4_;
    auVar4._4_4_ = iVar28 + auVar22._20_4_ + iVar24 + auVar22._4_4_;
    auVar4._8_4_ = iVar29 + auVar22._24_4_ + iVar25 + auVar22._8_4_;
    auVar4._12_4_ = iVar30 + auVar22._28_4_ + iVar26 + auVar22._12_4_;
    uVar17 = uVar17 + auVar8._0_4_ + auVar3._0_4_;
    auVar8 = vpshufd_avx(auVar4,0xee);
    auVar5._0_4_ = auVar4._0_4_ + auVar8._0_4_;
    auVar5._4_4_ = auVar4._4_4_ + auVar8._4_4_;
    auVar5._8_4_ = auVar4._8_4_ + auVar8._8_4_;
    auVar5._12_4_ = auVar4._12_4_ + auVar8._12_4_;
    auVar8 = vpshufd_avx(auVar5,0x55);
    uVar18 = auVar8._0_4_ + auVar5._0_4_;
  }
  for (; uVar15 != 0; uVar15 = uVar15 - 1) {
    puVar11 = *pauVar21;
    pauVar21 = (undefined1 (*) [32])(*pauVar21 + 1);
    uVar17 = uVar17 + (byte)*puVar11;
    uVar18 = uVar18 + uVar17;
  }
  return CONCAT44(uVar18 % 0xfff1,uVar17 % 0xfff1);
}
