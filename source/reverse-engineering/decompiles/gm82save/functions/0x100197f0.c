// rea decompile_all
// name: FUN_100197f0
// address: 0x100197f0
// body: available
// range: 0x100197f0-0x10019b9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100197f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  code *pcVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  uint uVar22;
  undefined4 *puVar23;
  uint uVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;

  uVar15 = (uint)(*(int *)param_1[1] < *(int *)*param_1);
  uVar16 = (uint)(*(int *)*param_1 <= *(int *)param_1[1]);
  uVar17 = (uint)(*(int *)param_1[3] < *(int *)param_1[2]);
  uVar19 = uVar17 + 2;
  uVar24 = uVar17 ^ 3;
  uVar18 = uVar16;
  if (*(int *)param_1[uVar24] < *(int *)param_1[uVar16]) {
    uVar18 = uVar19;
  }
  uVar22 = uVar19;
  uVar14 = uVar15;
  if (*(int *)param_1[uVar17 + 2] < *(int *)param_1[uVar15]) {
    uVar22 = uVar16;
    uVar14 = uVar19;
    uVar18 = uVar15;
  }
  if (*(int *)param_1[uVar24] < *(int *)param_1[uVar16]) {
    uVar22 = uVar24;
    uVar24 = uVar16;
  }
  uVar19 = uVar22;
  if (*(int *)param_1[uVar22] < *(int *)param_1[uVar18]) {
    uVar19 = uVar18;
    uVar18 = uVar22;
  }
  piVar5 = (int *)param_1[uVar14];
  *param_3 = piVar5;
  param_3[1] = param_1[uVar18];
  param_3[2] = param_1[uVar19];
  piVar6 = (int *)param_1[uVar24];
  param_3[3] = piVar6;
  uVar16 = (uint)(*(int *)param_1[5] < *(int *)param_1[4]);
  uVar15 = (uint)(*(int *)param_1[4] <= *(int *)param_1[5]);
  uVar17 = (uint)(*(int *)param_1[7] < *(int *)param_1[6]);
  uVar19 = uVar17 + 2;
  uVar18 = uVar17 ^ 3;
  uVar24 = uVar15;
  if (*(int *)param_1[uVar18 + 4] < *(int *)param_1[uVar15 + 4]) {
    uVar24 = uVar19;
  }
  uVar22 = uVar19;
  uVar14 = uVar16;
  if (*(int *)param_1[uVar17 + 6] < *(int *)param_1[uVar16 + 4]) {
    uVar22 = uVar15;
    uVar14 = uVar19;
    uVar24 = uVar16;
  }
  if (*(int *)param_1[uVar15 + 4] <= *(int *)param_1[uVar18 + 4]) {
    uVar15 = uVar18;
    uVar18 = uVar22;
  }
  iVar7 = *(int *)param_1[uVar18 + 4];
  iVar1 = *(int *)param_1[uVar24 + 4];
  piVar8 = (int *)param_1[uVar14 + 4];
  uVar19 = uVar24;
  if (iVar7 < iVar1) {
    uVar19 = uVar18;
  }
  param_3[4] = piVar8;
  if (iVar7 < iVar1) {
    uVar18 = uVar24;
  }
  param_3[5] = param_1[uVar19 + 4];
  param_3[6] = param_1[uVar18 + 4];
  piVar9 = (int *)param_1[uVar15 + 4];
  param_3[7] = piVar9;
  iVar7 = *piVar8;
  iVar1 = *piVar5;
  puVar21 = param_3 + 4;
  if (iVar1 <= iVar7) {
    puVar21 = param_3;
  }
  *param_2 = *puVar21;
  iVar10 = *piVar9;
  iVar2 = *piVar6;
  uVar19 = (uint)(iVar2 <= iVar10);
  uVar24 = (uint)(iVar10 < iVar2);
  param_2[7] = param_3[uVar19 * 4 + 3];
  puVar21 = param_3 + (iVar7 < iVar1) + 4;
  puVar20 = param_3 + (iVar1 <= iVar7);
  iVar2 = *(int *)param_3[(iVar7 < iVar1) + 4];
  iVar1 = *(int *)param_3[iVar1 <= iVar7];
  puVar23 = puVar20;
  if (iVar2 < iVar1) {
    puVar23 = puVar21;
  }
  param_2[1] = *puVar23;
  iVar10 = *(int *)param_3[7 - uVar19];
  iVar7 = *(int *)param_3[3 - uVar24];
  puVar23 = param_3 + (7 - uVar19);
  if (iVar10 < iVar7) {
    puVar23 = param_3 + (3 - uVar24);
  }
  puVar26 = param_3 + (7 - uVar19) + -(uint)(iVar7 <= iVar10);
  param_2[6] = *puVar23;
  puVar25 = param_3 + (3 - uVar24) + -(uint)(iVar10 < iVar7);
  iVar10 = *(int *)puVar21[iVar2 < iVar1];
  puVar23 = puVar20 + (iVar1 <= iVar2);
  iVar7 = *(int *)puVar20[iVar1 <= iVar2];
  puVar21 = puVar21 + (iVar2 < iVar1);
  puVar20 = puVar23;
  if (iVar10 < iVar7) {
    puVar20 = puVar21;
  }
  param_2[2] = *puVar20;
  iVar2 = *(int *)*puVar26;
  iVar1 = *(int *)*puVar25;
  puVar20 = puVar26;
  if (iVar2 < iVar1) {
    puVar20 = puVar25;
  }
  param_2[5] = *puVar20;
  iVar11 = *(int *)puVar21[iVar10 < iVar7];
  iVar3 = *(int *)puVar23[iVar7 <= iVar10];
  puVar20 = puVar23 + (iVar7 <= iVar10);
  if (iVar11 < iVar3) {
    puVar20 = puVar21 + (iVar10 < iVar7);
  }
  param_2[3] = *puVar20;
  iVar12 = *(int *)puVar26[-(uint)(iVar1 <= iVar2)];
  iVar4 = *(int *)puVar25[-(uint)(iVar2 < iVar1)];
  puVar20 = puVar26 + -(uint)(iVar1 <= iVar2);
  if (iVar12 < iVar4) {
    puVar20 = puVar25 + -(uint)(iVar2 < iVar1);
  }
  param_2[4] = *puVar20;
  if ((puVar23 + (iVar7 <= iVar10) + (iVar3 <= iVar11) ==
       puVar25 + -(uint)(iVar2 < iVar1) + (iVar4 <= iVar12)) &&
     (puVar21 + (iVar10 < iVar7) + (iVar11 < iVar3) ==
      puVar26 + -(uint)(iVar1 <= iVar2) + (iVar12 < iVar4))) {
    return;
  }
  FUN_10136ce0();
                    /* WARNING: Does not return */
  pcVar13 = (code *)invalidInstructionException();
  (*pcVar13)();
}
