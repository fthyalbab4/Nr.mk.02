// rea decompile_all
// name: FUN_004525d0
// address: 0x4525d0
// body: available
// range: 0x4525d0-0x45269f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4525ed (push 0x4526a0 followed by fs-segment stack chaining); handler 0x4526a0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004525d0(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  LPCWSTR lpSubKey;
  HKEY hKey;
  LSTATUS LVar4;
  undefined4 *in_FS_OFFSET;
  DWORD Reserved;
  LPWSTR lpClass;
  DWORD dwOptions;
  REGSAM samDesired;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;
  HKEY *phkResult;
  DWORD *lpdwDisposition;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined1 local_14;
  DWORD local_10;
  HKEY local_c;
  undefined4 local_8;

  puStack_28 = &stack0xfffffffc;
  local_8 = 0;
  puStack_2c = &LAB_004526a0;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_c = (HKEY)0x0;
  FUN_00407f0c(&local_8,param_2);
  uVar3 = FUN_00452264(local_8);
  if ((char)uVar3 == '\0') {
    FUN_00408778(&local_8,1,1);
  }
  lpdwDisposition = &local_10;
  phkResult = &local_c;
  lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
  samDesired = 0xf003f;
  dwOptions = 0;
  lpClass = (LPWSTR)0x0;
  Reserved = 0;
  lpSubKey = (LPCWSTR)FUN_00407f44(local_8);
  hKey = (HKEY)FUN_004525b8(param_1,uVar3);
  LVar4 = RegCreateKeyExW(hKey,lpSubKey,Reserved,lpClass,dwOptions,samDesired,lpSecurityAttributes,
                          phkResult,lpdwDisposition);
  cVar2 = FUN_0045252c(param_1,LVar4);
  if (cVar2 == '\0') {
    local_14 = 0x11;
    local_18 = param_2;
    FUN_0041c0bc(&PTR_LAB_004510e0,1,PTR_PTR_00781760,0,&local_18);
    FUN_00406618();
  }
  else {
    RegCloseKey(local_c);
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_004526a7;
  puStack_2c = (undefined1 *)0x45269f;
  thunk_FUN_00406e5c(&local_8,uStack_30,puVar1);
  return;
}
