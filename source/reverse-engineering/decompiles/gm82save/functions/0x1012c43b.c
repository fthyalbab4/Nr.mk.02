// rea decompile_all
// name: FUN_1012c43b
// address: 0x1012c43b
// body: available
// range: 0x1012c43b-0x1012c4c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1012c4c1 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1012c43b(int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 in_EAX;
  undefined3 extraout_var;
  uint uVar4;
  undefined4 uVar5;
  int iVar3;

  if (DAT_101633d1 != '\0') {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  if ((param_1 != 0) && (param_1 != 1)) {
    FUN_1012cc7b();
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  iVar3 = CONCAT31(extraout_var,bVar2);
  if ((iVar3 == 0) || (param_1 != 0)) {
    DAT_101633d4 = 0xffffffff;
    _DAT_101633d8 = 0xffffffff;
    _DAT_101633dc = 0xffffffff;
    _DAT_101633e0 = 0xffffffff;
    _DAT_101633e4 = 0xffffffff;
    _DAT_101633e8 = 0xffffffff;
LAB_1012c4ae:
    DAT_101633d1 = '\x01';
    uVar4 = CONCAT31((int3)((uint)iVar3 >> 8),1);
  }
  else {
    uVar4 = initialize_onexit_table(&DAT_101633d4);
    if (uVar4 == 0) {
      uVar4 = initialize_onexit_table(&DAT_101633e0);
      iVar3 = 0;
      if (uVar4 == 0) goto LAB_1012c4ae;
    }
    uVar4 = uVar4 & 0xffffff00;
  }
  return uVar4;
}
