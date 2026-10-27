// rea decompile_all
// name: FUN_0040a740
// address: 0x40a740
// body: available
// range: 0x40a740-0x40a909 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


LPWSTR FUN_0040a740(LPWSTR param_1,int param_2)

{
  FARPROC pFVar1;
  int iVar2;
  short *psVar3;
  LPCWSTR lpString2;
  LPCWSTR pWVar4;
  int iVar5;
  WCHAR local_46e [261];
  _WIN32_FIND_DATAW local_264;
  HMODULE local_14;
  LPWSTR local_10;
  int local_c;
  LPWSTR local_8;

  local_10 = param_1;
  local_c = param_2;
  local_8 = param_1;
  local_14 = GetModuleHandleW(L"kernel32.dll");
  if (((local_14 == (HMODULE)0x0) ||
      (pFVar1 = GetProcAddress(local_14,"GetLongPathNameW"), pFVar1 == (FARPROC)0x0)) ||
     (iVar2 = (*pFVar1)(), iVar2 == 0)) {
    if (*local_8 == L'\\') {
      if (local_8[1] != L'\\') {
        return local_10;
      }
      psVar3 = (short *)FUN_0040a71c(local_8 + 2);
      if (*psVar3 == 0) {
        return local_10;
      }
      lpString2 = (LPCWSTR)FUN_0040a71c(psVar3 + 1);
      if (*lpString2 == L'\0') {
        return local_10;
      }
    }
    else {
      lpString2 = local_8 + 2;
    }
    iVar2 = (int)lpString2 - (int)local_8 >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)(((int)lpString2 - (int)local_8 & 1U) != 0);
    }
    lstrcpynW(local_46e,local_8,iVar2 + 1);
    while (*lpString2 != L'\0') {
      pWVar4 = (LPCWSTR)FUN_0040a71c(lpString2 + 1);
      iVar5 = (int)pWVar4 - (int)lpString2 >> 1;
      if (iVar5 < 0) {
        iVar5 = iVar5 + (uint)(((int)pWVar4 - (int)lpString2 & 1U) != 0);
      }
      if (0x105 < iVar5 + iVar2 + 1) {
        return local_10;
      }
      iVar5 = (int)pWVar4 - (int)lpString2 >> 1;
      if (iVar5 < 0) {
        iVar5 = iVar5 + (uint)(((int)pWVar4 - (int)lpString2 & 1U) != 0);
      }
      lstrcpynW(local_46e + iVar2,lpString2,iVar5 + 1);
      local_14 = FindFirstFileW(local_46e,&local_264);
      if (local_14 == (HMODULE)0xffffffff) {
        return local_10;
      }
      FindClose(local_14);
      iVar5 = lstrlenW(local_264.cFileName);
      if (0x105 < iVar5 + iVar2 + 2) {
        return local_10;
      }
      local_46e[iVar2] = L'\\';
      lstrcpynW(local_46e + iVar2 + 1,local_264.cFileName,0x104 - iVar2);
      iVar5 = lstrlenW(local_264.cFileName);
      iVar2 = iVar2 + iVar5 + 1;
      lpString2 = pWVar4;
    }
    lstrcpynW(local_8,local_46e,local_c);
  }
  else {
    lstrcpynW(local_8,local_46e,local_c);
  }
  return local_10;
}
