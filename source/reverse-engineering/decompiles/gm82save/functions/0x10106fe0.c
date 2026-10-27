// rea decompile_all
// name: FUN_10106fe0
// address: 0x10106fe0
// body: available
// range: 0x10106fe0-0x10107019 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_10106fe0(undefined1 param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 uVar4;
  undefined3 uVar5;

  iVar2 = DAT_10163360;
  LOCK();
  DAT_10163360 = DAT_10163360 + 1;
  UNLOCK();
  if (DAT_10163360 == 0 || iVar2 < -1) {
    return 0;
  }
  piVar3 = FUN_101072c0();
  if (piVar3 != (int *)0x0) {
    uVar5 = (undefined3)((uint)extraout_ECX >> 8);
    uVar4 = CONCAT31(uVar5,1);
    if ((char)piVar3[1] == '\0') {
      *piVar3 = *piVar3 + 1;
      uVar4 = CONCAT31(uVar5,2);
      *(undefined1 *)(piVar3 + 1) = param_1;
    }
    return uVar4;
  }
  FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
