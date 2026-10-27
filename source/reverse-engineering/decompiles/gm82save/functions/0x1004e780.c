// rea decompile_all
// name: FUN_1004e780
// address: 0x1004e780
// body: available
// range: 0x1004e780-0x1004eaee inclusive
// range: 0x1004eaf0-0x1004ec3c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char __fastcall FUN_1004e780(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  undefined4 uVar5;
  BOOL BVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  LARGE_INTEGER local_a0;
  uint *local_98;
  undefined1 *local_90;
  uint *local_8c;
  uint *local_88;
  uint *local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  int local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;

  local_48 = 0xffffffff;
  local_30 = 0;
  local_28 = 0;
  local_38 = 0xffffffff;
  local_20 = 0;
  local_5c = param_3;
  local_58 = param_4;
  local_84 = param_1;
  local_60 = param_2;
  while( true ) {
    uVar5 = FUN_1004e150(param_1,(int)local_50);
    if ((((((char)uVar5 != '\0') ||
          (uVar5 = FUN_1004e150(param_1,(int)local_50), (char)uVar5 != '\0')) ||
         (uVar5 = FUN_1004e150(param_1,(int)local_50), (char)uVar5 != '\0')) ||
        ((uVar5 = FUN_1004e150(param_1,(int)local_50), (char)uVar5 != '\0' ||
         (uVar5 = FUN_1004e150(param_1,(int)local_50), (char)uVar5 != '\0')))) ||
       ((uVar5 = FUN_1004e150(param_1,(int)local_50), (char)uVar5 != '\0' ||
        ((uVar5 = FUN_1004e150(param_1,(int)local_50), (char)uVar5 != '\0' ||
         (uVar5 = FUN_1004e150(param_1,(int)local_50), (char)uVar5 != '\0')))))) break;
    SwitchToThread();
    uVar5 = FUN_1004e150(param_1,(int)local_50);
    if ((char)uVar5 != '\0') break;
    SwitchToThread();
    uVar5 = FUN_1004e150(param_1,(int)local_50);
    if ((char)uVar5 != '\0') break;
    SwitchToThread();
    uVar5 = FUN_1004e150(param_1,(int)local_50);
    if ((char)uVar5 != '\0') break;
    SwitchToThread();
    uVar5 = FUN_1004e150(param_1,(int)local_50);
    uVar7 = local_60;
    if ((char)uVar5 != '\0') break;
    if (local_58 != 0xffffffff) {
      local_78 = local_58;
      local_80 = local_5c;
      uVar14 = DAT_101633b8;
      if ((int)DAT_101633b8 == 0 && (int)((ulonglong)DAT_101633b8 >> 0x20) == 0) {
        uVar14 = FUN_1013c290();
      }
      uVar11 = (uint)((ulonglong)uVar14 >> 0x20);
      uVar10 = (uint)uVar14;
      local_64 = uVar7;
      local_a0.s.HighPart = 0;
      local_a0.s.LowPart = 0;
      BVar6 = QueryPerformanceCounter(&local_a0);
      if (BVar6 == 0) {
        local_8c = (uint *)GetLastError();
        local_90 = (undefined1 *)0x0;
        FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_90,&PTR_FUN_101569a8,
                     &PTR_s_C__Users_runneradmin__rustup_too_10158df8);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      local_70 = local_a0.s.LowPart;
      local_6c = local_a0.s.HighPart;
      local_7c = uVar11;
      lVar12 = __aulldiv(local_a0.s.LowPart,local_a0.s.HighPart,uVar10,uVar11);
      lVar3 = lVar12 * CONCAT44(local_7c,uVar10);
      uVar7 = (uint)lVar3;
      local_74 = (int)((ulonglong)lVar12 >> 0x20) * 1000000000;
      lVar13 = (ulonglong)(local_70 - uVar7) * 1000000000;
      local_68 = uVar10;
      lVar13 = __aulldiv((uint)lVar13,
                         (int)((ulonglong)lVar13 >> 0x20) +
                         ((local_6c - (int)((ulonglong)lVar3 >> 0x20)) - (uint)(local_70 < uVar7)) *
                         1000000000,uVar10,local_7c);
      lVar13 = lVar13 + lVar12 * 1000000000 + 0x3fffffffffffffff;
      uVar11 = (uint)lVar13;
      lVar13 = __aulldiv(uVar11,(uint)((ulonglong)lVar13 >> 0x20),1000000000,0);
      uVar7 = (uint)((ulonglong)lVar13 >> 0x20);
      param_1 = local_84;
      if (lVar13 == CONCAT44(local_80,local_64)) {
        if (local_78 <= uVar11 + (uint)lVar13 * -1000000000) {
          return '\0';
        }
      }
      else if (local_80 <= uVar7 && (uint)((uint)lVar13 < local_64) <= uVar7 - local_80) {
        return '\0';
      }
    }
    local_a0.s.LowPart = (DWORD)local_50;
    local_98 = &local_60;
    local_a0._4_4_ = param_1;
    puVar8 = FUN_10092f50();
    if (puVar8 == (undefined4 *)0x0) {
      FUN_10135a60((int *)&local_a0);
    }
    else {
      piVar9 = (int *)*puVar8;
      *puVar8 = 0;
      if (piVar9 == (int *)0x0) {
        piVar9 = FUN_10136d40();
        local_90 = local_50;
        local_a0.s.LowPart = 0;
        local_88 = local_98;
        local_8c = (uint *)local_a0.s.HighPart;
        FUN_10037b20((int *)&local_90,piVar9);
        LOCK();
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (*piVar9 == 0) {
          FUN_1009dc30(piVar9);
        }
      }
      else {
        piVar9[5] = 0;
        piVar9[6] = 0;
        local_90 = local_50;
        local_a0.s.LowPart = 0;
        local_88 = local_98;
        local_8c = (uint *)local_a0.s.HighPart;
        FUN_10037b20((int *)&local_90,piVar9);
        piVar1 = (int *)*puVar8;
        *puVar8 = piVar9;
        if (piVar1 != (int *)0x0) {
          LOCK();
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            FUN_1009dc30(piVar1);
          }
        }
      }
    }
  }
  bVar4 = FUN_1004e300((LPVOID)local_28,local_28._4_4_);
  return '\x02' - bVar4;
}
