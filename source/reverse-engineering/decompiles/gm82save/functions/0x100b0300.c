// rea decompile_all
// name: FUN_100b0300
// address: 0x100b0300
// body: available
// range: 0x100b0300-0x100b03cb inclusive
// range: 0x100b03d0-0x100b041e inclusive
// range: 0x100b0420-0x100b0884 inclusive
// range: 0x100b0890-0x100b0965 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x100b080a) */

void __fastcall FUN_100b0300(undefined4 *param_1,undefined8 *param_2,int *param_3)

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
  LPVOID lpMem;
  undefined4 uVar10;
  BOOL BVar11;
  uint uVar12;
  HANDLE hHeap;
  uint uVar13;
  PVOID pvVar14;
  undefined4 *puVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  PVOID pvVar19;
  PVOID pvVar20;
  uint uVar21;
  bool bVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint local_98;
  undefined8 local_78;
  int local_70;
  int iStack_6c;
  LPVOID local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined2 local_50;
  LARGE_INTEGER local_48;
  uint local_40;
  uint local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;

  local_50 = 0x100;
  local_78 = *param_2;
  local_60 = *(undefined4 *)(param_2 + 3);
  uStack_5c = *(undefined4 *)((int)param_2 + 0x1c);
  iVar2 = *(int *)(param_2 + 5);
  pRVar3 = *(PSRWLOCK *)((int)param_2 + 0x2c);
  local_70 = (int)param_2[1];
  iStack_6c = (int)((ulonglong)param_2[1] >> 0x20);
  local_68 = (LPVOID)param_2[2];
  uStack_64 = (undefined4)((ulonglong)param_2[2] >> 0x20);
  local_58 = *(undefined4 *)(param_2 + 4);
  uStack_54 = *(undefined4 *)((int)param_2 + 0x24);
  LOCK();
  iVar16 = *param_3;
  *param_3 = *param_3 + 1;
  UNLOCK();
  if (*param_3 == 0 || SCARRY4(iVar16,1) != *param_3 < 0) {
LAB_100b0904:
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  }
  pvVar14 = pRVar3[3].Ptr;
  if (pvVar14 == pRVar3[1].Ptr) {
    FUN_10135e90((uint *)(pRVar3 + 1));
  }
  pvVar4 = pRVar3[2].Ptr;
  *(int **)((int)pvVar4 + (int)pvVar14 * 0xc) = param_3;
  *(int *)((int)pvVar4 + (int)pvVar14 * 0xc + 4) = iVar2;
  *(undefined8 **)((int)pvVar4 + (int)pvVar14 * 0xc + 8) = &local_78;
  pRVar3[3].Ptr = (PVOID)((int)pvVar14 + 1);
  pvVar14 = pRVar3[0xc].Ptr;
  puVar15 = pRVar3[0xb].Ptr;
  pRVar3[0xc].Ptr = (PVOID)0x0;
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
  puVar6 = *(uint **)(param_2 + 6);
  uVar17 = puVar6[2];
  if (uVar17 == 0xffffffff) {
    iVar16 = param_3[3];
    while (iVar16 == 0) {
      FUN_10113930(param_3[2]);
      iVar16 = param_3[3];
    }
  }
  else {
    local_34 = *puVar6;
    uVar21 = puVar6[1];
    while (iVar16 = param_3[3], iVar16 == 0) {
      lVar24 = CONCAT44(DAT_101633b8._4_4_,(int)DAT_101633b8);
      if ((int)DAT_101633b8 == 0 && DAT_101633b8._4_4_ == 0) {
        lVar24 = FUN_1013c290();
      }
      uVar13 = (uint)((ulonglong)lVar24 >> 0x20);
      local_98 = (uint)lVar24;
      local_48.s.HighPart = 0;
      local_48.s.LowPart = 0;
      BVar11 = QueryPerformanceCounter(&local_48);
      uVar10 = local_48.s.LowPart;
      if (BVar11 == 0) {
        local_24 = GetLastError();
        local_28 = 0;
        FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_28,&PTR_FUN_101569a8,
                     &PTR_s_C__Users_runneradmin__rustup_too_10158df8);
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      local_30 = local_48.s.HighPart;
      uVar23 = __aulldiv(local_48.s.LowPart,local_48.s.HighPart,local_98,uVar13);
      local_2c = (int)(uVar23 >> 0x20) * 1000000000;
      uVar12 = (uint)(lVar24 * uVar23);
      lVar7 = (uVar23 & 0xffffffff) * 1000000000;
      iVar16 = (int)((ulonglong)lVar7 >> 0x20) + local_2c;
      lVar8 = (ulonglong)(uVar10 - uVar12) * 1000000000;
      lVar24 = __aulldiv((uint)lVar8,
                         (int)((ulonglong)lVar8 >> 0x20) +
                         ((local_30 - (int)(lVar24 * uVar23 >> 0x20)) -
                         (uint)((uint)uVar10 < uVar12)) * 1000000000,local_98,uVar13);
      lVar24 = lVar24 + CONCAT44(iVar16,(int)lVar7) + 0x3fffffffffffffff;
      uVar18 = (uint)lVar24;
      lVar24 = __aulldiv(uVar18,(uint)((ulonglong)lVar24 >> 0x20),1000000000,0);
      uVar12 = (uint)((ulonglong)lVar24 >> 0x20);
      uVar13 = (uint)lVar24;
      uVar18 = uVar18 + uVar13 * -1000000000;
      bVar22 = uVar18 < uVar17;
      if (lVar24 != CONCAT44(uVar21,local_34)) {
        bVar22 = uVar12 < uVar21 || uVar12 - uVar21 < (uint)(uVar13 < local_34);
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
        if (bVar22) goto LAB_100b071b;
        if (iVar16 == 2) goto LAB_100b0601;
        if (iVar16 == 0) {
          FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_1014f894);
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
        if (iVar16 != 1) goto LAB_100b0835;
        goto LAB_100b071b;
      }
      local_48.s.LowPart = local_34;
      local_48.s.HighPart = uVar21;
      local_40 = uVar17;
      FUN_1010e3b0(&local_28,(uint *)&local_48,uVar13,uVar12,uVar18);
      uVar13 = 0;
      uVar12 = 0;
      uVar18 = 0;
      if (local_20 != 0xffffffff) {
        uVar13 = local_24;
        uVar12 = local_28;
        uVar18 = local_20;
      }
      FUN_10113420(param_3[2],uVar12,uVar13,uVar18);
    }
  }
  if (iVar16 == 1) {
LAB_100b071b:
    pRVar3 = *(PSRWLOCK *)((int)param_2 + 0x34);
    AcquireSRWLockExclusive(pRVar3);
    pvVar4 = pRVar3[2].Ptr;
    pvVar19 = pRVar3[3].Ptr;
    pvVar20 = (PVOID)0xffffffff;
    iVar16 = (int)pvVar19 * 0xc;
    pvVar14 = pvVar4;
    do {
      if (iVar16 == 0) {
        FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_1014f8a4);
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      pvVar20 = (PVOID)((int)pvVar20 + 1);
      iVar16 = iVar16 + -0xc;
      piVar5 = (int *)((int)pvVar14 + 4);
      pvVar14 = (PVOID)((int)pvVar14 + 0xc);
    } while (*piVar5 != iVar2);
    if (pvVar20 < pvVar19) {
      piVar5 = *(int **)((int)pvVar4 + (int)pvVar20 * 0xc);
      memmove((void *)((int)pvVar4 + (int)pvVar20 * 0xc),
              (void *)((int)pvVar4 + (int)pvVar20 * 0xc + 0xc),(~(uint)pvVar20 + (int)pvVar19) * 0xc
             );
      pvVar19 = (PVOID)((int)pvVar19 + -1);
      pRVar3[3].Ptr = pvVar19;
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (*piVar5 == 0) {
          FUN_1011b0a0(piVar5);
        }
        ReleaseSRWLockExclusive(pRVar3);
        iVar16 = local_70;
        local_70 = 0xfffffffd;
        if (iVar16 != -3) {
          *(ulonglong *)(param_1 + 7) = CONCAT44(local_60,uStack_64);
          param_1[0xb] = uStack_54;
          *(ulonglong *)(param_1 + 9) = CONCAT44(local_58,uStack_5c);
          *(ulonglong *)(param_1 + 5) = CONCAT44(local_68,iStack_6c);
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = (undefined4)local_78;
          param_1[3] = local_78._4_4_;
          param_1[4] = iVar16;
          return;
        }
        FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_1014f8b4);
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
    }
  }
  else {
    if (iVar16 != 2) {
LAB_100b0835:
      if ((char)local_50 == '\0') {
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
        } while ((char)local_50 == '\0');
      }
      lpMem = local_68;
      *param_1 = 0xffffffff;
      param_1[1] = 0xffffffff;
      if (local_70 != -3) {
        if (local_70 == -2) {
          if (iStack_6c != 0) {
            hHeap = GetProcessHeap();
            HeapFree(hHeap,0,lpMem);
          }
        }
        else {
          FUN_100adf80((char *)&local_78);
        }
      }
      return;
    }
LAB_100b0601:
    pRVar3 = *(PSRWLOCK *)((int)param_2 + 0x34);
    AcquireSRWLockExclusive(pRVar3);
    pvVar4 = pRVar3[2].Ptr;
    pvVar19 = pRVar3[3].Ptr;
    pvVar20 = (PVOID)0xffffffff;
    iVar16 = (int)pvVar19 * 0xc;
    pvVar14 = pvVar4;
    do {
      if (iVar16 == 0) {
        FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_1014f8c4);
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      pvVar20 = (PVOID)((int)pvVar20 + 1);
      iVar16 = iVar16 + -0xc;
      piVar5 = (int *)((int)pvVar14 + 4);
      pvVar14 = (PVOID)((int)pvVar14 + 0xc);
    } while (*piVar5 != iVar2);
    if (pvVar20 < pvVar19) {
      piVar5 = *(int **)((int)pvVar4 + (int)pvVar20 * 0xc);
      memmove((void *)((int)pvVar4 + (int)pvVar20 * 0xc),
              (void *)((int)pvVar4 + (int)pvVar20 * 0xc + 0xc),(~(uint)pvVar20 + (int)pvVar19) * 0xc
             );
      pvVar19 = (PVOID)((int)pvVar19 + -1);
      pRVar3[3].Ptr = pvVar19;
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (*piVar5 == 0) {
          FUN_1011b0a0(piVar5);
        }
        ReleaseSRWLockExclusive(pRVar3);
        iVar16 = local_70;
        local_70 = -3;
        if (iVar16 != -3) {
          *(ulonglong *)(param_1 + 5) = CONCAT44(local_68,iStack_6c);
          *(ulonglong *)(param_1 + 7) = CONCAT44(local_60,uStack_64);
          param_1[0xb] = uStack_54;
          *(ulonglong *)(param_1 + 9) = CONCAT44(local_58,uStack_5c);
          *param_1 = 1;
          param_1[1] = 0;
          *(undefined8 *)(param_1 + 2) = local_78;
          param_1[4] = iVar16;
          return;
        }
        FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_1014f8d4);
        goto LAB_100b0904;
      }
    }
  }
  FUN_1013684d(pvVar20,pvVar19,&PTR_s_C__Users_runneradmin__rustup_too_1014fa34);
                    /* WARNING: Does not return */
  pcVar9 = (code *)invalidInstructionException();
  (*pcVar9)();
}
