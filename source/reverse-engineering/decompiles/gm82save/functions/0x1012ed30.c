// rea decompile_all
// name: FUN_1012ed30
// address: 0x1012ed30
// body: available
// range: 0x1012ed30-0x1012ee09 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1012ed30(undefined8 *param_1,uint *param_2,undefined4 *param_3)

{
  code *pcVar1;
  PSRWLOCK SRWLock;
  int iVar2;
  undefined4 *puVar3;
  PSRWLOCK local_7c;
  undefined4 local_78 [19];
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;

  local_7c = (PSRWLOCK)FUN_100930f0();
  if (local_7c == (PSRWLOCK)0x0) {
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  puVar3 = local_78;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  local_2c = 0;
  FUN_100c0bd0(param_2,0x10084750,(uint)&local_7c);
  SRWLock = local_7c;
  AcquireSRWLockExclusive(local_7c);
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
