// rea decompile_all
// name: FUN_10137d90
// address: 0x10137d90
// body: available
// range: 0x10137d90-0x10137df3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10137ddc to 0x1011b0a0 FUN_1011b0a0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10137d90(undefined4 *param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  int local_1c;
  undefined8 local_18;
  int local_10;

  piVar2 = (int *)FUN_1013c310();
  local_1c = *param_2;
  *param_2 = 0;
  if (local_1c == 0) {
    FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_1014f710);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_18 = *(undefined8 *)(param_2 + 1);
  local_10 = param_2[3];
  FUN_100b45b0(param_1,&local_1c,piVar2);
  LOCK();
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (*piVar2 == 0) {
    FUN_1011b0a0(piVar2);
    return;
  }
  return;
}
