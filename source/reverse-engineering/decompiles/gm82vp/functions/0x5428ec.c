// rea decompile_all
// name: FUN_005428ec
// address: 0x5428ec
// body: available
// range: 0x5428ec-0x54293c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005428ec(int param_1,int param_2,LCID param_3)

{
  uint cchCount1;
  uint cchCount2;
  PCNZWCH lpString2;
  PCNZWCH lpString1;
  int iVar1;

  cchCount1 = 0;
  if (param_1 != 0) {
    cchCount1 = *(uint *)(param_1 + -4) >> 1;
  }
  cchCount2 = 0;
  if (param_2 != 0) {
    cchCount2 = *(uint *)(param_2 + -4) >> 1;
  }
  lpString2 = (PCNZWCH)FUN_00407fb8(param_2);
  lpString1 = (PCNZWCH)FUN_00407fb8(param_1);
  iVar1 = CompareStringW(param_3,1,lpString1,cchCount1,lpString2,cchCount2);
  return iVar1 + -2;
}
