// rea decompile_all
// name: FUN_10135cc0
// address: 0x10135cc0
// body: available
// range: 0x10135cc0-0x10135e31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10135cc0(undefined4 *param_1,int param_2,LPVOID param_3,int param_4)

{
  PVOID pvVar1;
  undefined4 uVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  LPVOID _Dst;
  PSRWLOCK SRWLock;
  bool bVar5;
  undefined1 auStack_94 [132];

  if (param_4 == 0) {
    LOCK();
    bVar5 = *(int *)(param_2 + 0x14) == 0;
    if (bVar5) {
      *(int *)(param_2 + 0x14) = 1;
    }
    UNLOCK();
    if (bVar5) {
      (**(code **)(*(int *)(param_2 + 0x10) + 0x14))(auStack_94,*(undefined4 *)(param_2 + 0xc));
      if (*(int *)(param_2 + 0x18) != -1) {
        FUN_100075a0(param_2 + 0x18);
      }
      memcpy((void *)(param_2 + 0x18),auStack_94,0x84);
      param_1[2] = param_2;
      *param_1 = 1;
      goto LAB_10135e03;
    }
  }
  if (*(uint *)(param_2 + 8) == 0) {
    FUN_10136cc0(&PTR_s_C__Users_runneradmin__cargo_regi_10141a88);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  SRWLock = (PSRWLOCK)(((uint)param_3 % *(uint *)(param_2 + 8)) * 0x40 + *(int *)(param_2 + 4));
  BVar4 = TryAcquireSRWLockExclusive(SRWLock);
  if (BVar4 == '\0') {
    (**(code **)(*(int *)(param_2 + 0x10) + 0x14))(auStack_94,*(undefined4 *)(param_2 + 0xc));
    _Dst = FUN_10107380(0,0x84);
    if (_Dst != (LPVOID)0x0) {
      memcpy(_Dst,auStack_94,0x84);
      param_1[2] = param_2;
      *param_1 = 0;
      param_1[1] = _Dst;
      *(undefined1 *)(param_1 + 3) = 1;
      return;
    }
  }
  else {
    pvVar1 = SRWLock[3].Ptr;
    if (pvVar1 != (PVOID)0x0) {
      SRWLock[3].Ptr = (PVOID)((int)pvVar1 + -1);
      uVar2 = *(undefined4 *)((int)SRWLock[2].Ptr + (int)pvVar1 * 4 + -4);
      param_1[2] = param_2;
      *param_1 = 0;
      param_1[1] = uVar2;
      *(undefined1 *)(param_1 + 3) = 0;
      ReleaseSRWLockExclusive(SRWLock);
      return;
    }
    ReleaseSRWLockExclusive(SRWLock);
    (**(code **)(*(int *)(param_2 + 0x10) + 0x14))(auStack_94,*(undefined4 *)(param_2 + 0xc));
    param_3 = FUN_10107380(0,0x84);
    if (param_3 != (LPVOID)0x0) {
      memcpy(param_3,auStack_94,0x84);
      param_1[2] = param_2;
      *param_1 = 0;
LAB_10135e03:
      param_1[1] = param_3;
      *(undefined1 *)(param_1 + 3) = 0;
      return;
    }
  }
  FUN_1013679e(4,0x84);
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}
