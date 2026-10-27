// rea decompile_all
// name: FUN_00447c84
// address: 0x447c84
// body: available
// range: 0x447c84-0x447cb1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00447c84(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00787f7c);
  DAT_00787f64 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,-1,0,L"");
  if (DAT_00787f64 == (HANDLE)0x0) {
    FUN_0041e9c8();
  }
  return;
}
