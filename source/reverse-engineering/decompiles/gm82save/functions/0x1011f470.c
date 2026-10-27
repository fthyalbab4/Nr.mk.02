// rea decompile_all
// name: FUN_1011f470
// address: 0x1011f470
// body: available
// range: 0x1011f470-0x1011f4b6 inclusive
// range: 0x1011f4c0-0x1011f554 inclusive
// range: 0x1011f560-0x1011f5f6 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1011f5ea to 0x1011f600 FUN_1011f600 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1011f470(int param_1)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  int *piVar3;
  HANDLE pvVar4;
  int iVar5;
  undefined4 *puVar6;

  if (*(int *)(param_1 + 0x40) != 0) {
    pvVar1 = *(LPVOID *)(param_1 + 0x44);
    pvVar4 = GetProcessHeap();
    HeapFree(pvVar4,0,pvVar1);
  }
  iVar5 = *(int *)(param_1 + 0xd0);
  pvVar1 = *(LPVOID *)(param_1 + 0xcc);
  if (iVar5 != 0) {
    puVar6 = (undefined4 *)((int)pvVar1 + 4);
    do {
      if (puVar6[-1] != 0) {
        pvVar2 = (LPVOID)*puVar6;
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,0,pvVar2);
      }
      puVar6 = puVar6 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (*(int *)(param_1 + 200) != 0) {
    pvVar4 = GetProcessHeap();
    HeapFree(pvVar4,0,pvVar1);
  }
  if (0 < *(int *)(param_1 + 0x50)) {
    pvVar1 = *(LPVOID *)(param_1 + 0x54);
    pvVar4 = GetProcessHeap();
    HeapFree(pvVar4,0,pvVar1);
  }
  if (0 < *(int *)(param_1 + 0xe0)) {
    pvVar1 = *(LPVOID *)(param_1 + 0xe4);
    pvVar4 = GetProcessHeap();
    HeapFree(pvVar4,0,pvVar1);
  }
  iVar5 = *(int *)(param_1 + 0xdc);
  pvVar1 = *(LPVOID *)(param_1 + 0xd8);
  if (iVar5 != 0) {
    puVar6 = (undefined4 *)((int)pvVar1 + 4);
    do {
      if (puVar6[-1] != 0) {
        pvVar2 = (LPVOID)*puVar6;
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,0,pvVar2);
      }
      puVar6 = puVar6 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (*(int *)(param_1 + 0xd4) != 0) {
    pvVar4 = GetProcessHeap();
    HeapFree(pvVar4,0,pvVar1);
  }
  if (0 < *(int *)(param_1 + 0x60)) {
    pvVar1 = *(LPVOID *)(param_1 + 100);
    pvVar4 = GetProcessHeap();
    HeapFree(pvVar4,0,pvVar1);
  }
  if (0 < *(int *)(param_1 + 0x70)) {
    pvVar1 = *(LPVOID *)(param_1 + 0x74);
    pvVar4 = GetProcessHeap();
    HeapFree(pvVar4,0,pvVar1);
  }
  piVar3 = *(int **)(param_1 + 0xf0);
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      FUN_1011f600(*(LPVOID *)(param_1 + 0xf0));
      return;
    }
  }
  return;
}
