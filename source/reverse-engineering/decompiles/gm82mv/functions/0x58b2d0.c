// rea decompile_all
// name: FUN_0058b2d0
// address: 0x58b2d0
// body: available
// range: 0x58b2d0-0x58b41a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058b2d0(int param_1,undefined4 param_2,undefined4 param_3,double param_4,
                 undefined4 param_5,undefined4 param_6)

{
  bool bVar1;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 fVar2;

  if ((double)CONCAT44(param_6,param_5) < param_4) {
    if (param_1 == 0) {
      FUN_004047d4();
    }
    else if (param_1 == 1) {
      do {
        FUN_004047d4();
        fVar2 = in_ST6;
        FUN_00404844();
        FUN_004047d4();
        bVar1 = in_ST1 <= in_ST2;
        in_ST1 = in_ST4;
        in_ST2 = in_ST5;
        in_ST4 = in_ST6;
        in_ST5 = fVar2;
        in_ST6 = fVar2;
      } while (bVar1);
    }
    else if (param_1 == 2) {
      do {
        FUN_004047d4();
        fVar2 = in_ST6;
        FUN_00404844();
        FUN_004047d4();
        bVar1 = in_ST1 <= in_ST2;
        in_ST1 = in_ST4;
        in_ST2 = in_ST5;
        in_ST4 = in_ST6;
        in_ST5 = fVar2;
        in_ST6 = fVar2;
      } while (bVar1);
    }
    else {
      FUN_004047d4();
    }
  }
  return;
}
