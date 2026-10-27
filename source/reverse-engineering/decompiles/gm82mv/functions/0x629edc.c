// rea decompile_all
// name: FUN_00629edc
// address: 0x629edc
// body: available
// range: 0x629edc-0x629f16 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00629edc(void)

{
  LPVOID *ppv;
  HRESULT HVar1;

  if (DAT_006887e4 == 0) {
    CoInitialize((LPVOID)0x0);
    ppv = (LPVOID *)FUN_0040b268(&DAT_006887e4);
    HVar1 = CoCreateInstance((IID *)PTR_DAT_006896b4,(LPUNKNOWN)0x0,7,(IID *)&LAB_00629f18,ppv);
    if (HVar1 != 0) {
      return 0;
    }
  }
  return 1;
}
