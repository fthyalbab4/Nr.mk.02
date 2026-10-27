// rea decompile_all
// name: FUN_005e09f8
// address: 0x5e09f8
// body: available
// range: 0x5e09f8-0x5e0a3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005e0a2d) */

void FUN_005e09f8(void)

{
  BOOL BVar1;
  LARGE_INTEGER local_10;
  LARGE_INTEGER local_8;

  BVar1 = QueryPerformanceFrequency(&local_8);
  if ((BVar1 == 0) || (BVar1 = QueryPerformanceCounter(&local_10), BVar1 == 0)) {
    GetTickCount();
  }
  else {
    FUN_00404884();
  }
  return;
}
