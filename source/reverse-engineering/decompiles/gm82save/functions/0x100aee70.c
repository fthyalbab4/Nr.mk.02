// rea decompile_all
// name: FUN_100aee70
// address: 0x100aee70
// body: available
// range: 0x100aee70-0x100aeeca inclusive
// range: 0x100aeed0-0x100aef54 inclusive
// range: 0x100aef60-0x100aefbb inclusive
// range: 0x100aefc0-0x100aeffa inclusive
// range: 0x100af000-0x100af01b inclusive
// range: 0x100af020-0x100af08a inclusive
// range: 0x100af090-0x100af0ab inclusive
// range: 0x100af0b0-0x100af114 inclusive
// range: 0x100af120-0x100af13c inclusive
// range: 0x100af140-0x100af18b inclusive
// range: 0x100af190-0x100af1ac inclusive
// range: 0x100af1b0-0x100af240 inclusive
// range: 0x100af250-0x100af2f1 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100aee70(int param_1,PSRWLOCK param_2)

{
  undefined4 *puVar1;
  char cVar2;
  LPVOID pvVar3;
  PVOID pvVar4;
  PVOID pvVar5;
  HANDLE pvVar6;
  PSRWLOCK pRVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  LPVOID pvVar11;
  int *piVar12;
  bool bVar13;

  if (param_1 == 0) {
    LOCK();
    pRVar7 = param_2 + 0x40;
    pRVar7->Ptr = (PVOID)((int)pRVar7->Ptr + -1);
    UNLOCK();
    if (pRVar7->Ptr != (PVOID)0x0) {
      return;
    }
    pvVar4 = param_2[0x10].Ptr;
    do {
      LOCK();
      pvVar5 = param_2[0x10].Ptr;
      bVar13 = pvVar4 == pvVar5;
      if (bVar13) {
        param_2[0x10].Ptr = (PVOID)((uint)pvVar4 | (uint)param_2[0x32].Ptr);
        pvVar5 = pvVar4;
      }
      UNLOCK();
      pvVar4 = pvVar5;
    } while (!bVar13);
    if (((uint)param_2[0x32].Ptr & (uint)pvVar5) == 0) {
      AcquireSRWLockExclusive(param_2 + 0x28);
      if (param_2[0x2b].Ptr != (PVOID)0x0) {
        piVar12 = param_2[0x2a].Ptr;
        iVar8 = (int)param_2[0x2b].Ptr * 0xc;
        do {
          LOCK();
          bVar13 = *(int *)(*piVar12 + 0xc) == 0;
          if (bVar13) {
            *(int *)(*piVar12 + 0xc) = 2;
          }
          UNLOCK();
          if (bVar13) {
            FUN_10107860((char *)(*(int *)(*piVar12 + 8) + 0x18));
          }
          piVar12 = piVar12 + 3;
          iVar8 = iVar8 + -0xc;
        } while (iVar8 != 0);
      }
      pvVar4 = param_2[0x2e].Ptr;
      puVar9 = param_2[0x2d].Ptr;
      param_2[0x2e].Ptr = (PVOID)0x0;
      if (pvVar4 != (PVOID)0x0) {
        puVar1 = puVar9 + (int)pvVar4 * 3;
        do {
          piVar12 = (int *)*puVar9;
          LOCK();
          bVar13 = piVar12[3] == 0;
          if (bVar13) {
            piVar12[3] = puVar9[1];
          }
          UNLOCK();
          if (bVar13) {
            FUN_10107860((char *)(piVar12[2] + 0x18));
            LOCK();
            *piVar12 = *piVar12 + -1;
            iVar8 = *piVar12;
            UNLOCK();
          }
          else {
            LOCK();
            *piVar12 = *piVar12 + -1;
            iVar8 = *piVar12;
            UNLOCK();
          }
          if (iVar8 == 0) {
            FUN_1011b0a0(piVar12);
          }
          puVar9 = puVar9 + 3;
        } while (puVar9 != puVar1);
      }
      if (param_2[0x2b].Ptr == (PVOID)0x0) {
        bVar13 = param_2[0x2e].Ptr == (PVOID)0x0;
      }
      else {
        bVar13 = false;
      }
      LOCK();
      *(bool *)&param_2[0x2f].Ptr = bVar13;
      UNLOCK();
      ReleaseSRWLockExclusive(param_2 + 0x28);
    }
    LOCK();
    cVar2 = *(char *)&param_2[0x42].Ptr;
    *(undefined1 *)&param_2[0x42].Ptr = 1;
    UNLOCK();
    if (cVar2 == '\0') {
      return;
    }
    if (param_2[0x34].Ptr != (PVOID)0x0) {
      pvVar3 = param_2[0x33].Ptr;
      pvVar6 = GetProcessHeap();
      HeapFree(pvVar6,0,pvVar3);
    }
    FUN_100a8860((int *)(param_2 + 0x21));
    pRVar7 = param_2 + 0x29;
  }
  else {
    if (param_1 != 1) {
      LOCK();
      pRVar7 = param_2 + 0xe;
      pRVar7->Ptr = (PVOID)((int)pRVar7->Ptr + -1);
      UNLOCK();
      if (pRVar7->Ptr != (PVOID)0x0) {
        return;
      }
      AcquireSRWLockExclusive(param_2);
      if (*(char *)&param_2[0xd].Ptr == '\0') {
        *(undefined1 *)&param_2[0xd].Ptr = 1;
        if (param_2[3].Ptr != (PVOID)0x0) {
          piVar12 = param_2[2].Ptr;
          iVar8 = (int)param_2[3].Ptr * 0xc;
          do {
            LOCK();
            bVar13 = *(int *)(*piVar12 + 0xc) == 0;
            if (bVar13) {
              *(int *)(*piVar12 + 0xc) = 2;
            }
            UNLOCK();
            if (bVar13) {
              FUN_10107860((char *)(*(int *)(*piVar12 + 8) + 0x18));
            }
            piVar12 = piVar12 + 3;
            iVar8 = iVar8 + -0xc;
          } while (iVar8 != 0);
        }
        pvVar4 = param_2[6].Ptr;
        puVar9 = param_2[5].Ptr;
        param_2[6].Ptr = (PVOID)0x0;
        if (pvVar4 != (PVOID)0x0) {
          puVar1 = puVar9 + (int)pvVar4 * 3;
          do {
            piVar12 = (int *)*puVar9;
            LOCK();
            bVar13 = piVar12[3] == 0;
            if (bVar13) {
              piVar12[3] = puVar9[1];
            }
            UNLOCK();
            if (bVar13) {
              FUN_10107860((char *)(piVar12[2] + 0x18));
              LOCK();
              *piVar12 = *piVar12 + -1;
              iVar8 = *piVar12;
              UNLOCK();
            }
            else {
              LOCK();
              *piVar12 = *piVar12 + -1;
              iVar8 = *piVar12;
              UNLOCK();
            }
            if (iVar8 == 0) {
              FUN_1011b0a0(piVar12);
            }
            puVar9 = puVar9 + 3;
          } while (puVar9 != puVar1);
        }
        if (param_2[9].Ptr != (PVOID)0x0) {
          piVar12 = param_2[8].Ptr;
          iVar8 = (int)param_2[9].Ptr * 0xc;
          do {
            LOCK();
            bVar13 = *(int *)(*piVar12 + 0xc) == 0;
            if (bVar13) {
              *(int *)(*piVar12 + 0xc) = 2;
            }
            UNLOCK();
            if (bVar13) {
              FUN_10107860((char *)(*(int *)(*piVar12 + 8) + 0x18));
            }
            piVar12 = piVar12 + 3;
            iVar8 = iVar8 + -0xc;
          } while (iVar8 != 0);
        }
        pvVar4 = param_2[0xc].Ptr;
        puVar9 = param_2[0xb].Ptr;
        param_2[0xc].Ptr = (PVOID)0x0;
        if (pvVar4 != (PVOID)0x0) {
          puVar1 = puVar9 + (int)pvVar4 * 3;
          do {
            piVar12 = (int *)*puVar9;
            LOCK();
            bVar13 = piVar12[3] == 0;
            if (bVar13) {
              piVar12[3] = puVar9[1];
            }
            UNLOCK();
            if (bVar13) {
              FUN_10107860((char *)(piVar12[2] + 0x18));
              LOCK();
              *piVar12 = *piVar12 + -1;
              iVar8 = *piVar12;
              UNLOCK();
            }
            else {
              LOCK();
              *piVar12 = *piVar12 + -1;
              iVar8 = *piVar12;
              UNLOCK();
            }
            if (iVar8 == 0) {
              FUN_1011b0a0(piVar12);
            }
            puVar9 = puVar9 + 3;
          } while (puVar9 != puVar1);
        }
      }
      ReleaseSRWLockExclusive(param_2);
      LOCK();
      cVar2 = *(char *)&param_2[0x10].Ptr;
      *(undefined1 *)&param_2[0x10].Ptr = 1;
      UNLOCK();
      if (cVar2 == '\0') {
        return;
      }
      FUN_100a8860((int *)(param_2 + 1));
      FUN_100a8860((int *)(param_2 + 7));
      goto LAB_100af2da;
    }
    LOCK();
    pRVar7 = param_2 + 0x30;
    pRVar7->Ptr = (PVOID)((int)pRVar7->Ptr + -1);
    UNLOCK();
    if (pRVar7->Ptr != (PVOID)0x0) {
      return;
    }
    LOCK();
    pRVar7 = param_2 + 0x10;
    pvVar4 = pRVar7->Ptr;
    pRVar7->Ptr = (PVOID)((uint)pRVar7->Ptr | 1);
    UNLOCK();
    if (((uint)pvVar4 & 1) == 0) {
      AcquireSRWLockExclusive(param_2 + 0x20);
      if (param_2[0x23].Ptr != (PVOID)0x0) {
        piVar12 = param_2[0x22].Ptr;
        iVar8 = (int)param_2[0x23].Ptr * 0xc;
        do {
          LOCK();
          bVar13 = *(int *)(*piVar12 + 0xc) == 0;
          if (bVar13) {
            *(int *)(*piVar12 + 0xc) = 2;
          }
          UNLOCK();
          if (bVar13) {
            FUN_10107860((char *)(*(int *)(*piVar12 + 8) + 0x18));
          }
          piVar12 = piVar12 + 3;
          iVar8 = iVar8 + -0xc;
        } while (iVar8 != 0);
      }
      pvVar4 = param_2[0x26].Ptr;
      puVar9 = param_2[0x25].Ptr;
      param_2[0x26].Ptr = (PVOID)0x0;
      if (pvVar4 != (PVOID)0x0) {
        puVar1 = puVar9 + (int)pvVar4 * 3;
        do {
          piVar12 = (int *)*puVar9;
          LOCK();
          bVar13 = piVar12[3] == 0;
          if (bVar13) {
            piVar12[3] = puVar9[1];
          }
          UNLOCK();
          if (bVar13) {
            FUN_10107860((char *)(piVar12[2] + 0x18));
            LOCK();
            *piVar12 = *piVar12 + -1;
            iVar8 = *piVar12;
            UNLOCK();
          }
          else {
            LOCK();
            *piVar12 = *piVar12 + -1;
            iVar8 = *piVar12;
            UNLOCK();
          }
          if (iVar8 == 0) {
            FUN_1011b0a0(piVar12);
          }
          puVar9 = puVar9 + 3;
        } while (puVar9 != puVar1);
      }
      if (param_2[0x23].Ptr == (PVOID)0x0) {
        bVar13 = param_2[0x26].Ptr == (PVOID)0x0;
      }
      else {
        bVar13 = false;
      }
      LOCK();
      *(bool *)&param_2[0x27].Ptr = bVar13;
      UNLOCK();
      ReleaseSRWLockExclusive(param_2 + 0x20);
    }
    LOCK();
    cVar2 = *(char *)&param_2[0x32].Ptr;
    *(undefined1 *)&param_2[0x32].Ptr = 1;
    UNLOCK();
    if (cVar2 == '\0') {
      return;
    }
    pvVar4 = param_2[0x10].Ptr;
    pvVar3 = param_2[1].Ptr;
    for (uVar10 = (uint)param_2->Ptr & 0xfffffffe; uVar10 != ((uint)pvVar4 & 0xfffffffe);
        uVar10 = uVar10 + 2) {
      pvVar11 = pvVar3;
      if ((~uVar10 & 0x3e) == 0) {
        pvVar11 = *(LPVOID *)((int)pvVar3 + 0xf8);
        pvVar6 = GetProcessHeap();
        HeapFree(pvVar6,0,pvVar3);
      }
      pvVar3 = pvVar11;
    }
    if (pvVar3 != (LPVOID)0x0) {
      pvVar6 = GetProcessHeap();
      HeapFree(pvVar6,0,pvVar3);
    }
    pRVar7 = param_2 + 0x21;
  }
  FUN_100a8860((int *)pRVar7);
  param_2 = param_2[-1].Ptr;
LAB_100af2da:
  pvVar6 = GetProcessHeap();
  HeapFree(pvVar6,0,param_2);
  return;
}
