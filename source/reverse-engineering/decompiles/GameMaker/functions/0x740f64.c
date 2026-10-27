// rea decompile_all
// name: FUN_00740f64
// address: 0x740f64
// body: available
// range: 0x740f64-0x74101c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00740f64(uint param_1)

{
  uint uVar1;

  param_1 = param_1 & 0xffff;
  if (param_1 < 0x37f) {
    if (param_1 < 0xb8) {
      uVar1 = param_1;
      if ((((param_1 == 0xb7) || (uVar1 = param_1 - 0x3a, param_1 - 0x30 < 10)) ||
          (uVar1 = param_1 - 0x5b, param_1 - 0x41 < 0x1a)) ||
         ((uVar1 = 0, param_1 == 0x5f || (uVar1 = param_1 - 0x7b, param_1 - 0x61 < 0x1a)))) {
LAB_00741017:
        return CONCAT31((int3)(uVar1 >> 8),1);
      }
    }
    else {
      uVar1 = param_1 - 0xd7;
      if (((param_1 - 0xc0 < 0x17) || (uVar1 = param_1 - 0xf7, param_1 - 0xd8 < 0x1f)) ||
         (uVar1 = param_1 - 0x37e, param_1 - 0xf8 < 0x286)) goto LAB_00741017;
    }
  }
  else if (param_1 < 0x2c00) {
    uVar1 = param_1 - 0x2000;
    if (((param_1 - 0x37f < 0x1c81) || (uVar1 = param_1 - 0x200e, param_1 - 0x200c < 2)) ||
       ((uVar1 = param_1 - 0x2041, param_1 - 0x203f < 2 ||
        (uVar1 = param_1 - 0x2190, param_1 - 0x2070 < 0x120)))) goto LAB_00741017;
  }
  else {
    uVar1 = param_1 - 0x2ff0;
    if ((((param_1 - 0x2c00 < 0x3f0) || (uVar1 = param_1 - 0xd800, param_1 - 0x3001 < 0xa7ff)) ||
        (uVar1 = param_1 - 0xfdd0, param_1 - 0xf900 < 0x4d0)) ||
       (uVar1 = param_1 - 0xfffe, param_1 - 0xfdf0 < 0x20e)) goto LAB_00741017;
  }
  return 0;
}
