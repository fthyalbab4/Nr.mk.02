// rea decompile_all
// name: FUN_100c8810
// address: 0x100c8810
// body: available
// range: 0x100c8810-0x100c88c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100c8810(LPVOID param_1)

{
  int *piVar1;
  undefined4 *lpMem;
  LPVOID pvVar2;
  HANDLE pvVar3;
  int iVar4;
  undefined4 *puVar5;

  if ((*(char *)((int)param_1 + 0x3c) != -1) && (*(char *)((int)param_1 + 0x3c) != '\x02')) {
    piVar1 = *(int **)((int)param_1 + 0x30);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_100c9450(*(LPVOID *)((int)param_1 + 0x30),*(undefined4 **)((int)param_1 + 0x34));
    }
  }
  lpMem = *(undefined4 **)((int)param_1 + 0x50);
  puVar5 = lpMem;
  for (iVar4 = *(int *)((int)param_1 + 0x54); iVar4 != 0; iVar4 = iVar4 + -1) {
    pvVar2 = (LPVOID)*puVar5;
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,0,pvVar2);
    puVar5 = puVar5 + 1;
  }
  if (*(int *)((int)param_1 + 0x4c) != 0) {
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,0,lpMem);
  }
  pvVar2 = *(LPVOID *)((int)param_1 + 0x58);
  pvVar3 = GetProcessHeap();
  HeapFree(pvVar3,0,pvVar2);
  if (param_1 != (LPVOID)0xffffffff) {
    LOCK();
    piVar1 = (int *)((int)param_1 + 4);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      pvVar3 = GetProcessHeap();
      HeapFree(pvVar3,0,param_1);
    }
  }
  return;
}
