// rea decompile_all
// name: FUN_100c8c20
// address: 0x100c8c20
// body: available
// range: 0x100c8c20-0x100c8c42 inclusive
// range: 0x100c8c50-0x100c8cc9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100c8c20(int param_1)

{
  uint *lpMem;
  LPVOID lpMem_00;
  int iVar1;
  HANDLE pvVar2;
  int iVar3;
  uint *puVar4;

  iVar3 = *(int *)(param_1 + 0xc);
  lpMem = *(uint **)(param_1 + 8);
  puVar4 = lpMem;
  do {
    if (iVar3 == 0) {
      if (*(int *)(param_1 + 4) != 0) {
        pvVar2 = GetProcessHeap();
        HeapFree(pvVar2,0,lpMem);
      }
      return;
    }
    iVar1 = *puVar4 - 7;
    if (*puVar4 < 7) {
      iVar1 = 0;
    }
    switch(iVar1) {
    case 0:
      FUN_100e81b0((int *)puVar4);
      FUN_100c88d0((int *)puVar4);
      iVar1 = 0x18;
LAB_100c8c63:
      lpMem_00 = *(LPVOID *)((int)puVar4 + iVar1);
      pvVar2 = GetProcessHeap();
      HeapFree(pvVar2,0,lpMem_00);
      break;
    case 1:
    case 2:
    case 3:
      iVar1 = 8;
      if (puVar4[1] != 0) goto LAB_100c8c63;
    }
    puVar4 = puVar4 + 7;
    iVar3 = iVar3 + -1;
  } while( true );
}
