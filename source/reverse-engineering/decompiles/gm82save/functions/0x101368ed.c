// rea decompile_all
// name: FUN_101368ed
// address: 0x101368ed
// body: available
// range: 0x101368ed-0x101369b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_101368ed(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int param_6,undefined4 param_7,undefined4 param_8)

{
  code *pcVar1;
  undefined *puVar2;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined *local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined1 *local_2c;
  int *local_28;
  undefined1 *local_24;
  undefined4 *local_20;
  undefined1 *local_1c;
  undefined4 *local_18;
  undefined1 *local_14;

  local_28 = &local_50;
  local_20 = &local_50;
  local_48 = param_4;
  local_40 = &DAT_101457cd;
  local_4c = param_3;
  local_44 = param_5;
  if ((param_1 & 1) != 0) {
    local_40 = &DAT_101543a0;
  }
  local_3c = 2;
  if (param_6 == 0) {
    local_20 = &local_48;
    local_24 = &LAB_10093d50;
    puVar2 = &DAT_101457cf;
  }
  else {
    local_28 = &local_38;
    local_38 = param_6;
    local_18 = &local_48;
    local_34 = param_7;
    local_24 = &LAB_10093d30;
    local_14 = &LAB_10093d50;
    puVar2 = &DAT_10145806;
  }
  local_30 = &local_40;
  local_1c = &LAB_10093d50;
  local_2c = &LAB_10093d10;
  local_50 = param_2;
  FUN_101369c0(puVar2,&local_30,param_8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
