// rea decompile_all
// name: FUN_10095a30
// address: 0x10095a30
// body: available
// range: 0x10095a30-0x10095bea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * __fastcall FUN_10095a30(void *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  sbyte sVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;

  if (0x4ff < param_2) {
    FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_10145400);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar16 = *(uint *)((int)param_1 + 0xa0);
  uVar18 = param_2 >> 5;
  uVar12 = uVar16;
  while (uVar12 != 0) {
    uVar12 = uVar12 - 1;
    uVar15 = uVar12;
    if ((0x28 < uVar16) || (uVar15 = uVar12 + uVar18, 0x27 < uVar15)) goto LAB_10095bd7;
    *(undefined4 *)((int)param_1 + uVar15 * 4) = *(undefined4 *)((int)param_1 + uVar12 * 4);
  }
  uVar16 = param_2 & 0x1f;
  if (uVar18 != 0) {
    memset(param_1,0,uVar18 * 4);
  }
  iVar2 = *(int *)((int)param_1 + 0xa0);
  uVar11 = iVar2 + uVar18;
  uVar12 = uVar11;
  if (uVar16 == 0) goto LAB_10095bac;
  uVar15 = uVar11 - 1;
  if (0x27 < uVar11 - 1) {
LAB_10095bd7:
    FUN_10136b52(uVar15,0x28,&PTR_s_C__Users_runneradmin__rustup_too_10145400);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  sVar4 = (sbyte)uVar16;
  uVar14 = *(uint *)((int)param_1 + uVar11 * 4 + -4) >> (-sVar4 & 0x1fU);
  if (uVar14 != 0) {
    uVar15 = uVar11;
    if (0x27 < uVar11) goto LAB_10095bd7;
    *(uint *)((int)param_1 + uVar11 * 4) = uVar14;
    uVar12 = uVar11 + 1;
  }
  if (uVar18 + 1 < uVar11) {
    uVar15 = iVar2 - 1;
    if (7 < uVar15) {
      uVar19 = (ulonglong)uVar16;
      uVar20 = (ulonglong)(0x20 - uVar16);
      puVar13 = (uint *)((int)param_1 + uVar11 * 4 + -0x10);
      uVar17 = uVar15 & 0xfffffff8;
      uVar11 = uVar11 - uVar17;
      uVar14 = uVar17;
      do {
        uVar5 = puVar13[-4];
        uVar6 = puVar13[-3];
        uVar7 = puVar13[-2];
        uVar8 = *puVar13;
        uVar9 = puVar13[1];
        uVar10 = puVar13[2];
        *puVar13 = *puVar13 << uVar19 | puVar13[-1] >> uVar20;
        puVar13[1] = puVar13[1] << uVar19 | uVar8 >> uVar20;
        puVar13[2] = puVar13[2] << uVar19 | uVar9 >> uVar20;
        puVar13[3] = puVar13[3] << uVar19 | uVar10 >> uVar20;
        puVar13[-4] = puVar13[-4] << uVar19 | puVar13[-5] >> uVar20;
        puVar13[-3] = puVar13[-3] << uVar19 | uVar5 >> uVar20;
        puVar13[-2] = puVar13[-2] << uVar19 | uVar6 >> uVar20;
        puVar13[-1] = puVar13[-1] << uVar19 | uVar7 >> uVar20;
        puVar13 = puVar13 + -8;
        uVar14 = uVar14 - 8;
      } while (uVar14 != 0);
      if (uVar15 == uVar17) goto LAB_10095ba2;
    }
    do {
      *(uint *)((int)param_1 + uVar11 * 4 + -4) =
           *(uint *)((int)param_1 + uVar11 * 4 + -8) >> ((byte)(0x20 - uVar16) & 0x1f) |
           *(int *)((int)param_1 + uVar11 * 4 + -4) << sVar4;
      uVar11 = uVar11 - 1;
    } while (uVar18 + 1 < uVar11);
  }
LAB_10095ba2:
  piVar1 = (int *)((int)param_1 + uVar18 * 4);
  *piVar1 = *piVar1 << sVar4;
LAB_10095bac:
  *(uint *)((int)param_1 + 0xa0) = uVar12;
  return param_1;
}
