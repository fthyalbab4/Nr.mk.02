// rea decompile_all
// name: FUN_100040d0
// address: 0x100040d0
// body: available
// range: 0x100040d0-0x1000412a inclusive
// range: 0x10004130-0x100041b4 inclusive
// range: 0x100041c0-0x1000421b inclusive
// range: 0x10004220-0x1000425a inclusive
// range: 0x10004260-0x1000427b inclusive
// range: 0x10004280-0x100042ea inclusive
// range: 0x100042f0-0x1000430b inclusive
// range: 0x10004310-0x10004374 inclusive
// range: 0x10004380-0x1000439c inclusive
// range: 0x100043a0-0x100043eb inclusive
// range: 0x100043f0-0x1000440c inclusive
// range: 0x10004410-0x100044a0 inclusive
// range: 0x100044b0-0x1000451b inclusive
// range: 0x10004520-0x10004564 inclusive
// range: 0x10004570-0x1000458c inclusive
// range: 0x10004590-0x1000462e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100040d0(int param_1,PSRWLOCK param_2)

{
  char cVar1;
  LPVOID lpMem;
  PVOID pvVar2;
  PVOID pvVar3;
  HANDLE pvVar4;
  PSRWLOCK pRVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  bool bVar11;

  if (param_1 == 0) {
    LOCK();
    pRVar5 = param_2 + 0x40;
    pRVar5->Ptr = (PVOID)((int)pRVar5->Ptr + -1);
    UNLOCK();
    if (pRVar5->Ptr != (PVOID)0x0) {
      return;
    }
    pvVar2 = param_2[0x10].Ptr;
    do {
      LOCK();
      pvVar3 = param_2[0x10].Ptr;
      bVar11 = pvVar2 == pvVar3;
      if (bVar11) {
        param_2[0x10].Ptr = (PVOID)((uint)pvVar2 | (uint)param_2[0x32].Ptr);
        pvVar3 = pvVar2;
      }
      UNLOCK();
      pvVar2 = pvVar3;
    } while (!bVar11);
    if (((uint)param_2[0x32].Ptr & (uint)pvVar3) == 0) {
      AcquireSRWLockExclusive(param_2 + 0x20);
      if (param_2[0x23].Ptr != (PVOID)0x0) {
        piVar10 = param_2[0x22].Ptr;
        iVar6 = (int)param_2[0x23].Ptr * 0xc;
        do {
          LOCK();
          bVar11 = *(int *)(*piVar10 + 0x14) == 0;
          if (bVar11) {
            *(int *)(*piVar10 + 0x14) = 2;
          }
          UNLOCK();
          if (bVar11) {
            FUN_10107860((char *)(*(int *)(*piVar10 + 0x10) + 0x18));
          }
          piVar10 = piVar10 + 3;
          iVar6 = iVar6 + -0xc;
        } while (iVar6 != 0);
      }
      pvVar2 = param_2[0x26].Ptr;
      puVar7 = param_2[0x25].Ptr;
      param_2[0x26].Ptr = (PVOID)0x0;
      if (pvVar2 != (PVOID)0x0) {
        puVar9 = puVar7 + (int)pvVar2 * 3;
        do {
          piVar10 = (int *)*puVar7;
          LOCK();
          bVar11 = piVar10[5] == 0;
          if (bVar11) {
            piVar10[5] = puVar7[1];
          }
          UNLOCK();
          if (bVar11) {
            FUN_10107860((char *)(piVar10[4] + 0x18));
            LOCK();
            *piVar10 = *piVar10 + -1;
            iVar6 = *piVar10;
            UNLOCK();
          }
          else {
            LOCK();
            *piVar10 = *piVar10 + -1;
            iVar6 = *piVar10;
            UNLOCK();
          }
          if (iVar6 == 0) {
            FUN_1009dc30(piVar10);
          }
          puVar7 = puVar7 + 3;
        } while (puVar7 != puVar9);
      }
      if (param_2[0x23].Ptr == (PVOID)0x0) {
        bVar11 = param_2[0x26].Ptr == (PVOID)0x0;
      }
      else {
        bVar11 = false;
      }
      LOCK();
      *(bool *)&param_2[0x27].Ptr = bVar11;
      UNLOCK();
      ReleaseSRWLockExclusive(param_2 + 0x20);
      AcquireSRWLockExclusive(param_2 + 0x28);
      if (param_2[0x2b].Ptr != (PVOID)0x0) {
        piVar10 = param_2[0x2a].Ptr;
        iVar6 = (int)param_2[0x2b].Ptr * 0xc;
        do {
          LOCK();
          bVar11 = *(int *)(*piVar10 + 0x14) == 0;
          if (bVar11) {
            *(int *)(*piVar10 + 0x14) = 2;
          }
          UNLOCK();
          if (bVar11) {
            FUN_10107860((char *)(*(int *)(*piVar10 + 0x10) + 0x18));
          }
          piVar10 = piVar10 + 3;
          iVar6 = iVar6 + -0xc;
        } while (iVar6 != 0);
      }
      pvVar2 = param_2[0x2e].Ptr;
      puVar7 = param_2[0x2d].Ptr;
      param_2[0x2e].Ptr = (PVOID)0x0;
      if (pvVar2 != (PVOID)0x0) {
        puVar9 = puVar7 + (int)pvVar2 * 3;
        do {
          piVar10 = (int *)*puVar7;
          LOCK();
          bVar11 = piVar10[5] == 0;
          if (bVar11) {
            piVar10[5] = puVar7[1];
          }
          UNLOCK();
          if (bVar11) {
            FUN_10107860((char *)(piVar10[4] + 0x18));
            LOCK();
            *piVar10 = *piVar10 + -1;
            iVar6 = *piVar10;
            UNLOCK();
          }
          else {
            LOCK();
            *piVar10 = *piVar10 + -1;
            iVar6 = *piVar10;
            UNLOCK();
          }
          if (iVar6 == 0) {
            FUN_1009dc30(piVar10);
          }
          puVar7 = puVar7 + 3;
        } while (puVar7 != puVar9);
      }
      if (param_2[0x2b].Ptr == (PVOID)0x0) {
        bVar11 = param_2[0x2e].Ptr == (PVOID)0x0;
      }
      else {
        bVar11 = false;
      }
      LOCK();
      *(bool *)&param_2[0x2f].Ptr = bVar11;
      UNLOCK();
      ReleaseSRWLockExclusive(param_2 + 0x28);
    }
    LOCK();
    cVar1 = *(char *)&param_2[0x42].Ptr;
    *(undefined1 *)&param_2[0x42].Ptr = 1;
    UNLOCK();
    if (cVar1 == '\0') {
      return;
    }
    if (param_2[0x34].Ptr != (PVOID)0x0) {
      lpMem = param_2[0x33].Ptr;
      pvVar4 = GetProcessHeap();
      HeapFree(pvVar4,0,lpMem);
    }
    FUN_10005e30((int *)(param_2 + 0x21));
    pRVar5 = param_2 + 0x29;
  }
  else {
    if (param_1 != 1) {
      LOCK();
      pRVar5 = param_2 + 0xe;
      pRVar5->Ptr = (PVOID)((int)pRVar5->Ptr + -1);
      UNLOCK();
      if (pRVar5->Ptr != (PVOID)0x0) {
        return;
      }
      AcquireSRWLockExclusive(param_2);
      if (*(char *)&param_2[0xd].Ptr == '\0') {
        *(undefined1 *)&param_2[0xd].Ptr = 1;
        if (param_2[3].Ptr != (PVOID)0x0) {
          piVar10 = param_2[2].Ptr;
          iVar6 = (int)param_2[3].Ptr * 0xc;
          do {
            LOCK();
            bVar11 = *(int *)(*piVar10 + 0x14) == 0;
            if (bVar11) {
              *(int *)(*piVar10 + 0x14) = 2;
            }
            UNLOCK();
            if (bVar11) {
              FUN_10107860((char *)(*(int *)(*piVar10 + 0x10) + 0x18));
            }
            piVar10 = piVar10 + 3;
            iVar6 = iVar6 + -0xc;
          } while (iVar6 != 0);
        }
        pvVar2 = param_2[6].Ptr;
        puVar7 = param_2[5].Ptr;
        param_2[6].Ptr = (PVOID)0x0;
        if (pvVar2 != (PVOID)0x0) {
          puVar9 = puVar7 + (int)pvVar2 * 3;
          do {
            piVar10 = (int *)*puVar7;
            LOCK();
            bVar11 = piVar10[5] == 0;
            if (bVar11) {
              piVar10[5] = puVar7[1];
            }
            UNLOCK();
            if (bVar11) {
              FUN_10107860((char *)(piVar10[4] + 0x18));
              LOCK();
              *piVar10 = *piVar10 + -1;
              iVar6 = *piVar10;
              UNLOCK();
            }
            else {
              LOCK();
              *piVar10 = *piVar10 + -1;
              iVar6 = *piVar10;
              UNLOCK();
            }
            if (iVar6 == 0) {
              FUN_1009dc30(piVar10);
            }
            puVar7 = puVar7 + 3;
          } while (puVar7 != puVar9);
        }
        if (param_2[9].Ptr != (PVOID)0x0) {
          piVar10 = param_2[8].Ptr;
          iVar6 = (int)param_2[9].Ptr * 0xc;
          do {
            LOCK();
            bVar11 = *(int *)(*piVar10 + 0x14) == 0;
            if (bVar11) {
              *(int *)(*piVar10 + 0x14) = 2;
            }
            UNLOCK();
            if (bVar11) {
              FUN_10107860((char *)(*(int *)(*piVar10 + 0x10) + 0x18));
            }
            piVar10 = piVar10 + 3;
            iVar6 = iVar6 + -0xc;
          } while (iVar6 != 0);
        }
        pvVar2 = param_2[0xc].Ptr;
        puVar7 = param_2[0xb].Ptr;
        param_2[0xc].Ptr = (PVOID)0x0;
        if (pvVar2 != (PVOID)0x0) {
          puVar9 = puVar7 + (int)pvVar2 * 3;
          do {
            piVar10 = (int *)*puVar7;
            LOCK();
            bVar11 = piVar10[5] == 0;
            if (bVar11) {
              piVar10[5] = puVar7[1];
            }
            UNLOCK();
            if (bVar11) {
              FUN_10107860((char *)(piVar10[4] + 0x18));
              LOCK();
              *piVar10 = *piVar10 + -1;
              iVar6 = *piVar10;
              UNLOCK();
            }
            else {
              LOCK();
              *piVar10 = *piVar10 + -1;
              iVar6 = *piVar10;
              UNLOCK();
            }
            if (iVar6 == 0) {
              FUN_1009dc30(piVar10);
            }
            puVar7 = puVar7 + 3;
          } while (puVar7 != puVar9);
        }
      }
      ReleaseSRWLockExclusive(param_2);
      LOCK();
      cVar1 = *(char *)&param_2[0x10].Ptr;
      *(undefined1 *)&param_2[0x10].Ptr = 1;
      UNLOCK();
      if (cVar1 == '\0') {
        return;
      }
      FUN_10005e30((int *)(param_2 + 1));
      FUN_10005e30((int *)(param_2 + 7));
      goto LAB_10004617;
    }
    LOCK();
    pRVar5 = param_2 + 0x30;
    pRVar5->Ptr = (PVOID)((int)pRVar5->Ptr + -1);
    UNLOCK();
    if (pRVar5->Ptr != (PVOID)0x0) {
      return;
    }
    LOCK();
    pRVar5 = param_2 + 0x10;
    pvVar2 = pRVar5->Ptr;
    pRVar5->Ptr = (PVOID)((uint)pRVar5->Ptr | 1);
    UNLOCK();
    if (((uint)pvVar2 & 1) == 0) {
      AcquireSRWLockExclusive(param_2 + 0x20);
      if (param_2[0x23].Ptr != (PVOID)0x0) {
        piVar10 = param_2[0x22].Ptr;
        iVar6 = (int)param_2[0x23].Ptr * 0xc;
        do {
          LOCK();
          bVar11 = *(int *)(*piVar10 + 0x14) == 0;
          if (bVar11) {
            *(int *)(*piVar10 + 0x14) = 2;
          }
          UNLOCK();
          if (bVar11) {
            FUN_10107860((char *)(*(int *)(*piVar10 + 0x10) + 0x18));
          }
          piVar10 = piVar10 + 3;
          iVar6 = iVar6 + -0xc;
        } while (iVar6 != 0);
      }
      pvVar2 = param_2[0x26].Ptr;
      puVar7 = param_2[0x25].Ptr;
      param_2[0x26].Ptr = (PVOID)0x0;
      if (pvVar2 != (PVOID)0x0) {
        puVar9 = puVar7 + (int)pvVar2 * 3;
        do {
          piVar10 = (int *)*puVar7;
          LOCK();
          bVar11 = piVar10[5] == 0;
          if (bVar11) {
            piVar10[5] = puVar7[1];
          }
          UNLOCK();
          if (bVar11) {
            FUN_10107860((char *)(piVar10[4] + 0x18));
            LOCK();
            *piVar10 = *piVar10 + -1;
            iVar6 = *piVar10;
            UNLOCK();
          }
          else {
            LOCK();
            *piVar10 = *piVar10 + -1;
            iVar6 = *piVar10;
            UNLOCK();
          }
          if (iVar6 == 0) {
            FUN_1009dc30(piVar10);
          }
          puVar7 = puVar7 + 3;
        } while (puVar7 != puVar9);
      }
      if (param_2[0x23].Ptr == (PVOID)0x0) {
        bVar11 = param_2[0x26].Ptr == (PVOID)0x0;
      }
      else {
        bVar11 = false;
      }
      LOCK();
      *(bool *)&param_2[0x27].Ptr = bVar11;
      UNLOCK();
      ReleaseSRWLockExclusive(param_2 + 0x20);
    }
    LOCK();
    cVar1 = *(char *)&param_2[0x32].Ptr;
    *(undefined1 *)&param_2[0x32].Ptr = 1;
    UNLOCK();
    if (cVar1 == '\0') {
      return;
    }
    pvVar2 = param_2[0x10].Ptr;
    puVar7 = param_2[1].Ptr;
    for (uVar8 = (uint)param_2->Ptr & 0xfffffffe; uVar8 != ((uint)pvVar2 & 0xfffffffe);
        uVar8 = uVar8 + 2) {
      puVar9 = puVar7;
      if ((~uVar8 & 0x3e) == 0) {
        puVar9 = (undefined4 *)*puVar7;
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,0,puVar7);
      }
      puVar7 = puVar9;
    }
    if (puVar7 != (undefined4 *)0x0) {
      pvVar4 = GetProcessHeap();
      HeapFree(pvVar4,0,puVar7);
    }
    pRVar5 = param_2 + 0x21;
  }
  FUN_10005e30((int *)pRVar5);
  param_2 = param_2[-1].Ptr;
LAB_10004617:
  pvVar4 = GetProcessHeap();
  HeapFree(pvVar4,0,param_2);
  return;
}
