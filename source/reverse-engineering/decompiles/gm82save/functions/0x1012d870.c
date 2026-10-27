// rea decompile_all
// name: FUN_1012d870
// address: 0x1012d870
// body: available
// range: 0x1012d870-0x1012d9cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1012d870(undefined8 *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  LPVOID pvVar2;
  code *pcVar3;
  PSRWLOCK SRWLock;
  HANDLE pvVar4;
  int local_60;
  LPVOID local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  PSRWLOCK local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;

  iVar1 = *param_3;
  pvVar2 = (LPVOID)param_3[1];
  local_40 = (PSRWLOCK)FUN_100930f0();
  if (local_40 == (PSRWLOCK)0x0) {
    if (iVar1 != 0) {
      pvVar4 = GetProcessHeap();
      HeapFree(pvVar4,0,pvVar2);
    }
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_50 = *(undefined8 *)(param_3 + 4);
  local_58 = *(undefined8 *)(param_3 + 2);
  local_48 = *(undefined8 *)(param_3 + 6);
  local_3c = 0;
  local_60 = iVar1;
  local_5c = pvVar2;
  FUN_100c0bd0(param_2,0x10083250,(uint)&local_60);
  SRWLock = local_40;
  AcquireSRWLockExclusive(local_40);
  if (*(char *)&SRWLock[1].Ptr == '\0') {
    do {
      SleepConditionVariableSRW((PCONDITION_VARIABLE)(SRWLock + 2),SRWLock,0xffffffff,0);
    } while (*(char *)&SRWLock[1].Ptr != '\x01');
  }
  *(undefined1 *)&SRWLock[1].Ptr = 0;
  ReleaseSRWLockExclusive(SRWLock);
  pvVar2 = local_5c;
  if (local_3c != 1) {
    if (local_3c == 2) {
      FUN_100c0bc0();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10141c10);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (0 < local_60) {
    local_20 = local_38;
    uStack_1c = uStack_34;
    uStack_18 = 0;
    uStack_14 = 0;
    pvVar4 = GetProcessHeap();
    HeapFree(pvVar4,0,pvVar2);
    local_38 = local_20;
    uStack_34 = uStack_1c;
  }
  *param_1 = CONCAT44(uStack_34,local_38);
  param_1[1] = local_30;
  param_1[2] = local_28;
  return;
}
