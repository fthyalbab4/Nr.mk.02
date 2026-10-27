// rea decompile_all
// name: FUN_10137aa0
// address: 0x10137aa0
// body: available
// range: 0x10137aa0-0x10137b13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __fastcall FUN_10137aa0(undefined8 *param_1)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  undefined1 extraout_DL;
  undefined8 local_20;
  undefined8 local_18;
  char local_10;
  undefined2 local_f;
  undefined1 local_d;

  piVar2 = (int *)FUN_1013c310();
  local_10 = *(char *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = 2;
  if (local_10 != '\x02') {
    local_20 = *param_1;
    local_18 = param_1[1];
    local_f = *(undefined2 *)((int)param_1 + 0x11);
    local_d = *(undefined1 *)((int)param_1 + 0x13);
    uVar3 = FUN_100af920((int *)&local_20,piVar2);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      uVar3 = CONCAT22((short)(uVar3 >> 0x10),CONCAT11(extraout_DL,(char)uVar3));
      FUN_1011b0a0(piVar2);
    }
    return uVar3;
  }
  FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_1014f710);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
