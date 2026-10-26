// rea decompile_all
// name: FUN_100c9450
// address: 0x100c9450
// body: available
// range: 0x100c9450-0x100c94ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100c9450(LPVOID param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  HANDLE hHeap;
  uint uVar3;

  uVar2 = param_2[2];
  if ((code *)*param_2 != (code *)0x0) {
    (*(code *)*param_2)((int)param_1 + (uVar2 - 1 & 0xfffffff8) + 8);
  }
  if (param_1 != (LPVOID)0xffffffff) {
    LOCK();
    piVar1 = (int *)((int)param_1 + 4);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      uVar3 = 4;
      if (4 < uVar2) {
        uVar3 = uVar2;
      }
      if ((uVar3 + 7 + param_2[1] & -uVar3) != 0) {
        if (8 < uVar2) {
          param_1 = *(LPVOID *)((int)param_1 + -4);
        }
        hHeap = GetProcessHeap();
        HeapFree(hHeap,0,param_1);
      }
    }
  }
  return;
}
