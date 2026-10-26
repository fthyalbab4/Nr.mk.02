// rea decompile_all
// name: FUN_004a9d10
// address: 0x4a9d10
// body: available
// range: 0x4a9d10-0x4a9d2e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a9d10(undefined4 param_1)

{
  HWND hWnd;
  RECT *lprcUpdate;
  HRGN hrgnUpdate;
  UINT flags;

  FUN_004f5748(param_1);
  flags = 5;
  hrgnUpdate = (HRGN)0x0;
  lprcUpdate = (RECT *)0x0;
  hWnd = (HWND)FUN_004f76a8(param_1);
  RedrawWindow(hWnd,lprcUpdate,hrgnUpdate,flags);
  return;
}
