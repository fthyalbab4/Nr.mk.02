// rea decompile_all
// name: FUN_100c0500
// address: 0x100c0500
// body: available
// range: 0x100c0500-0x100c0513 inclusive
// range: 0x100c0520-0x100c055c inclusive
// range: 0x100c0560-0x100c0592 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100c0500(undefined4 *param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  HANDLE pvVar3;
  uint uVar4;
  int *piVar5;

  piVar5 = (int *)param_1[1];
  if (param_1[3] - (int)piVar5 != 0) {
    uVar4 = (uint)(param_1[3] - (int)piVar5) >> 4;
    do {
      piVar1 = (int *)*piVar5;
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        FUN_100be220(piVar5);
      }
      piVar5 = piVar5 + 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (param_1[2] != 0) {
    pvVar2 = (LPVOID)*param_1;
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,0,pvVar2);
  }
  piVar5 = (int *)param_1[5];
  if (param_1[7] - (int)piVar5 != 0) {
    uVar4 = (uint)(param_1[7] - (int)piVar5) >> 3;
    do {
      piVar1 = (int *)*piVar5;
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        FUN_100be220(piVar5);
      }
      piVar5 = piVar5 + 2;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (param_1[6] != 0) {
    pvVar2 = (LPVOID)param_1[4];
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,0,pvVar2);
  }
  return;
}
