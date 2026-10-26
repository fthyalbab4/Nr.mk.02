// rea decompile_all
// name: FUN_0040abdc
// address: 0x40abdc
// body: available
// range: 0x40abdc-0x40ac95 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x40ac05 (push 0x40ac96 followed by fs-segment stack chaining); handler 0x40ac96 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040abdc(undefined4 param_1)

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
  puStack_22c = &LAB_0040ac96;
  uStack_230 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_230;
  GetModuleFileNameW((HMODULE)0x0,local_212,0x105);
  FUN_00408074(&local_218,param_1);
  uVar2 = local_218;
  FUN_004080c8(&local_21c,local_212,0x105);
  FUN_0040adec(local_21c,uVar2,&local_8);
  if (local_8 != 0) {
    dwFlags = 2;
    hFile = (HANDLE)0x0;
    lpLibFileName = (LPCWSTR)FUN_00407f44(local_8);
    LoadLibraryExW(lpLibFileName,hFile,dwFlags);
  }
  puVar1 = puStack_228;
  *in_FS_OFFSET = uStack_230;
  puStack_228 = &LAB_0040ac9d;
  puStack_22c = (undefined1 *)0x40ac8d;
  thunk_FUN_00406e80(&local_21c,2,puVar1);
  puStack_22c = (undefined1 *)0x40ac95;
  thunk_FUN_00406e5c(&local_8);
  return;
}
