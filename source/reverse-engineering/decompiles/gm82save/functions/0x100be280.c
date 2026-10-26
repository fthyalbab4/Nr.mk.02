// rea decompile_all
// name: FUN_100be280
// address: 0x100be280
// body: available
// range: 0x100be280-0x100be29b inclusive
// range: 0x100be2a0-0x100be332 inclusive
// range: 0x100be340-0x100be355 inclusive
// range: 0x100be360-0x100be474 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100be280(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  HANDLE pvVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  LPVOID pvVar8;
  int *piVar9;
  int *piVar10;

  iVar6 = *(int *)(param_1 + 0x104);
  pvVar8 = *(LPVOID *)(param_1 + 0x100);
  if (iVar6 != 0) {
    piVar9 = (int *)((int)pvVar8 + 0x1c);
    do {
      piVar10 = (int *)*piVar9;
      LOCK();
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (*piVar10 == 0) {
        FUN_100be220(piVar9);
      }
      piVar9 = piVar9 + 9;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (*(int *)(param_1 + 0xfc) != 0) {
    pvVar4 = GetProcessHeap();
    HeapFree(pvVar4,0,pvVar8);
  }
  if (*(int *)(param_1 + 0xec) != 0) {
    pvVar8 = *(LPVOID *)(*(int *)(param_1 + 0xf0) + -4);
    pvVar4 = GetProcessHeap();
    HeapFree(pvVar4,0,pvVar8);
  }
  uVar1 = *(uint *)(param_1 + 0x80);
  puVar3 = *(undefined4 **)(param_1 + 0x44);
  for (uVar5 = *(uint *)(param_1 + 0x40) & 0xfffffffe; uVar5 != (uVar1 & 0xfffffffe);
      uVar5 = uVar5 + 2) {
    puVar7 = puVar3;
    if ((~uVar5 & 0x7e) == 0) {
      puVar7 = (undefined4 *)*puVar3;
      pvVar4 = GetProcessHeap();
      HeapFree(pvVar4,0,puVar3);
    }
    puVar3 = puVar7;
  }
  pvVar4 = GetProcessHeap();
  HeapFree(pvVar4,0,puVar3);
  piVar9 = *(int **)(param_1 + 200);
  piVar10 = piVar9;
  for (iVar6 = *(int *)(param_1 + 0xcc); iVar6 != 0; iVar6 = iVar6 + -1) {
    piVar2 = (int *)*piVar10;
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      FUN_100be220(piVar10);
    }
    piVar10 = piVar10 + 4;
  }
  if (*(int *)(param_1 + 0xc4) != 0) {
    pvVar4 = GetProcessHeap();
    HeapFree(pvVar4,0,piVar9);
  }
  pvVar8 = *(LPVOID *)(param_1 + 0xd0);
  if (pvVar8 != (LPVOID)0x0) {
    puVar3 = *(undefined4 **)(param_1 + 0xd4);
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(pvVar8);
    }
    if (puVar3[1] != 0) {
      if (8 < (uint)puVar3[2]) {
        pvVar8 = *(LPVOID *)((int)pvVar8 + -4);
      }
      pvVar4 = GetProcessHeap();
      HeapFree(pvVar4,0,pvVar8);
    }
  }
  pvVar8 = *(LPVOID *)(param_1 + 0xd8);
  if (pvVar8 != (LPVOID)0x0) {
    puVar3 = *(undefined4 **)(param_1 + 0xdc);
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(pvVar8);
    }
    if (puVar3[1] != 0) {
      if (8 < (uint)puVar3[2]) {
        pvVar8 = *(LPVOID *)((int)pvVar8 + -4);
      }
      pvVar4 = GetProcessHeap();
      HeapFree(pvVar4,0,pvVar8);
    }
  }
  pvVar8 = *(LPVOID *)(param_1 + 0xe0);
  if (pvVar8 != (LPVOID)0x0) {
    puVar3 = *(undefined4 **)(param_1 + 0xe4);
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(pvVar8);
    }
    if (puVar3[1] != 0) {
      if (8 < (uint)puVar3[2]) {
        pvVar8 = *(LPVOID *)((int)pvVar8 + -4);
      }
      pvVar4 = GetProcessHeap();
      HeapFree(pvVar4,0,pvVar8);
    }
  }
  if (param_1 != -1) {
    LOCK();
    piVar9 = (int *)(param_1 + 4);
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (*piVar9 == 0) {
      pvVar8 = *(LPVOID *)(param_1 + -4);
      pvVar4 = GetProcessHeap();
      HeapFree(pvVar4,0,pvVar8);
    }
  }
  return;
}
