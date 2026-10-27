// rea decompile_all
// name: FUN_1012a580
// address: 0x1012a580
// body: available
// range: 0x1012a580-0x1012a719 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1012a580(int param_1,int param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  short *psVar2;
  ushort uVar3;
  code *pcVar4;
  bool bVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  ushort uVar10;
  uint uVar11;
  uint local_20;

  if (param_3 <= param_4 + 1) {
    FUN_10136b52(param_4 + 1,param_3,&PTR_s_C__Users_runneradmin__cargo_regi_1015dd30);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar7 = *(ushort *)(param_2 + 2);
  uVar10 = 7;
  local_20 = 0xffffffff;
  *(undefined2 *)(param_2 + 6 + param_4 * 4) = 0xffff;
  uVar6 = 0xffff;
  if (uVar7 == 0) {
    uVar10 = 0x8a;
  }
  bVar5 = false;
  uVar9 = 0;
  uVar8 = (uVar7 != 0) + 3;
  while ((!bVar5 && (uVar9 <= param_4))) {
    if (param_3 <= uVar9 + 1) {
      FUN_10136b52(uVar9 + 1,param_3,&PTR_s_C__Users_runneradmin__cargo_regi_1015dd40);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    bVar5 = uVar9 >= param_4;
    uVar3 = *(ushort *)(param_2 + 6 + uVar9 * 4);
    uVar1 = uVar6 + 2;
    uVar9 = uVar9 + (uVar9 < param_4);
    uVar6 = uVar6 + 1;
    if ((uVar10 <= uVar1) || (uVar7 != uVar3)) {
      uVar11 = (uint)uVar7;
      if (uVar1 < uVar8) {
        if (0x26 < uVar7) {
          FUN_10136b52(uVar11,0x27,&PTR_s_C__Users_runneradmin__cargo_regi_1015dd60);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        psVar2 = (short *)(param_1 + 4 + uVar11 * 4);
        *psVar2 = *psVar2 + uVar1;
      }
      else if (uVar7 == 0) {
        if (uVar6 < 10) {
          *(short *)(param_1 + 0x48) = *(short *)(param_1 + 0x48) + 1;
        }
        else {
          *(short *)(param_1 + 0x4c) = *(short *)(param_1 + 0x4c) + 1;
        }
      }
      else {
        if (local_20 != uVar11) {
          if (0x26 < uVar7) {
            FUN_10136b52(uVar11,0x27,&PTR_s_C__Users_runneradmin__cargo_regi_1015dd50);
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          psVar2 = (short *)(param_1 + 4 + uVar11 * 4);
          *psVar2 = *psVar2 + 1;
        }
        *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + 1;
      }
      uVar10 = uVar7 == uVar3 ^ 7;
      if (uVar3 == 0) {
        uVar10 = 0x8a;
      }
      uVar8 = 4 - (uVar3 == 0 || uVar7 == uVar3);
      uVar6 = 0xffff;
      uVar7 = uVar3;
      local_20 = uVar11;
    }
  }
  return;
}
