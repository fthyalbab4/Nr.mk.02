// rea decompile_all
// name: FUN_0041b540
// address: 0x41b540
// body: available
// range: 0x41b540-0x41b589 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041b540(LCID param_1,LCTYPE param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  WCHAR local_204 [256];

  iVar1 = GetLocaleInfoW(param_1,param_2,local_204,0x100);
  if (iVar1 < 1) {
    FUN_00407eb8(param_4,param_3);
  }
  else {
    FUN_00407ff4(param_4,local_204,iVar1 + -1);
  }
  return;
}
