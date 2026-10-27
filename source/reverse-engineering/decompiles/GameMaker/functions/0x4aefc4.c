// rea decompile_all
// name: FUN_004aefc4
// address: 0x4aefc4
// body: available
// range: 0x4aefc4-0x4aefea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 * FUN_004aefc4(undefined4 param_1,undefined2 *param_2,int *param_3)

{
  char cVar1;

  *param_3 = 0;
  while( true ) {
    cVar1 = FUN_0041562c(*param_2,&DAT_004aefec);
    if (cVar1 == '\0') break;
    param_2 = param_2 + 1;
    *param_3 = *param_3 + 1;
  }
  return param_2;
}
