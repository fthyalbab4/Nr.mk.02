// rea decompile_all
// name: FUN_10005610
// address: 0x10005610
// body: available
// range: 0x10005610-0x10005675 inclusive
// range: 0x10005680-0x10005704 inclusive
// range: 0x10005710-0x1000578b inclusive
// range: 0x10005790-0x100057ac inclusive
// range: 0x100057b0-0x100057f8 inclusive
// range: 0x10005800-0x1000581c inclusive
// range: 0x10005820-0x100058f3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_10005610(int *param_1)

{
  PSRWLOCK pRVar1;
  undefined4 *puVar2;
  char cVar3;
  LPVOID lpMem;
  PVOID pvVar4;
  PVOID pvVar5;
  HANDLE pvVar6;
  int iVar7;
  undefined4 *puVar8;
  PSRWLOCK lpMem_00;
  int *piVar9;
  bool bVar10;
  PSRWLOCK local_14;

  lpMem_00 = (PSRWLOCK)param_1[1];
  if (*param_1 == 0) {
    LOCK();
    pRVar1 = lpMem_00 + 0x40;
    pRVar1->Ptr = (PVOID)((int)pRVar1->Ptr + -1);
    UNLOCK();
    if (pRVar1->Ptr != (PVOID)0x0) {
      return;
    }
    pvVar4 = lpMem_00[0x10].Ptr;
    do {
      LOCK();
      pvVar5 = lpMem_00[0x10].Ptr;
      bVar10 = pvVar4 == pvVar5;
      if (bVar10) {
        lpMem_00[0x10].Ptr = (PVOID)((uint)pvVar4 | (uint)lpMem_00[0x32].Ptr);
        pvVar5 = pvVar4;
      }
      UNLOCK();
      pvVar4 = pvVar5;
    } while (!bVar10);
    if (((uint)lpMem_00[0x32].Ptr & (uint)pvVar5) == 0) {
      AcquireSRWLockExclusive(lpMem_00 + 0x28);
      if (lpMem_00[0x2b].Ptr != (PVOID)0x0) {
        piVar9 = lpMem_00[0x2a].Ptr;
        iVar7 = (int)lpMem_00[0x2b].Ptr * 0xc;
        do {
          LOCK();
          bVar10 = *(int *)(*piVar9 + 0xc) == 0;
          if (bVar10) {
            *(int *)(*piVar9 + 0xc) = 2;
          }
          UNLOCK();
          if (bVar10) {
            FUN_10107860((char *)(*(int *)(*piVar9 + 8) + 0x18));
          }
          piVar9 = piVar9 + 3;
          iVar7 = iVar7 + -0xc;
        } while (iVar7 != 0);
      }
      pvVar4 = lpMem_00[0x2e].Ptr;
      puVar8 = lpMem_00[0x2d].Ptr;
      lpMem_00[0x2e].Ptr = (PVOID)0x0;
      if (pvVar4 != (PVOID)0x0) {
        puVar2 = puVar8 + (int)pvVar4 * 3;
        do {
          piVar9 = (int *)*puVar8;
          LOCK();
          bVar10 = piVar9[3] == 0;
          if (bVar10) {
            piVar9[3] = puVar8[1];
          }
          UNLOCK();
          if (bVar10) {
            FUN_10107860((char *)(piVar9[2] + 0x18));
            LOCK();
            *piVar9 = *piVar9 + -1;
            iVar7 = *piVar9;
            UNLOCK();
          }
          else {
            LOCK();
            *piVar9 = *piVar9 + -1;
            iVar7 = *piVar9;
            UNLOCK();
          }
          if (iVar7 == 0) {
            FUN_1011b0a0(piVar9);
          }
          puVar8 = puVar8 + 3;
        } while (puVar8 != puVar2);
      }
      if (lpMem_00[0x2b].Ptr == (PVOID)0x0) {
        bVar10 = lpMem_00[0x2e].Ptr == (PVOID)0x0;
      }
      else {
        bVar10 = false;
      }
      LOCK();
      *(bool *)&lpMem_00[0x2f].Ptr = bVar10;
      UNLOCK();
      ReleaseSRWLockExclusive(lpMem_00 + 0x28);
    }
    LOCK();
    cVar3 = *(char *)&lpMem_00[0x42].Ptr;
    *(undefined1 *)&lpMem_00[0x42].Ptr = 1;
    UNLOCK();
    if (cVar3 == '\0') {
      return;
    }
    if (lpMem_00[0x34].Ptr != (PVOID)0x0) {
      lpMem = lpMem_00[0x33].Ptr;
      pvVar6 = GetProcessHeap();
      HeapFree(pvVar6,0,lpMem);
    }
    FUN_100a8860((int *)(lpMem_00 + 0x21));
    FUN_100a8860((int *)(lpMem_00 + 0x29));
    lpMem_00 = lpMem_00[-1].Ptr;
  }
  else {
    if (*param_1 == 1) {
      LOCK();
      pRVar1 = lpMem_00 + 0x30;
      pRVar1->Ptr = (PVOID)((int)pRVar1->Ptr + -1);
      UNLOCK();
      if (pRVar1->Ptr != (PVOID)0x0) {
        return;
      }
      LOCK();
      pRVar1 = lpMem_00 + 0x10;
      pvVar4 = pRVar1->Ptr;
      pRVar1->Ptr = (PVOID)((uint)pRVar1->Ptr | 1);
      UNLOCK();
      if (((uint)pvVar4 & 1) == 0) {
        AcquireSRWLockExclusive(lpMem_00 + 0x20);
        if (lpMem_00[0x23].Ptr != (PVOID)0x0) {
          piVar9 = lpMem_00[0x22].Ptr;
          iVar7 = (int)lpMem_00[0x23].Ptr * 0xc;
          do {
            LOCK();
            bVar10 = *(int *)(*piVar9 + 0xc) == 0;
            if (bVar10) {
              *(int *)(*piVar9 + 0xc) = 2;
            }
            UNLOCK();
            if (bVar10) {
              FUN_10107860((char *)(*(int *)(*piVar9 + 8) + 0x18));
            }
            piVar9 = piVar9 + 3;
            iVar7 = iVar7 + -0xc;
          } while (iVar7 != 0);
        }
        pvVar4 = lpMem_00[0x26].Ptr;
        puVar8 = lpMem_00[0x25].Ptr;
        lpMem_00[0x26].Ptr = (PVOID)0x0;
        if (pvVar4 != (PVOID)0x0) {
          puVar2 = puVar8 + (int)pvVar4 * 3;
          do {
            piVar9 = (int *)*puVar8;
            LOCK();
            bVar10 = piVar9[3] == 0;
            if (bVar10) {
              piVar9[3] = puVar8[1];
            }
            UNLOCK();
            if (bVar10) {
              FUN_10107860((char *)(piVar9[2] + 0x18));
              LOCK();
              *piVar9 = *piVar9 + -1;
              iVar7 = *piVar9;
              UNLOCK();
            }
            else {
              LOCK();
              *piVar9 = *piVar9 + -1;
              iVar7 = *piVar9;
              UNLOCK();
            }
            if (iVar7 == 0) {
              FUN_1011b0a0(piVar9);
            }
            puVar8 = puVar8 + 3;
          } while (puVar8 != puVar2);
        }
        if (lpMem_00[0x23].Ptr == (PVOID)0x0) {
          bVar10 = lpMem_00[0x26].Ptr == (PVOID)0x0;
        }
        else {
          bVar10 = false;
        }
        LOCK();
        *(bool *)&lpMem_00[0x27].Ptr = bVar10;
        UNLOCK();
        ReleaseSRWLockExclusive(lpMem_00 + 0x20);
      }
      LOCK();
      cVar3 = *(char *)&lpMem_00[0x32].Ptr;
      *(undefined1 *)&lpMem_00[0x32].Ptr = 1;
      UNLOCK();
      if (cVar3 == '\0') {
        return;
      }
      local_14 = lpMem_00;
      FUN_100052c0((int *)&local_14);
      return;
    }
    LOCK();
    pRVar1 = lpMem_00 + 0xe;
    pRVar1->Ptr = (PVOID)((int)pRVar1->Ptr + -1);
    UNLOCK();
    if (pRVar1->Ptr != (PVOID)0x0) {
      return;
    }
    FUN_1004ed60(lpMem_00);
    LOCK();
    cVar3 = *(char *)&lpMem_00[0x10].Ptr;
    *(undefined1 *)&lpMem_00[0x10].Ptr = 1;
    UNLOCK();
    if (cVar3 == '\0') {
      return;
    }
    FUN_100a8860((int *)(lpMem_00 + 1));
    FUN_100a8860((int *)(lpMem_00 + 7));
  }
  pvVar6 = GetProcessHeap();
  HeapFree(pvVar6,0,lpMem_00);
  return;
}
