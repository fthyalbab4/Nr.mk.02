// rea decompile_all
// name: FUN_00406fcc
// address: 0x406fcc
// body: available
// range: 0x406fcc-0x406ff4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406fcc(LPSTR param_1,int param_2,LPCWSTR param_3,UINT param_4,int param_5)

{
  if (param_4 == 0) {
    param_4 = _DAT_007838d0;
  }
  WideCharToMultiByte(param_4,0,param_3,param_5,param_1,param_2,(LPCSTR)0x0,(LPBOOL)0x0);
  return;
}
