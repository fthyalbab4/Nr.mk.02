// rea decompile_all
// name: FUN_100b4180
// address: 0x100b4180
// body: available
// range: 0x100b4180-0x100b425b inclusive
// range: 0x100b4260-0x100b45a4 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100b4180(int *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  BOOL BVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  bool bVar15;
  longlong lVar16;
  longlong lVar17;
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

  puVar1 = (uint *)param_1[1];
  iVar2 = *param_1;
  local_38 = (PSRWLOCK)(puVar1 + 0x20);
  AcquireSRWLockExclusive(local_38);
  LOCK();
  iVar10 = *param_2;
  *param_2 = *param_2 + 1;
  UNLOCK();
  if (*param_2 == 0 || SCARRY4(iVar10,1) != *param_2 < 0) {
LAB_100b455b:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar11 = puVar1[0x23];
  if (uVar11 == puVar1[0x21]) {
    FUN_10135e90(puVar1 + 0x21);
  }
  uVar12 = puVar1[0x22];
  *(int **)(uVar12 + uVar11 * 0xc) = param_2;
  *(int *)(uVar12 + 4 + uVar11 * 0xc) = iVar2;
  *(undefined4 *)(uVar12 + 8 + uVar11 * 0xc) = 0;
  puVar1[0x23] = uVar11 + 1;
  if (uVar11 + 1 == 0) {
    bVar15 = puVar1[0x26] == 0;
  }
  else {
    bVar15 = false;
  }
  LOCK();
  *(bool *)(puVar1 + 0x27) = bVar15;
  UNLOCK();
  ReleaseSRWLockExclusive((PSRWLOCK)(puVar1 + 0x20));
  if ((1 < (puVar1[0x10] ^ *puVar1)) || ((puVar1[0x10] & 1) != 0)) {
    LOCK();
    if (param_2[3] == 0) {
      param_2[3] = 1;
    }
    UNLOCK();
  }
  puVar3 = (uint *)param_1[2];
  uVar11 = puVar3[2];
  if (uVar11 == 0xffffffff) {
    iVar10 = param_2[3];
    while (iVar10 == 0) {
      FUN_10113930(param_2[2]);
      iVar10 = param_2[3];
    }
  }
  else {
    local_34 = *puVar3;
    uVar12 = puVar3[1];
    while (iVar10 = param_2[3], iVar10 == 0) {
      lVar17 = CONCAT44(DAT_101633b8._4_4_,(int)DAT_101633b8);
      if ((int)DAT_101633b8 == 0 && DAT_101633b8._4_4_ == 0) {
        lVar17 = FUN_1013c290();
      }
      uVar9 = (uint)((ulonglong)lVar17 >> 0x20);
      local_64 = (uint)lVar17;
      local_48.s.HighPart = 0;
      local_48.s.LowPart = 0;
      BVar7 = QueryPerformanceCounter(&local_48);
      uVar6 = local_48.s.LowPart;
      if (BVar7 == 0) {
        local_24 = GetLastError();
        local_28 = 0;
        FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_28,&PTR_FUN_101569a8,
                     &PTR_s_C__Users_runneradmin__rustup_too_10158df8);
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      local_30 = local_48.s.HighPart;
      lVar16 = __aulldiv(local_48.s.LowPart,local_48.s.HighPart,local_64,uVar9);
      local_2c = (int)((ulonglong)lVar16 >> 0x20) * 1000000000;
      uVar8 = (uint)(lVar17 * lVar16);
      lVar4 = (ulonglong)(uVar6 - uVar8) * 1000000000;
      lVar17 = __aulldiv((uint)lVar4,
                         (int)((ulonglong)lVar4 >> 0x20) +
                         ((local_30 - (int)((ulonglong)(lVar17 * lVar16) >> 0x20)) -
                         (uint)((uint)uVar6 < uVar8)) * 1000000000,local_64,uVar9);
      lVar17 = lVar17 + lVar16 * 1000000000 + 0x3fffffffffffffff;
      uVar13 = (uint)lVar17;
      lVar17 = __aulldiv(uVar13,(uint)((ulonglong)lVar17 >> 0x20),1000000000,0);
      uVar8 = (uint)((ulonglong)lVar17 >> 0x20);
      uVar9 = (uint)lVar17;
      uVar13 = uVar13 + uVar9 * -1000000000;
      bVar15 = uVar13 < uVar11;
      if (lVar17 != CONCAT44(uVar12,local_34)) {
        bVar15 = uVar8 < uVar12 || uVar8 - uVar12 < (uint)(uVar9 < local_34);
      }
      if (!bVar15) {
        LOCK();
        iVar10 = param_2[3];
        bVar15 = iVar10 == 0;
        if (bVar15) {
          param_2[3] = 1;
          iVar10 = 0;
        }
        UNLOCK();
        if (bVar15) goto LAB_100b4439;
        if (iVar10 == 0) {
          FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_1014f7b4);
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        break;
      }
      local_48.s.LowPart = local_34;
      local_48.s.HighPart = uVar12;
      local_40 = uVar11;
      FUN_1010e3b0(&local_28,(uint *)&local_48,uVar9,uVar8,uVar13);
      uVar9 = 0;
      uVar8 = 0;
      uVar13 = 0;
      if (local_20 != 0xffffffff) {
        uVar9 = local_24;
        uVar8 = local_28;
        uVar13 = local_20;
      }
      FUN_10113420(param_2[2],uVar8,uVar9,uVar13);
    }
  }
  if (1 < iVar10 - 1U) {
    return;
  }
LAB_100b4439:
  AcquireSRWLockExclusive((PSRWLOCK)(puVar1 + 0x20));
  uVar12 = puVar1[0x23];
  uVar9 = puVar1[0x22];
  uVar8 = 0xffffffff;
  iVar10 = uVar12 * 0xc;
  uVar11 = uVar9;
  do {
    if (iVar10 == 0) {
      piVar14 = (int *)0x0;
      goto joined_r0x100b44cf;
    }
    uVar8 = uVar8 + 1;
    iVar10 = iVar10 + -0xc;
    piVar14 = (int *)(uVar11 + 4);
    uVar11 = uVar11 + 0xc;
  } while (*piVar14 != iVar2);
  if (uVar8 < uVar12) {
    piVar14 = *(int **)(uVar9 + uVar8 * 0xc);
    memmove((void *)(uVar9 + uVar8 * 0xc),(void *)(uVar9 + 0xc + uVar8 * 0xc),
            (~uVar8 + uVar12) * 0xc);
    uVar12 = uVar12 - 1;
    puVar1[0x23] = uVar12;
    if (piVar14 != (int *)0x0) {
joined_r0x100b44cf:
      if (uVar12 == 0) {
        bVar15 = puVar1[0x26] == 0;
      }
      else {
        bVar15 = false;
      }
      LOCK();
      *(bool *)(puVar1 + 0x27) = bVar15;
      UNLOCK();
      ReleaseSRWLockExclusive(local_38);
      if (piVar14 != (int *)0x0) {
        LOCK();
        *piVar14 = *piVar14 + -1;
        UNLOCK();
        if (*piVar14 != 0) {
          return;
        }
        FUN_1011b0a0(piVar14);
        return;
      }
      FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_1014f7c4);
      goto LAB_100b455b;
    }
  }
  FUN_1013684d(uVar8,uVar12,&PTR_s_C__Users_runneradmin__rustup_too_1014fa34);
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}
