// rea decompile_all
// name: FUN_10123f70
// address: 0x10123f70
// body: available
// range: 0x10123f70-0x10123fc5 inclusive
// range: 0x10123fd0-0x10124068 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10123f70(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;

  uVar7 = *(uint *)(param_1 + 0x18);
  uVar1 = param_2 + 2;
  if (uVar7 < uVar1) {
    FUN_10136a50(uVar1,uVar7,uVar7,&PTR_s_C__Users_runneradmin__cargo_regi_1015bc0c);
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  if (param_3 <= uVar7 - uVar1) {
    if (param_3 != 0) {
      iVar3 = *(int *)(param_1 + 0x14);
      iVar4 = *(int *)(param_1 + 0x30);
      iVar5 = *(int *)(param_1 + 0x20);
      uVar1 = *(uint *)(param_1 + 0x2c);
      uVar7 = *(uint *)(param_1 + 0x84);
      do {
        uVar7 = (uVar7 & 0x3ff) << 5 ^ (uint)*(byte *)(iVar3 + 2 + param_2);
        sVar2 = *(short *)(iVar4 + uVar7 * 2);
        if ((short)param_2 != sVar2) {
          uVar8 = param_2 & iVar5 + 0xffffU & 0xffff;
          if (uVar1 <= uVar8) {
            *(uint *)(param_1 + 0x84) = uVar7;
            FUN_10136b52(uVar8,uVar1,&PTR_s_C__Users_runneradmin__cargo_regi_1015bbec);
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
          *(short *)(*(int *)(param_1 + 0x28) + uVar8 * 2) = sVar2;
          *(short *)(iVar4 + uVar7 * 2) = (short)param_2;
        }
        param_2 = param_2 + 1;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
      *(uint *)(param_1 + 0x84) = uVar7;
    }
    return;
  }
  FUN_10136a50(0,param_3,uVar7 - uVar1,&PTR_s_C__Users_runneradmin__cargo_regi_1015bbfc);
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}
