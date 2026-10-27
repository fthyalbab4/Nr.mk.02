// rea decompile_all
// name: FUN_0040b000
// address: 0x40b000
// body: available
// range: 0x40b000-0x40b062 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040b000(int param_1)

{
  int *piVar1;
  int *piVar2;

  piVar2 = DAT_00773044;
  if ((DAT_00773044 == (int *)0x0) || (DAT_00773044[1] != param_1)) {
    for (; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
      piVar1 = (int *)*piVar2;
      if ((piVar1 != (int *)0x0) && (piVar1[1] == param_1)) {
        *piVar2 = *piVar1;
        FUN_00404338(piVar1,8);
        return;
      }
    }
  }
  else {
    DAT_00773044 = (int *)*DAT_00773044;
    FUN_00404338(piVar2,8);
  }
  return;
}
