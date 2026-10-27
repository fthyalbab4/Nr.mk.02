// rea decompile_all
// name: FUN_005a5250
// address: 0x5a5250
// body: available
// range: 0x5a5250-0x5a529a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005a5250(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  uVar1 = FUN_005a51d4(param_1,param_3,param_4);
  iVar2 = *(int *)(param_1 + 8) + -1;
  iVar3 = (param_2 + 1) - iVar2;
  if (iVar3 == 0 || param_2 + 1 < iVar2) {
    iVar3 = iVar3 + -1;
    do {
      *(undefined4 *)(*(int *)(param_1 + 4) + iVar2 * 4) =
           *(undefined4 *)(*(int *)(param_1 + 4) + -4 + iVar2 * 4);
      iVar2 = iVar2 + -1;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4) = uVar1;
  return uVar1;
}
