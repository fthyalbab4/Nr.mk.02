// rea decompile_all
// name: FUN_0041bd40
// address: 0x41bd40
// body: available
// range: 0x41bd40-0x41be64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41bd5b (push 0x41be65 followed by fs-segment stack chaining); handler 0x41be65 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041bd40(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  DWORD DVar3;
  HANDLE pvVar4;
  HINSTANCE hInstance;
  undefined4 *in_FS_OFFSET;
  LPSTR lpBuffer;
  undefined *lpBuffer_00;
  UINT uID;
  DWORD *pDVar5;
  WCHAR *lpBuffer_01;
  LPOVERLAPPED p_Var6;
  undefined4 uStack_8a0;
  undefined1 *puStack_89c;
  undefined1 *puStack_898;
  WCHAR local_88c [1024];
  WCHAR local_8c [64];
  DWORD local_c;
  LPSTR local_8;

  puStack_898 = &stack0xfffffffc;
  local_8 = (LPSTR)0x0;
  puStack_89c = &LAB_0041be65;
  uStack_8a0 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_8a0;
  iVar2 = FUN_0041bb50(param_1,param_2,local_88c);
  if (*PTR_DAT_00782464 == '\0') {
    iVar2 = 0x40;
    lpBuffer_01 = local_8c;
    uID = *(UINT *)(PTR_PTR_00781a00 + 4);
    hInstance = (HINSTANCE)FUN_00409dc8(DAT_00785c40);
    LoadStringW(hInstance,uID,lpBuffer_01,iVar2);
    MessageBoxW((HWND)0x0,local_88c,local_8c,0x2010);
  }
  else {
    FUN_00404c4c(PTR_DAT_00781b30);
    FUN_00404484();
    DVar3 = WideCharToMultiByte(1,0,local_88c,iVar2,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    FUN_00409be0(&local_8,&DAT_0041bd1c,1,DVar3);
    WideCharToMultiByte(1,0,local_88c,iVar2,local_8,DVar3,(LPCSTR)0x0,(LPBOOL)0x0);
    p_Var6 = (LPOVERLAPPED)0x0;
    pDVar5 = &local_c;
    lpBuffer = local_8;
    pvVar4 = GetStdHandle(0xfffffff4);
    WriteFile(pvVar4,lpBuffer,DVar3,pDVar5,p_Var6);
    p_Var6 = (LPOVERLAPPED)0x0;
    pDVar5 = &local_c;
    DVar3 = 2;
    lpBuffer_00 = &DAT_0041be80;
    pvVar4 = GetStdHandle(0xfffffff4);
    WriteFile(pvVar4,lpBuffer_00,DVar3,pDVar5,p_Var6);
  }
  puVar1 = puStack_89c;
  *in_FS_OFFSET = 0x400;
  puStack_89c = &LAB_0041be6c;
  uStack_8a0 = 0x41be64;
  FUN_00409ce0(&local_8,&DAT_0041bd1c,puVar1);
  return;
}
