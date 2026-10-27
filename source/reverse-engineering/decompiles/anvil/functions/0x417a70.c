// rea decompile_all
// name: FUN_00417a70
// address: 0x417a70
// body: available
// range: 0x417a70-0x417acf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00417a70(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;

  if (((param_3 != 0) && (param_4 != 0)) && (-1 < param_3 - param_4)) {
    iVar3 = (param_3 - param_4) + 1;
    iVar2 = 0;
    do {
      if ((*(short *)(param_1 + iVar2 * 2) != 0) &&
         (iVar1 = FUN_004178d0(iVar2 * 2 + param_1,param_2,param_4), iVar1 == 0)) {
        return iVar2 * 2 + param_1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}
