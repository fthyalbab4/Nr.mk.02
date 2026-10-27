// rea decompile_all
// name: FUN_100afe90
// address: 0x100afe90
// body: available
// range: 0x100afe90-0x100aff7c inclusive
// range: 0x100aff80-0x100b02c4 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100afe90(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  code *pcVar6;
  undefined4 uVar7;
  BOOL BVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  bool bVar17;
  longlong lVar18;
  longlong lVar19;
  uint local_64;
  LARGE_INTEGER local_48;
  uint local_40;
  PSRWLOCK local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;

  piVar1 = (int *)param_1[1];
  iVar2 = *param_1;
  local_38 = (PSRWLOCK)(piVar1 + 0x20);
  AcquireSRWLockExclusive(local_38);
  LOCK();
  iVar11 = *param_2;
  *param_2 = *param_2 + 1;
  UNLOCK();
  if (*param_2 == 0 || SCARRY4(iVar11,1) != *param_2 < 0) {
LAB_100b027b:
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  iVar11 = piVar1[0x23];
  if (iVar11 == piVar1[0x21]) {
    FUN_10135e90((uint *)(piVar1 + 0x21));
  }
  iVar3 = piVar1[0x22];
  *(int **)(iVar3 + iVar11 * 0xc) = param_2;
  *(int *)(iVar3 + 4 + iVar11 * 0xc) = iVar2;
  *(undefined4 *)(iVar3 + 8 + iVar11 * 0xc) = 0;
  piVar1[0x23] = iVar11 + 1;
  if (iVar11 + 1 == 0) {
    bVar17 = piVar1[0x26] == 0;
  }
  else {
    bVar17 = false;
  }
  LOCK();
  *(bool *)(piVar1 + 0x27) = bVar17;
  UNLOCK();
  ReleaseSRWLockExclusive((PSRWLOCK)(piVar1 + 0x20));
  if ((*piVar1 + piVar1[0x31] != (~piVar1[0x32] & piVar1[0x10])) ||
     ((piVar1[0x32] & piVar1[0x10]) != 0)) {
    LOCK();
    if (param_2[3] == 0) {
      param_2[3] = 1;
    }
    UNLOCK();
  }
  puVar4 = (uint *)param_1[2];
  uVar14 = puVar4[2];
  if (uVar14 == 0xffffffff) {
    iVar11 = param_2[3];
    while (iVar11 == 0) {
      FUN_10113930(param_2[2]);
      iVar11 = param_2[3];
    }
  }
  else {
    local_34 = *puVar4;
    uVar13 = puVar4[1];
    while (iVar11 = param_2[3], iVar11 == 0) {
      lVar19 = CONCAT44(DAT_101633b8._4_4_,(int)DAT_101633b8);
      if ((int)DAT_101633b8 == 0 && DAT_101633b8._4_4_ == 0) {
        lVar19 = FUN_1013c290();
      }
      uVar10 = (uint)((ulonglong)lVar19 >> 0x20);
      local_64 = (uint)lVar19;
      local_48.s.HighPart = 0;
      local_48.s.LowPart = 0;
      BVar8 = QueryPerformanceCounter(&local_48);
      uVar7 = local_48.s.LowPart;
      if (BVar8 == 0) {
        local_24 = GetLastError();
        local_28 = 0;
        FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_28,&PTR_FUN_101569a8,
                     &PTR_s_C__Users_runneradmin__rustup_too_10158df8);
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      local_30 = local_48.s.HighPart;
      lVar18 = __aulldiv(local_48.s.LowPart,local_48.s.HighPart,local_64,uVar10);
      local_2c = (int)((ulonglong)lVar18 >> 0x20) * 1000000000;
      uVar9 = (uint)(lVar19 * lVar18);
      lVar5 = (ulonglong)(uVar7 - uVar9) * 1000000000;
      lVar19 = __aulldiv((uint)lVar5,
                         (int)((ulonglong)lVar5 >> 0x20) +
                         ((local_30 - (int)((ulonglong)(lVar19 * lVar18) >> 0x20)) -
                         (uint)((uint)uVar7 < uVar9)) * 1000000000,local_64,uVar10);
      lVar19 = lVar19 + lVar18 * 1000000000 + 0x3fffffffffffffff;
      uVar15 = (uint)lVar19;
      lVar19 = __aulldiv(uVar15,(uint)((ulonglong)lVar19 >> 0x20),1000000000,0);
      uVar9 = (uint)((ulonglong)lVar19 >> 0x20);
      uVar10 = (uint)lVar19;
      uVar15 = uVar15 + uVar10 * -1000000000;
      bVar17 = uVar15 < uVar14;
      if (lVar19 != CONCAT44(uVar13,local_34)) {
        bVar17 = uVar9 < uVar13 || uVar9 - uVar13 < (uint)(uVar10 < local_34);
      }
      if (!bVar17) {
        LOCK();
        iVar11 = param_2[3];
        bVar17 = iVar11 == 0;
        if (bVar17) {
          param_2[3] = 1;
          iVar11 = 0;
        }
        UNLOCK();
        if (bVar17) goto LAB_100b0159;
        if (iVar11 == 0) {
          FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_1014f984);
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        break;
      }
      local_48.s.LowPart = local_34;
      local_48.s.HighPart = uVar13;
      local_40 = uVar14;
      FUN_1010e3b0(&local_28,(uint *)&local_48,uVar10,uVar9,uVar15);
      uVar10 = 0;
      uVar9 = 0;
      uVar15 = 0;
      if (local_20 != 0xffffffff) {
        uVar10 = local_24;
        uVar9 = local_28;
        uVar15 = local_20;
      }
      FUN_10113420(param_2[2],uVar9,uVar10,uVar15);
    }
  }
  if (1 < iVar11 - 1U) {
    return;
  }
LAB_100b0159:
  AcquireSRWLockExclusive((PSRWLOCK)(piVar1 + 0x20));
  uVar14 = piVar1[0x23];
  iVar3 = piVar1[0x22];
  uVar13 = 0xffffffff;
  iVar12 = uVar14 * 0xc;
  iVar11 = iVar3;
  do {
    if (iVar12 == 0) {
      piVar16 = (int *)0x0;
      goto joined_r0x100b01ef;
    }
    uVar13 = uVar13 + 1;
    iVar12 = iVar12 + -0xc;
    piVar16 = (int *)(iVar11 + 4);
    iVar11 = iVar11 + 0xc;
  } while (*piVar16 != iVar2);
  if (uVar13 < uVar14) {
    piVar16 = *(int **)(iVar3 + uVar13 * 0xc);
    memmove((void *)(iVar3 + uVar13 * 0xc),(void *)(iVar3 + 0xc + uVar13 * 0xc),
            (~uVar13 + uVar14) * 0xc);
    uVar14 = uVar14 - 1;
    piVar1[0x23] = uVar14;
    if (piVar16 != (int *)0x0) {
joined_r0x100b01ef:
      if (uVar14 == 0) {
        bVar17 = piVar1[0x26] == 0;
      }
      else {
        bVar17 = false;
      }
      LOCK();
      *(bool *)(piVar1 + 0x27) = bVar17;
      UNLOCK();
      ReleaseSRWLockExclusive(local_38);
      if (piVar16 != (int *)0x0) {
        LOCK();
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (*piVar16 != 0) {
          return;
        }
        FUN_1011b0a0(piVar16);
        return;
      }
      FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_1014f994);
      goto LAB_100b027b;
    }
  }
  FUN_1013684d(uVar13,uVar14,&PTR_s_C__Users_runneradmin__rustup_too_1014fa34);
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}
