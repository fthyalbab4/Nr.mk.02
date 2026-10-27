// rea decompile_all
// name: FUN_1011d560
// address: 0x1011d560
// body: available
// range: 0x1011d560-0x1011d827 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1011d560(undefined4 *param_1,int *param_2)

{
  int iVar1;
  HANDLE hFindFile;
  code *pcVar2;
  BOOL BVar3;
  WCHAR *_Src;
  int *piVar4;
  ushort uVar5;
  WCHAR WVar7;
  WCHAR WVar8;
  undefined4 *local_4e0;
  uint local_4dc;
  DWORD local_4d8;
  DWORD local_4c8;
  DWORD DStack_4c4;
  DWORD local_4c0;
  DWORD DStack_4bc;
  DWORD local_4b8;
  DWORD DStack_4b4;
  DWORD local_4b0;
  DWORD DStack_4ac;
  DWORD local_4a8;
  DWORD local_4a4;
  DWORD DStack_4a0;
  DWORD local_49c;
  DWORD DStack_498;
  DWORD local_494;
  DWORD DStack_490;
  DWORD local_48c;
  DWORD DStack_488;
  DWORD local_484;
  _WIN32_FIND_DATAW local_480;
  undefined1 local_22e [542];
  uint uVar6;

  if (*param_2 == 1) {
    iVar1 = param_2[2];
    uVar5 = *(ushort *)(param_2 + 0xe);
    WVar8 = *(WCHAR *)((int)param_2 + 0x3a);
    WVar7 = *(WCHAR *)(param_2 + 0xf);
    param_2[2] = 0;
    piVar4 = (int *)param_2[0x97];
    if (((iVar1 == 1) && (uVar5 != 0x2e || WVar8 != L'\0')) &&
       ((WVar8 != L'.' || uVar5 != 0x2e) || WVar7 != L'\0')) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + 1;
      UNLOCK();
      if (*piVar4 == 0 || SCARRY4(iVar1,1) != *piVar4 < 0) goto LAB_1011d826;
      local_480.dwFileAttributes._0_1_ = *(byte *)(param_2 + 3);
      local_4b8 = param_2[9];
      DStack_4b4 = param_2[10];
      local_4b0 = param_2[0xb];
      DStack_4ac = param_2[0xc];
      local_4c0 = param_2[7];
      DStack_4bc = param_2[8];
      _Src = (WCHAR *)((int)param_2 + 0x3e);
      local_4e0 = *(undefined4 **)((int)param_2 + 0xd);
      local_4d8 = param_2[4];
      local_4c8 = param_2[5];
      DStack_4c4 = param_2[6];
      local_4a8 = param_2[0xd];
    }
    else {
      memset(&local_480,0,0x250);
      hFindFile = (HANDLE)param_2[1];
      uVar6 = (uint)uVar5;
      do {
        do {
          uVar5 = (ushort)uVar6;
          BVar3 = FindNextFileW(hFindFile,&local_480);
          if (BVar3 == 0) {
            FindClose(hFindFile);
            *param_2 = 0;
            local_4d8 = GetLastError();
            if (local_4d8 == 0x12) goto LAB_1011d6c2;
            local_4dc = 0;
            piVar4 = (int *)0x0;
            local_4e0 = param_1;
            goto LAB_1011d743;
          }
          uVar5 = local_480.cFileName[0];
          uVar6 = local_480.cFileName._0_4_;
          WVar8 = local_480.cFileName[1];
        } while (uVar5 == 0x2e && local_480.cFileName[1] == L'\0');
        WVar7 = local_480.cFileName[2];
      } while (((uVar5 == 0x2e) && (local_480.cFileName[1] == L'.')) &&
              (local_480.cFileName[2] == L'\0'));
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + 1;
      UNLOCK();
      if (*piVar4 == 0 || SCARRY4(iVar1,1) != *piVar4 < 0) {
LAB_1011d826:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      local_4e0 = (undefined4 *)local_480._1_4_;
      local_4d8 = CONCAT31(local_480.ftCreationTime.dwLowDateTime._1_3_,
                           (undefined1)local_480.ftCreationTime.dwLowDateTime);
      local_4c0 = local_480.ftLastAccessTime.dwHighDateTime;
      DStack_4bc = local_480.ftLastWriteTime.dwLowDateTime;
      local_4c8 = local_480.ftCreationTime.dwHighDateTime;
      DStack_4c4 = local_480.ftLastAccessTime.dwLowDateTime;
      local_4b8 = local_480.ftLastWriteTime.dwHighDateTime;
      DStack_4b4 = local_480.nFileSizeHigh;
      local_4b0 = local_480.nFileSizeLow;
      DStack_4ac = local_480.dwReserved0;
      local_4a8 = local_480.dwReserved1;
      _Src = local_480.cFileName + 3;
    }
    local_4dc = (uint)(byte)local_480.dwFileAttributes;
    memcpy(local_22e,_Src,0x21e);
LAB_1011d743:
    if (piVar4 != (int *)0x0) {
      local_494 = local_4b8;
      DStack_490 = DStack_4b4;
      local_484 = local_4a8;
      local_48c = local_4b0;
      DStack_488 = DStack_4ac;
      local_4a4 = local_4c8;
      DStack_4a0 = DStack_4c4;
      local_49c = local_4c0;
      DStack_498 = DStack_4bc;
      memcpy(&local_480,local_22e,0x21e);
    }
    param_1[1] = piVar4;
    param_1[2] = local_4dc | (int)local_4e0 << 8;
    param_1[3] = local_4d8;
    *(undefined8 *)(param_1 + 6) = _local_49c;
    *(undefined8 *)(param_1 + 4) = _local_4a4;
    *(undefined8 *)(param_1 + 8) = _local_494;
    param_1[0xc] = local_484;
    *(undefined8 *)(param_1 + 10) = _local_48c;
    *(ushort *)(param_1 + 0xd) = uVar5;
    *(WCHAR *)((int)param_1 + 0x36) = WVar8;
    *(WCHAR *)(param_1 + 0xe) = WVar7;
    memcpy((void *)((int)param_1 + 0x3a),&local_480,0x21e);
    *param_1 = 1;
  }
  else {
LAB_1011d6c2:
    *param_1 = 0;
  }
  return;
}
