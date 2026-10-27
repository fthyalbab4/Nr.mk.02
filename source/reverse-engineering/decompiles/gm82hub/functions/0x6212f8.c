// rea decompile_all
// name: FUN_006212f8
// address: 0x6212f8
// body: available
// range: 0x6212f8-0x621345 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006212f8(int param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;

  FUN_0040b268(param_2);
  cVar1 = FUN_00620ff8(param_1);
  if (cVar1 != '\0') {
    FUN_0040b268(param_2);
    uVar2 = (**(code **)(**(int **)(DAT_0085b3c4 + param_1 * 0x18) + 0x3c))();
    if ((uVar2 & 0x80000000) != 0) {
      FUN_0040b268(param_2);
    }
  }
  return;
}
