// rea decompile_all
// name: FUN_100dbdd0
// address: 0x100dbdd0
// body: available
// range: 0x100dbdd0-0x100dbdee inclusive
// range: 0x100dbdf0-0x100dbf21 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100dbdd0(undefined8 *param_1,int param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  void *_Buf1;
  undefined4 uVar6;
  bool bVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;

  iVar13 = 0;
  puVar12 = param_1 + 2;
  puVar14 = param_1;
  do {
    puVar8 = puVar12;
    uVar4 = *(uint *)(puVar14 + 3);
    uVar5 = *(uint *)(puVar14 + 1);
    _Buf1 = *(void **)((int)puVar14 + 0x14);
    uVar10 = uVar5;
    if (uVar4 < uVar5) {
      uVar10 = uVar4;
    }
    iVar9 = memcmp(_Buf1,*(void **)((int)puVar14 + 4),uVar10);
    bVar1 = *(byte *)((int)puVar14 + 0x1c);
    iVar15 = uVar4 - uVar5;
    if (iVar9 != 0) {
      iVar15 = iVar9;
    }
    bVar7 = iVar15 < 0;
    if (iVar15 == 0) {
      bVar7 = bVar1 < *(byte *)((int)puVar14 + 0xc);
    }
    if (bVar7) {
      uVar2 = *(undefined1 *)((int)puVar14 + 0x1f);
      uVar6 = *(undefined4 *)(puVar14 + 2);
      uVar3 = *(undefined2 *)((int)puVar14 + 0x1d);
      puVar12 = puVar8;
      iVar15 = iVar13;
      do {
        puVar14 = puVar12;
        puVar14[1] = puVar14[-1];
        *puVar14 = puVar14[-2];
        puVar12 = param_1;
        if (iVar15 == 0) break;
        uVar5 = *(uint *)(puVar14 + -3);
        puVar12 = puVar14 + -2;
        uVar10 = uVar5;
        if (uVar4 < uVar5) {
          uVar10 = uVar4;
        }
        iVar11 = memcmp(_Buf1,*(void **)((int)puVar14 + -0x1c),uVar10);
        iVar9 = uVar4 - uVar5;
        if (iVar11 != 0) {
          iVar9 = iVar11;
        }
        bVar7 = iVar9 < 0;
        if (iVar9 == 0) {
          bVar7 = bVar1 < *(byte *)((int)puVar14 + -0x14);
        }
        iVar15 = iVar15 + 0x10;
      } while (bVar7);
      *(undefined4 *)puVar12 = uVar6;
      *(void **)((int)puVar14 + -0xc) = _Buf1;
      *(uint *)(puVar14 + -1) = uVar4;
      *(byte *)((int)puVar14 + -4) = bVar1;
      *(undefined2 *)((int)puVar14 + -3) = uVar3;
      *(undefined1 *)((int)puVar14 + -1) = uVar2;
    }
    iVar13 = iVar13 + -0x10;
    puVar12 = puVar8 + 2;
    puVar14 = puVar8;
    if (puVar8 + 2 == param_1 + param_2 * 2) {
      return;
    }
  } while( true );
}
