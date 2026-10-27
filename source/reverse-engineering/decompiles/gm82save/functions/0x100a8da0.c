// rea decompile_all
// name: FUN_100a8da0
// address: 0x100a8da0
// body: available
// range: 0x100a8da0-0x100a8f65 inclusive
// range: 0x100a8f87-0x100a8fba inclusive
// range: 0x100a8fc0-0x100a8ff6 inclusive
// range: 0x100a9000-0x100a9059 inclusive
// range: 0x100a9060-0x100a90a6 inclusive
// range: 0x100a90b0-0x100a9136 inclusive
// range: 0x100a9140-0x100a9189 inclusive
// range: 0x100a9190-0x100a91d3 inclusive
// range: 0x100a91e0-0x100a9271 inclusive
// range: 0x100a9280-0x100a938d inclusive
// range: 0x100a9390-0x100a94f2 inclusive
// range: 0x100a9500-0x100a9587 inclusive
// range: 0x100a9590-0x100a967d inclusive
// range: 0x100a9680-0x100a96b4 inclusive
// range: 0x100a96c0-0x100a9707 inclusive
// range: 0x100aa6ef-0x100aa703 inclusive
// range: 0x100aa710-0x100aa815 inclusive
// range: 0x100aa9ab-0x100aa9b5 inclusive
// range: 0x100aa9c0-0x100aa9f6 inclusive
// range: 0x100ac22c-0x100ac24c inclusive
// range: 0x100accff-0x100acd0f inclusive
// range: 0x100acd1c-0x100acd33 inclusive
// range: 0x100acd4c-0x100acd86 inclusive
// range: 0x100acd9f-0x100acdaa inclusive
// range: 0x100acdb6-0x100acdbc inclusive
// range: 0x100ace86-0x100ace96 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100a8da0(undefined1 (*param_1) [16])

{
  undefined4 uVar1;
  undefined4 uVar2;
  PSRWLOCK pRVar3;
  undefined4 uVar4;
  int iVar5;
  PVOID pvVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  BOOLEAN BVar13;
  uint *puVar14;
  LPVOID pvVar15;
  HANDLE pvVar16;
  int iVar17;
  undefined1 *lpTlsValue;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  uint uVar21;
  PVOID pvVar22;
  PVOID pvVar23;
  DWORD DVar24;
  code *pcVar25;
  uint uVar26;
  bool bVar27;
  uint local_274;
  uint local_270;
  uint local_26c;
  undefined1 local_100 [16];
  int local_f0;
  PSRWLOCK local_ec;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  undefined4 local_b8;

  uVar7 = *(undefined8 *)(param_1[1] + 0xc);
  uVar1 = *(undefined4 *)(param_1[2] + 8);
  auVar8 = *param_1;
  uVar2 = *(undefined4 *)(param_1[2] + 4);
  iVar17 = *(int *)param_1[1];
  pRVar3 = *(PSRWLOCK *)(param_1[1] + 4);
  uVar4 = *(undefined4 *)(param_1[1] + 8);
  if (DAT_101631c0 == 0) {
    DVar24 = FUN_1013be20(&DAT_101631c0);
  }
  else {
    DVar24 = DAT_101631c0 - 1;
  }
  puVar14 = TlsGetValue(DVar24);
  if (puVar14 < (uint *)0x2) {
    if (puVar14 == (uint *)0x1) {
LAB_100acd9f:
      FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
      pcVar25 = (code *)invalidInstructionException();
      (*pcVar25)();
    }
    local_100 = (undefined1  [16])0x0;
    BVar13 = SystemFunction036(local_100,0x10);
    if (BVar13 == '\0') {
      FUN_101369c0("failed to generate random dataC:\\Users\\runneradmin\\.rustup\\toolchains\\nightly-x86_64-pc-windows-msvc\\lib\\rustlib\\src\\rust\\library\\std\\src\\sys\\random\\windows.rs"
                   ,0x3d,&DAT_101589e8);
                    /* WARNING: Does not return */
      pcVar25 = (code *)invalidInstructionException();
      (*pcVar25)();
    }
    uVar9 = local_100._0_4_;
    uVar10 = local_100._4_4_;
    uVar11 = local_100._8_4_;
    uVar12 = local_100._12_4_;
    puVar14 = FUN_10107380(0,0x18);
    if (puVar14 == (uint *)0x0) {
      FUN_1013679e(8,0x18);
                    /* WARNING: Does not return */
      pcVar25 = (code *)invalidInstructionException();
      (*pcVar25)();
    }
    *puVar14 = uVar9;
    puVar14[1] = uVar10;
    puVar14[2] = uVar11;
    puVar14[3] = uVar12;
    puVar14[4] = DVar24;
    pvVar15 = TlsGetValue(DVar24);
    TlsSetValue(DVar24,puVar14);
    if (pvVar15 != (LPVOID)0x0) {
      pvVar16 = GetProcessHeap();
      HeapFree(pvVar16,0,pvVar15);
    }
  }
  local_d8 = 0x10159670;
  local_d0 = 0;
  local_c8 = *puVar14;
  uStack_c4 = puVar14[1];
  uStack_c0 = puVar14[2];
  uStack_bc = puVar14[3];
  puVar14[1] = puVar14[1] + (uint)(0xfffffffe < local_c8);
  *puVar14 = local_c8 + 1;
  local_100 = auVar8;
  local_f0 = iVar17;
  local_ec = pRVar3;
  local_e8 = uVar4;
  local_e4 = uVar7;
  local_dc = uVar2;
  local_b8 = uVar1;
LAB_100a8f87:
  uVar1 = local_100._12_4_;
  if (local_100._8_4_ == 0) {
    pvVar23 = *(PVOID *)local_100._12_4_;
    local_274 = 0;
    do {
      uVar26 = (int)((PSRWLOCK)(uVar1 + 200))->Ptr - 1U & (uint)pvVar23;
      pvVar22 = *(PVOID *)((int)((PSRWLOCK)(uVar1 + 0xcc))->Ptr + uVar26 * 0x28 + 0x20);
      if ((PVOID)((int)pvVar23 + 1U) == pvVar22) {
        if (((PSRWLOCK)(uVar1 + 0xc0))->Ptr <= (PVOID)(uVar26 + 1)) {
          pvVar22 = (PVOID)((-(int)((PSRWLOCK)(uVar1 + 0xc4))->Ptr & (uint)pvVar23) +
                           (int)((PSRWLOCK)(uVar1 + 0xc4))->Ptr);
        }
        LOCK();
        bVar27 = pvVar23 == *(PVOID *)uVar1;
        if (bVar27) {
          *(PVOID *)uVar1 = pvVar22;
        }
        UNLOCK();
        if (bVar27) goto LAB_100a93b0;
        uVar26 = 6;
        if (local_274 < 6) {
          uVar26 = local_274;
        }
        if (local_274 != 0) {
          iVar17 = uVar26 * uVar26;
          do {
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
          goto LAB_100a90c0;
        }
LAB_100a91ca:
        local_274 = 1;
      }
      else {
        if (pvVar22 == pvVar23) {
          if ((PVOID)(~(uint)((PSRWLOCK)(uVar1 + 200))->Ptr & (uint)((PSRWLOCK)(uVar1 + 0x40))->Ptr)
              == pvVar23) goto LAB_100a96cb;
          uVar26 = 6;
          if (local_274 < 6) {
            uVar26 = local_274;
          }
          if (local_274 == 0) goto LAB_100a91ca;
          iVar17 = uVar26 * uVar26;
          do {
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
        }
        else {
          if (6 < local_274) {
            SwitchToThread();
            local_274 = local_274 + 1;
            goto LAB_100a90c1;
          }
          if (local_274 != 0) {
            iVar17 = local_274 * local_274;
            do {
              iVar17 = iVar17 + -1;
            } while (iVar17 != 0);
          }
        }
LAB_100a90c0:
        local_274 = local_274 + 1;
      }
LAB_100a90c1:
      pvVar23 = *(PVOID *)uVar1;
    } while( true );
  }
  if (local_100._8_4_ == 1) {
    uVar26 = 0;
    pvVar23 = *(PVOID *)local_100._12_4_;
    pvVar15 = ((PSRWLOCK)(local_100._12_4_ + 4))->Ptr;
    do {
      while( true ) {
        uVar21 = (uint)pvVar23 >> 1 & 0x1f;
        if (uVar21 != 0x1f) break;
        if (uVar26 < 7) {
          if (uVar26 != 0) {
            iVar17 = uVar26 * uVar26;
            do {
              iVar17 = iVar17 + -1;
            } while (iVar17 != 0);
          }
        }
        else {
LAB_100a8fc0:
          SwitchToThread();
        }
LAB_100a8fc6:
        pvVar23 = *(PVOID *)uVar1;
        pvVar15 = ((PSRWLOCK)(uVar1 + 4))->Ptr;
        uVar26 = uVar26 + 1;
      }
      if (((uint)pvVar23 & 1) == 0) {
        if ((uint)pvVar23 >> 1 == (uint)((PSRWLOCK)(uVar1 + 0x40))->Ptr >> 1) goto LAB_100a96cb;
        pvVar22 = (PVOID)((int)pvVar23 + 2U |
                         (uint)(0x3f < ((uint)((PSRWLOCK)(uVar1 + 0x40))->Ptr ^ (uint)pvVar23)));
      }
      else {
        pvVar22 = (PVOID)((int)pvVar23 + 2);
      }
      if (pvVar15 == (LPVOID)0x0) {
        if (6 < uVar26) goto LAB_100a8fc0;
        if (uVar26 != 0) {
          iVar17 = uVar26 * uVar26;
          do {
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
        }
        goto LAB_100a8fc6;
      }
      LOCK();
      bVar27 = pvVar23 == *(PVOID *)uVar1;
      if (bVar27) {
        *(PVOID *)uVar1 = pvVar22;
      }
      UNLOCK();
      if (bVar27) goto LAB_100a949a;
      uVar21 = 6;
      if (uVar26 < 6) {
        uVar21 = uVar26;
      }
      if (uVar26 == 0) {
        uVar26 = 1;
      }
      else {
        iVar17 = uVar21 * uVar21;
        do {
          iVar17 = iVar17 + -1;
        } while (iVar17 != 0);
        uVar26 = uVar26 + 1;
      }
      pvVar23 = *(PVOID *)uVar1;
      pvVar15 = ((PSRWLOCK)(uVar1 + 4))->Ptr;
    } while( true );
  }
  AcquireSRWLockExclusive((PSRWLOCK)local_100._12_4_);
  pvVar23 = ((PSRWLOCK)(uVar1 + 0xc))->Ptr;
  if (pvVar23 == (PVOID)0x0) {
LAB_100a9390:
    ReleaseSRWLockExclusive((PSRWLOCK)uVar1);
    uVar26 = 0xffffffff;
    pcVar25 = WaitForSingleObjectEx_exref;
    goto joined_r0x100a944f;
  }
  if (DAT_1016315c == 0) {
    DVar24 = FUN_1013be20(&DAT_1016315c);
    lpTlsValue = TlsGetValue(DVar24);
  }
  else {
    DVar24 = DAT_1016315c - 1;
    lpTlsValue = TlsGetValue(DVar24);
  }
  if (lpTlsValue < (undefined1 *)0x2) {
    if (lpTlsValue == (undefined1 *)0x1) goto LAB_100acd9f;
    lpTlsValue = FUN_10107380(0,8);
    if (lpTlsValue == (undefined1 *)0x0) {
      FUN_1013679e(4,8);
                    /* WARNING: Does not return */
      pcVar25 = (code *)invalidInstructionException();
      (*pcVar25)();
    }
    *lpTlsValue = 0;
    *(DWORD *)(lpTlsValue + 4) = DVar24;
    pvVar15 = TlsGetValue(DVar24);
    TlsSetValue(DVar24,lpTlsValue);
    if (pvVar15 != (LPVOID)0x0) {
      pvVar16 = GetProcessHeap();
      HeapFree(pvVar16,0,pvVar15);
    }
  }
  piVar20 = ((PSRWLOCK)(uVar1 + 8))->Ptr;
  pvVar22 = (PVOID)0x0;
  iVar17 = (int)pvVar23 * 0xc;
LAB_100a928d:
  iVar5 = *piVar20;
  if (*(undefined1 **)(iVar5 + 0x14) == lpTlsValue) goto LAB_100a9280;
  LOCK();
  bVar27 = *(int *)(iVar5 + 0xc) == 0;
  if (bVar27) {
    *(int *)(iVar5 + 0xc) = piVar20[1];
  }
  UNLOCK();
  if (!bVar27) goto LAB_100a9280;
  if (piVar20[2] != 0) {
    *(int *)(iVar5 + 0x10) = piVar20[2];
  }
  FUN_10107860((char *)(*(int *)(iVar5 + 8) + 0x18));
  pvVar23 = ((PSRWLOCK)(uVar1 + 0xc))->Ptr;
  if (pvVar23 <= pvVar22) {
LAB_100acdb6:
    FUN_1013684d(pvVar22,pvVar23,&PTR_s_C__Users_runneradmin__rustup_too_1014fa24);
                    /* WARNING: Does not return */
    pcVar25 = (code *)invalidInstructionException();
    (*pcVar25)();
  }
  pvVar6 = ((PSRWLOCK)(uVar1 + 8))->Ptr;
  piVar20 = *(int **)((int)pvVar6 + (int)pvVar22 * 0xc);
  puVar14 = *(uint **)((int)pvVar6 + (int)pvVar22 * 0xc + 8);
  memmove((void *)((int)pvVar6 + (int)pvVar22 * 0xc),
          (void *)((int)pvVar6 + (int)pvVar22 * 0xc + 0xc),(~(uint)pvVar22 + (int)pvVar23) * 0xc);
  pvVar23 = (PVOID)((int)pvVar23 - 1);
  ((PSRWLOCK)(uVar1 + 0xc))->Ptr = pvVar23;
  if (piVar20 == (int *)0x0) goto LAB_100acdb6;
  ReleaseSRWLockExclusive((PSRWLOCK)uVar1);
  pcVar25 = WaitForSingleObjectEx_exref;
  if (puVar14 == (uint *)0x0) {
    uVar26 = 0xffffffff;
    LOCK();
    *piVar20 = *piVar20 + -1;
    UNLOCK();
    if (*piVar20 == 0) goto LAB_100aa808;
  }
  else {
    if (*(char *)((int)puVar14 + 0x21) == '\0') {
      if ((char)puVar14[8] == '\0') {
        iVar17 = 1;
        uVar21 = 0;
        uVar26 = 0;
        do {
          uVar18 = uVar21;
          uVar19 = uVar26;
          if (uVar26 < 7) {
            while (uVar19 != 0) {
              uVar18 = uVar18 - 1;
              uVar19 = uVar18;
            }
          }
          else {
            SwitchToThread();
          }
          uVar21 = uVar21 + iVar17;
          uVar26 = uVar26 + 1;
          iVar17 = iVar17 + 2;
        } while ((char)puVar14[8] == '\0');
      }
      uVar26 = *puVar14;
      *puVar14 = 0xffffffff;
      if (uVar26 == 0xffffffff) {
        FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_1014fb18);
                    /* WARNING: Does not return */
        pcVar25 = (code *)invalidInstructionException();
        (*pcVar25)();
      }
      pvVar16 = GetProcessHeap();
      HeapFree(pvVar16,0,puVar14);
      pcVar25 = WaitForSingleObjectEx_exref;
    }
    else {
      uVar26 = *puVar14;
      *puVar14 = 0xffffffff;
      if (uVar26 == 0xffffffff) {
        FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_1014fb28);
                    /* WARNING: Does not return */
        pcVar25 = (code *)invalidInstructionException();
        (*pcVar25)();
      }
      *(undefined1 *)(puVar14 + 8) = 1;
    }
    LOCK();
    *piVar20 = *piVar20 + -1;
    UNLOCK();
    if (*piVar20 != 0) goto joined_r0x100a944f;
LAB_100aa808:
    FUN_1011b0a0(piVar20);
  }
  goto joined_r0x100a944f;
LAB_100a93b0:
  puVar14 = (uint *)((int)((PSRWLOCK)(uVar1 + 0xcc))->Ptr + uVar26 * 0x28);
  uVar26 = *puVar14;
  puVar14[8] = (int)pvVar23 + (int)((PSRWLOCK)(uVar1 + 0xc4))->Ptr;
  FUN_100a8a60((PSRWLOCK)(uVar1 + 0x80));
  goto joined_r0x100a9406;
LAB_100a949a:
  if (uVar21 == 0x1e) {
    pvVar23 = *(PVOID *)((int)pvVar15 + 0x4d8);
    if (pvVar23 == (PVOID)0x0) {
      iVar17 = 1;
      uVar26 = 0;
      local_270 = 0;
      do {
        uVar18 = local_270;
        uVar19 = uVar26;
        if (uVar26 < 7) {
          while (uVar19 != 0) {
            uVar18 = uVar18 - 1;
            uVar19 = uVar18;
          }
        }
        else {
          SwitchToThread();
        }
        pvVar23 = *(PVOID *)((int)pvVar15 + 0x4d8);
        local_270 = local_270 + iVar17;
        uVar26 = uVar26 + 1;
        iVar17 = iVar17 + 2;
      } while (pvVar23 == (PVOID)0x0);
    }
    iVar17 = *(int *)((int)pvVar23 + 0x4d8);
    ((PSRWLOCK)(uVar1 + 4))->Ptr = pvVar23;
    *(PVOID *)uVar1 = (PVOID)(((uint)pvVar22 & 0xfffffffe) + 2 + (uint)(iVar17 != 0));
  }
  puVar14 = (uint *)((int)pvVar15 + uVar21 * 0x28);
  if ((*(uint *)((int)pvVar15 + uVar21 * 0x28 + 0x20) & 1) == 0) {
    iVar17 = 1;
    uVar26 = 0;
    local_26c = 0;
    do {
      uVar18 = local_26c;
      uVar19 = uVar26;
      if (uVar26 < 7) {
        while (uVar19 != 0) {
          uVar18 = uVar18 - 1;
          uVar19 = uVar18;
        }
      }
      else {
        SwitchToThread();
      }
      local_26c = local_26c + iVar17;
      uVar26 = uVar26 + 1;
      iVar17 = iVar17 + 2;
    } while ((puVar14[8] & 1) == 0);
  }
  uVar26 = *puVar14;
  iVar17 = uVar21 + 1;
  if (iVar17 == 0x1f) {
    iVar17 = 0;
    do {
      if ((*(uint *)((int)pvVar15 + iVar17 * 0x28 + 0x20) & 2) == 0) {
        uVar21 = *(uint *)((int)pvVar15 + iVar17 * 0x28 + 0x20);
        do {
          puVar14 = (uint *)((int)pvVar15 + iVar17 * 0x28 + 0x20);
          LOCK();
          uVar18 = *puVar14;
          bVar27 = uVar21 == uVar18;
          if (bVar27) {
            *puVar14 = uVar21 | 4;
            uVar18 = uVar21;
          }
          UNLOCK();
          uVar21 = uVar18;
        } while (!bVar27);
        if ((uVar18 & 2) == 0) goto joined_r0x100a9406;
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 != 0x1e);
  }
  else {
    uVar18 = puVar14[8];
    do {
      LOCK();
      uVar19 = puVar14[8];
      bVar27 = uVar18 == uVar19;
      if (bVar27) {
        puVar14[8] = uVar18 | 2;
        uVar19 = uVar18;
      }
      UNLOCK();
      uVar18 = uVar19;
    } while (!bVar27);
    if ((uVar19 & 4) == 0) goto joined_r0x100a9406;
    if (uVar21 < 0x1d) {
      do {
        if ((*(uint *)((int)pvVar15 + iVar17 * 0x28 + 0x20) & 2) == 0) {
          uVar21 = *(uint *)((int)pvVar15 + iVar17 * 0x28 + 0x20);
          do {
            puVar14 = (uint *)((int)pvVar15 + iVar17 * 0x28 + 0x20);
            LOCK();
            uVar18 = *puVar14;
            bVar27 = uVar21 == uVar18;
            if (bVar27) {
              *puVar14 = uVar21 | 4;
              uVar18 = uVar21;
            }
            UNLOCK();
            uVar21 = uVar18;
          } while (!bVar27);
          if ((uVar18 & 2) == 0) goto joined_r0x100a9406;
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 != 0x1e);
    }
  }
  pvVar16 = GetProcessHeap();
  HeapFree(pvVar16,0,pvVar15);
joined_r0x100a9406:
  pcVar25 = WaitForSingleObjectEx_exref;
  if (uVar26 == 0xffffffff) {
LAB_100a96cb:
    uVar26 = 0xffffffff;
    pcVar25 = WaitForSingleObjectEx_exref;
  }
joined_r0x100a944f:
  if (uVar26 != 0xffffffff) {
    iVar17 = uVar26 - 3;
    if (uVar26 < 3) {
      iVar17 = 3;
    }
                    /* WARNING: Could not recover jumptable at 0x100a9706. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(*(int *)(&DAT_100acf24 + iVar17 * 4) + 0x100a8df4))();
    return;
  }
  iVar17 = (*pcVar25)(local_b8,100,1);
  if (iVar17 == 0) {
    FUN_100ad180(local_f0,local_ec,'\x01');
  }
  goto LAB_100a8f87;
LAB_100a9280:
  piVar20 = piVar20 + 3;
  pvVar22 = (PVOID)((int)pvVar22 + 1);
  iVar17 = iVar17 + -0xc;
  if (iVar17 == 0) goto LAB_100a9390;
  goto LAB_100a928d;
}
