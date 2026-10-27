// rea decompile_all
// name: FUN_100b5fe0
// address: 0x100b5fe0
// body: available
// range: 0x100b5fe0-0x100b5ff9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b5ff5 to 0x100071e0 FUN_100071e0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100b5fe0(char *param_1)

{
  LPVOID lpMem;
  HANDLE pvVar1;
  int iVar2;
  undefined4 *puVar3;
  LPVOID pvVar4;
  int *lpMem_00;

  if (*(int *)(param_1 + 8) == -2) {
    FUN_100071e0((int *)(param_1 + 0xc));
    return;
  }
  if (*(int *)(param_1 + 8) == -3) {
    return;
  }
  iVar2 = 4;
  if (999999999 < *(int *)(param_1 + 8)) {
    iVar2 = *(int *)(param_1 + 8) + -1000000000;
  }
  if (iVar2 == 1) {
    if (*param_1 != '\x03') goto LAB_100adff7;
    lpMem_00 = *(int **)(param_1 + 4);
    puVar3 = (undefined4 *)lpMem_00[1];
    pvVar4 = (LPVOID)*lpMem_00;
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(pvVar4);
    }
    if (puVar3[1] != 0) {
      if (8 < (uint)puVar3[2]) {
        pvVar4 = *(LPVOID *)((int)pvVar4 + -4);
      }
      pvVar1 = GetProcessHeap();
      HeapFree(pvVar1,0,pvVar4);
    }
  }
  else {
    if ((iVar2 != 0) || (*(int *)(param_1 + 0xc) == 0)) goto LAB_100adff7;
    lpMem_00 = *(int **)(param_1 + 0x10);
  }
  pvVar1 = GetProcessHeap();
  HeapFree(pvVar1,0,lpMem_00);
LAB_100adff7:
  iVar2 = *(int *)(param_1 + 0x20);
  pvVar4 = *(LPVOID *)(param_1 + 0x1c);
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)((int)pvVar4 + 4);
    do {
      if (puVar3[-1] != 0) {
        lpMem = (LPVOID)*puVar3;
        pvVar1 = GetProcessHeap();
        HeapFree(pvVar1,0,lpMem);
      }
      puVar3 = puVar3 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    pvVar1 = GetProcessHeap();
    HeapFree(pvVar1,0,pvVar4);
  }
  return;
}
