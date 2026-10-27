// rea decompile_all
// name: FUN_004846d0
// address: 0x4846d0
// body: available
// range: 0x4846d0-0x484709 inclusive
// range: 0x484725-0x484742 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4846f1 (push 0x48470a followed by fs-segment stack chaining); handler 0x48470a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004846d0(int param_1,UINT *param_2)

{
  UINT UVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;

  if (*param_2 == 0x113) {
    uVar2 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffe0;
    FUN_00406268(param_1);
    *in_FS_OFFSET = uVar2;
  }
  else {
    UVar1 = DefWindowProcW(*(HWND *)(param_1 + 0x38),*param_2,param_2[1],param_2[2]);
    param_2[3] = UVar1;
  }
  return;
}
