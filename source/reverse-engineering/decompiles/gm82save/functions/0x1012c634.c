// rea decompile_all
// name: FUN_1012c634
// address: 0x1012c634
// body: available
// range: 0x1012c634-0x1012c716 inclusive
// range: 0x1012c724-0x1012c73d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1012c73d with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 __cdecl FUN_1012c634(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_14;

  uVar4 = ___scrt_initialize_crt(0);
  if ((char)uVar4 != '\0') {
    ___scrt_acquire_startup_lock();
    bVar2 = true;
    if (DAT_101633c8 != 0) {
      FUN_1012cc7b();
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    DAT_101633c8 = 1;
    bVar3 = FUN_1012c364();
    if (bVar3) {
      FUN_1012cf18();
      FUN_1012ced1();
      FUN_1012cef5();
      iVar5 = initterm_e(&DAT_1013e2b0,&DAT_1013e2b4);
      if (iVar5 == 0) {
        uVar4 = ___scrt_dllmain_after_initialize_c();
        if ((char)uVar4 != '\0') {
          initterm(&DAT_1013e2a0,&DAT_1013e2ac);
          DAT_101633c8 = 2;
          bVar2 = false;
        }
      }
    }
    FUN_1012c71a();
    if (!bVar2) {
      piVar6 = (int *)FUN_1012cf12();
      if (*piVar6 != 0) {
        uVar4 = FUN_1012c4c2((int)piVar6);
        if ((char)uVar4 != '\0') {
          uVar4 = 2;
          pcVar1 = (code *)*piVar6;
          guard_check_icall();
          (*pcVar1)(param_1,uVar4,param_2);
        }
      }
      DAT_101633ec = DAT_101633ec + 1;
      uVar4 = 1;
      goto LAB_1012c726;
    }
  }
  uVar4 = 0;
LAB_1012c726:
  *unaff_FS_OFFSET = local_14;
  return uVar4;
}
