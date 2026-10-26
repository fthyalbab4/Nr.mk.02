// rea decompile_all
// name: FUN_006ed180
// address: 0x6ed180
// body: available
// range: 0x6ed180-0x6ed1db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ed180(int param_1)

{
  if (*(char *)(param_1 + 0x5f4) != '\0') {
    if (*(char *)(param_1 + 0x5f5) == '\0') {
      FUN_006ed0a0(param_1);
      DAT_00790164 = DAT_00790164 + 1;
    }
    FUN_006e68d8(*(undefined4 *)(param_1 + 0x5e8),(&DAT_00790124)[DAT_00790164]);
    DAT_00790164 = DAT_00790164 + 1;
    *(bool *)(param_1 + 0x5f4) = DAT_00790164 <= DAT_00790168;
    *(undefined1 *)(param_1 + 0x5f5) = 1;
  }
  return;
}
