// rea decompile_all
// name: FUN_10007690
// address: 0x10007690
// body: available
// range: 0x10007690-0x10007920 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10007690(int *param_1)

{
  int iVar1;
  LPVOID pvVar2;
  int *piVar3;
  PVOID pvVar4;
  code *pcVar5;
  BOOLEAN BVar6;
  HANDLE pvVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  PSRWLOCK SRWLock;
  undefined4 in_stack_ffffffdc;
  LPVOID local_14;

  iVar1 = *param_1;
  pvVar2 = (LPVOID)param_1[1];
  *param_1 = 1;
  param_1[1] = 2;
  if (iVar1 == 1) {
    local_14 = pvVar2;
    if (pvVar2 == (LPVOID)0x2) {
      FUN_101369ea(1,&DAT_10152cd0,&local_14,0,in_stack_ffffffdc,
                   &PTR_s_C__Users_runneradmin__cargo_regi_10141c00);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    *(LPVOID *)(param_1[2] + 0x14) = pvVar2;
    piVar3 = (int *)param_1[9];
    LOCK();
    *piVar3 = *piVar3 + -1;
    iVar1 = *piVar3;
    UNLOCK();
    goto joined_r0x100076f0;
  }
  if ((char)param_1[3] == '\0') {
    iVar1 = param_1[2];
    puVar8 = (uint *)FUN_10092e90();
    if (puVar8 == (uint *)0x0) {
      FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    if (*(uint *)(iVar1 + 8) == 0) {
      FUN_10136cc0(&PTR_s_C__Users_runneradmin__cargo_regi_10141a98);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    uVar10 = *puVar8 % *(uint *)(iVar1 + 8);
    iVar9 = uVar10 * 0x40;
    SRWLock = (PSRWLOCK)(*(int *)(iVar1 + 4) + iVar9);
    BVar6 = TryAcquireSRWLockExclusive(SRWLock);
    if (BVar6 == '\0') {
      uVar11 = *(uint *)(iVar1 + 8);
      if (uVar11 <= uVar10) {
LAB_10007910:
        FUN_10136b52(uVar10,uVar11,&PTR_s_C__Users_runneradmin__cargo_regi_10141aa8);
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      SRWLock = (PSRWLOCK)(*(int *)(iVar1 + 4) + iVar9);
      BVar6 = TryAcquireSRWLockExclusive(SRWLock);
      if (BVar6 == '\0') {
        uVar11 = *(uint *)(iVar1 + 8);
        if (uVar11 <= uVar10) goto LAB_10007910;
        SRWLock = (PSRWLOCK)(*(int *)(iVar1 + 4) + iVar9);
        BVar6 = TryAcquireSRWLockExclusive(SRWLock);
        if (BVar6 == '\0') {
          uVar11 = *(uint *)(iVar1 + 8);
          if (uVar11 <= uVar10) goto LAB_10007910;
          SRWLock = (PSRWLOCK)(*(int *)(iVar1 + 4) + iVar9);
          BVar6 = TryAcquireSRWLockExclusive(SRWLock);
          if (BVar6 == '\0') {
            uVar11 = *(uint *)(iVar1 + 8);
            if (uVar11 <= uVar10) goto LAB_10007910;
            SRWLock = (PSRWLOCK)(*(int *)(iVar1 + 4) + iVar9);
            BVar6 = TryAcquireSRWLockExclusive(SRWLock);
            if (BVar6 == '\0') {
              uVar11 = *(uint *)(iVar1 + 8);
              if (uVar11 <= uVar10) goto LAB_10007910;
              SRWLock = (PSRWLOCK)(*(int *)(iVar1 + 4) + iVar9);
              BVar6 = TryAcquireSRWLockExclusive(SRWLock);
              if (BVar6 == '\0') {
                uVar11 = *(uint *)(iVar1 + 8);
                if (uVar11 <= uVar10) goto LAB_10007910;
                SRWLock = (PSRWLOCK)(*(int *)(iVar1 + 4) + iVar9);
                BVar6 = TryAcquireSRWLockExclusive(SRWLock);
                if (BVar6 == '\0') {
                  uVar11 = *(uint *)(iVar1 + 8);
                  if (uVar11 <= uVar10) goto LAB_10007910;
                  SRWLock = (PSRWLOCK)(*(int *)(iVar1 + 4) + iVar9);
                  BVar6 = TryAcquireSRWLockExclusive(SRWLock);
                  if (BVar6 == '\0') {
                    uVar11 = *(uint *)(iVar1 + 8);
                    if (uVar11 <= uVar10) goto LAB_10007910;
                    SRWLock = (PSRWLOCK)(*(int *)(iVar1 + 4) + iVar9);
                    BVar6 = TryAcquireSRWLockExclusive(SRWLock);
                    if (BVar6 == '\0') {
                      uVar11 = *(uint *)(iVar1 + 8);
                      if (uVar11 <= uVar10) goto LAB_10007910;
                      SRWLock = (PSRWLOCK)(iVar9 + *(int *)(iVar1 + 4));
                      BVar6 = TryAcquireSRWLockExclusive(SRWLock);
                      if (BVar6 == '\0') goto LAB_100076d3;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    pvVar4 = SRWLock[3].Ptr;
    if (pvVar4 == SRWLock[1].Ptr) {
      FUN_10135e40((uint *)(SRWLock + 1));
    }
    *(LPVOID *)((int)SRWLock[2].Ptr + (int)pvVar4 * 4) = pvVar2;
    SRWLock[3].Ptr = (PVOID)((int)pvVar4 + 1);
    ReleaseSRWLockExclusive(SRWLock);
    piVar3 = (int *)param_1[9];
    LOCK();
    *piVar3 = *piVar3 + -1;
    iVar1 = *piVar3;
    UNLOCK();
  }
  else {
LAB_100076d3:
    FUN_100075a0((int)pvVar2);
    pvVar7 = GetProcessHeap();
    HeapFree(pvVar7,0,pvVar2);
    piVar3 = (int *)param_1[9];
    LOCK();
    *piVar3 = *piVar3 + -1;
    iVar1 = *piVar3;
    UNLOCK();
  }
joined_r0x100076f0:
  if (iVar1 == 0) {
    FUN_100d3ef0((LPVOID)param_1[9]);
  }
  if (param_1[6] != 0) {
    pvVar2 = (LPVOID)param_1[7];
    pvVar7 = GetProcessHeap();
    HeapFree(pvVar7,0,pvVar2);
  }
  return;
}
