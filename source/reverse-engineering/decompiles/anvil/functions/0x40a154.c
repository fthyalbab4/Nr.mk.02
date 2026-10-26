// rea decompile_all
// name: FUN_0040a154
// address: 0x40a154
// body: available
// range: 0x40a154-0x40a1d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040a154(void)

{
  DWORD DVar1;
  HMODULE pHVar2;
  char *pcVar3;

  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_0068cb5c);
  DAT_0068cb74 = 0x7f;
  DVar1 = GetVersion();
  DAT_0068cb58 = 5 < (DVar1 & 0xff);
  if ((bool)DAT_0068cb58) {
    pcVar3 = "GetThreadPreferredUILanguages";
    pHVar2 = GetModuleHandleW(L"kernel32.dll");
    DAT_0068cb4c = GetProcAddress(pHVar2,pcVar3);
    pcVar3 = "SetThreadPreferredUILanguages";
    pHVar2 = GetModuleHandleW(L"kernel32.dll");
    DAT_0068cb50 = GetProcAddress(pHVar2,pcVar3);
    pcVar3 = "GetThreadUILanguage";
    pHVar2 = GetModuleHandleW(L"kernel32.dll");
    DAT_0068cb54 = GetProcAddress(pHVar2,pcVar3);
  }
  return;
}
