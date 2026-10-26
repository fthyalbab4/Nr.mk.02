// rea decompile_all
// name: FUN_00406268
// address: 0x406268
// body: available
// range: 0x406268-0x40627c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x406278 to 0x4048e8 FUN_004048e8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00406268(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_EDX;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 in_ZF;
  undefined4 in_stack_00000000;

  FUN_00406238(*param_1);
  if (!(bool)in_ZF) {
                    /* WARNING: Could not recover jumptable at 0x00406275. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,extraout_EDX,param_3);
    return;
  }
  FUN_004048e8(param_1,extraout_EDX,in_stack_00000000);
  return;
}
