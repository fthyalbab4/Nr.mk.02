// rea decompile_all
// name: FUN_10137fb0
// address: 0x10137fb0
// body: available
// range: 0x10137fb0-0x1013837b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_10137fb0(undefined1 *param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  BOOL BVar8;
  int iVar9;
  uint *puVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  longlong lVar15;
  longlong lVar16;
  LARGE_INTEGER local_30;
  undefined4 local_28;
  uint local_24;
  uint *local_20;
  undefined4 local_1c;
  DWORD local_18;

  while( true ) {
    piVar11 = DAT_101632e8;
    if (DAT_101632e8 == (int *)0x0) {
      piVar11 = FUN_10138820();
    }
    uVar13 = (uint)((int)param_1 * -0x61c88647) >> (-(char)piVar11[2] & 0x1fU);
    if ((uint)piVar11[1] <= uVar13) {
      FUN_10136b52(uVar13,piVar11[1],&PTR_s_C__Users_runneradmin__cargo_regi_1014fdcc);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    iVar9 = *piVar11;
    piVar7 = (int *)(iVar9 + 0x18 + uVar13 * 0x40);
    LOCK();
    bVar14 = *piVar7 == 0;
    if (bVar14) {
      *piVar7 = 1;
    }
    UNLOCK();
    puVar1 = (uint *)(iVar9 + uVar13 * 0x40);
    if (!bVar14) {
      FUN_10138880(puVar1 + 6);
    }
    if (DAT_101632e8 == piVar11) break;
    LOCK();
    puVar10 = puVar1 + 6;
    uVar13 = *puVar10;
    *puVar10 = *puVar10 - 1;
    UNLOCK();
    if (3 < uVar13 && (char)((uVar13 & 2) >> 1) == '\0') {
      FUN_101389f0(puVar1 + 6);
    }
  }
  piVar11 = (int *)puVar1[7];
  if (piVar11 == (int *)0x0) {
LAB_101380b4:
    *param_1 = 0;
    LOCK();
    puVar10 = puVar1 + 6;
    uVar13 = *puVar10;
    *puVar10 = *puVar10 - 1;
    UNLOCK();
    if (uVar13 < 4 || (char)((uVar13 & 2) >> 1) != '\0') {
      return;
    }
    FUN_101389f0(puVar1 + 6);
    return;
  }
  if ((undefined1 *)piVar11[2] == param_1) {
    puVar10 = puVar1 + 7;
    piVar7 = (int *)0x0;
  }
  else {
    do {
      piVar7 = piVar11;
      piVar11 = (int *)piVar7[3];
      if (piVar11 == (int *)0x0) goto LAB_101380b4;
    } while ((undefined1 *)piVar11[2] != param_1);
    puVar10 = (uint *)(piVar7 + 3);
  }
  uVar13 = piVar11[3];
  *puVar10 = uVar13;
  if ((int *)puVar1[8] == piVar11) {
    puVar1[8] = (uint)piVar7;
  }
  else {
    for (; uVar13 != 0; uVar13 = *(uint *)(uVar13 + 0xc)) {
      if (*(undefined1 **)(uVar13 + 8) == param_1) {
        bVar14 = true;
        goto LAB_101380f0;
      }
    }
  }
  bVar14 = false;
LAB_101380f0:
  lVar16 = DAT_101633b8;
  local_20 = puVar1;
  if ((int)DAT_101633b8 == 0 && (int)((ulonglong)DAT_101633b8 >> 0x20) == 0) {
    lVar16 = FUN_1013c290();
  }
  uVar13 = (uint)((ulonglong)lVar16 >> 0x20);
  local_30.s.HighPart = 0;
  local_30.s.LowPart = 0;
  BVar8 = QueryPerformanceCounter(&local_30);
  uVar6 = local_30.s.HighPart;
  uVar5 = local_30.s.LowPart;
  if (BVar8 == 0) {
    local_18 = GetLastError();
    local_1c = 0;
    FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_1c,&PTR_FUN_101569a8,
                 &PTR_s_C__Users_runneradmin__rustup_too_10158df8);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar15 = __aulldiv(local_30.s.LowPart,local_30.s.HighPart,(uint)lVar16,uVar13);
  local_28 = (undefined4)lVar15;
  local_24 = (uint)(lVar15 * lVar16);
  lVar3 = (ulonglong)(uVar5 - local_24) * 1000000000;
  lVar16 = __aulldiv((uint)lVar3,
                     (int)((ulonglong)lVar3 >> 0x20) +
                     ((uVar6 - (int)((ulonglong)(lVar15 * lVar16) >> 0x20)) -
                     (uint)((uint)uVar5 < local_24)) * 1000000000,(uint)lVar16,uVar13);
  lVar16 = lVar16 + lVar15 * 1000000000 + 0x3fffffffffffffff;
  uVar12 = (uint)lVar16;
  lVar16 = __aulldiv(uVar12,(uint)((ulonglong)lVar16 >> 0x20),1000000000,0);
  uVar13 = (uint)((ulonglong)lVar16 >> 0x20);
  uVar12 = uVar12 + (uint)lVar16 * -1000000000;
  if (lVar16 == *(longlong *)local_20) {
    if (uVar12 <= local_20[2]) {
LAB_10138218:
      if (bVar14) {
        *param_1 = 2;
      }
      else {
        *param_1 = 0;
      }
      iVar9 = 0;
      goto LAB_101382ae;
    }
  }
  else if (uVar13 <= local_20[1] && (uint)(*local_20 < (uint)lVar16) <= local_20[1] - uVar13)
  goto LAB_10138218;
  uVar13 = local_20[4] << 0xd ^ local_20[4];
  uVar13 = uVar13 >> 0x11 ^ uVar13;
  uVar13 = uVar13 << 5 ^ uVar13;
  local_20[4] = uVar13;
  uVar12 = uVar13 % 1000000 + uVar12;
  uVar13 = uVar12 + 0xc4653600;
  if (999999999 >= uVar12) {
    uVar13 = uVar12;
  }
  *(ulonglong *)local_20 = lVar16 + (ulonglong)(999999999 < uVar12);
  local_20[2] = uVar13;
  iVar9 = 1;
  if (!bVar14) {
    *param_1 = 1;
  }
LAB_101382ae:
  piVar11[4] = iVar9;
  piVar7 = (int *)*piVar11;
  iVar9 = *piVar7;
  if (iVar9 == 0) {
    piVar11[1] = 0;
    piVar7 = piVar7 + 1;
    piVar11 = piVar11 + 1;
  }
  else {
    LOCK();
    iVar2 = piVar11[1];
    piVar11[1] = 0;
    UNLOCK();
    piVar11 = piVar11 + 1;
    if (iVar2 != 1) {
      piVar11 = (int *)0x0;
    }
  }
  LOCK();
  puVar1 = local_20 + 6;
  uVar13 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if (3 < uVar13 && (char)((uVar13 & 2) >> 1) == '\0') {
    FUN_101389f0(local_20 + 6);
  }
  if (iVar9 == 0) {
    (*(code *)piVar7[1])(piVar11);
  }
  else if (piVar11 != (int *)0x0) {
    (*(code *)*piVar7)(piVar7[2],piVar11,0,0);
  }
  return;
}
