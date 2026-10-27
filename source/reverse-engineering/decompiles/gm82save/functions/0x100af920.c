// rea decompile_all
// name: FUN_100af920
// address: 0x100af920
// body: available
// range: 0x100af920-0x100af99c inclusive
// range: 0x100af9a0-0x100af9bb inclusive
// range: 0x100af9c0-0x100afa10 inclusive
// range: 0x100afa20-0x100afdb7 inclusive
// range: 0x100afdc0-0x100afe82 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_100af920(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  PSRWLOCK pRVar2;
  PVOID pvVar3;
  uint *puVar4;
  code *pcVar5;
  longlong lVar6;
  uint uVar7;
  char cVar8;
  BOOL BVar9;
  uint uVar10;
  undefined4 extraout_EAX;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  PVOID pvVar14;
  undefined4 *puVar15;
  int iVar16;
  PVOID pvVar17;
  int *piVar18;
  PVOID pvVar19;
  uint uVar20;
  bool bVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined8 uVar24;
  uint local_6c;
  undefined2 local_67;
  char local_65;
  int *local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  int *local_54;
  uint local_50;
  uint local_4c;
  LARGE_INTEGER local_48;
  uint local_40;
  uint local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;

  local_65 = (char)param_1[4];
  local_67 = 1;
  iVar13 = *param_1;
  pRVar2 = (PSRWLOCK)param_1[1];
  LOCK();
  iVar16 = *param_2;
  *param_2 = *param_2 + 1;
  UNLOCK();
  local_64 = param_2;
  local_54 = param_1;
  if (*param_2 == 0 || SCARRY4(iVar16,1) != *param_2 < 0) {
LAB_100afcc6:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  pvVar14 = pRVar2[3].Ptr;
  if (pvVar14 == pRVar2[1].Ptr) {
    FUN_10135e90((uint *)(pRVar2 + 1));
  }
  pvVar3 = pRVar2[2].Ptr;
  *(int **)((int)pvVar3 + (int)pvVar14 * 0xc) = local_64;
  *(int *)((int)pvVar3 + (int)pvVar14 * 0xc + 4) = iVar13;
  *(undefined2 **)((int)pvVar3 + (int)pvVar14 * 0xc + 8) = &local_67;
  pRVar2[3].Ptr = (PVOID)((int)pvVar14 + 1);
  pvVar14 = pRVar2[0xc].Ptr;
  puVar15 = pRVar2[0xb].Ptr;
  pRVar2[0xc].Ptr = (PVOID)0x0;
  local_5c = iVar13;
  if (pvVar14 != (PVOID)0x0) {
    puVar1 = puVar15 + (int)pvVar14 * 3;
    do {
      piVar18 = (int *)*puVar15;
      LOCK();
      bVar21 = piVar18[3] == 0;
      if (bVar21) {
        piVar18[3] = puVar15[1];
      }
      UNLOCK();
      if (bVar21) {
        FUN_10107860((char *)(piVar18[2] + 0x18));
        LOCK();
        *piVar18 = *piVar18 + -1;
        iVar16 = *piVar18;
        UNLOCK();
      }
      else {
        LOCK();
        *piVar18 = *piVar18 + -1;
        iVar16 = *piVar18;
        UNLOCK();
      }
      if (iVar16 == 0) {
        FUN_1011b0a0(piVar18);
      }
      puVar15 = puVar15 + 3;
    } while (puVar15 != puVar1);
  }
  ReleaseSRWLockExclusive(pRVar2);
  iVar16 = local_5c;
  piVar18 = local_64;
  puVar4 = (uint *)local_54[2];
  if (puVar4[2] == 0xffffffff) {
    iVar13 = local_64[3];
    while (iVar13 == 0) {
      FUN_10113930(piVar18[2]);
      iVar13 = piVar18[3];
    }
  }
  else {
    local_34 = *puVar4;
    local_50 = puVar4[1];
    local_4c = puVar4[2];
    while (iVar13 = piVar18[3], iVar13 == 0) {
      uVar24 = CONCAT44(DAT_101633b8._4_4_,(int)DAT_101633b8);
      if ((int)DAT_101633b8 == 0 && DAT_101633b8._4_4_ == 0) {
        uVar24 = FUN_1013c290();
      }
      uVar10 = (uint)((ulonglong)uVar24 >> 0x20);
      local_6c = (uint)uVar24;
      local_48.s.HighPart = 0;
      local_48.s.LowPart = 0;
      BVar9 = QueryPerformanceCounter(&local_48);
      if (BVar9 == 0) {
        local_24 = GetLastError();
        local_28 = 0;
        FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_28,&PTR_FUN_101569a8,
                     &PTR_s_C__Users_runneradmin__rustup_too_10158df8);
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      local_60 = local_48.s.LowPart;
      local_30 = local_48.s.HighPart;
      local_58 = uVar10;
      uVar22 = __aulldiv(local_48.s.LowPart,local_48.s.HighPart,local_6c,uVar10);
      local_2c = (int)(uVar22 >> 0x20) * 1000000000;
      lVar6 = uVar22 * CONCAT44(local_58,local_6c);
      uVar10 = (uint)lVar6;
      bVar21 = local_60 < uVar10;
      uVar10 = local_60 - uVar10;
      lVar23 = (uVar22 & 0xffffffff) * 1000000000;
      local_60 = (uint)lVar23;
      iVar16 = (int)((ulonglong)lVar23 >> 0x20) + local_2c;
      lVar23 = (ulonglong)uVar10 * 1000000000;
      lVar23 = __aulldiv((uint)lVar23,
                         (int)((ulonglong)lVar23 >> 0x20) +
                         ((local_30 - (int)((ulonglong)lVar6 >> 0x20)) - (uint)bVar21) * 1000000000,
                         local_6c,local_58);
      lVar23 = lVar23 + CONCAT44(iVar16,local_60) + 0x3fffffffffffffff;
      uVar10 = (uint)lVar23;
      lVar23 = __aulldiv(uVar10,(uint)((ulonglong)lVar23 >> 0x20),1000000000,0);
      local_58 = (uint)((ulonglong)lVar23 >> 0x20);
      local_60 = (uint)lVar23;
      uVar10 = uVar10 + local_60 * -1000000000;
      bVar21 = uVar10 < local_4c;
      if (lVar23 != CONCAT44(local_50,local_34)) {
        bVar21 = local_58 < local_50 || local_58 - local_50 < (uint)(local_60 < local_34);
      }
      if (!bVar21) {
        LOCK();
        iVar13 = local_64[3];
        bVar21 = iVar13 == 0;
        if (bVar21) {
          local_64[3] = 1;
          iVar13 = 0;
        }
        UNLOCK();
        iVar16 = local_5c;
        if (bVar21) goto LAB_100afce2;
        if (iVar13 == 2) goto LAB_100afc11;
        if (iVar13 == 0) {
          FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_1014f894);
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        if (iVar13 != 1) goto LAB_100afda0;
        goto LAB_100afce2;
      }
      local_48.s.LowPart = local_34;
      local_48.s.HighPart = local_50;
      local_40 = local_4c;
      FUN_1010e3b0(&local_28,(uint *)&local_48,local_60,local_58,uVar10);
      iVar16 = local_5c;
      piVar18 = local_64;
      uVar10 = 0;
      uVar20 = 0;
      uVar12 = 0;
      if (local_20 != 0xffffffff) {
        uVar10 = local_24;
        uVar20 = local_28;
        uVar12 = local_20;
      }
      FUN_10113420(local_64[2],uVar20,uVar10,uVar12);
    }
  }
  lVar23 = CONCAT44(local_58,local_60);
  if (iVar13 == 1) {
LAB_100afce2:
    local_58 = (uint)((ulonglong)lVar23 >> 0x20);
    local_60 = (uint)lVar23;
    pRVar2 = (PSRWLOCK)local_54[3];
    AcquireSRWLockExclusive(pRVar2);
    pvVar3 = pRVar2[2].Ptr;
    pvVar17 = pRVar2[3].Ptr;
    pvVar19 = (PVOID)0xffffffff;
    iVar13 = (int)pvVar17 * 0xc;
    pvVar14 = pvVar3;
    do {
      if (iVar13 == 0) {
        FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_1014f8a4);
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      pvVar19 = (PVOID)((int)pvVar19 + 1);
      iVar13 = iVar13 + -0xc;
      piVar18 = (int *)((int)pvVar14 + 4);
      pvVar14 = (PVOID)((int)pvVar14 + 0xc);
    } while (*piVar18 != iVar16);
    if (pvVar19 < pvVar17) {
      piVar18 = *(int **)((int)pvVar3 + (int)pvVar19 * 0xc);
      memmove((void *)((int)pvVar3 + (int)pvVar19 * 0xc),
              (void *)((int)pvVar3 + (int)pvVar19 * 0xc + 0xc),(~(uint)pvVar19 + (int)pvVar17) * 0xc
             );
      pvVar17 = (PVOID)((int)pvVar17 + -1);
      pRVar2[3].Ptr = pvVar17;
      if (piVar18 != (int *)0x0) {
        LOCK();
        *piVar18 = *piVar18 + -1;
        UNLOCK();
        if (*piVar18 == 0) {
          FUN_1011b0a0(piVar18);
        }
        ReleaseSRWLockExclusive(pRVar2);
        cVar8 = local_65;
        local_65 = 2;
        if (cVar8 != '\x02') {
          return 0;
        }
        FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_1014f8b4);
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
    }
  }
  else {
    if (iVar13 != 2) {
LAB_100afda0:
      uVar11 = CONCAT31((int3)((uint)iVar13 >> 8),2);
      if (local_67._1_1_ == '\0') {
        iVar16 = 1;
        uVar20 = 0;
        uVar10 = 0;
        do {
          local_58 = (uint)((ulonglong)lVar23 >> 0x20);
          local_60 = (uint)lVar23;
          uVar12 = uVar20;
          uVar7 = uVar10;
          if (uVar10 < 7) {
            while (uVar7 != 0) {
              uVar12 = uVar12 - 1;
              uVar7 = uVar12;
            }
          }
          else {
            SwitchToThread();
            lVar23 = CONCAT44(local_58,local_60);
          }
          uVar20 = uVar20 + iVar16;
          uVar10 = uVar10 + 1;
          iVar16 = iVar16 + 2;
        } while (local_67._1_1_ == '\0');
        uVar11 = 2;
      }
      return uVar11;
    }
LAB_100afc11:
    local_58 = (uint)((ulonglong)lVar23 >> 0x20);
    local_60 = (uint)lVar23;
    pRVar2 = (PSRWLOCK)local_54[3];
    AcquireSRWLockExclusive(pRVar2);
    pvVar3 = pRVar2[2].Ptr;
    pvVar17 = pRVar2[3].Ptr;
    pvVar19 = (PVOID)0xffffffff;
    iVar13 = (int)pvVar17 * 0xc;
    pvVar14 = pvVar3;
    do {
      if (iVar13 == 0) {
        FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_1014f8c4);
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      pvVar19 = (PVOID)((int)pvVar19 + 1);
      iVar13 = iVar13 + -0xc;
      piVar18 = (int *)((int)pvVar14 + 4);
      pvVar14 = (PVOID)((int)pvVar14 + 0xc);
    } while (*piVar18 != iVar16);
    if (pvVar19 < pvVar17) {
      piVar18 = *(int **)((int)pvVar3 + (int)pvVar19 * 0xc);
      memmove((void *)((int)pvVar3 + (int)pvVar19 * 0xc),
              (void *)((int)pvVar3 + (int)pvVar19 * 0xc + 0xc),(~(uint)pvVar19 + (int)pvVar17) * 0xc
             );
      pvVar17 = (PVOID)((int)pvVar17 + -1);
      pRVar2[3].Ptr = pvVar17;
      if (piVar18 != (int *)0x0) {
        LOCK();
        *piVar18 = *piVar18 + -1;
        UNLOCK();
        if (*piVar18 == 0) {
          FUN_1011b0a0(piVar18);
        }
        ReleaseSRWLockExclusive(pRVar2);
        cVar8 = local_65;
        local_65 = '\x02';
        if (cVar8 != '\x02') {
          return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
        }
        FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_1014f8d4);
        goto LAB_100afcc6;
      }
    }
  }
  FUN_1013684d(pvVar19,pvVar17,&PTR_s_C__Users_runneradmin__rustup_too_1014fa34);
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}
