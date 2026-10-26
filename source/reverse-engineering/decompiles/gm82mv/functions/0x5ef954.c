// rea decompile_all
// name: FUN_005ef954
// address: 0x5ef954
// body: available
// range: 0x5ef954-0x5ef9a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ef97e (push 0x5ef9a4 followed by fs-segment stack chaining); handler 0x5ef9a4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ef954(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_2c;
  undefined2 local_14 [4];
  BSTR local_c;

  local_14[0] = 8;
  local_c = (BSTR)FUN_004096c4(param_3);
  uStackY_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_2c;
  FUN_005ef89c(param_1,param_2,local_14);
  *in_FS_OFFSET = uStackY_2c;
  uStackY_2c = 0x5ef9a3;
  SysFreeString(local_c);
  return;
}
