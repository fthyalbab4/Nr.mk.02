// rea decompile_all
// name: FUN_10094120
// address: 0x10094120
// body: available
// range: 0x10094120-0x100941a2 inclusive
// range: 0x100941b0-0x100943f3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __fastcall FUN_10094120(undefined1 (*param_1) [16],int param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 auVar3 [16];
  char cVar4;
  undefined1 *puVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  uint uVar12;
  uint uVar13;
  undefined1 (*pauVar14) [16];
  char *pcVar15;
  uint uVar16;
  uint *puVar17;
  undefined1 (*pauVar18) [16];
  int iVar19;
  uint uVar20;
  uint uVar21;
  undefined1 (*pauVar22) [16];
  int iVar23;
  int iVar24;
  uint uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  int iVar34;
  undefined1 auVar33 [16];
  int iVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];

  iVar24 = 0;
  pauVar22 = (undefined1 (*) [16])((uint)(*param_1 + 3) & 0xfffffffc);
  uVar16 = param_2 - ((int)pauVar22 - (int)param_1);
  uVar12 = uVar16 & 3;
  iVar23 = 0;
  if (pauVar22 != param_1) {
    iVar23 = 0;
    iVar19 = (int)param_1 - (int)pauVar22;
    do {
      puVar5 = *param_1;
      param_1 = (undefined1 (*) [16])(*param_1 + 1);
      iVar23 = iVar23 + (uint)(-0x41 < (char)*puVar5);
      iVar19 = iVar19 + 1;
    } while (iVar19 != 0);
  }
  if (uVar12 != 0) {
    iVar24 = 0;
    pcVar15 = *pauVar22 + (uVar16 & 0x7ffffffc);
    do {
      cVar4 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      iVar24 = iVar24 + (uint)(-0x41 < cVar4);
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  iVar24 = iVar24 + iVar23;
  uVar16 = uVar16 >> 2;
  auVar37._8_4_ = 0xffffffff;
  auVar37._0_8_ = 0xffffffffffffffff;
  auVar37._12_4_ = 0xffffffff;
  do {
    pauVar18 = pauVar22;
    if (uVar16 == 0) {
      return iVar24;
    }
    uVar12 = 0xc0;
    if (uVar16 < 0xc0) {
      uVar12 = uVar16;
    }
    uVar25 = uVar12 * 4 & 0x3f0;
    if (uVar25 == 0) {
      uVar13 = 0;
    }
    else {
      uVar20 = uVar12 * 4 - 0x10;
      uVar13 = 0;
      pauVar22 = pauVar18;
      if (0x2f < uVar20) {
        iVar23 = 0;
        iVar19 = 0;
        iVar34 = 0;
        iVar35 = 0;
        uVar21 = (uVar20 >> 4) + 1;
        uVar20 = uVar21 & 0xfffffffc;
        pauVar22 = pauVar18 + uVar20;
        pauVar14 = pauVar18;
        uVar13 = uVar20;
        do {
          auVar3 = *pauVar14;
          auVar31 = pauVar14[2];
          pauVar1 = pauVar14 + 1;
          pauVar6 = pauVar14 + 1;
          pauVar7 = pauVar14 + 1;
          pauVar8 = pauVar14 + 1;
          pauVar2 = pauVar14 + 3;
          pauVar9 = pauVar14 + 3;
          pauVar10 = pauVar14 + 3;
          pauVar11 = pauVar14 + 3;
          pauVar14 = pauVar14 + 4;
          uVar13 = uVar13 - 4;
          auVar30._0_8_ = CONCAT44(*(uint *)(*pauVar10 + 8),auVar31._8_4_);
          auVar30._8_4_ = auVar31._12_4_;
          auVar30._12_4_ = *(uint *)(*pauVar11 + 0xc);
          auVar32._0_8_ = CONCAT44(*(uint *)(*pauVar7 + 8),auVar3._8_4_);
          auVar32._8_4_ = auVar3._12_4_;
          auVar32._12_4_ = *(uint *)(*pauVar8 + 0xc);
          auVar36._0_8_ = auVar3._0_8_;
          auVar36._8_4_ = auVar3._4_4_;
          auVar36._12_4_ = *(uint *)(*pauVar6 + 4);
          auVar27._4_4_ = *(uint *)*pauVar1;
          auVar27._0_4_ = auVar3._0_4_;
          auVar26._0_8_ = auVar31._0_8_;
          auVar26._8_4_ = auVar31._4_4_;
          auVar26._12_4_ = *(uint *)(*pauVar9 + 4);
          auVar27._12_4_ = *(uint *)*pauVar2;
          auVar27._8_4_ = auVar31._0_4_;
          auVar37._8_4_ = 0xffffffff;
          auVar37._0_8_ = 0xffffffffffffffff;
          auVar37._12_4_ = 0xffffffff;
          auVar33._8_8_ = auVar30._8_8_;
          auVar33._0_8_ = auVar32._8_8_;
          auVar28._8_8_ = auVar26._8_8_;
          auVar28._0_8_ = auVar36._8_8_;
          auVar29._8_8_ = auVar30._0_8_;
          auVar29._0_8_ = auVar32._0_8_;
          auVar27 = auVar27 ^ auVar37;
          auVar28 = auVar28 ^ auVar37;
          auVar33 = auVar33 ^ auVar37;
          auVar29 = auVar29 ^ auVar37;
          iVar23 = ((auVar3._12_4_ >> 6 | auVar33._0_4_ >> 7) & 0x1010101) +
                   ((auVar3._8_4_ >> 6 | auVar29._0_4_ >> 7) & 0x1010101) +
                   ((auVar3._4_4_ >> 6 | auVar28._0_4_ >> 7) & 0x1010101) +
                   ((auVar3._0_4_ >> 6 | auVar27._0_4_ >> 7) & 0x1010101) + iVar23;
          iVar19 = ((*(uint *)(*pauVar8 + 0xc) >> 6 | auVar33._4_4_ >> 7) & 0x1010101) +
                   ((*(uint *)(*pauVar7 + 8) >> 6 | auVar29._4_4_ >> 7) & 0x1010101) +
                   ((*(uint *)(*pauVar6 + 4) >> 6 | auVar28._4_4_ >> 7) & 0x1010101) +
                   ((*(uint *)*pauVar1 >> 6 | auVar27._4_4_ >> 7) & 0x1010101) + iVar19;
          iVar34 = ((auVar31._12_4_ >> 6 | auVar33._8_4_ >> 7) & 0x1010101) +
                   ((auVar31._8_4_ >> 6 | auVar29._8_4_ >> 7) & 0x1010101) +
                   ((auVar31._4_4_ >> 6 | auVar28._8_4_ >> 7) & 0x1010101) +
                   ((auVar31._0_4_ >> 6 | auVar27._8_4_ >> 7) & 0x1010101) + iVar34;
          iVar35 = ((*(uint *)(*pauVar11 + 0xc) >> 6 | auVar33._12_4_ >> 7) & 0x1010101) +
                   ((*(uint *)(*pauVar10 + 8) >> 6 | auVar29._12_4_ >> 7) & 0x1010101) +
                   ((*(uint *)(*pauVar9 + 4) >> 6 | auVar28._12_4_ >> 7) & 0x1010101) +
                   ((*(uint *)*pauVar2 >> 6 | auVar27._12_4_ >> 7) & 0x1010101) + iVar35;
        } while (uVar13 != 0);
        uVar13 = iVar35 + iVar19 + iVar34 + iVar23;
        if (uVar21 == uVar20) goto LAB_100941b4;
      }
      do {
        auVar3 = *pauVar22;
        pauVar22 = pauVar22 + 1;
        auVar31 = auVar3 ^ auVar37;
        uVar13 = uVar13 + ((auVar3._12_4_ >> 6 | auVar31._12_4_ >> 7) & 0x1010101) +
                          ((auVar3._4_4_ >> 6 | auVar31._4_4_ >> 7) & 0x1010101) +
                          ((auVar3._8_4_ >> 6 | auVar31._8_4_ >> 7) & 0x1010101) +
                          ((auVar3._0_4_ >> 6 | auVar31._0_4_ >> 7) & 0x1010101);
      } while (pauVar22 != (undefined1 (*) [16])(*pauVar18 + uVar25));
    }
LAB_100941b4:
    uVar16 = uVar16 - uVar12;
    iVar24 = (((uVar13 >> 8 & 0xff00ff) + (uVar13 & 0xff00ff)) * 0x10001 >> 0x10) + iVar24;
    pauVar22 = (undefined1 (*) [16])(*pauVar18 + uVar12 * 4);
    if ((uVar12 & 3) != 0) {
      iVar23 = (uVar12 & 3) << 2;
      uVar16 = 0;
      puVar17 = (uint *)(*pauVar18 + (uVar12 & 0xfc) * 4);
      do {
        uVar12 = *puVar17;
        puVar17 = puVar17 + 1;
        uVar16 = uVar16 + ((uVar12 >> 6 | ~uVar12 >> 7) & 0x1010101);
        iVar23 = iVar23 + -4;
      } while (iVar23 != 0);
      return (((uVar16 >> 8 & 0xff00ff) + (uVar16 & 0xff00ff)) * 0x10001 >> 0x10) + iVar24;
    }
  } while( true );
}
