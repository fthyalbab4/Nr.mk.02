// rea decompile_all
// name: FUN_006fb9a8
// address: 0x6fb9a8
// body: available
// range: 0x6fb9a8-0x6fb9b7 inclusive
// range: 0x6fba04-0x6fba78 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006fb9a8(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 0;
  case 1:
    return 1;
  case 2:
    return 0xee;
  case 3:
    return 0xcc;
  case 4:
    return 2;
  case 5:
    return 0x80;
  case 6:
    return 0x81;
  case 7:
    return 0x86;
  case 8:
    return 0x88;
  case 9:
    return 0x82;
  case 10:
    return 0xb1;
  case 0xb:
    return 0xb2;
  case 0xc:
    return 0xa1;
  case 0xd:
    return 0xa2;
  case 0xe:
    return 0xa3;
  case 0xf:
    return 0xde;
  case 0x10:
    return 0x4d;
  case 0x11:
    return 0xba;
  case 0x12:
    return 0xff;
  default:
    return 1;
  }
}
