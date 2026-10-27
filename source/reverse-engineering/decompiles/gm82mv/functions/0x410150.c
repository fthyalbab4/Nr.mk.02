// rea decompile_all
// name: FUN_00410150
// address: 0x410150
// body: available
// range: 0x410150-0x4101e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410150(void)

{
  HRSRC hResInfo;
  HGLOBAL hResData;

  hResInfo = FindResourceW(DAT_0068cc40,L"CHARTABLE",(LPCWSTR)0xa);
  if (hResInfo == (HRSRC)0x0) {
    FUN_0041ebf4();
  }
  hResData = LoadResource(DAT_0068cc40,hResInfo);
  if (hResData == (HGLOBAL)0x0) {
    FUN_0041ebf4();
  }
  DAT_0068cc5c = LockResource(hResData);
  if (DAT_0068cc5c == (int *)0x0) {
    FUN_0041ebf4();
  }
  DAT_0068cc60 = (int)DAT_0068cc5c + *DAT_0068cc5c;
  DAT_0068cc64 = (int)DAT_0068cc5c + DAT_0068cc5c[1];
  DAT_0068cc68 = (int)DAT_0068cc5c + DAT_0068cc5c[2];
  _DAT_0068cc6c = (int)DAT_0068cc5c + DAT_0068cc5c[3];
  _DAT_0068cc70 = (int)DAT_0068cc5c + DAT_0068cc5c[4];
  _DAT_0068cc74 = (int)DAT_0068cc5c + DAT_0068cc5c[5];
  return;
}
