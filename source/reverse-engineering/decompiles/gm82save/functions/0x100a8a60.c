// rea decompile_all
// name: FUN_100a8a60
// address: 0x100a8a60
// body: available
// range: 0x100a8a60-0x100a8ab2 inclusive
// range: 0x100a8ac0-0x100a8b5a inclusive
// range: 0x100a8b60-0x100a8b7b inclusive
// range: 0x100a8b80-0x100a8bdd inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100a8a60(PSRWLOCK param_1)

{
  undefined4 *puVar1;
  int iVar2;
  PVOID pvVar3;
  code *pcVar4;
  undefined1 *puVar5;
  int *piVar6;
  int iVar7;
  PVOID pvVar8;
  undefined4 *puVar9;
  PVOID pvVar10;
  bool bVar11;

  if (*(char *)&param_1[7].Ptr == '\0') {
    AcquireSRWLockExclusive(param_1);
    if (*(char *)&param_1[7].Ptr == '\0') {
      pvVar10 = param_1[3].Ptr;
      if (pvVar10 != (PVOID)0x0) {
        puVar5 = FUN_100a8900();
        if (puVar5 == (undefined1 *)0x0) {
          FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        iVar7 = (int)pvVar10 * 0xc;
        pvVar10 = (PVOID)0x0;
        piVar6 = param_1[2].Ptr;
        do {
          iVar2 = *piVar6;
          if (*(undefined1 **)(iVar2 + 0x14) != puVar5) {
            LOCK();
            bVar11 = *(int *)(iVar2 + 0xc) == 0;
            if (bVar11) {
              *(int *)(iVar2 + 0xc) = piVar6[1];
            }
            UNLOCK();
            if (bVar11) {
              if (piVar6[2] != 0) {
                *(int *)(iVar2 + 0x10) = piVar6[2];
              }
              FUN_10107860((char *)(*(int *)(iVar2 + 8) + 0x18));
              pvVar8 = param_1[3].Ptr;
              if (pvVar10 < pvVar8) {
                pvVar3 = param_1[2].Ptr;
                piVar6 = *(int **)((int)pvVar3 + (int)pvVar10 * 0xc);
                memmove((void *)((int)pvVar3 + (int)pvVar10 * 0xc),
                        (void *)((int)pvVar3 + (int)pvVar10 * 0xc + 0xc),
                        (~(uint)pvVar10 + (int)pvVar8) * 0xc);
                pvVar8 = (PVOID)((int)pvVar8 - 1);
                param_1[3].Ptr = pvVar8;
                if (piVar6 != (int *)0x0) {
                  LOCK();
                  *piVar6 = *piVar6 + -1;
                  UNLOCK();
                  if (*piVar6 == 0) {
                    FUN_1011b0a0(piVar6);
                  }
                  break;
                }
              }
              FUN_1013684d(pvVar10,pvVar8,&PTR_s_C__Users_runneradmin__rustup_too_1014fa24);
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
          }
          piVar6 = piVar6 + 3;
          pvVar10 = (PVOID)((int)pvVar10 + 1);
          iVar7 = iVar7 + -0xc;
        } while (iVar7 != 0);
      }
      pvVar10 = param_1[6].Ptr;
      puVar9 = param_1[5].Ptr;
      param_1[6].Ptr = (PVOID)0x0;
      if (pvVar10 != (PVOID)0x0) {
        puVar1 = puVar9 + (int)pvVar10 * 3;
        do {
          piVar6 = (int *)*puVar9;
          LOCK();
          bVar11 = piVar6[3] == 0;
          if (bVar11) {
            piVar6[3] = puVar9[1];
          }
          UNLOCK();
          if (bVar11) {
            FUN_10107860((char *)(piVar6[2] + 0x18));
            LOCK();
            *piVar6 = *piVar6 + -1;
            iVar7 = *piVar6;
            UNLOCK();
          }
          else {
            LOCK();
            *piVar6 = *piVar6 + -1;
            iVar7 = *piVar6;
            UNLOCK();
          }
          if (iVar7 == 0) {
            FUN_1011b0a0(piVar6);
          }
          puVar9 = puVar9 + 3;
        } while (puVar9 != puVar1);
      }
      if (param_1[3].Ptr == (PVOID)0x0) {
        bVar11 = param_1[6].Ptr == (PVOID)0x0;
      }
      else {
        bVar11 = false;
      }
      LOCK();
      *(bool *)&param_1[7].Ptr = bVar11;
      UNLOCK();
    }
    ReleaseSRWLockExclusive(param_1);
  }
  return;
}
