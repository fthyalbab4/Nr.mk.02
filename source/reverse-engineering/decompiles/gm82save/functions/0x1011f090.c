// rea decompile_all
// name: FUN_1011f090
// address: 0x1011f090
// body: available
// range: 0x1011f090-0x1011f465 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_1011f090(undefined4 *param_1,DWORD param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            uint param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  HANDLE hProcess;
  BOOL BVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  LARGE_INTEGER local_58;
  uint local_4c;
  uint local_48;
  uint local_44;
  HANDLE local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  DWORD local_30;
  _FILETIME local_2c;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  int local_18;

  local_30 = param_2;
  if (param_2 == 0) {
LAB_1011f1c3:
    lVar11 = 0;
    local_48 = 0;
    local_4c = 0;
    local_38 = (undefined4 *)0x0;
  }
  else {
    hProcess = OpenProcess(0x410,0,param_2);
    if (0xfffffffd < (int)hProcess - 1U) {
      GetLastError();
      hProcess = (HANDLE)0x0;
    }
    if (0xfffffffd < (int)hProcess - 1U) {
      hProcess = OpenProcess(0x1000,0,local_30);
      if (0xfffffffd < (int)hProcess - 1U) {
        GetLastError();
        hProcess = (HANDLE)0x0;
      }
      if (0xfffffffd < (int)hProcess - 1U) goto LAB_1011f1c3;
    }
    local_58.s.LowPart = 0;
    local_2c.dwLowDateTime = 0;
    local_58.s.HighPart = 0;
    local_2c.dwHighDateTime = 0;
    BVar6 = GetProcessTimes(hProcess,(LPFILETIME)&local_58.s,&local_2c,&local_2c,&local_2c);
    if (BVar6 == 0) {
      GetLastError();
    }
    uVar5 = local_58.s.HighPart;
    uVar4 = local_58.s.LowPart;
    puVar7 = FUN_10107380(0,0xc);
    if (puVar7 == (undefined4 *)0x0) {
      FUN_1013679e(4,0xc);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    local_4c = param_6;
    local_48 = param_5;
    local_40 = hProcess;
    lVar11 = __aulldiv(uVar4,uVar5,10000000,0);
    lVar11 = lVar11 + -0x2b6109100;
    *puVar7 = 1;
    puVar7[1] = 1;
    uVar8 = (uint)((ulonglong)lVar11 >> 0x20);
    lVar14 = lVar11;
    if (param_6 < uVar8 || param_6 - uVar8 < (uint)(param_5 < (uint)lVar11)) {
      lVar14 = 0;
    }
    bVar10 = local_48 < (uint)lVar14;
    local_48 = local_48 - (uint)lVar14;
    puVar7[2] = local_40;
    local_4c = (local_4c - (int)((ulonglong)lVar14 >> 0x20)) - (uint)bVar10;
    local_38 = puVar7;
  }
  local_3c = (undefined4)((ulonglong)lVar11 >> 0x20);
  local_34 = (undefined4)lVar11;
  lVar14 = DAT_101633b8;
  if ((int)DAT_101633b8 == 0 && (int)((ulonglong)DAT_101633b8 >> 0x20) == 0) {
    lVar14 = FUN_1013c290();
    lVar11 = CONCAT44(local_3c,local_34);
  }
  local_3c = (undefined4)((ulonglong)lVar11 >> 0x20);
  local_34 = (undefined4)lVar11;
  uVar8 = (uint)((ulonglong)lVar14 >> 0x20);
  uVar9 = (uint)lVar14;
  local_58.s.HighPart = 0;
  local_58.s.LowPart = 0;
  BVar6 = QueryPerformanceCounter(&local_58);
  if (BVar6 != 0) {
    local_1c = local_58.s.LowPart;
    local_44 = local_58.s.HighPart;
    lVar12 = __aulldiv(local_58.s.LowPart,local_58.s.HighPart,uVar9,uVar8);
    local_24 = (undefined4)lVar12;
    local_20 = (uint)(lVar12 * lVar14);
    local_18 = (int)((ulonglong)lVar12 >> 0x20) * 1000000000;
    iVar2 = local_44 - (int)((ulonglong)(lVar12 * lVar14) >> 0x20);
    local_44 = (uint)(lVar12 * 1000000000);
    lVar11 = (ulonglong)(local_1c - local_20) * 1000000000;
    local_40 = (HANDLE)uVar9;
    lVar11 = __aulldiv((uint)lVar11,
                       (int)((ulonglong)lVar11 >> 0x20) +
                       (iVar2 - (uint)(local_1c < local_20)) * 1000000000,uVar9,uVar8);
    lVar11 = lVar11 + CONCAT44((int)((ulonglong)(lVar12 * 1000000000) >> 0x20),local_44) +
             0x3fffffffffffffff;
    uVar8 = (uint)lVar11;
    uVar13 = __aulldiv(uVar8,(uint)((ulonglong)lVar11 >> 0x20),1000000000,0);
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    uVar1 = param_7[1];
    *(undefined8 *)(param_1 + 0x10) = *param_7;
    *(undefined8 *)(param_1 + 0x12) = uVar1;
    param_1[0x32] = 0;
    param_1[0x33] = 4;
    param_1[0x34] = 0;
    param_1[0x14] = 0xffffffff;
    param_1[0x3b] = local_30;
    param_1[0x38] = 0xffffffff;
    param_1[0x35] = 0;
    param_1[0x36] = 4;
    param_1[0x37] = 0;
    param_1[0x18] = 0xffffffff;
    param_1[0x1c] = 0xffffffff;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x22) = 0;
    *param_1 = param_3;
    param_1[1] = param_4;
    param_1[2] = 1;
    param_1[0x3c] = local_38;
    *(undefined8 *)(param_1 + 0xc) = uVar13;
    param_1[0xe] = uVar8 + (int)uVar13 * -1000000000;
    param_1[0x25] = local_3c;
    param_1[0x24] = local_34;
    param_1[0x27] = local_4c;
    param_1[0x26] = local_48;
    param_1[0x3d] = 0;
    *(undefined2 *)(param_1 + 0x3e) = 0x101;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x2a) = 0;
    *(undefined8 *)(param_1 + 0x2c) = 0;
    *(undefined8 *)(param_1 + 0x2e) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    return;
  }
  local_2c.dwHighDateTime = GetLastError();
  local_2c.dwLowDateTime = 0;
  FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_2c,&PTR_FUN_101569a8,
               &PTR_s_C__Users_runneradmin__rustup_too_10158df8);
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}
