// rea decompile_all
// name: FUN_0042a2e4
// address: 0x42a2e4
// body: available
// range: 0x42a2e4-0x42a30c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0042a2e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,double param_4,double param_5)

{
  undefined4 uVar1;
  undefined3 uVar2;

  if (param_4 <= param_5) {
    uVar2 = (undefined3)
            (CONCAT22((short)((uint)param_1 >> 0x10),
                      (ushort)(param_5 < param_4) << 8 |
                      (ushort)(NAN(param_5) || NAN(param_4)) << 10 |
                      (ushort)(param_5 == param_4) << 0xe) >> 8);
    if (param_5 < param_4 == 0 && (param_5 == param_4) == 0) {
      uVar1 = CONCAT31(uVar2,2);
    }
    else {
      uVar1 = CONCAT31(uVar2,1);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
