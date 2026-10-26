// rea decompile_all
// name: FUN_1004ba40
// address: 0x1004ba40
// body: available
// range: 0x1004ba40-0x1004ba63 inclusive
// range: 0x1004ba70-0x1004baaa inclusive
// range: 0x1004bab0-0x1004bacb inclusive
// range: 0x1004bad0-0x1004bb08 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1004ba40(PSRWLOCK param_1)

{
  undefined4 *puVar1;
  PVOID pvVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  bool bVar6;

  AcquireSRWLockExclusive(param_1);
  if (param_1[3].Ptr != (PVOID)0x0) {
    piVar5 = param_1[2].Ptr;
    iVar3 = (int)param_1[3].Ptr * 0xc;
    do {
      LOCK();
      bVar6 = *(int *)(*piVar5 + 0xc) == 0;
      if (bVar6) {
        *(int *)(*piVar5 + 0xc) = 2;
      }
      UNLOCK();
      if (bVar6) {
        FUN_10107860((char *)(*(int *)(*piVar5 + 8) + 0x18));
      }
      piVar5 = piVar5 + 3;
      iVar3 = iVar3 + -0xc;
    } while (iVar3 != 0);
  }
  pvVar2 = param_1[6].Ptr;
  puVar4 = param_1[5].Ptr;
  param_1[6].Ptr = (PVOID)0x0;
  if (pvVar2 != (PVOID)0x0) {
    puVar1 = puVar4 + (int)pvVar2 * 3;
    do {
      piVar5 = (int *)*puVar4;
      LOCK();
      bVar6 = piVar5[3] == 0;
      if (bVar6) {
        piVar5[3] = puVar4[1];
      }
      UNLOCK();
      if (bVar6) {
        FUN_10107860((char *)(piVar5[2] + 0x18));
        LOCK();
        *piVar5 = *piVar5 + -1;
        iVar3 = *piVar5;
        UNLOCK();
      }
      else {
        LOCK();
        *piVar5 = *piVar5 + -1;
        iVar3 = *piVar5;
        UNLOCK();
      }
      if (iVar3 == 0) {
        FUN_1011b0a0(piVar5);
      }
      puVar4 = puVar4 + 3;
    } while (puVar4 != puVar1);
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
  ReleaseSRWLockExclusive(param_1);
  return;
}
