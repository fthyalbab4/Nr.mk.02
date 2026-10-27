// rea decompile_all
// name: FUN_100ae070
// address: 0x100ae070
// body: available
// range: 0x100ae070-0x100ae0ca inclusive
// range: 0x100ae0d0-0x100ae154 inclusive
// range: 0x100ae160-0x100ae1bb inclusive
// range: 0x100ae1c0-0x100ae1fa inclusive
// range: 0x100ae200-0x100ae21b inclusive
// range: 0x100ae220-0x100ae28a inclusive
// range: 0x100ae290-0x100ae2ab inclusive
// range: 0x100ae2b0-0x100ae314 inclusive
// range: 0x100ae320-0x100ae33c inclusive
// range: 0x100ae340-0x100ae38b inclusive
// range: 0x100ae390-0x100ae3ac inclusive
// range: 0x100ae3b0-0x100ae440 inclusive
// range: 0x100ae450-0x100ae509 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100ae070(int param_1,PSRWLOCK param_2)

{
  undefined4 *puVar1;
  char cVar2;
  LPVOID pvVar3;
  PVOID pvVar4;
  PVOID pvVar5;
  HANDLE pvVar6;
  uint uVar7;
  PSRWLOCK pRVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  LPVOID pvVar12;
  int *piVar13;
  bool bVar14;

  if (param_1 == 0) {
    LOCK();
    pRVar8 = param_2 + 0x40;
    pRVar8->Ptr = (PVOID)((int)pRVar8->Ptr + -1);
    UNLOCK();
    if (pRVar8->Ptr != (PVOID)0x0) {
      return;
    }
    pvVar4 = param_2[0x10].Ptr;
    do {
      LOCK();
      pvVar5 = param_2[0x10].Ptr;
      bVar14 = pvVar4 == pvVar5;
      if (bVar14) {
        param_2[0x10].Ptr = (PVOID)((uint)pvVar4 | (uint)param_2[0x32].Ptr);
        pvVar5 = pvVar4;
      }
      UNLOCK();
      pvVar4 = pvVar5;
    } while (!bVar14);
    if (((uint)param_2[0x32].Ptr & (uint)pvVar5) == 0) {
      AcquireSRWLockExclusive(param_2 + 0x28);
      if (param_2[0x2b].Ptr != (PVOID)0x0) {
        piVar13 = param_2[0x2a].Ptr;
        iVar9 = (int)param_2[0x2b].Ptr * 0xc;
        do {
          LOCK();
          bVar14 = *(int *)(*piVar13 + 0xc) == 0;
          if (bVar14) {
            *(int *)(*piVar13 + 0xc) = 2;
          }
          UNLOCK();
          if (bVar14) {
            FUN_10107860((char *)(*(int *)(*piVar13 + 8) + 0x18));
          }
          piVar13 = piVar13 + 3;
          iVar9 = iVar9 + -0xc;
        } while (iVar9 != 0);
      }
      pvVar4 = param_2[0x2e].Ptr;
      puVar10 = param_2[0x2d].Ptr;
      param_2[0x2e].Ptr = (PVOID)0x0;
      if (pvVar4 != (PVOID)0x0) {
        puVar1 = puVar10 + (int)pvVar4 * 3;
        do {
          piVar13 = (int *)*puVar10;
          LOCK();
          bVar14 = piVar13[3] == 0;
          if (bVar14) {
            piVar13[3] = puVar10[1];
          }
          UNLOCK();
          if (bVar14) {
            FUN_10107860((char *)(piVar13[2] + 0x18));
            LOCK();
            *piVar13 = *piVar13 + -1;
            iVar9 = *piVar13;
            UNLOCK();
          }
          else {
            LOCK();
            *piVar13 = *piVar13 + -1;
            iVar9 = *piVar13;
            UNLOCK();
          }
          if (iVar9 == 0) {
            FUN_1011b0a0(piVar13);
          }
          puVar10 = puVar10 + 3;
        } while (puVar10 != puVar1);
      }
      if (param_2[0x2b].Ptr == (PVOID)0x0) {
        bVar14 = param_2[0x2e].Ptr == (PVOID)0x0;
      }
      else {
        bVar14 = false;
      }
      LOCK();
      *(bool *)&param_2[0x2f].Ptr = bVar14;
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
    pRVar8 = param_2 + 0x29;
  }
  else {
    if (param_1 != 1) {
      LOCK();
      pRVar8 = param_2 + 0xe;
      pRVar8->Ptr = (PVOID)((int)pRVar8->Ptr + -1);
      UNLOCK();
      if (pRVar8->Ptr != (PVOID)0x0) {
        return;
      }
      AcquireSRWLockExclusive(param_2);
      if (*(char *)&param_2[0xd].Ptr == '\0') {
        *(undefined1 *)&param_2[0xd].Ptr = 1;
        if (param_2[3].Ptr != (PVOID)0x0) {
          piVar13 = param_2[2].Ptr;
          iVar9 = (int)param_2[3].Ptr * 0xc;
          do {
            LOCK();
            bVar14 = *(int *)(*piVar13 + 0xc) == 0;
            if (bVar14) {
              *(int *)(*piVar13 + 0xc) = 2;
            }
            UNLOCK();
            if (bVar14) {
              FUN_10107860((char *)(*(int *)(*piVar13 + 8) + 0x18));
            }
            piVar13 = piVar13 + 3;
            iVar9 = iVar9 + -0xc;
          } while (iVar9 != 0);
        }
        pvVar4 = param_2[6].Ptr;
        puVar10 = param_2[5].Ptr;
        param_2[6].Ptr = (PVOID)0x0;
        if (pvVar4 != (PVOID)0x0) {
          puVar1 = puVar10 + (int)pvVar4 * 3;
          do {
            piVar13 = (int *)*puVar10;
            LOCK();
            bVar14 = piVar13[3] == 0;
            if (bVar14) {
              piVar13[3] = puVar10[1];
            }
            UNLOCK();
            if (bVar14) {
              FUN_10107860((char *)(piVar13[2] + 0x18));
              LOCK();
              *piVar13 = *piVar13 + -1;
              iVar9 = *piVar13;
              UNLOCK();
            }
            else {
              LOCK();
              *piVar13 = *piVar13 + -1;
              iVar9 = *piVar13;
              UNLOCK();
            }
            if (iVar9 == 0) {
              FUN_1011b0a0(piVar13);
            }
            puVar10 = puVar10 + 3;
          } while (puVar10 != puVar1);
        }
        if (param_2[9].Ptr != (PVOID)0x0) {
          piVar13 = param_2[8].Ptr;
          iVar9 = (int)param_2[9].Ptr * 0xc;
          do {
            LOCK();
            bVar14 = *(int *)(*piVar13 + 0xc) == 0;
            if (bVar14) {
              *(int *)(*piVar13 + 0xc) = 2;
            }
            UNLOCK();
            if (bVar14) {
              FUN_10107860((char *)(*(int *)(*piVar13 + 8) + 0x18));
            }
            piVar13 = piVar13 + 3;
            iVar9 = iVar9 + -0xc;
          } while (iVar9 != 0);
        }
        pvVar4 = param_2[0xc].Ptr;
        puVar10 = param_2[0xb].Ptr;
        param_2[0xc].Ptr = (PVOID)0x0;
        if (pvVar4 != (PVOID)0x0) {
          puVar1 = puVar10 + (int)pvVar4 * 3;
          do {
            piVar13 = (int *)*puVar10;
            LOCK();
            bVar14 = piVar13[3] == 0;
            if (bVar14) {
              piVar13[3] = puVar10[1];
            }
            UNLOCK();
            if (bVar14) {
              FUN_10107860((char *)(piVar13[2] + 0x18));
              LOCK();
              *piVar13 = *piVar13 + -1;
              iVar9 = *piVar13;
              UNLOCK();
            }
            else {
              LOCK();
              *piVar13 = *piVar13 + -1;
              iVar9 = *piVar13;
              UNLOCK();
            }
            if (iVar9 == 0) {
              FUN_1011b0a0(piVar13);
            }
            puVar10 = puVar10 + 3;
          } while (puVar10 != puVar1);
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
      goto LAB_100ae4f2;
    }
    LOCK();
    pRVar8 = param_2 + 0x30;
    pRVar8->Ptr = (PVOID)((int)pRVar8->Ptr + -1);
    UNLOCK();
    if (pRVar8->Ptr != (PVOID)0x0) {
      return;
    }
    LOCK();
    pRVar8 = param_2 + 0x10;
    pvVar4 = pRVar8->Ptr;
    pRVar8->Ptr = (PVOID)((uint)pRVar8->Ptr | 1);
    UNLOCK();
    if (((uint)pvVar4 & 1) == 0) {
      AcquireSRWLockExclusive(param_2 + 0x20);
      if (param_2[0x23].Ptr != (PVOID)0x0) {
        piVar13 = param_2[0x22].Ptr;
        iVar9 = (int)param_2[0x23].Ptr * 0xc;
        do {
          LOCK();
          bVar14 = *(int *)(*piVar13 + 0xc) == 0;
          if (bVar14) {
            *(int *)(*piVar13 + 0xc) = 2;
          }
          UNLOCK();
          if (bVar14) {
            FUN_10107860((char *)(*(int *)(*piVar13 + 8) + 0x18));
          }
          piVar13 = piVar13 + 3;
          iVar9 = iVar9 + -0xc;
        } while (iVar9 != 0);
      }
      pvVar4 = param_2[0x26].Ptr;
      puVar10 = param_2[0x25].Ptr;
      param_2[0x26].Ptr = (PVOID)0x0;
      if (pvVar4 != (PVOID)0x0) {
        puVar1 = puVar10 + (int)pvVar4 * 3;
        do {
          piVar13 = (int *)*puVar10;
          LOCK();
          bVar14 = piVar13[3] == 0;
          if (bVar14) {
            piVar13[3] = puVar10[1];
          }
          UNLOCK();
          if (bVar14) {
            FUN_10107860((char *)(piVar13[2] + 0x18));
            LOCK();
            *piVar13 = *piVar13 + -1;
            iVar9 = *piVar13;
            UNLOCK();
          }
          else {
            LOCK();
            *piVar13 = *piVar13 + -1;
            iVar9 = *piVar13;
            UNLOCK();
          }
          if (iVar9 == 0) {
            FUN_1011b0a0(piVar13);
          }
          puVar10 = puVar10 + 3;
        } while (puVar10 != puVar1);
      }
      if (param_2[0x23].Ptr == (PVOID)0x0) {
        bVar14 = param_2[0x26].Ptr == (PVOID)0x0;
      }
      else {
        bVar14 = false;
      }
      LOCK();
      *(bool *)&param_2[0x27].Ptr = bVar14;
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
    for (uVar11 = (uint)param_2->Ptr & 0xfffffffe; uVar11 != ((uint)pvVar4 & 0xfffffffe);
        uVar11 = uVar11 + 2) {
      uVar7 = uVar11 >> 1 & 0x1f;
      if (uVar7 == 0x1f) {
        pvVar12 = *(LPVOID *)((int)pvVar3 + 0x5d0);
        pvVar6 = GetProcessHeap();
        HeapFree(pvVar6,0,pvVar3);
      }
      else {
        iVar9 = uVar7 * 0x30;
        pvVar12 = pvVar3;
        if (*(int *)((int)pvVar3 + iVar9 + 8) != -2) {
          FUN_100adf80((char *)(iVar9 + (int)pvVar3));
        }
      }
      pvVar3 = pvVar12;
    }
    if (pvVar3 != (LPVOID)0x0) {
      pvVar6 = GetProcessHeap();
      HeapFree(pvVar6,0,pvVar3);
    }
    pRVar8 = param_2 + 0x21;
  }
  FUN_100a8860((int *)pRVar8);
  param_2 = param_2[-1].Ptr;
LAB_100ae4f2:
  pvVar6 = GetProcessHeap();
  HeapFree(pvVar6,0,param_2);
  return;
}
