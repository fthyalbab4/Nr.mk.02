// rea decompile_all
// name: FUN_0043c230
// address: 0x43c230
// body: available
// range: 0x43c230-0x43c27e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43c252 (push 0x43c27f followed by fs-segment stack chaining); handler 0x43c27f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043c230(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_1c;

  uVar1 = FUN_0043bb30(*(undefined4 *)(param_1 + 0xc));
  uStackY_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_1c;
  FUN_0043b2ec(uVar1,param_2);
  *in_FS_OFFSET = uStackY_1c;
  uStackY_1c = 0x43c27e;
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 0xc) + 8));
  return;
}
