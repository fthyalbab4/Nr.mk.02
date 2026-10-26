// rea decompile_all
// name: FUN_0052e674
// address: 0x52e674
// body: available
// range: 0x52e674-0x52e6d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052e674(int param_1)

{
  int iVar1;

  if (*(int *)(param_1 + 0x16b4) < 9) {
    if (0 < *(int *)(param_1 + 0x16b4)) {
      iVar1 = *(int *)(param_1 + 0x14);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      *(undefined1 *)(*(int *)(param_1 + 8) + iVar1) = *(undefined1 *)(param_1 + 0x16b0);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar1) = *(undefined1 *)(param_1 + 0x16b0);
    iVar1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar1) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b0) >> 8);
  }
  *(undefined2 *)(param_1 + 0x16b0) = 0;
  *(undefined4 *)(param_1 + 0x16b4) = 0;
  return;
}
