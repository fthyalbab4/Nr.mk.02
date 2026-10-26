// rea decompile_all
// name: FUN_101066f0
// address: 0x101066f0
// body: available
// range: 0x101066f0-0x10106959 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __fastcall FUN_101066f0(uint param_1,uint param_2,int param_3,uint param_4)

{
  undefined1 (*pauVar1) [16];
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar20;
  int iVar21;
  undefined1 auVar19 [16];
  int iVar22;
  undefined1 auVar23 [16];
  int iVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];

  uVar8 = param_1 & 0xffff;
  uVar9 = param_2 & 0xffff;
  uVar6 = param_4 % 0x15a0;
  uVar3 = (param_4 / 0x15a0) * 0x15a0;
  iVar4 = param_3;
  for (uVar7 = uVar3; 0x159f < uVar7; uVar7 = uVar7 - 0x15a0) {
    iVar5 = uVar8 * 0xad;
    iVar13 = 0;
    iVar14 = 0;
    iVar15 = 0;
    iVar20 = 0;
    iVar21 = 0;
    iVar22 = 0;
    iVar24 = 0;
    iVar16 = 0;
    iVar17 = 0;
    iVar18 = 0;
    iVar12 = -0x15a0;
    do {
      auVar26 = *(undefined1 (*) [16])(iVar4 + 0x15a0 + iVar12);
      iVar5 = iVar5 + iVar20;
      iVar16 = iVar16 + iVar21;
      iVar17 = iVar17 + iVar22;
      iVar18 = iVar18 + iVar24;
      auVar23 = pmaddubsw(auVar26,_DAT_1013f010);
      auVar19 = psadbw(auVar26,(undefined1  [16])0x0);
      auVar25 = pmaddwd(auVar23,_DAT_1013f020);
      auVar26 = *(undefined1 (*) [16])(iVar4 + 0x15b0 + iVar12);
      iVar12 = iVar12 + 0x20;
      auVar23 = pmaddubsw(auVar26,_DAT_1013f030);
      auVar27 = psadbw(auVar26,(undefined1  [16])0x0);
      auVar26 = pmaddwd(auVar23,_DAT_1013f020);
      iVar20 = auVar27._0_4_ + auVar19._0_4_ + iVar20;
      iVar21 = auVar27._4_4_ + auVar19._4_4_ + iVar21;
      iVar22 = auVar27._8_4_ + auVar19._8_4_ + iVar22;
      iVar24 = auVar27._12_4_ + auVar19._12_4_ + iVar24;
      uVar9 = auVar26._0_4_ + auVar25._0_4_ + uVar9;
      iVar13 = auVar26._4_4_ + auVar25._4_4_ + iVar13;
      iVar14 = auVar26._8_4_ + auVar25._8_4_ + iVar14;
      iVar15 = auVar26._12_4_ + auVar25._12_4_ + iVar15;
    } while (iVar12 != 0);
    iVar4 = iVar4 + 0x15a0;
    uVar8 = (iVar24 + iVar21 + iVar22 + iVar20 + uVar8) % 0xfff1;
    uVar9 = (iVar15 + iVar18 * 0x20 + iVar13 + iVar16 * 0x20 +
            iVar14 + iVar17 * 0x20 + uVar9 + iVar5 * 0x20) % 0xfff1;
  }
  pauVar11 = (undefined1 (*) [16])(param_3 + uVar3);
  if (0x1f < uVar6) {
    iVar12 = 0;
    iVar13 = 0;
    iVar14 = 0;
    iVar18 = 0;
    iVar20 = 0;
    iVar21 = 0;
    iVar22 = 0;
    iVar4 = (uVar6 >> 5) * uVar8;
    iVar15 = 0;
    iVar16 = 0;
    iVar17 = 0;
    iVar5 = -(uVar6 & 0xffffffe0);
    pauVar10 = pauVar11;
    do {
      iVar4 = iVar4 + iVar18;
      iVar15 = iVar15 + iVar20;
      iVar16 = iVar16 + iVar21;
      iVar17 = iVar17 + iVar22;
      auVar26 = pmaddubsw(*pauVar10,_DAT_1013f010);
      auVar23 = psadbw(*pauVar10,(undefined1  [16])0x0);
      auVar27 = pmaddwd(auVar26,_DAT_1013f020);
      pauVar1 = pauVar10 + 1;
      pauVar10 = pauVar10 + 2;
      iVar5 = iVar5 + 0x20;
      auVar26 = pmaddubsw(*pauVar1,_DAT_1013f030);
      auVar19 = psadbw(*pauVar1,(undefined1  [16])0x0);
      auVar26 = pmaddwd(auVar26,_DAT_1013f020);
      iVar18 = auVar19._0_4_ + auVar23._0_4_ + iVar18;
      iVar20 = auVar19._4_4_ + auVar23._4_4_ + iVar20;
      iVar21 = auVar19._8_4_ + auVar23._8_4_ + iVar21;
      iVar22 = auVar19._12_4_ + auVar23._12_4_ + iVar22;
      uVar9 = auVar26._0_4_ + auVar27._0_4_ + uVar9;
      iVar12 = auVar26._4_4_ + auVar27._4_4_ + iVar12;
      iVar13 = auVar26._8_4_ + auVar27._8_4_ + iVar13;
      iVar14 = auVar26._12_4_ + auVar27._12_4_ + iVar14;
    } while (iVar5 != 0);
    pauVar11 = (undefined1 (*) [16])(*pauVar11 + (uVar6 & 0x1fe0));
    uVar6 = uVar6 & 0x1f;
    uVar8 = uVar8 + iVar22 + iVar20 + iVar21 + iVar18;
    uVar9 = iVar14 + iVar17 * 0x20 + iVar12 + iVar15 * 0x20 +
            iVar13 + iVar16 * 0x20 + uVar9 + iVar4 * 0x20;
  }
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    puVar2 = *pauVar11;
    pauVar11 = (undefined1 (*) [16])(*pauVar11 + 1);
    uVar8 = uVar8 + (byte)*puVar2;
    uVar9 = uVar9 + uVar8;
  }
  return CONCAT44(uVar9 % 0xfff1,uVar8 % 0xfff1);
}
