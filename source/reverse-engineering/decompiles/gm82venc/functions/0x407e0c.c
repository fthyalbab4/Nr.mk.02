// rea decompile_all
// name: FUN_00407e0c
// address: 0x407e0c
// body: available
// range: 0x407e0c-0x407e33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


BSTR * FUN_00407e0c(BSTR *param_1,OLECHAR *param_2)

{
  BSTR bstrString;
  BSTR *ppOVar1;

  if (*param_1 != param_2) {
    if ((param_2 == (OLECHAR *)0x0) || (*(uint *)(param_2 + -2) >> 1 == 0)) {
      bstrString = *param_1;
      if (bstrString != (BSTR)0x0) {
        *param_1 = (BSTR)0x0;
        SysFreeString(bstrString);
      }
      return param_1;
    }
    param_1 = (BSTR *)SysReAllocStringLen(param_1,param_2,*(uint *)(param_2 + -2) >> 1);
    if (param_1 == (BSTR *)0x0) {
      ppOVar1 = (BSTR *)FUN_00404480(1);
      return ppOVar1;
    }
  }
  return param_1;
}
