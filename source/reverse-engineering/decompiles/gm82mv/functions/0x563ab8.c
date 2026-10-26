// rea decompile_all
// name: FUN_00563ab8
// address: 0x563ab8
// body: available
// range: 0x563ab8-0x563b3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00563ab8(void)

{
  double in_stack_00000004;
  undefined4 local_14;
  undefined4 local_10;
  undefined8 local_c;

  if ((char)PTR_FUN_00686424 == '\0') {
    DAT_0068642c._0_4_ = 0;
    DAT_0068642c._4_4_ = 0;
  }
  else {
    if (-16000.0 <= (float)in_stack_00000004) {
      local_c = in_stack_00000004;
    }
    else {
      local_c = -16000.0;
    }
    if ((float)local_c <= 16000.0) {
      local_14 = (undefined4)local_c;
      local_10 = local_c._4_4_;
    }
    else {
      local_14 = 0;
      local_10 = 0x40cf4000;
    }
    DAT_0068642c._0_4_ = local_14;
    DAT_0068642c._4_4_ = local_10;
  }
  return;
}
