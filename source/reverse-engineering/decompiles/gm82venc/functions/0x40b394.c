// rea decompile_all
// name: FUN_0040b394
// address: 0x40b394
// body: available
// range: 0x40b394-0x40b420 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0040b394(LPSTR param_1,uint param_2,LPCWSTR param_3,int param_4)

{
  uint uVar1;

  uVar1 = 0;
  if (param_3 != (LPCWSTR)0x0) {
    if (param_1 == (LPSTR)0x0) {
      uVar1 = WideCharToMultiByte(0xfde9,0,param_3,param_4,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else {
      uVar1 = WideCharToMultiByte(0xfde9,0,param_3,param_4,param_1,param_2,(LPCSTR)0x0,(LPBOOL)0x0);
      if (((uVar1 != 0) && (uVar1 <= param_2)) && (param_1[uVar1 - 1] != '\0')) {
        if (param_2 == uVar1) {
          while (((1 < uVar1 && (0x7f < (byte)param_1[uVar1 - 1])) &&
                 (((param_1[uVar1 - 1] & 0x80U) != 0 && ((param_1[uVar1 - 1] & 0xc0U) != 0xc0))))) {
            uVar1 = uVar1 - 1;
          }
        }
        else {
          uVar1 = uVar1 + 1;
        }
        param_1[uVar1 - 1] = '\0';
      }
    }
  }
  return uVar1;
}
