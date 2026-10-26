// rea decompile_all
// name: FUN_100048c0
// address: 0x100048c0
// body: available
// range: 0x100048c0-0x100048f3 inclusive
// range: 0x10004900-0x10004932 inclusive
// range: 0x10004940-0x10004967 inclusive
// range: 0x10004970-0x100049f0 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100048c0(int *param_1)

{
  int *piVar1;
  LPVOID lpMem;
  int iVar2;
  HANDLE pvVar3;
  int *lpMem_00;
  undefined4 *puVar4;
  int iVar5;
  LPVOID pvVar6;

  if (*param_1 != 0) {
    if (*param_1 == 1) {
      if ((int *)param_1[1] != (int *)0x0) {
        iVar2 = param_1[3];
        lpMem_00 = (int *)param_1[1];
        do {
          piVar1 = (int *)lpMem_00[3];
          param_1[1] = (int)piVar1;
          if (piVar1 == (int *)0x0) {
            param_1[2] = 0;
          }
          else {
            piVar1[4] = 0;
          }
          iVar2 = iVar2 + -1;
          param_1[3] = iVar2;
          iVar5 = lpMem_00[2];
          pvVar6 = (LPVOID)lpMem_00[1];
          if (iVar5 != 0) {
            puVar4 = (undefined4 *)((int)pvVar6 + 4);
            do {
              if (puVar4[-1] != 0) {
                lpMem = (LPVOID)*puVar4;
                pvVar3 = GetProcessHeap();
                HeapFree(pvVar3,0,lpMem);
              }
              puVar4 = puVar4 + 3;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          if (*lpMem_00 != 0) {
            pvVar3 = GetProcessHeap();
            HeapFree(pvVar3,0,pvVar6);
          }
          pvVar3 = GetProcessHeap();
          HeapFree(pvVar3,0,lpMem_00);
          lpMem_00 = piVar1;
        } while (piVar1 != (int *)0x0);
      }
    }
    else {
      puVar4 = (undefined4 *)param_1[2];
      if ((code *)*puVar4 != (code *)0x0) {
        (*(code *)*puVar4)(param_1[1]);
      }
      if (puVar4[1] != 0) {
        pvVar6 = (LPVOID)param_1[1];
        if (8 < (uint)puVar4[2]) {
          pvVar6 = *(LPVOID *)((int)pvVar6 + -4);
        }
        pvVar3 = GetProcessHeap();
        HeapFree(pvVar3,0,pvVar6);
      }
    }
  }
  return;
}
