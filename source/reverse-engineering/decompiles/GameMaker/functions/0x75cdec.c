// rea decompile_all
// name: FUN_0075cdec
// address: 0x75cdec
// body: available
// range: 0x75cdec-0x75ce52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x75ce0b (push 0x75ce53 followed by fs-segment stack chaining); handler 0x75ce53 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0075cdec(int param_1,undefined4 param_2)

{
  DWORD DVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_1c;

  FUN_0043bb30(param_1);
  uStackY_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_1c;
  DVar1 = GetCurrentThreadId();
  if (DVar1 == *(DWORD *)PTR_DAT_0078296c) {
    *(undefined1 *)(param_1 + 0x28) = 1;
    *(undefined4 *)(param_1 + 0x24) = param_2;
  }
  else {
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  *in_FS_OFFSET = uStackY_1c;
  uStackY_1c = 0x75ce52;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}
