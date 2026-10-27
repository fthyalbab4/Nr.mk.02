// rea decompile_all
// name: FUN_100dad30
// address: 0x100dad30
// body: available
// range: 0x100dad30-0x100dae73 inclusive
// range: 0x100dae80-0x100daf2f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100dad30(undefined8 *param_1,int *param_2,int param_3,uint param_4)

{
  undefined2 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  undefined2 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;

  iVar5 = param_2[1];
  uVar8 = *(uint *)(iVar5 + 0x1c);
  if (param_4 <= *(uint *)(iVar5 + 0x1c)) {
    uVar8 = param_4;
  }
  if (uVar8 == 0) {
    uVar14 = 0;
  }
  else {
    uVar13 = 0;
    pcVar10 = (char *)(*(int *)(iVar5 + 0x18) + 0xe);
    do {
      uVar14 = uVar13;
      if (((pcVar10[-2] != '\x01') || (pcVar10[-1] != *(char *)(param_3 + uVar13 * 2))) ||
         (*pcVar10 != *(char *)(param_3 + 1 + uVar13 * 2))) break;
      uVar13 = uVar13 + 1;
      pcVar10 = pcVar10 + 0x10;
      uVar14 = uVar8;
    } while (uVar8 != uVar13);
  }
  iVar11 = param_4 - uVar14;
  if (param_4 < uVar14 || iVar11 == 0) {
    FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_101526ec);
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  FUN_100db030(&local_58,param_2,uVar14);
  if (local_58 == 0xfffffffe) {
    if (*(int *)(iVar5 + 0x1c) == 0) {
      FUN_10136c10("non-empty nodes",0xf,&PTR_s_C__Users_runneradmin__cargo_regi_101526a0);
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    iVar9 = *(int *)(iVar5 + 0x1c) * 0x10;
    if (*(char *)(*(int *)(iVar5 + 0x18) + -4 + iVar9) == '\x01') {
      FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10152680);
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    puVar1 = (undefined2 *)(param_3 + uVar14 * 2);
    iVar9 = *(int *)(iVar5 + 0x18) + iVar9;
    uVar4 = *puVar1;
    *(undefined1 *)(iVar9 + -4) = 1;
    *(undefined2 *)(iVar9 + -3) = uVar4;
    if (iVar11 != 1) {
      iVar9 = *(int *)(iVar5 + 0x1c);
      puVar12 = puVar1 + 1;
      iVar15 = iVar9 << 4;
      do {
        uVar2 = *(undefined1 *)puVar12;
        uVar3 = *(undefined1 *)((int)puVar12 + 1);
        if (iVar9 == *(int *)(iVar5 + 0x14)) {
          FUN_10135f30((uint *)(iVar5 + 0x14));
        }
        iVar6 = *(int *)(iVar5 + 0x18);
        puVar12 = puVar12 + 1;
        iVar9 = iVar9 + 1;
        *(undefined4 *)(iVar6 + iVar15) = 0;
        *(undefined4 *)(iVar6 + 4 + iVar15) = 4;
        *(undefined4 *)(iVar6 + 8 + iVar15) = 0;
        *(undefined1 *)(iVar6 + 0xc + iVar15) = 1;
        *(undefined1 *)(iVar6 + 0xd + iVar15) = uVar2;
        *(undefined1 *)(iVar6 + 0xe + iVar15) = uVar3;
        iVar15 = iVar15 + 0x10;
        *(int *)(iVar5 + 0x1c) = iVar9;
      } while (puVar12 != puVar1 + iVar11);
    }
    *(undefined4 *)param_1 = 0xfffffffe;
  }
  else {
    param_1[6] = local_28;
    param_1[5] = local_30;
    param_1[7] = local_20;
    param_1[4] = local_38;
    param_1[3] = local_40;
    param_1[2] = local_48;
    *param_1 = CONCAT44(uStack_54,local_58);
    param_1[1] = local_50;
  }
  return;
}
