// rea decompile_all
// name: FUN_0045d644
// address: 0x45d644
// body: available
// range: 0x45d644-0x45d66f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045d644(int param_1)

{
  HGDIOBJ h;
  COLORREF color;

  h = (HGDIOBJ)FUN_0045b7cc(*(undefined4 *)(param_1 + 0x40));
  SelectObject(*(HDC *)(param_1 + 0x38),h);
  color = FUN_0045b0f4(*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x18));
  SetTextColor(*(HDC *)(param_1 + 0x38),color);
  return;
}
