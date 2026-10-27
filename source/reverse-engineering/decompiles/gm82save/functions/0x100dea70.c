// rea decompile_all
// name: FUN_100dea70
// address: 0x100dea70
// body: available
// range: 0x100dea70-0x100defc6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100dea70(byte *param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  undefined2 *puVar12;
  byte *pbVar13;
  bool bVar14;
  undefined2 *puVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint local_28;
  byte local_24;

  bVar14 = param_1[2] < *param_1;
  if (param_1[2] == *param_1) {
    bVar14 = param_1[3] < param_1[1];
  }
  uVar19 = (uint)bVar14;
  bVar8 = param_1[6] < param_1[4];
  if (param_1[6] == param_1[4]) {
    bVar8 = param_1[7] < param_1[5];
  }
  uVar17 = (uint)bVar8;
  uVar9 = uVar17 ^ 3;
  uVar20 = (uint)(bVar14 ^ 1);
  bVar14 = param_1[uVar17 * 2 + 4] < param_1[uVar19 * 2];
  if (param_1[uVar17 * 2 + 4] == param_1[uVar19 * 2]) {
    bVar14 = param_1[uVar17 * 2 + 5] < param_1[uVar19 * 2 + 1];
  }
  uVar21 = uVar17 + 2;
  bVar8 = param_1[uVar9 * 2] < param_1[uVar20 * 2];
  if (param_1[uVar9 * 2] == param_1[uVar20 * 2]) {
    bVar8 = param_1[uVar9 * 2 + 1] < param_1[uVar20 * 2 + 1];
  }
  uVar18 = uVar20;
  if (bVar8) {
    uVar18 = uVar21;
  }
  pbVar16 = param_1 + uVar20 * 2;
  if (bVar8) {
    pbVar16 = param_1 + uVar17 * 2 + 4;
  }
  if (bVar14) {
    pbVar16 = param_1 + uVar19 * 2;
  }
  uVar11 = uVar21;
  uVar7 = uVar19;
  pbVar13 = param_1 + uVar17 * 2 + 4;
  if (bVar14) {
    uVar11 = uVar20;
    uVar7 = uVar21;
    uVar18 = uVar19;
    pbVar13 = param_1 + uVar20 * 2;
  }
  uVar19 = uVar9;
  if (bVar8) {
    uVar11 = uVar9;
    uVar19 = uVar20;
  }
  pbVar10 = param_1 + uVar9 * 2;
  if (!bVar8) {
    pbVar10 = pbVar13;
  }
  bVar14 = param_1[uVar11 * 2] < param_1[uVar18 * 2];
  if (param_1[uVar11 * 2] == param_1[uVar18 * 2]) {
    bVar14 = pbVar10[1] < pbVar16[1];
  }
  uVar9 = uVar11;
  if (bVar14) {
    uVar9 = uVar18;
    uVar18 = uVar11;
  }
  uVar3 = *(undefined2 *)(param_1 + uVar7 * 2);
  *param_3 = uVar3;
  param_3[1] = *(undefined2 *)(param_1 + uVar18 * 2);
  param_3[2] = *(undefined2 *)(param_1 + uVar9 * 2);
  param_3[3] = *(undefined2 *)(param_1 + uVar19 * 2);
  bVar14 = param_1[10] < param_1[8];
  if (param_1[10] == param_1[8]) {
    bVar14 = param_1[0xb] < param_1[9];
  }
  bVar8 = param_1[0xe] < param_1[0xc];
  if (param_1[0xe] == param_1[0xc]) {
    bVar8 = param_1[0xf] < param_1[0xd];
  }
  uVar17 = (uint)bVar14;
  uVar20 = (uint)bVar8;
  uVar9 = (uint)(bVar14 ^ 1);
  uVar19 = uVar20 ^ 3;
  bVar14 = param_1[uVar20 * 2 + 0xc] < param_1[uVar17 * 2 + 8];
  if (param_1[uVar20 * 2 + 0xc] == param_1[uVar17 * 2 + 8]) {
    bVar14 = param_1[uVar20 * 2 + 0xd] < param_1[uVar17 * 2 + 9];
  }
  uVar21 = uVar20 + 2;
  bVar8 = param_1[uVar19 * 2 + 8] < param_1[uVar9 * 2 + 8];
  if (param_1[uVar19 * 2 + 8] == param_1[uVar9 * 2 + 8]) {
    bVar8 = param_1[uVar19 * 2 + 9] < param_1[uVar9 * 2 + 9];
  }
  uVar18 = uVar9;
  if (bVar8) {
    uVar18 = uVar21;
  }
  pbVar16 = param_1 + uVar9 * 2 + 8;
  if (bVar8) {
    pbVar16 = param_1 + uVar20 * 2 + 0xc;
  }
  if (bVar14) {
    pbVar16 = param_1 + uVar17 * 2 + 8;
  }
  uVar11 = uVar21;
  uVar7 = uVar17;
  pbVar13 = param_1 + uVar20 * 2 + 0xc;
  if (bVar14) {
    uVar11 = uVar9;
    uVar7 = uVar21;
    uVar18 = uVar17;
    pbVar13 = param_1 + uVar9 * 2 + 8;
  }
  uVar17 = uVar19;
  if (bVar8) {
    uVar11 = uVar19;
    uVar17 = uVar9;
  }
  pbVar10 = param_1 + uVar19 * 2 + 8;
  if (!bVar8) {
    pbVar10 = pbVar13;
  }
  uVar4 = *(undefined2 *)(param_1 + uVar7 * 2 + 8);
  bVar14 = param_1[uVar11 * 2 + 8] < param_1[uVar18 * 2 + 8];
  if (param_1[uVar11 * 2 + 8] == param_1[uVar18 * 2 + 8]) {
    bVar14 = pbVar10[1] < pbVar16[1];
  }
  uVar19 = uVar11;
  if (bVar14) {
    uVar19 = uVar18;
    uVar18 = uVar11;
  }
  param_3[4] = uVar4;
  param_3[5] = *(undefined2 *)(param_1 + uVar18 * 2 + 8);
  param_3[6] = *(undefined2 *)(param_1 + uVar19 * 2 + 8);
  uVar5 = *(undefined2 *)(param_1 + uVar17 * 2 + 8);
  param_3[7] = uVar5;
  local_24 = (byte)uVar3;
  bVar14 = (byte)((ushort)uVar4 >> 8) < *(byte *)((int)param_3 + 1);
  if ((byte)uVar4 != local_24) {
    bVar14 = (byte)uVar4 < local_24;
  }
  uVar19 = (uint)bVar14;
  puVar12 = param_3 + 4;
  if (bVar14 == false) {
    puVar12 = param_3;
  }
  uVar9 = (uint)(bVar14 ^ 1);
  *param_2 = *puVar12;
  bVar14 = (byte)uVar5 < *(byte *)(param_3 + 3);
  if (*(byte *)(param_3 + 3) == (byte)uVar5) {
    bVar14 = (byte)((ushort)uVar5 >> 8) < *(byte *)((int)param_3 + 7);
  }
  uVar17 = (uint)bVar14;
  param_2[7] = param_3[(uint)(bVar14 ^ 1) * 4 + 3];
  puVar12 = param_3 + uVar19 + 4;
  bVar14 = *(byte *)(param_3 + uVar19 + 4) < *(byte *)(param_3 + uVar9);
  if (*(byte *)(param_3 + uVar19 + 4) == *(byte *)(param_3 + uVar9)) {
    bVar14 = *(byte *)((int)param_3 + uVar19 * 2 + 9) < *(byte *)((int)param_3 + uVar9 * 2 + 1);
  }
  puVar1 = param_3 + uVar9;
  puVar15 = puVar1;
  if (bVar14 != false) {
    puVar15 = puVar12;
  }
  param_2[1] = *puVar15;
  pbVar16 = (byte *)(param_3 + (3 - uVar17));
  uVar19 = (uint)bVar14;
  bVar8 = *(byte *)(param_3 + uVar17 + 6) < *pbVar16;
  if (*(byte *)(param_3 + uVar17 + 6) == *pbVar16) {
    bVar8 = *(byte *)((int)param_3 + uVar17 * 2 + 0xd) < pbVar16[1];
  }
  uVar9 = (uint)bVar8;
  pbVar13 = (byte *)(param_3 + uVar17 + 6);
  if (bVar8 != false) {
    pbVar13 = pbVar16;
  }
  param_2[6] = *(undefined2 *)pbVar13;
  puVar15 = puVar12 + uVar19;
  pbVar16 = pbVar16 + uVar9 * -2;
  uVar20 = (uint)(bVar14 ^ 1);
  puVar2 = puVar1 + uVar20;
  bVar14 = *(byte *)(puVar12 + uVar19) < *(byte *)(puVar1 + uVar20);
  if (*(byte *)(puVar12 + uVar19) == *(byte *)(puVar1 + uVar20)) {
    bVar14 = *(byte *)((int)puVar12 + uVar19 * 2 + 1) < *(byte *)((int)puVar1 + uVar20 * 2 + 1);
  }
  puVar12 = puVar2;
  if (bVar14 != false) {
    puVar12 = puVar15;
  }
  param_2[2] = *puVar12;
  bVar8 = *(byte *)(param_3 + uVar17 + uVar9 + 5) < *pbVar16;
  if (*(byte *)(param_3 + uVar17 + uVar9 + 5) == *pbVar16) {
    bVar8 = *(byte *)((int)param_3 + uVar9 * 2 + uVar17 * 2 + 0xb) < pbVar16[1];
  }
  pbVar13 = (byte *)(param_3 + uVar17 + uVar9 + 5);
  if (bVar8 != false) {
    pbVar13 = pbVar16;
  }
  param_2[5] = *(undefined2 *)pbVar13;
  uVar19 = (uint)bVar14;
  uVar21 = (uint)bVar8;
  pbVar16 = pbVar16 + uVar21 * -2;
  uVar20 = (uint)(bVar14 ^ 1);
  bVar14 = *(byte *)(puVar15 + uVar19) < *(byte *)(puVar2 + uVar20);
  if (*(byte *)(puVar15 + uVar19) == *(byte *)(puVar2 + uVar20)) {
    bVar14 = *(byte *)((int)puVar15 + uVar19 * 2 + 1) < *(byte *)((int)puVar2 + uVar20 * 2 + 1);
  }
  puVar12 = puVar2 + uVar20;
  if (bVar14 != false) {
    puVar12 = puVar15 + uVar19;
  }
  param_2[3] = *puVar12;
  local_28 = (uint)(bVar14 ^ 1);
  bVar8 = *(byte *)(param_3 + uVar17 + uVar9 + uVar21 + 4) < *pbVar16;
  if (*(byte *)(param_3 + uVar17 + uVar9 + uVar21 + 4) == *pbVar16) {
    bVar8 = *(byte *)((int)param_3 + uVar21 * 2 + uVar9 * 2 + uVar17 * 2 + 9) < pbVar16[1];
  }
  pbVar13 = (byte *)(param_3 + uVar17 + uVar9 + uVar21 + 4);
  if (bVar8 != false) {
    pbVar13 = pbVar16;
  }
  param_2[4] = *(undefined2 *)pbVar13;
  if (((byte *)(puVar2 + uVar20 + local_28) == pbVar16 + (uint)bVar8 * -2 + 2) &&
     (puVar15 + uVar19 + bVar14 == param_3 + uVar17 + uVar9 + uVar21 + bVar8 + 4)) {
    return;
  }
  FUN_10136ce0();
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}
