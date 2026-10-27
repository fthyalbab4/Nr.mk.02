// rea decompile_all
// name: FUN_100cca10
// address: 0x100cca10
// body: available
// range: 0x100cca10-0x100cca35 inclusive
// range: 0x100cca40-0x100ccab8 inclusive
// range: 0x100ccac0-0x100ccae2 inclusive
// range: 0x100ccaf0-0x100ccb0c inclusive
// range: 0x100ccb10-0x100ccb67 inclusive
// range: 0x100ccb70-0x100ccbc5 inclusive
// range: 0x100ccbd0-0x100ccc28 inclusive
// range: 0x100ccc30-0x100ccc8b inclusive
// range: 0x100ccc90-0x100ccd6d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100cca10(int param_1)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  int *piVar3;
  HANDLE pvVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;

  iVar7 = *(int *)(param_1 + 0x3c);
  pvVar1 = *(LPVOID *)(param_1 + 0x38);
  if (iVar7 != 0) {
    puVar5 = (undefined4 *)((int)pvVar1 + 8);
    do {
      iVar6 = puVar5[-2];
      if ((((iVar6 == 7) || (iVar6 == 6)) || (iVar6 == 2)) && (puVar5[-1] != 0)) {
        pvVar2 = (LPVOID)*puVar5;
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,0,pvVar2);
      }
      puVar5 = puVar5 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    pvVar4 = GetProcessHeap();
    HeapFree(pvVar4,0,pvVar1);
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    pvVar1 = *(LPVOID *)(param_1 + 0x44);
    pvVar4 = GetProcessHeap();
    HeapFree(pvVar4,0,pvVar1);
  }
  iVar7 = *(int *)(param_1 + 0x54);
  pvVar1 = *(LPVOID *)(param_1 + 0x50);
  if (iVar7 != 0) {
    iVar6 = 0;
    do {
      puVar5 = *(undefined4 **)((int)pvVar1 + iVar6 * 0xc + 4);
      puVar8 = puVar5;
      for (iVar9 = *(int *)((int)pvVar1 + iVar6 * 0xc + 8); iVar9 != 0; iVar9 = iVar9 + -1) {
        piVar3 = (int *)*puVar8;
        if (piVar3 != (int *)0x0) {
          LOCK();
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            FUN_100d4100((LPVOID)*puVar8,puVar8[1]);
          }
        }
        puVar8 = puVar8 + 2;
      }
      if (*(int *)((int)pvVar1 + iVar6 * 0xc) != 0) {
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,0,puVar5);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != iVar7);
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    pvVar4 = GetProcessHeap();
    HeapFree(pvVar4,0,pvVar1);
  }
  iVar7 = *(int *)(param_1 + 0x6c);
  pvVar1 = *(LPVOID *)(param_1 + 0x68);
  if (iVar7 != 0) {
    puVar5 = (undefined4 *)((int)pvVar1 + 4);
    do {
      if (puVar5[-1] != 0) {
        pvVar2 = (LPVOID)*puVar5;
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,0,pvVar2);
      }
      puVar5 = puVar5 + 5;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (*(int *)(param_1 + 100) != 0) {
    pvVar4 = GetProcessHeap();
    HeapFree(pvVar4,0,pvVar1);
  }
  iVar7 = *(int *)(param_1 + 0x80);
  pvVar1 = *(LPVOID *)(param_1 + 0x7c);
  if (iVar7 != 0) {
    puVar5 = (undefined4 *)((int)pvVar1 + 4);
    do {
      if (puVar5[-1] != 0) {
        pvVar2 = (LPVOID)*puVar5;
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,0,pvVar2);
      }
      puVar5 = puVar5 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    pvVar4 = GetProcessHeap();
    HeapFree(pvVar4,0,pvVar1);
  }
  iVar7 = *(int *)(param_1 + 0x90);
  pvVar1 = *(LPVOID *)(param_1 + 0x8c);
  if (iVar7 != 0) {
    puVar5 = (undefined4 *)((int)pvVar1 + 4);
    do {
      if (puVar5[-1] != 0) {
        pvVar2 = (LPVOID)*puVar5;
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,0,pvVar2);
      }
      puVar5 = puVar5 + 3;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    pvVar4 = GetProcessHeap();
    HeapFree(pvVar4,0,pvVar1);
  }
  iVar7 = *(int *)(param_1 + 0x9c);
  pvVar1 = *(LPVOID *)(param_1 + 0x98);
  if (iVar7 != 0) {
    puVar5 = (undefined4 *)((int)pvVar1 + 4);
    do {
      if (puVar5[-1] != 0) {
        pvVar2 = (LPVOID)*puVar5;
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,0,pvVar2);
      }
      puVar5 = puVar5 + 3;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (*(int *)(param_1 + 0x94) != 0) {
    pvVar4 = GetProcessHeap();
    HeapFree(pvVar4,0,pvVar1);
  }
  if (*(int *)(param_1 + 0xbc) != 0) {
    pvVar1 = *(LPVOID *)(param_1 + 0xc0);
    pvVar4 = GetProcessHeap();
    HeapFree(pvVar4,0,pvVar1);
  }
  if (*(int *)(param_1 + 0xcc) != 0) {
    pvVar1 = *(LPVOID *)(param_1 + 0xd0);
    pvVar4 = GetProcessHeap();
    HeapFree(pvVar4,0,pvVar1);
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    pvVar1 = *(LPVOID *)(param_1 + 0xa4);
    pvVar4 = GetProcessHeap();
    HeapFree(pvVar4,0,pvVar1);
  }
  if (*(int *)(param_1 + 0xac) != 0) {
    pvVar1 = *(LPVOID *)(param_1 + 0xb0);
    pvVar4 = GetProcessHeap();
    HeapFree(pvVar4,0,pvVar1);
  }
  if (*(int *)(param_1 + 0xdc) != 0) {
    pvVar1 = *(LPVOID *)(param_1 + 0xe0);
    pvVar4 = GetProcessHeap();
    HeapFree(pvVar4,0,pvVar1);
  }
  return;
}
