// rea decompile_all
// name: FUN_0043a3a0
// address: 0x43a3a0
// body: available
// range: 0x43a3a0-0x43a41b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43a3c8 (push 0x43a41c followed by fs-segment stack chaining); handler 0x43a41c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043a3a0(undefined **param_1)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_1c;

  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_00787f70 + 8));
  uStackY_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_1c;
  while( true ) {
    cVar1 = FUN_00439ee8(DAT_00787f70,param_1);
    if (cVar1 != '\0') break;
    FUN_00439eb0(DAT_00787f70,param_1);
    if (param_1 == &PTR_FUN_00430768) break;
    param_1 = (undefined **)FUN_00405a08(param_1);
  }
  *in_FS_OFFSET = uStackY_1c;
  uStackY_1c = 0x43a41b;
  LeaveCriticalSection((LPCRITICAL_SECTION)(DAT_00787f70 + 8));
  return;
}
