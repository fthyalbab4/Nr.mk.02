// rea decompile_all
// name: FUN_10136d40
// address: 0x10136d40
// body: available
// range: 0x10136d40-0x10136e3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_10136d40(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  DWORD DVar4;
  LPVOID pvVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;

  if (DAT_10163350 == 0) {
    DVar4 = FUN_1013be20(&DAT_10163350);
  }
  else {
    DVar4 = DAT_10163350 - 1;
  }
  pvVar5 = TlsGetValue(DVar4);
  if (pvVar5 < (LPVOID)0x3) {
    piVar7 = FUN_1013c160((int)pvVar5);
    if (DAT_10163350 != 0) goto LAB_10136d7e;
LAB_10136e12:
    DVar4 = FUN_1013be20(&DAT_10163350);
  }
  else {
    LOCK();
    piVar7 = (int *)((int)pvVar5 + -8);
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + 1;
    UNLOCK();
    if (*piVar7 == 0 || SCARRY4(iVar1,1) != *piVar7 < 0) goto LAB_10136e3e;
    piVar7 = (int *)((int)pvVar5 + -8);
    if (DAT_10163350 == 0) goto LAB_10136e12;
LAB_10136d7e:
    DVar4 = DAT_10163350 - 1;
  }
  pvVar5 = TlsGetValue(DVar4);
  if (pvVar5 < (LPVOID)0x3) {
    piVar8 = FUN_1013c160((int)pvVar5);
  }
  else {
    LOCK();
    piVar8 = (int *)((int)pvVar5 + -8);
    iVar1 = *piVar8;
    *piVar8 = *piVar8 + 1;
    UNLOCK();
    if (*piVar8 == 0 || SCARRY4(iVar1,1) != *piVar8 < 0) goto LAB_10136e3e;
    piVar8 = (int *)((int)pvVar5 + -8);
  }
  iVar1 = piVar8[2];
  iVar2 = piVar8[3];
  puVar6 = FUN_10107380(0,0x20);
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 1;
    puVar6[1] = 1;
    puVar6[2] = iVar1;
    puVar6[3] = iVar2;
    puVar6[4] = piVar7;
    puVar6[5] = 0;
    puVar6[6] = 0;
    LOCK();
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (*piVar8 == 0) {
      FUN_10107640(piVar8);
    }
    return puVar6;
  }
  FUN_1013679e(8,0x20);
LAB_10136e3e:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}
