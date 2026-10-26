// rea decompile_all
// name: GDI32.DLL::Chord
// address: 0x40e1d4
// body: available
// range: 0x40e1d4-0x40e1d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


BOOL __stdcall Chord(HDC hdc,int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4)

{
  BOOL BVar1;

                    /* WARNING: Could not recover jumptable at 0x0040e1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = Chord(hdc,x1,y1,x2,y2,x3,y3,x4,y4);
  return BVar1;
}
