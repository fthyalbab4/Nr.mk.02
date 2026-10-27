// rea decompile_all
// name: FUN_005648a4
// address: 0x5648a4
// body: available
// range: 0x5648a4-0x564936 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005648a4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;

  FUN_00407eb8(param_1 + 4,*(undefined4 *)(param_2 + 4));
  FUN_00407eb8(param_1 + 8,*(undefined4 *)(param_2 + 8));
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  FUN_00407eb8(param_1 + 0x10,*(undefined4 *)(param_2 + 0x10));
  FUN_00407eb8(param_1 + 0x14,*(undefined4 *)(param_2 + 0x14));
  FUN_00564708(param_1,*(undefined4 *)(param_2 + 0x1c));
  iVar2 = *(int *)(param_1 + 0x1c);
  if (-1 < iVar2 + -1) {
    iVar1 = 0;
    do {
      FUN_005644a0(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar1 * 4),
                   *(undefined4 *)(*(int *)(param_2 + 0x18) + iVar1 * 4));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_0056477c(param_1,*(undefined4 *)(param_2 + 0x24));
  iVar2 = *(int *)(param_1 + 0x24);
  if (-1 < iVar2 + -1) {
    iVar1 = 0;
    do {
      FUN_005642c8(*(undefined4 *)(*(int *)(param_1 + 0x20) + iVar1 * 4),
                   *(undefined4 *)(*(int *)(param_2 + 0x20) + iVar1 * 4));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}
