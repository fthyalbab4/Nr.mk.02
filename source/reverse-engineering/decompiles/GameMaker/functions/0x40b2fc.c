// rea decompile_all
// name: FUN_0040b2fc
// address: 0x40b2fc
// body: available
// range: 0x40b2fc-0x40b37c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0040b2fc(LPWSTR param_1,uint param_2,LPCSTR param_3,int param_4)

{
  uint uVar1;

  uVar1 = 0;
  if (param_3 != (LPCSTR)0x0) {
    if ((param_1 == (LPWSTR)0x0) || (param_2 == 0)) {
      uVar1 = MultiByteToWideChar(0xfde9,0,param_3,param_4,(LPWSTR)0x0,0);
    }
    else {
      uVar1 = MultiByteToWideChar(0xfde9,0,param_3,param_4,param_1,param_2);
      if (((uVar1 != 0) && (uVar1 <= param_2)) && (param_1[uVar1 - 1] != L'\0')) {
        if (param_2 == uVar1) {
          if (((1 < uVar1) && (0xdbff < (ushort)param_1[uVar1 - 1])) &&
             ((ushort)param_1[uVar1 - 1] < 0xe000)) {
            uVar1 = uVar1 - 1;
          }
        }
        else {
          uVar1 = uVar1 + 1;
        }
        param_1[uVar1 - 1] = L'\0';
      }
    }
  }
  return uVar1;
}
