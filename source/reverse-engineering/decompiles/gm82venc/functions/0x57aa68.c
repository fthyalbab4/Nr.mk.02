// rea decompile_all
// name: FUN_0057aa68
// address: 0x57aa68
// body: available
// range: 0x57aa68-0x57aadb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057aa68(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  int iVar2;
  int iVar3;

  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar3 = *(int *)(param_1 + 8);
  if (0 < iVar3) {
    if (-1 < iVar3 + -1) {
      iVar2 = 0;
      do {
        iVar1 = *(int *)(param_1 + 4);
        FUN_0057a9fc(param_1,iVar1,param_3,*(undefined4 *)(iVar1 + 0x10 + iVar2 * 0x18),
                     *(undefined4 *)(iVar1 + 0x14 + iVar2 * 0x18),
                     *(undefined4 *)(*(int *)(param_1 + 4) + 8 + iVar2 * 0x18),
                     *(undefined4 *)(*(int *)(param_1 + 4) + 0xc + iVar2 * 0x18),
                     *(undefined4 *)(*(int *)(param_1 + 4) + iVar2 * 0x18),
                     *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar2 * 0x18));
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
        param_3 = extraout_ECX;
      } while (iVar3 != 0);
    }
    if (*(char *)(param_1 + 0x10) != '\0') {
      FUN_0057a9fc(param_1);
    }
  }
  return;
}
