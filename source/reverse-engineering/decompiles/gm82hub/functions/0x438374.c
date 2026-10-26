// rea decompile_all
// name: FUN_00438374
// address: 0x438374
// body: available
// range: 0x438374-0x4383d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43839f (push 0x4383d2 followed by fs-segment stack chaining); handler 0x4383d2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00438374(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_20;

  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_0068ef70 + 8));
  uStackY_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_20;
  FUN_00437c4c(DAT_0068ef70,param_1,param_2);
  *in_FS_OFFSET = uStackY_20;
  uStackY_20 = 0x4383d1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(DAT_0068ef70 + 8));
  return;
}
