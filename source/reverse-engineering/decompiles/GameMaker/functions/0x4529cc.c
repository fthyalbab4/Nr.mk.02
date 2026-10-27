// rea decompile_all
// name: FUN_004529cc
// address: 0x4529cc
// body: available
// range: 0x4529cc-0x452af5 inclusive
// range: 0x452afd-0x452b46 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4529ee (push 0x452b47 followed by fs-segment stack chaining); handler 0x452b47 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x452a49 (push 0x452af6 followed by fs-segment stack chaining); handler 0x452af6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004529cc(int param_1,undefined4 param_2)

{
  char cVar1;
  LPWSTR lpName;
  LSTATUS LVar2;
  undefined4 uVar3;
  LPCWSTR lpSubKey;
  HKEY hKey;
  DWORD dwIndex;
  undefined4 *in_FS_OFFSET;
  DWORD *lpcchName;
  LPDWORD lpReserved;
  LPWSTR lpClass;
  LPDWORD lpcchClass;
  PFILETIME lpftLastWriteTime;
  undefined4 uStack_5c;
  undefined1 *puVar4;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 local_40;
  int local_3c;
  int local_38;
  HKEY local_20;
  undefined4 local_1c;
  char local_15;
  DWORD local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_48 = &stack0xfffffffc;
  puVar4 = &stack0xfffffffc;
  local_40 = 0;
  local_8 = 0;
  local_c = 0;
  puStack_4c = &LAB_00452b47;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  local_10 = param_1;
  FUN_00407f0c(&local_8,param_2);
  local_15 = FUN_00452264(local_8);
  if (local_15 == '\0') {
    FUN_00408778(&local_8,1,1);
  }
  local_1c = *(undefined4 *)(local_10 + 4);
  local_20 = (HKEY)FUN_00453678(local_10,param_2);
  if (local_20 != (HKEY)0x0) {
    uStack_5c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_5c;
    FUN_004525cc(local_10,local_20);
    cVar1 = FUN_00452b7c(local_10,&local_3c);
    if (cVar1 != '\0') {
      FUN_00407ff4(&local_c,0,local_38 + 1);
      dwIndex = local_3c - 1;
      if (-1 < (int)dwIndex) {
        do {
          local_14 = local_38 + 1;
          lpftLastWriteTime = (PFILETIME)0x0;
          lpcchClass = (LPDWORD)0x0;
          lpClass = (LPWSTR)0x0;
          lpReserved = (LPDWORD)0x0;
          lpcchName = &local_14;
          lpName = (LPWSTR)FUN_00407f44(local_c);
          LVar2 = RegEnumKeyExW(local_20,dwIndex,lpName,lpcchName,lpReserved,lpClass,lpcchClass,
                                lpftLastWriteTime);
          cVar1 = FUN_0045252c(local_10,LVar2);
          if (cVar1 != '\0') {
            uVar3 = FUN_00407f44(local_c);
            FUN_00408074(&local_40,uVar3);
            FUN_004529cc(local_10,local_40);
          }
          dwIndex = dwIndex - 1;
        } while (dwIndex != 0xffffffff);
      }
    }
    *in_FS_OFFSET = uStack_5c;
    FUN_004525cc(local_10,local_1c,puVar4);
    uStack_5c = 0x452af5;
    RegCloseKey(local_20);
    return;
  }
  lpSubKey = (LPCWSTR)FUN_00407f44(local_8);
  hKey = (HKEY)FUN_004525b8(local_10,local_15);
  uStack_5c = 0x452b18;
  LVar2 = RegDeleteKeyW(hKey,lpSubKey);
  FUN_0045252c(local_10,LVar2);
  puVar4 = puStack_48;
  *in_FS_OFFSET = uStack_50;
  puStack_48 = &LAB_00452b4e;
  puStack_4c = (undefined1 *)0x452b39;
  thunk_FUN_00406e5c(&local_40,uStack_50,puVar4);
  puStack_4c = (undefined1 *)0x452b46;
  thunk_FUN_00406e80(&local_c,2);
  return;
}
