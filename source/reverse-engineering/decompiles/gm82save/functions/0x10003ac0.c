// rea decompile_all
// name: FUN_10003ac0
// address: 0x10003ac0
// body: available
// range: 0x10003ac0-0x10003b58 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10003ac0(int *param_1)

{
  int iVar1;
  int *lpMem;
  undefined4 *puVar2;
  HANDLE pvVar3;
  LPVOID lpMem_00;

  iVar1 = *param_1;
  if (iVar1 == -1) {
    if ((char)param_1[1] == '\x03') {
      lpMem = (int *)param_1[2];
      puVar2 = (undefined4 *)lpMem[1];
      lpMem_00 = (LPVOID)*lpMem;
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(lpMem_00);
      }
      if (puVar2[1] != 0) {
        if (8 < (uint)puVar2[2]) {
          lpMem_00 = *(LPVOID *)((int)lpMem_00 + -4);
        }
        pvVar3 = GetProcessHeap();
        HeapFree(pvVar3,0,lpMem_00);
      }
      pvVar3 = GetProcessHeap();
      HeapFree(pvVar3,0,lpMem);
    }
  }
  else {
    pvVar3 = (HANDLE)param_1[7];
    CloseHandle((HANDLE)param_1[6]);
    CloseHandle(pvVar3);
    if (iVar1 != 0) {
      CloseHandle((HANDLE)param_1[1]);
    }
    if (param_1[2] != 0) {
      CloseHandle((HANDLE)param_1[3]);
    }
    if (param_1[4] != 0) {
      CloseHandle((HANDLE)param_1[5]);
    }
  }
  return;
}
