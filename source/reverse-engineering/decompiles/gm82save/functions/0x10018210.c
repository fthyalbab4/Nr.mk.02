// rea decompile_all
// name: FUN_10018210
// address: 0x10018210
// body: available
// range: 0x10018210-0x100182d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x10018239) */
/* WARNING: Removing unreachable block (ram,0x100182ac) */
/* WARNING: Removing unreachable block (ram,0x1001825c) */
/* WARNING: Removing unreachable block (ram,0x100182c5) */
/* WARNING: Removing unreachable block (ram,0x10018270) */

void __thiscall FUN_10018210(void *this,undefined4 *param_1)

{
  undefined4 auStack_24 [2];
  uint uStack_1c;
  undefined4 uStack_18;

  (*(code *)0x40810c)();
  auStack_24[0] = 0;
  FUN_10092830(&uStack_1c,(longlong *)*param_1,(int)auStack_24,(undefined **)&DAT_00000004);
  if ((char)uStack_1c == -1) {
    *(undefined1 *)this = 0xff;
  }
  else {
    *(ulonglong *)this = CONCAT44(uStack_18,uStack_1c);
  }
  return;
}
