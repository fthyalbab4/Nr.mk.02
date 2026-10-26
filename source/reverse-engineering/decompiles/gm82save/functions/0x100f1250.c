// rea decompile_all
// name: FUN_100f1250
// address: 0x100f1250
// body: available
// range: 0x100f1250-0x100f1345 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_100f1250(int *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int local_20;
  int local_1c;

  iVar1 = *param_1;
  uVar2 = param_1[2];
  uVar6 = *(uint *)(iVar1 + 0x50);
  if (uVar6 != uVar2) {
    local_1c = *(int *)(iVar1 + 0x54);
    local_20 = *(int *)(iVar1 + 0x58);
    uVar4 = FUN_100f0c40(param_1);
    if (uVar4 == 10) {
      if (local_1c == -1) {
        FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10153e68);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      local_1c = local_1c + 1;
      local_20 = 1;
    }
    else {
      if (local_20 == -1) {
        FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10153e88);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      local_20 = local_20 + 1;
    }
    uVar4 = FUN_100f0c40(param_1);
    iVar5 = 1;
    if ((0x7f < uVar4) && (iVar5 = 2, 0x7ff < uVar4)) {
      iVar5 = 4 - (uint)(uVar4 < 0x10000);
    }
    uVar6 = iVar5 + uVar6;
    *(uint *)(iVar1 + 0x50) = uVar6;
    *(int *)(iVar1 + 0x54) = local_1c;
    *(int *)(iVar1 + 0x58) = local_20;
    if (uVar6 != 0) {
      if (uVar6 < uVar2) {
        if (*(char *)(param_1[1] + uVar6) < -0x40) {
LAB_100f12fe:
          FUN_10136b90(param_1[1],uVar2,uVar6,uVar2,&PTR_s_C__Users_runneradmin__cargo_regi_10153e78
                      );
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
      }
      else if (uVar6 != uVar2) goto LAB_100f12fe;
    }
    if (uVar6 != uVar2) {
      return CONCAT31((int3)((uint)local_1c >> 8),1);
    }
  }
  return 0;
}
