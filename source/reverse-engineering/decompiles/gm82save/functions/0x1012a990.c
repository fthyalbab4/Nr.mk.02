// rea decompile_all
// name: FUN_1012a990
// address: 0x1012a990
// body: available
// range: 0x1012a990-0x1012aabd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1012a990(int *param_1,uint param_2,uint param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;

  bVar5 = *(byte *)(param_1 + 6);
  if (bVar5 == 0x40) {
    uVar7 = param_1[1];
    iVar1 = param_1[3];
    uVar6 = param_1[2] + iVar1;
    if (uVar7 - uVar6 < 8) {
      FUN_101369c0("buf.len() must fit in remaining()",0x43,
                   &PTR_s_C__Users_runneradmin__cargo_regi_1015c44c);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (uVar7 < uVar6) {
      FUN_10136a50(uVar6,uVar7,uVar7,&PTR_s_C__Users_runneradmin__cargo_regi_1015c44c);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    iVar2 = *param_1;
    iVar3 = param_1[4];
    *(int *)(iVar2 + 4 + uVar6) = param_1[5];
    *(int *)(iVar2 + uVar6) = iVar3;
    param_1[3] = iVar1 + 8;
    param_1[4] = param_2;
    param_1[5] = param_3;
  }
  else {
    uVar9 = 0;
    iVar1 = param_1[3];
    uVar7 = param_1[1];
    uVar6 = param_2 << (bVar5 & 0x1f);
    if ((bVar5 & 0x20) == 0) {
      uVar9 = uVar6;
      uVar6 = param_3 << (bVar5 & 0x1f) | param_2 >> 0x20 - (bVar5 & 0x1f);
    }
    uVar8 = param_1[2] + iVar1;
    if (uVar7 - uVar8 < 8) {
      FUN_101369c0("buf.len() must fit in remaining()",0x43,
                   &PTR_s_C__Users_runneradmin__cargo_regi_1015c45c);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (uVar7 < uVar8) {
      FUN_10136a50(uVar8,uVar7,uVar7,&PTR_s_C__Users_runneradmin__cargo_regi_1015c45c);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar7 = param_1[4];
    iVar2 = *param_1;
    bVar5 = -bVar5;
    *(uint *)(iVar2 + 4 + uVar8) = uVar6 | param_1[5];
    *(uint *)(iVar2 + uVar8) = uVar9 | uVar7;
    param_1[3] = iVar1 + 8;
    uVar6 = 0;
    uVar7 = param_3 >> (bVar5 & 0x1f);
    if ((bVar5 & 0x20) == 0) {
      uVar6 = uVar7;
      uVar7 = param_2 >> (bVar5 & 0x1f) | param_3 << 0x20 - (bVar5 & 0x1f);
    }
    param_1[5] = uVar6;
    param_1[4] = uVar7;
  }
  *(char *)(param_1 + 6) = param_4 + -0x40;
  return;
}
