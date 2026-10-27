// rea decompile_all
// name: FUN_0041d050
// address: 0x41d050
// body: available
// range: 0x41d050-0x41d108 inclusive
// range: 0x41d110-0x41d125 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41d069 (push 0x41d126 followed by fs-segment stack chaining); handler 0x41d126 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41d0b2 (push 0x41d109 followed by fs-segment stack chaining); handler 0x41d109 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041d050(undefined4 param_1)

{
  undefined1 *puVar1;
  LPCWSTR pWVar2;
  DWORD dwLen;
  LPVOID lpData;
  BOOL BVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  DWORD *lpdwHandle;
  undefined1 *puVar4;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  uint local_1c;
  LPVOID local_18;
  LPVOID local_14;
  DWORD local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  puVar4 = &stack0xfffffffc;
  local_8 = 0;
  puStack_28 = &LAB_0041d126;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_c = 0xffffffff;
  FUN_00407f0c(&local_8,param_1);
  thunk_FUN_004089c0(&local_8);
  lpdwHandle = &local_10;
  pWVar2 = (LPCWSTR)FUN_00407f44(local_8);
  uStack_38 = 0x41d097;
  dwLen = GetFileVersionInfoSizeW(pWVar2,lpdwHandle);
  puVar1 = puStack_24;
  if (dwLen != 0) {
    lpData = (LPVOID)FUN_0040431c(dwLen);
    uStack_38 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_38;
    local_14 = lpData;
    pWVar2 = (LPCWSTR)FUN_00407f44(local_8);
    BVar3 = GetFileVersionInfoW(pWVar2,local_10,dwLen,lpData);
    if (BVar3 != 0) {
      BVar3 = VerQueryValueW(local_14,L"\\",&local_18,&local_1c);
      if (BVar3 != 0) {
        local_c = *(undefined4 *)((int)local_18 + 8);
      }
    }
    *in_FS_OFFSET = uStack_38;
    FUN_00404338(local_14,uStack_38,puVar4);
    return;
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0041d12d;
  puStack_28 = (undefined1 *)0x41d125;
  thunk_FUN_00406e5c(&local_8,uStack_2c,puVar1);
  return;
}
