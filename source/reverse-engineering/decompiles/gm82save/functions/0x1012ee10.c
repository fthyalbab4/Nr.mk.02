// rea decompile_all
// name: FUN_1012ee10
// address: 0x1012ee10
// body: available
// range: 0x1012ee10-0x1012eefe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1012ee10(uint *param_1,uint *param_2,undefined4 *param_3)

{
  code *pcVar1;
  PSRWLOCK pRVar2;
  int iVar3;
  undefined4 *puVar4;
  uint local_80;
  undefined8 local_7c;
  uint local_74;
  PSRWLOCK local_70;
  undefined4 local_6c [23];

  pRVar2 = (PSRWLOCK)FUN_100930f0();
  if (pRVar2 != (PSRWLOCK)0x0) {
    puVar4 = local_6c;
    for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *param_3;
      param_3 = param_3 + 1;
      puVar4 = puVar4 + 1;
    }
    local_80 = 2;
    local_70 = pRVar2;
    FUN_100c0bd0(param_2,0x10084870,(uint)&local_80);
    pRVar2 = local_70;
    AcquireSRWLockExclusive(local_70);
    if (*(char *)&pRVar2[1].Ptr == '\0') {
      do {
        SleepConditionVariableSRW((PCONDITION_VARIABLE)(pRVar2 + 2),pRVar2,0xffffffff,0);
      } while (*(char *)&pRVar2[1].Ptr != '\x01');
    }
    *(undefined1 *)&pRVar2[1].Ptr = 0;
    ReleaseSRWLockExclusive(pRVar2);
    iVar3 = 1;
    if (1 < local_80) {
      iVar3 = local_80 - 2;
    }
    if (iVar3 != 1) {
      if (iVar3 == 2) {
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
    if (local_80 != 0xffffffff) {
      *param_1 = local_80;
      *(undefined8 *)(param_1 + 1) = local_7c;
      param_1[3] = local_74;
      return;
    }
  }
  FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
