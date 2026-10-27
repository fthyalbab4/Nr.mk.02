// rea decompile_all
// name: FUN_00581758
// address: 0x581758
// body: available
// range: 0x581758-0x5817a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00581758(int param_1,undefined4 param_2,undefined4 param_3,double param_4)

{
  int iVar1;
  int iVar2;

  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  else if (param_4 <= (double)*(int *)(*(int *)(param_1 + 8) + -4 + iVar1 * 4)) {
    if (-1 < iVar1 + -1) {
      iVar2 = 0;
      do {
        if (param_4 <= (double)*(int *)(*(int *)(param_1 + 8) + iVar2 * 4)) {
          return iVar2;
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    iVar1 = *(int *)(param_1 + 0xc);
  }
  return iVar1;
}
