// rea decompile_all
// name: FUN_0044df90
// address: 0x44df90
// body: available
// range: 0x44df90-0x44e00a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0044df90(void)

{
  undefined4 uVar1;
  undefined2 extraout_var;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;

  FUN_00404814();
  FUN_00404814();
  if (_DAT_0044e00c <= ABS(in_ST0 - in_ST1)) {
    FUN_00404814();
    FUN_00404814();
    if (in_ST2 < in_ST3) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = CONCAT31((int3)(CONCAT22(extraout_var,
                                       (ushort)(in_ST2 < in_ST3) << 8 |
                                       (ushort)(NAN(in_ST2) || NAN(in_ST3)) << 10 |
                                       (ushort)(in_ST2 == in_ST3) << 0xe) >> 8),1);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
