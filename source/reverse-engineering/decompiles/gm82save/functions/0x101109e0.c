// rea decompile_all
// name: FUN_101109e0
// address: 0x101109e0
// body: available
// range: 0x101109e0-0x10110af6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_101109e0(undefined4 *param_1,HANDLE param_2)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [16];
  BOOL BVar3;
  DWORD DVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int local_44;
  uint local_40;
  _BY_HANDLE_FILE_INFORMATION local_3c;

  local_3c.nFileIndexLow = 0;
  local_3c.nFileSizeHigh = 0;
  local_3c.nFileSizeLow = 0;
  local_3c.nNumberOfLinks = 0;
  local_3c.nFileIndexHigh = 0;
  local_3c.ftLastAccessTime.dwHighDateTime = 0;
  local_3c.ftLastWriteTime.dwLowDateTime = 0;
  local_3c.ftLastWriteTime.dwHighDateTime = 0;
  local_3c.dwVolumeSerialNumber = 0;
  local_3c.dwFileAttributes = 0;
  local_3c.ftCreationTime.dwLowDateTime = 0;
  local_3c.ftCreationTime.dwHighDateTime = 0;
  local_3c.ftLastAccessTime.dwLowDateTime = 0;
  BVar3 = GetFileInformationByHandle(param_2,&local_3c);
  if (BVar3 != 0) {
    local_40 = 0;
    if ((local_3c.dwFileAttributes & 0x400) != 0) {
      local_44 = 0;
      local_40 = 0;
      BVar3 = GetFileInformationByHandleEx(param_2,FileAttributeTagInfo,&local_44,8);
      if (BVar3 == 0) goto LAB_10110ad7;
      local_40 = (local_44 << 0x15) >> 0x1f & local_40;
    }
    param_1[1] = 0;
    *param_1 = 1;
    auVar2._4_4_ = local_3c.ftCreationTime.dwHighDateTime;
    auVar2._0_4_ = local_3c.ftCreationTime.dwLowDateTime;
    auVar2._8_4_ = local_3c.ftLastAccessTime.dwLowDateTime;
    auVar2._12_4_ = local_3c.ftLastAccessTime.dwHighDateTime;
    param_1[3] = local_3c.nFileIndexHigh;
    auVar1._4_8_ = auVar2._8_8_;
    auVar1._0_4_ = local_3c.ftCreationTime.dwLowDateTime;
    auVar5._0_8_ = auVar1._0_8_ << 0x20;
    auVar5._8_4_ = local_3c.ftCreationTime.dwHighDateTime;
    auVar5._12_4_ = local_3c.ftLastAccessTime.dwLowDateTime;
    auVar6._4_12_ = auVar5._4_12_;
    auVar6._0_4_ = local_3c.nNumberOfLinks;
    param_1[2] = local_3c.nFileIndexLow;
    param_1[4] = 1;
    param_1[5] = local_3c.dwVolumeSerialNumber;
    param_1[6] = 1;
    *(undefined1 (*) [16])(param_1 + 7) = auVar6;
    *(ulonglong *)(param_1 + 0xb) =
         CONCAT44(local_3c.ftLastWriteTime.dwLowDateTime,local_3c.ftLastAccessTime.dwHighDateTime);
    param_1[0xd] = local_3c.ftLastWriteTime.dwHighDateTime;
    param_1[0xe] = local_3c.nFileSizeLow;
    param_1[0xf] = local_3c.nFileSizeHigh;
    param_1[0x10] = 0;
    param_1[0x13] = local_3c.dwFileAttributes;
    param_1[0x14] = local_40;
    return;
  }
LAB_10110ad7:
  DVar4 = GetLastError();
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = DVar4;
  param_1[1] = 0xffffffff;
  *param_1 = 0xffffffff;
  return;
}
