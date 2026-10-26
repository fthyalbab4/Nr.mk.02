// rea decompile_all
// name: FUN_0042d808
// address: 0x42d808
// body: available
// range: 0x42d808-0x42d840 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042d808(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;

  cVar1 = **(char **)*param_2;
  if (cVar1 == '\x05') {
    FUN_0042d588();
    return;
  }
  if (cVar1 == '\n') {
    FUN_0042d614();
    return;
  }
  if (cVar1 == '\v') {
    FUN_0042d6b0();
    return;
  }
  if (cVar1 == '\x12') {
    FUN_0042d764();
  }
  return;
}
