// rea decompile_all
// name: FUN_1011d3b0
// address: 0x1011d3b0
// body: available
// range: 0x1011d3b0-0x1011d3c4 inclusive
// range: 0x1011d3d0-0x1011d42f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1011d3b0(undefined4 *param_1)

{
  int *piVar1;
  int *lpMem;
  undefined4 *puVar2;
  int *piVar3;
  HANDLE pvVar4;
  LPVOID lpMem_00;

  lpMem = (int *)*param_1;
  *param_1 = 0;
  while( true ) {
    if (lpMem == (int *)0x0) {
      return;
    }
    LOCK();
    *lpMem = *lpMem + -1;
    UNLOCK();
    if (*lpMem != 0) break;
    lpMem_00 = (LPVOID)lpMem[2];
    puVar2 = (undefined4 *)lpMem[3];
    piVar3 = (int *)lpMem[4];
    if (lpMem != (int *)0xffffffff) {
      LOCK();
      piVar1 = lpMem + 1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,0,lpMem);
      }
    }
    if (lpMem_00 == (LPVOID)0x0) {
      return;
    }
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(lpMem_00);
    }
    lpMem = piVar3;
    if (puVar2[1] != 0) {
      if (8 < (uint)puVar2[2]) {
        lpMem_00 = *(LPVOID *)((int)lpMem_00 + -4);
      }
      pvVar4 = GetProcessHeap();
      HeapFree(pvVar4,0,lpMem_00);
    }
  }
  return;
}
