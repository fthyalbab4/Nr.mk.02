// rea decompile_all
// name: FUN_1012dca0
// address: 0x1012dca0
// body: available
// range: 0x1012dca0-0x1012de6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1012dca0(char *param_1,uint *param_2,undefined4 *param_3)

{
  code *pcVar1;
  PSRWLOCK pRVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  char local_c8;
  undefined2 local_c7;
  char local_c5;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined4 local_84;
  PSRWLOCK local_80;
  undefined4 local_7c [27];

  pRVar2 = (PSRWLOCK)FUN_100930f0();
  if (pRVar2 != (PSRWLOCK)0x0) {
    puVar5 = local_7c;
    for (iVar4 = 0x1b; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *param_3;
      param_3 = param_3 + 1;
      puVar5 = puVar5 + 1;
    }
    local_c8 = '\x14';
    local_80 = pRVar2;
    FUN_100c0bd0(param_2,0x10083640,(uint)&local_c8);
    pRVar2 = local_80;
    AcquireSRWLockExclusive(local_80);
    if (*(char *)&pRVar2[1].Ptr == '\0') {
      do {
        SleepConditionVariableSRW((PCONDITION_VARIABLE)(pRVar2 + 2),pRVar2,0xffffffff,0);
      } while (*(char *)&pRVar2[1].Ptr != '\x01');
    }
    *(undefined1 *)&pRVar2[1].Ptr = 0;
    ReleaseSRWLockExclusive(pRVar2);
    cVar3 = '\x01';
    if ('\x13' < local_c8) {
      cVar3 = local_c8 + -0x14;
    }
    if (cVar3 != '\x01') {
      if (cVar3 == '\x02') {
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
    if (local_c8 != -2) {
      *param_1 = local_c8;
      *(undefined2 *)(param_1 + 1) = local_c7;
      param_1[3] = local_c5;
      *(undefined8 *)(param_1 + 4) = local_c4;
      *(undefined8 *)(param_1 + 0x14) = local_b4;
      *(undefined8 *)(param_1 + 0xc) = local_bc;
      *(undefined8 *)(param_1 + 0x1c) = local_ac;
      *(undefined8 *)(param_1 + 0x24) = local_a4;
      *(undefined4 *)(param_1 + 0x44) = local_84;
      *(undefined8 *)(param_1 + 0x2c) = local_9c;
      *(undefined8 *)(param_1 + 0x34) = local_94;
      *(undefined8 *)(param_1 + 0x3c) = local_8c;
      return;
    }
  }
  FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
