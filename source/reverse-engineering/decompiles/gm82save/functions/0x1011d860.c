// rea decompile_all
// name: FUN_1011d860
// address: 0x1011d860
// body: available
// range: 0x1011d860-0x1011e20b inclusive
// range: 0x1011e210-0x1011e6d4 inclusive
// range: 0x1011e6e0-0x1011e7d4 inclusive
// range: 0x1011e7e0-0x1011e822 inclusive
// range: 0x1011e830-0x1011f083 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
FUN_1011d860(uint *param_1,char *param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            uint param_6)

{
  wchar_t *pwVar1;
  short *psVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  PSID pSid;
  LPVOID pvVar6;
  LPVOID pvVar7;
  longlong lVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  DWORD DVar18;
  PVOID pvVar19;
  PVOID pvVar20;
  DWORD DVar21;
  DWORD DVar22;
  undefined1 dwBytes [4];
  BOOL BVar23;
  HANDLE pvVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  DWORD DVar27;
  char *pcVar28;
  int iVar29;
  SIZE_T SVar30;
  undefined4 uVar31;
  byte bVar32;
  uint uVar33;
  undefined1 *puVar34;
  uint *puVar35;
  uint *puVar36;
  uint *puVar37;
  uint *puVar38;
  uint uVar39;
  LPCWSTR pWVar40;
  undefined1 *puVar41;
  uint uVar42;
  undefined4 *puVar43;
  int iVar44;
  LPCVOID pvVar45;
  uint uVar46;
  bool bVar47;
  bool bVar48;
  ushort in_FPUControlWord;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  ulonglong uVar52;
  longlong lVar53;
  undefined8 uVar54;
  _FILETIME local_82c;
  uint *puStack_824;
  uint *local_820;
  uint *local_81c;
  uint *puStack_818;
  uint *local_814;
  _MEMORY_BASIC_INFORMATION local_80c;
  uint *local_7f0;
  uint *puStack_7ec;
  undefined4 uStack_7e8;
  undefined4 uStack_7e4;
  uint *local_7e0;
  uint *puStack_7dc;
  uint *puStack_7d8;
  uint *puStack_7d4;
  ushort local_7c4;
  ushort local_7c2;
  LPCVOID local_7c0;
  LPCWSTR pWStack_7bc;
  undefined4 uStack_7b8;
  undefined4 uStack_7b4;
  uint *puStack_7b0;
  uint *puStack_7ac;
  undefined4 uStack_7a8;
  undefined4 uStack_7a4;
  _FILETIME local_798;
  undefined1 auStack_790 [16];
  uint *puStack_774;
  int iStack_770;
  float local_76c;
  float local_768;
  float local_764;
  _FILETIME local_760;
  _FILETIME local_758;
  _FILETIME local_750;
  longlong local_748;
  longlong local_740;
  longlong local_738;
  undefined1 local_730 [4];
  undefined1 auStack_72c [6];
  short sStack_726;
  undefined4 uStack_724;
  undefined1 auStack_720 [16];
  undefined8 uStack_710;
  uint *local_708;
  ushort uStack_6f0;
  LPCVOID pvStack_6ec;
  LPCVOID pvStack_6e8;
  short asStack_540 [8];
  short sStack_530;
  short sStack_52e;
  short sStack_52c;
  short sStack_52a;
  short sStack_528;
  LARGE_INTEGER local_2b8;
  undefined8 uStack_2b0;
  LPCVOID pvStack_2a8;
  ushort uStack_294;
  uint *puStack_290;
  ushort uStack_278;
  LPCVOID pvStack_274;
  uint *puStack_270;

  local_814 = (uint *)param_2;
  if (*param_2 == '\0') {
LAB_1011dd3b:
    puVar37 = local_814;
    if (*(char *)((int)local_814 + 1) != '\0') goto LAB_1011dd5b;
LAB_1011dd9f:
    if (*(char *)((int)puVar37 + 2) == '\0') goto LAB_1011de46;
LAB_1011dda9:
    local_708 = (uint *)0x0;
    uStack_710 = 0.0;
    auStack_720 = (undefined1  [16])0x0;
    _local_730 = (undefined1  [16])0x0;
    if (param_1[0x3c] == 0) goto LAB_1011de46;
    BVar23 = GetProcessMemoryInfo
                       (*(HANDLE *)(param_1[0x3c] + 8),(PPROCESS_MEMORY_COUNTERS)local_730,0x2c);
    if (BVar23 == 0) {
      GetLastError();
      uVar39 = param_1[0x3c];
    }
    else {
      param_1[0x20] = uStack_724;
      param_1[0x21] = 0;
      param_1[0x22] = (uint)local_708;
      param_1[0x23] = 0;
      uVar39 = param_1[0x3c];
    }
  }
  else {
    FUN_1010f430(local_730,param_1 + 0xc);
    local_750.dwLowDateTime = 0;
    local_760.dwLowDateTime = 0;
    local_758.dwLowDateTime = 0;
    local_798.dwLowDateTime = 0;
    local_82c.dwLowDateTime = 0;
    local_80c.BaseAddress = (LPCVOID)0x0;
    local_750.dwHighDateTime = 0;
    local_760.dwHighDateTime = 0;
    local_758.dwHighDateTime = 0;
    local_798.dwHighDateTime = 0;
    local_82c.dwHighDateTime = 0;
    local_80c.AllocationBase = (LPCWSTR)0x0;
    bVar48 = local_730 != (undefined1  [4])0x0 || auStack_72c._0_4_ != 0;
    if (local_730 == (undefined1  [4])0x0 && auStack_72c._0_4_ == 0) {
      bVar48 = 200000000 < stack0xfffff8d8;
    }
    if ((param_1[0x3c] != 0) &&
       (BVar23 = GetProcessTimes(*(HANDLE *)(param_1[0x3c] + 8),&local_750,&local_750,&local_760,
                                 &local_758), BVar23 == 0)) {
      GetLastError();
    }
    BVar23 = GetSystemTimes(&local_798,&local_82c,(LPFILETIME)&local_80c);
    if (BVar23 == 0) {
      GetLastError();
    }
    lVar53 = DAT_101633b8;
    if ((int)DAT_101633b8 == 0 && (int)((ulonglong)DAT_101633b8 >> 0x20) == 0) {
      lVar53 = FUN_1013c290();
    }
    uVar39 = (uint)((ulonglong)lVar53 >> 0x20);
    local_2b8.s.HighPart = 0;
    local_2b8.s.LowPart = 0;
    BVar23 = QueryPerformanceCounter(&local_2b8);
    if (BVar23 == 0) {
      DVar27 = GetLastError();
      auVar51._4_8_ = stack0xfffff8d8;
      auVar51._0_4_ = DVar27;
      auVar51._12_4_ = 0;
      _local_730 = auVar51 << 0x20;
      FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,local_730,&PTR_FUN_101569a8,
                   &PTR_s_C__Users_runneradmin__rustup_too_10158df8);
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    local_7e0 = (uint *)local_2b8.s.LowPart;
    local_7c0 = (LPCVOID)local_2b8.s.HighPart;
    uVar52 = __aulldiv(local_2b8.s.LowPart,local_2b8.s.HighPart,(uint)lVar53,uVar39);
    pvVar24 = (HANDLE)(lVar53 * uVar52);
    local_7f0 = (uint *)((int)(uVar52 >> 0x20) * 1000000000);
    bVar47 = local_7e0 < pvVar24;
    uVar33 = (int)local_7e0 - (int)pvVar24;
    lVar8 = (uVar52 & 0xffffffff) * 1000000000;
    local_7e0 = (uint *)lVar8;
    iVar44 = (int)((ulonglong)lVar8 >> 0x20) + (int)local_7f0;
    lVar8 = (ulonglong)uVar33 * 1000000000;
    lVar53 = __aulldiv((uint)lVar8,
                       (int)((ulonglong)lVar8 >> 0x20) +
                       (((int)local_7c0 - (int)(lVar53 * uVar52 >> 0x20)) - (uint)bVar47) *
                       1000000000,(uint)lVar53,uVar39);
    lVar53 = lVar53 + CONCAT44(iVar44,local_7e0) + 0x3fffffffffffffff;
    uVar39 = (uint)lVar53;
    uVar54 = __aulldiv(uVar39,(uint)((ulonglong)lVar53 >> 0x20),1000000000,0);
    DVar22 = local_758.dwHighDateTime;
    DVar21 = local_758.dwLowDateTime;
    DVar18 = local_760.dwHighDateTime;
    DVar27 = local_760.dwLowDateTime;
    local_7f0 = (uint *)local_82c.dwLowDateTime;
    puStack_7ec = (uint *)local_82c.dwHighDateTime;
    uStack_7e8 = 0;
    uStack_7e4 = 0;
    *(undefined8 *)(param_1 + 0xc) = uVar54;
    param_1[0xe] = uVar39 + (int)uVar54 * -1000000000;
    puVar25 = (undefined1 *)(local_758.dwLowDateTime + local_760.dwLowDateTime);
    local_7e0 = (uint *)local_760.dwLowDateTime;
    puStack_7dc = (uint *)local_760.dwHighDateTime;
    puStack_7d8 = (uint *)local_758.dwLowDateTime;
    puStack_7d4 = (uint *)local_758.dwHighDateTime;
    local_7c0 = local_80c.BaseAddress;
    pWStack_7bc = local_80c.AllocationBase;
    uStack_7b8 = 0;
    uStack_7b4 = 0;
    puVar34 = (undefined1 *)(local_758.dwHighDateTime + local_760.dwHighDateTime) +
              CARRY4(local_758.dwLowDateTime,local_760.dwLowDateTime);
    if (CARRY4(local_758.dwHighDateTime,local_760.dwHighDateTime) ||
        CARRY4((uint)(local_758.dwHighDateTime + local_760.dwHighDateTime),
               (uint)CARRY4(local_758.dwLowDateTime,local_760.dwLowDateTime))) {
      puVar34 = (undefined1 *)0xffffffff;
      puVar25 = (undefined1 *)0xffffffff;
    }
    uVar54 = __aulldiv((uint)puVar25,(uint)puVar34,10000,0);
    *(undefined8 *)(param_1 + 0x30) = uVar54;
    if (bVar48) {
      puVar37 = (uint *)param_1[8];
      puVar35 = (uint *)param_1[9];
      local_820 = (uint *)DVar22;
      local_81c = (uint *)DVar21;
      if (puStack_7ec < puVar35 ||
          (uint)((int)puStack_7ec - (int)puVar35) < (uint)(local_7f0 < puVar37)) {
        puVar37 = (uint *)0x0;
        puVar35 = (uint *)0x0;
      }
      pvVar45 = (LPCVOID)param_1[10];
      puVar34 = (undefined1 *)((int)puStack_7ec + (-(uint)(local_7f0 < puVar37) - (int)puVar35));
      pWVar40 = (LPCWSTR)param_1[0xb];
      if (pWStack_7bc < pWVar40 ||
          (uint)((int)pWStack_7bc - (int)pWVar40) < (uint)(local_7c0 < pvVar45)) {
        pvVar45 = (LPCVOID)0x0;
        pWVar40 = (LPCWSTR)0x0;
      }
      puVar35 = (uint *)param_1[7];
      puVar38 = (uint *)param_1[6];
      uVar33 = (int)pWStack_7bc + (-(uint)(local_7c0 < pvVar45) - (int)pWVar40);
      iVar44 = ((int)local_7c0 - (int)pvVar45) + ((int)local_7f0 - (int)puVar37);
      puVar36 = (uint *)param_1[5];
      uVar39 = (uint)CARRY4((int)local_7c0 - (int)pvVar45,(int)local_7f0 - (int)puVar37);
      puVar25 = puVar34 + uVar33;
      puVar26 = puVar25 + uVar39;
      if (CARRY4(uVar33,(uint)puVar34) || CARRY4((uint)puVar25,uVar39)) {
        iVar44 = -1;
        puVar26 = (undefined1 *)0xffffffff;
      }
      puVar37 = (uint *)param_1[4];
      param_1[4] = (uint)local_7e0;
      param_1[5] = (uint)puStack_7dc;
      param_1[6] = (uint)puStack_7d8;
      param_1[7] = (uint)puStack_7d4;
      param_1[8] = (uint)local_7f0;
      param_1[9] = (uint)puStack_7ec;
      param_1[10] = (uint)local_7c0;
      param_1[0xb] = (uint)pWStack_7bc;
      local_7f0 = puVar36;
      if (iVar44 != 0 || puVar26 != (undefined1 *)0x0) {
        local_740 = CONCAT44(puVar26,iVar44);
        if (DVar18 < puVar36 || DVar18 - (int)puVar36 < (uint)(DVar27 < puVar37)) {
          puVar37 = (uint *)0x0;
          puVar36 = (uint *)0x0;
        }
        puVar34 = (undefined1 *)(DVar18 + (-(uint)(DVar27 < puVar37) - (int)puVar36));
        puVar36 = puVar38;
        if (DVar22 < puVar35 || DVar22 - (int)puVar35 < (uint)(DVar21 < puVar38)) {
          puVar35 = (uint *)0x0;
          puVar36 = (uint *)0x0;
        }
        puVar41 = (undefined1 *)(DVar22 + (-(uint)(DVar21 < puVar36) - (int)puVar35));
        local_7c2 = in_FPUControlWord | 0x300;
        local_768 = (float)local_740 + *(float *)(&DAT_1013f0a0 + ((int)puVar26 >> 0x1f) * -4);
        iVar44 = (DVar21 - (int)puVar36) + (DVar27 - (int)puVar37);
        uVar39 = (uint)CARRY4(DVar21 - (int)puVar36,DVar27 - (int)puVar37);
        puVar25 = puVar41 + (int)puVar34;
        puVar26 = puVar25 + uVar39;
        if (CARRY4((uint)puVar41,(uint)puVar34) || CARRY4((uint)puVar25,uVar39)) {
          puVar26 = (undefined1 *)0xffffffff;
          iVar44 = -1;
        }
        local_738 = CONCAT44(puVar26,iVar44);
        local_7c4 = in_FPUControlWord | 0x300;
        local_748 = CONCAT44(param_4,param_3);
        local_76c = (float)local_738 + *(float *)(&DAT_1013f0a0 + ((int)puVar26 >> 0x1f) * -4);
        local_764 = (float)local_748;
        param_1[0x3d] = (uint)((local_76c / local_768) * 100.0 * local_764);
        local_7e0 = puVar38;
        goto LAB_1011dd3b;
      }
      param_1[0x3d] = 0;
    }
    puVar37 = local_814;
    if (*(char *)((int)local_814 + 1) == '\0') goto LAB_1011dd9f;
LAB_1011dd5b:
    puVar37 = local_814;
    if (param_1[0x3c] == 0) goto LAB_1011dd9f;
    BVar23 = GetProcessIoCounters(*(HANDLE *)(param_1[0x3c] + 8),(PIO_COUNTERS)local_730);
    if (BVar23 != 0) {
      param_1[0x28] = param_1[0x2c];
      param_1[0x29] = param_1[0x2d];
      param_1[0x2a] = param_1[0x2e];
      param_1[0x2b] = param_1[0x2f];
      param_1[0x2c] = auStack_720._8_4_;
      param_1[0x2d] = auStack_720._12_4_;
      param_1[0x2e] = (uint)uStack_710;
      param_1[0x2f] = uStack_710._4_4_;
      goto LAB_1011dd9f;
    }
    GetLastError();
    if (*(char *)((int)puVar37 + 2) != '\0') goto LAB_1011dda9;
LAB_1011de46:
    uVar39 = param_1[0x3c];
  }
  if (((uVar39 != 0) && (*(char *)((int)puVar37 + 4) != '\0')) &&
     ((*(char *)((int)puVar37 + 4) == '\x01' || (param_1[0x38] == 0xffffffff)))) {
    local_2b8.s.LowPart = 0;
    BVar23 = OpenProcessToken(*(HANDLE *)(uVar39 + 8),8,(PHANDLE)&local_2b8);
    uVar31 = local_2b8.s.LowPart;
    if (BVar23 != 0) {
      if (0xfffffffd < local_2b8.s.LowPart - 1) goto LAB_1011e074;
      auVar10._12_4_ = 0;
      auVar10._0_12_ = _auStack_72c;
      _local_730 = auVar10 << 0x20;
      BVar23 = GetTokenInformation((HANDLE)local_2b8.s.LowPart,TokenUser,(LPVOID)0x0,0,
                                   (PDWORD)local_730);
      if (BVar23 == 0) {
        DVar27 = GetLastError();
        uVar39 = DVar27 & 0xffff | 0x80070000;
        if ((int)DVar27 < 1) {
          uVar39 = DVar27;
        }
        if (uVar39 == 0x8007007a) goto LAB_1011def0;
      }
      else {
LAB_1011def0:
        dwBytes = local_730;
        pvVar24 = GetProcessHeap();
        if ((int)pvVar24 - 1U < 0xfffffffe) {
          puVar43 = HeapAlloc(pvVar24,8,(SIZE_T)dwBytes);
          if (puVar43 != (undefined4 *)0x0) {
            BVar23 = GetTokenInformation((HANDLE)uVar31,TokenUser,puVar43,(DWORD)local_730,
                                         (PDWORD)local_730);
            if (BVar23 == 0) {
              GetLastError();
              FUN_1011f640(puVar43);
            }
            else {
              pSid = (PSID)*puVar43;
              if ((pSid != (PSID)0x0) && (BVar23 = IsValidSid(pSid), BVar23 != 0)) {
                DVar27 = GetLengthSid(pSid);
                if ((int)DVar27 < 0) {
                  FUN_101367b0();
                    /* WARNING: Does not return */
                  pcVar9 = (code *)invalidInstructionException();
                  (*pcVar9)();
                }
                if (DVar27 == 0) {
                  BVar23 = CopySid(0,(PSID)0x1,pSid);
                  if (BVar23 != 0) {
                    FUN_10136b52(0,0,&PTR_s_C__Users_runneradmin__cargo_regi_1015979c);
                    /* WARNING: Does not return */
                    pcVar9 = (code *)invalidInstructionException();
                    (*pcVar9)();
                  }
                  GetLastError();
                }
                else {
                  pcVar28 = FUN_10107380(8,DVar27);
                  if (pcVar28 == (char *)0x0) {
                    FUN_101366bc(1);
                    /* WARNING: Does not return */
                    pcVar9 = (code *)invalidInstructionException();
                    (*pcVar9)();
                  }
                  BVar23 = CopySid(DVar27,pcVar28,pSid);
                  if (BVar23 == 0) {
                    GetLastError();
                    pvVar24 = GetProcessHeap();
                    HeapFree(pvVar24,0,pcVar28);
                  }
                  else {
                    if (*pcVar28 != '\x01') {
                      FUN_1013d59d();
                    /* WARNING: Does not return */
                      pcVar9 = (code *)invalidInstructionException();
                      (*pcVar9)();
                    }
                    if (0 < (int)param_1[0x38]) {
                      pvVar6 = (LPVOID)param_1[0x39];
                      pvVar24 = GetProcessHeap();
                      HeapFree(pvVar24,0,pvVar6);
                    }
                    param_1[0x38] = DVar27;
                    param_1[0x39] = (uint)pcVar28;
                    param_1[0x3a] = DVar27;
                  }
                }
              }
              pvVar24 = GetProcessHeap();
              if ((0xfffffffd < (int)pvVar24 - 1U) ||
                 (BVar23 = HeapFree(pvVar24,0,puVar43), BVar23 == 0)) goto LAB_1011e055;
            }
          }
        }
        else {
LAB_1011e055:
          GetLastError();
        }
      }
      BVar23 = CloseHandle((HANDLE)uVar31);
      puVar37 = local_814;
      if (BVar23 != 0) goto LAB_1011e074;
    }
    GetLastError();
  }
LAB_1011e074:
  cVar3 = *(char *)((int)puVar37 + 5);
  cVar4 = *(char *)((int)puVar37 + 6);
  cVar5 = *(char *)((int)puVar37 + 7);
  puVar37 = (uint *)(uint)*(byte *)((int)puVar37 + 8);
  if ((((((puVar37 == (uint *)0x0) || ((puVar37 != (uint *)0x1 && (param_1[0x34] != 0)))) &&
        ((cVar5 == '\0' || ((cVar5 != '\x01' && (param_1[0x37] != 0)))))) &&
       ((cVar3 == '\0' || ((cVar3 != '\x01' && (param_1[0x18] != 0xffffffff)))))) &&
      ((cVar4 == '\0' || ((cVar4 != '\x01' && (param_1[0x1c] != 0xffffffff)))))) ||
     (param_1[0x3c] == 0)) goto LAB_1011e368;
  puVar35 = *(uint **)(param_1[0x3c] + 8);
  local_7e0 = puVar37;
  iVar44 = NtQueryInformationProcess(puVar35,0x1a,&local_798,4,0);
  if (iVar44 < 0) goto LAB_1011e368;
  pvVar45 = (LPCVOID)local_798.dwLowDateTime;
  local_7f0 = puVar35;
  if ((LPCVOID)local_798.dwLowDateTime != (LPCVOID)0x0) goto LAB_1011e11e;
  local_7c0 = (LPCVOID)local_798.dwLowDateTime;
  iVar44 = NtQueryInformationProcess(puVar35,0,local_730,0x18,0);
  if (iVar44 < 0) goto LAB_1011e368;
  *param_1 = (uint)(auStack_720._4_4_ != 0);
  param_1[1] = auStack_720._4_4_;
  BVar23 = ReadProcessMemory(puVar35,(LPCVOID)auStack_72c._0_4_,&local_2b8,0x1d8,(SIZE_T *)0x0);
  if ((BVar23 != 0) &&
     (BVar23 = ReadProcessMemory(puVar35,pvStack_2a8,local_730,0x2a4,(SIZE_T *)0x0), BVar23 != 0)) {
    local_81c = (uint *)(uint)uStack_710._4_2_;
    local_820 = local_708;
    if ((local_7e0 != (uint *)0x0) && ((local_7e0 == (uint *)0x1 || (param_1[0x34] == 0)))) {
      if (DAT_101631d0 == 0) {
        if (DAT_101631d4 != '\0') goto LAB_1011e32d;
LAB_1011eb55:
        puStack_7b0 = param_1 + 0x32;
        FUN_1011f670((int *)&local_80c,local_7f0,pvStack_6ec,(uint)uStack_6f0);
        pvVar20 = local_80c.AllocationBase;
        pvVar19 = local_80c.BaseAddress;
        if (local_80c.BaseAddress == (LPCVOID)0xffffffff) {
          local_82c.dwLowDateTime = 0;
          local_82c.dwHighDateTime = (DWORD)&DAT_00000004;
          puStack_824 = (uint *)0x0;
        }
        else {
          FUN_1011f750(&local_82c,local_80c.AllocationBase);
          if (pvVar19 != (LPCVOID)0x0) {
            pvVar24 = GetProcessHeap();
            HeapFree(pvVar24,0,pvVar20);
          }
        }
        uVar39 = param_1[0x34];
        puStack_818 = (uint *)param_1[0x33];
        if (uVar39 != 0) {
          puVar37 = puStack_818 + 1;
          do {
            if (puVar37[-1] != 0) {
              pvVar6 = (LPVOID)*puVar37;
              pvVar24 = GetProcessHeap();
              HeapFree(pvVar24,0,pvVar6);
            }
            puVar37 = puVar37 + 4;
            uVar39 = uVar39 - 1;
          } while (uVar39 != 0);
        }
        puVar37 = puStack_7b0;
        if (*puStack_7b0 != 0) {
          pvVar24 = GetProcessHeap();
          HeapFree(pvVar24,0,puStack_818);
        }
        uVar54 = CONCAT44(local_82c.dwHighDateTime,local_82c.dwLowDateTime);
        puVar35 = puStack_824;
      }
      else {
        FUN_1013d5cf();
        if (DAT_101631d4 == '\0') goto LAB_1011eb55;
LAB_1011e32d:
        puStack_7b0 = param_1 + 0x32;
        FUN_1011f850((undefined8 *)&local_80c,(undefined8 *)local_7f0);
        uVar39 = param_1[0x34];
        puStack_818 = (uint *)param_1[0x33];
        if (uVar39 != 0) {
          puVar37 = puStack_818 + 1;
          do {
            if (puVar37[-1] != 0) {
              pvVar6 = (LPVOID)*puVar37;
              pvVar24 = GetProcessHeap();
              HeapFree(pvVar24,0,pvVar6);
            }
            puVar37 = puVar37 + 4;
            uVar39 = uVar39 - 1;
          } while (uVar39 != 0);
        }
        puVar37 = puStack_7b0;
        if (*puStack_7b0 != 0) {
          pvVar24 = GetProcessHeap();
          HeapFree(pvVar24,0,puStack_818);
        }
        uVar54 = CONCAT44(local_80c.AllocationBase,local_80c.BaseAddress);
        puVar35 = (uint *)local_80c.AllocationProtect;
      }
      puVar37[2] = (uint)puVar35;
      *(undefined8 *)puVar37 = uVar54;
    }
    puVar37 = local_7f0;
    puVar35 = local_7f0;
    if ((cVar5 != '\0') && ((cVar5 == '\x01' || (param_1[0x37] == 0)))) {
      SVar30 = VirtualQueryEx(local_7f0,pvStack_6e8,&local_80c,0x1c);
      if ((SVar30 != 0) &&
         (FUN_1011f670((int *)&local_82c,puVar37,pvStack_6e8,
                       (uint)(((int)local_80c.BaseAddress - (int)pvStack_6e8) + local_80c.RegionSize
                             )), puVar37 = puStack_824,
         (uint *)local_82c.dwLowDateTime != (uint *)0xffffffff)) {
        uVar39 = param_1[0x37];
        puStack_818 = (uint *)local_82c.dwLowDateTime;
        param_1[0x37] = 0;
        puStack_7b0 = (uint *)local_82c.dwHighDateTime;
        if (uVar39 != 0) {
          puVar43 = (undefined4 *)(param_1[0x36] + 4);
          do {
            if (puVar43[-1] != 0) {
              pvVar6 = (LPVOID)*puVar43;
              pvVar24 = GetProcessHeap();
              HeapFree(pvVar24,0,pvVar6);
            }
            puVar43 = puVar43 + 4;
            uVar39 = uVar39 - 1;
          } while (uVar39 != 0);
        }
        puVar35 = (uint *)0x0;
        iStack_770 = (int)puVar37 * 2;
        do {
          iVar44 = iStack_770 + (int)puVar35 * -2;
          if (iVar44 == 0) {
LAB_1011ee5e:
            puVar35 = local_7f0;
            if (puStack_818 != (uint *)0x0) {
              pvVar24 = GetProcessHeap();
              HeapFree(pvVar24,0,puStack_7b0);
            }
            goto LAB_1011ee87;
          }
          uVar39 = 0;
          pwVar1 = (wchar_t *)((int)puStack_7b0 + (int)puVar35 * 2);
          while (pwVar1[uVar39] != L'\0') {
            uVar39 = uVar39 + 1;
            iVar44 = iVar44 + -2;
            if (iVar44 == 0) goto LAB_1011ee5e;
          }
          puVar38 = (uint *)(uVar39 + (int)puVar35);
          if ((CARRY4(uVar39,(uint)puVar35)) || (puVar37 < puVar38)) {
            FUN_10136a50((uint)puVar35,(uint)puVar38,(uint)puVar37,
                         &PTR_s_C__Users_runneradmin__cargo_regi_10159700);
                    /* WARNING: Does not return */
            pcVar9 = (code *)invalidInstructionException();
            (*pcVar9)();
          }
          puStack_774 = puVar38;
          uVar31 = FUN_1011f980(pwVar1,uVar39);
          if ((char)uVar31 == '\0') goto LAB_1011ee5e;
          FUN_10093310((undefined8 *)&local_80c,(ushort *)pwVar1,uVar39);
          uVar39 = param_1[0x37];
          if (uVar39 == param_1[0x35]) {
            FUN_10135f30(param_1 + 0x35);
          }
          uVar33 = param_1[0x36];
          puVar35 = (uint *)((int)puStack_774 + 1);
          puVar43 = (undefined4 *)(uVar33 + 8 + uVar39 * 0x10);
          *puVar43 = local_80c.AllocationProtect;
          puVar43[1] = local_80c.RegionSize;
          *(ulonglong *)(uVar33 + uVar39 * 0x10) =
               CONCAT44(local_80c.AllocationBase,local_80c.BaseAddress);
          param_1[0x37] = uVar39 + 1;
        } while (puVar35 <= puVar37);
        goto LAB_1011f00d;
      }
      uVar39 = param_1[0x37];
      pvVar6 = (LPVOID)param_1[0x36];
      if (uVar39 != 0) {
        puVar43 = (undefined4 *)((int)pvVar6 + 4);
        do {
          if (puVar43[-1] != 0) {
            pvVar7 = (LPVOID)*puVar43;
            pvVar24 = GetProcessHeap();
            HeapFree(pvVar24,0,pvVar7);
          }
          puVar43 = puVar43 + 4;
          uVar39 = uVar39 - 1;
        } while (uVar39 != 0);
      }
      if (param_1[0x35] != 0) {
        pvVar24 = GetProcessHeap();
        HeapFree(pvVar24,0,pvVar6);
      }
      param_1[0x35] = 0;
      param_1[0x36] = 4;
      param_1[0x37] = 0;
      puVar35 = local_7f0;
    }
LAB_1011ee87:
    if (cVar3 == '\0') {
      bVar48 = false;
    }
    else if (cVar3 == '\x01') {
      bVar48 = true;
    }
    else {
      bVar48 = param_1[0x18] == 0xffffffff;
    }
    pvVar45 = local_7c0;
    if (cVar4 == '\0') {
      if (bVar48) goto LAB_1011eeca;
    }
    else if ((cVar4 == '\x01') || (param_1[0x1c] == 0xffffffff || bVar48)) {
LAB_1011eeca:
      FUN_1011f670((int *)&local_82c,puVar35,local_820,(uint)local_81c);
      if ((uint *)local_82c.dwLowDateTime == (uint *)0xffffffff) {
        if (0 < (int)param_1[0x18]) {
          pvVar6 = (LPVOID)param_1[0x19];
          pvVar24 = GetProcessHeap();
          HeapFree(pvVar24,0,pvVar6);
        }
        param_1[0x18] = 0xffffffff;
        pvVar45 = local_7c0;
      }
      else {
        local_81c = (uint *)local_82c.dwLowDateTime;
        if (puStack_824 == (uint *)0x0) {
          puVar37 = (uint *)0x0;
        }
        else {
          iVar44 = (int)puStack_824 * 2;
          puVar35 = (uint *)0x0;
          do {
            puVar37 = puVar35;
            if (*(short *)(local_82c.dwHighDateTime + (int)puVar35 * 2) == 0) break;
            puVar35 = (uint *)((int)puVar35 + 1);
            iVar44 = iVar44 + -2;
            puVar37 = puStack_824;
          } while (iVar44 != 0);
        }
        local_820 = (uint *)local_82c.dwHighDateTime;
        FUN_10093310((undefined8 *)&local_80c,(ushort *)local_82c.dwHighDateTime,(SIZE_T)puVar37);
        pvVar20 = local_80c.AllocationBase;
        pvVar19 = local_80c.BaseAddress;
        puStack_7b0 = (uint *)local_80c.AllocationProtect;
        puStack_7ac = (uint *)local_80c.RegionSize;
        uStack_7a8 = 0;
        uStack_7a4 = 0;
        FUN_1011fa10(cVar4,local_80c.AllocationBase,local_80c.AllocationProtect,param_1 + 0x1c);
        if (bVar48) {
          if (0 < (int)param_1[0x18]) {
            pvVar6 = (LPVOID)param_1[0x19];
            pvVar24 = GetProcessHeap();
            HeapFree(pvVar24,0,pvVar6);
          }
          param_1[0x18] = (uint)pvVar19;
          param_1[0x19] = (uint)pvVar20;
          *(ulonglong *)(param_1 + 0x1a) = CONCAT44(puStack_7ac,puStack_7b0);
        }
        else if (pvVar19 != (LPCVOID)0x0) {
          pvVar24 = GetProcessHeap();
          HeapFree(pvVar24,0,pvVar20);
        }
        puVar35 = local_7f0;
        pvVar45 = local_7c0;
        if (local_81c != (uint *)0x0) {
          pvVar24 = GetProcessHeap();
          HeapFree(pvVar24,0,local_820);
          pvVar45 = local_7c0;
        }
      }
    }
LAB_1011e11e:
    BVar23 = ReadProcessMemory(puVar35,pvVar45,local_730,0x470,(SIZE_T *)0x0);
    if (BVar23 != 0) {
      BVar23 = ReadProcessMemory(puVar35,(LPCVOID)auStack_720._0_4_,&local_2b8,0x2a4,(SIZE_T *)0x0);
      if (BVar23 != 0) {
        local_7c0 = (LPCVOID)(uint)uStack_294;
        local_81c = puStack_290;
        local_820 = puStack_270;
        if ((local_7e0 != (uint *)0x0) && ((local_7e0 == (uint *)0x1 || (param_1[0x34] == 0)))) {
          if (DAT_101631d0 == 0) {
            if (DAT_101631d4 != '\0') goto LAB_1011e1db;
LAB_1011e65d:
            local_7e0 = param_1 + 0x32;
            FUN_1011f670((int *)&local_80c,local_7f0,pvStack_274,(uint)uStack_278);
            pvVar20 = local_80c.AllocationBase;
            pvVar19 = local_80c.BaseAddress;
            if (local_80c.BaseAddress == (LPCVOID)0xffffffff) {
              local_82c.dwLowDateTime = 0;
              local_82c.dwHighDateTime = (DWORD)&DAT_00000004;
              puStack_824 = (uint *)0x0;
            }
            else {
              FUN_1011f750(&local_82c,local_80c.AllocationBase);
              if (pvVar19 != (LPCVOID)0x0) {
                pvVar24 = GetProcessHeap();
                HeapFree(pvVar24,0,pvVar20);
              }
            }
            pvVar6 = (LPVOID)param_1[0x33];
            uVar39 = param_1[0x34];
            if (uVar39 != 0) {
              puVar43 = (undefined4 *)((int)pvVar6 + 4);
              do {
                if (puVar43[-1] != 0) {
                  pvVar7 = (LPVOID)*puVar43;
                  pvVar24 = GetProcessHeap();
                  HeapFree(pvVar24,0,pvVar7);
                }
                puVar43 = puVar43 + 4;
                uVar39 = uVar39 - 1;
              } while (uVar39 != 0);
            }
            puVar37 = local_7e0;
            if (*local_7e0 != 0) {
              pvVar24 = GetProcessHeap();
              HeapFree(pvVar24,0,pvVar6);
            }
            uVar54 = CONCAT44(local_82c.dwHighDateTime,local_82c.dwLowDateTime);
            puVar35 = puStack_824;
          }
          else {
            FUN_1013d5cf();
            if (DAT_101631d4 == '\0') goto LAB_1011e65d;
LAB_1011e1db:
            local_7e0 = param_1 + 0x32;
            FUN_1011f850((undefined8 *)&local_80c,(undefined8 *)local_7f0);
            pvVar6 = (LPVOID)param_1[0x33];
            uVar39 = param_1[0x34];
            if (uVar39 != 0) {
              puVar43 = (undefined4 *)((int)pvVar6 + 4);
              do {
                if (puVar43[-1] != 0) {
                  pvVar7 = (LPVOID)*puVar43;
                  pvVar24 = GetProcessHeap();
                  HeapFree(pvVar24,0,pvVar7);
                }
                puVar43 = puVar43 + 4;
                uVar39 = uVar39 - 1;
              } while (uVar39 != 0);
            }
            puVar37 = local_7e0;
            if (*local_7e0 != 0) {
              pvVar24 = GetProcessHeap();
              HeapFree(pvVar24,0,pvVar6);
            }
            uVar54 = CONCAT44(local_80c.AllocationBase,local_80c.BaseAddress);
            puVar35 = (uint *)local_80c.AllocationProtect;
          }
          puVar37[2] = (uint)puVar35;
          *(undefined8 *)puVar37 = uVar54;
        }
        puVar37 = local_820;
        puVar35 = local_7f0;
        if ((cVar5 != '\0') && ((cVar5 == '\x01' || (param_1[0x37] == 0)))) {
          SVar30 = VirtualQueryEx(local_7f0,local_820,&local_80c,0x1c);
          if ((SVar30 != 0) &&
             (FUN_1011f670((int *)&local_82c,local_7f0,puVar37,
                           (uint)(((int)local_80c.BaseAddress - (int)puVar37) + local_80c.RegionSize
                                 )), puVar37 = puStack_824,
             (uint *)local_82c.dwLowDateTime != (uint *)0xffffffff)) {
            uVar39 = param_1[0x37];
            local_820 = (uint *)local_82c.dwLowDateTime;
            param_1[0x37] = 0;
            local_7e0 = (uint *)local_82c.dwHighDateTime;
            if (uVar39 != 0) {
              puVar43 = (undefined4 *)(param_1[0x36] + 4);
              do {
                if (puVar43[-1] != 0) {
                  pvVar6 = (LPVOID)*puVar43;
                  pvVar24 = GetProcessHeap();
                  HeapFree(pvVar24,0,pvVar6);
                }
                puVar43 = puVar43 + 4;
                uVar39 = uVar39 - 1;
              } while (uVar39 != 0);
            }
            puStack_7b0 = param_1 + 0x35;
            puVar35 = (uint *)0x0;
            do {
              iVar44 = (int)puVar37 * 2 + (int)puVar35 * -2;
              if (iVar44 == 0) {
LAB_1011e973:
                puVar35 = local_7f0;
                if (local_820 != (uint *)0x0) {
                  pvVar24 = GetProcessHeap();
                  HeapFree(pvVar24,0,local_7e0);
                }
                goto LAB_1011e99d;
              }
              uVar39 = 0;
              pwVar1 = (wchar_t *)((int)local_7e0 + (int)puVar35 * 2);
              while (pwVar1[uVar39] != L'\0') {
                uVar39 = uVar39 + 1;
                iVar44 = iVar44 + -2;
                if (iVar44 == 0) goto LAB_1011e973;
              }
              puVar38 = (uint *)(uVar39 + (int)puVar35);
              if ((CARRY4(uVar39,(uint)puVar35)) || (puVar37 < puVar38)) {
                FUN_10136a50((uint)puVar35,(uint)puVar38,(uint)puVar37,
                             &PTR_s_C__Users_runneradmin__cargo_regi_10159700);
                    /* WARNING: Does not return */
                pcVar9 = (code *)invalidInstructionException();
                (*pcVar9)();
              }
              uVar31 = FUN_1011f980(pwVar1,uVar39);
              if ((char)uVar31 == '\0') goto LAB_1011e973;
              FUN_10093310((undefined8 *)&local_80c,(ushort *)pwVar1,uVar39);
              uVar39 = param_1[0x37];
              if (uVar39 == param_1[0x35]) {
                FUN_10135f30(puStack_7b0);
              }
              uVar33 = param_1[0x36];
              puVar35 = (uint *)((int)puVar38 + 1);
              *(ulonglong *)(uVar33 + 8 + uVar39 * 0x10) =
                   CONCAT44(local_80c.RegionSize,local_80c.AllocationProtect);
              *(ulonglong *)(uVar33 + uVar39 * 0x10) =
                   CONCAT44(local_80c.AllocationBase,local_80c.BaseAddress);
              param_1[0x37] = uVar39 + 1;
            } while (puVar35 <= puVar37);
LAB_1011f00d:
            FUN_10136a50((uint)puVar35,(uint)puVar37,(uint)puVar37,
                         &PTR_s_C__Users_runneradmin__cargo_regi_10159710);
                    /* WARNING: Does not return */
            pcVar9 = (code *)invalidInstructionException();
            (*pcVar9)();
          }
          uVar39 = param_1[0x37];
          pvVar6 = (LPVOID)param_1[0x36];
          if (uVar39 != 0) {
            puVar43 = (undefined4 *)((int)pvVar6 + 4);
            do {
              if (puVar43[-1] != 0) {
                pvVar7 = (LPVOID)*puVar43;
                pvVar24 = GetProcessHeap();
                HeapFree(pvVar24,0,pvVar7);
              }
              puVar43 = puVar43 + 4;
              uVar39 = uVar39 - 1;
            } while (uVar39 != 0);
          }
          if (param_1[0x35] != 0) {
            pvVar24 = GetProcessHeap();
            HeapFree(pvVar24,0,pvVar6);
          }
          param_1[0x35] = 0;
          param_1[0x36] = 4;
          param_1[0x37] = 0;
          puVar35 = local_7f0;
        }
LAB_1011e99d:
        if (cVar3 == '\0') {
          bVar48 = false;
joined_r0x1011e9cb:
          if (cVar4 != '\0') goto LAB_1011e9af;
LAB_1011e9cd:
          if (!bVar48) goto LAB_1011e368;
        }
        else {
          if (cVar3 != '\x01') {
            bVar48 = param_1[0x18] == 0xffffffff;
            goto joined_r0x1011e9cb;
          }
          bVar48 = true;
          if (cVar4 == '\0') goto LAB_1011e9cd;
LAB_1011e9af:
          if ((cVar4 != '\x01') && (param_1[0x1c] != 0xffffffff && !bVar48)) goto LAB_1011e368;
        }
        FUN_1011f670((int *)&local_82c,puVar35,local_81c,(uint)local_7c0);
        DVar18 = local_82c.dwHighDateTime;
        DVar27 = local_82c.dwLowDateTime;
        if ((uint *)local_82c.dwLowDateTime == (uint *)0xffffffff) {
          if (0 < (int)param_1[0x18]) {
            pvVar6 = (LPVOID)param_1[0x19];
            pvVar24 = GetProcessHeap();
            HeapFree(pvVar24,0,pvVar6);
          }
          param_1[0x18] = 0xffffffff;
        }
        else {
          if (puStack_824 == (uint *)0x0) {
            puVar37 = (uint *)0x0;
          }
          else {
            iVar44 = (int)puStack_824 * 2;
            puVar35 = (uint *)0x0;
            do {
              puVar37 = puVar35;
              if (*(short *)(local_82c.dwHighDateTime + (int)puVar35 * 2) == 0) break;
              puVar35 = (uint *)((int)puVar35 + 1);
              iVar44 = iVar44 + -2;
              puVar37 = puStack_824;
            } while (iVar44 != 0);
          }
          FUN_10093310((undefined8 *)&local_80c,(ushort *)local_82c.dwHighDateTime,(SIZE_T)puVar37);
          pvVar20 = local_80c.AllocationBase;
          pvVar19 = local_80c.BaseAddress;
          local_7e0 = (uint *)local_80c.AllocationProtect;
          puStack_7dc = (uint *)local_80c.RegionSize;
          puStack_7d8 = (uint *)0x0;
          puStack_7d4 = (uint *)0x0;
          FUN_1011fa10(cVar4,local_80c.AllocationBase,local_80c.AllocationProtect,param_1 + 0x1c);
          if (bVar48) {
            if (0 < (int)param_1[0x18]) {
              pvVar6 = (LPVOID)param_1[0x19];
              pvVar24 = GetProcessHeap();
              HeapFree(pvVar24,0,pvVar6);
            }
            param_1[0x18] = (uint)pvVar19;
            param_1[0x19] = (uint)pvVar20;
            *(ulonglong *)(param_1 + 0x1a) = CONCAT44(puStack_7dc,local_7e0);
          }
          else if (pvVar19 != (LPCVOID)0x0) {
            pvVar24 = GetProcessHeap();
            HeapFree(pvVar24,0,pvVar20);
          }
          if ((uint *)DVar27 != (uint *)0x0) {
            pvVar24 = GetProcessHeap();
            HeapFree(pvVar24,0,(LPVOID)DVar18);
          }
        }
        goto LAB_1011e368;
      }
    }
  }
  GetLastError();
LAB_1011e368:
  pcVar28 = (char *)((int)local_814 + 9);
  if ((*pcVar28 != '\0') &&
     ((local_814 = param_1 + 0x14, *pcVar28 == '\x01' || (*local_814 == 0xffffffff)))) {
    if (param_1[0x3c] == 0) {
      local_2b8.s.LowPart = 0xffffffff;
      uVar39 = *local_814;
    }
    else {
      pvVar24 = *(HANDLE *)(param_1[0x3c] + 8);
      memset(local_730,0,0x20a);
      GetModuleFileNameExW(pvVar24,(HMODULE)0x0,(LPWSTR)local_730,0x105);
      iVar29 = 8;
      iVar44 = -0xf8;
      do {
        psVar2 = asStack_540 + iVar44;
        iVar11 = iVar44 + 1;
        iVar12 = iVar44 + 2;
        iVar13 = iVar44 + 3;
        iVar14 = iVar44 + 4;
        iVar15 = iVar44 + 5;
        iVar16 = iVar44 + 6;
        iVar17 = iVar44 + 7;
        iVar29 = iVar29 + -8;
        auVar50._0_2_ = -(ushort)(*psVar2 == 0);
        auVar50._2_2_ = -(ushort)(asStack_540[iVar11] == 0);
        auVar50._4_2_ = -(ushort)(asStack_540[iVar12] == 0);
        auVar50._6_2_ = -(ushort)(asStack_540[iVar13] == 0);
        auVar50._8_2_ = -(ushort)(asStack_540[iVar14] == 0);
        auVar50._10_2_ = -(ushort)(asStack_540[iVar15] == 0);
        auVar50._12_2_ = -(ushort)(asStack_540[iVar16] == 0);
        auVar50._14_2_ = -(ushort)(asStack_540[iVar17] == 0);
        if ((((((((((((((((SUB161(auVar50 >> 7,0) & 1) != 0 || (SUB161(auVar50 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar50 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar50 >> 0x1f,0) & 1) != 0) || (SUB161(auVar50 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar50 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar50 >> 0x37,0) & 1) != 0) || (SUB161(auVar50 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar50 >> 0x47,0) & 1) != 0) || (SUB161(auVar50 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar50 >> 0x57,0) & 1) != 0) || (SUB161(auVar50 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar50 >> 0x67,0) & 1) != 0) || (SUB161(auVar50 >> 0x6f,0) & 1) != 0) ||
            (auVar50._14_2_ >> 7 & 1) != 0) || (auVar50._14_2_ & 0x8000) != 0) break;
        bVar48 = iVar44 != 0;
        iVar44 = iVar44 + 8;
      } while (bVar48);
      auVar51 = packsswb(auVar50,auVar50);
      if ((((((((SUB161(auVar51 >> 7,0) & 1) == 0 && (SUB161(auVar51 >> 0xf,0) & 1) == 0) &&
              (SUB161(auVar51 >> 0x17,0) & 1) == 0) && (SUB161(auVar51 >> 0x1f,0) & 1) == 0) &&
            (SUB161(auVar51 >> 0x27,0) & 1) == 0) && (SUB161(auVar51 >> 0x2f,0) & 1) == 0) &&
          (SUB161(auVar51 >> 0x37,0) & 1) == 0) && (SUB161(auVar51 >> 0x3f,0) & 1) == 0) {
        if (sStack_530 == 0) {
          SVar30 = 0x100;
        }
        else if (sStack_52e == 0) {
          SVar30 = 0x101;
        }
        else if (sStack_52c == 0) {
          SVar30 = 0x102;
        }
        else if (sStack_52a == 0) {
          SVar30 = 0x103;
        }
        else {
          SVar30 = 0x105;
          if (sStack_528 == 0) {
            SVar30 = 0x104;
          }
        }
      }
      else {
        auVar49._0_2_ = -(ushort)(*psVar2 == 0);
        auVar49._2_2_ = -(ushort)(asStack_540[iVar11] == 0);
        auVar49._4_2_ = -(ushort)(asStack_540[iVar12] == 0);
        auVar49._6_2_ = -(ushort)(asStack_540[iVar13] == 0);
        auVar49._8_2_ = -(ushort)(asStack_540[iVar14] == 0);
        auVar49._10_2_ = -(ushort)(asStack_540[iVar15] == 0);
        auVar49._12_2_ = -(ushort)(asStack_540[iVar16] == 0);
        auVar49._14_2_ = -(ushort)(asStack_540[iVar17] == 0);
        auStack_790 = packsswb(auVar49,auVar49);
        auStack_790 = auStack_790 & _DAT_1013f0b0;
        bVar32 = auStack_790[1];
        if (auStack_790[1] < auStack_790[0]) {
          bVar32 = auStack_790[0];
        }
        if (bVar32 <= auStack_790[2]) {
          bVar32 = auStack_790[2];
        }
        if (bVar32 <= auStack_790[3]) {
          bVar32 = auStack_790[3];
        }
        if (bVar32 <= auStack_790[4]) {
          bVar32 = auStack_790[4];
        }
        if (bVar32 <= auStack_790[5]) {
          bVar32 = auStack_790[5];
        }
        if (bVar32 <= auStack_790[6]) {
          bVar32 = auStack_790[6];
        }
        if (bVar32 <= auStack_790[7]) {
          bVar32 = auStack_790[7];
        }
        SVar30 = (uint)(byte)(8 - bVar32) - iVar29;
      }
      FUN_10093310(&local_2b8,(ushort *)local_730,SVar30);
      uVar39 = *local_814;
    }
    if (0 < (int)uVar39) {
      pvVar6 = (LPVOID)param_1[0x15];
      pvVar24 = GetProcessHeap();
      HeapFree(pvVar24,0,pvVar6);
    }
    *(undefined8 *)(local_814 + 2) = uStack_2b0;
    *(ulonglong *)local_814 = CONCAT44(local_2b8.s.HighPart,local_2b8.s.LowPart);
  }
  uVar42 = param_5 - param_1[0x24];
  uVar39 = (uint)(param_5 < param_1[0x24]);
  uVar33 = param_6 - param_1[0x25];
  uVar46 = uVar33 - uVar39;
  if (param_6 < param_1[0x25] || uVar33 < uVar39) {
    uVar42 = 0;
    uVar46 = 0;
  }
  param_1[0x27] = uVar46;
  param_1[0x26] = uVar42;
  *(undefined1 *)(param_1 + 0x3e) = 1;
  return;
}
