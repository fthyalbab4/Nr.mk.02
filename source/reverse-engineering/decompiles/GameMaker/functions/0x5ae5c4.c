// rea decompile_all
// name: FUN_005ae5c4
// address: 0x5ae5c4
// body: available
// range: 0x5ae5c4-0x5ae614 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ae5c4(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar2 = *(int *)(param_1 + 0xc);
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + iVar3 * 4);
      if ((param_2 <= iVar1) && (iVar1 <= param_3)) {
        *(int *)(*(int *)(param_1 + 8) + iVar3 * 4) = (iVar1 - param_2) + param_4;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_005adec4(param_1);
  FUN_005ae6e4(param_1);
  return;
}
