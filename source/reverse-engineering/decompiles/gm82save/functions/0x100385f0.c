// rea decompile_all
// name: FUN_100385f0
// address: 0x100385f0
// body: available
// range: 0x100385f0-0x10038acc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100385f0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  undefined4 uVar8;
  BOOL BVar9;
  uint uVar10;
  uint uVar11;
  DWORD DVar12;
  LPVOID pvVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint local_68;
  LARGE_INTEGER local_48;
  uint local_40;
  PSRWLOCK local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  DWORD local_24;
  uint local_20;

  piVar1 = (int *)param_1[1];
  iVar2 = *param_1;
  local_38 = (PSRWLOCK)(piVar1 + 0x20);
  AcquireSRWLockExclusive(local_38);
  LOCK();
  iVar15 = *param_2;
  *param_2 = *param_2 + 1;
  UNLOCK();
  if (*param_2 == 0 || SCARRY4(iVar15,1) != *param_2 < 0) {
LAB_10038ab8:
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  iVar15 = piVar1[0x23];
  if (iVar15 == piVar1[0x21]) {
    FUN_10135e90((uint *)(piVar1 + 0x21));
  }
  iVar3 = piVar1[0x22];
  *(int **)(iVar3 + iVar15 * 0xc) = param_2;
  *(int *)(iVar3 + 4 + iVar15 * 0xc) = iVar2;
  *(undefined4 *)(iVar3 + 8 + iVar15 * 0xc) = 0;
  piVar1[0x23] = iVar15 + 1;
  if (iVar15 + 1 == 0) {
    bVar20 = piVar1[0x26] == 0;
  }
  else {
    bVar20 = false;
  }
  LOCK();
  *(bool *)(piVar1 + 0x27) = bVar20;
  UNLOCK();
  ReleaseSRWLockExclusive((PSRWLOCK)(piVar1 + 0x20));
  if ((*piVar1 + piVar1[0x31] != (~piVar1[0x32] & piVar1[0x10])) ||
     ((piVar1[0x32] & piVar1[0x10]) != 0)) {
    LOCK();
    if (param_2[5] == 0) {
      param_2[5] = 1;
    }
    UNLOCK();
  }
  puVar4 = (uint *)param_1[2];
  uVar18 = puVar4[2];
  if (uVar18 == 0xffffffff) {
    while (iVar15 = param_2[5], iVar15 == 0) {
      if (DAT_10163350 == 0) {
        DVar12 = FUN_1013be20(&DAT_10163350);
      }
      else {
        DVar12 = DAT_10163350 - 1;
      }
      pvVar13 = TlsGetValue(DVar12);
      if (pvVar13 < (LPVOID)0x3) {
        piVar17 = FUN_1013c160((int)pvVar13);
        FUN_10113930((int)piVar17);
        LOCK();
        *piVar17 = *piVar17 + -1;
        iVar15 = *piVar17;
        UNLOCK();
      }
      else {
        LOCK();
        piVar17 = (int *)((int)pvVar13 + -8);
        iVar15 = *piVar17;
        *piVar17 = *piVar17 + 1;
        UNLOCK();
        if (*piVar17 == 0 || SCARRY4(iVar15,1) != *piVar17 < 0) goto LAB_10038ab8;
        piVar17 = (int *)((int)pvVar13 + -8);
        FUN_10113930((int)piVar17);
        LOCK();
        *piVar17 = *piVar17 + -1;
        iVar15 = *piVar17;
        UNLOCK();
      }
      if (iVar15 == 0) {
        FUN_10107640(piVar17);
      }
    }
  }
  else {
    local_34 = *puVar4;
    uVar16 = puVar4[1];
    while (iVar15 = param_2[5], iVar15 == 0) {
      lVar22 = CONCAT44(DAT_101633b8._4_4_,(int)DAT_101633b8);
      if ((int)DAT_101633b8 == 0 && DAT_101633b8._4_4_ == 0) {
        lVar22 = FUN_1013c290();
      }
      uVar11 = (uint)((ulonglong)lVar22 >> 0x20);
      local_68 = (uint)lVar22;
      local_48.s.HighPart = 0;
      local_48.s.LowPart = 0;
      BVar9 = QueryPerformanceCounter(&local_48);
      uVar8 = local_48.s.LowPart;
      if (BVar9 == 0) {
        local_24 = GetLastError();
        local_28 = 0;
        FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_28,&PTR_FUN_101569a8,
                     &PTR_s_C__Users_runneradmin__rustup_too_10158df8);
        goto LAB_10038ab8;
      }
      local_30 = local_48.s.HighPart;
      uVar21 = __aulldiv(local_48.s.LowPart,local_48.s.HighPart,local_68,uVar11);
      local_2c = (int)(uVar21 >> 0x20) * 1000000000;
      uVar10 = (uint)(lVar22 * uVar21);
      lVar5 = (uVar21 & 0xffffffff) * 1000000000;
      iVar15 = (int)((ulonglong)lVar5 >> 0x20) + local_2c;
      lVar6 = (ulonglong)(uVar8 - uVar10) * 1000000000;
      lVar22 = __aulldiv((uint)lVar6,
                         (int)((ulonglong)lVar6 >> 0x20) +
                         ((local_30 - (int)(lVar22 * uVar21 >> 0x20)) - (uint)((uint)uVar8 < uVar10)
                         ) * 1000000000,local_68,uVar11);
      lVar22 = lVar22 + CONCAT44(iVar15,(int)lVar5) + 0x3fffffffffffffff;
      uVar19 = (uint)lVar22;
      lVar22 = __aulldiv(uVar19,(uint)((ulonglong)lVar22 >> 0x20),1000000000,0);
      uVar10 = (uint)((ulonglong)lVar22 >> 0x20);
      uVar11 = (uint)lVar22;
      uVar19 = uVar19 + uVar11 * -1000000000;
      bVar20 = uVar19 < uVar18;
      if (lVar22 != CONCAT44(uVar16,local_34)) {
        bVar20 = uVar10 < uVar16 || uVar10 - uVar16 < (uint)(uVar11 < local_34);
      }
      if (!bVar20) {
        LOCK();
        iVar15 = param_2[5];
        bVar20 = iVar15 == 0;
        if (bVar20) {
          param_2[5] = 1;
          iVar15 = 0;
        }
        UNLOCK();
        if (bVar20) goto LAB_10038962;
        if (iVar15 == 0) {
          FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_1013fd24);
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        break;
      }
      local_48.s.LowPart = local_34;
      local_48.s.HighPart = uVar16;
      local_40 = uVar18;
      FUN_1010e3b0(&local_28,(uint *)&local_48,uVar11,uVar10,uVar19);
      uVar11 = 0;
      uVar10 = 0;
      uVar19 = 0;
      if (local_20 != 0xffffffff) {
        uVar11 = local_24;
        uVar10 = local_20;
        uVar19 = local_28;
      }
      if (DAT_10163350 == 0) {
        DVar12 = FUN_1013be20(&DAT_10163350);
      }
      else {
        DVar12 = DAT_10163350 - 1;
      }
      pvVar13 = TlsGetValue(DVar12);
      if (pvVar13 < (LPVOID)0x3) {
        piVar17 = FUN_1013c160((int)pvVar13);
      }
      else {
        LOCK();
        piVar17 = (int *)((int)pvVar13 + -8);
        iVar15 = *piVar17;
        *piVar17 = *piVar17 + 1;
        UNLOCK();
        if (*piVar17 == 0 || SCARRY4(iVar15,1) != *piVar17 < 0) goto LAB_10038ab8;
        piVar17 = (int *)((int)pvVar13 + -8);
      }
      FUN_10113420((int)piVar17,uVar19,uVar11,uVar10);
      LOCK();
      *piVar17 = *piVar17 + -1;
      UNLOCK();
      if (*piVar17 == 0) {
        FUN_10107640(piVar17);
      }
    }
  }
  if (1 < iVar15 - 1U) {
    return;
  }
LAB_10038962:
  AcquireSRWLockExclusive((PSRWLOCK)(piVar1 + 0x20));
  iVar3 = piVar1[0x22];
  uVar18 = piVar1[0x23];
  uVar16 = 0xffffffff;
  iVar14 = uVar18 * 0xc;
  iVar15 = iVar3;
  do {
    if (iVar14 == 0) {
      piVar17 = (int *)0x0;
      goto joined_r0x100389ef;
    }
    uVar16 = uVar16 + 1;
    iVar14 = iVar14 + -0xc;
    piVar17 = (int *)(iVar15 + 4);
    iVar15 = iVar15 + 0xc;
  } while (*piVar17 != iVar2);
  if (uVar16 < uVar18) {
    piVar17 = *(int **)(iVar3 + uVar16 * 0xc);
    memmove((void *)(iVar3 + uVar16 * 0xc),(void *)(iVar3 + 0xc + uVar16 * 0xc),
            (~uVar16 + uVar18) * 0xc);
    uVar18 = uVar18 - 1;
    piVar1[0x23] = uVar18;
    if (piVar17 != (int *)0x0) {
joined_r0x100389ef:
      if (uVar18 == 0) {
        bVar20 = piVar1[0x26] == 0;
      }
      else {
        bVar20 = false;
      }
      LOCK();
      *(bool *)(piVar1 + 0x27) = bVar20;
      UNLOCK();
      ReleaseSRWLockExclusive(local_38);
      if (piVar17 != (int *)0x0) {
        LOCK();
        *piVar17 = *piVar17 + -1;
        UNLOCK();
        if (*piVar17 != 0) {
          return;
        }
        FUN_1009dc30(piVar17);
        return;
      }
      FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_1013fd34);
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
  }
  FUN_1013684d(uVar16,uVar18,&PTR_s_C__Users_runneradmin__cargo_regi_1014093c);
                    /* WARNING: Does not return */
  pcVar7 = (code *)invalidInstructionException();
  (*pcVar7)();
}
