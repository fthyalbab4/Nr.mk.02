// rea decompile_all
// name: FUN_1010ff70
// address: 0x1010ff70
// body: available
// range: 0x1010ff70-0x10110296 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1010ff70(char *param_1,LPCWSTR param_2,int *param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar6;
  HANDLE hFile;
  FILETIME *lpLastWriteTime;
  BOOL BVar4;
  DWORD DVar5;
  uint uVar7;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;
  FILETIME *lpLastAccessTime;
  undefined *puVar8;
  SIZE_T SVar9;
  uint local_44;
  FILETIME local_40;
  DWORD local_34;
  uint local_30;
  _SECURITY_ATTRIBUTES local_2c;
  undefined4 local_20;
  undefined4 local_1c;
  uint uVar3;

  bVar6 = *(byte *)((int)param_3 + 0x19);
  cVar1 = *(char *)((int)param_3 + 0x1a);
  if (bVar6 == 0) {
    if (cVar1 != '\0') goto LAB_1010ffab;
    uVar7 = (uint)*(byte *)((int)param_3 + 0x1b);
    local_44 = (uint)*(byte *)((int)param_3 + 0x1d);
    uVar3 = 0;
    bVar6 = 0;
    if (((*(byte *)(param_3 + 7) | *(byte *)((int)param_3 + 0x1b) | *(byte *)((int)param_3 + 0x1d))
        & 1) == 0) {
      uVar7 = 0;
      local_44 = 0;
      goto LAB_10110048;
    }
LAB_1010ffe8:
    local_30 = CONCAT31(local_30._1_3_,bVar6);
    FUN_1010d340((undefined1 *)&local_2c.lpSecurityDescriptor,0x14,&DAT_10157c02,0x3d);
    if ((char)local_2c.lpSecurityDescriptor != -1) {
      *param_1 = (char)local_2c.lpSecurityDescriptor;
      param_1[3] = (char)((uint)local_2c.lpSecurityDescriptor >> 0x18);
      *(short *)(param_1 + 1) = (short)((uint)local_2c.lpSecurityDescriptor >> 8);
      *(BOOL *)(param_1 + 4) = local_2c.bInheritHandle;
      return;
    }
    uVar3 = (local_30 & 0xff) << 8;
    local_34 = local_2c.bInheritHandle;
  }
  else {
    if (cVar1 == '\0') {
      local_44 = (uint)*(byte *)((int)param_3 + 0x1d);
      uVar7 = (uint)*(byte *)((int)param_3 + 0x1b);
      uVar3 = (uint)bVar6 << 8;
    }
    else {
LAB_1010ffab:
      uVar7 = (uint)*(byte *)((int)param_3 + 0x1b);
      local_44 = (uint)*(byte *)((int)param_3 + 0x1d);
      bVar2 = ~*(byte *)((int)param_3 + 0x1b) | *(byte *)((int)param_3 + 0x1d);
      uVar3 = (uint)CONCAT11(bVar6,bVar2);
      if ((bVar2 & 1) == 0) {
        uVar7 = 1;
        local_44 = 0;
        goto LAB_1010ffe8;
      }
    }
LAB_10110048:
    if ((char)param_3[7] == '\0') {
      if ((local_44 & 1) != 0) goto LAB_10110066;
      local_34 = uVar7 * 2 + 3;
      uVar3 = uVar3 & 0xffffff00;
    }
    else {
      local_34 = 4;
      if ((char)local_44 == '\x01') {
LAB_10110066:
        local_34 = 1;
      }
    }
  }
  bVar6 = *(byte *)((int)param_3 + 0x1e);
  local_2c.bInheritHandle = (BOOL)bVar6;
  local_2c.nLength = 0xc;
  local_2c.lpSecurityDescriptor = (LPVOID)0x0;
  local_30 = uVar7;
  if (*param_3 == 1) {
    DVar5 = param_3[1];
  }
  else if ((char)param_3[6] == '\0') {
    if ((char)(uVar3 >> 8) == '\0') {
      DVar5 = 0x120114;
      if (cVar1 == '\0') {
        if ((((char)param_3[7] == '\0') && ((local_44 & 1) == 0)) &&
           (local_30._0_1_ = (byte)uVar7, (byte)local_30 == '\0')) {
          SVar9 = 0x3a;
          puVar8 = &DAT_10157bc8;
        }
        else {
          SVar9 = 0x3d;
          puVar8 = &DAT_10157c02;
        }
        FUN_1010d340((undefined1 *)&local_40,0x14,puVar8,SVar9);
        DVar5 = local_40.dwHighDateTime;
        if ((char)local_40.dwLowDateTime != -1) {
          param_1[3] = local_40.dwLowDateTime._3_1_;
          *(undefined2 *)(param_1 + 1) = local_40.dwLowDateTime._1_2_;
          *param_1 = (char)local_40.dwLowDateTime;
          *(DWORD *)(param_1 + 4) = local_40.dwHighDateTime;
          return;
        }
      }
    }
    else {
      DVar5 = 0x40000000;
      if (cVar1 != '\0') {
        DVar5 = 0x120114;
      }
    }
  }
  else {
    DVar5 = 0x80120114;
    if (cVar1 == '\0') {
      DVar5 = (uVar3 >> 8 | 0xfffffffe) << 0x1e;
    }
  }
  lpSecurityAttributes = &local_2c;
  if (bVar6 == 0) {
    lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
  }
  hFile = CreateFileW(param_2,DVar5,param_3[4],lpSecurityAttributes,local_34,
                      local_44 << 0x15 | param_3[3] | param_3[2] | param_3[5],(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    DVar5 = GetLastError();
    *param_1 = '\0';
    *(DWORD *)(param_1 + 4) = DVar5;
    return;
  }
  if (*(char *)((int)param_3 + 0x1f) == '\0') {
    if ((char)param_3[8] != '\0') {
      lpLastAccessTime = (FILETIME *)0x0;
      lpLastWriteTime = &local_40;
      goto LAB_10110174;
    }
LAB_10110183:
    if ((((byte)local_30 & local_34 == 4) != 0) && (DVar5 = GetLastError(), DVar5 == 0xb7)) {
      local_1c = 0;
      local_20 = 0;
      BVar4 = SetFileInformationByHandle(hFile,FileAllocationInfo,&local_20,8);
      if (BVar4 == 0) {
        GetLastError();
        local_40.dwHighDateTime = 0;
        local_40.dwLowDateTime = 0;
        BVar4 = SetFileInformationByHandle(hFile,FileEndOfFileInfo,&local_40,8);
        if (BVar4 == 0) goto LAB_101101f4;
      }
    }
    *(HANDLE *)(param_1 + 4) = hFile;
    *param_1 = -1;
  }
  else {
    lpLastAccessTime = &local_40;
    lpLastWriteTime = (FILETIME *)0x0;
    if ((char)param_3[8] != '\0') {
      lpLastWriteTime = lpLastAccessTime;
    }
LAB_10110174:
    local_40.dwHighDateTime = 0xffffffff;
    local_40.dwLowDateTime = 0xffffffff;
    BVar4 = SetFileTime(hFile,(FILETIME *)0x0,lpLastAccessTime,lpLastWriteTime);
    if (BVar4 != 0) goto LAB_10110183;
LAB_101101f4:
    DVar5 = GetLastError();
    *param_1 = '\0';
    *(DWORD *)(param_1 + 4) = DVar5;
    CloseHandle(hFile);
  }
  return;
}
