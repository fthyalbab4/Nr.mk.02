// rea decompile_all
// name: FUN_005abfb4
// address: 0x5abfb4
// body: available
// range: 0x5abfb4-0x5ac039 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005abfb4(int param_1)

{
  FUN_004ee920(param_1,0);
  if ((*(char *)(param_1 + 0x310) != '\0') && (*(char *)(param_1 + 0x311) != '\0')) {
    *(undefined1 *)(param_1 + 0x311) = 0;
    FUN_005ab7c8(param_1,*(undefined1 *)(param_1 + 0x312),*(undefined4 *)(param_1 + 0x314));
    FUN_005abee0(param_1,*(undefined1 *)(param_1 + 0x312));
    if ((*(char *)(param_1 + 900) != '\0') &&
       ((*(int *)(param_1 + 0x36c) == 0 && (*(char *)(param_1 + 0x349) != '\0')))) {
      FUN_00405d08(param_1,*(undefined1 *)(param_1 + 0x312));
      FUN_005ab5f0(param_1);
    }
  }
  *(undefined1 *)(param_1 + 0x310) = 0;
  return;
}
