// rea decompile_all
// name: FUN_10004e30
// address: 0x10004e30
// body: available
// range: 0x10004e30-0x10004e5d inclusive
// range: 0x10004e60-0x10004e92 inclusive
// range: 0x10004ea0-0x10004ee2 inclusive
// range: 0x10004ef0-0x10004f26 inclusive
// range: 0x10004f30-0x10004f9c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10004e30(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  HANDLE pvVar4;
  int *piVar5;
  LPVOID pvVar6;
  int iVar7;

  if (*param_1 != 0) {
    if (*param_1 == 1) {
      if ((int *)param_1[1] != (int *)0x0) {
        iVar7 = param_1[3];
        piVar5 = (int *)param_1[1];
        do {
          iVar7 = iVar7 + -1;
          piVar1 = (int *)piVar5[3];
          param_1[1] = (int)piVar1;
          if (piVar1 == (int *)0x0) {
            param_1[2] = 0;
            param_1[3] = iVar7;
            iVar2 = *piVar5;
          }
          else {
            piVar1[4] = 0;
            param_1[3] = iVar7;
            iVar2 = *piVar5;
          }
          if (iVar2 != 0) {
            pvVar6 = (LPVOID)piVar5[1];
            pvVar4 = GetProcessHeap();
            HeapFree(pvVar4,0,pvVar6);
          }
          pvVar4 = GetProcessHeap();
          HeapFree(pvVar4,0,piVar5);
          piVar5 = piVar1;
        } while (piVar1 != (int *)0x0);
      }
      if ((int *)param_1[4] != (int *)0x0) {
        iVar7 = param_1[6];
        piVar5 = (int *)param_1[4];
        do {
          iVar7 = iVar7 + -1;
          piVar1 = (int *)piVar5[3];
          param_1[4] = (int)piVar1;
          if (piVar1 == (int *)0x0) {
            param_1[5] = 0;
            param_1[6] = iVar7;
            iVar2 = *piVar5;
          }
          else {
            piVar1[4] = 0;
            param_1[6] = iVar7;
            iVar2 = *piVar5;
          }
          if (iVar2 != 0) {
            pvVar6 = (LPVOID)piVar5[1];
            pvVar4 = GetProcessHeap();
            HeapFree(pvVar4,0,pvVar6);
          }
          pvVar4 = GetProcessHeap();
          HeapFree(pvVar4,0,piVar5);
          piVar5 = piVar1;
        } while (piVar1 != (int *)0x0);
      }
    }
    else {
      puVar3 = (undefined4 *)param_1[2];
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)(param_1[1]);
      }
      if (puVar3[1] != 0) {
        pvVar6 = (LPVOID)param_1[1];
        if (8 < (uint)puVar3[2]) {
          pvVar6 = *(LPVOID *)((int)pvVar6 + -4);
        }
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,0,pvVar6);
      }
    }
  }
  return;
}
