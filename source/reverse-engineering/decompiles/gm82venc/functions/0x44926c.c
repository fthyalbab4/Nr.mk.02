// rea decompile_all
// name: UXTHEME.DLL::BeginBufferedPaint
// address: 0x44926c
// body: available
// range: 0x44926c-0x449271 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


HPAINTBUFFER __stdcall
BeginBufferedPaint(HDC hdcTarget,RECT *prcTarget,BP_BUFFERFORMAT dwFormat,
                  BP_PAINTPARAMS *pPaintParams,HDC *phdc)

{
  HPAINTBUFFER pvVar1;

                    /* WARNING: Could not recover jumptable at 0x0044926c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = BeginBufferedPaint(hdcTarget,prcTarget,dwFormat,pPaintParams,phdc);
  return pvVar1;
}
