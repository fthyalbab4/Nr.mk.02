// rea decompile_all
// name: FUN_10097690
// address: 0x10097690
// body: available
// range: 0x10097690-0x100977a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_10097690(byte *param_1,uint param_2,ushort param_3,uint param_4,undefined2 *param_5)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;

  if (param_2 == 0) {
    FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_1014610c);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (*param_1 < 0x31) {
    FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_1014613c);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *param_5 = 2;
  if ((short)param_3 < 1) {
    *(char **)(param_5 + 2) = "0.";
    *(undefined4 *)(param_5 + 4) = 2;
    param_5[6] = 0;
    uVar2 = -(int)(short)param_3;
    uVar3 = param_4 - param_2;
    *(uint *)(param_5 + 8) = uVar2;
    param_5[0xc] = 2;
    *(byte **)(param_5 + 0xe) = param_1;
    *(uint *)(param_5 + 0x10) = param_2;
    if (param_4 < param_2 || uVar3 == 0) {
      return;
    }
    if (uVar3 <= uVar2) {
      return;
    }
    param_4 = uVar3 + (int)(short)param_3;
  }
  else {
    uVar3 = (uint)param_3;
    *(byte **)(param_5 + 2) = param_1;
    uVar2 = param_2 - uVar3;
    if (param_2 < uVar3 || uVar2 == 0) {
      *(uint *)(param_5 + 4) = param_2;
      param_5[6] = 0;
      *(uint *)(param_5 + 8) = uVar3 - param_2;
      if (param_4 == 0) {
        return;
      }
      param_5[0xc] = 2;
      *(char **)(param_5 + 0xe) = ".";
      *(undefined4 *)(param_5 + 0x10) = 1;
    }
    else {
      *(uint *)(param_5 + 4) = uVar3;
      param_5[6] = 2;
      *(char **)(param_5 + 8) = ".";
      *(undefined4 *)(param_5 + 10) = 1;
      param_5[0xc] = 2;
      bVar4 = param_4 < uVar2;
      param_4 = param_4 - uVar2;
      *(byte **)(param_5 + 0xe) = param_1 + uVar3;
      *(uint *)(param_5 + 0x10) = uVar2;
      if (bVar4 || param_4 == 0) {
        return;
      }
    }
  }
  param_5[0x12] = 0;
  *(uint *)(param_5 + 0x14) = param_4;
  return;
}
