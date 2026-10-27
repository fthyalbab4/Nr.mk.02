// rea decompile_all
// name: FUN_00535a3c
// address: 0x535a3c
// body: available
// range: 0x535a3c-0x535b11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00535a3c(int param_1,undefined4 param_2,char param_3)

{
  int local_14;

  FUN_0052f12c(param_2,0x212);
  FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0xc));
  FUN_0052f240(param_2,*(undefined1 *)(param_1 + 0x10));
  FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x14));
  if (param_3 != '\x01') {
    FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x28));
    FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x2c));
    FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x30));
  }
  FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 8));
  local_14 = *(int *)(param_1 + 8);
  if (-1 < local_14 + -1) {
    do {
      FUN_0052f140(param_2);
      FUN_0052f140(param_2);
      FUN_0052f140(param_2);
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return 1;
}
