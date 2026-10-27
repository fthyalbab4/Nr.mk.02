// rea decompile_all
// name: FUN_0041ea80
// address: 0x41ea80
// body: available
// range: 0x41ea80-0x41eb8c inclusive
// range: 0x41eb94-0x41ebb0 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41ea9c (push 0x41ebce followed by fs-segment stack chaining); handler 0x41ebce lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41eb2c (push 0x41ebb1 followed by fs-segment stack chaining); handler 0x41ebb1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41eb61 (push 0x41eb8d followed by fs-segment stack chaining); handler 0x41eb8d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041ea80(LPCWSTR param_1,undefined4 param_2)

{
  DWORD DVar1;
  HRSRC hResInfo;
  LPVOID pvVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_24;
  LPCWSTR local_20;
  undefined1 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  char local_d;
  HGLOBAL local_c;
  HMODULE local_8;

  puStack_30 = &stack0xfffffffc;
  local_24 = 0;
  puStack_34 = &LAB_0041ebce;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  FUN_00408194(param_2,0);
  local_d = '\x01';
  local_8 = (HMODULE)FUN_0040ad04(param_1,1);
  if (local_8 == (HMODULE)0x0) {
    local_8 = GetModuleHandleW(param_1);
    if (local_8 == (HMODULE)0x0) {
      local_8 = LoadLibraryExW(param_1,(HANDLE)0x0,2);
    }
    else {
      local_d = '\0';
    }
    if (local_8 == (HMODULE)0x0) {
      local_1c = 10;
      local_20 = param_1;
      DVar1 = GetLastError();
      FUN_0041b234(DVar1,&local_24);
      local_18 = local_24;
      local_14 = 0x11;
      FUN_0041bf50(&LAB_00412144,1,PTR_LAB_00688c98);
      FUN_00406ab4();
    }
  }
  uVar3 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffbc;
  hResInfo = FindResourceW(local_8,L"DESCRIPTION",(LPCWSTR)0xa);
  if (hResInfo != (HRSRC)0x0) {
    local_c = LoadResource(local_8,hResInfo);
    if (local_c != (HGLOBAL)0x0) {
      uVar3 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xffffffb0;
      pvVar2 = LockResource(local_c);
      FUN_00408350(param_2,pvVar2);
      *in_FS_OFFSET = uVar3;
      FreeResource(local_c);
      return;
    }
  }
  *in_FS_OFFSET = uVar3;
  if (local_d != '\0') {
    FreeLibrary(local_8);
  }
  return;
}
