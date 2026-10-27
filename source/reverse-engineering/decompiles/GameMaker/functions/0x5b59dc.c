// rea decompile_all
// name: FUN_005b59dc
// address: 0x5b59dc
// body: available
// range: 0x5b59dc-0x5b5a46 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b59dc(void)

{
  HMODULE pHVar1;
  code *pcVar2;

  pHVar1 = GetModuleHandleW(L"libeay32.dll");
  if (pHVar1 == (HMODULE)0x0) {
    FUN_0041beb8(&PTR_LAB_00410b4c,1,L"libeay32.dll not loaded");
    FUN_00406618();
  }
  pcVar2 = (code *)FUN_0040dcb4();
  if (pcVar2 == (code *)0x0) {
    pcVar2 = (code *)FUN_0040dcb4();
  }
  if (pcVar2 == (code *)0x0) {
    FUN_0041beb8(&PTR_LAB_00410b4c,1,
                 L"OpenSSL_add_all_algorithms procedure not defined in libeay32.dll");
    FUN_00406618();
  }
  else {
    (*pcVar2)();
  }
  return;
}
