// rea decompile_all
// name: FUN_10003bb0
// address: 0x10003bb0
// body: available
// range: 0x10003bb0-0x10003c1a inclusive
// range: 0x10003c20-0x10003cc1 inclusive
// range: 0x10003cd0-0x10003d61 inclusive
// range: 0x10003d70-0x10003dfa inclusive
// range: 0x10003e00-0x10003e6e inclusive
// range: 0x10003e70-0x10003e96 inclusive
// range: 0x10003ea0-0x10003ecd inclusive
// range: 0x10003ed0-0x10003f2b inclusive
// range: 0x10003f30-0x10003f4b inclusive
// range: 0x10003f50-0x10003fae inclusive
// range: 0x10003fb0-0x10004016 inclusive
// range: 0x10004020-0x10004046 inclusive
// range: 0x10004050-0x100040c4 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10003bb0(int *param_1)

{
  PSRWLOCK pRVar1;
  undefined4 *puVar2;
  char cVar3;
  LPVOID lpMem;
  uint uVar4;
  uint uVar5;
  PVOID pvVar6;
  uint uVar7;
  HANDLE pvVar8;
  PVOID pvVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  PVOID pvVar13;
  int *piVar14;
  undefined4 *puVar15;
  uint uVar16;
  bool bVar17;
  PSRWLOCK lpMem_00;
  LPVOID local_20;
  PSRWLOCK local_14;

  if (*param_1 == -1) {
    return;
  }
  FUN_10005610(param_1);
  lpMem_00 = (PSRWLOCK)param_1[3];
  if (param_1[2] == 0) {
    LOCK();
    pRVar1 = lpMem_00 + 0x41;
    pRVar1->Ptr = (PVOID)((int)pRVar1->Ptr + -1);
    UNLOCK();
    if (pRVar1->Ptr != (PVOID)0x0) {
      return;
    }
    pvVar9 = lpMem_00[0x10].Ptr;
    do {
      LOCK();
      pvVar6 = lpMem_00[0x10].Ptr;
      bVar17 = pvVar9 == pvVar6;
      if (bVar17) {
        lpMem_00[0x10].Ptr = (PVOID)((uint)pvVar9 | (uint)lpMem_00[0x32].Ptr);
        pvVar6 = pvVar9;
      }
      UNLOCK();
      pvVar9 = pvVar6;
    } while (!bVar17);
    pvVar9 = lpMem_00[0x32].Ptr;
    if (((uint)pvVar9 & (uint)pvVar6) == 0) {
      AcquireSRWLockExclusive(lpMem_00 + 0x20);
      if (lpMem_00[0x23].Ptr != (PVOID)0x0) {
        iVar12 = (int)lpMem_00[0x23].Ptr * 0xc;
        piVar14 = lpMem_00[0x22].Ptr;
        do {
          LOCK();
          bVar17 = *(int *)(*piVar14 + 0xc) == 0;
          if (bVar17) {
            *(int *)(*piVar14 + 0xc) = 2;
          }
          UNLOCK();
          if (bVar17) {
            FUN_10107860((char *)(*(int *)(*piVar14 + 8) + 0x18));
          }
          piVar14 = piVar14 + 3;
          iVar12 = iVar12 + -0xc;
        } while (iVar12 != 0);
      }
      pvVar9 = lpMem_00[0x26].Ptr;
      puVar15 = lpMem_00[0x25].Ptr;
      lpMem_00[0x26].Ptr = (PVOID)0x0;
      if (pvVar9 != (PVOID)0x0) {
        puVar2 = puVar15 + (int)pvVar9 * 3;
        do {
          piVar14 = (int *)*puVar15;
          LOCK();
          bVar17 = piVar14[3] == 0;
          if (bVar17) {
            piVar14[3] = puVar15[1];
          }
          UNLOCK();
          if (bVar17) {
            FUN_10107860((char *)(piVar14[2] + 0x18));
            LOCK();
            *piVar14 = *piVar14 + -1;
            iVar12 = *piVar14;
            UNLOCK();
          }
          else {
            LOCK();
            *piVar14 = *piVar14 + -1;
            iVar12 = *piVar14;
            UNLOCK();
          }
          if (iVar12 == 0) {
            FUN_1011b0a0(piVar14);
          }
          puVar15 = puVar15 + 3;
        } while (puVar15 != puVar2);
      }
      if (lpMem_00[0x23].Ptr == (PVOID)0x0) {
        bVar17 = lpMem_00[0x26].Ptr == (PVOID)0x0;
      }
      else {
        bVar17 = false;
      }
      LOCK();
      *(bool *)&lpMem_00[0x27].Ptr = bVar17;
      UNLOCK();
      ReleaseSRWLockExclusive(lpMem_00 + 0x20);
      pvVar9 = lpMem_00[0x32].Ptr;
    }
    pvVar13 = lpMem_00->Ptr;
    local_20 = (LPVOID)0x0;
    uVar16 = ~(uint)pvVar9;
    while( true ) {
      while( true ) {
        uVar11 = (int)pvVar9 - 1U & (uint)pvVar13;
        iVar12 = uVar11 * 0x30;
        pvVar9 = *(PVOID *)((int)lpMem_00[0x33].Ptr + iVar12 + 0x28);
        if ((PVOID)((int)pvVar13 + 1) != pvVar9) break;
        if (lpMem_00[0x30].Ptr <= (PVOID)(uVar11 + 1)) {
          pvVar9 = (PVOID)(((uint)pvVar13 & -(int)lpMem_00[0x31].Ptr) + (int)lpMem_00[0x31].Ptr);
        }
        pvVar13 = pvVar9;
        pcVar10 = (char *)((int)lpMem_00[0x33].Ptr + iVar12);
        if (*(int *)(pcVar10 + 8) == -2) {
          FUN_100071e0((int *)(pcVar10 + 0xc));
        }
        else {
          FUN_10005ed0(pcVar10);
        }
        pvVar9 = lpMem_00[0x32].Ptr;
      }
      if ((PVOID)((uint)pvVar6 & uVar16) == pvVar13) break;
      if (local_20 < 7) {
        if (local_20 != (LPVOID)0x0) {
          iVar12 = (int)local_20 * (int)local_20;
          do {
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
      }
      else {
        SwitchToThread();
      }
      pvVar9 = lpMem_00[0x32].Ptr;
      local_20 = (LPVOID)((int)local_20 + 1);
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
      pvVar8 = GetProcessHeap();
      HeapFree(pvVar8,0,lpMem);
    }
    FUN_100a8860((int *)(lpMem_00 + 0x21));
    FUN_100a8860((int *)(lpMem_00 + 0x29));
    lpMem_00 = lpMem_00[-1].Ptr;
    pvVar8 = GetProcessHeap();
  }
  else {
    if (param_1[2] == 1) {
      LOCK();
      pRVar1 = lpMem_00 + 0x31;
      pRVar1->Ptr = (PVOID)((int)pRVar1->Ptr + -1);
      UNLOCK();
      if (pRVar1->Ptr != (PVOID)0x0) {
        return;
      }
      LOCK();
      pRVar1 = lpMem_00 + 0x10;
      pvVar9 = pRVar1->Ptr;
      pRVar1->Ptr = (PVOID)((uint)pRVar1->Ptr | 1);
      UNLOCK();
      if (((uint)pvVar9 & 1) == 0) {
        uVar16 = 0;
        pvVar9 = lpMem_00[0x10].Ptr;
        if ((~(uint)pvVar9 & 0x3e) == 0) {
          iVar12 = 1;
          uVar11 = 0;
          uVar16 = 0;
          do {
            uVar5 = uVar11;
            uVar7 = uVar16;
            if (uVar16 < 7) {
              while (uVar7 != 0) {
                uVar5 = uVar5 - 1;
                uVar7 = uVar5;
              }
            }
            else {
              SwitchToThread();
            }
            pvVar9 = lpMem_00[0x10].Ptr;
            uVar11 = uVar11 + iVar12;
            uVar16 = uVar16 + 1;
            iVar12 = iVar12 + 2;
          } while ((~(uint)pvVar9 & 0x3e) == 0);
        }
        pvVar13 = lpMem_00->Ptr;
        LOCK();
        pvVar6 = lpMem_00[1].Ptr;
        lpMem_00[1].Ptr = (PVOID)0x0;
        UNLOCK();
        uVar11 = (uint)pvVar13 >> 1;
        if (pvVar6 == (PVOID)0x0 && uVar11 != (uint)pvVar9 >> 1) {
          iVar12 = uVar16 * 2 + 1;
          uVar5 = uVar16 * uVar16;
          do {
            uVar7 = uVar5;
            uVar4 = uVar16;
            if (uVar16 < 7) {
              while (uVar4 != 0) {
                uVar7 = uVar7 - 1;
                uVar4 = uVar7;
              }
            }
            else {
              SwitchToThread();
            }
            uVar5 = uVar5 + iVar12;
            uVar16 = uVar16 + 1;
            iVar12 = iVar12 + 2;
            LOCK();
            pvVar6 = lpMem_00[1].Ptr;
            lpMem_00[1].Ptr = (PVOID)0x0;
            UNLOCK();
          } while (pvVar6 == (PVOID)0x0);
        }
        while (uVar11 != (uint)pvVar9 >> 1) {
          if ((uVar11 & 0x1f) == 0x1f) {
            if (*(int *)((int)pvVar6 + 0x5d0) == 0) {
              iVar12 = 1;
              uVar11 = 0;
              uVar16 = 0;
              do {
                uVar5 = uVar11;
                uVar7 = uVar16;
                if (uVar16 < 7) {
                  while (uVar7 != 0) {
                    uVar5 = uVar5 - 1;
                    uVar7 = uVar5;
                  }
                }
                else {
                  SwitchToThread();
                }
                uVar11 = uVar11 + iVar12;
                uVar16 = uVar16 + 1;
                iVar12 = iVar12 + 2;
              } while (*(int *)((int)pvVar6 + 0x5d0) == 0);
            }
            local_20 = *(LPVOID *)((int)pvVar6 + 0x5d0);
            pvVar8 = GetProcessHeap();
            HeapFree(pvVar8,0,pvVar6);
          }
          else {
            iVar12 = (uVar11 & 0x1f) * 0x30;
            pcVar10 = (char *)((int)pvVar6 + iVar12);
            if ((*(uint *)((int)pvVar6 + iVar12 + 0x28) & 1) == 0) {
              iVar12 = 1;
              uVar16 = 0;
              uVar11 = 0;
              do {
                uVar5 = uVar16;
                uVar7 = uVar11;
                if (uVar11 < 7) {
                  while (uVar7 != 0) {
                    uVar5 = uVar5 - 1;
                    uVar7 = uVar5;
                  }
                }
                else {
                  SwitchToThread();
                }
                uVar16 = uVar16 + iVar12;
                uVar11 = uVar11 + 1;
                iVar12 = iVar12 + 2;
              } while ((*(uint *)(pcVar10 + 0x28) & 1) == 0);
            }
            local_20 = pvVar6;
            if (*(int *)(pcVar10 + 8) == -2) {
              FUN_100071e0((int *)(pcVar10 + 0xc));
            }
            else {
              FUN_10005ed0(pcVar10);
            }
          }
          pvVar13 = (PVOID)((int)pvVar13 + 2);
          pvVar6 = local_20;
          uVar11 = (uint)pvVar13 >> 1;
        }
        if (pvVar6 != (LPVOID)0x0) {
          pvVar8 = GetProcessHeap();
          HeapFree(pvVar8,0,pvVar6);
        }
        lpMem_00->Ptr = (PVOID)((uint)pvVar13 & 0xfffffffe);
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
    pRVar1 = lpMem_00 + 0xf;
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
    pvVar8 = GetProcessHeap();
  }
  HeapFree(pvVar8,0,lpMem_00);
  return;
}
