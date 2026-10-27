// rea decompile_all
// name: FUN_005ece50
// address: 0x5ece50
// body: available
// range: 0x5ece50-0x5ece62 inclusive
// range: 0x5ece93-0x5ecee4 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005ece50(undefined4 param_1)

{
  switch(param_1) {
  default:
    break;
  case 1:
    param_1 = 0;
    break;
  case 2:
    param_1 = 0x2afa;
    break;
  case 3:
    param_1 = 0x2726;
    break;
  case 4:
    param_1 = 0x2afb;
    break;
  case 5:
    param_1 = 0x273f;
    break;
  case 6:
    param_1 = 8;
    break;
  case 7:
    param_1 = 0x2afc;
    break;
  case 8:
    param_1 = 0x2af9;
    break;
  case 9:
    param_1 = 0x277d;
    break;
  case 10:
    param_1 = 0x273c;
    break;
  case 0xb:
    param_1 = 0;
    FUN_005e0314();
  }
  return param_1;
}
