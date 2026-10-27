// rea decompile_all
// name: FUN_0045c5a4
// address: 0x45c5a4
// body: available
// range: 0x45c5a4-0x45c5ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45c5c0 (push 0x45c5f0 followed by fs-segment stack chaining); handler 0x45c5f0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045c5a4(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;

  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0068f138);
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  if (*(int *)(param_1 + 0x34) == 0) {
    FUN_0045c4fc(param_1);
  }
  *in_FS_OFFSET = uStackY_18;
  uStackY_18 = 0x45c5ef;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0068f138);
  return;
}
