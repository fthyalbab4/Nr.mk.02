// rea decompile_all
// name: FUN_1004b980
// address: 0x1004b980
// body: available
// range: 0x1004b980-0x1004b9db inclusive
// range: 0x1004b9e0-0x1004b9fb inclusive
// range: 0x1004ba00-0x1004ba3b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1004b980(PSRWLOCK param_1)

{
  undefined4 *puVar1;
  int iVar2;
  PVOID pvVar3;
  int *piVar4;
  undefined4 *puVar5;
  bool bVar6;
  int *local_1c [3];

  if (*(char *)&param_1[7].Ptr == '\0') {
    AcquireSRWLockExclusive(param_1);
    if (*(char *)&param_1[7].Ptr == '\0') {
      FUN_10047e70((int *)local_1c,(int)(param_1 + 1));
      if (local_1c[0] != (int *)0x0) {
        LOCK();
        *local_1c[0] = *local_1c[0] + -1;
        UNLOCK();
        if (*local_1c[0] == 0) {
          FUN_1009dc30(local_1c[0]);
        }
      }
      pvVar3 = param_1[6].Ptr;
      puVar5 = param_1[5].Ptr;
      param_1[6].Ptr = (PVOID)0x0;
      if (pvVar3 != (PVOID)0x0) {
        puVar1 = puVar5 + (int)pvVar3 * 3;
        do {
          piVar4 = (int *)*puVar5;
          LOCK();
          bVar6 = piVar4[5] == 0;
          if (bVar6) {
            piVar4[5] = puVar5[1];
          }
          UNLOCK();
          if (bVar6) {
            FUN_10107860((char *)(piVar4[4] + 0x18));
            LOCK();
            *piVar4 = *piVar4 + -1;
            iVar2 = *piVar4;
            UNLOCK();
          }
          else {
            LOCK();
            *piVar4 = *piVar4 + -1;
            iVar2 = *piVar4;
            UNLOCK();
          }
          if (iVar2 == 0) {
            FUN_1009dc30(piVar4);
          }
          puVar5 = puVar5 + 3;
        } while (puVar5 != puVar1);
      }
      if (param_1[3].Ptr == (PVOID)0x0) {
        bVar6 = param_1[6].Ptr == (PVOID)0x0;
      }
      else {
        bVar6 = false;
      }
      LOCK();
      *(bool *)&param_1[7].Ptr = bVar6;
      UNLOCK();
    }
    ReleaseSRWLockExclusive(param_1);
    return;
  }
  return;
}
