// rea decompile_all
// name: FUN_00533978
// address: 0x533978
// body: available
// range: 0x533978-0x533a86 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5339b0 (push 0x533a87 followed by fs-segment stack chaining); handler 0x533a87 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00533978(BOOL param_1,LPSECURITY_ATTRIBUTES param_2,undefined4 param_3,char param_4)

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
  puStack_74 = (undefined1 *)0x533995;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_74 = (undefined1 *)0x53399d;
  thunk_FUN_00407660(local_c);
  puStack_74 = (undefined1 *)0x5339a5;
  thunk_FUN_00407660(local_10);
  puStack_78 = &LAB_00533a87;
  uStack_7c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_7c;
  puStack_74 = &stack0xfffffffc;
  FUN_00404f08(local_68,0x44,0);
  local_68[0] = 0x44;
  local_3c = 1;
  local_38 = 5;
  ppvVar3 = &local_24;
  uVar1 = FUN_00407f44(local_10);
  lpProcessInformation = (LPPROCESS_INFORMATION)0x0;
  lpStartupInfo = (LPSTARTUPINFOW)0x0;
  lpCurrentDirectory = (LPCWSTR)0x0;
  lpEnvironment = (LPVOID)0x0;
  dwCreationFlags = 0;
  lpThreadAttributes = (LPSECURITY_ATTRIBUTES)&DAT_00533aa4;
  lpProcessAttributes = local_c;
  BVar2 = local_8;
  FUN_00408480(&local_6c,3);
  lpCommandLine = (LPWSTR)FUN_00407f44(local_6c);
  BVar2 = CreateProcessW((LPCWSTR)0x0,lpCommandLine,lpProcessAttributes,lpThreadAttributes,BVar2,
                         dwCreationFlags,lpEnvironment,lpCurrentDirectory,lpStartupInfo,
                         lpProcessInformation);
  if (BVar2 != 0) {
    if (param_4 != '\0') {
      do {
        GetExitCodeProcess(local_24,&local_14);
        FUN_0051f71c(*(undefined4 *)PTR_DAT_00782280);
        Sleep(100);
      } while (local_14 == 0x103);
    }
    CloseHandle(local_24);
    CloseHandle(local_20);
  }
  *in_FS_OFFSET = uVar1;
  thunk_FUN_00406e5c(&local_6c,uVar1,ppvVar3,&LAB_00533a8e);
  thunk_FUN_00406e80(&local_10,3);
  return;
}
