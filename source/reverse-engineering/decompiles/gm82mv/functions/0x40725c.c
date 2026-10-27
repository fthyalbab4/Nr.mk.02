// rea decompile_all
// name: FUN_0040725c
// address: 0x40725c
// body: available
// range: 0x40725c-0x4072b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040725c(LPSECURITY_ATTRIBUTES param_1,SIZE_T param_2,undefined4 param_3,LPDWORD param_4,
                 DWORD param_5,undefined4 param_6)

{
  undefined4 *lpParameter;

  if (DAT_0067c038 == (code *)0x0) {
    lpParameter = (undefined4 *)FUN_00404324(8);
    *lpParameter = param_3;
    lpParameter[1] = param_6;
  }
  else {
    lpParameter = (undefined4 *)(*DAT_0067c038)(param_3,param_6);
  }
  DAT_0068a055 = 1;
  CreateThread(param_1,param_2,FUN_00407224,lpParameter,param_5,param_4);
  return;
}
