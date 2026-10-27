// rea decompile_all
// name: FUN_004103f8
// address: 0x4103f8
// body: available
// range: 0x4103f8-0x41048a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004103f8(void)

{
  HRSRC hResInfo;
  HGLOBAL hResData;

  hResInfo = FindResourceW(DAT_00785c40,L"CHARTABLE",(LPCWSTR)&DAT_0000000a);
  if (hResInfo == (HRSRC)0x0) {
    FUN_0041e9c8();
  }
  hResData = LoadResource(DAT_00785c40,hResInfo);
  if (hResData == (HGLOBAL)0x0) {
    FUN_0041e9c8();
  }
  DAT_00785c5c = LockResource(hResData);
  if (DAT_00785c5c == (int *)0x0) {
    FUN_0041e9c8();
  }
  DAT_00785c60 = (int)DAT_00785c5c + *DAT_00785c5c;
  DAT_00785c64 = (int)DAT_00785c5c + DAT_00785c5c[1];
  DAT_00785c68 = (int)DAT_00785c5c + DAT_00785c5c[2];
  _DAT_00785c6c = (int)DAT_00785c5c + DAT_00785c5c[3];
  _DAT_00785c70 = (int)DAT_00785c5c + DAT_00785c5c[4];
  _DAT_00785c74 = (int)DAT_00785c5c + DAT_00785c5c[5];
  return;
}
