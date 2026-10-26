// rea decompile_all
// name: FUN_00406304
// address: 0x406304
// body: available
// range: 0x406304-0x406379 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00406304(byte *param_1,byte *param_2)

{
  int iVar1;
  int cchCount2;
  WCHAR local_408 [256];
  WCHAR local_208 [256];

  iVar1 = MultiByteToWideChar(0xfde9,0,(LPCSTR)(param_1 + 1),(uint)*param_1,local_408,0x100);
  cchCount2 = MultiByteToWideChar(0xfde9,0,(LPCSTR)(param_2 + 1),(uint)*param_2,local_208,0x100);
  iVar1 = CompareStringW(DAT_0068a8d8,1,local_408,iVar1,local_208,cchCount2);
  return iVar1 == 2;
}
