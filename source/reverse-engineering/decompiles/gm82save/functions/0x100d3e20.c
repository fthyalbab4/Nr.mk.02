// rea decompile_all
// name: FUN_100d3e20
// address: 0x100d3e20
// body: available
// range: 0x100d3e20-0x100d3e4b inclusive
// range: 0x100d3e50-0x100d3ee1 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100d3ed5 to 0x100d3ef0 FUN_100d3ef0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100d3e20(int param_1)

{
  LPVOID pvVar1;
  int iVar2;
  LPVOID lpMem;
  HANDLE pvVar3;
  int iVar4;
  int *piVar5;

  iVar4 = *(int *)(param_1 + 0x140);
  pvVar1 = *(LPVOID *)(param_1 + 0x13c);
  if (iVar4 != 0) {
    piVar5 = (int *)((int)pvVar1 + 8);
    do {
      iVar2 = piVar5[-2];
      if ((((iVar2 == 4) || (iVar2 == 2)) || (iVar2 == 1)) && (*piVar5 != 0)) {
        lpMem = (LPVOID)piVar5[-1];
        pvVar3 = GetProcessHeap();
        HeapFree(pvVar3,0,lpMem);
      }
      piVar5 = piVar5 + 5;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (*(int *)(param_1 + 0x138) != 0) {
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,0,pvVar1);
  }
  if (*(int *)(param_1 + 0x144) != 0) {
    pvVar1 = *(LPVOID *)(param_1 + 0x148);
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,0,pvVar1);
  }
  piVar5 = *(int **)(param_1 + 0x134);
  LOCK();
  *piVar5 = *piVar5 + -1;
  UNLOCK();
  if (*piVar5 == 0) {
    FUN_100d3ef0(*(LPVOID *)(param_1 + 0x134));
    return;
  }
  return;
}
