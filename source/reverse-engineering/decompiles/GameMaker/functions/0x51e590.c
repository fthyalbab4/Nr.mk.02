// rea decompile_all
// name: FUN_0051e590
// address: 0x51e590
// body: available
// range: 0x51e590-0x51e60d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0051e590(int param_1,int *param_2)

{
  if ((*param_2 == DAT_007882f8) || (*param_2 == 0x1a)) {
    if (*(char *)(param_1 + 0x59) != '\0') {
      SetThreadLocale(0x400);
      FUN_0041dd78();
    }
    if (*(char *)(param_1 + 0x5a) != '\0') {
      FUN_0051cdac(DAT_007882f0);
    }
    if (*param_2 == DAT_007882f8) {
      FUN_0051d568(DAT_007882f0);
      if (*(char *)(param_1 + 0xd3) != '\0') {
        FUN_00513164(*(undefined4 *)(param_1 + 0x170),1,1);
        FUN_00513164(*(undefined4 *)(param_1 + 0x170),0,1);
      }
    }
  }
  return 0;
}
