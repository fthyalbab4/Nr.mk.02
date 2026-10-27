// rea decompile_all
// name: FUN_00500774
// address: 0x500774
// body: available
// range: 0x500774-0x5008c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5007a8 (push 0x5008ea followed by fs-segment stack chaining); handler 0x5008ea lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5007c0 (push 0x5008c5 followed by fs-segment stack chaining); handler 0x5008c5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00500774(undefined4 param_1,undefined4 *param_2)

{
  LPCWSTR lpRootPathName;
  BOOL BVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  WCHAR *lpVolumeNameBuffer;
  DWORD nVolumeNameSize;
  LPDWORD lpVolumeSerialNumber;
  DWORD *lpMaximumComponentLength;
  DWORD *lpFileSystemFlags;
  LPWSTR lpFileSystemNameBuffer;
  DWORD nFileSystemNameSize;
  undefined4 uStack_254;
  undefined4 uStack_248;
  undefined1 *puStack_244;
  undefined1 *puStack_240;
  undefined4 local_234;
  undefined1 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  WCHAR local_21a [261];
  DWORD local_10;
  DWORD local_c;
  UINT local_8;

  puStack_240 = &stack0xfffffffc;
  local_22c = 0;
  local_228 = 0;
  local_224 = 0;
  local_220 = 0;
  puStack_244 = &LAB_005008ea;
  uStack_248 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_248;
  local_8 = SetErrorMode(1);
  uStack_254 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_254;
  local_21a[0] = L'\0';
  nFileSystemNameSize = 0;
  lpFileSystemNameBuffer = (LPWSTR)0x0;
  lpFileSystemFlags = &local_10;
  lpMaximumComponentLength = &local_c;
  lpVolumeSerialNumber = (LPDWORD)0x0;
  nVolumeNameSize = 0x105;
  lpVolumeNameBuffer = local_21a;
  FUN_00408310(&local_220,param_1);
  FUN_004085b8(&local_220,&DAT_00500904);
  lpRootPathName = (LPCWSTR)FUN_00408220(local_220);
  BVar1 = GetVolumeInformationW
                    (lpRootPathName,lpVolumeNameBuffer,nVolumeNameSize,lpVolumeSerialNumber,
                     lpMaximumComponentLength,lpFileSystemFlags,lpFileSystemNameBuffer,
                     nFileSystemNameSize);
  if (BVar1 == 0) {
    FUN_00408194(param_2,0);
  }
  else {
    uVar2 = FUN_00417624(local_21a);
    FUN_004082d0(param_2,local_21a,uVar2);
  }
  if ((ushort)param_1 < 0x61) {
    FUN_0041da90(*param_2,&local_224);
    FUN_00408194(param_2,local_224);
  }
  else {
    FUN_0041da7c(*param_2,&local_228);
    FUN_00408194(param_2,local_228);
  }
  local_234 = *param_2;
  local_230 = 0x11;
  FUN_00417c88(L"[%s]",&local_234,0,&local_22c);
  FUN_00408194(param_2,local_22c);
  *in_FS_OFFSET = uStack_254;
  uStack_254 = 0x5008c4;
  SetErrorMode(local_8);
  return;
}
