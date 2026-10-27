// rea decompile_all
// name: FUN_100b6e10
// address: 0x100b6e10
// body: available
// range: 0x100b6e10-0x100b6fb2 inclusive
// range: 0x100b6fc0-0x100b7125 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100b6e10(int param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 *_Src;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  BOOL BVar7;
  uint uVar8;
  int iVar9;
  LPVOID pvVar10;
  HANDLE hHeap;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined1 *_Dst;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 uVar18;
  undefined4 local_3c;
  uint local_2c;
  undefined1 *local_28;
  uint local_24;
  LARGE_INTEGER local_20;
  undefined4 local_18;

  uVar12 = 1;
  if (1 < (uint)(param_1 * 3)) {
    uVar12 = param_1 * 3 - 1;
    iVar9 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    uVar12 = (0xffffffffU >> (~(byte)iVar9 & 0x1f)) + 1;
  }
  lVar17 = DAT_101633b8;
  local_18 = param_2;
  if ((int)DAT_101633b8 == 0 && (int)((ulonglong)DAT_101633b8 >> 0x20) == 0) {
    lVar17 = FUN_1013c290();
  }
  uVar14 = (uint)((ulonglong)lVar17 >> 0x20);
  local_20.s.HighPart = 0;
  local_20.s.LowPart = 0;
  BVar7 = QueryPerformanceCounter(&local_20);
  uVar6 = local_20.s.HighPart;
  uVar5 = local_20.s.LowPart;
  if (BVar7 == 0) {
    local_28 = (undefined1 *)GetLastError();
    local_2c = 0;
    FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_2c,&PTR_FUN_101569a8,
                 &PTR_s_C__Users_runneradmin__rustup_too_10158df8);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar16 = __aulldiv(local_20.s.LowPart,local_20.s.HighPart,(uint)lVar17,uVar14);
  uVar8 = (uint)(lVar17 * uVar16);
  lVar1 = (uVar16 & 0xffffffff) * 1000000000;
  lVar2 = (ulonglong)(uVar5 - uVar8) * 1000000000;
  lVar17 = __aulldiv((uint)lVar2,
                     (int)((ulonglong)lVar2 >> 0x20) +
                     ((uVar6 - (int)(lVar17 * uVar16 >> 0x20)) - (uint)((uint)uVar5 < uVar8)) *
                     1000000000,(uint)lVar17,uVar14);
  lVar17 = lVar17 + CONCAT44((int)((ulonglong)lVar1 >> 0x20) + (int)(uVar16 >> 0x20) * 1000000000,
                             (int)lVar1) + 0x3fffffffffffffff;
  uVar14 = (uint)lVar17;
  uVar18 = __aulldiv(uVar14,(uint)((ulonglong)lVar17 >> 0x20),1000000000,0);
  iVar9 = (int)uVar18;
  uVar8 = uVar12 * 0x40;
  if (0x3ffffff < uVar12 || 0x7fffffc0 < uVar8) {
    FUN_101367b0();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (uVar8 == 0) {
    _Dst = &DAT_00000040;
  }
  else {
    pvVar10 = FUN_10107380(0,uVar8 + 0x40);
    if (pvVar10 == (LPVOID)0x0) {
      FUN_101366bc(0x40);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    *(LPVOID *)(((uint)pvVar10 & 0xffffffc0) + 0x3c) = pvVar10;
    _Dst = (undefined1 *)(((uint)pvVar10 & 0xffffffc0) + 0x40);
    local_24 = 0;
    local_2c = uVar12;
    local_28 = _Dst;
    if (uVar12 != 0) {
      iVar15 = 0x20;
      do {
        uVar4 = local_24;
        local_3c = (undefined4)((ulonglong)uVar18 >> 0x20);
        iVar13 = (int)uVar18;
        if (local_24 == local_2c) {
          FUN_10138ad0(&local_2c);
          iVar13 = iVar9;
          _Dst = local_28;
        }
        _Src = local_28;
        uVar18 = CONCAT44(local_3c,iVar13);
        *(int *)(_Dst + iVar15 + -0x20) = iVar13;
        local_24 = uVar4 + 1;
        *(undefined4 *)(_Dst + iVar15 + -0x1c) = local_3c;
        *(uint *)(_Dst + iVar15 + -0x18) = uVar14 + iVar9 * -1000000000;
        *(uint *)(_Dst + iVar15 + -0x10) = local_24;
        *(undefined4 *)(_Dst + iVar15 + -8) = 0;
        *(undefined4 *)(_Dst + iVar15 + -4) = 0;
        *(undefined4 *)(_Dst + iVar15) = 0;
        iVar15 = iVar15 + 0x40;
      } while (uVar12 != local_24);
      uVar14 = uVar12;
      _Dst = local_28;
      if (uVar12 < local_2c) {
        pvVar10 = FUN_10107380(0,uVar8 + 0x40);
        if (pvVar10 == (LPVOID)0x0) {
          FUN_101366bc(0x40);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        *(LPVOID *)(((uint)pvVar10 & 0xffffffc0) + 0x3c) = pvVar10;
        _Dst = (undefined1 *)(((uint)pvVar10 & 0xffffffc0) + 0x40);
        memcpy(_Dst,_Src,uVar8);
        pvVar10 = *(LPVOID *)(_Src + -4);
        hHeap = GetProcessHeap();
        HeapFree(hHeap,0,pvVar10);
      }
      goto LAB_100b707c;
    }
  }
  uVar14 = 0;
LAB_100b707c:
  puVar11 = FUN_10107380(0,0x10);
  if (puVar11 == (undefined4 *)0x0) {
    FUN_1013679e(4,0x10);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar8 = 0x1f;
  if (uVar12 != 0) {
    for (; uVar12 >> uVar8 == 0; uVar8 = uVar8 - 1) {
    }
  }
  *puVar11 = _Dst;
  puVar11[1] = uVar14;
  uVar14 = 0x3f;
  if (uVar12 != 0) {
    uVar14 = uVar8;
  }
  puVar11[2] = (uVar14 ^ 0xffffffe0) + 0x20;
  puVar11[3] = local_18;
  return;
}
