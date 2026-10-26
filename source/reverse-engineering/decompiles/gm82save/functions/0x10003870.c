// rea decompile_all
// name: FUN_10003870
// address: 0x10003870
// body: available
// range: 0x10003870-0x10003880 inclusive
// range: 0x10003890-0x100038fa inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10003870(int param_1)

{
  LPVOID lpMem;
  LPVOID lpMem_00;
  HANDLE pvVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;

  iVar4 = 0;
  do {
    lpMem = *(LPVOID *)(param_1 + 4 + iVar4 * 0xc);
    iVar3 = *(int *)(param_1 + 8 + iVar4 * 0xc);
    if (iVar3 != 0) {
      puVar2 = (undefined4 *)((int)lpMem + 4);
      do {
        if (puVar2[-1] != 0) {
          lpMem_00 = (LPVOID)*puVar2;
          pvVar1 = GetProcessHeap();
          HeapFree(pvVar1,0,lpMem_00);
        }
        puVar2 = puVar2 + 3;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (*(int *)(param_1 + iVar4 * 0xc) != 0) {
      pvVar1 = GetProcessHeap();
      HeapFree(pvVar1,0,lpMem);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0xc);
  return;
}
