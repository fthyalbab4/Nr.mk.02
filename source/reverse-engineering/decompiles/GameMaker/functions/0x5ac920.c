// rea decompile_all
// name: FUN_005ac920
// address: 0x5ac920
// body: available
// range: 0x5ac920-0x5ac96a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ac920(int param_1)

{
  char cVar1;

  if (*(char *)(param_1 + 0x349) == '\0') {
    FUN_0041bfec(&PTR_LAB_005aa104,1,PTR_PTR_00781c18);
    FUN_00406618();
  }
  cVar1 = FUN_005ad734(param_1);
  if (cVar1 == '\x02') {
    FUN_005ac96c(param_1);
    return;
  }
  cVar1 = FUN_005ad734(param_1);
  if (cVar1 == '\x05') {
    FUN_005aca00(param_1);
  }
  return;
}
