// rea decompile_all
// name: FUN_10131980
// address: 0x10131980
// body: available
// range: 0x10131980-0x10131a82 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10131980(undefined8 *param_1,uint *param_2,int param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined4 local_3c;
  int local_38;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined1 local_10;

  local_14 = *(undefined4 *)(param_3 + 0x88);
  local_64 = param_4[1];
  local_1c = param_3 + 0x8c;
  local_5c = param_4[2];
  local_6c = *param_4;
  local_18 = 0;
  local_10 = 1;
  local_54 = param_4[3];
  local_4c = param_4[4];
  local_44 = param_4[5];
  local_3c = *(undefined4 *)(param_4 + 6);
  local_38 = 0;
  FUN_100c0bd0(param_2,0x10089860,(uint)&local_6c);
  if (local_18 != 3) {
    FUN_10138cf0(param_3,&local_18);
  }
  if (local_38 == 1) {
    *param_1 = local_34;
    param_1[1] = local_2c;
    param_1[2] = local_24;
    return;
  }
  if (local_38 == 2) {
    FUN_100c0bc0();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10141c10);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
