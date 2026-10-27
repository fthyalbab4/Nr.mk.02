// rea decompile_all
// name: FUN_00561128
// address: 0x561128
// body: available
// range: 0x561128-0x5611af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00561128(void)

{
  BOOL BVar1;
  DWORD DVar2;
  int local_20;
  LARGE_INTEGER local_18;
  LARGE_INTEGER local_10;
  int local_8;
  int iStack_4;

  BVar1 = QueryPerformanceFrequency(&local_18);
  if (BVar1 == 0) {
    DVar2 = GetTickCount();
    local_20 = DVar2 * 1000 - _DAT_00711894;
  }
  else {
    QueryPerformanceCounter(&local_10);
    local_8 = local_10.s.LowPart - _DAT_00711894;
    iStack_4 = (local_10.s.HighPart - _DAT_00711898) - (uint)(local_10.s.LowPart < _DAT_00711894);
    local_20 = FUN_004102e4();
  }
  return local_20;
}
