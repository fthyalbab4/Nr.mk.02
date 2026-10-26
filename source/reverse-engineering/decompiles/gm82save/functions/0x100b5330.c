// rea decompile_all
// name: FUN_100b5330
// address: 0x100b5330
// body: available
// range: 0x100b5330-0x100b5379 inclusive
// range: 0x100b5380-0x100b53c6 inclusive
// range: 0x100b53d0-0x100b54da inclusive
// range: 0x100b54e0-0x100b5536 inclusive
// range: 0x100b5540-0x100b5599 inclusive
// range: 0x100b55a0-0x100b55e9 inclusive
// range: 0x100b55f0-0x100b57fc inclusive
// range: 0x100b5800-0x100b5fdd inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x100b593d) */
/* WARNING: Removing unreachable block (ram,0x100b5edc) */

void __cdecl FUN_100b5330(int *param_1,char *param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  int iVar3;
  PVOID pvVar4;
  code *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  LPVOID lpMem;
  LPVOID pvVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  undefined1 *puVar17;
  undefined4 *puVar18;
  HANDLE pvVar19;
  int *piVar20;
  int iVar21;
  undefined8 *puVar22;
  PVOID pvVar23;
  PVOID pvVar24;
  uint uVar25;
  bool bVar26;
  PSRWLOCK SRWLock;
  uint local_118;
  undefined8 local_110;
  uint *puStack_108;
  int iStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined8 **local_e8;
  undefined8 local_e4;
  PSRWLOCK local_dc;
  uint local_d8;
  uint local_d4;
  undefined8 local_d0;
  int local_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  uint *local_a0;
  int iStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 **local_80;
  PSRWLOCK local_7c;
  undefined1 *puStack_78;
  PSRWLOCK local_74;
  undefined8 *local_70;
  PSRWLOCK pRStack_6c;
  uint *puStack_68;
  undefined4 uStack_64;
  undefined8 *local_60;
  uint local_58;
  uint local_54;
  uint *local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  undefined4 local_20;

  SRWLock = (PSRWLOCK)param_1[1];
  if (*param_1 == 0) {
    local_50 = (uint *)0xffffffff;
    local_100 = 0;
    local_110 = 0;
    puStack_108 = (uint *)0x0;
    iStack_104 = 0;
LAB_100b54c6:
    pvVar23 = SRWLock[0x10].Ptr;
    pvVar24 = SRWLock[0x32].Ptr;
    if (((uint)pvVar24 & (uint)pvVar23) == 0) {
      uVar25 = 0;
      do {
        puVar1 = local_50;
        uVar6 = local_54;
        uVar15 = local_58;
        uVar14 = (int)pvVar24 - 1U & (uint)pvVar23;
        iVar21 = uVar14 * 0x30;
        pvVar24 = *(PVOID *)((int)SRWLock[0x33].Ptr + iVar21 + 0x28);
        if (pvVar23 == pvVar24) {
          if ((PVOID)(uVar14 + 1) < SRWLock[0x30].Ptr) {
            LOCK();
            bVar26 = pvVar23 == SRWLock[0x10].Ptr;
            if (bVar26) {
              SRWLock[0x10].Ptr = (PVOID)((int)pvVar23 + 1);
            }
            UNLOCK();
          }
          else {
            LOCK();
            bVar26 = pvVar23 == SRWLock[0x10].Ptr;
            if (bVar26) {
              SRWLock[0x10].Ptr =
                   (PVOID)((-(int)SRWLock[0x31].Ptr & (uint)pvVar23) + (int)SRWLock[0x31].Ptr);
            }
            UNLOCK();
          }
          if (bVar26) {
            puVar22 = (undefined8 *)((int)SRWLock[0x33].Ptr + iVar21);
            local_110 = CONCAT44((int)pvVar23 + 1,puVar22);
            puVar22[4] = *(undefined8 *)(param_2 + 0x20);
            puVar22[3] = *(undefined8 *)(param_2 + 0x18);
            puVar22[2] = *(undefined8 *)(param_2 + 0x10);
            uVar2 = *(undefined8 *)param_2;
            puVar22[1] = *(undefined8 *)(param_2 + 8);
            *puVar22 = uVar2;
            *(int *)(puVar22 + 5) = (int)pvVar23 + 1;
            FUN_100a8a60(SRWLock + 0x28);
            return;
          }
          uVar15 = 6;
          if (uVar25 < 6) {
            uVar15 = uVar25;
          }
          if (uVar25 != 0) {
            iVar21 = uVar15 * uVar15;
            do {
              iVar21 = iVar21 + -1;
            } while (iVar21 != 0);
            goto LAB_100b54e0;
          }
LAB_100b5639:
          uVar25 = 1;
        }
        else {
          if ((int)pvVar24 + (int)SRWLock[0x31].Ptr == (int)pvVar23 + 1) {
            if ((PVOID)((int)SRWLock->Ptr + (int)SRWLock[0x31].Ptr) == pvVar23) goto LAB_100b5643;
            uVar15 = 6;
            if (uVar25 < 6) {
              uVar15 = uVar25;
            }
            if (uVar25 == 0) goto LAB_100b5639;
            iVar21 = uVar15 * uVar15;
            do {
              iVar21 = iVar21 + -1;
            } while (iVar21 != 0);
          }
          else {
            if (6 < uVar25) {
              SwitchToThread();
              uVar25 = uVar25 + 1;
              goto LAB_100b54e1;
            }
            if (uVar25 != 0) {
              iVar21 = uVar25 * uVar25;
              do {
                iVar21 = iVar21 + -1;
              } while (iVar21 != 0);
            }
          }
LAB_100b54e0:
          uVar25 = uVar25 + 1;
        }
LAB_100b54e1:
        pvVar23 = SRWLock[0x10].Ptr;
        pvVar24 = SRWLock[0x32].Ptr;
        if (((uint)pvVar24 & (uint)pvVar23) != 0) break;
      } while( true );
    }
    local_58 = 0xffffffff;
    local_54 = 0xffffffff;
    if (*(int *)(param_2 + 8) == -3) goto LAB_100b5d9a;
    local_ac = *(undefined4 *)(param_2 + 0x24);
    local_d0 = *(undefined8 *)param_2;
    local_b4 = (undefined4)*(undefined8 *)(param_2 + 0x1c);
    uStack_b0 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x1c) >> 0x20);
    uStack_bc = (undefined4)*(undefined8 *)(param_2 + 0x14);
    uStack_b8 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x14) >> 0x20);
    iStack_c4 = (int)*(undefined8 *)(param_2 + 0xc);
    uStack_c0 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0xc) >> 0x20);
    local_58 = 1;
    local_c8 = *(int *)(param_2 + 8);
    goto LAB_100b5da5;
  }
  if (*param_1 == 1) {
    pvVar23 = SRWLock[0x10].Ptr;
    pvVar24 = SRWLock[0x11].Ptr;
    if (((uint)pvVar23 & 1) == 0) {
      local_118 = 0;
      lpMem = (LPVOID)0x0;
      do {
        uVar25 = (uint)pvVar23 >> 1 & 0x1f;
        if (uVar25 == 0x1f) {
          if (local_118 < 7) {
            if (local_118 != 0) {
              iVar21 = local_118 * local_118;
              do {
                iVar21 = iVar21 + -1;
              } while (iVar21 != 0);
            }
          }
          else {
            SwitchToThread();
          }
          local_118 = local_118 + 1;
          pvVar13 = lpMem;
        }
        else {
          if ((uVar25 == 0x1e && lpMem == (LPVOID)0x0) &&
             (lpMem = FUN_10107380(8,0x5d8), lpMem == (LPVOID)0x0)) {
LAB_100b5e83:
            FUN_1013679e(8,0x5d8);
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if (pvVar24 == (PVOID)0x0) {
            pvVar13 = FUN_10107380(8,0x5d8);
            if (pvVar13 == (LPVOID)0x0) goto LAB_100b5e83;
            LOCK();
            bVar26 = SRWLock[0x11].Ptr == (PVOID)0x0;
            if (bVar26) {
              SRWLock[0x11].Ptr = pvVar13;
            }
            UNLOCK();
            if (!bVar26) {
              if (lpMem != (LPVOID)0x0) {
                pvVar19 = GetProcessHeap();
                HeapFree(pvVar19,0,lpMem);
              }
              goto LAB_100b5393;
            }
            SRWLock[1].Ptr = pvVar13;
            LOCK();
            bVar26 = pvVar23 == SRWLock[0x10].Ptr;
            if (bVar26) {
              SRWLock[0x10].Ptr = (PVOID)((int)pvVar23 + 2);
            }
            UNLOCK();
            pvVar24 = pvVar13;
          }
          else {
            LOCK();
            bVar26 = pvVar23 == SRWLock[0x10].Ptr;
            if (bVar26) {
              SRWLock[0x10].Ptr = (PVOID)((int)pvVar23 + 2);
            }
            UNLOCK();
          }
          if (bVar26) {
            if (uVar25 != 0x1e) goto LAB_100b5bcb;
            if (lpMem == (LPVOID)0x0) {
              FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_1014fb08);
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            SRWLock[0x11].Ptr = lpMem;
            uVar25 = 0x1e;
            LOCK();
            SRWLock[0x10].Ptr = (PVOID)((int)SRWLock[0x10].Ptr + 2);
            UNLOCK();
            *(LPVOID *)((int)pvVar24 + 0x5d0) = lpMem;
            goto LAB_100b5c95;
          }
          uVar25 = 6;
          if (local_118 < 6) {
            uVar25 = local_118;
          }
          pvVar13 = lpMem;
          if (local_118 == 0) {
            local_118 = 1;
          }
          else {
            iVar21 = uVar25 * uVar25;
            do {
              iVar21 = iVar21 + -1;
            } while (iVar21 != 0);
            local_118 = local_118 + 1;
          }
        }
LAB_100b5393:
        pvVar23 = SRWLock[0x10].Ptr;
        pvVar24 = SRWLock[0x11].Ptr;
        lpMem = pvVar13;
      } while (((uint)pvVar23 & 1) == 0);
      pvVar24 = (PVOID)0x0;
      uVar25 = 0;
LAB_100b5bcb:
      if (lpMem != (LPVOID)0x0) {
        pvVar19 = GetProcessHeap();
        HeapFree(pvVar19,0,lpMem);
      }
      if (pvVar24 != (PVOID)0x0) {
LAB_100b5c95:
        iVar21 = uVar25 * 0x30;
        *(undefined8 *)((int)pvVar24 + iVar21 + 0x20) = *(undefined8 *)(param_2 + 0x20);
        *(undefined8 *)((int)pvVar24 + iVar21 + 0x18) = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)((int)pvVar24 + iVar21 + 0x10) = *(undefined8 *)(param_2 + 0x10);
        uVar2 = *(undefined8 *)param_2;
        *(undefined8 *)((int)pvVar24 + iVar21 + 8) = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)((int)pvVar24 + iVar21) = uVar2;
        LOCK();
        puVar1 = (uint *)((int)pvVar24 + iVar21 + 0x28);
        *puVar1 = *puVar1 | 1;
        UNLOCK();
        FUN_100a8a60(SRWLock + 0x20);
        return;
      }
    }
    local_c8 = *(int *)(param_2 + 8);
    if (local_c8 == -3) {
      return;
    }
    local_d0 = *(undefined8 *)param_2;
    local_ac = *(undefined4 *)(param_2 + 0x24);
    local_b4 = (undefined4)*(undefined8 *)(param_2 + 0x1c);
    uStack_b0 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x1c) >> 0x20);
    iStack_c4 = (int)*(undefined8 *)(param_2 + 0xc);
    uStack_c0 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0xc) >> 0x20);
    uStack_bc = (undefined4)*(undefined8 *)(param_2 + 0x14);
    uStack_b8 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x14) >> 0x20);
    goto LAB_100b5de9;
  }
  local_20 = 0xffffffff;
  local_60 = (undefined8 *)0x0;
  local_70 = (undefined8 *)0x0;
  pRStack_6c = (PSRWLOCK)0x0;
  puStack_68 = (uint *)0x0;
  uStack_64 = 0;
  AcquireSRWLockExclusive(SRWLock);
  pvVar23 = SRWLock[9].Ptr;
  if (pvVar23 != (PVOID)0x0) {
    puVar17 = FUN_100a8900();
    if (puVar17 == (undefined1 *)0x0) {
      FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    iVar21 = (int)pvVar23 * 0xc;
    pvVar23 = (PVOID)0x0;
    piVar16 = SRWLock[8].Ptr;
    do {
      iVar3 = *piVar16;
      if (*(undefined1 **)(iVar3 + 0x14) != puVar17) {
        LOCK();
        bVar26 = *(int *)(iVar3 + 0xc) == 0;
        if (bVar26) {
          *(int *)(iVar3 + 0xc) = piVar16[1];
        }
        UNLOCK();
        if (bVar26) {
          if (piVar16[2] != 0) {
            *(int *)(iVar3 + 0x10) = piVar16[2];
          }
          FUN_10107860((char *)(*(int *)(iVar3 + 8) + 0x18));
          pvVar24 = SRWLock[9].Ptr;
          if (pvVar23 < pvVar24) {
            pvVar4 = SRWLock[8].Ptr;
            piVar16 = *(int **)((int)pvVar4 + (int)pvVar23 * 0xc);
            puVar22 = *(undefined8 **)((int)pvVar4 + (int)pvVar23 * 0xc + 8);
            memmove((void *)((int)pvVar4 + (int)pvVar23 * 0xc),
                    (void *)((int)pvVar4 + (int)pvVar23 * 0xc + 0xc),
                    (~(uint)pvVar23 + (int)pvVar24) * 0xc);
            pvVar24 = (PVOID)((int)pvVar24 + -1);
            SRWLock[9].Ptr = pvVar24;
            if (piVar16 != (int *)0x0) {
              local_60 = puVar22;
              ReleaseSRWLockExclusive(SRWLock);
              if (puVar22 == (undefined8 *)0x0) {
                if (*(int *)(param_2 + 8) != -3) {
                  FUN_100b5fe0(param_2);
                  FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_1014fb38);
                    /* WARNING: Does not return */
                  pcVar5 = (code *)invalidInstructionException();
                  (*pcVar5)();
                }
              }
              else {
                puVar22[4] = *(undefined8 *)(param_2 + 0x20);
                puVar22[3] = *(undefined8 *)(param_2 + 0x18);
                puVar22[2] = *(undefined8 *)(param_2 + 0x10);
                uVar2 = *(undefined8 *)param_2;
                puVar22[1] = *(undefined8 *)(param_2 + 8);
                *puVar22 = uVar2;
                *(undefined1 *)(puVar22 + 5) = 1;
              }
              local_d4 = 0xffffffff;
              local_d8 = 0xffffffff;
              LOCK();
              *piVar16 = *piVar16 + -1;
              UNLOCK();
              local_58 = local_d8;
              local_54 = local_d4;
              if (*piVar16 == 0) {
                FUN_1011b0a0(piVar16);
                local_58 = local_d8;
                local_54 = local_d4;
              }
              goto LAB_100b5d9a;
            }
          }
          FUN_1013684d(pvVar23,pvVar24,&PTR_s_C__Users_runneradmin__rustup_too_1014fa24);
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
      }
      piVar16 = piVar16 + 3;
      pvVar23 = (PVOID)((int)pvVar23 + 1);
      iVar21 = iVar21 + -0xc;
    } while (iVar21 != 0);
  }
  if (*(char *)&SRWLock[0xd].Ptr == '\0') {
    local_90 = (undefined4)*(undefined8 *)(param_2 + 0x18);
    uStack_8c = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
    local_98 = (undefined4)*(undefined8 *)(param_2 + 0x10);
    uStack_94 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
    local_a8 = *(undefined8 *)param_2;
    local_80 = &local_70;
    local_88 = (undefined4)*(undefined8 *)(param_2 + 0x20);
    uStack_84 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
    local_a0 = (uint *)*(undefined8 *)(param_2 + 8);
    iStack_9c = (int)((ulonglong)*(undefined8 *)(param_2 + 8) >> 0x20);
    local_7c = SRWLock;
    puStack_78 = local_28;
    local_74 = SRWLock;
    puVar18 = FUN_100a89a0();
    puVar1 = local_a0;
    if (puVar18 == (undefined4 *)0x0) {
LAB_100b5e61:
      FUN_10137e00(&local_d8,(undefined4 *)&local_a8);
      local_58 = local_d8;
      local_54 = local_d4;
      uVar2 = local_d0;
      puVar1 = (uint *)local_c8;
      iVar21 = iStack_c4;
      uVar7 = uStack_c0;
      uVar8 = uStack_bc;
      uVar9 = uStack_b8;
      uVar10 = local_b4;
      uVar11 = uStack_b0;
      uVar12 = local_ac;
    }
    else {
      piVar16 = (int *)*puVar18;
      *puVar18 = 0;
      if (piVar16 == (int *)0x0) {
        piVar20 = (int *)FUN_1013c310();
        puStack_108 = local_a0;
        local_a0 = (uint *)0xfffffffd;
        if (puStack_108 == (uint *)0xfffffffd) goto LAB_100b5fa2;
        local_110 = local_a8;
        uStack_ec = *(undefined4 *)(param_2 + 0x24);
        local_e8 = &local_70;
        iStack_104 = (int)*(undefined8 *)(param_2 + 0xc);
        local_100 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0xc) >> 0x20);
        uStack_fc = (undefined4)*(undefined8 *)(param_2 + 0x14);
        local_f8 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x14) >> 0x20);
        uStack_f4 = (undefined4)*(undefined8 *)(param_2 + 0x1c);
        local_f0 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x1c) >> 0x20);
        local_e4 = CONCAT44(local_28,SRWLock);
        local_dc = SRWLock;
        FUN_100b6000(&local_58,&local_110,piVar20);
        LOCK();
        *piVar20 = *piVar20 + -1;
        iVar21 = *piVar20;
        UNLOCK();
joined_r0x100b5f97:
        if (iVar21 == 0) {
          FUN_1011b0a0(piVar20);
        }
      }
      else {
        piVar16[3] = 0;
        piVar16[4] = 0;
        local_a0 = (uint *)0xfffffffd;
        if (puVar1 == (uint *)0xfffffffd) {
LAB_100b5fa2:
          local_a0 = (uint *)0xfffffffd;
          FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_1014f710);
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        local_110 = local_a8;
        puStack_108 = puVar1;
        uStack_fc = uStack_94;
        local_f8 = local_90;
        iStack_104 = iStack_9c;
        local_100 = local_98;
        uStack_ec = uStack_84;
        local_e8 = local_80;
        local_dc = local_74;
        uStack_f4 = uStack_8c;
        local_f0 = local_88;
        local_e4 = CONCAT44(puStack_78,local_7c);
        FUN_100b6000(&local_58,&local_110,piVar16);
        piVar20 = (int *)*puVar18;
        *puVar18 = piVar16;
        if (piVar20 != (int *)0x0) {
          LOCK();
          *piVar20 = *piVar20 + -1;
          iVar21 = *piVar20;
          UNLOCK();
          goto joined_r0x100b5f97;
        }
      }
      puStack_108 = (uint *)local_48;
      iStack_104 = (int)((ulonglong)local_48 >> 0x20);
      local_100 = (undefined4)local_40;
      uStack_fc = (undefined4)((ulonglong)local_40 >> 0x20);
      local_f8 = (undefined4)local_38;
      uStack_f4 = (undefined4)((ulonglong)local_38 >> 0x20);
      local_f0 = (undefined4)local_30;
      uStack_ec = (undefined4)((ulonglong)local_30 >> 0x20);
      uVar2 = CONCAT44(uStack_4c,local_50);
      puVar1 = puStack_108;
      iVar21 = iStack_104;
      uVar7 = local_100;
      uVar8 = uStack_fc;
      uVar9 = local_f8;
      uVar10 = uStack_f4;
      uVar11 = local_f0;
      uVar12 = uStack_ec;
      if (local_58 == 0xfffffffe && local_54 == 0xffffffff) goto LAB_100b5e61;
    }
    local_ac = uVar12;
    uStack_b0 = uVar11;
    local_b4 = uVar10;
    uStack_b8 = uVar9;
    uStack_bc = uVar8;
    uStack_c0 = uVar7;
    iStack_c4 = iVar21;
    local_c8 = (int)puVar1;
    local_d0 = uVar2;
    local_d8 = local_58;
    local_d4 = local_54;
    if (local_a0 != (uint *)0xfffffffd) {
      if (local_a0 == (uint *)0xfffffffe) {
        FUN_100071e0(&iStack_9c);
        SRWLock = local_7c;
      }
      else {
        FUN_100adf80((char *)&local_a8);
        SRWLock = local_7c;
      }
      goto LAB_100b5996;
    }
  }
  else {
    local_d4 = 0;
    local_d8 = 1;
    local_d0 = *(undefined8 *)param_2;
    local_c8 = (int)*(undefined8 *)(param_2 + 8);
    iStack_c4 = (int)((ulonglong)*(undefined8 *)(param_2 + 8) >> 0x20);
    uStack_b8 = (undefined4)*(undefined8 *)(param_2 + 0x18);
    local_b4 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
    uStack_c0 = (undefined4)*(undefined8 *)(param_2 + 0x10);
    uStack_bc = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
    uStack_b0 = (undefined4)*(undefined8 *)(param_2 + 0x20);
    local_ac = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
LAB_100b5996:
    ReleaseSRWLockExclusive(SRWLock);
    local_58 = local_d8;
    local_54 = local_d4;
  }
LAB_100b5d9a:
  if ((local_54 & local_58) == 0xffffffff) {
    return;
  }
LAB_100b5da5:
  local_f8 = uStack_b8;
  uStack_f4 = local_b4;
  local_100 = uStack_c0;
  uStack_fc = uStack_bc;
  local_f0 = uStack_b0;
  uStack_ec = local_ac;
  puStack_108 = (uint *)local_c8;
  iStack_104 = iStack_c4;
  local_110 = local_d0;
  if ((local_58 & 1) == 0) {
    FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_1014fbc8);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
LAB_100b5de9:
  local_90 = uStack_b8;
  uStack_8c = local_b4;
  local_98 = uStack_c0;
  uStack_94 = uStack_bc;
  local_88 = uStack_b0;
  uStack_84 = local_ac;
  local_a0 = (uint *)local_c8;
  iStack_9c = iStack_c4;
  local_a8 = local_d0;
  if (local_c8 != -3) {
    puStack_108 = (uint *)local_c8;
    local_110 = local_d0;
    iStack_104 = iStack_c4;
    local_100 = uStack_c0;
    uStack_fc = uStack_bc;
    local_f8 = uStack_b8;
    uStack_f4 = local_b4;
    local_f0 = uStack_b0;
    uStack_ec = local_ac;
    if (local_c8 == -2) {
      FUN_100071e0(&iStack_9c);
    }
    else {
      FUN_100adf80((char *)&local_a8);
    }
  }
  return;
LAB_100b5643:
  if (local_50 != (uint *)0xffffffff) {
    FUN_1010f2e0();
    if ((uint)local_a8 == uVar15 && local_a8._4_4_ == uVar6) {
      bVar26 = local_a0 < puVar1;
    }
    else {
      bVar26 = local_a8._4_4_ < uVar6 || local_a8._4_4_ - uVar6 < (uint)((uint)local_a8 < uVar15);
    }
    if (!bVar26) {
      uStack_b8 = (undefined4)*(undefined8 *)(param_2 + 0x18);
      local_b4 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
      uStack_c0 = (undefined4)*(undefined8 *)(param_2 + 0x10);
      uStack_bc = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
      local_d0 = *(undefined8 *)param_2;
      uStack_b0 = (undefined4)*(undefined8 *)(param_2 + 0x20);
      local_ac = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
      local_58 = 0;
      local_c8 = (int)*(undefined8 *)(param_2 + 8);
      iStack_c4 = (int)((ulonglong)*(undefined8 *)(param_2 + 8) >> 0x20);
      goto LAB_100b5da5;
    }
  }
  local_70 = &local_110;
  puStack_68 = &local_58;
  pRStack_6c = SRWLock;
  puVar18 = FUN_100a89a0();
  if (puVar18 == (undefined4 *)0x0) {
    FUN_10137b20((int *)&local_70);
  }
  else {
    piVar16 = (int *)*puVar18;
    *puVar18 = 0;
    if (piVar16 == (int *)0x0) {
      piVar16 = (int *)FUN_1013c310();
      local_70 = (undefined8 *)0x0;
      local_a0 = puStack_68;
      local_a8 = CONCAT44(pRStack_6c,&local_110);
      FUN_100afe90((int *)&local_a8,piVar16);
      LOCK();
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (*piVar16 == 0) {
        FUN_1011b0a0(piVar16);
      }
    }
    else {
      piVar16[3] = 0;
      piVar16[4] = 0;
      local_70 = (undefined8 *)0x0;
      local_a0 = puStack_68;
      local_a8 = CONCAT44(pRStack_6c,&local_110);
      FUN_100afe90((int *)&local_a8,piVar16);
      piVar20 = (int *)*puVar18;
      *puVar18 = piVar16;
      if (piVar20 != (int *)0x0) {
        LOCK();
        *piVar20 = *piVar20 + -1;
        UNLOCK();
        if (*piVar20 == 0) {
          FUN_1011b0a0(piVar20);
        }
      }
    }
  }
  goto LAB_100b54c6;
}
