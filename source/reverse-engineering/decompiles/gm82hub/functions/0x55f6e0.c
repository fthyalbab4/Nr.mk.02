// rea decompile_all
// name: FUN_0055f6e0
// address: 0x55f6e0
// body: available
// range: 0x55f6e0-0x55f725 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x55f6fc (push 0x55f726 followed by fs-segment stack chaining); handler 0x55f726 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055f6e0(int param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;

  FUN_004399ac(param_1);
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *in_FS_OFFSET = uVar1;
  uStackY_18 = 0x55f725;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}
