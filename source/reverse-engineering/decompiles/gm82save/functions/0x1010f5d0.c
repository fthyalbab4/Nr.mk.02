// rea decompile_all
// name: FUN_1010f5d0
// address: 0x1010f5d0
// body: available
// range: 0x1010f5d0-0x1010f65c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1010f5d0(undefined1 *param_1,SIZE_T param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  HANDLE pvVar3;
  DWORD DVar4;
  LPVOID lpMem;

  pvVar3 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,param_2,(LPTHREAD_START_ROUTINE)&LAB_1010f660,
                        param_3,0x10000,(LPDWORD)0x0);
  if (pvVar3 == (HANDLE)0x0) {
    piVar1 = (int *)*param_3;
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_10107640((LPVOID)*param_3);
    }
    puVar2 = (undefined4 *)param_3[2];
    lpMem = (LPVOID)param_3[1];
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(lpMem);
    }
    if (puVar2[1] != 0) {
      if (8 < (uint)puVar2[2]) {
        lpMem = *(LPVOID *)((int)lpMem + -4);
      }
      pvVar3 = GetProcessHeap();
      HeapFree(pvVar3,0,lpMem);
    }
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,0,param_3);
    DVar4 = GetLastError();
    *param_1 = 0;
    *(DWORD *)(param_1 + 4) = DVar4;
  }
  else {
    *(HANDLE *)(param_1 + 4) = pvVar3;
    *param_1 = 0xff;
  }
  return;
}
