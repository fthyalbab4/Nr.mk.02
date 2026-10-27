// rea decompile_all
// name: FUN_006fba7c
// address: 0x6fba7c
// body: available
// range: 0x6fba7c-0x6fbb77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006fba7c(int param_1)

{
  if (param_1 < 0xa2) {
    if (param_1 == 0xa1) {
      return 0xc;
    }
    if (param_1 < 0x81) {
      if (param_1 == 0x80) {
        return 5;
      }
      if (param_1 == 0) {
        return 0;
      }
      if (param_1 == 1) {
        return 1;
      }
      if (param_1 == 2) {
        return 4;
      }
      if (param_1 == 0x4d) {
        return 0x10;
      }
    }
    else {
      if (param_1 == 0x81) {
        return 6;
      }
      if (param_1 == 0x82) {
        return 9;
      }
      if (param_1 == 0x86) {
        return 7;
      }
      if (param_1 == 0x88) {
        return 8;
      }
    }
  }
  else if (param_1 < 0xbb) {
    if (param_1 == 0xba) {
      return 0x11;
    }
    if (param_1 == 0xa2) {
      return 0xd;
    }
    if (param_1 == 0xa3) {
      return 0xe;
    }
    if (param_1 == 0xb1) {
      return 10;
    }
    if (param_1 == 0xb2) {
      return 0xb;
    }
  }
  else {
    if (param_1 == 0xcc) {
      return 3;
    }
    if (param_1 == 0xde) {
      return 0xf;
    }
    if (param_1 == 0xee) {
      return 2;
    }
    if (param_1 == 0xff) {
      return 0x12;
    }
  }
  return 1;
}
