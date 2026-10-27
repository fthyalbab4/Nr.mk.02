// rea decompile_all
// name: FUN_10080b90
// address: 0x10080b90
// body: available
// range: 0x10080b90-0x10080c3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10080b90(int param_1,undefined8 *param_2)

{
  int local_4c;
  int local_48;
  undefined *local_44;
  int local_40;
  undefined *local_3c;
  int local_38;
  undefined *local_34;
  int local_30;
  undefined *local_2c;
  int local_28;
  undefined *local_24;
  int local_20;
  undefined *local_1c;
  int local_18;
  undefined *local_14;
  int local_10;
  undefined *local_c;
  undefined1 *local_8;
  undefined *local_4;

  local_8 = (undefined1 *)&local_4c;
  local_4c = param_1 + 0x19;
  local_44 = &DAT_10143680;
  local_40 = param_1 + 4;
  local_38 = param_1 + 8;
  local_3c = &DAT_10143680;
  local_30 = param_1 + 0xc;
  local_34 = &DAT_10143680;
  local_28 = param_1 + 0x10;
  local_2c = &DAT_10143680;
  local_20 = param_1 + 0x14;
  local_24 = &DAT_10143680;
  local_18 = param_1 + 0x16;
  local_1c = &DAT_10143690;
  local_10 = param_1 + 0x18;
  local_14 = &DAT_10143690;
  local_c = &DAT_101436a0;
  local_4 = &DAT_101436b0;
  local_48 = param_1;
  FUN_10096680(param_2,"FrameControlAnimationControlnum_framesnum_plays",0xc,
               (int *)&PTR_s_sequence_numberx_offsety_offsetd_10143704,(undefined8 *)0x9,&local_48,
               (undefined8 *)0x9);
  return;
}
