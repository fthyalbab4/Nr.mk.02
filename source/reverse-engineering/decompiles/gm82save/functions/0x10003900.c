// rea decompile_all
// name: FUN_10003900
// address: 0x10003900
// body: available
// range: 0x10003900-0x1000396f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10003900(void)

{
  LPVOID pvVar1;
  HANDLE pvVar2;
  uint uVar3;

  if (DAT_10163248 != 0) {
    if ((DAT_1016324c != 0) &&
       (uVar3 = DAT_1016324c * 0x28 + 0x37U & 0xfffffff0, DAT_1016324c + uVar3 != -0x11)) {
      pvVar1 = *(LPVOID *)((DAT_10163248 - uVar3) + -4);
      pvVar2 = GetProcessHeap();
      HeapFree(pvVar2,0,pvVar1);
    }
    if ((DAT_1016326c != 0) && (DAT_1016326c * 0x21 != -0x31)) {
      pvVar1 = *(LPVOID *)(DAT_10163268 + DAT_1016326c * -0x20 + -0x24);
      pvVar2 = GetProcessHeap();
      HeapFree(pvVar2,0,pvVar1);
    }
  }
  return;
}
