// rea decompile_all
// name: FUN_0044df10
// address: 0x44df10
// body: available
// range: 0x44df10-0x44df43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0044df10(undefined4 param_1,undefined4 param_2,undefined4 param_3,double param_4,double param_5)

{
  undefined4 uVar1;

  if (_DAT_0044df44 <= ABS((float10)param_5 - (float10)param_4)) {
    if (param_5 < param_4) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = CONCAT31((int3)(CONCAT22((short)((uint)param_1 >> 0x10),
                                       (ushort)(param_5 < param_4) << 8 |
                                       (ushort)(NAN(param_5) || NAN(param_4)) << 10 |
                                       (ushort)(param_5 == param_4) << 0xe) >> 8),1);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
