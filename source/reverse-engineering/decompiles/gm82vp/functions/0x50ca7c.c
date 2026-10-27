// rea decompile_all
// name: FUN_0050ca7c
// address: 0x50ca7c
// body: available
// range: 0x50ca7c-0x50cb83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x50cab4 (push 0x50cb84 followed by fs-segment stack chaining); handler 0x50cb84 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050ca7c(BOOL param_1,LPSECURITY_ATTRIBUTES param_2,undefined4 param_3,char param_4)

{
  undefined4 uVar1;
  LPWSTR lpCommandLine;
  BOOL BVar2;
  undefined4 *in_FS_OFFSET;
  LPSECURITY_ATTRIBUTES lpProcessAttributes;
  LPSECURITY_ATTRIBUTES lpThreadAttributes;
  DWORD dwCreationFlags;
  LPVOID lpEnvironment;
  LPCWSTR lpCurrentDirectory;
  LPSTARTUPINFOW lpStartupInfo;
  LPPROCESS_INFORMATION lpProcessInformation;
  HANDLE *ppvVar3;
  undefined4 uStack_7c;
  undefined1 *puStack_78;
  undefined1 *puStack_74;
  undefined4 local_6c;
  undefined4 local_68 [11];
  undefined4 local_3c;
  undefined2 local_38;
  HANDLE local_24;
  HANDLE local_20;
  DWORD local_14;
  undefined4 local_10;
  LPSECURITY_ATTRIBUTES local_c;
  BOOL local_8;

  local_6c = 0;
  puStack_74 = (undefined1 *)0x50ca99;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_74 = (undefined1 *)0x50caa1;
  thunk_FUN_00407ad0(local_c);
  puStack_74 = (undefined1 *)0x50caa9;
  thunk_FUN_00407ad0(local_10);
  puStack_78 = &LAB_0050cb84;
  uStack_7c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_7c;
  puStack_74 = &stack0xfffffffc;
  FUN_00404f38(local_68,0x44,0);
  local_68[0] = 0x44;
  local_3c = 1;
  local_38 = 5;
  ppvVar3 = &local_24;
  uVar1 = FUN_00408220(local_10);
  lpProcessInformation = (LPPROCESS_INFORMATION)0x0;
  lpStartupInfo = (LPSTARTUPINFOW)0x0;
  lpCurrentDirectory = (LPCWSTR)0x0;
  lpEnvironment = (LPVOID)0x0;
  dwCreationFlags = 0;
  lpThreadAttributes = (LPSECURITY_ATTRIBUTES)&LAB_0050cba0;
  lpProcessAttributes = local_c;
  BVar2 = local_8;
  FUN_0040875c(&local_6c,3);
  lpCommandLine = (LPWSTR)FUN_00408220(local_6c);
  BVar2 = CreateProcessW((LPCWSTR)0x0,lpCommandLine,lpProcessAttributes,lpThreadAttributes,BVar2,
                         dwCreationFlags,lpEnvironment,lpCurrentDirectory,lpStartupInfo,
                         lpProcessInformation);
  if (BVar2 != 0) {
    if (param_4 != '\0') {
      do {
        GetExitCodeProcess(local_24,&local_14);
        FUN_00628b78();
        Sleep(0x32);
      } while (local_14 == 0x103);
    }
    CloseHandle(local_24);
    CloseHandle(local_20);
  }
  *in_FS_OFFSET = uVar1;
  thunk_FUN_004072d8(&local_6c,uVar1,ppvVar3,&LAB_0050cb8b);
  thunk_FUN_004072fc(&local_10,3);
  return;
}
