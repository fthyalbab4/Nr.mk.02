// rea decompile_all
// name: FUN_100051b0
// address: 0x100051b0
// body: available
// range: 0x100051b0-0x100051d3 inclusive
// range: 0x100051e0-0x10005214 inclusive
// range: 0x10005220-0x10005273 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100051b0(int *param_1)

{
  HANDLE pvVar1;
  undefined4 *puVar2;
  LPVOID pvVar3;
  int iVar4;

  if (*param_1 != 0) {
    if (*param_1 == 1) {
      iVar4 = param_1[3];
      if (iVar4 != 0) {
        puVar2 = (undefined4 *)(param_1[1] + 4);
        do {
          if (puVar2[-1] != 0) {
            pvVar3 = (LPVOID)*puVar2;
            pvVar1 = GetProcessHeap();
            HeapFree(pvVar1,0,pvVar3);
          }
          puVar2 = puVar2 + 3;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar4 = param_1[6];
      if (iVar4 != 0) {
        puVar2 = (undefined4 *)(param_1[4] + 4);
        do {
          if (puVar2[-1] != 0) {
            pvVar3 = (LPVOID)*puVar2;
            pvVar1 = GetProcessHeap();
            HeapFree(pvVar1,0,pvVar3);
          }
          puVar2 = puVar2 + 3;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    else {
      puVar2 = (undefined4 *)param_1[2];
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(param_1[1]);
      }
      if (puVar2[1] != 0) {
        pvVar3 = (LPVOID)param_1[1];
        if (8 < (uint)puVar2[2]) {
          pvVar3 = *(LPVOID *)((int)pvVar3 + -4);
        }
        pvVar1 = GetProcessHeap();
        HeapFree(pvVar1,0,pvVar3);
      }
    }
  }
  return;
}
