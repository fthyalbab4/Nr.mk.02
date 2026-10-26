// rea decompile_all
// name: FUN_100072c0
// address: 0x100072c0
// body: available
// range: 0x100072c0-0x10007300 inclusive
// range: 0x10007310-0x10007366 inclusive
// range: 0x10007370-0x10007395 inclusive
// range: 0x100073a0-0x10007434 inclusive
// range: 0x10007440-0x10007597 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100072c0(int *param_1)

{
  short sVar1;
  ushort uVar2;
  code *pcVar3;
  int iVar4;
  HANDLE pvVar5;
  undefined4 *puVar6;
  uint uVar7;
  LPVOID pvVar8;
  int *piVar9;
  LPVOID pvVar10;
  LPVOID pvVar11;
  int iVar12;
  LPVOID lpMem;
  uint local_18;

  if (param_1[6] != 0) {
    pvVar11 = (LPVOID)param_1[7];
    pvVar5 = GetProcessHeap();
    HeapFree(pvVar5,0,pvVar11);
  }
  pvVar11 = (LPVOID)param_1[0xb];
  iVar12 = param_1[0xc];
  if (iVar12 != 0) {
    puVar6 = (undefined4 *)((int)pvVar11 + 8);
    do {
      if (puVar6[-1] != 0) {
        pvVar10 = (LPVOID)*puVar6;
        pvVar5 = GetProcessHeap();
        HeapFree(pvVar5,0,pvVar10);
      }
      puVar6 = puVar6 + 5;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  if (param_1[10] != 0) {
    pvVar5 = GetProcessHeap();
    HeapFree(pvVar5,0,pvVar11);
  }
  pvVar11 = (LPVOID)param_1[0x12];
  if (pvVar11 != (LPVOID)0x0) {
    iVar12 = param_1[0x14];
    local_18 = param_1[0x13];
    pvVar10 = pvVar11;
    if (iVar12 == 0) {
      for (; local_18 != 0; local_18 = local_18 - 1) {
        pvVar10 = *(LPVOID *)((int)pvVar10 + 0x1ec);
      }
    }
    else {
      pvVar8 = (LPVOID)0x0;
      do {
        if (pvVar8 == (LPVOID)0x0) {
          pvVar10 = (LPVOID)0x0;
          if (local_18 == 0) {
            sVar1 = *(short *)((int)pvVar11 + 0x1ea);
            pvVar8 = pvVar11;
          }
          else {
            do {
              pvVar11 = *(LPVOID *)((int)pvVar11 + 0x1ec);
              local_18 = local_18 - 1;
            } while (local_18 != 0);
            sVar1 = *(short *)((int)pvVar11 + 0x1ea);
            pvVar8 = pvVar11;
          }
          uVar7 = 0;
          pvVar11 = pvVar10;
          lpMem = pvVar8;
          if (sVar1 == 0) goto LAB_100073e0;
        }
        else {
          uVar7 = local_18;
          pvVar10 = pvVar11;
          lpMem = pvVar8;
          if (*(ushort *)((int)pvVar8 + 0x1ea) <= local_18) {
LAB_100073e0:
            do {
              pvVar8 = *(LPVOID *)((int)lpMem + 0xb0);
              if (pvVar8 == (LPVOID)0x0) {
                FUN_10093cf0(lpMem,4);
                FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_101566e8);
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              uVar2 = *(ushort *)((int)lpMem + 0x1e8);
              pvVar10 = (LPVOID)((int)pvVar10 + 1);
              pvVar5 = GetProcessHeap();
              HeapFree(pvVar5,0,lpMem);
              uVar7 = (uint)uVar2;
              pvVar11 = pvVar10;
              lpMem = pvVar8;
            } while (*(ushort *)((int)pvVar8 + 0x1ea) <= uVar2);
          }
        }
        if (pvVar11 == (LPVOID)0x0) {
          local_18 = uVar7 + 1;
          pvVar10 = pvVar8;
        }
        else {
          piVar9 = (int *)((int)pvVar8 + uVar7 * 4 + 0x1f0);
          do {
            pvVar10 = (LPVOID)*piVar9;
            pvVar11 = (LPVOID)((int)pvVar11 + -1);
            piVar9 = (int *)((int)pvVar10 + 0x1ec);
          } while (pvVar11 != (LPVOID)0x0);
          local_18 = 0;
        }
        iVar4 = uVar7 * 0x1c;
        if (*(int *)((int)pvVar8 + iVar4 + 0xb4) != 0) {
          pvVar11 = *(LPVOID *)((int)pvVar8 + iVar4 + 0xb8);
          pvVar5 = GetProcessHeap();
          HeapFree(pvVar5,0,pvVar11);
        }
        if (*(int *)((int)pvVar8 + iVar4 + 0xc4) != 0) {
          pvVar11 = *(LPVOID *)((int)pvVar8 + iVar4 + 200);
          pvVar5 = GetProcessHeap();
          HeapFree(pvVar5,0,pvVar11);
        }
        piVar9 = (int *)((int)pvVar8 + uVar7 * 0x10);
        if (0 < *piVar9) {
          pvVar11 = (LPVOID)piVar9[1];
          pvVar5 = GetProcessHeap();
          HeapFree(pvVar5,0,pvVar11);
        }
        pvVar11 = (LPVOID)0x0;
        iVar12 = iVar12 + -1;
        pvVar8 = pvVar10;
      } while (iVar12 != 0);
    }
    pvVar11 = *(LPVOID *)((int)pvVar10 + 0xb0);
    while (pvVar8 = pvVar11, pvVar8 != (LPVOID)0x0) {
      pvVar5 = GetProcessHeap();
      HeapFree(pvVar5,0,pvVar10);
      pvVar10 = pvVar8;
      pvVar11 = *(LPVOID *)((int)pvVar8 + 0xb0);
    }
    pvVar5 = GetProcessHeap();
    HeapFree(pvVar5,0,pvVar10);
  }
  if (0 < param_1[0xd]) {
    pvVar11 = (LPVOID)param_1[0xe];
    pvVar5 = GetProcessHeap();
    HeapFree(pvVar5,0,pvVar11);
  }
  if (*param_1 - 4U < 0xfffffffb) {
    CloseHandle((HANDLE)param_1[1]);
    iVar12 = param_1[2];
  }
  else {
    iVar12 = param_1[2];
  }
  if (iVar12 - 4U < 0xfffffffb) {
    CloseHandle((HANDLE)param_1[3]);
    iVar12 = param_1[4];
  }
  else {
    iVar12 = param_1[4];
  }
  if (iVar12 - 4U < 0xfffffffb) {
    CloseHandle((HANDLE)param_1[5]);
  }
  return;
}
