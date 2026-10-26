// rea decompile_all
// name: FUN_006d7dd4
// address: 0x6d7dd4
// body: available
// range: 0x6d7dd4-0x6d7feb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6d7e08 (push 0x6d7fec followed by fs-segment stack chaining); handler 0x6d7fec lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d7dd4(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  BOOL BVar2;
  LPCSTR pSrc;
  LPCWSTR lpCurrentDirectory;
  LPWSTR lpCommandLine;
  undefined4 *in_FS_OFFSET;
  _SECURITY_ATTRIBUTES *lpProcessAttributes;
  _SECURITY_ATTRIBUTES *lpThreadAttributes;
  DWORD DVar3;
  LPVOID lpEnvironment;
  _STARTUPINFOW *lpStartupInfo;
  _PROCESS_INFORMATION *lpProcessInformation;
  undefined4 uStack_98;
  undefined1 *puStack_94;
  undefined1 *puStack_90;
  undefined4 local_80;
  undefined4 local_7c;
  _PROCESS_INFORMATION local_78;
  _STARTUPINFOW local_68;
  _SECURITY_ATTRIBUTES local_24;
  DWORD local_18;
  HANDLE local_14;
  HANDLE local_10;
  int local_c;
  undefined4 local_8;

  local_80 = 0;
  local_7c = 0;
  puStack_90 = (undefined1 *)0x6d7df5;
  local_c = param_3;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_90 = (undefined1 *)0x6d7dfd;
  thunk_FUN_00407660(local_c);
  puStack_94 = &LAB_006d7fec;
  uStack_98 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_98;
  local_24.nLength = 0xc;
  local_24.bInheritHandle = -1;
  local_24.lpSecurityDescriptor = (LPVOID)0x0;
  puStack_90 = &stack0xfffffffc;
  BVar2 = CreatePipe(&local_10,&local_14,&local_24,0);
  if (BVar2 != 0) {
    pSrc = (LPCSTR)FUN_00404304(0x961);
    FUN_00404f08(&local_68,0x44,0);
    local_68.cb = 0x44;
    local_68.hStdOutput = local_14;
    local_68.hStdInput = local_10;
    local_68.dwFlags = 0x101;
    local_68.wShowWindow = 0;
    thunk_FUN_004089c0(&local_8);
    if (local_c == 0) {
      FUN_00417600(&local_c);
    }
    lpProcessInformation = &local_78;
    lpStartupInfo = &local_68;
    lpCurrentDirectory = (LPCWSTR)FUN_00407f44(local_c);
    lpEnvironment = (LPVOID)0x0;
    DVar3 = 0x20;
    BVar2 = -1;
    lpThreadAttributes = &local_24;
    lpProcessAttributes = &local_24;
    lpCommandLine = (LPWSTR)FUN_00407f44(local_8);
    BVar2 = CreateProcessW((LPCWSTR)0x0,lpCommandLine,lpProcessAttributes,lpThreadAttributes,BVar2,
                           DVar3,lpEnvironment,lpCurrentDirectory,lpStartupInfo,lpProcessInformation
                          );
    if (BVar2 != 0) {
      do {
        DVar3 = WaitForSingleObject(local_78.hProcess,100);
        FUN_0051f71c(*(undefined4 *)PTR_DAT_00782280);
        local_18 = 0;
        PeekNamedPipe(local_10,(LPVOID)0x0,0,(LPDWORD)0x0,&local_18,(LPDWORD)0x0);
        if (local_18 != 0) {
          ReadFile(local_10,pSrc,0x960,&local_18,(LPOVERLAPPED)0x0);
          pSrc[local_18] = '\0';
          OemToCharA(pSrc,pSrc);
          FUN_00408044(&local_7c,pSrc);
          FUN_006d7d18(param_2,local_7c);
        }
      } while (DVar3 == 0x102);
      do {
        local_18 = 0;
        PeekNamedPipe(local_10,(LPVOID)0x0,0,(LPDWORD)0x0,&local_18,(LPDWORD)0x0);
        if (local_18 != 0) {
          ReadFile(local_10,pSrc,0x960,&local_18,(LPOVERLAPPED)0x0);
          pSrc[local_18] = '\0';
          OemToCharA(pSrc,pSrc);
          FUN_00408044(&local_80,pSrc);
          FUN_006d7d18(param_2,local_80);
        }
      } while (0x95f < local_18);
    }
    FUN_00404338(pSrc);
    CloseHandle(local_78.hProcess);
    CloseHandle(local_78.hThread);
    CloseHandle(local_10);
    CloseHandle(local_14);
  }
  puVar1 = puStack_90;
  *in_FS_OFFSET = uStack_98;
  puStack_90 = &LAB_006d7ff3;
  puStack_94 = (undefined1 *)0x6d7fde;
  thunk_FUN_00406e80(&local_80,2,puVar1);
  puStack_94 = (undefined1 *)0x6d7feb;
  thunk_FUN_00406e80(&local_c,2);
  return;
}
