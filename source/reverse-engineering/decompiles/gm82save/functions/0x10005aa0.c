// rea decompile_all
// name: FUN_10005aa0
// address: 0x10005aa0
// body: available
// range: 0x10005aa0-0x10005b2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10005aa0(int *param_1)

{
  undefined4 *puVar1;
  HANDLE pvVar2;
  LPVOID pvVar3;
  char local_18 [4];
  int *local_14;

  if ((char)param_1[3] == '\0') {
    FUN_10053090((undefined8 *)local_18,(int)param_1);
    if (local_18[0] == '\x03') {
      puVar1 = (undefined4 *)local_14[1];
      pvVar3 = (LPVOID)*local_14;
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)(pvVar3);
      }
      if (puVar1[1] != 0) {
        if (8 < (uint)puVar1[2]) {
          pvVar3 = *(LPVOID *)((int)pvVar3 + -4);
        }
        pvVar2 = GetProcessHeap();
        HeapFree(pvVar2,0,pvVar3);
      }
      pvVar2 = GetProcessHeap();
      HeapFree(pvVar2,0,local_14);
    }
  }
  if (*param_1 != 0) {
    pvVar3 = (LPVOID)param_1[1];
    pvVar2 = GetProcessHeap();
    HeapFree(pvVar2,0,pvVar3);
  }
  CloseHandle((HANDLE)param_1[4]);
  return;
}
