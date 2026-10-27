// rea decompile_all
// name: FUN_10080190
// address: 0x10080190
// body: available
// range: 0x10080190-0x1008022e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_10080190(char *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *lpMem;
  undefined4 *puVar3;
  LPVOID pvVar4;
  undefined4 uVar5;
  BOOL BVar6;
  HANDLE hHeap;
  char local_18;
  undefined7 uStack_17;

  piVar1 = *(int **)(param_1 + 8);
  iVar2 = piVar1[2];
  if (param_3 < (int *)(*piVar1 - iVar2)) {
    memcpy((void *)(piVar1[1] + iVar2),param_2,(size_t)param_3);
    uVar5 = 0;
    piVar1[2] = iVar2 + (int)param_3;
  }
  else {
    BVar6 = FUN_101364f0((undefined8 *)&local_18,piVar1,param_2,param_3);
    if (local_18 == -1) {
      uVar5 = 0;
    }
    else {
      if (*param_1 == '\x03') {
        lpMem = *(undefined4 **)(param_1 + 4);
        puVar3 = (undefined4 *)lpMem[1];
        pvVar4 = (LPVOID)*lpMem;
        if ((code *)*puVar3 != (code *)0x0) {
          (*(code *)*puVar3)(pvVar4);
        }
        if (puVar3[1] != 0) {
          FUN_10093cf0(pvVar4,puVar3[2]);
        }
        hHeap = GetProcessHeap();
        BVar6 = HeapFree(hHeap,0,lpMem);
      }
      uVar5 = CONCAT31((int3)((uint)BVar6 >> 8),1);
      *(ulonglong *)param_1 = CONCAT71(uStack_17,local_18);
    }
  }
  return uVar5;
}
