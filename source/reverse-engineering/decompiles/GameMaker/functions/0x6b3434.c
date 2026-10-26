// rea decompile_all
// name: FUN_006b3434
// address: 0x6b3434
// body: available
// range: 0x6b3434-0x6b350e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_006b3434(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  if (*(int *)(param_1 + 0x324) != 0) {
    iVar3 = *(int *)(param_1 + 0x2ec);
    iVar1 = FUN_00409a18(*(undefined4 *)(param_1 + 0x2d8));
    if (iVar3 <= iVar1 + -1) {
      iVar1 = ((iVar1 + -1) - iVar3) + 1;
      do {
        if (iVar3 == *(int *)(param_1 + 0x2ec)) {
          iVar2 = FUN_006b01fc(*(undefined4 *)(*(int *)(param_1 + 0x2d8) + iVar3 * 0x10),
                               *(undefined4 *)(param_1 + 0x324),*(int *)(param_1 + 0x2f0) + 1,
                               *(undefined1 *)(param_1 + 0x32d),*(undefined1 *)(param_1 + 0x32c));
        }
        else {
          iVar2 = FUN_006b01fc(*(undefined4 *)(*(int *)(param_1 + 0x2d8) + iVar3 * 0x10),
                               *(undefined4 *)(param_1 + 0x324),0,*(undefined1 *)(param_1 + 0x32d),
                               *(undefined1 *)(param_1 + 0x32c));
        }
        if (-1 < iVar2) {
          *(int *)(param_1 + 0x2ec) = iVar3;
          *(int *)(param_1 + 0x2f0) = iVar2;
          *(int *)(param_1 + 0x2fc) = iVar3;
          iVar3 = 0;
          if (*(int *)(param_1 + 0x324) != 0) {
            iVar3 = *(int *)(*(int *)(param_1 + 0x324) + -4);
          }
          *(int *)(param_1 + 0x300) = iVar3 + iVar2;
          return 1;
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return 0;
}
