// rea decompile_all
// name: FUN_0041e688
// address: 0x41e688
// body: available
// range: 0x41e688-0x41e71a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0041e688(LPCSTR param_1)

{
  int iVar1;
  uint cchLength;
  LPWSTR lpWideCharStr;
  uint uVar2;
  WCHAR aWStack_218 [260];

  lpWideCharStr = aWStack_218;
  iVar1 = FUN_0040769c(param_1);
  cchLength = MultiByteToWideChar(0xfde9,0,param_1,iVar1,(LPWSTR)0x0,0);
  if (0x104 < cchLength) {
    lpWideCharStr = (LPWSTR)FUN_00404324(cchLength * 2);
  }
  MultiByteToWideChar(0xfde9,0,param_1,iVar1,lpWideCharStr,cchLength);
  CharUpperBuffW(lpWideCharStr,cchLength);
  uVar2 = 0;
  if (-1 < (int)(cchLength - 1)) {
    iVar1 = 0;
    do {
      uVar2 = (uVar2 << 5 | uVar2 >> 0x1b) ^ (uint)(ushort)lpWideCharStr[iVar1];
      iVar1 = iVar1 + 1;
      cchLength = cchLength - 1;
    } while (cchLength != 0);
  }
  if (lpWideCharStr != aWStack_218) {
    FUN_00404340(lpWideCharStr);
  }
  return uVar2;
}
