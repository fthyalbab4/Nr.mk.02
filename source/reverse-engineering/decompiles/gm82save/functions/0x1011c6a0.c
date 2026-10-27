// rea decompile_all
// name: FUN_1011c6a0
// address: 0x1011c6a0
// body: available
// range: 0x1011c6a0-0x1011c87c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1011c6a0(void)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  HANDLE hTimer;
  BOOL BVar5;
  DWORD DVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  LARGE_INTEGER local_40;
  uint local_38;
  LARGE_INTEGER local_30;
  int local_28;
  uint local_20;
  int local_1c;
  uint local_18;

  hTimer = CreateWaitableTimerExW((LPSECURITY_ATTRIBUTES)0x0,(LPCWSTR)0x0,2,0x1f0003);
  if (hTimer != (HANDLE)0x0) {
    local_40.s.HighPart = -1;
    local_40.s.LowPart = 0xfffcf2c0;
    BVar5 = SetWaitableTimer(hTimer,&local_40,0,(PTIMERAPCROUTINE)0x0,(LPVOID)0x0,0);
    if (BVar5 == 0) {
      CloseHandle(hTimer);
    }
    else {
      DVar6 = WaitForSingleObject(hTimer,0xffffffff);
      CloseHandle(hTimer);
      if (DVar6 != 0xffffffff) {
        return;
      }
    }
  }
  lVar12 = DAT_101633b8;
  if ((int)DAT_101633b8 == 0 && (int)((ulonglong)DAT_101633b8 >> 0x20) == 0) {
    lVar12 = FUN_1013c290();
  }
  uVar8 = (uint)((ulonglong)lVar12 >> 0x20);
  uVar9 = (uint)lVar12;
  local_30.QuadPart = 0.0;
  BVar5 = QueryPerformanceCounter(&local_30);
  if (BVar5 != 0) {
    uVar4 = local_30.s.LowPart;
    local_20 = local_30.s.HighPart;
    uVar11 = __aulldiv(local_30.s.LowPart,local_30.s.HighPart,uVar9,uVar8);
    local_1c = (int)(uVar11 >> 0x20) * 1000000000;
    uVar7 = (uint)(lVar12 * uVar11);
    lVar1 = (uVar11 & 0xffffffff) * 1000000000;
    iVar10 = (int)((ulonglong)lVar1 >> 0x20) + local_1c;
    lVar2 = (ulonglong)(uVar4 - uVar7) * 1000000000;
    local_18 = uVar9;
    lVar12 = __aulldiv((uint)lVar2,
                       (int)((ulonglong)lVar2 >> 0x20) +
                       ((local_20 - (int)(lVar12 * uVar11 >> 0x20)) - (uint)((uint)uVar4 < uVar7)) *
                       1000000000,uVar9,uVar8);
    lVar12 = lVar12 + CONCAT44(iVar10,(int)lVar1) + 0x3fffffffffffffff;
    uVar8 = (uint)lVar12;
    local_30 = (LARGE_INTEGER)__aulldiv(uVar8,(uint)((ulonglong)lVar12 >> 0x20),1000000000,0);
    local_28 = uVar8 + local_30.s.LowPart * -1000000000;
    Sleep(0x14);
    FUN_1010f430(&local_40,(uint *)&local_30);
    if ((local_40.s.LowPart == 0 && local_40.s.HighPart == 0) && (local_38 < 20000000)) {
      Sleep(1);
    }
    return;
  }
  local_40.s.HighPart = GetLastError();
  local_40.s.LowPart = 0;
  FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_40,&PTR_FUN_101569a8,
               &PTR_s_C__Users_runneradmin__rustup_too_10158df8);
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}
