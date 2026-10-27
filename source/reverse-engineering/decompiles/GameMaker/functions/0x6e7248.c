// rea decompile_all
// name: FUN_006e7248
// address: 0x6e7248
// body: available
// range: 0x6e7248-0x6e72b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e7248(int param_1,undefined4 param_2,undefined1 param_3,int param_4,undefined1 param_5)

{
  int iVar1;
  int iVar2;

  if ((param_4 < 0) || (*(int *)(param_1 + 4) <= param_4)) {
    iVar1 = *(int *)(param_1 + 4);
    if (-1 < iVar1 + -1) {
      iVar2 = 0;
      do {
        FUN_005b229c(*(undefined4 *)(*(int *)(param_1 + 8) + iVar2 * 4),param_2,0,param_5,param_3);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  else {
    FUN_005b229c(*(undefined4 *)(*(int *)(param_1 + 8) + param_4 * 4),param_2,0,param_5,param_3);
  }
  return;
}
