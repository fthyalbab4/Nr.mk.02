// rea decompile_all
// name: FUN_1002b500
// address: 0x1002b500
// body: available
// range: 0x1002b500-0x1002b5ec inclusive
// range: 0x1002b5f0-0x1002b65c inclusive
// range: 0x1002b660-0x1002b933 inclusive
// range: 0x1002b940-0x1002ba04 inclusive
// range: 0x1002ba10-0x1002bac8 inclusive
// range: 0x1002bad0-0x1002bb3e inclusive
// range: 0x1002bb40-0x1002bb76 inclusive
// range: 0x1002bb80-0x1002bb8e inclusive
// range: 0x1002bb90-0x1002bbf9 inclusive
// range: 0x1002bc00-0x1002bcbc inclusive
// range: 0x1002bcc0-0x1002bd2e inclusive
// range: 0x1002bd30-0x1002bd66 inclusive
// range: 0x1002bd70-0x1002bd9b inclusive
// range: 0x1002bda0-0x1002bdb8 inclusive
// range: 0x1002bdc0-0x1002c177 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_1002b500(int param_1,int param_2,int param_3)

{
  PSRWLOCK pRVar1;
  char *pcVar2;
  byte bVar3;
  code *pcVar4;
  uint uVar5;
  PSRWLOCK pRVar6;
  char cVar7;
  LPVOID pvVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  HANDLE pvVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  HANDLE pvVar18;
  uint uVar19;
  uint uVar20;
  byte *pbVar21;
  int iVar22;
  LPVOID pvVar23;
  uint *puVar24;
  PVOID pvVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  bool bVar30;
  uint local_64;
  SIZE_T local_5c;
  int local_44;
  int *local_40;
  int local_3c;
  PSRWLOCK local_38;
  LPVOID pvStack_34;
  uint local_30;
  undefined4 uStack_2c;
  int *local_24;
  uint local_20;
  undefined4 *local_1c;
  undefined4 local_18;

  pvVar8 = FUN_10107380(0,0x140);
  if (pvVar8 == (LPVOID)0x0) {
LAB_1002c13c:
    FUN_1013679e(0x40,0x100);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar27 = (uint)pvVar8 & 0xffffffc0;
  *(LPVOID *)(uVar27 + 0x3c) = pvVar8;
  *(undefined4 *)(uVar27 + 0x40) = 0;
  *(undefined4 *)(uVar27 + 0x44) = 0;
  *(undefined4 *)(uVar27 + 0x80) = 0;
  *(undefined4 *)(uVar27 + 0x84) = 0;
  *(undefined4 *)(uVar27 + 0xc0) = 0;
  *(undefined4 *)(uVar27 + 0xc4) = 0;
  *(undefined4 *)(uVar27 + 200) = 4;
  *(undefined4 *)(uVar27 + 0xcc) = 0;
  *(undefined4 *)(uVar27 + 0xd0) = 0;
  *(undefined4 *)(uVar27 + 0xd4) = 4;
  *(undefined4 *)(uVar27 + 0xd8) = 0;
  *(undefined1 *)(uVar27 + 0xdc) = 1;
  *(undefined4 *)(uVar27 + 0x100) = 1;
  *(undefined4 *)(uVar27 + 0x104) = 1;
  *(undefined1 *)(uVar27 + 0x108) = 0;
  LOCK();
  piVar13 = (int *)(uVar27 + 0x104);
  *piVar13 = *piVar13 + -1;
  UNLOCK();
  if (*piVar13 == 0) {
    puVar24 = (uint *)(uVar27 + 0x80);
    LOCK();
    uVar9 = *puVar24;
    *puVar24 = *puVar24 | 1;
    UNLOCK();
    if ((uVar9 & 1) == 0) {
      uVar9 = *puVar24;
      uVar28 = 0;
      if ((~uVar9 & 0x3e) == 0) {
        iVar22 = 1;
        uVar28 = 0;
        local_64 = 0;
        do {
          uVar9 = local_64;
          uVar20 = uVar28;
          if (uVar28 < 7) {
            while (uVar20 != 0) {
              uVar9 = uVar9 - 1;
              uVar20 = uVar9;
            }
          }
          else {
            SwitchToThread();
          }
          uVar9 = *puVar24;
          local_64 = local_64 + iVar22;
          uVar28 = uVar28 + 1;
          iVar22 = iVar22 + 2;
        } while ((~uVar9 & 0x3e) == 0);
      }
      uVar20 = *(uint *)(uVar27 + 0x40);
      LOCK();
      pvVar8 = *(LPVOID *)(uVar27 + 0x44);
      *(int *)(uVar27 + 0x44) = 0;
      UNLOCK();
      uVar10 = uVar20 >> 1;
      if (pvVar8 == (LPVOID)0x0 && uVar10 != uVar9 >> 1) {
        iVar22 = uVar28 * 2 + 1;
        uVar19 = uVar28 * uVar28;
        do {
          uVar11 = uVar19;
          uVar5 = uVar28;
          if (uVar28 < 7) {
            while (uVar5 != 0) {
              uVar11 = uVar11 - 1;
              uVar5 = uVar11;
            }
          }
          else {
            SwitchToThread();
          }
          uVar19 = uVar19 + iVar22;
          uVar28 = uVar28 + 1;
          iVar22 = iVar22 + 2;
          LOCK();
          pvVar8 = *(LPVOID *)(uVar27 + 0x44);
          *(int *)(uVar27 + 0x44) = 0;
          UNLOCK();
        } while (pvVar8 == (LPVOID)0x0);
      }
      while (uVar10 != uVar9 >> 1) {
        uVar10 = uVar10 & 0x1f;
        if (uVar10 == 0x1f) {
          if (*(int *)((int)pvVar8 + 0xf8) == 0) {
            iVar22 = 1;
            uVar10 = 0;
            uVar28 = 0;
            do {
              uVar19 = uVar10;
              uVar11 = uVar28;
              if (uVar28 < 7) {
                while (uVar11 != 0) {
                  uVar19 = uVar19 - 1;
                  uVar11 = uVar19;
                }
              }
              else {
                SwitchToThread();
              }
              uVar10 = uVar10 + iVar22;
              uVar28 = uVar28 + 1;
              iVar22 = iVar22 + 2;
            } while (*(int *)((int)pvVar8 + 0xf8) == 0);
          }
          pvVar23 = *(LPVOID *)((int)pvVar8 + 0xf8);
          pvVar12 = GetProcessHeap();
          HeapFree(pvVar12,0,pvVar8);
          pvVar8 = pvVar23;
        }
        else if ((*(uint *)((int)pvVar8 + uVar10 * 8) & 1) == 0) {
          iVar22 = 1;
          uVar28 = 0;
          uVar19 = 0;
          do {
            uVar11 = uVar28;
            uVar5 = uVar19;
            if (uVar19 < 7) {
              while (uVar5 != 0) {
                uVar11 = uVar11 - 1;
                uVar5 = uVar11;
              }
            }
            else {
              SwitchToThread();
            }
            uVar28 = uVar28 + iVar22;
            uVar19 = uVar19 + 1;
            iVar22 = iVar22 + 2;
          } while ((*(uint *)((int)pvVar8 + uVar10 * 8) & 1) == 0);
        }
        uVar20 = uVar20 + 2;
        uVar10 = uVar20 >> 1;
      }
      if (pvVar8 != (LPVOID)0x0) {
        pvVar12 = GetProcessHeap();
        HeapFree(pvVar12,0,pvVar8);
      }
      *(uint *)(uVar27 + 0x40) = uVar20 & 0xfffffffe;
    }
    LOCK();
    cVar7 = *(char *)(uVar27 + 0x108);
    *(char *)(uVar27 + 0x108) = '\x01';
    UNLOCK();
    if (cVar7 != '\0') {
      uVar9 = *(uint *)(uVar27 + 0x80);
      pvVar8 = *(LPVOID *)(uVar27 + 0x44);
      for (uVar28 = *(uint *)(uVar27 + 0x40) & 0xfffffffe; uVar28 != (uVar9 & 0xfffffffe);
          uVar28 = uVar28 + 2) {
        pvVar23 = pvVar8;
        if ((~uVar28 & 0x3e) == 0) {
          pvVar23 = *(LPVOID *)((int)pvVar8 + 0xf8);
          pvVar12 = GetProcessHeap();
          HeapFree(pvVar12,0,pvVar8);
        }
        pvVar8 = pvVar23;
      }
      if (pvVar8 != (LPVOID)0x0) {
        pvVar12 = GetProcessHeap();
        HeapFree(pvVar12,0,pvVar8);
      }
      FUN_100a8860((int *)(uVar27 + 0xc4));
      pvVar8 = *(LPVOID *)(uVar27 + 0x3c);
      pvVar12 = GetProcessHeap();
      HeapFree(pvVar12,0,pvVar8);
    }
  }
  piVar13 = FUN_10107380(0,0x14);
  if (piVar13 == (int *)0x0) {
    FUN_1013679e(4,0x14);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *piVar13 = 1;
  piVar13[1] = 1;
  piVar13[2] = 0;
  piVar13[3] = param_2;
  piVar13[4] = param_3;
  pvVar8 = FUN_10107380(0,0x140);
  if (pvVar8 == (LPVOID)0x0) goto LAB_1002c13c;
  uVar9 = (uint)pvVar8 & 0xffffffc0;
  pRVar1 = (PSRWLOCK)(uVar9 + 0x40);
  *(LPVOID *)(uVar9 + 0x3c) = pvVar8;
  *(undefined4 *)(uVar9 + 0x40) = 0;
  *(undefined4 *)(uVar9 + 0x44) = 0;
  *(undefined4 *)(uVar9 + 0x80) = 0;
  *(undefined4 *)(uVar9 + 0x84) = 0;
  *(undefined4 *)(uVar9 + 0xc0) = 0;
  *(undefined4 *)(uVar9 + 0xc4) = 0;
  *(undefined4 *)(uVar9 + 200) = 4;
  *(undefined4 *)(uVar9 + 0xcc) = 0;
  *(undefined4 *)(uVar9 + 0xd0) = 0;
  *(undefined4 *)(uVar9 + 0xd4) = 4;
  *(undefined4 *)(uVar9 + 0xd8) = 0;
  *(undefined1 *)(uVar9 + 0xdc) = 1;
  *(undefined4 *)(uVar9 + 0x100) = 1;
  *(undefined4 *)(uVar9 + 0x104) = 1;
  *(undefined1 *)(uVar9 + 0x108) = 0;
  pvVar12 = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCWSTR)0x0);
  if (0xfffffffd < (int)pvVar12 - 1U) {
    pvVar8 = FUN_10107380(0,0x22);
    if (pvVar8 == (LPVOID)0x0) {
      FUN_101366bc(1);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    piVar14 = (int *)(uVar9 + 0x104);
    memcpy(pvVar8,"Failed to create wakeup semaphore.",0x22);
    *(undefined4 *)(param_1 + 8) = 1000000000;
    *(undefined4 *)(param_1 + 0xc) = 0x22;
    *(LPVOID *)(param_1 + 0x10) = pvVar8;
    *(undefined4 *)(param_1 + 0x14) = 0x22;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 4;
    *(undefined4 *)(param_1 + 0x20) = 0;
    LOCK();
    *piVar14 = *piVar14 + -1;
    UNLOCK();
    if (*piVar14 == 0) {
      puVar24 = (uint *)(uVar9 + 0x80);
      LOCK();
      uVar28 = *puVar24;
      *puVar24 = *puVar24 | 1;
      UNLOCK();
      if ((uVar28 & 1) == 0) {
        uVar28 = *puVar24;
        uVar20 = 0;
        if ((~uVar28 & 0x3e) == 0) {
          iVar22 = 1;
          uVar10 = 0;
          uVar20 = 0;
          do {
            uVar28 = uVar10;
            uVar19 = uVar20;
            if (uVar20 < 7) {
              while (uVar19 != 0) {
                uVar28 = uVar28 - 1;
                uVar19 = uVar28;
              }
            }
            else {
              SwitchToThread();
            }
            uVar28 = *puVar24;
            uVar10 = uVar10 + iVar22;
            uVar20 = uVar20 + 1;
            iVar22 = iVar22 + 2;
          } while ((~uVar28 & 0x3e) == 0);
        }
        pvVar25 = pRVar1->Ptr;
        LOCK();
        pvVar8 = *(LPVOID *)(uVar9 + 0x44);
        *(int *)(uVar9 + 0x44) = 0;
        UNLOCK();
        uVar10 = (uint)pvVar25 >> 1;
        if (pvVar8 == (LPVOID)0x0 && uVar10 != uVar28 >> 1) {
          iVar22 = uVar20 * 2 + 1;
          uVar19 = uVar20 * uVar20;
          do {
            uVar11 = uVar19;
            uVar5 = uVar20;
            if (uVar20 < 7) {
              while (uVar5 != 0) {
                uVar11 = uVar11 - 1;
                uVar5 = uVar11;
              }
            }
            else {
              SwitchToThread();
            }
            uVar19 = uVar19 + iVar22;
            uVar20 = uVar20 + 1;
            iVar22 = iVar22 + 2;
            LOCK();
            pvVar8 = *(LPVOID *)(uVar9 + 0x44);
            *(int *)(uVar9 + 0x44) = 0;
            UNLOCK();
          } while (pvVar8 == (LPVOID)0x0);
        }
        while (uVar10 != uVar28 >> 1) {
          if ((uVar10 & 0x1f) == 0x1f) {
            if (*(int *)((int)pvVar8 + 0x5d0) == 0) {
              iVar22 = 1;
              uVar10 = 0;
              uVar20 = 0;
              do {
                uVar19 = uVar10;
                uVar11 = uVar20;
                if (uVar20 < 7) {
                  while (uVar11 != 0) {
                    uVar19 = uVar19 - 1;
                    uVar11 = uVar19;
                  }
                }
                else {
                  SwitchToThread();
                }
                uVar10 = uVar10 + iVar22;
                uVar20 = uVar20 + 1;
                iVar22 = iVar22 + 2;
              } while (*(int *)((int)pvVar8 + 0x5d0) == 0);
            }
            pvVar23 = *(LPVOID *)((int)pvVar8 + 0x5d0);
            pvVar12 = GetProcessHeap();
            HeapFree(pvVar12,0,pvVar8);
            pvVar8 = pvVar23;
          }
          else {
            iVar22 = (uVar10 & 0x1f) * 0x30;
            pcVar2 = (char *)((int)pvVar8 + iVar22);
            if ((*(uint *)((int)pvVar8 + iVar22 + 0x28) & 1) == 0) {
              iVar22 = 1;
              uVar20 = 0;
              uVar10 = 0;
              do {
                uVar19 = uVar20;
                uVar11 = uVar10;
                if (uVar10 < 7) {
                  while (uVar11 != 0) {
                    uVar19 = uVar19 - 1;
                    uVar11 = uVar19;
                  }
                }
                else {
                  SwitchToThread();
                }
                uVar20 = uVar20 + iVar22;
                uVar10 = uVar10 + 1;
                iVar22 = iVar22 + 2;
              } while ((*(uint *)(pcVar2 + 0x28) & 1) == 0);
            }
            if (*(int *)(pcVar2 + 8) == -2) {
              if (*(int *)(pcVar2 + 0xc) != 0) {
                pvVar23 = *(LPVOID *)(pcVar2 + 0x10);
                pvVar12 = GetProcessHeap();
                HeapFree(pvVar12,0,pvVar23);
              }
            }
            else {
              FUN_100adf80(pcVar2);
            }
          }
          pvVar25 = (PVOID)((int)pvVar25 + 2);
          uVar10 = (uint)pvVar25 >> 1;
        }
        if (pvVar8 != (LPVOID)0x0) {
          pvVar12 = GetProcessHeap();
          HeapFree(pvVar12,0,pvVar8);
        }
        pRVar1->Ptr = (PVOID)((uint)pvVar25 & 0xfffffffe);
      }
      LOCK();
      cVar7 = *(char *)(uVar9 + 0x108);
      *(char *)(uVar9 + 0x108) = '\x01';
      UNLOCK();
      if (cVar7 != '\0') {
        local_38 = pRVar1;
        FUN_100af720((int *)&local_38);
      }
    }
    FUN_100af300(1,pRVar1);
    FUN_100aee70(1,(PSRWLOCK)(uVar27 + 0x40));
    LOCK();
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (*piVar13 != 0) {
      return;
    }
    FUN_100aedf0(piVar13,&PTR_FUN_1013f6fc);
    return;
  }
  pvVar8 = FUN_10107380(0,0x140);
  if (pvVar8 == (LPVOID)0x0) goto LAB_1002c13c;
  uVar9 = (uint)pvVar8 & 0xffffffc0;
  *(LPVOID *)(uVar9 + 0x3c) = pvVar8;
  *(undefined4 *)(uVar9 + 0x40) = 0;
  *(undefined4 *)(uVar9 + 0x44) = 0;
  *(undefined4 *)(uVar9 + 0x80) = 0;
  *(undefined4 *)(uVar9 + 0x84) = 0;
  *(undefined4 *)(uVar9 + 0xc0) = 0;
  *(undefined4 *)(uVar9 + 0xc4) = 0;
  *(undefined4 *)(uVar9 + 200) = 4;
  *(undefined4 *)(uVar9 + 0xcc) = 0;
  *(undefined4 *)(uVar9 + 0xd0) = 0;
  *(undefined4 *)(uVar9 + 0xd4) = 4;
  *(undefined4 *)(uVar9 + 0xd8) = 0;
  *(undefined1 *)(uVar9 + 0xdc) = 1;
  *(undefined4 *)(uVar9 + 0x100) = 1;
  *(undefined4 *)(uVar9 + 0x104) = 1;
  *(undefined1 *)(uVar9 + 0x108) = 0;
  local_1c = FUN_10107380(0,0x16);
  if (local_1c == (undefined4 *)0x0) {
    FUN_101366bc(1);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  iVar29 = uVar9 + 0x40;
  *(undefined2 *)(local_1c + 5) = 0x706f;
  local_1c[4] = 0x6f6c2073;
  local_1c[3] = 0x776f646e;
  local_1c[2] = 0x69772073;
  local_1c[1] = 0x722d7966;
  *local_1c = 0x69746f6e;
  LOCK();
  piVar14 = (int *)(uVar9 + 0x100);
  iVar22 = *piVar14;
  *piVar14 = *piVar14 + 1;
  UNLOCK();
  if (*piVar14 == 0 || SCARRY4(iVar22,1) != *piVar14 < 0) {
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  local_20 = 0x16;
  local_18 = 0x16;
  if (DAT_101632f8 != 0) {
    local_5c = DAT_101632f8 - 1;
    goto LAB_1002be9c;
  }
  FUN_1010c370((undefined8 *)&local_38,0x10156c2c,0xe);
  pvVar8 = pvStack_34;
  pRVar6 = local_38;
  if (local_38 == (PSRWLOCK)0xffffffff) {
    local_5c = 0x200000;
  }
  else {
    FUN_10095490(&local_44,(int)pvStack_34,local_30);
    if ((local_44 == 1) || (local_3c == 0)) {
LAB_1002be61:
      local_5c = 0x200000;
    }
    else {
      if (local_3c == 1) {
        cVar7 = (char)*local_40;
        if ((cVar7 == '+') || (cVar7 == '-')) goto LAB_1002be61;
      }
      else {
        cVar7 = (char)*local_40;
      }
      local_5c = 0;
      uVar9 = local_3c - (uint)(cVar7 == '+');
      pbVar21 = (byte *)((int)local_40 + (uint)(cVar7 == '+'));
      if (8 < uVar9) {
        while( true ) {
          bVar30 = uVar9 == 0;
          uVar9 = uVar9 - 1;
          if (bVar30) goto joined_r0x1002be6b;
          uVar28 = (uint)((ulonglong)local_5c * 10);
          if ((int)((ulonglong)local_5c * 10 >> 0x20) != 0) break;
          uVar20 = *pbVar21 - 0x30;
          local_5c = uVar28 + uVar20;
          if ((9 < uVar20) || (pbVar21 = pbVar21 + 1, CARRY4(uVar28,uVar20))) break;
        }
        goto LAB_1002be61;
      }
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        bVar3 = *pbVar21;
        if (9 < bVar3 - 0x30) {
          local_5c = 0x200000;
          break;
        }
        pbVar21 = pbVar21 + 1;
        local_5c = (bVar3 - 0x30) + local_5c * 10;
      }
    }
joined_r0x1002be6b:
    if (pRVar6 != (PSRWLOCK)0x0) {
      pvVar18 = GetProcessHeap();
      HeapFree(pvVar18,0,pvVar8);
    }
  }
  DAT_101632f8 = local_5c + 1;
LAB_1002be9c:
  uVar9 = (uint)DAT_10163398;
  uVar28 = DAT_10163398._4_4_;
  do {
    if ((uVar9 & uVar28) == 0xffffffff) {
      FUN_1013c0e0();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    iVar22 = uVar9 + 1;
    iVar26 = uVar28 + (0xfffffffe < uVar9);
    LOCK();
    bVar30 = CONCAT44(uVar28,uVar9) == DAT_10163398;
    if (bVar30) {
      DAT_10163398 = CONCAT44(iVar26,iVar22);
    }
    else {
      uVar28 = (uint)((ulonglong)DAT_10163398 >> 0x20);
      uVar9 = (uint)DAT_10163398;
    }
    UNLOCK();
  } while (!bVar30);
  piVar14 = (int *)FUN_1010c9e0(iVar22,iVar26,&local_20);
  local_24 = piVar14;
  FUN_1011ae10((uint *)&local_38,&local_24);
  piVar15 = FUN_10107380(0,0x18);
  if (piVar15 == (int *)0x0) {
    FUN_1013679e(4,0x18);
  }
  else {
    *piVar15 = 1;
    piVar15[1] = 1;
    piVar15[2] = 0;
    piVar15[3] = 0;
    LOCK();
    iVar22 = *piVar15;
    *piVar15 = *piVar15 + 1;
    UNLOCK();
    if (*piVar15 != 0 && SCARRY4(iVar22,1) == *piVar15 < 0) {
      puVar16 = FUN_10107380(0,0x48);
      if (puVar16 == (undefined4 *)0x0) {
        FUN_1013679e(8,0x48);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      *puVar16 = 1;
      puVar16[1] = iVar29;
      puVar16[2] = 1;
      puVar16[3] = iVar29;
      puVar16[4] = 1;
      puVar16[5] = (PSRWLOCK)(uVar27 + 0x40);
      puVar16[6] = 1;
      puVar16[7] = pRVar1;
      puVar16[8] = piVar13;
      puVar16[9] = &PTR_FUN_1013f6fc;
      puVar16[0xb] = 0;
      puVar16[10] = pvVar12;
      *(ulonglong *)(puVar16 + 0xc) = CONCAT44(pvStack_34,local_38);
      *(ulonglong *)(puVar16 + 0xe) = CONCAT44(uStack_2c,local_30);
      puVar16[0x10] = piVar15;
      LOCK();
      iVar22 = *piVar14;
      *piVar14 = *piVar14 + 1;
      UNLOCK();
      if (*piVar14 != 0 && SCARRY4(iVar22,1) == *piVar14 < 0) {
        puVar17 = FUN_10107380(0,0xc);
        if (puVar17 != (undefined4 *)0x0) {
          *puVar17 = piVar14;
          puVar17[1] = puVar16;
          puVar17[2] = &PTR_LAB_1014f66c;
          FUN_1010f5d0((undefined1 *)&local_44,local_5c,puVar17);
          if ((char)local_44 == -1) {
            CloseHandle(local_40);
            LOCK();
            *piVar14 = *piVar14 + -1;
            UNLOCK();
            if (*piVar14 == 0) {
              FUN_10107640(piVar14);
            }
            LOCK();
            *piVar15 = *piVar15 + -1;
            UNLOCK();
            if (*piVar15 == 0) {
              FUN_1011afa0(piVar15);
            }
          }
          else {
            LOCK();
            *piVar15 = *piVar15 + -1;
            UNLOCK();
            if (*piVar15 == 0) {
              FUN_1011afa0(piVar15);
              LOCK();
              *piVar14 = *piVar14 + -1;
              iVar22 = *piVar14;
              UNLOCK();
            }
            else {
              LOCK();
              *piVar14 = *piVar14 + -1;
              iVar22 = *piVar14;
              UNLOCK();
            }
            if (iVar22 == 0) {
              FUN_10107640(piVar14);
            }
            if ((char)local_44 == '\x03') {
              puVar16 = (undefined4 *)local_40[1];
              pvVar8 = (LPVOID)*local_40;
              if ((code *)*puVar16 != (code *)0x0) {
                (*(code *)*puVar16)(pvVar8);
              }
              if (puVar16[1] != 0) {
                if (8 < (uint)puVar16[2]) {
                  pvVar8 = *(LPVOID *)((int)pvVar8 + -4);
                }
                pvVar18 = GetProcessHeap();
                HeapFree(pvVar18,0,pvVar8);
              }
              pvVar18 = GetProcessHeap();
              HeapFree(pvVar18,0,local_40);
            }
          }
          *(undefined4 *)(param_1 + 0xc) = 1;
          *(int *)(param_1 + 0x10) = iVar29;
          *(undefined4 *)(param_1 + 0x14) = 1;
          *(PSRWLOCK *)(param_1 + 0x18) = pRVar1;
          *(HANDLE *)(param_1 + 0x1c) = pvVar12;
          *(undefined4 *)(param_1 + 8) = 0xfffffffe;
          return;
        }
        FUN_1013679e(4,0xc);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}
