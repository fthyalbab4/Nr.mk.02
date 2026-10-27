// rea decompile_all
// name: FUN_100b1220
// address: 0x100b1220
// body: available
// range: 0x100b1220-0x100b1264 inclusive
// range: 0x100b1270-0x100b12b6 inclusive
// range: 0x100b12c0-0x100b146e inclusive
// range: 0x100b1470-0x100b19ce inclusive
// range: 0x100b19d0-0x100b1a1a inclusive
// range: 0x100b1a20-0x100b1a66 inclusive
// range: 0x100b1a70-0x100b1d9d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x100b1411) */
/* WARNING: Removing unreachable block (ram,0x100b1cb6) */
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_100b1220(int *param_1,int param_2,PSRWLOCK param_3,uint *param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  int iVar3;
  PVOID pvVar4;
  undefined8 *puVar5;
  code *pcVar6;
  PSRWLOCK pRVar7;
  LPVOID lpMem;
  LPVOID pvVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  HANDLE pvVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  undefined8 *******pppppppuVar16;
  PVOID pvVar17;
  uint uVar18;
  PVOID pvVar19;
  LPVOID pvVar20;
  bool bVar21;
  uint local_f8;
  undefined8 *******local_f0;
  PSRWLOCK local_ec;
  LPVOID pvStack_e8;
  int iStack_e4;
  int iStack_e0;
  undefined8 ******ppppppuStack_dc;
  undefined4 uStack_d8;
  uint local_d4;
  undefined4 *puStack_d0;
  PSRWLOCK local_cc;
  undefined1 *puStack_c8;
  PSRWLOCK local_c4;
  undefined8 *******local_c0;
  PSRWLOCK pRStack_bc;
  LPVOID pvStack_b8;
  undefined4 *puStack_b4;
  PSRWLOCK local_b0;
  undefined8 ******ppppppuStack_ac;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 *local_a0;
  PSRWLOCK local_9c;
  undefined1 *puStack_98;
  PSRWLOCK local_94;
  int *local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *******local_68;
  PSRWLOCK local_64;
  LPVOID local_60;
  int iStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 *local_30;
  undefined1 local_28 [8];
  undefined4 local_20;

  local_8c = param_1;
  if (param_2 == 0) {
    local_60 = (LPVOID)0xffffffff;
    local_b0 = (PSRWLOCK)0x0;
    local_c0 = (undefined8 *******)0x0;
    pRStack_bc = (PSRWLOCK)0x0;
    pvStack_b8 = (LPVOID)0x0;
    puStack_b4 = (undefined4 *)0x0;
    pvVar17 = param_3[0x10].Ptr;
    pvVar19 = param_3[0x32].Ptr;
    if (((uint)pvVar19 & (uint)pvVar17) == 0) {
LAB_100b196f:
      uVar18 = 0;
      do {
        pvVar20 = local_60;
        pRVar7 = local_64;
        pppppppuVar16 = local_68;
        uVar12 = (int)pvVar19 - 1U & (uint)pvVar17;
        pvVar19 = *(PVOID *)((int)param_3[0x33].Ptr + uVar12 * 0x28 + 0x20);
        if (pvVar17 == pvVar19) {
          if ((PVOID)(uVar12 + 1) < param_3[0x30].Ptr) {
            LOCK();
            bVar21 = pvVar17 == param_3[0x10].Ptr;
            if (bVar21) {
              param_3[0x10].Ptr = (PVOID)((int)pvVar17 + 1);
            }
            UNLOCK();
          }
          else {
            LOCK();
            bVar21 = pvVar17 == param_3[0x10].Ptr;
            if (bVar21) {
              param_3[0x10].Ptr =
                   (PVOID)((-(int)param_3[0x31].Ptr & (uint)pvVar17) + (int)param_3[0x31].Ptr);
            }
            UNLOCK();
          }
          if (bVar21) {
            pRStack_bc = (PSRWLOCK)((int)pvVar17 + 1);
            local_c0 = (undefined8 *******)((int)param_3[0x33].Ptr + uVar12 * 0x28);
            *(undefined8 *)(local_c0 + 6) = *(undefined8 *)(param_4 + 6);
            *(undefined8 *)(local_c0 + 4) = *(undefined8 *)(param_4 + 4);
            uVar2 = *(undefined8 *)param_4;
            *(undefined8 *)(local_c0 + 2) = *(undefined8 *)(param_4 + 2);
            *(undefined8 *)local_c0 = uVar2;
            local_c0[8] = (undefined8 ******)pRStack_bc;
            FUN_100a8a60(param_3 + 0x28);
            goto LAB_100b1c56;
          }
          uVar12 = 6;
          if (uVar18 < 6) {
            uVar12 = uVar18;
          }
          if (uVar18 != 0) {
            iVar15 = uVar12 * uVar12;
            do {
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
            goto LAB_100b1aa0;
          }
          uVar18 = 1;
        }
        else if ((int)pvVar19 + (int)param_3[0x31].Ptr == (int)pvVar17 + 1U) {
          if ((PVOID)((int)param_3->Ptr + (int)param_3[0x31].Ptr) == pvVar17) goto LAB_100b1ac5;
          uVar12 = 6;
          if (uVar18 < 6) {
            uVar12 = uVar18;
          }
          if (uVar18 == 0) {
            uVar18 = 1;
          }
          else {
            iVar15 = uVar12 * uVar12;
            do {
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
            uVar18 = uVar18 + 1;
          }
        }
        else if (uVar18 < 7) {
          if (uVar18 != 0) {
            iVar15 = uVar18 * uVar18;
            do {
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
          }
LAB_100b1aa0:
          uVar18 = uVar18 + 1;
        }
        else {
          SwitchToThread();
          uVar18 = uVar18 + 1;
        }
        pvVar17 = param_3[0x10].Ptr;
        pvVar19 = param_3[0x32].Ptr;
        if (((uint)pvVar19 & (uint)pvVar17) != 0) break;
      } while( true );
    }
LAB_100b13c8:
    pvStack_e8 = (LPVOID)*param_4;
    if (pvStack_e8 == (LPVOID)0xffffffff) goto LAB_100b1c56;
    local_cc = (PSRWLOCK)param_4[7];
    local_d4 = (uint)*(undefined8 *)(param_4 + 5);
    puStack_d0 = (undefined4 *)((ulonglong)*(undefined8 *)(param_4 + 5) >> 0x20);
    ppppppuStack_dc = (undefined8 ******)*(undefined8 *)(param_4 + 3);
    uStack_d8 = (undefined4)((ulonglong)*(undefined8 *)(param_4 + 3) >> 0x20);
    iStack_e4 = (int)*(undefined8 *)(param_4 + 1);
    iStack_e0 = (int)((ulonglong)*(undefined8 *)(param_4 + 1) >> 0x20);
    pppppppuVar16 = (undefined8 *******)0x1;
  }
  else {
    if (param_2 == 1) {
      pvVar17 = param_3[0x10].Ptr;
      pvVar20 = param_3[0x11].Ptr;
      if (((uint)pvVar17 & 1) == 0) {
        local_f8 = 0;
        lpMem = (LPVOID)0x0;
        do {
          uVar18 = (uint)pvVar17 >> 1 & 0x1f;
          if (uVar18 == 0x1f) {
            if (local_f8 < 7) {
              if (local_f8 != 0) {
                iVar15 = local_f8 * local_f8;
                do {
                  iVar15 = iVar15 + -1;
                } while (iVar15 != 0);
              }
            }
            else {
              SwitchToThread();
            }
            local_f8 = local_f8 + 1;
            pvVar8 = lpMem;
          }
          else {
            if ((uVar18 == 0x1e && lpMem == (LPVOID)0x0) &&
               (lpMem = FUN_10107380(8,0x4e0), lpMem == (LPVOID)0x0)) {
LAB_100b1c68:
              FUN_1013679e(8,0x4e0);
                    /* WARNING: Does not return */
              pcVar6 = (code *)invalidInstructionException();
              (*pcVar6)();
            }
            if (pvVar20 == (LPVOID)0x0) {
              pvVar8 = FUN_10107380(8,0x4e0);
              if (pvVar8 == (LPVOID)0x0) goto LAB_100b1c68;
              LOCK();
              bVar21 = param_3[0x11].Ptr == (PVOID)0x0;
              if (bVar21) {
                param_3[0x11].Ptr = pvVar8;
              }
              UNLOCK();
              if (!bVar21) {
                if (lpMem != (LPVOID)0x0) {
                  pvVar11 = GetProcessHeap();
                  HeapFree(pvVar11,0,lpMem);
                }
                goto LAB_100b1282;
              }
              param_3[1].Ptr = pvVar8;
              LOCK();
              bVar21 = pvVar17 == param_3[0x10].Ptr;
              if (bVar21) {
                param_3[0x10].Ptr = (PVOID)((int)pvVar17 + 2);
              }
              UNLOCK();
              pvVar20 = pvVar8;
            }
            else {
              LOCK();
              bVar21 = pvVar17 == param_3[0x10].Ptr;
              if (bVar21) {
                param_3[0x10].Ptr = (PVOID)((int)pvVar17 + 2);
              }
              UNLOCK();
            }
            if (bVar21) {
              if (uVar18 != 0x1e) goto LAB_100b1774;
              if (lpMem == (LPVOID)0x0) {
                FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_1014fb08);
                    /* WARNING: Does not return */
                pcVar6 = (code *)invalidInstructionException();
                (*pcVar6)();
              }
              param_3[0x11].Ptr = lpMem;
              uVar18 = 0x1e;
              LOCK();
              param_3[0x10].Ptr = (PVOID)((int)param_3[0x10].Ptr + 2);
              UNLOCK();
              *(LPVOID *)((int)pvVar20 + 0x4d8) = lpMem;
              goto LAB_100b181d;
            }
            uVar18 = 6;
            if (local_f8 < 6) {
              uVar18 = local_f8;
            }
            pvVar8 = lpMem;
            if (local_f8 == 0) {
              local_f8 = 1;
            }
            else {
              iVar15 = uVar18 * uVar18;
              do {
                iVar15 = iVar15 + -1;
              } while (iVar15 != 0);
              local_f8 = local_f8 + 1;
            }
          }
LAB_100b1282:
          pvVar17 = param_3[0x10].Ptr;
          pvVar20 = param_3[0x11].Ptr;
          lpMem = pvVar8;
        } while (((uint)pvVar17 & 1) == 0);
        pvVar20 = (LPVOID)0x0;
        uVar18 = 0;
LAB_100b1774:
        if (lpMem != (LPVOID)0x0) {
          pvVar11 = GetProcessHeap();
          HeapFree(pvVar11,0,lpMem);
        }
        if (pvVar20 != (LPVOID)0x0) {
LAB_100b181d:
          *(undefined8 *)((int)pvVar20 + uVar18 * 0x28 + 0x18) = *(undefined8 *)(param_4 + 6);
          *(undefined8 *)((int)pvVar20 + uVar18 * 0x28 + 0x10) = *(undefined8 *)(param_4 + 4);
          uVar2 = *(undefined8 *)param_4;
          *(undefined8 *)((int)pvVar20 + uVar18 * 0x28 + 8) = *(undefined8 *)(param_4 + 2);
          *(undefined8 *)((int)pvVar20 + uVar18 * 0x28) = uVar2;
          LOCK();
          puVar1 = (uint *)((int)pvVar20 + uVar18 * 0x28 + 0x20);
          *puVar1 = *puVar1 | 1;
          UNLOCK();
          FUN_100a8a60(param_3 + 0x20);
          goto LAB_100b1c56;
        }
      }
      pvStack_e8 = (LPVOID)*param_4;
      if (pvStack_e8 == (LPVOID)0xffffffff) goto LAB_100b1c56;
      iStack_e4 = (int)*(undefined8 *)(param_4 + 1);
      iStack_e0 = (int)((ulonglong)*(undefined8 *)(param_4 + 1) >> 0x20);
      local_b0 = (PSRWLOCK)param_4[7];
      pvStack_b8 = (LPVOID)*(undefined8 *)(param_4 + 5);
      puStack_b4 = (undefined4 *)((ulonglong)*(undefined8 *)(param_4 + 5) >> 0x20);
      local_c0 = (undefined8 *******)*(undefined8 *)(param_4 + 3);
      pRStack_bc = (PSRWLOCK)((ulonglong)*(undefined8 *)(param_4 + 3) >> 0x20);
      goto LAB_100b18cf;
    }
    local_20 = 0xffffffff;
    local_30 = (undefined8 *)0x0;
    local_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    AcquireSRWLockExclusive(param_3);
    pvVar17 = param_3[9].Ptr;
    if (pvVar17 != (PVOID)0x0) {
      puVar9 = FUN_100a8900();
      if (puVar9 == (undefined1 *)0x0) {
        FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      pvVar19 = (PVOID)0x0;
      iVar15 = (int)pvVar17 * 0xc;
      piVar13 = param_3[8].Ptr;
      do {
        iVar3 = *piVar13;
        if (*(undefined1 **)(iVar3 + 0x14) != puVar9) {
          LOCK();
          bVar21 = *(int *)(iVar3 + 0xc) == 0;
          if (bVar21) {
            *(int *)(iVar3 + 0xc) = piVar13[1];
          }
          UNLOCK();
          if (bVar21) {
            if (piVar13[2] != 0) {
              *(int *)(iVar3 + 0x10) = piVar13[2];
            }
            FUN_10107860((char *)(*(int *)(iVar3 + 8) + 0x18));
            pvVar17 = param_3[9].Ptr;
            if (pvVar19 < pvVar17) {
              pvVar4 = param_3[8].Ptr;
              piVar13 = *(int **)((int)pvVar4 + (int)pvVar19 * 0xc);
              puVar5 = *(undefined8 **)((int)pvVar4 + (int)pvVar19 * 0xc + 8);
              memmove((void *)((int)pvVar4 + (int)pvVar19 * 0xc),
                      (void *)((int)pvVar4 + (int)pvVar19 * 0xc + 0xc),
                      (~(uint)pvVar19 + (int)pvVar17) * 0xc);
              pvVar17 = (PVOID)((int)pvVar17 - 1);
              param_3[9].Ptr = pvVar17;
              if (piVar13 != (int *)0x0) {
                local_30 = puVar5;
                ReleaseSRWLockExclusive(param_3);
                if (puVar5 == (undefined8 *)0x0) {
                  if (*param_4 != 0xffffffff) {
                    FUN_100b1da0(param_4);
                    FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_1014fb38);
                    /* WARNING: Does not return */
                    pcVar6 = (code *)invalidInstructionException();
                    (*pcVar6)();
                  }
                }
                else {
                  puVar5[3] = *(undefined8 *)(param_4 + 6);
                  puVar5[2] = *(undefined8 *)(param_4 + 4);
                  uVar2 = *(undefined8 *)param_4;
                  puVar5[1] = *(undefined8 *)(param_4 + 2);
                  *puVar5 = uVar2;
                  *(undefined1 *)(puVar5 + 4) = 1;
                }
                local_ec = (PSRWLOCK)0xffffffff;
                local_f0 = (undefined8 *******)0xffffffff;
                LOCK();
                *piVar13 = *piVar13 + -1;
                UNLOCK();
                if (*piVar13 == 0) {
                  FUN_1011b0a0(piVar13);
                }
                goto LAB_100b1887;
              }
            }
            FUN_1013684d(pvVar19,pvVar17,&PTR_s_C__Users_runneradmin__rustup_too_1014fa24);
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
        }
        piVar13 = piVar13 + 3;
        pvVar19 = (PVOID)((int)pvVar19 + 1);
        iVar15 = iVar15 + -0xc;
      } while (iVar15 != 0);
    }
    if (*(char *)&param_3[0xd].Ptr == '\0') {
      local_b0 = (PSRWLOCK)*(undefined8 *)(param_4 + 4);
      ppppppuStack_ac = (undefined8 ******)((ulonglong)*(undefined8 *)(param_4 + 4) >> 0x20);
      local_a0 = &local_40;
      local_a8 = (undefined4)*(undefined8 *)(param_4 + 6);
      uStack_a4 = (uint)((ulonglong)*(undefined8 *)(param_4 + 6) >> 0x20);
      local_c0 = (undefined8 *******)*(undefined8 *)param_4;
      pRStack_bc = (PSRWLOCK)((ulonglong)*(undefined8 *)param_4 >> 0x20);
      pvStack_b8 = (LPVOID)*(undefined8 *)(param_4 + 2);
      puStack_b4 = (undefined4 *)((ulonglong)*(undefined8 *)(param_4 + 2) >> 0x20);
      local_9c = param_3;
      local_94 = param_3;
      puStack_98 = local_28;
      puVar10 = FUN_100a89a0();
      pppppppuVar16 = local_c0;
      if (puVar10 == (undefined4 *)0x0) {
LAB_100b1930:
        FUN_10137c30(&local_f0,(int *)&local_c0);
        pvVar20 = pvStack_b8;
        param_3 = local_9c;
      }
      else {
        piVar13 = (int *)*puVar10;
        *puVar10 = 0;
        if (piVar13 == (int *)0x0) {
          piVar14 = (int *)FUN_1013c310();
          local_f0 = local_c0;
          local_c0 = (undefined8 *******)0xffffffff;
          if (local_f0 == (undefined8 *******)0xffffffff) goto LAB_100b1d62;
          iStack_e4 = (int)*(undefined8 *)(param_4 + 3);
          iStack_e0 = (int)((ulonglong)*(undefined8 *)(param_4 + 3) >> 0x20);
          local_d4 = param_4[7];
          local_ec = (PSRWLOCK)*(undefined8 *)(param_4 + 1);
          pvStack_e8 = (LPVOID)((ulonglong)*(undefined8 *)(param_4 + 1) >> 0x20);
          puStack_d0 = &local_40;
          ppppppuStack_dc = (undefined8 ******)*(undefined8 *)(param_4 + 5);
          uStack_d8 = (undefined4)((ulonglong)*(undefined8 *)(param_4 + 5) >> 0x20);
          local_cc = param_3;
          local_c4 = param_3;
          puStack_c8 = local_28;
          FUN_100b1df0(&local_68,(undefined8 *)&local_f0,piVar14);
          LOCK();
          *piVar14 = *piVar14 + -1;
          iVar15 = *piVar14;
          UNLOCK();
joined_r0x100b1d57:
          if (iVar15 == 0) {
            FUN_1011b0a0(piVar14);
          }
        }
        else {
          piVar13[3] = 0;
          piVar13[4] = 0;
          local_c0 = (undefined8 *******)0xffffffff;
          if (pppppppuVar16 == (undefined8 *******)0xffffffff) {
LAB_100b1d62:
            local_c0 = (undefined8 *******)0xffffffff;
            FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_1014f710);
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
          local_f0 = pppppppuVar16;
          iStack_e4 = (int)puStack_b4;
          iStack_e0 = (int)local_b0;
          local_ec = pRStack_bc;
          pvStack_e8 = pvStack_b8;
          local_d4 = uStack_a4;
          puStack_d0 = local_a0;
          local_c4 = local_94;
          ppppppuStack_dc = ppppppuStack_ac;
          uStack_d8 = local_a8;
          local_cc = local_9c;
          puStack_c8 = puStack_98;
          FUN_100b1df0(&local_68,(undefined8 *)&local_f0,piVar13);
          piVar14 = (int *)*puVar10;
          *puVar10 = piVar13;
          if (piVar14 != (int *)0x0) {
            LOCK();
            *piVar14 = *piVar14 + -1;
            iVar15 = *piVar14;
            UNLOCK();
            goto joined_r0x100b1d57;
          }
        }
        local_88 = CONCAT44(iStack_5c,local_60);
        local_80 = local_58;
        local_78 = local_50;
        local_70 = local_48;
        if (local_68 == (undefined8 *******)0xfffffffe && local_64 == (PSRWLOCK)0xffffffff)
        goto LAB_100b1930;
        iStack_e0 = (int)local_58;
        ppppppuStack_dc = (undefined8 ******)((ulonglong)local_58 >> 0x20);
        uStack_d8 = (undefined4)local_50;
        local_d4 = (uint)((ulonglong)local_50 >> 0x20);
        puStack_d0 = (undefined4 *)local_48;
        local_cc = (PSRWLOCK)((ulonglong)local_48 >> 0x20);
        local_f0 = local_68;
        local_ec = local_64;
        pvStack_e8 = local_60;
        iStack_e4 = iStack_5c;
        pvVar20 = pvStack_b8;
        param_3 = local_9c;
      }
      local_9c = param_3;
      if (local_c0 != (undefined8 *******)0xffffffff) {
        iVar15 = 3;
        if ((undefined8 *******)0x2 < local_c0) {
          iVar15 = (int)local_c0 - 3;
        }
        pvStack_b8 = pvVar20;
        if ((iVar15 == 0) || (iVar15 == 1)) {
          if (pRStack_bc != (PSRWLOCK)0x0) {
            pvVar11 = GetProcessHeap();
            HeapFree(pvVar11,0,pvVar20);
            param_3 = local_9c;
          }
        }
        else if (iVar15 != 2) {
          FUN_100ae070((int)local_c0,pRStack_bc);
          param_3 = local_9c;
        }
        goto LAB_100b1881;
      }
    }
    else {
      local_ec = (PSRWLOCK)0x0;
      local_f0 = (undefined8 *******)0x1;
      iStack_e0 = (int)*(undefined8 *)(param_4 + 2);
      ppppppuStack_dc = (undefined8 ******)((ulonglong)*(undefined8 *)(param_4 + 2) >> 0x20);
      pvStack_e8 = (LPVOID)*(undefined8 *)param_4;
      iStack_e4 = (int)((ulonglong)*(undefined8 *)param_4 >> 0x20);
      uStack_d8 = (undefined4)*(undefined8 *)(param_4 + 4);
      local_d4 = (uint)((ulonglong)*(undefined8 *)(param_4 + 4) >> 0x20);
      puStack_d0 = (undefined4 *)*(undefined8 *)(param_4 + 6);
      local_cc = (PSRWLOCK)((ulonglong)*(undefined8 *)(param_4 + 6) >> 0x20);
LAB_100b1881:
      ReleaseSRWLockExclusive(param_3);
    }
LAB_100b1887:
    pppppppuVar16 = local_f0;
    if (((uint)local_ec & (uint)local_f0) == 0xffffffff) {
LAB_100b1c56:
      *local_8c = -1;
      return;
    }
  }
LAB_100b189a:
  local_b0 = local_cc;
  pvStack_b8 = (LPVOID)local_d4;
  puStack_b4 = puStack_d0;
  local_c0 = (undefined8 *******)ppppppuStack_dc;
  pRStack_bc = (PSRWLOCK)uStack_d8;
  if (((uint)pppppppuVar16 & 1) == 0) {
    FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_1014fbc8);
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
LAB_100b18cf:
  local_8c[7] = (int)local_b0;
  *(ulonglong *)(local_8c + 5) = CONCAT44(puStack_b4,pvStack_b8);
  *(ulonglong *)(local_8c + 3) = CONCAT44(pRStack_bc,local_c0);
  *local_8c = (int)pvStack_e8;
  local_8c[1] = iStack_e4;
  local_8c[2] = iStack_e0;
  return;
LAB_100b1ac5:
  if (local_60 != (LPVOID)0xffffffff) {
    FUN_1010f2e0();
    if (local_f0 == pppppppuVar16 && local_ec == pRVar7) {
      bVar21 = pvStack_e8 < pvVar20;
    }
    else {
      bVar21 = local_ec < pRVar7 ||
               (uint)((int)local_ec - (int)pRVar7) < (uint)(local_f0 < pppppppuVar16);
    }
    if (!bVar21) {
      pppppppuVar16 = (undefined8 *******)0x0;
      uStack_d8 = (undefined4)*(undefined8 *)(param_4 + 4);
      local_d4 = (uint)((ulonglong)*(undefined8 *)(param_4 + 4) >> 0x20);
      puStack_d0 = (undefined4 *)*(undefined8 *)(param_4 + 6);
      local_cc = (PSRWLOCK)((ulonglong)*(undefined8 *)(param_4 + 6) >> 0x20);
      pvStack_e8 = (LPVOID)*(undefined8 *)param_4;
      iStack_e4 = (int)((ulonglong)*(undefined8 *)param_4 >> 0x20);
      iStack_e0 = (int)*(undefined8 *)(param_4 + 2);
      ppppppuStack_dc = (undefined8 ******)((ulonglong)*(undefined8 *)(param_4 + 2) >> 0x20);
      goto LAB_100b189a;
    }
  }
  local_88 = CONCAT44(param_3,&local_c0);
  local_80 = CONCAT44(local_80._4_4_,&local_68);
  puVar10 = FUN_100a89a0();
  if (puVar10 == (undefined4 *)0x0) {
    FUN_10137b20((int *)&local_88);
  }
  else {
    piVar13 = (int *)*puVar10;
    *puVar10 = 0;
    if (piVar13 == (int *)0x0) {
      piVar13 = (int *)FUN_1013c310();
      local_ec = local_88._4_4_;
      local_f0 = (undefined8 *******)&local_c0;
      local_88 = ZEXT48(local_88._4_4_) << 0x20;
      pvStack_e8 = (LPVOID)local_80;
      FUN_100afe90((int *)&local_f0,piVar13);
      LOCK();
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if (*piVar13 == 0) {
        FUN_1011b0a0(piVar13);
      }
    }
    else {
      piVar13[3] = 0;
      piVar13[4] = 0;
      local_f0 = (undefined8 *******)&local_c0;
      local_ec = local_88._4_4_;
      local_88 = ZEXT48(local_88._4_4_) << 0x20;
      pvStack_e8 = (LPVOID)local_80;
      FUN_100afe90((int *)&local_f0,piVar13);
      piVar14 = (int *)*puVar10;
      *puVar10 = piVar13;
      if (piVar14 != (int *)0x0) {
        LOCK();
        *piVar14 = *piVar14 + -1;
        UNLOCK();
        if (*piVar14 == 0) {
          FUN_1011b0a0(piVar14);
        }
      }
    }
  }
  pvVar17 = param_3[0x10].Ptr;
  pvVar19 = param_3[0x32].Ptr;
  if (((uint)pvVar19 & (uint)pvVar17) != 0) goto LAB_100b13c8;
  goto LAB_100b196f;
}
