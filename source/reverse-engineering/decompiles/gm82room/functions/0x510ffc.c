// rea decompile_all
// name: FUN_00510ffc
// address: 0x510ffc
// body: available
// range: 0x510ffc-0x5110d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x51101f (push 0x5110d1 followed by fs-segment stack chaining); handler 0x5110d1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00510ffc(void)

{
  undefined1 *puVar1;
  LPCWSTR lpString2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_330;
  undefined1 *puStack_32c;
  undefined1 *puStack_328;
  undefined4 local_320;
  undefined4 local_31c;
  WCHAR local_318 [256];
  _OSVERSIONINFOW local_118;

  puStack_328 = &stack0xfffffffc;
  local_320 = 0;
  local_31c = 0;
  puStack_32c = &LAB_005110d1;
  uStack_330 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_330;
  local_118.dwOSVersionInfoSize = 0x114;
  GetVersionExW(&local_118);
  local_318[0] = L'\0';
  FUN_00404730(0,&local_31c);
  lpString2 = (LPCWSTR)FUN_00408220(local_31c);
  lstrcatW(local_318,lpString2);
  CharUpperBuffW(local_318,0x100);
  if (local_118.dwPlatformId == 2) {
    FUN_004083a4(&local_320,local_318,0x100);
    FUN_00408d44(L"DELPHI32.EXE",local_320);
  }
  puVar1 = puStack_328;
  *in_FS_OFFSET = uStack_330;
  puStack_328 = &LAB_005110d8;
  puStack_32c = (undefined1 *)0x5110d0;
  thunk_FUN_004072fc(&local_320,2,puVar1);
  return;
}
