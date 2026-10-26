// rea decompile_all
// name: FUN_10097be0
// address: 0x10097be0
// body: available
// range: 0x10097be0-0x10097d94 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_10097be0(undefined4 *param_1,undefined1 *param_2,uint param_3,uint param_4,short param_5,
            short param_6,uint param_7,uint param_8,uint param_9,uint param_10,uint param_11,
            uint param_12)

{
  code *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  if ((param_12 < param_10 || param_12 - param_10 < (uint)(param_11 < param_9)) &&
     (uVar4 = (param_10 - param_12) - (uint)(param_9 < param_11),
     param_12 < uVar4 || param_12 - uVar4 < (uint)(param_11 < param_9 - param_11))) {
    uVar4 = (param_10 - param_8) - (uint)(param_9 < param_7);
    if ((param_8 < uVar4 || param_8 - uVar4 < (uint)(param_7 < param_9 - param_7)) &&
       (uVar4 = (param_10 - (param_8 << 1 | param_7 >> 0x1f)) - (uint)(param_9 < param_7 * 2),
       uVar3 = param_12 << 1 | param_11 >> 0x1f,
       uVar3 <= uVar4 && (uint)(param_9 + param_7 * -2 < param_11 * 2) <= uVar4 - uVar3)) {
      if (param_4 <= param_3) {
        *param_1 = param_2;
        param_1[1] = param_4;
        *(short *)(param_1 + 2) = param_5;
        return;
      }
      FUN_10136a50(0,param_4,param_3,&PTR_s_C__Users_runneradmin__rustup_too_10149b80);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (param_12 < param_8 || param_12 - param_8 < (uint)(param_11 < param_7)) {
      uVar5 = param_7 - param_11;
      uVar3 = (param_8 - param_12) - (uint)(param_7 < param_11);
      uVar4 = (param_10 - uVar3) - (uint)(param_9 < uVar5);
      if (uVar4 <= uVar3 && (uint)(uVar5 < param_9 - uVar5) <= uVar3 - uVar4) {
        uVar4 = param_4;
        if (param_3 < param_4) {
          FUN_10136a50(0,param_4,param_3,&PTR_s_C__Users_runneradmin__rustup_too_10149b70);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        do {
          uVar3 = uVar4;
          if (uVar3 == 0) {
            if (param_4 == 0) {
              uVar2 = 0x31;
            }
            else {
              *param_2 = 0x31;
              memset(param_2 + 1,0x30,param_4 - 1);
              uVar2 = 0x30;
            }
            param_5 = param_5 + 1;
            if (param_4 < param_3 && param_6 < param_5) {
              param_2[param_4] = uVar2;
              param_4 = param_4 + 1;
            }
            goto LAB_10097d4a;
          }
          uVar4 = uVar3 - 1;
        } while (param_2[uVar3 - 1] == '9');
        param_2[uVar3 - 1] = param_2[uVar3 - 1] + '\x01';
        memset(param_2 + uVar3,0x30,param_4 - uVar3);
LAB_10097d4a:
        if (param_4 <= param_3) {
          *param_1 = param_2;
          param_1[1] = param_4;
          *(short *)(param_1 + 2) = param_5;
          return;
        }
        FUN_10136a50(0,param_4,param_3,&PTR_s_C__Users_runneradmin__rustup_too_10149b60);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
  }
  *param_1 = 0;
  return;
}
