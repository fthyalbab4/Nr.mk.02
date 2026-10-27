// rea decompile_all
// name: FUN_004f16e4
// address: 0x4f16e4
// body: available
// range: 0x4f16e4-0x4f16f2 inclusive
// range: 0x4f170f-0x4f1767 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004f16e4(int param_1,undefined1 param_2,byte param_3)

{
  int iVar1;

  switch(param_2) {
  case 0:
  case 3:
    iVar1 = (uint)param_3 * param_1 + 7;
    if (iVar1 < 0) {
      iVar1 = (uint)param_3 * param_1 + 0xe;
    }
    return iVar1 >> 3;
  default:
    return 0;
  case 2:
    iVar1 = (uint)param_3 * param_1 * 3;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 7;
    }
    break;
  case 4:
    iVar1 = (uint)param_3 * param_1 * 2;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 7;
    }
    return iVar1 >> 3;
  case 6:
    iVar1 = (uint)param_3 * param_1 * 4;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 7;
    }
    return iVar1 >> 3;
  }
  return iVar1 >> 3;
}
