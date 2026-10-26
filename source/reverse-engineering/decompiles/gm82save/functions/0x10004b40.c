// rea decompile_all
// name: FUN_10004b40
// address: 0x10004b40
// body: available
// range: 0x10004b40-0x10004b6d inclusive
// range: 0x10004b70-0x10004ba6 inclusive
// range: 0x10004bb0-0x10004c1c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10004b40(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  HANDLE pvVar4;
  int *lpMem;
  LPVOID pvVar5;
  int iVar6;

  if (*param_1 != 0) {
    if (*param_1 == 1) {
      if ((int *)param_1[1] != (int *)0x0) {
        iVar6 = param_1[3];
        lpMem = (int *)param_1[1];
        do {
          iVar6 = iVar6 + -1;
          piVar1 = (int *)lpMem[3];
          param_1[1] = (int)piVar1;
          if (piVar1 == (int *)0x0) {
            param_1[2] = 0;
            param_1[3] = iVar6;
            iVar2 = *lpMem;
          }
          else {
            piVar1[4] = 0;
            param_1[3] = iVar6;
            iVar2 = *lpMem;
          }
          if (iVar2 != 0) {
            pvVar5 = (LPVOID)lpMem[1];
            pvVar4 = GetProcessHeap();
            HeapFree(pvVar4,0,pvVar5);
          }
          pvVar4 = GetProcessHeap();
          HeapFree(pvVar4,0,lpMem);
          lpMem = piVar1;
        } while (piVar1 != (int *)0x0);
      }
    }
    else {
      puVar3 = (undefined4 *)param_1[2];
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)(param_1[1]);
      }
      if (puVar3[1] != 0) {
        pvVar5 = (LPVOID)param_1[1];
        if (8 < (uint)puVar3[2]) {
          pvVar5 = *(LPVOID *)((int)pvVar5 + -4);
        }
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,0,pvVar5);
      }
    }
  }
  return;
}
