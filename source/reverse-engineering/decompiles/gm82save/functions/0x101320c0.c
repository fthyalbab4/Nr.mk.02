// rea decompile_all
// name: FUN_101320c0
// address: 0x101320c0
// body: available
// range: 0x101320c0-0x1013219b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_101320c0(uint *param_1,int param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  int local_24;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined1 local_c;

  local_18 = param_2 + 0x8c;
  local_10 = *(undefined4 *)(param_2 + 0x88);
  local_14 = 0;
  local_50 = param_3[1];
  local_48 = param_3[2];
  local_58 = *param_3;
  local_c = 1;
  local_40 = param_3[3];
  local_38 = param_3[4];
  local_30 = param_3[5];
  local_28 = *(undefined4 *)(param_3 + 6);
  local_24 = 0;
  FUN_100c0bd0(param_1,0x1008a7c0,(uint)&local_58);
  if (local_14 != 3) {
    FUN_10138cf0(param_2,&local_14);
  }
  if (local_24 == 1) {
    return;
  }
  if (local_24 == 2) {
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
