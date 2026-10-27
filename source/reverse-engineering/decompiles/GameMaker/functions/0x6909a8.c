// rea decompile_all
// name: FUN_006909a8
// address: 0x6909a8
// body: available
// range: 0x6909a8-0x690a3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006909a8(int param_1,undefined4 param_2,short *param_3,ushort param_4)

{
  if ((((param_4 & 4) == 0) || ((param_4 & 2) != 0)) || ((param_4 & 1) != 0)) {
    if (((param_4 == 0) && (*PTR_DAT_0078258c != '\0')) && (*param_3 == 0x43)) {
      *(undefined1 *)(param_1 + 0x1635) = 1;
      FUN_0068f9f8(param_1);
    }
  }
  else if ((*param_3 == 0x30) || (*param_3 == 0x60)) {
    FUN_0068c9e4(param_1,0);
  }
  else if ((*param_3 == 0xbd) || (*param_3 == 0x6d)) {
    FUN_0068c998(param_1,0);
  }
  else if ((*param_3 == 0xbb) || (*param_3 == 0x6b)) {
    FUN_0068caa8(param_1,0);
  }
  return;
}
