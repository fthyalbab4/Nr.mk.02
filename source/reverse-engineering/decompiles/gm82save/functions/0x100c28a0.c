// rea decompile_all
// name: FUN_100c28a0
// address: 0x100c28a0
// body: available
// range: 0x100c28a0-0x100c2aad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100c28a0(int param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  uint uVar12;
  bool bVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int iVar17;

  uVar3 = *(uint *)(param_1 + 0x18);
  uVar4 = *(uint *)(param_1 + 8);
  uVar12 = uVar4;
  if (uVar3 < uVar4) {
    uVar12 = uVar3;
  }
  iVar7 = memcmp(*(void **)(param_1 + 0x14),*(void **)(param_1 + 4),uVar12);
  iVar8 = uVar3 - uVar4;
  if (iVar7 != 0) {
    iVar8 = iVar7;
  }
  uVar3 = *(uint *)(param_1 + 0x28);
  bVar13 = iVar8 < 0;
  if (iVar8 == 0) {
    bVar13 = *(byte *)(param_1 + 0x1c) < *(byte *)(param_1 + 0xc);
  }
  uVar4 = *(uint *)(param_1 + 0x38);
  uVar12 = uVar3;
  if (uVar4 < uVar3) {
    uVar12 = uVar4;
  }
  iVar7 = memcmp(*(void **)(param_1 + 0x34),*(void **)(param_1 + 0x24),uVar12);
  iVar8 = uVar4 - uVar3;
  if (iVar7 != 0) {
    iVar8 = iVar7;
  }
  bVar6 = iVar8 < 0;
  if (iVar8 == 0) {
    bVar6 = *(byte *)(param_1 + 0x3c) < *(byte *)(param_1 + 0x2c);
  }
  iVar17 = (uint)bVar13 * 0x10;
  iVar14 = (uint)bVar6 * 0x10;
  iVar7 = (uint)(bVar13 ^ 1) * 0x10;
  iVar8 = (uint)(bVar6 ^ 1) * 0x10;
  uVar3 = *(uint *)(param_1 + 8 + iVar17);
  uVar4 = *(uint *)(param_1 + 0x28 + iVar14);
  uVar12 = uVar3;
  if (uVar4 < uVar3) {
    uVar12 = uVar4;
  }
  puVar11 = (undefined8 *)(param_1 + iVar7);
  puVar1 = (undefined8 *)(param_1 + 0x20 + iVar14);
  iVar9 = memcmp(*(void **)(param_1 + 0x24 + iVar14),*(void **)(param_1 + 4 + iVar17),uVar12);
  iVar10 = uVar4 - uVar3;
  if (iVar9 != 0) {
    iVar10 = iVar9;
  }
  bVar13 = iVar10 < 0;
  if (iVar10 == 0) {
    bVar13 = *(byte *)(param_1 + 0x2c + iVar14) < *(byte *)(param_1 + 0xc + iVar17);
  }
  uVar3 = *(uint *)(param_1 + 0x28 + iVar8);
  uVar4 = *(uint *)(param_1 + 8 + iVar7);
  uVar12 = uVar4;
  if (uVar3 < uVar4) {
    uVar12 = uVar3;
  }
  iVar10 = memcmp(*(void **)(param_1 + 0x24 + iVar8),*(void **)(param_1 + 4 + iVar7),uVar12);
  iVar14 = uVar3 - uVar4;
  if (iVar10 != 0) {
    iVar14 = iVar10;
  }
  bVar6 = iVar14 < 0;
  if (iVar14 == 0) {
    bVar6 = *(byte *)(param_1 + 0x2c + iVar8) < *(byte *)(param_1 + 0xc + iVar7);
  }
  puVar15 = puVar11;
  if (bVar6) {
    puVar15 = puVar1;
  }
  puVar16 = puVar1;
  puVar5 = (undefined8 *)(param_1 + iVar17);
  if (bVar13) {
    puVar16 = puVar11;
    puVar5 = puVar1;
    puVar15 = (undefined8 *)(param_1 + iVar17);
  }
  puVar1 = (undefined8 *)(param_1 + 0x20 + iVar8);
  if (!bVar6) {
    puVar11 = puVar1;
    puVar1 = puVar16;
  }
  uVar3 = *(uint *)(puVar1 + 1);
  uVar4 = *(uint *)(puVar15 + 1);
  uVar12 = uVar4;
  if (uVar3 < uVar4) {
    uVar12 = uVar3;
  }
  iVar7 = memcmp(*(void **)((int)puVar1 + 4),*(void **)((int)puVar15 + 4),uVar12);
  iVar8 = uVar3 - uVar4;
  if (iVar7 != 0) {
    iVar8 = iVar7;
  }
  bVar13 = iVar8 < 0;
  if (iVar8 == 0) {
    bVar13 = *(byte *)((int)puVar1 + 0xc) < *(byte *)((int)puVar15 + 0xc);
  }
  uVar2 = *puVar5;
  puVar16 = puVar1;
  if (bVar13) {
    puVar16 = puVar15;
    puVar15 = puVar1;
  }
  param_2[1] = puVar5[1];
  *param_2 = uVar2;
  uVar2 = *puVar15;
  param_2[3] = puVar15[1];
  param_2[2] = uVar2;
  uVar2 = *puVar16;
  param_2[5] = puVar16[1];
  param_2[4] = uVar2;
  uVar2 = puVar11[1];
  param_2[6] = *puVar11;
  param_2[7] = uVar2;
  return;
}
