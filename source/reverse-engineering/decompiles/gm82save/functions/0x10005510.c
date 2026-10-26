// rea decompile_all
// name: FUN_10005510
// address: 0x10005510
// body: available
// range: 0x10005510-0x10005605 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100055fd to 0x100b7130 FUN_100b7130 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10005510(int param_1)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  HANDLE pvVar3;

  if (*(int *)(param_1 + 0x1bc) != 0) {
    pvVar1 = *(LPVOID *)(param_1 + 0x1b8);
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,0,pvVar1);
  }
  CloseHandle(*(HANDLE *)(param_1 + 0x1cc));
  if (*(int *)(param_1 + 0x10) != 0) {
    pvVar1 = *(LPVOID *)(param_1 + 0x14);
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,0,pvVar1);
  }
  pvVar1 = *(LPVOID *)(param_1 + 0x3c);
  pvVar2 = *(LPVOID *)((int)pvVar1 + 0x378);
  pvVar3 = GetProcessHeap();
  HeapFree(pvVar3,0,pvVar2);
  if (*(int *)((int)pvVar1 + 0x360) != 0) {
    pvVar2 = *(LPVOID *)((int)pvVar1 + 0x364);
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,0,pvVar2);
  }
  pvVar2 = *(LPVOID *)((int)pvVar1 + 0x37c);
  pvVar3 = GetProcessHeap();
  HeapFree(pvVar3,0,pvVar2);
  if (*(int *)((int)pvVar1 + 0x36c) != 0) {
    pvVar2 = *(LPVOID *)((int)pvVar1 + 0x370);
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,0,pvVar2);
  }
  pvVar3 = GetProcessHeap();
  HeapFree(pvVar3,0,pvVar1);
  if (*(int *)(param_1 + 0x30) != 0) {
    pvVar1 = *(LPVOID *)(param_1 + 0x34);
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,0,pvVar1);
  }
  if (*(int *)(param_1 + 0x60) != -1) {
    FUN_100b7130(param_1 + 0x60);
    return;
  }
  return;
}
