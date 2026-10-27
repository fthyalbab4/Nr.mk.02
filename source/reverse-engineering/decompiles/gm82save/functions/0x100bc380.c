// rea decompile_all
// name: FUN_100bc380
// address: 0x100bc380
// body: available
// range: 0x100bc380-0x100bc528 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_100bc380(undefined4 param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  code *pcVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  undefined1 *puVar21;
  bool bVar22;

  uVar19 = param_3 >> 1;
  if (uVar19 != 0) {
    uVar17 = param_3 + 1 >> 1;
    uVar16 = uVar17;
    if (param_5 < uVar17) {
      uVar16 = param_5;
    }
    if (uVar19 - 1 <= uVar16) {
      uVar16 = uVar19 - 1;
    }
    iVar12 = 0;
    if (0xf < uVar16) {
      uVar13 = uVar16 + 1 & 0xf;
      uVar14 = 0x10;
      if (uVar13 != 0) {
        uVar14 = uVar13;
      }
      iVar12 = (uVar16 + 1) - uVar14;
      iVar15 = -1;
      do {
        uVar3 = *(undefined1 *)(param_2 + 0x20 + iVar15 * 2);
        uVar4 = *(undefined1 *)(param_2 + 0x1e + iVar15 * 2);
        uVar5 = *(undefined1 *)(param_2 + 0x1c + iVar15 * 2);
        uVar6 = *(undefined1 *)(param_2 + 0x1a + iVar15 * 2);
        uVar7 = *(undefined1 *)(param_2 + 0x18 + iVar15 * 2);
        uVar8 = *(undefined1 *)(param_2 + 0x16 + iVar15 * 2);
        uVar9 = *(undefined1 *)(param_2 + 0x14 + iVar15 * 2);
        uVar10 = *(undefined1 *)(param_2 + 0x12 + iVar15 * 2);
        puVar2 = (undefined8 *)(param_4 + 1 + iVar15);
        *puVar2 = CONCAT44(CONCAT22(CONCAT11(*(undefined1 *)(param_2 + 0x10 + iVar15 * 2),
                                             *(undefined1 *)(param_2 + 0xe + iVar15 * 2)),
                                    CONCAT11(*(undefined1 *)(param_2 + 0xc + iVar15 * 2),
                                             *(undefined1 *)(param_2 + 10 + iVar15 * 2))),
                           CONCAT22(CONCAT11(*(undefined1 *)(param_2 + 8 + iVar15 * 2),
                                             *(undefined1 *)(param_2 + 6 + iVar15 * 2)),
                                    CONCAT11(*(undefined1 *)(param_2 + 4 + iVar15 * 2),
                                             *(undefined1 *)(param_2 + 2 + iVar15 * 2))));
        puVar2[1] = CONCAT44(CONCAT22(CONCAT11(uVar3,uVar4),CONCAT11(uVar5,uVar6)),
                             CONCAT22(CONCAT11(uVar7,uVar8),CONCAT11(uVar9,uVar10)));
        iVar15 = iVar15 + 0x10;
      } while (uVar16 - uVar14 != iVar15);
    }
    puVar21 = (undefined1 *)(param_4 + iVar12);
    iVar18 = uVar17 - iVar12;
    iVar20 = uVar19 - iVar12;
    iVar15 = param_5 - iVar12;
    iVar12 = iVar12 * 2;
    do {
      bVar22 = iVar18 == 0;
      iVar18 = iVar18 + -1;
      if (bVar22) {
        FUN_10136b52(iVar12,param_3,&PTR_s_C__Users_runneradmin__cargo_regi_10150900);
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      bVar22 = iVar15 == 0;
      iVar15 = iVar15 + -1;
      if (bVar22) {
        FUN_10136b52(param_5,param_5,&PTR_s_C__Users_runneradmin__cargo_regi_10150910);
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      puVar1 = (undefined1 *)(param_2 + iVar12);
      iVar12 = iVar12 + 2;
      *puVar21 = *puVar1;
      puVar21 = puVar21 + 1;
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
  }
  return;
}
