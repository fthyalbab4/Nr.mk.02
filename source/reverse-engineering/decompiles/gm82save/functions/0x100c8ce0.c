// rea decompile_all
// name: FUN_100c8ce0
// address: 0x100c8ce0
// body: available
// range: 0x100c8ce0-0x100c8d05 inclusive
// range: 0x100c8d10-0x100c8d61 inclusive
// range: 0x100c8d70-0x100c8e3c inclusive
// range: 0x100c8e40-0x100c8ea1 inclusive
// range: 0x100c8eb0-0x100c8f43 inclusive
// range: 0x100c8f50-0x100c8fa8 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100c8ce0(int param_1)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  HANDLE pvVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;

  iVar11 = *(int *)(param_1 + 0xc);
  pvVar1 = *(LPVOID *)(param_1 + 8);
  if (iVar11 != 0) {
    puVar7 = (undefined4 *)((int)pvVar1 + 4);
    do {
      if (puVar7[-1] != 0) {
        pvVar2 = (LPVOID)*puVar7;
        pvVar3 = GetProcessHeap();
        HeapFree(pvVar3,0,pvVar2);
      }
      puVar7 = puVar7 + 9;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  if (*(int *)(param_1 + 4) != 0) {
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,0,pvVar1);
  }
  iVar11 = *(int *)(param_1 + 0x1c);
  pvVar1 = *(LPVOID *)(param_1 + 0x18);
  if (iVar11 != 0) {
    iVar9 = 0;
    do {
      iVar4 = iVar9 * 0x70;
      iVar5 = *(int *)((int)pvVar1 + iVar4);
      if (iVar5 == -1) {
        puVar12 = *(uint **)((int)pvVar1 + iVar4 + 8);
        puVar13 = puVar12;
        for (iVar5 = *(int *)((int)pvVar1 + iVar4 + 0xc); iVar5 != 0; iVar5 = iVar5 + -1) {
          FUN_100c8a30(puVar13);
          puVar13 = puVar13 + 2;
        }
        if (*(int *)((int)pvVar1 + iVar4 + 4) != 0) goto LAB_100c8d98;
      }
      else {
        puVar12 = *(uint **)((int)pvVar1 + iVar4 + 4);
        puVar13 = puVar12;
        for (iVar8 = *(int *)((int)pvVar1 + iVar4 + 8); iVar8 != 0; iVar8 = iVar8 + -1) {
          FUN_100c8a30(puVar13);
          puVar13 = puVar13 + 2;
        }
        if (iVar5 != 0) {
          pvVar3 = GetProcessHeap();
          HeapFree(pvVar3,0,puVar12);
        }
        iVar8 = *(int *)((int)pvVar1 + iVar4 + 0x24);
        iVar5 = iVar8 + -0x80000000;
        if (-1 < iVar8) {
          iVar5 = 1;
        }
        if (iVar5 != 0) {
          if (iVar5 == 1) {
            iVar5 = 0x28;
          }
          else {
            iVar8 = *(int *)((int)pvVar1 + iVar4 + 0x28);
            iVar5 = 0x2c;
          }
          if (iVar8 != 0) {
            pvVar2 = *(LPVOID *)((int)pvVar1 + iVar5 + iVar4);
            pvVar3 = GetProcessHeap();
            HeapFree(pvVar3,0,pvVar2);
          }
        }
        puVar12 = *(uint **)((int)pvVar1 + iVar4 + 0x50);
        FUN_100c8a30(puVar12);
LAB_100c8d98:
        pvVar3 = GetProcessHeap();
        HeapFree(pvVar3,0,puVar12);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != iVar11);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,0,pvVar1);
  }
  pvVar1 = *(LPVOID *)(param_1 + 0x28);
  iVar11 = *(int *)(param_1 + 0x2c);
  if (iVar11 != 0) {
    iVar9 = 0;
    do {
      puVar12 = (uint *)((int)pvVar1 + iVar9 * 0x98);
      if (*(int *)((int)pvVar1 + iVar9 * 0x98) == -2) {
        puVar12 = puVar12 + 1;
      }
      else {
        puVar13 = (uint *)puVar12[0x1e];
        puVar6 = puVar13;
        for (uVar10 = puVar12[0x1f]; uVar10 != 0; uVar10 = uVar10 - 1) {
          FUN_100c8fb0(puVar6);
          puVar6 = puVar6 + 0x16;
        }
        if (puVar12[0x1d] != 0) {
          pvVar3 = GetProcessHeap();
          HeapFree(pvVar3,0,puVar13);
        }
      }
      iVar9 = iVar9 + 1;
      FUN_100c9090(puVar12);
    } while (iVar9 != iVar11);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,0,pvVar1);
  }
  iVar11 = *(int *)(param_1 + 0x3c);
  pvVar1 = *(LPVOID *)(param_1 + 0x38);
  if (iVar11 != 0) {
    puVar7 = (undefined4 *)((int)pvVar1 + 4);
    do {
      if (puVar7[-1] != 0) {
        pvVar2 = (LPVOID)*puVar7;
        pvVar3 = GetProcessHeap();
        HeapFree(pvVar3,0,pvVar2);
      }
      puVar7 = puVar7 + 10;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,0,pvVar1);
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    pvVar1 = *(LPVOID *)(param_1 + 0x48);
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,0,pvVar1);
  }
  return;
}
