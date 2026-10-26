// rea decompile_all
// name: FUN_0052cc30
// address: 0x52cc30
// body: available
// range: 0x52cc30-0x52cc8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x52cc52 (push 0x52cc90 followed by fs-segment stack chaining); handler 0x52cc90 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052cc30(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;

  FUN_004399ac(*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x38));
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  piVar2 = *(int **)(param_1 + 0x7c);
  if ((piVar2 != (int *)0x0) && (*piVar2 == param_1)) {
    *piVar2 = 0;
  }
  *in_FS_OFFSET = uVar1;
  uStackY_18 = 0x52cc8f;
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(*(int *)(param_1 + 0x40) + 0x38) + 8));
  return;
}
