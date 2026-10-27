// rea decompile_all
// name: FUN_10037ff0
// address: 0x10037ff0
// body: available
// range: 0x10037ff0-0x10038069 inclusive
// range: 0x10038070-0x1003808b inclusive
// range: 0x10038090-0x10038509 inclusive
// range: 0x10038510-0x1003853e inclusive
// range: 0x10038540-0x100385e4 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_10037ff0(uint *param_1,int *param_2)

{
  undefined4 *puVar1;
  PVOID pvVar2;
  uint *puVar3;
  code *pcVar4;
  longlong lVar5;
  BOOL BVar6;
  uint uVar7;
  DWORD DVar8;
  LPVOID pvVar9;
  undefined4 extraout_EAX;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  PVOID pvVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint *puVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  PVOID pvVar20;
  int *piVar21;
  PVOID pvVar22;
  bool bVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  undefined8 uVar27;
  PSRWLOCK pRVar28;
  uint uVar29;
  char cVar30;
  LARGE_INTEGER local_48;
  uint local_40;
  uint local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  DWORD local_24;
  uint local_20;

  uVar29 = 0x1000000;
  puVar18 = (uint *)*param_1;
  pRVar28 = (PSRWLOCK)param_1[1];
  LOCK();
  iVar17 = *param_2;
  *param_2 = *param_2 + 1;
  UNLOCK();
  if (*param_2 == 0 || SCARRY4(iVar17,1) != *param_2 < 0) {
LAB_100385d0:
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  pvVar13 = pRVar28[3].Ptr;
  if (pvVar13 == pRVar28[1].Ptr) {
    FUN_10135e90((uint *)(pRVar28 + 1));
  }
  pvVar2 = pRVar28[2].Ptr;
  *(int **)((int)pvVar2 + (int)pvVar13 * 0xc) = param_2;
  *(uint **)((int)pvVar2 + (int)pvVar13 * 0xc + 4) = puVar18;
  *(undefined1 **)((int)pvVar2 + (int)pvVar13 * 0xc + 8) = &stack0xffffff99;
  pRVar28[3].Ptr = (PVOID)((int)pvVar13 + 1);
  pvVar13 = pRVar28[0xc].Ptr;
  puVar15 = pRVar28[0xb].Ptr;
  pRVar28[0xc].Ptr = (PVOID)0x0;
  if (pvVar13 != (PVOID)0x0) {
    puVar1 = puVar15 + (int)pvVar13 * 3;
    do {
      piVar21 = (int *)*puVar15;
      LOCK();
      bVar23 = piVar21[5] == 0;
      if (bVar23) {
        piVar21[5] = puVar15[1];
      }
      UNLOCK();
      if (bVar23) {
        FUN_10107860((char *)(piVar21[4] + 0x18));
        LOCK();
        *piVar21 = *piVar21 + -1;
        iVar17 = *piVar21;
        UNLOCK();
      }
      else {
        LOCK();
        *piVar21 = *piVar21 + -1;
        iVar17 = *piVar21;
        UNLOCK();
      }
      if (iVar17 == 0) {
        FUN_1009dc30(piVar21);
      }
      puVar15 = puVar15 + 3;
    } while (puVar15 != puVar1);
  }
  ReleaseSRWLockExclusive(pRVar28);
  puVar3 = (uint *)param_1[2];
  uVar19 = puVar3[2];
  puVar16 = puVar18;
  if (uVar19 == 0xffffffff) {
    while (iVar17 = param_2[5], iVar17 == 0) {
      if (DAT_10163350 == 0) {
        DVar8 = FUN_1013be20(&DAT_10163350);
      }
      else {
        DVar8 = DAT_10163350 - 1;
      }
      pvVar9 = TlsGetValue(DVar8);
      if (pvVar9 < (LPVOID)0x3) {
        piVar21 = FUN_1013c160((int)pvVar9);
        FUN_10113930((int)piVar21);
        LOCK();
        *piVar21 = *piVar21 + -1;
        iVar17 = *piVar21;
        UNLOCK();
      }
      else {
        LOCK();
        piVar21 = (int *)((int)pvVar9 + -8);
        iVar17 = *piVar21;
        *piVar21 = *piVar21 + 1;
        UNLOCK();
        if (*piVar21 == 0 || SCARRY4(iVar17,1) != *piVar21 < 0) goto LAB_100385d0;
        piVar21 = (int *)((int)pvVar9 + -8);
        FUN_10113930((int)piVar21);
        LOCK();
        *piVar21 = *piVar21 + -1;
        iVar17 = *piVar21;
        UNLOCK();
      }
      if (iVar17 == 0) {
        FUN_10107640(piVar21);
      }
    }
  }
  else {
    local_34 = *puVar3;
    uVar11 = puVar3[1];
    while( true ) {
      uVar27 = CONCAT44(DAT_101633b8._4_4_,(int)DAT_101633b8);
      iVar17 = param_2[5];
      if (iVar17 != 0) break;
      if ((int)DAT_101633b8 == 0 && DAT_101633b8._4_4_ == 0) {
        uVar27 = FUN_1013c290();
      }
      uVar14 = (uint)((ulonglong)uVar27 >> 0x20);
      uVar12 = (uint)uVar27;
      local_48.s.HighPart = 0;
      local_48.s.LowPart = 0;
      BVar6 = QueryPerformanceCounter(&local_48);
      uVar10 = local_48.s.LowPart;
      if (BVar6 == 0) {
        local_24 = GetLastError();
        local_28 = 0;
        FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_28,&PTR_FUN_101569a8,
                     &PTR_s_C__Users_runneradmin__rustup_too_10158df8);
        goto LAB_100385d0;
      }
      local_30 = local_48.s.HighPart;
      uVar24 = __aulldiv(local_48.s.LowPart,local_48.s.HighPart,uVar12,uVar14);
      local_2c = (int)(uVar24 >> 0x20) * 1000000000;
      lVar5 = uVar24 * CONCAT44(uVar14,uVar12);
      uVar7 = (uint)lVar5;
      lVar26 = (uVar24 & 0xffffffff) * 1000000000;
      iVar17 = (int)((ulonglong)lVar26 >> 0x20) + local_2c;
      lVar25 = (ulonglong)(uVar10 - uVar7) * 1000000000;
      lVar25 = __aulldiv((uint)lVar25,
                         (int)((ulonglong)lVar25 >> 0x20) +
                         ((local_30 - (int)((ulonglong)lVar5 >> 0x20)) -
                         (uint)((uint)uVar10 < uVar7)) * 1000000000,uVar12,uVar14);
      lVar26 = lVar25 + CONCAT44(iVar17,(int)lVar26) + 0x3fffffffffffffff;
      uVar7 = (uint)lVar26;
      lVar26 = __aulldiv(uVar7,(uint)((ulonglong)lVar26 >> 0x20),1000000000,0);
      uVar12 = (uint)((ulonglong)lVar26 >> 0x20);
      uVar14 = (uint)lVar26;
      uVar7 = uVar7 + uVar14 * -1000000000;
      bVar23 = uVar7 < uVar19;
      if (lVar26 != CONCAT44(uVar11,local_34)) {
        bVar23 = uVar12 < uVar11 || uVar12 - uVar11 < (uint)(uVar14 < local_34);
      }
      if (!bVar23) {
        LOCK();
        iVar17 = param_2[5];
        bVar23 = iVar17 == 0;
        if (bVar23) {
          param_2[5] = 1;
          iVar17 = 0;
        }
        UNLOCK();
        if (bVar23) goto LAB_1003842f;
        if (iVar17 == 2) goto LAB_10038366;
        if (iVar17 == 0) {
          FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_1013fc5c);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if (iVar17 == 1) goto LAB_1003842f;
        goto LAB_100384f5;
      }
      local_48.s.LowPart = local_34;
      local_48.s.HighPart = uVar11;
      local_40 = uVar19;
      FUN_1010e3b0(&local_28,(uint *)&local_48,uVar14,uVar12,uVar7);
      uVar29 = 0;
      uVar14 = 0;
      if (local_20 != 0xffffffff) {
        uVar29 = local_20;
        uVar14 = local_28;
      }
      if (DAT_10163350 == 0) {
        DVar8 = FUN_1013be20(&DAT_10163350);
      }
      else {
        DVar8 = DAT_10163350 - 1;
      }
      pvVar9 = TlsGetValue(DVar8);
      if (pvVar9 < (LPVOID)0x3) {
        piVar21 = FUN_1013c160((int)pvVar9);
      }
      else {
        LOCK();
        piVar21 = (int *)((int)pvVar9 + -8);
        iVar17 = *piVar21;
        *piVar21 = *piVar21 + 1;
        UNLOCK();
        if (*piVar21 == 0 || SCARRY4(iVar17,1) != *piVar21 < 0) goto LAB_100385d0;
        piVar21 = (int *)((int)pvVar9 + -8);
      }
      FUN_10113420((int)piVar21,uVar14,(uint)puVar18,uVar29);
      LOCK();
      *piVar21 = *piVar21 + -1;
      UNLOCK();
      puVar16 = param_1;
      if (*piVar21 == 0) {
        uVar29 = 0x100382b9;
        FUN_10107640(piVar21);
      }
    }
  }
  puVar18 = puVar16;
  if (iVar17 == 1) {
LAB_1003842f:
    cVar30 = (char)(uVar29 >> 0x18);
    pRVar28 = (PSRWLOCK)param_1[3];
    AcquireSRWLockExclusive(pRVar28);
    pvVar2 = pRVar28[2].Ptr;
    pvVar20 = pRVar28[3].Ptr;
    pvVar22 = (PVOID)0xffffffff;
    iVar17 = (int)pvVar20 * 0xc;
    pvVar13 = pvVar2;
    do {
      if (iVar17 == 0) {
        FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_1013fc6c);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      pvVar22 = (PVOID)((int)pvVar22 + 1);
      iVar17 = iVar17 + -0xc;
      puVar3 = (uint *)((int)pvVar13 + 4);
      pvVar13 = (PVOID)((int)pvVar13 + 0xc);
    } while ((uint *)*puVar3 != puVar18);
    if (pvVar22 < pvVar20) {
      piVar21 = *(int **)((int)pvVar2 + (int)pvVar22 * 0xc);
      memmove((void *)((int)pvVar2 + (int)pvVar22 * 0xc),
              (void *)((int)pvVar2 + (int)pvVar22 * 0xc + 0xc),(~(uint)pvVar22 + (int)pvVar20) * 0xc
             );
      pvVar20 = (PVOID)((int)pvVar20 + -1);
      pRVar28[3].Ptr = pvVar20;
      if (piVar21 != (int *)0x0) {
        LOCK();
        *piVar21 = *piVar21 + -1;
        UNLOCK();
        if (*piVar21 == 0) {
          FUN_1009dc30(piVar21);
        }
        ReleaseSRWLockExclusive(pRVar28);
        if (cVar30 != '\0') {
          return 0;
        }
        FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_1013fc7c);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
    }
  }
  else {
    if (iVar17 != 2) {
LAB_100384f5:
      uVar10 = CONCAT31((int3)((uint)iVar17 >> 8),2);
      if ((char)(uVar29 >> 0x10) == '\0') {
        uVar19 = 0;
        do {
          if (uVar19 < 7) {
            uVar11 = 1;
            do {
              uVar14 = uVar11 >> ((byte)uVar19 & 0x1f);
              uVar11 = uVar11 + 1;
            } while (uVar14 == 0);
LAB_10038510:
            uVar19 = uVar19 + 1;
          }
          else {
            SwitchToThread();
            if (uVar19 < 0xb) goto LAB_10038510;
          }
        } while ((char)(uVar29 >> 0x10) == '\0');
        uVar10 = 2;
      }
      return uVar10;
    }
LAB_10038366:
    cVar30 = (char)(uVar29 >> 0x18);
    pRVar28 = (PSRWLOCK)param_1[3];
    AcquireSRWLockExclusive(pRVar28);
    pvVar2 = pRVar28[2].Ptr;
    pvVar20 = pRVar28[3].Ptr;
    pvVar22 = (PVOID)0xffffffff;
    iVar17 = (int)pvVar20 * 0xc;
    pvVar13 = pvVar2;
    do {
      if (iVar17 == 0) {
        FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_1013fc8c);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      pvVar22 = (PVOID)((int)pvVar22 + 1);
      iVar17 = iVar17 + -0xc;
      puVar3 = (uint *)((int)pvVar13 + 4);
      pvVar13 = (PVOID)((int)pvVar13 + 0xc);
    } while ((uint *)*puVar3 != puVar18);
    if (pvVar22 < pvVar20) {
      piVar21 = *(int **)((int)pvVar2 + (int)pvVar22 * 0xc);
      memmove((void *)((int)pvVar2 + (int)pvVar22 * 0xc),
              (void *)((int)pvVar2 + (int)pvVar22 * 0xc + 0xc),(~(uint)pvVar22 + (int)pvVar20) * 0xc
             );
      pvVar20 = (PVOID)((int)pvVar20 + -1);
      pRVar28[3].Ptr = pvVar20;
      if (piVar21 != (int *)0x0) {
        LOCK();
        *piVar21 = *piVar21 + -1;
        UNLOCK();
        if (*piVar21 == 0) {
          FUN_1009dc30(piVar21);
        }
        ReleaseSRWLockExclusive(pRVar28);
        if (cVar30 != '\0') {
          return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
        }
        FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_1013fc9c);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
    }
  }
  FUN_1013684d(pvVar22,pvVar20,&PTR_s_C__Users_runneradmin__cargo_regi_1014093c);
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}
