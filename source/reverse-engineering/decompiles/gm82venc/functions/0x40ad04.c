// rea decompile_all
// name: FUN_0040ad04
// address: 0x40ad04
// body: available
// range: 0x40ad04-0x40adbd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x40ad2d (push 0x40adbe followed by fs-segment stack chaining); handler 0x40adbe lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040ad04(undefined4 param_1)

{
  undefined1 *puVar1;
  LPCWSTR lpLibFileName;
  undefined4 *in_FS_OFFSET;
  HANDLE hFile;
  undefined4 uVar2;
  DWORD dwFlags;
  undefined4 uStack_230;
  undefined1 *puStack_22c;
  undefined1 *puStack_228;
  undefined4 local_21c;
  undefined4 local_218;
  WCHAR local_212 [261];
  int local_8;

  puStack_228 = &stack0xfffffffc;
  local_218 = 0;
  local_21c = 0;
  local_8 = 0;
  puStack_22c = &LAB_0040adbe;
  uStack_230 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_230;
  GetModuleFileNameW((HMODULE)0x0,local_212,0x105);
  FUN_00408350(&local_218,param_1);
  uVar2 = local_218;
  FUN_004083a4(&local_21c,local_212,0x105);
  FUN_0040af14(local_21c,uVar2,&local_8);
  if (local_8 != 0) {
    dwFlags = 2;
    hFile = (HANDLE)0x0;
    lpLibFileName = (LPCWSTR)FUN_00408220(local_8);
    LoadLibraryExW(lpLibFileName,hFile,dwFlags);
  }
  puVar1 = puStack_228;
  *in_FS_OFFSET = uStack_230;
  puStack_228 = &LAB_0040adc5;
  puStack_22c = (undefined1 *)0x40adb5;
  thunk_FUN_004072fc(&local_21c,2,puVar1);
  puStack_22c = (undefined1 *)0x40adbd;
  thunk_FUN_004072d8(&local_8);
  return;
}
