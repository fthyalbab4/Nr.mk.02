// rea decompile_all
// name: FUN_004ed948
// address: 0x4ed948
// body: available
// range: 0x4ed948-0x4eda2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ed948(int *param_1,byte param_2)

{
  byte bVar1;

  bVar1 = *(byte *)((int)param_1 + 0x5d);
  if (param_2 != bVar1) {
    *(byte *)((int)param_1 + 0x5d) = param_2;
    FUN_004ed614(param_1,(&DAT_00778aac)[param_2]);
    if (((*(byte *)(param_1 + 7) & 1) == 0) &&
       (((((*(byte *)(param_1 + 7) & 0x10) == 0 || (param_1[0xd] != 0)) && (param_2 != 6)) &&
        (bVar1 != 6)))) {
      if (((((byte)(bVar1 - 1) < 2 == (byte)(param_2 - 3) < 2) && (bVar1 != 0)) && (bVar1 != 5)) &&
         ((param_2 != 0 && (param_2 != 5)))) {
        (**(code **)(*param_1 + 0x98))
                  (param_1,param_1[0x10],param_1[0x11],param_1[0x12],param_1[0x13]);
      }
      else if ((bVar1 == 0) || (param_2 != 0)) {
        FUN_00405d08(param_1);
      }
      else {
        (**(code **)(*param_1 + 0x98))
                  (param_1,param_1[0x65],param_1[0x66],param_1[0x68],param_1[0x67]);
      }
    }
  }
  (**(code **)(*param_1 + 0x68))();
  return;
}
