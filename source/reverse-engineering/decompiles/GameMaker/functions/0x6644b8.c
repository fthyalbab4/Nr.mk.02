// rea decompile_all
// name: FUN_006644b8
// address: 0x6644b8
// body: available
// range: 0x6644b8-0x6644f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006644b8(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;

  FUN_00662e6c(param_1,param_2,param_3);
  if (((*(byte *)(param_1 + 0x1c) & 8) == 0) && ((char)param_3 == '\x01')) {
    cVar1 = FUN_00405c98(param_2,&PTR_FUN_004e3e3c);
    if (cVar1 != '\0') {
      FUN_004ee5c0(param_2,0);
    }
  }
  return;
}
