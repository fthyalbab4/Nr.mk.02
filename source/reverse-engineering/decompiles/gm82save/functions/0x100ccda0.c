// rea decompile_all
// name: FUN_100ccda0
// address: 0x100ccda0
// body: available
// range: 0x100ccda0-0x100cce21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100cce1b to 0x100ccd70 FUN_100ccd70 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_100ccda0(undefined4 *param_1)

{
  int *piVar1;

  piVar1 = (int *)param_1[0xb];
  LOCK();
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    FUN_100c8810((LPVOID)param_1[0xb]);
  }
  if (*(char *)(param_1 + 3) != '\x02') {
    piVar1 = (int *)*param_1;
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_100c9450((LPVOID)*param_1,(undefined4 *)param_1[1]);
    }
  }
  piVar1 = (int *)param_1[0xc];
  LOCK();
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    FUN_100ccd70(param_1[0xc]);
  }
  piVar1 = (int *)param_1[10];
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_100ccd70(param_1[10]);
    }
  }
  if ((*(char *)(param_1 + 8) != -1) && (*(char *)(param_1 + 8) != '\x02')) {
    piVar1 = (int *)param_1[5];
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_100c9450((LPVOID)param_1[5],(undefined4 *)param_1[6]);
    }
  }
  piVar1 = (int *)param_1[4];
  LOCK();
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    FUN_100ccd70(param_1[4]);
    return;
  }
  return;
}
