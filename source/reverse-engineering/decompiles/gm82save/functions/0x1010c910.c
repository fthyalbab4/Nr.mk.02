// rea decompile_all
// name: FUN_1010c910
// address: 0x1010c910
// body: available
// range: 0x1010c910-0x1010c9c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1010c9a8 to 0x1013c160 FUN_1013c160 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_1010c910(void)

{
  int iVar1;
  code *pcVar2;
  LPVOID pvVar3;
  DWORD DVar4;
  LPVOID pvVar5;
  int *piVar6;
  undefined8 uVar7;
  uint local_10 [3];

  if (DAT_10163350 == 0) {
    DVar4 = FUN_1013be20(&DAT_10163350);
    pvVar3 = TlsGetValue(DVar4);
  }
  else {
    pvVar3 = TlsGetValue(DAT_10163350 - 1);
  }
  if ((LPVOID)0x2 < pvVar3) {
    LOCK();
    piVar6 = (int *)((int)pvVar3 - 8);
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + 1;
    UNLOCK();
    if (*piVar6 == 0 || SCARRY4(iVar1,1) != *piVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    return (int *)((int)pvVar3 - 8);
  }
  if (pvVar3 != (LPVOID)0x2) {
    piVar6 = FUN_1013c160((int)pvVar3);
    return piVar6;
  }
  if (DAT_10163364 == 0) {
    DVar4 = FUN_1013be20(&DAT_10163364);
  }
  else {
    DVar4 = DAT_10163364 - 1;
  }
  pvVar3 = TlsGetValue(DVar4);
  if (DAT_10163374 == 0) {
    DVar4 = FUN_1013be20(&DAT_10163374);
  }
  else {
    DVar4 = DAT_10163374 - 1;
  }
  pvVar5 = TlsGetValue(DVar4);
  uVar7 = CONCAT44(pvVar5,pvVar3);
  if (pvVar3 == (LPVOID)0x0 && pvVar5 == (LPVOID)0x0) {
    uVar7 = FUN_1013c050();
  }
  local_10[0] = 0xffffffff;
  piVar6 = (int *)FUN_1010c9e0((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),local_10);
  return piVar6;
}
