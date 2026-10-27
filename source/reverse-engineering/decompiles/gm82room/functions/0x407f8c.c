// rea decompile_all
// name: FUN_00407f8c
// address: 0x407f8c
// body: available
// range: 0x407f8c-0x407fb6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x407fa8 to 0x407e34 FUN_00407e34 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x407fad to 0x407ed0 FUN_00407ed0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x407fb2 to 0x407ee0 FUN_00407ee0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00407f8c(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_00407ed0(param_1,0,0);
    return;
  }
  if (*(short *)(param_2 + -10) == 1) {
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
    FUN_00407e34(param_1,param_2,*(undefined4 *)(param_2 + -4));
    return;
  }
  FUN_00407ee0();
  return;
}
