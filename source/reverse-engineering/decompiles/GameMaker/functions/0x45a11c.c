// rea decompile_all
// name: FUN_0045a11c
// address: 0x45a11c
// body: available
// range: 0x45a11c-0x45a189 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45a149 (push 0x45a18a followed by fs-segment stack chaining); handler 0x45a18a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045a11c(int param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_28;

  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  uStackY_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_28;
  iVar1 = param_2[4];
  if (param_3 != iVar1) {
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
    param_2[4] = param_3;
    (**(code **)(*param_2 + 0xc))();
    FUN_00459fc0(param_1,iVar1);
  }
  *in_FS_OFFSET = uStackY_28;
  uStackY_28 = 0x45a189;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}
