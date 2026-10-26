// rea decompile_all
// name: FUN_0051eddc
// address: 0x51eddc
// body: available
// range: 0x51eddc-0x51ee12 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x51edf6 (push 0x51ee29 followed by fs-segment stack chaining); handler 0x51ee29 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing reports a terminal call at 0x51ee0e to 0x406ab4 FUN_00406ab4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051eddc(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  puStack_c = (undefined1 *)0x51edeb;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_10 = &LAB_0051ee29;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  puStack_c = &stack0xfffffffc;
  uVar1 = FUN_0051edd8();
  FUN_0041bd4c(&LAB_00519d1c,1,local_8,uVar1);
  FUN_00406ab4();
  return;
}
