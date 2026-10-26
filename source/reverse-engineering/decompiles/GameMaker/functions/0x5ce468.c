// rea decompile_all
// name: FUN_005ce468
// address: 0x5ce468
// body: available
// range: 0x5ce468-0x5ce541 inclusive
// range: 0x5ce55f-0x5ce65c inclusive
// range: 0x5ce664-0x5ce72c inclusive
// range: 0x5ce734-0x5ce799 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ce4a5 (push 0x5ce7cc followed by fs-segment stack chaining); handler 0x5ce7cc lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ce511 (push 0x5ce542 followed by fs-segment stack chaining); handler 0x5ce542 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ce59d (push 0x5ce79a followed by fs-segment stack chaining); handler 0x5ce79a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ce5d2 (push 0x5ce65d followed by fs-segment stack chaining); handler 0x5ce65d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ce6e1 (push 0x5ce72d followed by fs-segment stack chaining); handler 0x5ce72d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_005ce468(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  DWORD DVar2;
  HMODULE lpSource;
  int *in_FS_OFFSET;
  DWORD dwLanguageId;
  DWORD *pDVar3;
  HLOCAL *lpBuffer;
  int iVar4;
  DWORD nSize;
  undefined1 *puVar5;
  DWORD *pDVar6;
  va_list *Arguments;
  int iStack_8fc;
  undefined1 *puStack_8f8;
  undefined1 *puStack_8f4;
  undefined4 uStack_8f0;
  undefined4 uStack_8ec;
  DWORD *pDStack_8e8;
  undefined4 uStack_8e4;
  undefined4 uStack_8e0;
  undefined4 uStack_8dc;
  DWORD *pDStack_8d8;
  undefined4 uStack_8d4;
  undefined4 uStack_8d0;
  int iStack_8ac;
  undefined1 *puStack_8a8;
  undefined1 *puStack_8a4;
  undefined4 local_894;
  undefined4 local_890;
  undefined4 local_88c;
  undefined4 local_888;
  WCHAR local_884 [256];
  undefined1 local_684 [592];
  undefined1 local_434 [1024];
  HLOCAL local_34;
  DWORD local_30 [4];
  int local_20;
  undefined4 local_1c;
  undefined1 local_15;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;

  puStack_8a4 = &stack0xfffffffc;
  puVar5 = &stack0xfffffffc;
  local_894 = 0;
  local_890 = 0;
  local_88c = 0;
  local_888 = 0;
  local_8 = 0;
  local_c = 0;
  puStack_8a8 = &LAB_005ce7cc;
  iStack_8ac = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_8ac;
  local_15 = 0;
  local_14 = param_2;
  local_10 = param_1;
  FUN_00520290(*(undefined4 *)PTR_DAT_00782280,&local_888);
  FUN_00417398(local_888,&local_8);
  FUN_00407f44(local_8);
  local_1c = InternetOpenW();
  local_30[2] = 300000;
  uStack_8d0 = 0x5ce502;
  DVar2 = GetEnvironmentVariableW(L"YYINETTIMEOUT",local_884,0x100);
  if (DVar2 != 0) {
    iVar4 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&stack0xfffff734;
    uStack_8d0 = 0x5ce52a;
    FUN_004080c8(&local_88c,local_884,0x100);
    uStack_8d0 = 0x5ce535;
    local_30[2] = FUN_00416900(local_88c);
    *in_FS_OFFSET = iVar4;
  }
  uStack_8d0 = local_1c;
  uStack_8d4 = 0x5ce570;
  InternetSetOptionW();
  uStack_8d4 = 4;
  pDStack_8d8 = local_30 + 2;
  uStack_8dc = 5;
  uStack_8e0 = local_1c;
  uStack_8e4 = 0x5ce581;
  InternetSetOptionW();
  uStack_8e4 = 4;
  pDStack_8e8 = local_30 + 2;
  uStack_8ec = 2;
  uStack_8f0 = local_1c;
  puStack_8f4 = (undefined1 *)0x5ce592;
  InternetSetOptionW();
  puStack_8f8 = &LAB_005ce79a;
  iStack_8fc = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_8fc;
  puStack_8f4 = &stack0xfffffffc;
  FUN_00407f44(local_10);
  local_20 = InternetOpenUrlW();
  if (local_20 != 0) {
    iVar4 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&stack0xfffff6e0;
    FUN_00404ba0(local_684,local_14);
    FUN_004052a0(local_684,1);
    FUN_00404484();
    do {
      InternetReadFile();
      FUN_00404cfc(local_684,local_434,local_30[3],0);
      FUN_00404484();
    } while (local_30[3] != 0);
    FUN_00404d1c(local_684);
    FUN_00404484();
    local_15 = 1;
    *in_FS_OFFSET = iVar4;
    InternetCloseHandle(local_20,iVar4,puVar5);
    return;
  }
  DVar2 = GetLastError();
  if (DVar2 == 0x2ee3) {
    local_30[1] = 0;
    local_30[0] = 0x400;
    local_34 = (HLOCAL)FUN_0040431c(0x400);
    pDVar6 = local_30;
    pDVar3 = local_30 + 1;
    InternetGetLastResponseInfoW();
    FUN_00408074(&local_c,local_34);
    FUN_00404338(local_34);
    if (local_c == 0) {
      FUN_00407f0c(&local_c,L"Please ensure you have a valid internet connection");
    }
    FUN_0040839c(&local_890,L"Download Error : ",local_c);
    FUN_00700454(local_890);
    FUN_0040839c(&local_894,L"Download Error : ",local_c);
    FUN_004d43f8(local_894);
    *in_FS_OFFSET = (int)pDVar3;
    InternetCloseHandle(local_1c,pDVar3,pDVar6);
    return;
  }
  Arguments = (va_list *)0x0;
  nSize = 4;
  lpBuffer = &local_34;
  dwLanguageId = 0;
  lpSource = GetModuleHandleW(L"wininet.dll");
  local_30[0] = FormatMessageW(0x3b00,lpSource,DVar2,dwLanguageId,(LPWSTR)lpBuffer,nSize,Arguments);
  iVar4 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&stack0xfffff6e0;
  for (; local_30[0] != 0; local_30[0] = local_30[0] - 1) {
    cVar1 = FUN_0041562c(*(undefined2 *)((int)local_34 + local_30[0] * 2 + -2),&DAT_005ce814);
    if (cVar1 == '\0') break;
  }
  FUN_00407ff4(&local_c,local_34,local_30[0]);
  *in_FS_OFFSET = iVar4;
  LocalFree(local_34);
  return;
}
