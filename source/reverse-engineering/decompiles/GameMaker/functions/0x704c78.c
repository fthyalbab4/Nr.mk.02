// rea decompile_all
// name: FUN_00704c78
// address: 0x704c78
// body: available
// range: 0x704c78-0x704d3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00704c78(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;

  FUN_00704b30(param_1);
  FUN_0052f12c(param_2,0x1ae);
  FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 4));
  FUN_0052f240(param_2,*(undefined1 *)(param_1 + 8));
  FUN_0052f240(param_2,*(undefined1 *)(param_1 + 9));
  FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0xc));
  FUN_0052f240(param_2,*(undefined1 *)(param_1 + 0x10));
  FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x14));
  FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x18));
  FUN_0052f12c(param_2,0xb);
  iVar2 = 0;
  do {
    iVar1 = FUN_00409a18(*(undefined4 *)(param_1 + 0x1c + iVar2 * 4));
    iVar1 = iVar1 + -1;
    if (-1 < iVar1) {
      do {
        if (0 < *(int *)(*(int *)(*(int *)(param_1 + 0x1c + iVar2 * 4) + iVar1 * 4) + 8)) {
          FUN_0052f12c(param_2,iVar1);
          FUN_005a5190(*(undefined4 *)(*(int *)(param_1 + 0x1c + iVar2 * 4) + iVar1 * 4),param_2);
        }
        iVar1 = iVar1 + -1;
      } while (iVar1 != -1);
    }
    FUN_0052f12c(param_2,0xffffffff);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0xc);
  return 1;
}
