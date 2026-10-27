// rea decompile_all
// name: FUN_100bbe60
// address: 0x100bbe60
// body: available
// range: 0x100bbe60-0x100bc048 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100bbe60(void *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  undefined4 local_410;

  if (*(int *)(param_2 + 0xd8) == -2) {
    FUN_10136c10(&DAT_10150940,0x14,&PTR_s_C__Users_runneradmin__cargo_regi_10150954);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar1 = *(uint *)(param_2 + 0xe0);
  puVar11 = *(undefined4 **)(param_2 + 0xdc);
  iVar7 = *(int *)(param_2 + 0xcc);
  iVar12 = *(int *)(param_2 + 0xd0);
  uVar10 = *(uint *)(param_2 + 0xd4);
  iVar4 = -0x400;
  do {
    *(undefined4 *)(&stack0xfffffff0 + iVar4) = 0xff000000;
    iVar4 = iVar4 + 4;
  } while (iVar4 != 0);
  if (iVar7 == -2) {
    uVar10 = 0;
  }
  uVar9 = uVar1 / 3;
  if (uVar9 < uVar10) {
    uVar10 = 0;
    iVar12 = 1;
  }
  if (iVar7 == -2) {
    iVar12 = 1;
  }
  uVar13 = uVar1;
  if (uVar1 < 4) {
    if (uVar1 == 0) goto LAB_100bbf4f;
    puVar5 = &local_410;
  }
  else {
    puVar5 = &local_410;
    iVar7 = 0x100;
    do {
      if (iVar7 == 0) {
        FUN_10136b52(0,0,&PTR_s_C__Users_runneradmin__cargo_regi_10150994);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar2 = *puVar11;
      uVar13 = uVar13 - 3;
      puVar11 = (undefined4 *)((int)puVar11 + 3);
      iVar7 = iVar7 + -1;
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
    } while (3 < uVar13);
    if (iVar7 == 0) {
      FUN_10136b52(0,0,&PTR_s_C__Users_runneradmin__cargo_regi_10150964);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  if (uVar13 != 3) {
    FUN_10136a50(0,3,uVar13,&PTR_s_C__Users_runneradmin__cargo_regi_10150974);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar11 + 2);
  *(undefined2 *)puVar5 = *(undefined2 *)puVar11;
LAB_100bbf4f:
  uVar13 = 0x100;
  if (uVar10 < 0x100) {
    uVar13 = uVar10;
  }
  if (uVar10 != 0) {
    uVar8 = 0;
    do {
      *(undefined1 *)((int)&local_410 + uVar8 * 4 + 3) = *(undefined1 *)(iVar12 + uVar8);
      uVar8 = uVar8 + 1;
    } while (uVar13 != uVar8);
  }
  if (0x302 < uVar1) {
    FUN_10136a50(uVar10,uVar9,0x100,&PTR_s_C__Users_runneradmin__cargo_regi_10150984);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (uVar10 != uVar9) {
    puVar6 = (undefined1 *)((int)&local_410 + uVar10 * 4 + 3);
    iVar7 = uVar9 * 4 + uVar10 * -4;
    do {
      *puVar6 = 0xff;
      puVar6 = puVar6 + 4;
      iVar7 = iVar7 + -4;
    } while (iVar7 != 0);
  }
  memcpy(param_1,&local_410,0x400);
  return;
}
