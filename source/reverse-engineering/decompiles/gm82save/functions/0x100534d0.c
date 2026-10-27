// rea decompile_all
// name: FUN_100534d0
// address: 0x100534d0
// body: available
// range: 0x100534d0-0x100534f8 inclusive
// range: 0x10053500-0x10053536 inclusive
// range: 0x10053540-0x10053599 inclusive
// range: 0x100535a0-0x100535f1 inclusive
// range: 0x10053600-0x10053676 inclusive
// range: 0x10053680-0x100536c9 inclusive
// range: 0x100536d0-0x100536d9 inclusive
// range: 0x100536e0-0x10053747 inclusive
// range: 0x10053750-0x100538fc inclusive
// range: 0x10053900-0x100539b2 inclusive
// range: 0x100539c0-0x100539ea inclusive
// range: 0x100539f0-0x10053a5a inclusive
// range: 0x10053a60-0x10053add inclusive
// range: 0x10053ae0-0x10053bbe inclusive
// range: 0x10053bc0-0x10053c03 inclusive
// range: 0x10053c10-0x10053e40 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100534d0(undefined4 *param_1,int param_2,PSRWLOCK param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  PVOID pvVar6;
  undefined4 uVar7;
  code *pcVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint uVar12;
  HANDLE pvVar13;
  uint uVar14;
  PVOID pvVar15;
  int *piVar16;
  int iVar17;
  undefined4 uVar18;
  uint uVar19;
  PVOID pvVar20;
  int iVar21;
  undefined4 uVar22;
  LPVOID lpMem;
  undefined4 *puVar23;
  uint uVar24;
  bool bVar25;
  uint local_5c;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined4 local_34;

  if (param_2 == 0) {
    pvVar20 = param_3->Ptr;
    local_5c = 0;
    do {
      uVar19 = (int)param_3[0x32].Ptr - 1U & (uint)pvVar20;
      iVar10 = uVar19 * 0x30;
      pvVar15 = *(PVOID *)((int)param_3[0x33].Ptr + iVar10 + 0x28);
      if ((PVOID)((int)pvVar20 + 1U) == pvVar15) {
        if (param_3[0x30].Ptr <= (PVOID)(uVar19 + 1)) {
          pvVar15 = (PVOID)((-(int)param_3[0x31].Ptr & (uint)pvVar20) + (int)param_3[0x31].Ptr);
        }
        LOCK();
        bVar25 = pvVar20 == param_3->Ptr;
        if (bVar25) {
          param_3->Ptr = pvVar15;
        }
        UNLOCK();
        if (bVar25) goto LAB_10053855;
        uVar19 = 6;
        if (local_5c < 6) {
          uVar19 = local_5c;
        }
        if (local_5c != 0) {
          iVar10 = uVar19 * uVar19;
          do {
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          goto LAB_10053600;
        }
LAB_100536d0:
        local_5c = 1;
      }
      else {
        if (pvVar15 == pvVar20) {
          if ((PVOID)(~(uint)param_3[0x32].Ptr & (uint)param_3[0x10].Ptr) == pvVar20) {
            if (((uint)param_3[0x32].Ptr & (uint)param_3[0x10].Ptr) == 0) {
              *(undefined1 *)param_1 = 0;
              param_1[2] = 0xfffffffd;
              return;
            }
            goto LAB_10053d6d;
          }
          uVar19 = 6;
          if (local_5c < 6) {
            uVar19 = local_5c;
          }
          if (local_5c == 0) goto LAB_100536d0;
          iVar10 = uVar19 * uVar19;
          do {
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
        else {
          if (6 < local_5c) {
            SwitchToThread();
            local_5c = local_5c + 1;
            goto LAB_10053601;
          }
          if (local_5c != 0) {
            iVar10 = local_5c * local_5c;
            do {
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
        }
LAB_10053600:
        local_5c = local_5c + 1;
      }
LAB_10053601:
      pvVar20 = param_3->Ptr;
    } while( true );
  }
  if (param_2 == 1) {
    pvVar20 = param_3->Ptr;
    lpMem = param_3[1].Ptr;
    uVar19 = 0;
    do {
      while( true ) {
        uVar14 = (uint)pvVar20 >> 1 & 0x1f;
        if (uVar14 != 0x1f) break;
        if (uVar19 < 7) {
          if (uVar19 != 0) {
            iVar10 = uVar19 * uVar19;
            do {
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
        }
        else {
LAB_10053500:
          SwitchToThread();
        }
LAB_10053506:
        pvVar20 = param_3->Ptr;
        lpMem = param_3[1].Ptr;
        uVar19 = uVar19 + 1;
      }
      if (((uint)pvVar20 & 1) == 0) {
        pvVar15 = param_3[0x10].Ptr;
        if ((uint)pvVar20 >> 1 == (uint)pvVar15 >> 1) {
          if (((uint)pvVar15 & 1) != 0) goto LAB_10053d6d;
          *(undefined1 *)param_1 = 0;
          goto LAB_10053d74;
        }
        pvVar15 = (PVOID)((int)pvVar20 + 2U | (uint)(0x3f < ((uint)pvVar15 ^ (uint)pvVar20)));
      }
      else {
        pvVar15 = (PVOID)((int)pvVar20 + 2);
      }
      if (lpMem == (LPVOID)0x0) {
        if (6 < uVar19) goto LAB_10053500;
        if (uVar19 != 0) {
          iVar10 = uVar19 * uVar19;
          do {
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
        goto LAB_10053506;
      }
      LOCK();
      bVar25 = pvVar20 == param_3->Ptr;
      if (bVar25) {
        param_3->Ptr = pvVar15;
      }
      UNLOCK();
      if (bVar25) goto LAB_100539fe;
      uVar14 = 6;
      if (uVar19 < 6) {
        uVar14 = uVar19;
      }
      if (uVar19 == 0) {
        uVar19 = 1;
      }
      else {
        iVar10 = uVar14 * uVar14;
        do {
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        uVar19 = uVar19 + 1;
      }
      pvVar20 = param_3->Ptr;
      lpMem = param_3[1].Ptr;
    } while( true );
  }
  AcquireSRWLockExclusive(param_3);
  pvVar20 = param_3[3].Ptr;
  if (pvVar20 != (PVOID)0x0) {
    puVar11 = FUN_100a8900();
    if (puVar11 == (undefined1 *)0x0) {
LAB_10053df7:
      FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    pvVar15 = (PVOID)0x0;
    iVar10 = (int)pvVar20 * 0xc;
    piVar16 = param_3[2].Ptr;
    do {
      iVar21 = *piVar16;
      if (*(undefined1 **)(iVar21 + 0x14) != puVar11) {
        LOCK();
        bVar25 = *(int *)(iVar21 + 0xc) == 0;
        if (bVar25) {
          *(int *)(iVar21 + 0xc) = piVar16[1];
        }
        UNLOCK();
        if (bVar25) {
          if (piVar16[2] != 0) {
            *(int *)(iVar21 + 0x10) = piVar16[2];
          }
          FUN_10107860((char *)(*(int *)(iVar21 + 8) + 0x18));
          pvVar20 = param_3[3].Ptr;
          if (pvVar15 < pvVar20) {
            pvVar6 = param_3[2].Ptr;
            piVar16 = *(int **)((int)pvVar6 + (int)pvVar15 * 0xc);
            puVar23 = *(undefined4 **)((int)pvVar6 + (int)pvVar15 * 0xc + 8);
            memmove((void *)((int)pvVar6 + (int)pvVar15 * 0xc),
                    (void *)((int)pvVar6 + (int)pvVar15 * 0xc + 0xc),
                    (~(uint)pvVar15 + (int)pvVar20) * 0xc);
            pvVar20 = (PVOID)((int)pvVar20 - 1);
            param_3[3].Ptr = pvVar20;
            if (piVar16 != (int *)0x0) {
              ReleaseSRWLockExclusive(param_3);
              if (puVar23 == (undefined4 *)0x0) {
                *(undefined1 *)param_1 = 1;
                param_1[2] = 0xfffffffd;
              }
              else {
                if (*(char *)((int)puVar23 + 0x29) == '\0') {
                  if (*(char *)(puVar23 + 10) == '\0') {
                    iVar10 = 1;
                    uVar19 = 0;
                    uVar14 = 0;
                    do {
                      uVar24 = uVar19;
                      uVar12 = uVar14;
                      if (uVar14 < 7) {
                        while (uVar12 != 0) {
                          uVar24 = uVar24 - 1;
                          uVar12 = uVar24;
                        }
                      }
                      else {
                        SwitchToThread();
                      }
                      uVar19 = uVar19 + iVar10;
                      uVar14 = uVar14 + 1;
                      iVar10 = iVar10 + 2;
                    } while (*(char *)(puVar23 + 10) == '\0');
                  }
                  iVar10 = puVar23[2];
                  uVar22 = *puVar23;
                  uVar18 = puVar23[1];
                  puVar23[2] = 0xfffffffd;
                  if (iVar10 == -3) {
                    FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_1014fb18);
                    /* WARNING: Does not return */
                    pcVar8 = (code *)invalidInstructionException();
                    (*pcVar8)();
                  }
                  local_34 = puVar23[9];
                  local_3c = *(undefined8 *)(puVar23 + 7);
                  local_4c = *(undefined8 *)(puVar23 + 3);
                  local_44 = *(undefined8 *)(puVar23 + 5);
                  pvVar13 = GetProcessHeap();
                  HeapFree(pvVar13,0,puVar23);
                }
                else {
                  iVar10 = puVar23[2];
                  uVar22 = *puVar23;
                  uVar18 = puVar23[1];
                  puVar23[2] = 0xfffffffd;
                  if (iVar10 == -3) {
                    FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_1014fb28);
                    /* WARNING: Does not return */
                    pcVar8 = (code *)invalidInstructionException();
                    (*pcVar8)();
                  }
                  local_34 = puVar23[9];
                  local_3c = *(undefined8 *)(puVar23 + 7);
                  local_4c = *(undefined8 *)(puVar23 + 3);
                  local_44 = *(undefined8 *)(puVar23 + 5);
                  *(undefined1 *)(puVar23 + 10) = 1;
                }
                *param_1 = uVar22;
                param_1[1] = uVar18;
                param_1[2] = iVar10;
                *(undefined8 *)(param_1 + 5) = local_44;
                *(undefined8 *)(param_1 + 3) = local_4c;
                param_1[9] = local_34;
                *(undefined8 *)(param_1 + 7) = local_3c;
              }
              LOCK();
              *piVar16 = *piVar16 + -1;
              UNLOCK();
              if (*piVar16 != 0) {
                return;
              }
              FUN_1011b0a0(piVar16);
              return;
            }
          }
          FUN_1013684d(pvVar15,pvVar20,&PTR_s_C__Users_runneradmin__rustup_too_1014fa24);
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
      }
      piVar16 = piVar16 + 3;
      pvVar15 = (PVOID)((int)pvVar15 + 1);
      iVar10 = iVar10 + -0xc;
    } while (iVar10 != 0);
  }
  *(undefined1 *)param_1 = *(undefined1 *)&param_3[0xd].Ptr;
  param_1[2] = 0xfffffffd;
  ReleaseSRWLockExclusive(param_3);
  return;
LAB_10053855:
  puVar23 = (undefined4 *)((int)param_3[0x33].Ptr + iVar10);
  uVar3 = *(undefined8 *)(puVar23 + 5);
  uVar22 = *puVar23;
  uVar18 = puVar23[1];
  iVar10 = puVar23[2];
  uVar4 = *(undefined8 *)(puVar23 + 7);
  uVar7 = puVar23[9];
  uVar5 = *(undefined8 *)(puVar23 + 3);
  puVar23[10] = (int)pvVar20 + (int)param_3[0x31].Ptr;
  if (*(char *)&param_3[0x27].Ptr == '\0') {
    AcquireSRWLockExclusive(param_3 + 0x20);
    if (*(char *)&param_3[0x27].Ptr == '\0') {
      pvVar20 = param_3[0x23].Ptr;
      if (pvVar20 != (PVOID)0x0) {
        puVar11 = FUN_100a8900();
        if (puVar11 == (undefined1 *)0x0) goto LAB_10053df7;
        piVar16 = param_3[0x22].Ptr;
        pvVar15 = (PVOID)0x0;
        iVar21 = (int)pvVar20 * 0xc;
        do {
          iVar17 = *piVar16;
          if (*(undefined1 **)(iVar17 + 0x14) != puVar11) {
            LOCK();
            bVar25 = *(int *)(iVar17 + 0xc) == 0;
            if (bVar25) {
              *(int *)(iVar17 + 0xc) = piVar16[1];
            }
            UNLOCK();
            if (bVar25) {
              if (piVar16[2] != 0) {
                *(int *)(iVar17 + 0x10) = piVar16[2];
              }
              FUN_10107860((char *)(*(int *)(iVar17 + 8) + 0x18));
              pvVar20 = param_3[0x23].Ptr;
              if (pvVar15 < pvVar20) {
                pvVar6 = param_3[0x22].Ptr;
                piVar16 = *(int **)((int)pvVar6 + (int)pvVar15 * 0xc);
                memmove((void *)((int)pvVar6 + (int)pvVar15 * 0xc),
                        (void *)((int)pvVar6 + (int)pvVar15 * 0xc + 0xc),
                        (~(uint)pvVar15 + (int)pvVar20) * 0xc);
                pvVar20 = (PVOID)((int)pvVar20 - 1);
                param_3[0x23].Ptr = pvVar20;
                if (piVar16 != (int *)0x0) {
                  LOCK();
                  *piVar16 = *piVar16 + -1;
                  UNLOCK();
                  if (*piVar16 == 0) {
                    FUN_1011b0a0(piVar16);
                  }
                  break;
                }
              }
              FUN_1013684d(pvVar15,pvVar20,&PTR_s_C__Users_runneradmin__rustup_too_1014fa24);
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
          }
          piVar16 = piVar16 + 3;
          pvVar15 = (PVOID)((int)pvVar15 + 1);
          iVar21 = iVar21 + -0xc;
        } while (iVar21 != 0);
      }
      pvVar20 = param_3[0x26].Ptr;
      puVar23 = param_3[0x25].Ptr;
      param_3[0x26].Ptr = (PVOID)0x0;
      if (pvVar20 != (PVOID)0x0) {
        puVar2 = puVar23 + (int)pvVar20 * 3;
        do {
          piVar16 = (int *)*puVar23;
          LOCK();
          bVar25 = piVar16[3] == 0;
          if (bVar25) {
            piVar16[3] = puVar23[1];
          }
          UNLOCK();
          if (bVar25) {
            FUN_10107860((char *)(piVar16[2] + 0x18));
            LOCK();
            *piVar16 = *piVar16 + -1;
            iVar21 = *piVar16;
            UNLOCK();
          }
          else {
            LOCK();
            *piVar16 = *piVar16 + -1;
            iVar21 = *piVar16;
            UNLOCK();
          }
          if (iVar21 == 0) {
            FUN_1011b0a0(piVar16);
          }
          puVar23 = puVar23 + 3;
        } while (puVar23 != puVar2);
      }
      if (param_3[0x23].Ptr == (PVOID)0x0) {
        bVar25 = param_3[0x26].Ptr == (PVOID)0x0;
      }
      else {
        bVar25 = false;
      }
      LOCK();
      *(bool *)&param_3[0x27].Ptr = bVar25;
      UNLOCK();
    }
    ReleaseSRWLockExclusive(param_3 + 0x20);
  }
  if (iVar10 != -3) {
    param_1[9] = uVar7;
    *(undefined8 *)(param_1 + 7) = uVar4;
    *(undefined8 *)(param_1 + 5) = uVar3;
    *(undefined8 *)(param_1 + 3) = uVar5;
    *param_1 = uVar22;
    param_1[1] = uVar18;
    param_1[2] = iVar10;
    return;
  }
  goto LAB_10053d6d;
LAB_100539fe:
  if (uVar14 == 0x1e) {
    pvVar20 = *(PVOID *)((int)lpMem + 0x5d0);
    if (pvVar20 == (PVOID)0x0) {
      iVar10 = 1;
      uVar19 = 0;
      uVar24 = 0;
      do {
        uVar12 = uVar19;
        uVar9 = uVar24;
        if (uVar24 < 7) {
          while (uVar9 != 0) {
            uVar12 = uVar12 - 1;
            uVar9 = uVar12;
          }
        }
        else {
          SwitchToThread();
        }
        uVar19 = uVar19 + iVar10;
        uVar24 = uVar24 + 1;
        iVar10 = iVar10 + 2;
        pvVar20 = *(PVOID *)((int)lpMem + 0x5d0);
      } while (pvVar20 == (PVOID)0x0);
    }
    iVar10 = *(int *)((int)pvVar20 + 0x5d0);
    param_3[1].Ptr = pvVar20;
    param_3->Ptr = (PVOID)(((uint)pvVar15 & 0xfffffffe) + 2 + (uint)(iVar10 != 0));
  }
  puVar23 = (undefined4 *)((int)lpMem + uVar14 * 0x30);
  if ((*(uint *)((int)lpMem + uVar14 * 0x30 + 0x28) & 1) == 0) {
    iVar10 = 1;
    uVar24 = 0;
    uVar19 = 0;
    do {
      uVar12 = uVar24;
      uVar9 = uVar19;
      if (uVar19 < 7) {
        while (uVar9 != 0) {
          uVar12 = uVar12 - 1;
          uVar9 = uVar12;
        }
      }
      else {
        SwitchToThread();
      }
      uVar24 = uVar24 + iVar10;
      uVar19 = uVar19 + 1;
      iVar10 = iVar10 + 2;
    } while ((puVar23[10] & 1) == 0);
  }
  iVar10 = uVar14 + 1;
  uVar3 = *(undefined8 *)(puVar23 + 5);
  uVar22 = puVar23[1];
  uVar18 = *puVar23;
  iVar21 = puVar23[2];
  uVar4 = *(undefined8 *)(puVar23 + 7);
  uVar7 = puVar23[9];
  uVar5 = *(undefined8 *)(puVar23 + 3);
  if (iVar10 == 0x1f) {
    iVar10 = 0;
    do {
      iVar17 = iVar10 * 0x30;
      if ((*(uint *)((int)lpMem + iVar17 + 0x28) & 2) == 0) {
        uVar19 = *(uint *)((int)lpMem + iVar17 + 0x28);
        do {
          puVar1 = (uint *)((int)lpMem + iVar17 + 0x28);
          LOCK();
          uVar14 = *puVar1;
          bVar25 = uVar19 == uVar14;
          if (bVar25) {
            *puVar1 = uVar19 | 4;
            uVar14 = uVar19;
          }
          UNLOCK();
          uVar19 = uVar14;
        } while (!bVar25);
        if ((uVar14 & 2) == 0) goto LAB_10053b79;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != 0x1e);
LAB_10053b69:
    pvVar13 = GetProcessHeap();
    HeapFree(pvVar13,0,lpMem);
  }
  else {
    uVar19 = puVar23[10];
    do {
      LOCK();
      uVar24 = puVar23[10];
      bVar25 = uVar19 == uVar24;
      if (bVar25) {
        puVar23[10] = uVar19 | 2;
        uVar24 = uVar19;
      }
      UNLOCK();
      uVar19 = uVar24;
    } while (!bVar25);
    if ((uVar24 & 4) != 0) {
      if (uVar14 < 0x1d) {
        do {
          iVar17 = iVar10 * 0x30;
          if ((*(uint *)((int)lpMem + iVar17 + 0x28) & 2) == 0) {
            uVar19 = *(uint *)((int)lpMem + iVar17 + 0x28);
            do {
              puVar1 = (uint *)((int)lpMem + iVar17 + 0x28);
              LOCK();
              uVar14 = *puVar1;
              bVar25 = uVar19 == uVar14;
              if (bVar25) {
                *puVar1 = uVar19 | 4;
                uVar14 = uVar19;
              }
              UNLOCK();
              uVar19 = uVar14;
            } while (!bVar25);
            if ((uVar14 & 2) == 0) goto LAB_10053b79;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 != 0x1e);
      }
      goto LAB_10053b69;
    }
  }
LAB_10053b79:
  if (iVar21 != -3) {
    param_1[9] = uVar7;
    *(undefined8 *)(param_1 + 7) = uVar4;
    *(undefined8 *)(param_1 + 5) = uVar3;
    *(undefined8 *)(param_1 + 3) = uVar5;
    *param_1 = uVar18;
    param_1[1] = uVar22;
    param_1[2] = iVar21;
    return;
  }
LAB_10053d6d:
  *(undefined1 *)param_1 = 1;
LAB_10053d74:
  param_1[2] = 0xfffffffd;
  return;
}
