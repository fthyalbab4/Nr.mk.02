// rea decompile_all
// name: FUN_100bdc30
// address: 0x100bdc30
// body: available
// range: 0x100bdc30-0x100bddf4 inclusive
// range: 0x100bde00-0x100bdeb6 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100bdc30(int param_1)

{
  PSRWLOCK pRVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  undefined4 *lpMem;
  int *piVar5;
  int *piVar6;
  HANDLE pvVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint local_140;
  undefined4 *puStack_13c;
  uint uStack_100;
  uint local_b8;
  int *local_b4;
  int *apiStack_b0 [4];
  int *apiStack_a0 [36];

  FUN_100bdec0(&local_140,param_1);
  piVar5 = FUN_100be180();
  piVar6 = local_b4;
  uVar8 = local_b8;
  if (piVar5 != (int *)0x0) {
    if (*piVar5 != 0) {
      FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10151400);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    *piVar5 = (int)&local_140;
    if ((uint)local_b4[0x41] <= local_b8) {
      FUN_10136b52(local_b8,local_b4[0x41],&PTR_s_C__Users_runneradmin__cargo_regi_10151598);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    iVar2 = local_b4[0x40];
    pRVar1 = (PSRWLOCK)(iVar2 + local_b8 * 0x24);
    AcquireSRWLockExclusive(pRVar1);
    *(undefined1 *)(iVar2 + 4 + uVar8 * 0x24) = 1;
    WakeAllConditionVariable((PCONDITION_VARIABLE)(iVar2 + 8 + uVar8 * 0x24));
    ReleaseSRWLockExclusive(pRVar1);
    if (piVar6[0x36] != 0) {
      (**(code **)(piVar6[0x37] + 0x14))(piVar6[0x36],uVar8);
    }
    piVar5 = local_b4;
    if ((uint)local_b4[0x41] <= local_b8) {
      FUN_10136b52(local_b8,local_b4[0x41],&PTR_s_C__Users_runneradmin__cargo_regi_10151528);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (*(int *)(local_b4[0x40] + 0x18 + local_b8 * 0x24) == 3) {
      uVar3 = local_b4[0x41];
    }
    else {
      FUN_10138cf0((int)&local_140,(int *)(local_b4[0x40] + local_b8 * 0x24 + 0x18));
      uVar3 = piVar5[0x41];
    }
    if (uVar3 <= local_b8) {
      FUN_10136b52(local_b8,uVar3,&PTR_s_C__Users_runneradmin__cargo_regi_10151538);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    iVar2 = piVar5[0x40];
    pRVar1 = (PSRWLOCK)(iVar2 + 0xc + local_b8 * 0x24);
    AcquireSRWLockExclusive(pRVar1);
    *(undefined1 *)(iVar2 + 0x10 + local_b8 * 0x24) = 1;
    WakeAllConditionVariable((PCONDITION_VARIABLE)(iVar2 + 0x14 + local_b8 * 0x24));
    ReleaseSRWLockExclusive(pRVar1);
    if (piVar6[0x38] != 0) {
      (**(code **)(piVar6[0x39] + 0x14))(piVar6[0x38],uVar8);
    }
    piVar6 = FUN_100be180();
    if (piVar6 != (int *)0x0) {
      if ((uint *)*piVar6 != &local_140) {
        FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10151454);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      *piVar6 = 0;
      LOCK();
      *apiStack_b0[0] = *apiStack_b0[0] + -1;
      UNLOCK();
      if (*apiStack_b0[0] == 0) {
        FUN_100be220((int *)apiStack_b0);
      }
      LOCK();
      *apiStack_a0[0] = *apiStack_a0[0] + -1;
      UNLOCK();
      if (*apiStack_a0[0] == 0) {
        FUN_100be220((int *)apiStack_a0);
      }
      lpMem = puStack_13c;
      for (uVar8 = local_140 & 0xfffffffe; uVar8 != (uStack_100 & 0xfffffffe); uVar8 = uVar8 + 2) {
        puVar9 = lpMem;
        if ((~uVar8 & 0x7e) == 0) {
          puVar9 = (undefined4 *)*lpMem;
          pvVar7 = GetProcessHeap();
          HeapFree(pvVar7,0,lpMem);
        }
        lpMem = puVar9;
      }
      pvVar7 = GetProcessHeap();
      HeapFree(pvVar7,0,lpMem);
      LOCK();
      *local_b4 = *local_b4 + -1;
      UNLOCK();
      if (*local_b4 == 0) {
        FUN_100be280((int)local_b4);
      }
      return;
    }
  }
  FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}
