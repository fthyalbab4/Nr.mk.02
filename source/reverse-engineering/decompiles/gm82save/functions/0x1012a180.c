// rea decompile_all
// name: FUN_1012a180
// address: 0x1012a180
// body: available
// range: 0x1012a180-0x1012a1d7 inclusive
// range: 0x1012a1e0-0x1012a2f0 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1012a180(int param_1,int param_2,uint param_3,uint param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  uint uVar3;
  code *pcVar4;
  uint3 uVar5;
  uint3 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint3 uVar10;

  if (0x23c < param_4) {
    FUN_10136b52(param_4,0x23d,&PTR_s_C__Users_runneradmin__cargo_regi_1015cdb0);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar3 = *(uint *)(param_1 + param_4 * 4);
  if (param_3 <= uVar3) {
    FUN_10136b52(uVar3,param_3,&PTR_s_C__Users_runneradmin__cargo_regi_1015cdc0);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar8 = *(uint *)(param_1 + 0x8f4);
  uVar7 = param_4 * 2;
  if (uVar7 <= uVar8) {
    uVar2 = *(undefined2 *)(param_2 + uVar3 * 4);
    uVar1 = *(undefined1 *)(param_1 + 0x8fc + uVar3);
    do {
      if (0x11e < param_4) {
        FUN_10136b52(uVar7,0x23d,&PTR_s_C__Users_runneradmin__cargo_regi_1015cdd0);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar9 = *(uint *)(param_1 + uVar7 * 4);
      if (param_3 <= uVar9) {
        FUN_10136b52(uVar9,param_3,&PTR_s_C__Users_runneradmin__cargo_regi_1015cde0);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar5 = CONCAT21(*(undefined2 *)(param_2 + uVar9 * 4),*(undefined1 *)(param_1 + 0x8fc + uVar9)
                      );
      uVar9 = uVar7;
      uVar10 = uVar5;
      if (uVar7 < uVar8) {
        uVar9 = uVar7 | 1;
        if (0x23c < uVar9) {
          FUN_10136b52(0x23d,0x23d,&PTR_s_C__Users_runneradmin__cargo_regi_1015cdf0);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar8 = *(uint *)(param_1 + uVar9 * 4);
        if (param_3 <= uVar8) {
          FUN_10136b52(uVar8,param_3,&PTR_s_C__Users_runneradmin__cargo_regi_1015ce00);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar6 = CONCAT21(*(undefined2 *)(param_2 + uVar8 * 4),
                         *(undefined1 *)(param_1 + 0x8fc + uVar8));
        if (uVar6 < uVar5) {
          uVar10 = uVar6;
        }
        if (uVar5 < uVar6) {
          uVar9 = uVar7;
        }
      }
      if (CONCAT21(uVar2,uVar1) <= uVar10) break;
      *(undefined4 *)(param_1 + param_4 * 4) = *(undefined4 *)(param_1 + uVar9 * 4);
      uVar7 = uVar9 * 2;
      uVar8 = *(uint *)(param_1 + 0x8f4);
      param_4 = uVar9;
    } while (uVar7 <= uVar8);
  }
  *(uint *)(param_1 + param_4 * 4) = uVar3;
  return;
}
