// rea decompile_all
// name: FUN_0041ce54
// address: 0x41ce54
// body: available
// range: 0x41ce54-0x41cec1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041ce54(void)

{
  BOOL BVar1;
  _OSVERSIONINFOW local_114;

  local_114.dwOSVersionInfoSize = 0x114;
  BVar1 = GetVersionExW(&local_114);
  if (BVar1 != 0) {
    DAT_0067cb84 = local_114.dwPlatformId;
    DAT_0067cb88 = local_114.dwMajorVersion;
    DAT_0067cb8c = local_114.dwMinorVersion;
    if (local_114.dwPlatformId == 1) {
      _DAT_0067cb90 = local_114.dwBuildNumber & 0xffff;
    }
    else {
      _DAT_0067cb90 = local_114.dwBuildNumber;
    }
    FUN_004083a4(&DAT_0067cb94,local_114.szCSDVersion,0x80);
  }
  return;
}
