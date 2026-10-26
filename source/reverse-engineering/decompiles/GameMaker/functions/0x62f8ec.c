// rea decompile_all
// name: FUN_0062f8ec
// address: 0x62f8ec
// body: available
// range: 0x62f8ec-0x62f93c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062f8ec(int param_1,int param_2)

{
  int iVar1;

  if (DAT_0078a0f4 != '\0') {
    param_1 = param_1 * 2;
    param_2 = param_2 * 2 + 2;
  }
  iVar1 = (**(code **)(*DAT_0077f0e4 + 0x30))();
  if (iVar1 < param_1) {
    (**(code **)(*DAT_0077f0e4 + 0x44))(DAT_0077f0e4,param_1);
  }
  iVar1 = (**(code **)(*DAT_0077f0e4 + 0x24))();
  if (iVar1 < param_2) {
    (**(code **)(*DAT_0077f0e4 + 0x38))(DAT_0077f0e4,param_2);
  }
  return;
}
