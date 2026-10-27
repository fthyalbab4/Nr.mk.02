// rea decompile_all
// name: FUN_100c2ab0
// address: 0x100c2ab0
// body: available
// range: 0x100c2ab0-0x100c2c52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100c2ab0(undefined8 *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  bool bVar13;
  undefined8 *local_24;
  uint local_1c;

  local_1c = param_2 >> 1;
  puVar10 = param_1 + param_2 * 2 + -2;
  local_24 = param_3;
  puVar6 = param_3 + param_2 * 2 + -2;
  puVar9 = param_1 + local_1c * 2;
  puVar12 = param_1 + local_1c * 2 + -2;
  puVar8 = local_24;
  do {
    local_24 = puVar8;
    uVar2 = *(uint *)(puVar9 + 1);
    uVar3 = *(uint *)(param_1 + 1);
    uVar7 = uVar3;
    if (uVar2 < uVar3) {
      uVar7 = uVar2;
    }
    iVar5 = memcmp(*(void **)((int)puVar9 + 4),*(void **)((int)param_1 + 4),uVar7);
    iVar11 = uVar2 - uVar3;
    if (iVar5 != 0) {
      iVar11 = iVar5;
    }
    bVar13 = iVar11 < 0;
    if (iVar11 == 0) {
      bVar13 = *(byte *)((int)puVar9 + 0xc) < *(byte *)((int)param_1 + 0xc);
    }
    puVar8 = param_1;
    if (bVar13 != false) {
      puVar8 = puVar9;
    }
    uVar1 = *puVar8;
    puVar9 = puVar9 + (uint)bVar13 * 2;
    param_1 = param_1 + (uint)(bVar13 ^ 1) * 2;
    local_24[1] = puVar8[1];
    *local_24 = uVar1;
    uVar2 = *(uint *)(puVar10 + 1);
    uVar3 = *(uint *)(puVar12 + 1);
    uVar7 = uVar3;
    if (uVar2 < uVar3) {
      uVar7 = uVar2;
    }
    iVar5 = memcmp(*(void **)((int)puVar10 + 4),*(void **)((int)puVar12 + 4),uVar7);
    iVar11 = uVar2 - uVar3;
    if (iVar5 != 0) {
      iVar11 = iVar5;
    }
    bVar13 = iVar11 < 0;
    if (iVar11 == 0) {
      bVar13 = *(byte *)((int)puVar10 + 0xc) < *(byte *)((int)puVar12 + 0xc);
    }
    puVar8 = puVar10;
    if (bVar13 != false) {
      puVar8 = puVar12;
    }
    uVar1 = *puVar8;
    puVar12 = puVar12 + (uint)bVar13 * -2;
    puVar10 = puVar10 + (uint)bVar13 * 2 + -2;
    puVar6[1] = puVar8[1];
    *puVar6 = uVar1;
    puVar6 = puVar6 + -2;
    local_1c = local_1c - 1;
    puVar8 = local_24 + 2;
  } while (local_1c != 0);
  if ((param_2 & 1) != 0) {
    bVar13 = param_1 < puVar12 + 2;
    puVar6 = puVar9;
    if (bVar13) {
      puVar6 = param_1;
    }
    uVar1 = *puVar6;
    param_1 = param_1 + (uint)bVar13 * 2;
    puVar9 = puVar9 + (uint)!bVar13 * 2;
    local_24[3] = puVar6[1];
    local_24[2] = uVar1;
  }
  if ((param_1 == puVar12 + 2) && (puVar9 == puVar10 + 2)) {
    return;
  }
  FUN_10136ce0();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}
