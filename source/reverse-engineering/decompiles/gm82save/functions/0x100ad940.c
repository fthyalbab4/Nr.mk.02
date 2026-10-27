// rea decompile_all
// name: FUN_100ad940
// address: 0x100ad940
// body: available
// range: 0x100ad940-0x100ada16 inclusive
// range: 0x100ada20-0x100ada63 inclusive
// range: 0x100ada70-0x100adeae inclusive
// range: 0x100adeb0-0x100adf74 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x100ade4a) */

void __fastcall FUN_100ad940(undefined4 *param_1,undefined8 *param_2,int *param_3)

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
  BOOL BVar10;
  uint uVar11;
  uint uVar12;
  PVOID pvVar13;
  undefined4 *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  PVOID pvVar18;
  PVOID pvVar19;
  uint uVar20;
  bool bVar21;
  undefined4 uVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint local_98;
  undefined8 local_78;
  int local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
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
  uStack_6c = (undefined4)((ulonglong)param_2[1] >> 0x20);
  local_68 = (undefined4)param_2[2];
  uStack_64 = (undefined4)((ulonglong)param_2[2] >> 0x20);
  local_58 = *(undefined4 *)(param_2 + 4);
  uStack_54 = *(undefined4 *)((int)param_2 + 0x24);
  LOCK();
  iVar15 = *param_3;
  *param_3 = *param_3 + 1;
  UNLOCK();
  if (*param_3 == 0 || SCARRY4(iVar15,1) != *param_3 < 0) {
LAB_100adf13:
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  }
  pvVar13 = pRVar3[3].Ptr;
  if (pvVar13 == pRVar3[1].Ptr) {
    FUN_10135e90((uint *)(pRVar3 + 1));
  }
  pvVar4 = pRVar3[2].Ptr;
  *(int **)((int)pvVar4 + (int)pvVar13 * 0xc) = param_3;
  *(int *)((int)pvVar4 + (int)pvVar13 * 0xc + 4) = iVar2;
  *(undefined8 **)((int)pvVar4 + (int)pvVar13 * 0xc + 8) = &local_78;
  pRVar3[3].Ptr = (PVOID)((int)pvVar13 + 1);
  pvVar13 = pRVar3[0xc].Ptr;
  puVar14 = pRVar3[0xb].Ptr;
  pRVar3[0xc].Ptr = (PVOID)0x0;
  if (pvVar13 != (PVOID)0x0) {
    puVar1 = puVar14 + (int)pvVar13 * 3;
    do {
      piVar5 = (int *)*puVar14;
      LOCK();
      bVar21 = piVar5[3] == 0;
      if (bVar21) {
        piVar5[3] = puVar14[1];
      }
      UNLOCK();
      if (bVar21) {
        FUN_10107860((char *)(piVar5[2] + 0x18));
        LOCK();
        *piVar5 = *piVar5 + -1;
        iVar15 = *piVar5;
        UNLOCK();
      }
      else {
        LOCK();
        *piVar5 = *piVar5 + -1;
        iVar15 = *piVar5;
        UNLOCK();
      }
      if (iVar15 == 0) {
        FUN_1011b0a0(piVar5);
      }
      puVar14 = puVar14 + 3;
    } while (puVar14 != puVar1);
  }
  ReleaseSRWLockExclusive(pRVar3);
  puVar6 = *(uint **)(param_2 + 6);
  uVar16 = puVar6[2];
  if (uVar16 == 0xffffffff) {
    iVar15 = param_3[3];
    while (iVar15 == 0) {
      FUN_10113930(param_3[2]);
      iVar15 = param_3[3];
    }
  }
  else {
    local_34 = *puVar6;
    uVar20 = puVar6[1];
    while (iVar15 = param_3[3], iVar15 == 0) {
      lVar24 = CONCAT44(DAT_101633b8._4_4_,(int)DAT_101633b8);
      if ((int)DAT_101633b8 == 0 && DAT_101633b8._4_4_ == 0) {
        lVar24 = FUN_1013c290();
      }
      uVar12 = (uint)((ulonglong)lVar24 >> 0x20);
      local_98 = (uint)lVar24;
      local_48.s.HighPart = 0;
      local_48.s.LowPart = 0;
      BVar10 = QueryPerformanceCounter(&local_48);
      uVar22 = local_48.s.LowPart;
      if (BVar10 == 0) {
        local_24 = GetLastError();
        local_28 = 0;
        FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_28,&PTR_FUN_101569a8,
                     &PTR_s_C__Users_runneradmin__rustup_too_10158df8);
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      local_30 = local_48.s.HighPart;
      uVar23 = __aulldiv(local_48.s.LowPart,local_48.s.HighPart,local_98,uVar12);
      local_2c = (int)(uVar23 >> 0x20) * 1000000000;
      uVar11 = (uint)(lVar24 * uVar23);
      lVar7 = (uVar23 & 0xffffffff) * 1000000000;
      iVar15 = (int)((ulonglong)lVar7 >> 0x20) + local_2c;
      lVar8 = (ulonglong)(uVar22 - uVar11) * 1000000000;
      lVar24 = __aulldiv((uint)lVar8,
                         (int)((ulonglong)lVar8 >> 0x20) +
                         ((local_30 - (int)(lVar24 * uVar23 >> 0x20)) -
                         (uint)((uint)uVar22 < uVar11)) * 1000000000,local_98,uVar12);
      lVar24 = lVar24 + CONCAT44(iVar15,(int)lVar7) + 0x3fffffffffffffff;
      uVar17 = (uint)lVar24;
      lVar24 = __aulldiv(uVar17,(uint)((ulonglong)lVar24 >> 0x20),1000000000,0);
      uVar11 = (uint)((ulonglong)lVar24 >> 0x20);
      uVar12 = (uint)lVar24;
      uVar17 = uVar17 + uVar12 * -1000000000;
      bVar21 = uVar17 < uVar16;
      if (lVar24 != CONCAT44(uVar20,local_34)) {
        bVar21 = uVar11 < uVar20 || uVar11 - uVar20 < (uint)(uVar12 < local_34);
      }
      if (!bVar21) {
        LOCK();
        iVar15 = param_3[3];
        bVar21 = iVar15 == 0;
        if (bVar21) {
          param_3[3] = 1;
          iVar15 = 0;
        }
        UNLOCK();
        if (bVar21) goto LAB_100add64;
        if (iVar15 == 2) goto LAB_100adc51;
        if (iVar15 == 0) {
          FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_1014f894);
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
        if (iVar15 != 1) goto LAB_100ade78;
        goto LAB_100add64;
      }
      local_48.s.LowPart = local_34;
      local_48.s.HighPart = uVar20;
      local_40 = uVar16;
      FUN_1010e3b0(&local_28,(uint *)&local_48,uVar12,uVar11,uVar17);
      uVar12 = 0;
      uVar11 = 0;
      uVar17 = 0;
      if (local_20 != 0xffffffff) {
        uVar12 = local_24;
        uVar11 = local_28;
        uVar17 = local_20;
      }
      FUN_10113420(param_3[2],uVar11,uVar12,uVar17);
    }
  }
  if (iVar15 == 1) {
LAB_100add64:
    pRVar3 = *(PSRWLOCK *)((int)param_2 + 0x34);
    AcquireSRWLockExclusive(pRVar3);
    pvVar4 = pRVar3[2].Ptr;
    pvVar18 = pRVar3[3].Ptr;
    pvVar19 = (PVOID)0xffffffff;
    iVar15 = (int)pvVar18 * 0xc;
    pvVar13 = pvVar4;
    do {
      if (iVar15 == 0) {
        FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_1014f8a4);
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      pvVar19 = (PVOID)((int)pvVar19 + 1);
      iVar15 = iVar15 + -0xc;
      piVar5 = (int *)((int)pvVar13 + 4);
      pvVar13 = (PVOID)((int)pvVar13 + 0xc);
    } while (*piVar5 != iVar2);
    if (pvVar19 < pvVar18) {
      piVar5 = *(int **)((int)pvVar4 + (int)pvVar19 * 0xc);
      memmove((void *)((int)pvVar4 + (int)pvVar19 * 0xc),
              (void *)((int)pvVar4 + (int)pvVar19 * 0xc + 0xc),(~(uint)pvVar19 + (int)pvVar18) * 0xc
             );
      pvVar18 = (PVOID)((int)pvVar18 + -1);
      pRVar3[3].Ptr = pvVar18;
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (*piVar5 == 0) {
          FUN_1011b0a0(piVar5);
        }
        ReleaseSRWLockExclusive(pRVar3);
        iVar15 = local_70;
        local_70 = 0xfffffffd;
        if (iVar15 == -3) {
          FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_1014f8b4);
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
        *(ulonglong *)(param_1 + 7) = CONCAT44(local_60,uStack_64);
        param_1[0xb] = uStack_54;
        *(ulonglong *)(param_1 + 9) = CONCAT44(local_58,uStack_5c);
        *(ulonglong *)(param_1 + 5) = CONCAT44(local_68,uStack_6c);
        uVar22 = 0;
LAB_100ade4f:
        *param_1 = uVar22;
        param_1[1] = 0;
        *(undefined8 *)(param_1 + 2) = local_78;
        param_1[4] = iVar15;
        return;
      }
    }
  }
  else {
    if (iVar15 != 2) {
LAB_100ade78:
      if ((char)local_50 == '\0') {
        iVar15 = 1;
        uVar20 = 0;
        uVar16 = 0;
        do {
          uVar12 = uVar20;
          uVar11 = uVar16;
          if (uVar16 < 7) {
            while (uVar11 != 0) {
              uVar12 = uVar12 - 1;
              uVar11 = uVar12;
            }
          }
          else {
            SwitchToThread();
          }
          uVar20 = uVar20 + iVar15;
          uVar16 = uVar16 + 1;
          iVar15 = iVar15 + 2;
        } while ((char)local_50 == '\0');
      }
      *param_1 = 0xffffffff;
      param_1[1] = 0xffffffff;
      if (local_70 < -1) {
        return;
      }
      FUN_100adf80((char *)&local_78);
      return;
    }
LAB_100adc51:
    pRVar3 = *(PSRWLOCK *)((int)param_2 + 0x34);
    AcquireSRWLockExclusive(pRVar3);
    pvVar4 = pRVar3[2].Ptr;
    pvVar18 = pRVar3[3].Ptr;
    pvVar19 = (PVOID)0xffffffff;
    iVar15 = (int)pvVar18 * 0xc;
    pvVar13 = pvVar4;
    do {
      if (iVar15 == 0) {
        FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_1014f8c4);
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      pvVar19 = (PVOID)((int)pvVar19 + 1);
      iVar15 = iVar15 + -0xc;
      piVar5 = (int *)((int)pvVar13 + 4);
      pvVar13 = (PVOID)((int)pvVar13 + 0xc);
    } while (*piVar5 != iVar2);
    if (pvVar19 < pvVar18) {
      piVar5 = *(int **)((int)pvVar4 + (int)pvVar19 * 0xc);
      memmove((void *)((int)pvVar4 + (int)pvVar19 * 0xc),
              (void *)((int)pvVar4 + (int)pvVar19 * 0xc + 0xc),(~(uint)pvVar19 + (int)pvVar18) * 0xc
             );
      pvVar18 = (PVOID)((int)pvVar18 + -1);
      pRVar3[3].Ptr = pvVar18;
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (*piVar5 == 0) {
          FUN_1011b0a0(piVar5);
        }
        ReleaseSRWLockExclusive(pRVar3);
        iVar15 = local_70;
        local_70 = -3;
        if (iVar15 != -3) {
          *(ulonglong *)(param_1 + 5) = CONCAT44(local_68,uStack_6c);
          *(ulonglong *)(param_1 + 7) = CONCAT44(local_60,uStack_64);
          param_1[0xb] = uStack_54;
          *(ulonglong *)(param_1 + 9) = CONCAT44(local_58,uStack_5c);
          uVar22 = 1;
          goto LAB_100ade4f;
        }
        FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_1014f8d4);
        goto LAB_100adf13;
      }
    }
  }
  FUN_1013684d(pvVar19,pvVar18,&PTR_s_C__Users_runneradmin__rustup_too_1014fa34);
                    /* WARNING: Does not return */
  pcVar9 = (code *)invalidInstructionException();
  (*pcVar9)();
}
