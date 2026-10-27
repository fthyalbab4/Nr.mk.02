// rea decompile_all
// name: FUN_1012c73e
// address: 0x1012c73e
// body: available
// range: 0x1012c73e-0x1012c7d6 inclusive
// range: 0x1012c7ed-0x1012c7f4 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1012c7f4 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

bool __cdecl FUN_1012c73e(undefined4 param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 *unaff_FS_OFFSET;
  bool bVar4;
  undefined4 local_14;

  if (DAT_101633ec < 1) {
    bVar4 = false;
  }
  else {
    DAT_101633ec = DAT_101633ec + -1;
    ___scrt_acquire_startup_lock();
    if (DAT_101633c8 != 2) {
      FUN_1012cc7b();
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    FUN_1012c3d2();
    FUN_1012cedd();
    FUN_1012cf44();
    DAT_101633c8 = 0;
    FUN_1012c7da();
    cVar2 = ___scrt_uninitialize_crt(param_1,'\0');
    bVar4 = cVar2 != '\0';
    FUN_1012c7e7();
  }
  *unaff_FS_OFFSET = local_14;
  return bVar4;
}
