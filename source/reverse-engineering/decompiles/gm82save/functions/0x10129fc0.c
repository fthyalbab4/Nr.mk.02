// rea decompile_all
// name: FUN_10129fc0
// address: 0x10129fc0
// body: available
// range: 0x10129fc0-0x1012a172 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10129fc0(int param_1,int param_2,uint param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;

  uVar8 = *(uint *)(param_1 + 0x8f4);
  uVar7 = param_3;
  if (param_3 < param_4) {
    uVar7 = param_4;
  }
  while( true ) {
    if (0x23c < uVar8) {
      FUN_10136b52(uVar8,0x23d,&PTR_s_C__Users_runneradmin__cargo_regi_1015ce70);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    uVar2 = *(uint *)(param_1 + 4);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + uVar8 * 4);
    *(uint *)(param_1 + 0x8f4) = uVar8 - 1;
    FUN_1012a180(param_1,param_2,param_3,1);
    iVar3 = *(int *)(param_1 + 0x8f8);
    uVar4 = *(uint *)(param_1 + 4);
    uVar8 = iVar3 - 1;
    *(uint *)(param_1 + 0x8f8) = uVar8;
    if (0x23c < uVar8) {
      FUN_10136b52(uVar8,0x23d,&PTR_s_C__Users_runneradmin__cargo_regi_1015ce10);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    *(uint *)(param_1 + -4 + iVar3 * 4) = uVar2;
    iVar3 = *(int *)(param_1 + 0x8f8);
    uVar8 = iVar3 - 1;
    *(uint *)(param_1 + 0x8f8) = uVar8;
    if (0x23c < uVar8) {
      FUN_10136b52(uVar8,0x23d,&PTR_s_C__Users_runneradmin__cargo_regi_1015ce20);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    *(uint *)(param_1 + -4 + iVar3 * 4) = uVar4;
    if (param_3 <= uVar2) break;
    if (param_3 <= uVar4) {
      FUN_10136b52(uVar4,param_3,&PTR_s_C__Users_runneradmin__cargo_regi_1015ce40);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    if (uVar7 == param_4) {
      FUN_10136b52(uVar7,param_3,&PTR_s_C__Users_runneradmin__cargo_regi_1015ce50);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    bVar1 = *(byte *)(param_1 + 0x8fc + uVar4);
    *(short *)(param_2 + param_4 * 4) =
         *(short *)(param_2 + uVar2 * 4) + *(short *)(param_2 + uVar4 * 4);
    bVar6 = *(byte *)(param_1 + 0x8fc + uVar2);
    *(short *)(param_2 + 2 + uVar2 * 4) = (short)param_4;
    *(short *)(param_2 + 2 + uVar4 * 4) = (short)param_4;
    if (bVar6 < bVar1) {
      bVar6 = bVar1;
    }
    *(byte *)(param_1 + 0x8fc + param_4) = bVar6 + 1;
    *(uint *)(param_1 + 4) = param_4;
    param_4 = param_4 + 1;
    FUN_1012a180(param_1,param_2,param_3,1);
    uVar8 = *(uint *)(param_1 + 0x8f4);
    if (uVar8 < 2) {
      iVar3 = *(int *)(param_1 + 0x8f8);
      uVar8 = iVar3 - 1;
      *(uint *)(param_1 + 0x8f8) = uVar8;
      if (0x23c < uVar8) {
        FUN_10136b52(uVar8,0x23d,&PTR_s_C__Users_runneradmin__cargo_regi_1015ce60);
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      *(undefined4 *)(param_1 + -4 + iVar3 * 4) = *(undefined4 *)(param_1 + 4);
      return;
    }
  }
  FUN_10136b52(uVar2,param_3,&PTR_s_C__Users_runneradmin__cargo_regi_1015ce30);
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}
