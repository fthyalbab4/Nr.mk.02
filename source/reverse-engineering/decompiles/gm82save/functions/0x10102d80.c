// rea decompile_all
// name: FUN_10102d80
// address: 0x10102d80
// body: available
// range: 0x10102d80-0x10102e34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10102d80(int *param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;

  uVar2 = param_2[2];
  iVar3 = *param_2;
  uVar4 = param_2[1];
  uVar8 = uVar4;
  if (uVar4 < uVar2) {
    uVar8 = uVar2;
  }
  uVar7 = uVar2;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
    if (uVar7 - uVar8 == 1) goto LAB_10102dfb;
    cVar1 = *(char *)(iVar3 + -1 + uVar7);
    param_2[2] = uVar7;
  } while ((byte)(cVar1 + 0x9fU) < 6 || (byte)(cVar1 - 0x30U) < 10);
  if (cVar1 == '_') {
    if (uVar2 != 0) {
      if (uVar2 < uVar4) {
        if (*(char *)(iVar3 + uVar2) < -0x40) goto LAB_10102e24;
      }
      else if (uVar2 != uVar4) goto LAB_10102e24;
    }
    if (uVar4 < uVar6) {
LAB_10102e24:
      FUN_10136b90(iVar3,uVar4,uVar2,uVar6,&PTR_s_C__Users_runneradmin__cargo_regi_10155eac);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    *param_1 = iVar3 + uVar2;
    param_1[1] = uVar6 - uVar2;
  }
  else {
LAB_10102dfb:
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 0;
  }
  return;
}
