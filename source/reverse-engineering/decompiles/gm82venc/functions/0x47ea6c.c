// rea decompile_all
// name: FUN_0047ea6c
// address: 0x47ea6c
// body: available
// range: 0x47ea6c-0x47eac1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x47ea91 (push 0x47eac2 followed by fs-segment stack chaining); handler 0x47eac2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047ea6c(int *param_1)

{
  HWND pHVar1;
  HDC hDC;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined1 *puVar3;

  puVar3 = &stack0xfffffffc;
  pHVar1 = (HWND)FUN_004c45dc(param_1);
  hDC = GetWindowDC(pHVar1);
  uVar2 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffe8;
  (**(code **)(*param_1 + 0xec))(param_1,hDC);
  *in_FS_OFFSET = uVar2;
  pHVar1 = (HWND)FUN_004c45dc(param_1,uVar2,puVar3);
  ReleaseDC(pHVar1,hDC);
  return;
}
