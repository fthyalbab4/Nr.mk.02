// rea decompile_all
// name: FUN_1010d190
// address: 0x1010d190
// body: available
// range: 0x1010d190-0x1010d1a9 inclusive
// range: 0x1010d1b0-0x1010d232 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1010d226 to 0x1010d240 FUN_1010d240 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1010d190(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  HANDLE pvVar4;
  int *piVar5;
  LPVOID lpMem;

  piVar5 = (int *)*param_1;
  *param_1 = 0;
  if (piVar5 != (int *)0x0) {
    do {
      LOCK();
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (*piVar5 != 0) break;
      lpMem = (LPVOID)piVar5[2];
      puVar2 = (undefined4 *)piVar5[3];
      piVar3 = (int *)piVar5[4];
      if (piVar5 != (int *)0xffffffff) {
        LOCK();
        piVar1 = piVar5 + 1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          pvVar4 = GetProcessHeap();
          HeapFree(pvVar4,0,piVar5);
        }
      }
      if (lpMem == (LPVOID)0x0) break;
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(lpMem);
      }
      if (puVar2[1] != 0) {
        if (8 < (uint)puVar2[2]) {
          lpMem = *(LPVOID *)((int)lpMem + -4);
        }
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,0,lpMem);
      }
      piVar5 = piVar3;
    } while (piVar3 != (int *)0x0);
    piVar5 = (int *)*param_1;
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (*piVar5 == 0) {
        FUN_1010d240(param_1);
        return;
      }
    }
  }
  return;
}
