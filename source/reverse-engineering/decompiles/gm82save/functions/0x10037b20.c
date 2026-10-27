// rea decompile_all
// name: FUN_10037b20
// address: 0x10037b20
// body: available
// range: 0x10037b20-0x10037fec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10037b20(int *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  undefined4 uVar8;
  BOOL BVar9;
  uint uVar10;
  DWORD DVar11;
  LPVOID pvVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  ulonglong uVar19;
  longlong lVar20;
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

  puVar1 = (uint *)param_1[1];
  iVar2 = *param_1;
  local_38 = (PSRWLOCK)(puVar1 + 0x20);
  AcquireSRWLockExclusive(local_38);
  LOCK();
  iVar14 = *param_2;
  *param_2 = *param_2 + 1;
  UNLOCK();
  if (*param_2 == 0 || SCARRY4(iVar14,1) != *param_2 < 0) {
LAB_10037fd8:
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  uVar13 = puVar1[0x23];
  if (uVar13 == puVar1[0x21]) {
    FUN_10135e90(puVar1 + 0x21);
  }
  uVar3 = puVar1[0x22];
  *(int **)(uVar3 + uVar13 * 0xc) = param_2;
  *(int *)(uVar3 + 4 + uVar13 * 0xc) = iVar2;
  *(undefined4 *)(uVar3 + 8 + uVar13 * 0xc) = 0;
  puVar1[0x23] = uVar13 + 1;
  if (uVar13 + 1 == 0) {
    bVar18 = puVar1[0x26] == 0;
  }
  else {
    bVar18 = false;
  }
  LOCK();
  *(bool *)(puVar1 + 0x27) = bVar18;
  UNLOCK();
  ReleaseSRWLockExclusive((PSRWLOCK)(puVar1 + 0x20));
  if ((1 < (puVar1[0x10] ^ *puVar1)) || ((puVar1[0x10] & 1) != 0)) {
    LOCK();
    if (param_2[5] == 0) {
      param_2[5] = 1;
    }
    UNLOCK();
  }
  puVar4 = (uint *)param_1[2];
  uVar13 = puVar4[2];
  if (uVar13 == 0xffffffff) {
    while (iVar14 = param_2[5], iVar14 == 0) {
      if (DAT_10163350 == 0) {
        DVar11 = FUN_1013be20(&DAT_10163350);
      }
      else {
        DVar11 = DAT_10163350 - 1;
      }
      pvVar12 = TlsGetValue(DVar11);
      if (pvVar12 < (LPVOID)0x3) {
        piVar15 = FUN_1013c160((int)pvVar12);
        FUN_10113930((int)piVar15);
        LOCK();
        *piVar15 = *piVar15 + -1;
        iVar14 = *piVar15;
        UNLOCK();
      }
      else {
        LOCK();
        piVar15 = (int *)((int)pvVar12 + -8);
        iVar14 = *piVar15;
        *piVar15 = *piVar15 + 1;
        UNLOCK();
        if (*piVar15 == 0 || SCARRY4(iVar14,1) != *piVar15 < 0) goto LAB_10037fd8;
        piVar15 = (int *)((int)pvVar12 + -8);
        FUN_10113930((int)piVar15);
        LOCK();
        *piVar15 = *piVar15 + -1;
        iVar14 = *piVar15;
        UNLOCK();
      }
      if (iVar14 == 0) {
        FUN_10107640(piVar15);
      }
    }
  }
  else {
    local_34 = *puVar4;
    uVar3 = puVar4[1];
    while (iVar14 = param_2[5], iVar14 == 0) {
      lVar20 = CONCAT44(DAT_101633b8._4_4_,(int)DAT_101633b8);
      if ((int)DAT_101633b8 == 0 && DAT_101633b8._4_4_ == 0) {
        lVar20 = FUN_1013c290();
      }
      uVar16 = (uint)((ulonglong)lVar20 >> 0x20);
      local_68 = (uint)lVar20;
      local_48.s.HighPart = 0;
      local_48.s.LowPart = 0;
      BVar9 = QueryPerformanceCounter(&local_48);
      uVar8 = local_48.s.LowPart;
      if (BVar9 == 0) {
        local_24 = GetLastError();
        local_28 = 0;
        FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_28,&PTR_FUN_101569a8,
                     &PTR_s_C__Users_runneradmin__rustup_too_10158df8);
        goto LAB_10037fd8;
      }
      local_30 = local_48.s.HighPart;
      uVar19 = __aulldiv(local_48.s.LowPart,local_48.s.HighPart,local_68,uVar16);
      local_2c = (int)(uVar19 >> 0x20) * 1000000000;
      uVar10 = (uint)(lVar20 * uVar19);
      lVar5 = (uVar19 & 0xffffffff) * 1000000000;
      iVar14 = (int)((ulonglong)lVar5 >> 0x20) + local_2c;
      lVar6 = (ulonglong)(uVar8 - uVar10) * 1000000000;
      lVar20 = __aulldiv((uint)lVar6,
                         (int)((ulonglong)lVar6 >> 0x20) +
                         ((local_30 - (int)(lVar20 * uVar19 >> 0x20)) - (uint)((uint)uVar8 < uVar10)
                         ) * 1000000000,local_68,uVar16);
      lVar20 = lVar20 + CONCAT44(iVar14,(int)lVar5) + 0x3fffffffffffffff;
      uVar17 = (uint)lVar20;
      lVar20 = __aulldiv(uVar17,(uint)((ulonglong)lVar20 >> 0x20),1000000000,0);
      uVar10 = (uint)((ulonglong)lVar20 >> 0x20);
      uVar16 = (uint)lVar20;
      uVar17 = uVar17 + uVar16 * -1000000000;
      bVar18 = uVar17 < uVar13;
      if (lVar20 != CONCAT44(uVar3,local_34)) {
        bVar18 = uVar10 < uVar3 || uVar10 - uVar3 < (uint)(uVar16 < local_34);
      }
      if (!bVar18) {
        LOCK();
        iVar14 = param_2[5];
        bVar18 = iVar14 == 0;
        if (bVar18) {
          param_2[5] = 1;
          iVar14 = 0;
        }
        UNLOCK();
        if (bVar18) goto LAB_10037e82;
        if (iVar14 == 0) {
          FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_1013fbc4);
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        break;
      }
      local_48.s.LowPart = local_34;
      local_48.s.HighPart = uVar3;
      local_40 = uVar13;
      FUN_1010e3b0(&local_28,(uint *)&local_48,uVar16,uVar10,uVar17);
      uVar16 = 0;
      uVar10 = 0;
      uVar17 = 0;
      if (local_20 != 0xffffffff) {
        uVar16 = local_24;
        uVar10 = local_20;
        uVar17 = local_28;
      }
      if (DAT_10163350 == 0) {
        DVar11 = FUN_1013be20(&DAT_10163350);
      }
      else {
        DVar11 = DAT_10163350 - 1;
      }
      pvVar12 = TlsGetValue(DVar11);
      if (pvVar12 < (LPVOID)0x3) {
        piVar15 = FUN_1013c160((int)pvVar12);
      }
      else {
        LOCK();
        piVar15 = (int *)((int)pvVar12 + -8);
        iVar14 = *piVar15;
        *piVar15 = *piVar15 + 1;
        UNLOCK();
        if (*piVar15 == 0 || SCARRY4(iVar14,1) != *piVar15 < 0) goto LAB_10037fd8;
        piVar15 = (int *)((int)pvVar12 + -8);
      }
      FUN_10113420((int)piVar15,uVar17,uVar16,uVar10);
      LOCK();
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (*piVar15 == 0) {
        FUN_10107640(piVar15);
      }
    }
  }
  if (1 < iVar14 - 1U) {
    return;
  }
LAB_10037e82:
  AcquireSRWLockExclusive((PSRWLOCK)(puVar1 + 0x20));
  uVar3 = puVar1[0x22];
  uVar16 = puVar1[0x23];
  uVar10 = 0xffffffff;
  iVar14 = uVar16 * 0xc;
  uVar13 = uVar3;
  do {
    if (iVar14 == 0) {
      piVar15 = (int *)0x0;
      goto joined_r0x10037f0f;
    }
    uVar10 = uVar10 + 1;
    iVar14 = iVar14 + -0xc;
    piVar15 = (int *)(uVar13 + 4);
    uVar13 = uVar13 + 0xc;
  } while (*piVar15 != iVar2);
  if (uVar10 < uVar16) {
    piVar15 = *(int **)(uVar3 + uVar10 * 0xc);
    memmove((void *)(uVar3 + uVar10 * 0xc),(void *)(uVar3 + 0xc + uVar10 * 0xc),
            (~uVar10 + uVar16) * 0xc);
    uVar16 = uVar16 - 1;
    puVar1[0x23] = uVar16;
    if (piVar15 != (int *)0x0) {
joined_r0x10037f0f:
      if (uVar16 == 0) {
        bVar18 = puVar1[0x26] == 0;
      }
      else {
        bVar18 = false;
      }
      LOCK();
      *(bool *)(puVar1 + 0x27) = bVar18;
      UNLOCK();
      ReleaseSRWLockExclusive(local_38);
      if (piVar15 != (int *)0x0) {
        LOCK();
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (*piVar15 != 0) {
          return;
        }
        FUN_1009dc30(piVar15);
        return;
      }
      FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_1013fbd4);
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
  }
  FUN_1013684d(uVar10,uVar16,&PTR_s_C__Users_runneradmin__cargo_regi_1014093c);
                    /* WARNING: Does not return */
  pcVar7 = (code *)invalidInstructionException();
  (*pcVar7)();
}
