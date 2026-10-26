// rea decompile_all
// name: FUN_0057d92c
// address: 0x57d92c
// body: available
// range: 0x57d92c-0x57da2e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


UINT FUN_0057d92c(int param_1)

{
  UINT UVar1;

  if (param_1 < 0xa2) {
    if (param_1 == 0xa1) {
      return 0x4e5;
    }
    if (param_1 < 0x81) {
      if (param_1 == 0x80) {
        return 0x3a4;
      }
      if (param_1 == 0) {
        return 0x4e4;
      }
      if (param_1 == 1) {
        UVar1 = GetACP();
        return UVar1;
      }
      if (param_1 == 2) {
        UVar1 = GetACP();
        return UVar1;
      }
      if (param_1 == 0x4d) {
        UVar1 = GetACP();
        return UVar1;
      }
    }
    else {
      if (param_1 == 0x81) {
        return 0x3b5;
      }
      if (param_1 == 0x82) {
        return 0x551;
      }
      if (param_1 == 0x86) {
        return 0x3a8;
      }
      if (param_1 == 0x88) {
        return 0x3b6;
      }
    }
  }
  else if (param_1 < 0xbb) {
    if (param_1 == 0xba) {
      return 0x4e9;
    }
    if (param_1 == 0xa2) {
      return 0x4e6;
    }
    if (param_1 == 0xa3) {
      return 0x4ea;
    }
    if (param_1 == 0xb1) {
      return 0x4e7;
    }
    if (param_1 == 0xb2) {
      return 0x4e8;
    }
  }
  else {
    if (param_1 == 0xcc) {
      return 0x4e3;
    }
    if (param_1 == 0xde) {
      return 0x36a;
    }
    if (param_1 == 0xee) {
      return 0x4e2;
    }
    if (param_1 == 0xff) {
      UVar1 = GetACP();
      return UVar1;
    }
  }
  UVar1 = GetACP();
  return UVar1;
}
