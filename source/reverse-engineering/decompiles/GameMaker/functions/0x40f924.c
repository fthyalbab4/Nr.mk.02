// rea decompile_all
// name: COMCTL32.DLL::ImageList_DrawEx
// address: 0x40f924
// body: available
// range: 0x40f924-0x40f929 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


BOOL __stdcall
ImageList_DrawEx(HIMAGELIST himl,int i,HDC hdcDst,int x,int y,int dx,int dy,COLORREF rgbBk,
                COLORREF rgbFg,UINT fStyle)

{
  BOOL BVar1;

                    /* WARNING: Could not recover jumptable at 0x0040f924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_DrawEx(himl,i,hdcDst,x,y,dx,dy,rgbBk,rgbFg,fStyle);
  return BVar1;
}
