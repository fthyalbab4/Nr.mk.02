// rea decompile_all
// name: FUN_100b45b0
// address: 0x100b45b0
// body: available
// range: 0x100b45b0-0x100b4630 inclusive
// range: 0x100b4640-0x100b465b inclusive
// range: 0x100b4660-0x100b46ae inclusive
// range: 0x100b46b0-0x100b4ac5 inclusive
// range: 0x100b4ad0-0x100b4b98 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100b45b0(undefined4 *param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  PSRWLOCK pRVar3;
  PVOID pvVar4;
  int *piVar5;
  uint *puVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  undefined4 uVar10;
  BOOL BVar11;
  uint uVar12;
  HANDLE hHeap;
  uint uVar13;
  PVOID pvVar14;
  undefined4 *puVar15;
  int iVar16;
  uint uVar17;
  PVOID pvVar18;
  uint uVar19;
  PVOID pvVar20;
  uint uVar21;
  bool bVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint local_98;
  LARGE_INTEGER local_78;
  uint local_70;
  uint local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  LPVOID pvStack_38;
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  undefined2 local_20;

  local_20 = 0x100;
  local_40 = -3;
  iVar2 = *param_2;
  pRVar3 = (PSRWLOCK)param_2[1];
  LOCK();
  iVar16 = *param_3;
  *param_3 = *param_3 + 1;
  UNLOCK();
  if (*param_3 == 0 || SCARRY4(iVar16,1) != *param_3 < 0) {
LAB_100b4b37:
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  }
  pvVar14 = pRVar3[9].Ptr;
  if (pvVar14 == pRVar3[7].Ptr) {
    FUN_10135e90((uint *)(pRVar3 + 7));
  }
  pvVar4 = pRVar3[8].Ptr;
  *(int **)((int)pvVar4 + (int)pvVar14 * 0xc) = param_3;
  *(int *)((int)pvVar4 + (int)pvVar14 * 0xc + 4) = iVar2;
  *(undefined4 **)((int)pvVar4 + (int)pvVar14 * 0xc + 8) = &local_48;
  pRVar3[9].Ptr = (PVOID)((int)pvVar14 + 1);
  pvVar14 = pRVar3[6].Ptr;
  puVar15 = pRVar3[5].Ptr;
  pRVar3[6].Ptr = (PVOID)0x0;
  if (pvVar14 != (PVOID)0x0) {
    puVar1 = puVar15 + (int)pvVar14 * 3;
    do {
      piVar5 = (int *)*puVar15;
      LOCK();
      bVar22 = piVar5[3] == 0;
      if (bVar22) {
        piVar5[3] = puVar15[1];
      }
      UNLOCK();
      if (bVar22) {
        FUN_10107860((char *)(piVar5[2] + 0x18));
        LOCK();
        *piVar5 = *piVar5 + -1;
        iVar16 = *piVar5;
        UNLOCK();
      }
      else {
        LOCK();
        *piVar5 = *piVar5 + -1;
        iVar16 = *piVar5;
        UNLOCK();
      }
      if (iVar16 == 0) {
        FUN_1011b0a0(piVar5);
      }
      puVar15 = puVar15 + 3;
    } while (puVar15 != puVar1);
  }
  ReleaseSRWLockExclusive(pRVar3);
  puVar6 = (uint *)param_2[2];
  uVar17 = puVar6[2];
  if (uVar17 == 0xffffffff) {
    iVar16 = param_3[3];
    while (iVar16 == 0) {
      FUN_10113930(param_3[2]);
      iVar16 = param_3[3];
    }
  }
  else {
    local_64 = *puVar6;
    uVar21 = puVar6[1];
    while (iVar16 = param_3[3], iVar16 == 0) {
      lVar24 = CONCAT44(DAT_101633b8._4_4_,(int)DAT_101633b8);
      if ((int)DAT_101633b8 == 0 && DAT_101633b8._4_4_ == 0) {
        lVar24 = FUN_1013c290();
      }
      uVar13 = (uint)((ulonglong)lVar24 >> 0x20);
      local_98 = (uint)lVar24;
      local_78.s.HighPart = 0;
      local_78.s.LowPart = 0;
      BVar11 = QueryPerformanceCounter(&local_78);
      uVar10 = local_78.s.LowPart;
      if (BVar11 == 0) {
        local_54 = GetLastError();
        local_58 = 0;
        FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_58,&PTR_FUN_101569a8,
                     &PTR_s_C__Users_runneradmin__rustup_too_10158df8);
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      local_60 = local_78.s.HighPart;
      uVar23 = __aulldiv(local_78.s.LowPart,local_78.s.HighPart,local_98,uVar13);
      local_5c = (int)(uVar23 >> 0x20) * 1000000000;
      uVar12 = (uint)(lVar24 * uVar23);
      lVar7 = (uVar23 & 0xffffffff) * 1000000000;
      iVar16 = (int)((ulonglong)lVar7 >> 0x20) + local_5c;
      lVar8 = (ulonglong)(uVar10 - uVar12) * 1000000000;
      lVar24 = __aulldiv((uint)lVar8,
                         (int)((ulonglong)lVar8 >> 0x20) +
                         ((local_60 - (int)(lVar24 * uVar23 >> 0x20)) -
                         (uint)((uint)uVar10 < uVar12)) * 1000000000,local_98,uVar13);
      lVar24 = lVar24 + CONCAT44(iVar16,(int)lVar7) + 0x3fffffffffffffff;
      uVar19 = (uint)lVar24;
      lVar24 = __aulldiv(uVar19,(uint)((ulonglong)lVar24 >> 0x20),1000000000,0);
      uVar12 = (uint)((ulonglong)lVar24 >> 0x20);
      uVar13 = (uint)lVar24;
      uVar19 = uVar19 + uVar13 * -1000000000;
      bVar22 = uVar19 < uVar17;
      if (lVar24 != CONCAT44(uVar21,local_64)) {
        bVar22 = uVar12 < uVar21 || uVar12 - uVar21 < (uint)(uVar13 < local_64);
      }
      if (!bVar22) {
        LOCK();
        iVar16 = param_3[3];
        bVar22 = iVar16 == 0;
        if (bVar22) {
          param_3[3] = 1;
          iVar16 = 0;
        }
        UNLOCK();
        if (bVar22) goto LAB_100b494a;
        if (iVar16 == 2) goto LAB_100b4891;
        if (iVar16 == 0) {
          FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_1014f854);
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
        if (iVar16 == 1) goto LAB_100b494a;
        goto LAB_100b4a20;
      }
      local_78.s.LowPart = local_64;
      local_78.s.HighPart = uVar21;
      local_70 = uVar17;
      FUN_1010e3b0(&local_58,(uint *)&local_78,uVar13,uVar12,uVar19);
      uVar13 = 0;
      uVar12 = 0;
      uVar19 = 0;
      if (local_50 != 0xffffffff) {
        uVar13 = local_54;
        uVar12 = local_58;
        uVar19 = local_50;
      }
      FUN_10113420(param_3[2],uVar12,uVar13,uVar19);
    }
  }
  if (iVar16 == 1) {
LAB_100b494a:
    pRVar3 = (PSRWLOCK)param_2[3];
    AcquireSRWLockExclusive(pRVar3);
    pvVar4 = pRVar3[8].Ptr;
    pvVar18 = pRVar3[9].Ptr;
    pvVar20 = (PVOID)0xffffffff;
    iVar16 = (int)pvVar18 * 0xc;
    pvVar14 = pvVar4;
    do {
      if (iVar16 == 0) {
        FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_1014f864);
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      pvVar20 = (PVOID)((int)pvVar20 + 1);
      iVar16 = iVar16 + -0xc;
      piVar5 = (int *)((int)pvVar14 + 4);
      pvVar14 = (PVOID)((int)pvVar14 + 0xc);
    } while (*piVar5 != iVar2);
    if (pvVar20 < pvVar18) {
      piVar5 = *(int **)((int)pvVar4 + (int)pvVar20 * 0xc);
      memmove((void *)((int)pvVar4 + (int)pvVar20 * 0xc),
              (void *)((int)pvVar4 + (int)pvVar20 * 0xc + 0xc),(~(uint)pvVar20 + (int)pvVar18) * 0xc
             );
      pvVar18 = (PVOID)((int)pvVar18 + -1);
      pRVar3[9].Ptr = pvVar18;
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (*piVar5 == 0) {
          FUN_1011b0a0(piVar5);
        }
        ReleaseSRWLockExclusive(pRVar3);
        *(undefined1 *)param_1 = 0;
LAB_100b49ec:
        param_1[2] = 0xfffffffd;
        if (local_40 != -3) {
          if (local_40 == -2) {
            if (local_3c != 0) {
              hHeap = GetProcessHeap();
              HeapFree(hHeap,0,pvStack_38);
            }
          }
          else {
            FUN_100adf80((char *)&local_48);
          }
        }
        return;
      }
    }
  }
  else {
    if (iVar16 != 2) {
LAB_100b4a20:
      if ((char)local_20 == '\0') {
        iVar16 = 1;
        uVar21 = 0;
        uVar17 = 0;
        do {
          uVar13 = uVar21;
          uVar12 = uVar17;
          if (uVar17 < 7) {
            while (uVar12 != 0) {
              uVar13 = uVar13 - 1;
              uVar12 = uVar13;
            }
          }
          else {
            SwitchToThread();
          }
          uVar21 = uVar21 + iVar16;
          uVar17 = uVar17 + 1;
          iVar16 = iVar16 + 2;
        } while ((char)local_20 == '\0');
      }
      iVar16 = local_40;
      local_40 = -3;
      if (iVar16 != -3) {
        param_1[9] = local_24;
        *(undefined8 *)(param_1 + 7) = local_2c;
        *(undefined8 *)(param_1 + 5) = local_34;
        *(ulonglong *)(param_1 + 3) = CONCAT44(pvStack_38,local_3c);
        param_1[1] = local_44;
        *param_1 = local_48;
        param_1[2] = iVar16;
        return;
      }
      FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_1014f884);
      goto LAB_100b4b37;
    }
LAB_100b4891:
    pRVar3 = (PSRWLOCK)param_2[3];
    AcquireSRWLockExclusive(pRVar3);
    pvVar4 = pRVar3[8].Ptr;
    pvVar18 = pRVar3[9].Ptr;
    pvVar20 = (PVOID)0xffffffff;
    iVar16 = (int)pvVar18 * 0xc;
    pvVar14 = pvVar4;
    do {
      if (iVar16 == 0) {
        FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_1014f874);
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      pvVar20 = (PVOID)((int)pvVar20 + 1);
      iVar16 = iVar16 + -0xc;
      piVar5 = (int *)((int)pvVar14 + 4);
      pvVar14 = (PVOID)((int)pvVar14 + 0xc);
    } while (*piVar5 != iVar2);
    if (pvVar20 < pvVar18) {
      piVar5 = *(int **)((int)pvVar4 + (int)pvVar20 * 0xc);
      memmove((void *)((int)pvVar4 + (int)pvVar20 * 0xc),
              (void *)((int)pvVar4 + (int)pvVar20 * 0xc + 0xc),(~(uint)pvVar20 + (int)pvVar18) * 0xc
             );
      pvVar18 = (PVOID)((int)pvVar18 + -1);
      pRVar3[9].Ptr = pvVar18;
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (*piVar5 == 0) {
          FUN_1011b0a0(piVar5);
        }
        ReleaseSRWLockExclusive(pRVar3);
        *(undefined1 *)param_1 = 1;
        goto LAB_100b49ec;
      }
    }
  }
  FUN_1013684d(pvVar20,pvVar18,&PTR_s_C__Users_runneradmin__rustup_too_1014fa34);
                    /* WARNING: Does not return */
  pcVar9 = (code *)invalidInstructionException();
  (*pcVar9)();
}
