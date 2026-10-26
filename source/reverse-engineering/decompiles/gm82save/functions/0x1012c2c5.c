// rea decompile_all
// name: FUN_1012c2c5
// address: 0x1012c2c5
// body: available
// range: 0x1012c2c5-0x1012c306 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_1012c2c5(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = *(int *)(param_1 + 0x3c) + param_1;
  iVar2 = iVar1 + 0x18 + (uint)*(ushort *)(iVar1 + 0x14);
  iVar1 = (uint)*(ushort *)(iVar1 + 6) * 0x28 + iVar2;
  while( true ) {
    if (iVar2 == iVar1) {
      return 0;
    }
    if ((*(uint *)(iVar2 + 0xc) <= param_2) &&
       (param_2 < *(int *)(iVar2 + 8) + *(uint *)(iVar2 + 0xc))) break;
    iVar2 = iVar2 + 0x28;
  }
  return iVar2;
}
