// rea decompile_all
// name: FUN_0040a93c
// address: 0x40a93c
// body: available
// range: 0x40a93c-0x40ab03 inclusive
// range: 0x40ab0b-0x40ab20 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x40a95e (push 0x40ab21 followed by fs-segment stack chaining); handler 0x40ab21 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x40aa30 (push 0x40ab04 followed by fs-segment stack chaining); handler 0x40ab04 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040a93c(int param_1,undefined4 param_2)

{
  LPCWSTR lpString2;
  LSTATUS LVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  int iMaxLength;
  undefined1 *puVar3;
  undefined4 uStack_230;
  undefined1 *puStack_22c;
  undefined1 *puStack_228;
  WCHAR local_21e [261];
  DWORD local_14;
  HKEY local_10;
  LPBYTE local_c;
  int local_8;

  puVar3 = &stack0xfffffffc;
  puStack_228 = (undefined1 *)0x40a953;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_22c = &LAB_0040ab21;
  uStack_230 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_230;
  if (local_8 == 0) {
    puStack_228 = &stack0xfffffffc;
    GetModuleFileNameW((HMODULE)0x0,local_21e,0x105);
  }
  else {
    iMaxLength = 0x105;
    puStack_228 = &stack0xfffffffc;
    lpString2 = (LPCWSTR)FUN_00407f44(local_8);
    lstrcpynW(local_21e,lpString2,iMaxLength);
  }
  if (local_21e[0] != L'\0') {
    local_c = (LPBYTE)0x0;
    LVar1 = RegOpenKeyExW((HKEY)0x80000001,L"Software\\CodeGear\\Locales",0,0xf0019,&local_10);
    if (LVar1 != 0) {
      LVar1 = RegOpenKeyExW((HKEY)0x80000002,L"Software\\CodeGear\\Locales",0,0xf0019,&local_10);
      if (LVar1 != 0) {
        LVar1 = RegOpenKeyExW((HKEY)0x80000001,L"Software\\Borland\\Locales",0,0xf0019,&local_10);
        if (LVar1 != 0) {
          LVar1 = RegOpenKeyExW((HKEY)0x80000001,L"Software\\Borland\\Delphi\\Locales",0,0xf0019,
                                &local_10);
          if (LVar1 != 0) goto LAB_0040ab0b;
        }
      }
    }
    uVar2 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xfffffdc4;
    FUN_0040a740(local_21e,0x105);
    LVar1 = RegQueryValueExW(local_10,local_21e,(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)0x0,&local_14);
    if (LVar1 == 0) {
      local_c = (LPBYTE)FUN_0040431c(local_14);
      RegQueryValueExW(local_10,local_21e,(LPDWORD)0x0,(LPDWORD)0x0,local_c,&local_14);
      FUN_00408074(param_2,local_c);
    }
    else {
      LVar1 = RegQueryValueExW(local_10,L"",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)0x0,&local_14);
      if (LVar1 == 0) {
        local_c = (LPBYTE)FUN_0040431c(local_14);
        RegQueryValueExW(local_10,L"",(LPDWORD)0x0,(LPDWORD)0x0,local_c,&local_14);
        FUN_00408074(param_2,local_c);
      }
    }
    *in_FS_OFFSET = uVar2;
    if (local_c != (LPBYTE)0x0) {
      FUN_00404338(local_c,uVar2,puVar3);
    }
    RegCloseKey(local_10);
    return;
  }
LAB_0040ab0b:
  puVar3 = puStack_228;
  *in_FS_OFFSET = uStack_230;
  puStack_228 = &LAB_0040ab28;
  puStack_22c = (undefined1 *)0x40ab20;
  thunk_FUN_00406e5c(&local_8,uStack_230,puVar3);
  return;
}
