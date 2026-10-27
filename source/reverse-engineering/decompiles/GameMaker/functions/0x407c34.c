// rea decompile_all
// name: FUN_00407c34
// address: 0x407c34
// body: available
// range: 0x407c34-0x407c5e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x407c50 to 0x407adc FUN_00407adc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x407c55 to 0x407b78 FUN_00407b78 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x407c5a to 0x407b88 FUN_00407b88 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00407c34(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_00407b78(param_1,0,0);
    return;
  }
  if (*(short *)(param_2 + -10) == 1) {
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
    FUN_00407adc(param_1,param_2,*(undefined4 *)(param_2 + -4));
    return;
  }
  FUN_00407b88();
  return;
}
