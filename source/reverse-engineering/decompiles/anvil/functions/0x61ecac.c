// rea decompile_all
// name: FUN_0061ecac
// address: 0x61ecac
// body: available
// range: 0x61ecac-0x61ed15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0061ecac(char param_1)

{
  if (DAT_006886a8 != (int *)0x0) {
    PTR_FUN_006886c4._0_1_ = param_1;
    if (param_1 == '\0') {
      (**(code **)(*DAT_006886a8 + 0xfc))();
      (**(code **)(*DAT_006886a8 + 0xfc))();
    }
    else {
      (**(code **)(*DAT_006886a8 + 0xfc))();
      (**(code **)(*DAT_006886a8 + 0xfc))();
    }
  }
  return;
}
