// rea decompile_all
// name: FUN_1011afa0
// address: 0x1011afa0
// body: available
// range: 0x1011afa0-0x1011b09e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1011afa0(LPVOID param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  HANDLE pvVar5;
  LPVOID pvVar6;
  bool bVar7;

  pvVar6 = *(LPVOID *)((int)param_1 + 0x10);
  iVar2 = *(int *)((int)param_1 + 0xc);
  bVar7 = pvVar6 != (LPVOID)0x0;
  if ((iVar2 != 0) && (pvVar6 != (LPVOID)0x0)) {
    puVar3 = *(undefined4 **)((int)param_1 + 0x14);
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(pvVar6);
    }
    if (puVar3[1] != 0) {
      if (8 < (uint)puVar3[2]) {
        pvVar6 = *(LPVOID *)((int)pvVar6 + -4);
      }
      pvVar5 = GetProcessHeap();
      HeapFree(pvVar5,0,pvVar6);
    }
  }
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  iVar4 = *(int *)((int)param_1 + 8);
  if (iVar4 == 0) goto LAB_1011b07c;
  if (((byte)iVar2 & bVar7) == 0) {
    LOCK();
    piVar1 = (int *)(iVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_1011b00f;
LAB_1011b022:
    FUN_10107860((char *)(*(int *)(iVar4 + 8) + 0x18));
    piVar1 = *(int **)((int)param_1 + 8);
  }
  else {
    *(undefined1 *)(iVar4 + 0x10) = 1;
    LOCK();
    piVar1 = (int *)(iVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) goto LAB_1011b022;
LAB_1011b00f:
    piVar1 = *(int **)((int)param_1 + 8);
  }
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_1011b0a0(*(LPVOID *)((int)param_1 + 8));
    }
  }
  if ((*(int *)((int)param_1 + 0xc) != 0) &&
     (pvVar6 = *(LPVOID *)((int)param_1 + 0x10), pvVar6 != (LPVOID)0x0)) {
    puVar3 = *(undefined4 **)((int)param_1 + 0x14);
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(pvVar6);
    }
    if (puVar3[1] != 0) {
      if (8 < (uint)puVar3[2]) {
        pvVar6 = *(LPVOID *)((int)pvVar6 + -4);
      }
      pvVar5 = GetProcessHeap();
      HeapFree(pvVar5,0,pvVar6);
    }
  }
LAB_1011b07c:
  if (param_1 != (LPVOID)0xffffffff) {
    LOCK();
    piVar1 = (int *)((int)param_1 + 4);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      pvVar5 = GetProcessHeap();
      HeapFree(pvVar5,0,param_1);
    }
  }
  return;
}
