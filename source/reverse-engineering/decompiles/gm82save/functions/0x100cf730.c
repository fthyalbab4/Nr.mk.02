// rea decompile_all
// name: FUN_100cf730
// address: 0x100cf730
// body: available
// range: 0x100cf730-0x100cf81f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_100cf730(char *param_1,int *param_2,uint *param_3,int *param_4,void *param_5,uint param_6)

{
  char cVar1;
  code *pcVar2;
  int local_2c;
  int *piStack_28;
  undefined4 local_24;
  int *local_20;
  uint *local_1c;
  void *local_18;
  uint local_14;

  if (*(char *)(*param_2 + 0x162) == '\0') {
    FUN_100cf820((undefined4 *)param_1,param_2,param_3,param_4,param_5,param_6);
    if (*param_1 != '\0') {
      return;
    }
  }
  else {
    cVar1 = *(char *)(*param_2 + 0x163);
    FUN_100cf820((undefined4 *)param_1,param_2,param_3,param_4,param_5,param_6);
    if (*param_1 != '\0') {
      if (cVar1 == '\0') {
        return;
      }
      local_1c = param_3;
      local_18 = param_5;
      local_14 = param_6;
      local_20 = param_2;
      FUN_1013b920(&local_2c,param_4,*(undefined **)(param_1 + 4),*(uint **)(param_1 + 8),
                   *(uint **)(param_1 + 8),&local_20);
      if (local_2c != -1) {
        *(undefined4 *)(param_1 + 8) = local_24;
        *(ulonglong *)param_1 = CONCAT44(piStack_28,local_2c);
        return;
      }
      local_20 = piStack_28;
      FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_20,&PTR_FUN_101523d4,
                   &PTR_s_C__Users_runneradmin__cargo_regi_101523e4);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  return;
}
