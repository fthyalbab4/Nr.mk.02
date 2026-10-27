// rea decompile_all
// name: FUN_00419d50
// address: 0x419d50
// body: available
// range: 0x419d50-0x419e40 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x419d6f (push 0x419e41 followed by fs-segment stack chaining); handler 0x419e41 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00419d50(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  LPCWSTR lpFormat;
  LCID Locale;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  DWORD dwFlags;
  SYSTEMTIME *lpDate;
  WCHAR *lpDateStr;
  int *cchDate;
  undefined4 uStack_230;
  undefined1 *puStack_22c;
  undefined1 *puStack_228;
  WCHAR local_218 [256];
  SYSTEMTIME local_18;
  undefined4 local_8;

  puStack_228 = &stack0xfffffffc;
  local_8 = 0;
  puStack_22c = &LAB_00419e41;
  uStack_230 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_230;
  FUN_00407eb8(param_2,0);
  local_18.wYear = *(WORD *)(param_4 + -2);
  local_18.wMonth = *(WORD *)(param_4 + -4);
  local_18.wDay = *(WORD *)(param_4 + -6);
  if (param_1 < 3) {
    FUN_00407f0c(&local_8,&DAT_00419e5c);
  }
  else {
    FUN_00407f0c(&local_8,L"yyyy");
  }
  cchDate = (int *)0x100;
  lpDateStr = local_218;
  lpFormat = (LPCWSTR)FUN_00407f44(local_8);
  lpDate = &local_18;
  dwFlags = 4;
  Locale = GetThreadLocale();
  iVar2 = GetDateFormatW(Locale,dwFlags,lpDate,lpFormat,lpDateStr,(int)cchDate);
  if (iVar2 != 0) {
    cchDate = (int *)0x419df9;
    FUN_004080c8(param_2,local_218,0x100);
    if ((param_1 == 1) && (*(short *)*param_2 == 0x30)) {
      iVar2 = 0;
      if (*param_2 != 0) {
        iVar2 = *(int *)(*param_2 + -4);
      }
      FUN_004086a8(*param_2,2,iVar2 + -1);
      cchDate = param_2;
    }
  }
  puVar1 = puStack_22c;
  *in_FS_OFFSET = cchDate;
  puStack_22c = &LAB_00419e48;
  uStack_230 = 0x419e40;
  thunk_FUN_00406e5c(&local_8,cchDate,puVar1);
  return;
}
