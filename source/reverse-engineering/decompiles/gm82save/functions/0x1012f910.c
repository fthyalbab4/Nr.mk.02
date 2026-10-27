// rea decompile_all
// name: FUN_1012f910
// address: 0x1012f910
// body: available
// range: 0x1012f910-0x1012fa29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1012f910(undefined8 *param_1,uint *param_2,undefined8 *param_3)

{
  code *pcVar1;
  PSRWLOCK SRWLock;
  PSRWLOCK local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;

  local_64 = (PSRWLOCK)FUN_100930f0();
  if (local_64 == (PSRWLOCK)0x0) {
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_58 = param_3[1];
  local_50 = param_3[2];
  local_30 = *(undefined4 *)(param_3 + 6);
  local_60 = *param_3;
  local_48 = param_3[3];
  local_40 = param_3[4];
  local_38 = param_3[5];
  local_2c = 0;
  FUN_100c0bd0(param_2,0x10085710,(uint)&local_64);
  SRWLock = local_64;
  AcquireSRWLockExclusive(local_64);
  if (*(char *)&SRWLock[1].Ptr == '\0') {
    do {
      SleepConditionVariableSRW((PCONDITION_VARIABLE)(SRWLock + 2),SRWLock,0xffffffff,0);
    } while (*(char *)&SRWLock[1].Ptr != '\x01');
  }
  *(undefined1 *)&SRWLock[1].Ptr = 0;
  ReleaseSRWLockExclusive(SRWLock);
  if (local_2c != 1) {
    if (local_2c == 2) {
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
  param_1[2] = local_18;
  param_1[1] = local_20;
  *param_1 = local_28;
  return;
}
