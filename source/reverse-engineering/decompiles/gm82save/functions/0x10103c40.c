// rea decompile_all
// name: FUN_10103c40
// address: 0x10103c40
// body: available
// range: 0x10103c40-0x10103cec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_10103c40(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [14];
  undefined1 auVar4 [12];
  unkbyte10 Var5;
  undefined1 auVar6 [14];
  undefined1 auVar7 [12];
  uint uVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  char cVar12;
  char cVar18;
  char cVar19;
  char cVar20;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar17 [16];
  char cVar22;
  char cVar28;
  char cVar29;
  char cVar30;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar27 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined2 uVar21;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];

  uVar8 = (int)param_2 - (int)param_1;
  if (0xf < uVar8) {
    iVar9 = FUN_10094120(param_1,uVar8);
    return iVar9;
  }
  if (param_2 != param_1) {
    iVar10 = 0;
    iVar9 = 0;
    if (7 < uVar8) {
      uVar1 = *(undefined4 *)(*param_1 + 4);
      uVar2 = *(undefined4 *)*param_1;
      iVar10 = 8;
      cVar12 = -(-0x41 < (char)uVar1);
      cVar18 = -(-0x41 < (char)((uint)uVar1 >> 8));
      cVar19 = -(-0x41 < (char)((uint)uVar1 >> 0x10));
      cVar20 = -(-0x41 < (char)((uint)uVar1 >> 0x18));
      cVar22 = -(-0x41 < (char)uVar2);
      cVar28 = -(-0x41 < (char)((uint)uVar2 >> 8));
      cVar29 = -(-0x41 < (char)((uint)uVar2 >> 0x10));
      cVar30 = -(-0x41 < (char)((uint)uVar2 >> 0x18));
      Var5 = CONCAT91(CONCAT81((longlong)(((unkuint9)0 << 0x10) >> 8),cVar20),cVar20);
      auVar4._2_10_ = Var5;
      auVar4[1] = cVar19;
      auVar4[0] = cVar19;
      auVar3._2_12_ = auVar4;
      auVar3[1] = cVar18;
      auVar3[0] = cVar18;
      auVar13._0_2_ = CONCAT11(cVar12,cVar12);
      auVar13._2_14_ = auVar3;
      uVar21 = (undefined2)Var5;
      auVar16._0_12_ = auVar13._0_12_;
      auVar16._12_2_ = uVar21;
      auVar16._14_2_ = uVar21;
      auVar15._12_4_ = auVar16._12_4_;
      auVar15._0_10_ = auVar13._0_10_;
      auVar15._10_2_ = auVar4._0_2_;
      auVar14._10_6_ = auVar15._10_6_;
      auVar14._0_8_ = auVar13._0_8_;
      auVar14._8_2_ = auVar4._0_2_;
      auVar17._8_8_ = auVar14._8_8_;
      auVar17._6_2_ = auVar3._0_2_;
      auVar17._4_2_ = auVar3._0_2_;
      auVar17._2_2_ = auVar13._0_2_;
      auVar17._0_2_ = auVar13._0_2_;
      auVar17 = auVar17 & _DAT_1013ef40;
      Var5 = CONCAT91(CONCAT81((longlong)(((unkuint9)0 << 0x10) >> 8),cVar30),cVar30);
      auVar7._2_10_ = Var5;
      auVar7[1] = cVar29;
      auVar7[0] = cVar29;
      auVar6._2_12_ = auVar7;
      auVar6[1] = cVar28;
      auVar6[0] = cVar28;
      auVar23._0_2_ = CONCAT11(cVar22,cVar22);
      auVar23._2_14_ = auVar6;
      uVar21 = (undefined2)Var5;
      auVar26._0_12_ = auVar23._0_12_;
      auVar26._12_2_ = uVar21;
      auVar26._14_2_ = uVar21;
      auVar25._12_4_ = auVar26._12_4_;
      auVar25._0_10_ = auVar23._0_10_;
      auVar25._10_2_ = auVar7._0_2_;
      auVar24._10_6_ = auVar25._10_6_;
      auVar24._0_8_ = auVar23._0_8_;
      auVar24._8_2_ = auVar7._0_2_;
      auVar27._8_8_ = auVar24._8_8_;
      auVar27._6_2_ = auVar6._0_2_;
      auVar27._4_2_ = auVar6._0_2_;
      auVar27._2_2_ = auVar23._0_2_;
      auVar27._0_2_ = auVar23._0_2_;
      auVar27 = auVar27 & _DAT_1013ef40;
      iVar9 = auVar27._12_4_ + auVar17._12_4_ + auVar27._4_4_ + auVar17._4_4_ +
              auVar27._8_4_ + auVar17._8_4_ + auVar27._0_4_ + auVar17._0_4_;
      if (uVar8 == 8) {
        return iVar9;
      }
    }
    pcVar11 = *param_1 + iVar10;
    iVar10 = (int)pcVar11 - (int)param_2;
    do {
      cVar12 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      iVar9 = iVar9 + (uint)(-0x41 < cVar12);
      iVar10 = iVar10 + 1;
    } while (iVar10 != 0);
    return iVar9;
  }
  return 0;
}
