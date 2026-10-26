// rea decompile_all
// name: FUN_10005fc0
// address: 0x10005fc0
// body: available
// range: 0x10005fc0-0x100060b5 inclusive
// range: 0x100060c0-0x10006154 inclusive
// range: 0x10006160-0x100061cb inclusive
// range: 0x100061d0-0x1000620e inclusive
// range: 0x10006210-0x1000622b inclusive
// range: 0x10006230-0x10006267 inclusive
// range: 0x10006270-0x100062ae inclusive
// range: 0x100062b0-0x100062cb inclusive
// range: 0x100062d0-0x1000635b inclusive
// range: 0x10006360-0x100063b6 inclusive
// range: 0x100063c0-0x100063db inclusive
// range: 0x100063e0-0x1000649c inclusive
// range: 0x100064a0-0x10006560 inclusive
// range: 0x10006570-0x100066ce inclusive
// range: 0x100066d0-0x10006717 inclusive
// range: 0x10006720-0x10006770 inclusive
// range: 0x10006780-0x100067c7 inclusive
// range: 0x100067d0-0x1000690c inclusive
// range: 0x10006910-0x10006988 inclusive
// range: 0x10006990-0x10006a24 inclusive
// range: 0x10006a30-0x10006a72 inclusive
// range: 0x10006a80-0x10006a9b inclusive
// range: 0x10006aa0-0x10006ad7 inclusive
// range: 0x10006ae0-0x10006b1e inclusive
// range: 0x10006b20-0x10006b3b inclusive
// range: 0x10006b40-0x10006bb8 inclusive
// range: 0x10006bc0-0x10006c68 inclusive
// range: 0x10006c70-0x10006cda inclusive
// range: 0x10006ce0-0x10006d50 inclusive
// range: 0x10006d60-0x10006d96 inclusive
// range: 0x10006da0-0x10006dc0 inclusive
// range: 0x10006dd0-0x10006dec inclusive
// range: 0x10006df0-0x10006e4c inclusive
// range: 0x10006e50-0x10006e6b inclusive
// range: 0x10006e70-0x10006ed3 inclusive
// range: 0x10006ee0-0x10006f6a inclusive
// range: 0x10006f70-0x10006f96 inclusive
// range: 0x10006fa0-0x10007030 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10005fc0(int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  LPVOID pvVar3;
  uint uVar4;
  int iVar5;
  HANDLE pvVar6;
  PVOID pvVar7;
  uint uVar8;
  uint uVar9;
  PVOID pvVar10;
  char *pcVar11;
  LPVOID pvVar12;
  PSRWLOCK pRVar13;
  PSRWLOCK pRVar14;
  undefined4 *puVar15;
  PVOID pvVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  PSRWLOCK pRVar20;
  int iVar21;
  bool bVar22;
  PSRWLOCK local_70;
  uint local_6c;
  uint local_58;
  PSRWLOCK local_54;
  LPVOID local_50;
  uint local_38 [10];

  iVar21 = *param_1;
  pRVar20 = (PSRWLOCK)param_1[1];
  local_38[0] = 5;
  FUN_100b1220((int *)&local_58,iVar21,pRVar20,local_38);
  if (local_58 != 0xffffffff) {
    iVar5 = 3;
    if (2 < local_58) {
      iVar5 = local_58 - 3;
    }
    if ((iVar5 == 0) || (iVar5 == 1)) {
      if (local_54 != (PSRWLOCK)0x0) {
        pvVar6 = GetProcessHeap();
        HeapFree(pvVar6,0,local_50);
      }
    }
    else if (iVar5 != 2) {
      FUN_100ae070(local_58,local_54);
    }
  }
  ReleaseSemaphore((HANDLE)param_1[4],1,(LPLONG)0x0);
  if (iVar21 == 0) {
    LOCK();
    pRVar14 = pRVar20 + 0x40;
    pRVar14->Ptr = (PVOID)((int)pRVar14->Ptr + -1);
    UNLOCK();
    if (pRVar14->Ptr != (PVOID)0x0) goto LAB_100068b3;
    pvVar10 = pRVar20[0x10].Ptr;
    do {
      LOCK();
      pvVar7 = pRVar20[0x10].Ptr;
      bVar22 = pvVar10 == pvVar7;
      if (bVar22) {
        pRVar20[0x10].Ptr = (PVOID)((uint)pvVar10 | (uint)pRVar20[0x32].Ptr);
        pvVar7 = pvVar10;
      }
      UNLOCK();
      pvVar10 = pvVar7;
    } while (!bVar22);
    if (((uint)pRVar20[0x32].Ptr & (uint)pvVar7) == 0) {
      AcquireSRWLockExclusive(pRVar20 + 0x28);
      if (pRVar20[0x2b].Ptr != (PVOID)0x0) {
        iVar21 = (int)pRVar20[0x2b].Ptr * 0xc;
        piVar19 = pRVar20[0x2a].Ptr;
        do {
          LOCK();
          bVar22 = *(int *)(*piVar19 + 0xc) == 0;
          if (bVar22) {
            *(int *)(*piVar19 + 0xc) = 2;
          }
          UNLOCK();
          if (bVar22) {
            FUN_10107860((char *)(*(int *)(*piVar19 + 8) + 0x18));
          }
          piVar19 = piVar19 + 3;
          iVar21 = iVar21 + -0xc;
        } while (iVar21 != 0);
      }
      pvVar10 = pRVar20[0x2e].Ptr;
      puVar15 = pRVar20[0x2d].Ptr;
      pRVar20[0x2e].Ptr = (PVOID)0x0;
      if (pvVar10 != (PVOID)0x0) {
        puVar1 = puVar15 + (int)pvVar10 * 3;
        do {
          piVar19 = (int *)*puVar15;
          LOCK();
          bVar22 = piVar19[3] == 0;
          if (bVar22) {
            piVar19[3] = puVar15[1];
          }
          UNLOCK();
          if (bVar22) {
            FUN_10107860((char *)(piVar19[2] + 0x18));
            LOCK();
            *piVar19 = *piVar19 + -1;
            iVar21 = *piVar19;
            UNLOCK();
          }
          else {
            LOCK();
            *piVar19 = *piVar19 + -1;
            iVar21 = *piVar19;
            UNLOCK();
          }
          if (iVar21 == 0) {
            FUN_1011b0a0(piVar19);
          }
          puVar15 = puVar15 + 3;
        } while (puVar15 != puVar1);
      }
      if (pRVar20[0x2b].Ptr == (PVOID)0x0) {
        bVar22 = pRVar20[0x2e].Ptr == (PVOID)0x0;
      }
      else {
        bVar22 = false;
      }
      LOCK();
      *(bool *)&pRVar20[0x2f].Ptr = bVar22;
      UNLOCK();
      ReleaseSRWLockExclusive(pRVar20 + 0x28);
    }
    LOCK();
    cVar2 = *(char *)&pRVar20[0x42].Ptr;
    *(undefined1 *)&pRVar20[0x42].Ptr = 1;
    UNLOCK();
    if (cVar2 == '\0') goto LAB_100068b3;
    if (pRVar20[0x34].Ptr != (PVOID)0x0) {
      pvVar3 = pRVar20[0x33].Ptr;
      pvVar6 = GetProcessHeap();
      HeapFree(pvVar6,0,pvVar3);
    }
    FUN_100a8860((int *)(pRVar20 + 0x21));
    pRVar14 = pRVar20 + 0x29;
LAB_1000689b:
    FUN_100a8860((int *)pRVar14);
    pRVar20 = pRVar20[-1].Ptr;
  }
  else {
    if (iVar21 == 1) {
      LOCK();
      pRVar14 = pRVar20 + 0x30;
      pRVar14->Ptr = (PVOID)((int)pRVar14->Ptr + -1);
      UNLOCK();
      if (pRVar14->Ptr != (PVOID)0x0) goto LAB_100068b3;
      LOCK();
      pRVar14 = pRVar20 + 0x10;
      pvVar10 = pRVar14->Ptr;
      pRVar14->Ptr = (PVOID)((uint)pRVar14->Ptr | 1);
      UNLOCK();
      if (((uint)pvVar10 & 1) == 0) {
        AcquireSRWLockExclusive(pRVar20 + 0x20);
        if (pRVar20[0x23].Ptr != (PVOID)0x0) {
          iVar21 = (int)pRVar20[0x23].Ptr * 0xc;
          piVar19 = pRVar20[0x22].Ptr;
          do {
            LOCK();
            bVar22 = *(int *)(*piVar19 + 0xc) == 0;
            if (bVar22) {
              *(int *)(*piVar19 + 0xc) = 2;
            }
            UNLOCK();
            if (bVar22) {
              FUN_10107860((char *)(*(int *)(*piVar19 + 8) + 0x18));
            }
            piVar19 = piVar19 + 3;
            iVar21 = iVar21 + -0xc;
          } while (iVar21 != 0);
        }
        pvVar10 = pRVar20[0x26].Ptr;
        puVar15 = pRVar20[0x25].Ptr;
        pRVar20[0x26].Ptr = (PVOID)0x0;
        if (pvVar10 != (PVOID)0x0) {
          puVar1 = puVar15 + (int)pvVar10 * 3;
          do {
            piVar19 = (int *)*puVar15;
            LOCK();
            bVar22 = piVar19[3] == 0;
            if (bVar22) {
              piVar19[3] = puVar15[1];
            }
            UNLOCK();
            if (bVar22) {
              FUN_10107860((char *)(piVar19[2] + 0x18));
              LOCK();
              *piVar19 = *piVar19 + -1;
              iVar21 = *piVar19;
              UNLOCK();
            }
            else {
              LOCK();
              *piVar19 = *piVar19 + -1;
              iVar21 = *piVar19;
              UNLOCK();
            }
            if (iVar21 == 0) {
              FUN_1011b0a0(piVar19);
            }
            puVar15 = puVar15 + 3;
          } while (puVar15 != puVar1);
        }
        if (pRVar20[0x23].Ptr == (PVOID)0x0) {
          bVar22 = pRVar20[0x26].Ptr == (PVOID)0x0;
        }
        else {
          bVar22 = false;
        }
        LOCK();
        *(bool *)&pRVar20[0x27].Ptr = bVar22;
        UNLOCK();
        ReleaseSRWLockExclusive(pRVar20 + 0x20);
      }
      LOCK();
      cVar2 = *(char *)&pRVar20[0x32].Ptr;
      *(undefined1 *)&pRVar20[0x32].Ptr = 1;
      UNLOCK();
      if (cVar2 == '\0') goto LAB_100068b3;
      pvVar10 = pRVar20[0x10].Ptr;
      local_70 = pRVar20[1].Ptr;
      for (uVar17 = (uint)pRVar20->Ptr & 0xfffffffe; uVar17 != ((uint)pvVar10 & 0xfffffffe);
          uVar17 = uVar17 + 2) {
        uVar18 = uVar17 >> 1 & 0x1f;
        if (uVar18 == 0x1f) {
          pRVar14 = local_70;
          local_70 = local_70[0x136].Ptr;
LAB_1000657b:
          pvVar6 = GetProcessHeap();
          HeapFree(pvVar6,0,pRVar14);
        }
        else {
          pvVar7 = local_70[uVar18 * 10].Ptr;
          iVar21 = (int)pvVar7 - 3;
          if (pvVar7 < (PVOID)0x3) {
            iVar21 = 3;
          }
          if ((iVar21 == 0) || (iVar21 == 1)) {
            if (local_70[uVar18 * 10 + 1].Ptr != (PVOID)0x0) {
              pRVar14 = local_70[uVar18 * 10 + 2].Ptr;
              goto LAB_1000657b;
            }
          }
          else if (iVar21 != 2) {
            pRVar14 = local_70[uVar18 * 10 + 1].Ptr;
            if (pvVar7 == (PVOID)0x0) {
              LOCK();
              pRVar13 = pRVar14 + 0x40;
              pRVar13->Ptr = (PVOID)((int)pRVar13->Ptr + -1);
              UNLOCK();
              if (pRVar13->Ptr == (PVOID)0x0) {
                pvVar7 = pRVar14[0x10].Ptr;
                do {
                  LOCK();
                  pvVar16 = pRVar14[0x10].Ptr;
                  bVar22 = pvVar7 == pvVar16;
                  if (bVar22) {
                    pRVar14[0x10].Ptr = (PVOID)((uint)pvVar7 | (uint)pRVar14[0x32].Ptr);
                    pvVar16 = pvVar7;
                  }
                  UNLOCK();
                  pvVar7 = pvVar16;
                } while (!bVar22);
                if (((uint)pRVar14[0x32].Ptr & (uint)pvVar16) == 0) {
                  FUN_1004ba40(pRVar14 + 0x28);
                }
                LOCK();
                cVar2 = *(char *)&pRVar14[0x42].Ptr;
                *(undefined1 *)&pRVar14[0x42].Ptr = 1;
                UNLOCK();
                if (cVar2 != '\0') {
                  if (pRVar14[0x34].Ptr != (PVOID)0x0) {
                    pvVar3 = pRVar14[0x33].Ptr;
                    pvVar6 = GetProcessHeap();
                    HeapFree(pvVar6,0,pvVar3);
                  }
                  FUN_100a8860((int *)(pRVar14 + 0x21));
                  pRVar13 = pRVar14 + 0x29;
LAB_10006685:
                  FUN_100a8860((int *)pRVar13);
                  pRVar14 = pRVar14[-1].Ptr;
                  goto LAB_1000657b;
                }
              }
            }
            else if (pvVar7 == (PVOID)0x1) {
              LOCK();
              pRVar13 = pRVar14 + 0x30;
              pRVar13->Ptr = (PVOID)((int)pRVar13->Ptr + -1);
              UNLOCK();
              if (pRVar13->Ptr == (PVOID)0x0) {
                LOCK();
                pRVar13 = pRVar14 + 0x10;
                pvVar7 = pRVar13->Ptr;
                pRVar13->Ptr = (PVOID)((uint)pRVar13->Ptr | 1);
                UNLOCK();
                if (((uint)pvVar7 & 1) == 0) {
                  FUN_1004ba40(pRVar14 + 0x20);
                }
                LOCK();
                cVar2 = *(char *)&pRVar14[0x32].Ptr;
                *(undefined1 *)&pRVar14[0x32].Ptr = 1;
                UNLOCK();
                if (cVar2 != '\0') {
                  pvVar7 = pRVar14[0x10].Ptr;
                  pvVar3 = pRVar14[1].Ptr;
                  for (uVar18 = (uint)pRVar14->Ptr & 0xfffffffe;
                      uVar18 != ((uint)pvVar7 & 0xfffffffe); uVar18 = uVar18 + 2) {
                    uVar8 = uVar18 >> 1 & 0x1f;
                    if (uVar8 == 0x1f) {
                      pvVar12 = *(LPVOID *)((int)pvVar3 + 0x5d0);
                      pvVar6 = GetProcessHeap();
                      HeapFree(pvVar6,0,pvVar3);
                    }
                    else {
                      iVar21 = uVar8 * 0x30;
                      pvVar12 = pvVar3;
                      if (*(int *)((int)pvVar3 + iVar21 + 8) != -2) {
                        FUN_10005ed0((char *)(iVar21 + (int)pvVar3));
                      }
                    }
                    pvVar3 = pvVar12;
                  }
                  if (pvVar3 != (LPVOID)0x0) {
                    pvVar6 = GetProcessHeap();
                    HeapFree(pvVar6,0,pvVar3);
                  }
                  pRVar13 = pRVar14 + 0x21;
                  goto LAB_10006685;
                }
              }
            }
            else {
              LOCK();
              pRVar13 = pRVar14 + 0xe;
              pRVar13->Ptr = (PVOID)((int)pRVar13->Ptr + -1);
              UNLOCK();
              if (pRVar13->Ptr == (PVOID)0x0) {
                AcquireSRWLockExclusive(pRVar14);
                if (*(char *)&pRVar14[0xd].Ptr == '\0') {
                  *(undefined1 *)&pRVar14[0xd].Ptr = 1;
                  if (pRVar14[3].Ptr != (PVOID)0x0) {
                    iVar21 = (int)pRVar14[3].Ptr * 0xc;
                    piVar19 = pRVar14[2].Ptr;
                    do {
                      LOCK();
                      bVar22 = *(int *)(*piVar19 + 0xc) == 0;
                      if (bVar22) {
                        *(int *)(*piVar19 + 0xc) = 2;
                      }
                      UNLOCK();
                      if (bVar22) {
                        FUN_10107860((char *)(*(int *)(*piVar19 + 8) + 0x18));
                      }
                      piVar19 = piVar19 + 3;
                      iVar21 = iVar21 + -0xc;
                    } while (iVar21 != 0);
                  }
                  pvVar7 = pRVar14[6].Ptr;
                  puVar15 = pRVar14[5].Ptr;
                  pRVar14[6].Ptr = (PVOID)0x0;
                  if (pvVar7 != (PVOID)0x0) {
                    puVar1 = puVar15 + (int)pvVar7 * 3;
                    do {
                      piVar19 = (int *)*puVar15;
                      LOCK();
                      bVar22 = piVar19[3] == 0;
                      if (bVar22) {
                        piVar19[3] = puVar15[1];
                      }
                      UNLOCK();
                      if (bVar22) {
                        FUN_10107860((char *)(piVar19[2] + 0x18));
                        LOCK();
                        *piVar19 = *piVar19 + -1;
                        iVar21 = *piVar19;
                        UNLOCK();
                      }
                      else {
                        LOCK();
                        *piVar19 = *piVar19 + -1;
                        iVar21 = *piVar19;
                        UNLOCK();
                      }
                      if (iVar21 == 0) {
                        FUN_1011b0a0(piVar19);
                      }
                      puVar15 = puVar15 + 3;
                    } while (puVar15 != puVar1);
                  }
                  if (pRVar14[9].Ptr != (PVOID)0x0) {
                    iVar21 = (int)pRVar14[9].Ptr * 0xc;
                    piVar19 = pRVar14[8].Ptr;
                    do {
                      LOCK();
                      bVar22 = *(int *)(*piVar19 + 0xc) == 0;
                      if (bVar22) {
                        *(int *)(*piVar19 + 0xc) = 2;
                      }
                      UNLOCK();
                      if (bVar22) {
                        FUN_10107860((char *)(*(int *)(*piVar19 + 8) + 0x18));
                      }
                      piVar19 = piVar19 + 3;
                      iVar21 = iVar21 + -0xc;
                    } while (iVar21 != 0);
                  }
                  pvVar7 = pRVar14[0xc].Ptr;
                  puVar15 = pRVar14[0xb].Ptr;
                  pRVar14[0xc].Ptr = (PVOID)0x0;
                  if (pvVar7 != (PVOID)0x0) {
                    puVar1 = puVar15 + (int)pvVar7 * 3;
                    do {
                      piVar19 = (int *)*puVar15;
                      LOCK();
                      bVar22 = piVar19[3] == 0;
                      if (bVar22) {
                        piVar19[3] = puVar15[1];
                      }
                      UNLOCK();
                      if (bVar22) {
                        FUN_10107860((char *)(piVar19[2] + 0x18));
                        LOCK();
                        *piVar19 = *piVar19 + -1;
                        iVar21 = *piVar19;
                        UNLOCK();
                      }
                      else {
                        LOCK();
                        *piVar19 = *piVar19 + -1;
                        iVar21 = *piVar19;
                        UNLOCK();
                      }
                      if (iVar21 == 0) {
                        FUN_1011b0a0(piVar19);
                      }
                      puVar15 = puVar15 + 3;
                    } while (puVar15 != puVar1);
                  }
                }
                ReleaseSRWLockExclusive(pRVar14);
                LOCK();
                cVar2 = *(char *)&pRVar14[0x10].Ptr;
                *(undefined1 *)&pRVar14[0x10].Ptr = 1;
                UNLOCK();
                if (cVar2 != '\0') {
                  FUN_100a8860((int *)(pRVar14 + 1));
                  FUN_100a8860((int *)(pRVar14 + 7));
                  goto LAB_1000657b;
                }
              }
            }
          }
        }
      }
      if (local_70 != (PSRWLOCK)0x0) {
        pvVar6 = GetProcessHeap();
        HeapFree(pvVar6,0,local_70);
      }
      pRVar14 = pRVar20 + 0x21;
      goto LAB_1000689b;
    }
    LOCK();
    pRVar14 = pRVar20 + 0xe;
    pRVar14->Ptr = (PVOID)((int)pRVar14->Ptr + -1);
    UNLOCK();
    if (pRVar14->Ptr != (PVOID)0x0) goto LAB_100068b3;
    AcquireSRWLockExclusive(pRVar20);
    if (*(char *)&pRVar20[0xd].Ptr == '\0') {
      *(undefined1 *)&pRVar20[0xd].Ptr = 1;
      if (pRVar20[3].Ptr != (PVOID)0x0) {
        iVar21 = (int)pRVar20[3].Ptr * 0xc;
        piVar19 = pRVar20[2].Ptr;
        do {
          LOCK();
          bVar22 = *(int *)(*piVar19 + 0xc) == 0;
          if (bVar22) {
            *(int *)(*piVar19 + 0xc) = 2;
          }
          UNLOCK();
          if (bVar22) {
            FUN_10107860((char *)(*(int *)(*piVar19 + 8) + 0x18));
          }
          piVar19 = piVar19 + 3;
          iVar21 = iVar21 + -0xc;
        } while (iVar21 != 0);
      }
      pvVar10 = pRVar20[6].Ptr;
      puVar15 = pRVar20[5].Ptr;
      pRVar20[6].Ptr = (PVOID)0x0;
      if (pvVar10 != (PVOID)0x0) {
        puVar1 = puVar15 + (int)pvVar10 * 3;
        do {
          piVar19 = (int *)*puVar15;
          LOCK();
          bVar22 = piVar19[3] == 0;
          if (bVar22) {
            piVar19[3] = puVar15[1];
          }
          UNLOCK();
          if (bVar22) {
            FUN_10107860((char *)(piVar19[2] + 0x18));
            LOCK();
            *piVar19 = *piVar19 + -1;
            iVar21 = *piVar19;
            UNLOCK();
          }
          else {
            LOCK();
            *piVar19 = *piVar19 + -1;
            iVar21 = *piVar19;
            UNLOCK();
          }
          if (iVar21 == 0) {
            FUN_1011b0a0(piVar19);
          }
          puVar15 = puVar15 + 3;
        } while (puVar15 != puVar1);
      }
      if (pRVar20[9].Ptr != (PVOID)0x0) {
        iVar21 = (int)pRVar20[9].Ptr * 0xc;
        piVar19 = pRVar20[8].Ptr;
        do {
          LOCK();
          bVar22 = *(int *)(*piVar19 + 0xc) == 0;
          if (bVar22) {
            *(int *)(*piVar19 + 0xc) = 2;
          }
          UNLOCK();
          if (bVar22) {
            FUN_10107860((char *)(*(int *)(*piVar19 + 8) + 0x18));
          }
          piVar19 = piVar19 + 3;
          iVar21 = iVar21 + -0xc;
        } while (iVar21 != 0);
      }
      pvVar10 = pRVar20[0xc].Ptr;
      puVar15 = pRVar20[0xb].Ptr;
      pRVar20[0xc].Ptr = (PVOID)0x0;
      if (pvVar10 != (PVOID)0x0) {
        puVar1 = puVar15 + (int)pvVar10 * 3;
        do {
          piVar19 = (int *)*puVar15;
          LOCK();
          bVar22 = piVar19[3] == 0;
          if (bVar22) {
            piVar19[3] = puVar15[1];
          }
          UNLOCK();
          if (bVar22) {
            FUN_10107860((char *)(piVar19[2] + 0x18));
            LOCK();
            *piVar19 = *piVar19 + -1;
            iVar21 = *piVar19;
            UNLOCK();
          }
          else {
            LOCK();
            *piVar19 = *piVar19 + -1;
            iVar21 = *piVar19;
            UNLOCK();
          }
          if (iVar21 == 0) {
            FUN_1011b0a0(piVar19);
          }
          puVar15 = puVar15 + 3;
        } while (puVar15 != puVar1);
      }
    }
    ReleaseSRWLockExclusive(pRVar20);
    LOCK();
    cVar2 = *(char *)&pRVar20[0x10].Ptr;
    *(undefined1 *)&pRVar20[0x10].Ptr = 1;
    UNLOCK();
    if (cVar2 == '\0') goto LAB_100068b3;
    FUN_100a8860((int *)(pRVar20 + 1));
    FUN_100a8860((int *)(pRVar20 + 7));
  }
  pvVar6 = GetProcessHeap();
  HeapFree(pvVar6,0,pRVar20);
LAB_100068b3:
  pRVar20 = (PSRWLOCK)param_1[3];
  if (param_1[2] == 2) {
    LOCK();
    pRVar14 = pRVar20 + 0xf;
    pRVar14->Ptr = (PVOID)((int)pRVar14->Ptr + -1);
    UNLOCK();
    if (pRVar14->Ptr != (PVOID)0x0) {
      return;
    }
    AcquireSRWLockExclusive(pRVar20);
    if (*(char *)&pRVar20[0xd].Ptr == '\0') {
      *(undefined1 *)&pRVar20[0xd].Ptr = 1;
      if (pRVar20[3].Ptr != (PVOID)0x0) {
        iVar21 = (int)pRVar20[3].Ptr * 0xc;
        piVar19 = pRVar20[2].Ptr;
        do {
          LOCK();
          bVar22 = *(int *)(*piVar19 + 0xc) == 0;
          if (bVar22) {
            *(int *)(*piVar19 + 0xc) = 2;
          }
          UNLOCK();
          if (bVar22) {
            FUN_10107860((char *)(*(int *)(*piVar19 + 8) + 0x18));
          }
          piVar19 = piVar19 + 3;
          iVar21 = iVar21 + -0xc;
        } while (iVar21 != 0);
      }
      pvVar10 = pRVar20[6].Ptr;
      puVar15 = pRVar20[5].Ptr;
      pRVar20[6].Ptr = (PVOID)0x0;
      if (pvVar10 != (PVOID)0x0) {
        puVar1 = puVar15 + (int)pvVar10 * 3;
        do {
          piVar19 = (int *)*puVar15;
          LOCK();
          bVar22 = piVar19[3] == 0;
          if (bVar22) {
            piVar19[3] = puVar15[1];
          }
          UNLOCK();
          if (bVar22) {
            FUN_10107860((char *)(piVar19[2] + 0x18));
            LOCK();
            *piVar19 = *piVar19 + -1;
            iVar21 = *piVar19;
            UNLOCK();
          }
          else {
            LOCK();
            *piVar19 = *piVar19 + -1;
            iVar21 = *piVar19;
            UNLOCK();
          }
          if (iVar21 == 0) {
            FUN_1011b0a0(piVar19);
          }
          puVar15 = puVar15 + 3;
        } while (puVar15 != puVar1);
      }
      if (pRVar20[9].Ptr != (PVOID)0x0) {
        iVar21 = (int)pRVar20[9].Ptr * 0xc;
        piVar19 = pRVar20[8].Ptr;
        do {
          LOCK();
          bVar22 = *(int *)(*piVar19 + 0xc) == 0;
          if (bVar22) {
            *(int *)(*piVar19 + 0xc) = 2;
          }
          UNLOCK();
          if (bVar22) {
            FUN_10107860((char *)(*(int *)(*piVar19 + 8) + 0x18));
          }
          piVar19 = piVar19 + 3;
          iVar21 = iVar21 + -0xc;
        } while (iVar21 != 0);
      }
      pvVar10 = pRVar20[0xc].Ptr;
      puVar15 = pRVar20[0xb].Ptr;
      pRVar20[0xc].Ptr = (PVOID)0x0;
      if (pvVar10 != (PVOID)0x0) {
        puVar1 = puVar15 + (int)pvVar10 * 3;
        do {
          piVar19 = (int *)*puVar15;
          LOCK();
          bVar22 = piVar19[3] == 0;
          if (bVar22) {
            piVar19[3] = puVar15[1];
          }
          UNLOCK();
          if (bVar22) {
            FUN_10107860((char *)(piVar19[2] + 0x18));
            LOCK();
            *piVar19 = *piVar19 + -1;
            iVar21 = *piVar19;
            UNLOCK();
          }
          else {
            LOCK();
            *piVar19 = *piVar19 + -1;
            iVar21 = *piVar19;
            UNLOCK();
          }
          if (iVar21 == 0) {
            FUN_1011b0a0(piVar19);
          }
          puVar15 = puVar15 + 3;
        } while (puVar15 != puVar1);
      }
    }
    ReleaseSRWLockExclusive(pRVar20);
    LOCK();
    cVar2 = *(char *)&pRVar20[0x10].Ptr;
    *(undefined1 *)&pRVar20[0x10].Ptr = 1;
    UNLOCK();
    if (cVar2 == '\0') {
      return;
    }
    FUN_100a8860((int *)(pRVar20 + 1));
    FUN_100a8860((int *)(pRVar20 + 7));
  }
  else {
    if (param_1[2] == 1) {
      LOCK();
      pRVar14 = pRVar20 + 0x31;
      pRVar14->Ptr = (PVOID)((int)pRVar14->Ptr + -1);
      UNLOCK();
      if (pRVar14->Ptr != (PVOID)0x0) {
        return;
      }
      LOCK();
      pRVar14 = pRVar20 + 0x10;
      pvVar10 = pRVar14->Ptr;
      pRVar14->Ptr = (PVOID)((uint)pRVar14->Ptr | 1);
      UNLOCK();
      if (((uint)pvVar10 & 1) == 0) {
        uVar17 = 0;
        pvVar10 = pRVar20[0x10].Ptr;
        if ((~(uint)pvVar10 & 0x3e) == 0) {
          iVar21 = 1;
          uVar18 = 0;
          uVar17 = 0;
          do {
            uVar8 = uVar18;
            uVar9 = uVar17;
            if (uVar17 < 7) {
              while (uVar9 != 0) {
                uVar8 = uVar8 - 1;
                uVar9 = uVar8;
              }
            }
            else {
              SwitchToThread();
            }
            pvVar10 = pRVar20[0x10].Ptr;
            uVar18 = uVar18 + iVar21;
            uVar17 = uVar17 + 1;
            iVar21 = iVar21 + 2;
          } while ((~(uint)pvVar10 & 0x3e) == 0);
        }
        pvVar16 = pRVar20->Ptr;
        LOCK();
        pvVar7 = pRVar20[1].Ptr;
        pRVar20[1].Ptr = (PVOID)0x0;
        UNLOCK();
        uVar18 = (uint)pvVar16 >> 1;
        if (pvVar7 == (PVOID)0x0 && uVar18 != (uint)pvVar10 >> 1) {
          iVar21 = uVar17 * 2 + 1;
          uVar8 = uVar17 * uVar17;
          do {
            uVar9 = uVar8;
            uVar4 = uVar17;
            if (uVar17 < 7) {
              while (uVar4 != 0) {
                uVar9 = uVar9 - 1;
                uVar4 = uVar9;
              }
            }
            else {
              SwitchToThread();
            }
            uVar8 = uVar8 + iVar21;
            uVar17 = uVar17 + 1;
            iVar21 = iVar21 + 2;
            LOCK();
            pvVar7 = pRVar20[1].Ptr;
            pRVar20[1].Ptr = (PVOID)0x0;
            UNLOCK();
          } while (pvVar7 == (PVOID)0x0);
        }
        while (uVar18 != (uint)pvVar10 >> 1) {
          if ((uVar18 & 0x1f) == 0x1f) {
            if (*(int *)((int)pvVar7 + 0x5d0) == 0) {
              iVar21 = 1;
              uVar18 = 0;
              uVar17 = 0;
              do {
                uVar8 = uVar18;
                uVar9 = uVar17;
                if (uVar17 < 7) {
                  while (uVar9 != 0) {
                    uVar8 = uVar8 - 1;
                    uVar9 = uVar8;
                  }
                }
                else {
                  SwitchToThread();
                }
                uVar18 = uVar18 + iVar21;
                uVar17 = uVar17 + 1;
                iVar21 = iVar21 + 2;
              } while (*(int *)((int)pvVar7 + 0x5d0) == 0);
            }
            pvVar3 = *(LPVOID *)((int)pvVar7 + 0x5d0);
            pvVar6 = GetProcessHeap();
            HeapFree(pvVar6,0,pvVar7);
            pvVar7 = pvVar3;
          }
          else {
            iVar21 = (uVar18 & 0x1f) * 0x30;
            pcVar11 = (char *)((int)pvVar7 + iVar21);
            if ((*(uint *)((int)pvVar7 + iVar21 + 0x28) & 1) == 0) {
              iVar21 = 1;
              uVar17 = 0;
              uVar18 = 0;
              do {
                uVar8 = uVar17;
                uVar9 = uVar18;
                if (uVar18 < 7) {
                  while (uVar9 != 0) {
                    uVar8 = uVar8 - 1;
                    uVar9 = uVar8;
                  }
                }
                else {
                  SwitchToThread();
                }
                uVar17 = uVar17 + iVar21;
                uVar18 = uVar18 + 1;
                iVar21 = iVar21 + 2;
              } while ((*(uint *)(pcVar11 + 0x28) & 1) == 0);
            }
            if (*(int *)(pcVar11 + 8) == -2) {
              if (*(int *)(pcVar11 + 0xc) != 0) {
                pvVar3 = *(LPVOID *)(pcVar11 + 0x10);
                pvVar6 = GetProcessHeap();
                HeapFree(pvVar6,0,pvVar3);
              }
            }
            else {
              FUN_10005ed0(pcVar11);
            }
          }
          pvVar16 = (PVOID)((int)pvVar16 + 2);
          uVar18 = (uint)pvVar16 >> 1;
        }
        if (pvVar7 != (LPVOID)0x0) {
          pvVar6 = GetProcessHeap();
          HeapFree(pvVar6,0,pvVar7);
        }
        pRVar20->Ptr = (PVOID)((uint)pvVar16 & 0xfffffffe);
      }
      LOCK();
      cVar2 = *(char *)&pRVar20[0x32].Ptr;
      *(undefined1 *)&pRVar20[0x32].Ptr = 1;
      UNLOCK();
      if (cVar2 == '\0') {
        return;
      }
      pvVar10 = pRVar20[0x10].Ptr;
      pvVar3 = pRVar20[1].Ptr;
      for (uVar17 = (uint)pRVar20->Ptr & 0xfffffffe; uVar17 != ((uint)pvVar10 & 0xfffffffe);
          uVar17 = uVar17 + 2) {
        uVar18 = uVar17 >> 1 & 0x1f;
        if (uVar18 == 0x1f) {
          pvVar12 = *(LPVOID *)((int)pvVar3 + 0x5d0);
          pvVar6 = GetProcessHeap();
          HeapFree(pvVar6,0,pvVar3);
        }
        else {
          iVar21 = uVar18 * 0x30;
          pcVar11 = (char *)((int)pvVar3 + iVar21);
          pvVar12 = pvVar3;
          if (*(int *)((int)pvVar3 + iVar21 + 8) == -2) {
            if (*(int *)(pcVar11 + 0xc) != 0) {
              pvVar3 = *(LPVOID *)(pcVar11 + 0x10);
              pvVar6 = GetProcessHeap();
              HeapFree(pvVar6,0,pvVar3);
            }
          }
          else {
            FUN_10005ed0(pcVar11);
          }
        }
        pvVar3 = pvVar12;
      }
      if (pvVar3 != (LPVOID)0x0) {
        pvVar6 = GetProcessHeap();
        HeapFree(pvVar6,0,pvVar3);
      }
      pRVar14 = pRVar20 + 0x21;
    }
    else {
      LOCK();
      pRVar14 = pRVar20 + 0x41;
      pRVar14->Ptr = (PVOID)((int)pRVar14->Ptr + -1);
      UNLOCK();
      if (pRVar14->Ptr != (PVOID)0x0) {
        return;
      }
      pvVar10 = pRVar20[0x10].Ptr;
      do {
        LOCK();
        pvVar7 = pRVar20[0x10].Ptr;
        bVar22 = pvVar10 == pvVar7;
        if (bVar22) {
          pRVar20[0x10].Ptr = (PVOID)((uint)pvVar10 | (uint)pRVar20[0x32].Ptr);
          pvVar7 = pvVar10;
        }
        UNLOCK();
        pvVar10 = pvVar7;
      } while (!bVar22);
      pvVar10 = pRVar20[0x32].Ptr;
      if (((uint)pvVar10 & (uint)pvVar7) == 0) {
        AcquireSRWLockExclusive(pRVar20 + 0x20);
        if (pRVar20[0x23].Ptr != (PVOID)0x0) {
          iVar21 = (int)pRVar20[0x23].Ptr * 0xc;
          piVar19 = pRVar20[0x22].Ptr;
          do {
            LOCK();
            bVar22 = *(int *)(*piVar19 + 0xc) == 0;
            if (bVar22) {
              *(int *)(*piVar19 + 0xc) = 2;
            }
            UNLOCK();
            if (bVar22) {
              FUN_10107860((char *)(*(int *)(*piVar19 + 8) + 0x18));
            }
            piVar19 = piVar19 + 3;
            iVar21 = iVar21 + -0xc;
          } while (iVar21 != 0);
        }
        pvVar10 = pRVar20[0x26].Ptr;
        puVar15 = pRVar20[0x25].Ptr;
        pRVar20[0x26].Ptr = (PVOID)0x0;
        if (pvVar10 != (PVOID)0x0) {
          puVar1 = puVar15 + (int)pvVar10 * 3;
          do {
            piVar19 = (int *)*puVar15;
            LOCK();
            bVar22 = piVar19[3] == 0;
            if (bVar22) {
              piVar19[3] = puVar15[1];
            }
            UNLOCK();
            if (bVar22) {
              FUN_10107860((char *)(piVar19[2] + 0x18));
              LOCK();
              *piVar19 = *piVar19 + -1;
              iVar21 = *piVar19;
              UNLOCK();
            }
            else {
              LOCK();
              *piVar19 = *piVar19 + -1;
              iVar21 = *piVar19;
              UNLOCK();
            }
            if (iVar21 == 0) {
              FUN_1011b0a0(piVar19);
            }
            puVar15 = puVar15 + 3;
          } while (puVar15 != puVar1);
        }
        if (pRVar20[0x23].Ptr == (PVOID)0x0) {
          bVar22 = pRVar20[0x26].Ptr == (PVOID)0x0;
        }
        else {
          bVar22 = false;
        }
        LOCK();
        *(bool *)&pRVar20[0x27].Ptr = bVar22;
        UNLOCK();
        ReleaseSRWLockExclusive(pRVar20 + 0x20);
        pvVar10 = pRVar20[0x32].Ptr;
      }
      local_70 = pRVar20->Ptr;
      local_6c = 0;
      uVar17 = ~(uint)pvVar10;
      while( true ) {
        while( true ) {
          uVar18 = (int)pvVar10 - 1U & (uint)local_70;
          iVar21 = uVar18 * 0x30;
          pRVar14 = *(PSRWLOCK *)((int)pRVar20[0x33].Ptr + iVar21 + 0x28);
          if ((PVOID)((int)local_70 + 1) != pRVar14) break;
          if (pRVar20[0x30].Ptr <= (PVOID)(uVar18 + 1)) {
            pRVar14 = (PVOID)(((uint)local_70 & -(int)pRVar20[0x31].Ptr) + (int)pRVar20[0x31].Ptr);
          }
          local_70 = pRVar14;
          pcVar11 = (char *)((int)pRVar20[0x33].Ptr + iVar21);
          if (*(int *)(pcVar11 + 8) == -2) {
            if (*(int *)(pcVar11 + 0xc) == 0) {
              pvVar10 = pRVar20[0x32].Ptr;
            }
            else {
              pvVar3 = *(LPVOID *)(pcVar11 + 0x10);
              pvVar6 = GetProcessHeap();
              HeapFree(pvVar6,0,pvVar3);
              pvVar10 = pRVar20[0x32].Ptr;
            }
          }
          else {
            FUN_10005ed0(pcVar11);
            pvVar10 = pRVar20[0x32].Ptr;
          }
        }
        if ((PVOID)((uint)pvVar7 & uVar17) == local_70) break;
        if (local_6c < 7) {
          if (local_6c != 0) {
            iVar21 = local_6c * local_6c;
            do {
              iVar21 = iVar21 + -1;
            } while (iVar21 != 0);
          }
        }
        else {
          SwitchToThread();
        }
        pvVar10 = pRVar20[0x32].Ptr;
        local_6c = local_6c + 1;
      }
      LOCK();
      cVar2 = *(char *)&pRVar20[0x42].Ptr;
      *(undefined1 *)&pRVar20[0x42].Ptr = 1;
      UNLOCK();
      if (cVar2 == '\0') {
        return;
      }
      if (pRVar20[0x34].Ptr != (PVOID)0x0) {
        pvVar3 = pRVar20[0x33].Ptr;
        pvVar6 = GetProcessHeap();
        HeapFree(pvVar6,0,pvVar3);
      }
      FUN_100a8860((int *)(pRVar20 + 0x21));
      pRVar14 = pRVar20 + 0x29;
    }
    FUN_100a8860((int *)pRVar14);
    pRVar20 = pRVar20[-1].Ptr;
  }
  pvVar6 = GetProcessHeap();
  HeapFree(pvVar6,0,pRVar20);
  return;
}
