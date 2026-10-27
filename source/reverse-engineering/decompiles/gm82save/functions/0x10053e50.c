// rea decompile_all
// name: FUN_10053e50
// address: 0x10053e50
// body: available
// range: 0x10053e50-0x10053f7e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10053e50(LPVOID param_1)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  undefined4 *puVar5;
  HANDLE pvVar6;
  LPVOID pvVar7;

  cVar3 = *(char *)((int)param_1 + 0xc);
  if (cVar3 != -3) {
    if (cVar3 == -2) {
      puVar5 = *(undefined4 **)((int)param_1 + 0x14);
      if ((code *)*puVar5 != (code *)0x0) {
        (*(code *)*puVar5)(*(undefined4 *)((int)param_1 + 0x10));
      }
      if (puVar5[1] != 0) {
        pvVar7 = *(LPVOID *)((int)param_1 + 0x10);
        if (8 < (uint)puVar5[2]) {
          pvVar7 = *(LPVOID *)((int)pvVar7 + -4);
        }
        pvVar6 = GetProcessHeap();
        HeapFree(pvVar6,0,pvVar7);
      }
    }
    else if (cVar3 != -1) {
      FUN_10005ca0((undefined1 *)((int)param_1 + 0xc));
    }
  }
  pcVar1 = (char *)((int)param_1 + 0xc);
  *pcVar1 = -3;
  piVar4 = *(int **)((int)param_1 + 8);
  if (piVar4 == (int *)0x0) goto LAB_10053f5f;
  if (cVar3 == -2) {
    *(undefined1 *)(piVar4 + 4) = 1;
    LOCK();
    piVar2 = piVar4 + 3;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) goto LAB_10053ef0;
LAB_10053ed4:
    LOCK();
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (*piVar4 != 0) goto LAB_10053eda;
LAB_10053f01:
    FUN_1011b0a0(*(LPVOID *)((int)param_1 + 8));
    cVar3 = *pcVar1;
  }
  else {
    LOCK();
    piVar2 = piVar4 + 3;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 != 0) goto LAB_10053ed4;
LAB_10053ef0:
    FUN_10107860((char *)(piVar4[2] + 0x18));
    LOCK();
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (*piVar4 == 0) goto LAB_10053f01;
LAB_10053eda:
    cVar3 = *pcVar1;
  }
  if (cVar3 != -3) {
    if (cVar3 == -2) {
      puVar5 = *(undefined4 **)((int)param_1 + 0x14);
      if ((code *)*puVar5 != (code *)0x0) {
        (*(code *)*puVar5)(*(undefined4 *)((int)param_1 + 0x10));
      }
      if (puVar5[1] != 0) {
        pvVar7 = *(LPVOID *)((int)param_1 + 0x10);
        if (8 < (uint)puVar5[2]) {
          pvVar7 = *(LPVOID *)((int)pvVar7 + -4);
        }
        pvVar6 = GetProcessHeap();
        HeapFree(pvVar6,0,pvVar7);
      }
    }
    else if (cVar3 != -1) {
      FUN_10005ca0(pcVar1);
    }
  }
LAB_10053f5f:
  if (param_1 != (LPVOID)0xffffffff) {
    LOCK();
    piVar4 = (int *)((int)param_1 + 4);
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (*piVar4 == 0) {
      pvVar6 = GetProcessHeap();
      HeapFree(pvVar6,0,param_1);
    }
  }
  return;
}
