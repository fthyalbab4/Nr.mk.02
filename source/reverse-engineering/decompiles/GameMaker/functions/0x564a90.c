// rea decompile_all
// name: FUN_00564a90
// address: 0x564a90
// body: available
// range: 0x564a90-0x564b28 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00564a90(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;

  FUN_0052f12c(param_2,700);
  FUN_0052f168(param_2,*(undefined4 *)(param_1 + 4));
  FUN_0052f168(param_2,*(undefined4 *)(param_1 + 8));
  FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0xc));
  FUN_0052f168(param_2,*(undefined4 *)(param_1 + 0x10));
  FUN_0052f168(param_2,*(undefined4 *)(param_1 + 0x14));
  FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x1c));
  iVar1 = *(int *)(param_1 + 0x1c);
  if (-1 < iVar1 + -1) {
    iVar2 = 0;
    do {
      FUN_00564604(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4),param_2);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = *(int *)(param_1 + 0x24);
  if (-1 < iVar1 + -1) {
    iVar2 = 0;
    do {
      FUN_0056438c(*(undefined4 *)(*(int *)(param_1 + 0x20) + iVar2 * 4),param_2);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 1;
}
