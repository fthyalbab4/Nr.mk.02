// rea decompile_all
// name: FUN_10139520
// address: 0x10139520
// body: available
// range: 0x10139520-0x10139545 inclusive
// range: 0x10139550-0x101395c5 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10139520(int param_1,int param_2)

{
  PSRWLOCK SRWLock;
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int local_18;

  if ((param_2 != 0) && (uVar1 = *(uint *)(param_1 + 8), uVar1 != 0)) {
    uVar4 = 0;
    iVar5 = 8;
    local_18 = param_2;
    do {
      if (*(uint *)(param_1 + 8) <= uVar4) {
        FUN_10136b52(uVar4,*(uint *)(param_1 + 8),&DAT_10151464);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      iVar2 = *(int *)(param_1 + 4);
      SRWLock = (PSRWLOCK)(iVar2 + -8 + iVar5);
      AcquireSRWLockExclusive(SRWLock);
      if (*(char *)(iVar2 + -4 + iVar5) == '\0') {
        ReleaseSRWLockExclusive(SRWLock);
      }
      else {
        *(undefined1 *)(iVar2 + -4 + iVar5) = 0;
        WakeConditionVariable((PCONDITION_VARIABLE)(iVar2 + iVar5));
        LOCK();
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
        UNLOCK();
        ReleaseSRWLockExclusive(SRWLock);
        bVar6 = local_18 == 1;
        local_18 = 1;
        if (bVar6) {
          return;
        }
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x40;
    } while (uVar1 != uVar4);
  }
  return;
}
