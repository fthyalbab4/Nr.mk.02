// rea decompile_all
// name: COMCTL32.DLL::ImageList_SetBkColor
// address: 0x40f8fc
// body: available
// range: 0x40f8fc-0x40f901 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


COLORREF __stdcall ImageList_SetBkColor(HIMAGELIST himl,COLORREF clrBk)

{
  COLORREF CVar1;

                    /* WARNING: Could not recover jumptable at 0x0040f8fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = ImageList_SetBkColor(himl,clrBk);
  return CVar1;
}
