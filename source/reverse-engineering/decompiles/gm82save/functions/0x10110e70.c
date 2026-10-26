// rea decompile_all
// name: FUN_10110e70
// address: 0x10110e70
// body: available
// range: 0x10110e70-0x10110f09 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10110e70(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined *puVar4;
  uint local_18;
  undefined1 *local_14;
  undefined1 *local_10;

  local_14 = (undefined1 *)&local_18;
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= uVar1) {
    iVar2 = *(int *)(param_1 + 4);
    if ((param_2 != 0) && (param_2 < uVar1)) {
      local_18 = param_2;
      if (*(char *)(iVar2 + param_2) == -0x13) {
        if (uVar1 <= param_2 + 1) {
          FUN_10136b52(param_2 + 1,uVar1,&PTR_s_C__Users_runneradmin__rustup_too_10157148);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if ((((2 < param_2) && (0x9f < *(byte *)(iVar2 + 1 + param_2))) &&
            (*(char *)(iVar2 + -3 + param_2) == -0x13)) && (0x9f < *(byte *)(iVar2 + -2 + param_2)))
        {
          puVar4 = &DAT_10157c6a;
LAB_10110edc:
          local_10 = &LAB_10096fc0;
          FUN_101369c0(puVar4,&local_14,&PTR_s_C__Users_runneradmin__rustup_too_10157148);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
      }
      else if (*(char *)(iVar2 + param_2) < -0x40) {
        puVar4 = &DAT_10157c3f;
        goto LAB_10110edc;
      }
    }
    *(uint *)(param_1 + 8) = param_2;
  }
  return;
}
