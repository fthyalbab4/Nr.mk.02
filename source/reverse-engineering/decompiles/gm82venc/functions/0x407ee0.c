// rea decompile_all
// name: FUN_00407ee0
// address: 0x407ee0
// body: available
// range: 0x407da0-0x407da6 inclusive
// range: 0x407ee0-0x407f02 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x407da2 to 0x404480 FUN_00404480 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


BSTR FUN_00407ee0(BSTR param_1,OLECHAR *param_2,UINT param_3)

{
  BSTR bstrString;
  BSTR pOVar1;

  if (param_3 == 0) {
    if (*(BSTR *)param_1 != (BSTR)0x0) {
      param_1[0] = L'\0';
      param_1[1] = L'\0';
      SysFreeString(*(BSTR *)param_1);
    }
    return param_1;
  }
  pOVar1 = SysAllocStringLen(param_2,param_3);
  if (pOVar1 != (BSTR)0x0) {
    bstrString = *(BSTR *)param_1;
    *(BSTR *)param_1 = pOVar1;
    SysFreeString(bstrString);
    return pOVar1;
  }
  pOVar1 = (BSTR)FUN_00404480(1);
  return pOVar1;
}
