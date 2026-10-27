// rea decompile_all
// name: FUN_00543924
// address: 0x543924
// body: available
// range: 0x543924-0x5439b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00543924(int param_1)

{
  int iVar1;

  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
  if (*(int *)(param_1 + 0x50) < 1) {
    if (*(char *)(param_1 + 0x24) == '\0') {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x1c);
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 8;
      if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x54)) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
        *(undefined4 *)(param_1 + 0x54) = 4;
      }
    }
    else if (iVar1 == 1) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 8;
      if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x54)) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
        *(undefined4 *)(param_1 + 0x54) = 2;
      }
    }
    else if (iVar1 == 2) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 4;
      if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x54)) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
        *(undefined4 *)(param_1 + 0x54) = 1;
      }
    }
    else if (iVar1 == 3) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 2;
    }
    if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x54)) {
      return 0;
    }
    *(int *)(param_1 + 0x4c) =
         *(int *)(param_1 + 0x54) * *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x28);
  }
  return 1;
}
