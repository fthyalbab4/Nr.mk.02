// rea decompile_all
// name: FUN_10138820
// address: 0x10138820
// body: available
// range: 0x10138820-0x10138871 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_10138820(void)

{
  LPVOID lpMem;
  int *piVar1;
  int *lpMem_00;
  int *piVar2;
  HANDLE pvVar3;
  bool bVar4;

  lpMem_00 = (int *)FUN_100b6e10(3,0);
  piVar2 = (int *)0x0;
  LOCK();
  bVar4 = DAT_101632e8 != (int *)0x0;
  piVar1 = lpMem_00;
  if (bVar4) {
    piVar2 = DAT_101632e8;
    piVar1 = DAT_101632e8;
  }
  DAT_101632e8 = piVar1;
  UNLOCK();
  if (bVar4) {
    if (lpMem_00[1] != 0) {
      lpMem = *(LPVOID *)(*lpMem_00 + -4);
      pvVar3 = GetProcessHeap();
      HeapFree(pvVar3,0,lpMem);
    }
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,0,lpMem_00);
    lpMem_00 = piVar2;
  }
  return lpMem_00;
}
