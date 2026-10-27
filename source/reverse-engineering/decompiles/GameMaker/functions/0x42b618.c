// rea decompile_all
// name: FUN_0042b618
// address: 0x42b618
// body: available
// range: 0x42b618-0x42b644 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0042b618(undefined4 param_1,undefined4 param_2,undefined4 param_3,longlong param_4,
            longlong param_5)

{
  undefined4 uVar1;
  undefined3 uVar2;
  float10 fVar3;
  float10 fVar4;

  if ((float10)param_4 <= (float10)param_5) {
    fVar3 = (float10)param_5;
    fVar4 = (float10)param_4;
    uVar2 = (undefined3)
            (CONCAT22((short)((uint)param_1 >> 0x10),
                      (ushort)(fVar4 < fVar3) << 8 | (ushort)(NAN(fVar4) || NAN(fVar3)) << 10 |
                      (ushort)(fVar4 == fVar3) << 0xe) >> 8);
    if (fVar4 < fVar3 == 0) {
      uVar1 = CONCAT31(uVar2,1);
    }
    else {
      uVar1 = CONCAT31(uVar2,2);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
