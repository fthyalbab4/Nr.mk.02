// rea decompile_all
// name: FUN_0041760c
// address: 0x41760c
// body: available
// range: 0x41760c-0x417625 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0041760c(undefined4 param_1)

{
  LPCWSTR lpPathName;
  BOOL BVar1;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;

  lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
  lpPathName = (LPCWSTR)FUN_00407f44(param_1);
  BVar1 = CreateDirectoryW(lpPathName,lpSecurityAttributes);
  return BVar1 != 0;
}
