// rea decompile_all
// name: FUN_100b2540
// address: 0x100b2540
// body: available
// range: 0x100b2540-0x100b2614 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_100b2540(undefined8 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  HANDLE hHeap;
  LPVOID lpMem;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;

  local_28 = param_1[6];
  local_20 = param_1[7];
  local_58._0_8_ = *param_1;
  local_58._8_8_ = param_1[1];
  local_48 = param_1[2];
  local_40 = param_1[3];
  local_38 = param_1[4];
  local_30 = param_1[5];
  FUN_10019090((int *)&local_28);
  FUN_100a8da0(&local_58);
  piVar1 = *(int **)(param_1 + 8);
  if ((piVar1[3] != 0) && (lpMem = (LPVOID)piVar1[4], lpMem != (LPVOID)0x0)) {
    puVar2 = (undefined4 *)piVar1[5];
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(lpMem);
    }
    if (puVar2[1] != 0) {
      if (8 < (uint)puVar2[2]) {
        lpMem = *(LPVOID *)((int)lpMem + -4);
      }
      hHeap = GetProcessHeap();
      HeapFree(hHeap,0,lpMem);
    }
  }
  piVar1[3] = 1;
  piVar1[4] = 0;
  LOCK();
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    FUN_1011afa0(piVar1);
  }
  return;
}
