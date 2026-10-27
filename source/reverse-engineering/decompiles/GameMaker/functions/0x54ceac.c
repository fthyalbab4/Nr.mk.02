// rea decompile_all
// name: FUN_0054ceac
// address: 0x54ceac
// body: available
// range: 0x54ceac-0x54cf20 inclusive
// range: 0x54cf83-0x54cf8f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x54cecc (push 0x54cf21 followed by fs-segment stack chaining); handler 0x54cf21 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054ceac(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_38;

  FUN_0043bb30(*(undefined4 *)(param_1 + 0x38));
  uStackY_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_38;
  if (*(int *)(param_1 + 0x54) == 0) {
    FUN_0040670c();
  }
  else {
    FUN_0054a190();
    if ((*(byte *)(*(int *)(param_1 + 0x54) + 0x58) & 1) != 0) {
      *in_FS_OFFSET = uStackY_38;
      uStackY_38 = 0x54cf20;
      LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 0x38) + 8));
      return;
    }
    FUN_0040670c();
  }
  FUN_0054c55c(param_1);
  return;
}
