// rea decompile_all
// name: FUN_10003640
// address: 0x10003640
// body: available
// range: 0x10003640-0x10003731 inclusive
// range: 0x10003740-0x10003760 inclusive
// range: 0x10003770-0x10003865 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_10003640(undefined4 *param_1,uint *param_2,int param_3,uint param_4,int param_5,uint param_6,
            char param_7)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_24;

  uVar5 = param_2[5];
  uVar10 = (param_6 - 1) + uVar5;
  if (param_4 <= uVar10) {
LAB_100037e1:
    param_2[5] = param_4;
    uVar6 = 0;
LAB_10003818:
    *param_1 = uVar6;
    return;
  }
  local_24 = param_2[7];
LAB_100036b1:
  uVar9 = *param_2;
  if ((*(byte *)(param_3 + uVar10) & 0x20) != 0) {
    uVar9 = param_2[1];
  }
  if ((uVar9 >> (*(byte *)(param_3 + uVar10) & 0x1f) & 1) == 0) {
    uVar5 = uVar5 + param_6;
    param_2[5] = uVar5;
    if (param_7 != '\0') goto LAB_100036a0;
LAB_10003753:
    local_24 = 0;
    goto LAB_10003755;
  }
  uVar10 = param_2[2];
  uVar9 = uVar10;
  if (uVar10 < local_24) {
    uVar9 = local_24;
  }
  if (param_7 != '\0') {
    uVar9 = uVar10;
  }
  uVar7 = uVar9;
  uVar8 = param_6;
  if (param_6 < uVar9) {
    uVar8 = uVar9;
  }
  do {
    if (uVar8 == uVar7) {
      uVar9 = local_24;
      if (param_7 != '\0') {
        uVar9 = 0;
      }
      goto LAB_10003790;
    }
    uVar1 = uVar5 + uVar7;
    if (param_4 <= uVar1) {
      uVar10 = uVar9 + uVar5;
      if (uVar9 + uVar5 < param_4) {
        uVar10 = param_4;
      }
      FUN_10136b52(uVar10,param_4,&PTR_s_C__Users_runneradmin__rustup_too_101567c8);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    pcVar2 = (char *)(param_5 + uVar7);
    pcVar3 = (char *)(param_3 + uVar5 + uVar7);
    uVar7 = uVar7 + 1;
  } while (*pcVar2 == *pcVar3);
  uVar5 = (uVar1 - uVar10) + 1;
  if (param_7 == '\0') goto LAB_10003753;
  goto LAB_100036a0;
  while( true ) {
    uVar10 = uVar10 - 1;
    if (param_6 <= uVar10) {
      FUN_10136b52(uVar10,param_6,&PTR_s_C__Users_runneradmin__rustup_too_101567a8);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar7 = uVar10 + uVar5;
    if (param_4 <= uVar7) {
      FUN_10136b52(uVar7,param_4,&PTR_s_C__Users_runneradmin__rustup_too_101567b8);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (*(char *)(param_5 + uVar10) != *(char *)(param_3 + uVar7)) break;
LAB_10003790:
    if (uVar10 <= uVar9) {
      param_2[5] = param_6 + uVar5;
      if (param_7 == '\0') {
        param_2[7] = 0;
      }
      param_1[1] = uVar5;
      uVar6 = 1;
      param_1[2] = param_6 + uVar5;
      goto LAB_10003818;
    }
  }
  uVar5 = uVar5 + param_2[4];
  param_2[5] = uVar5;
  if (param_7 == '\0') {
    local_24 = param_6 - param_2[4];
LAB_10003755:
    param_2[7] = local_24;
  }
LAB_100036a0:
  uVar10 = (param_6 - 1) + uVar5;
  if (param_4 <= uVar10) goto LAB_100037e1;
  goto LAB_100036b1;
}
