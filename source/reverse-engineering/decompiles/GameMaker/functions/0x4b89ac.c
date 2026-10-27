// rea decompile_all
// name: FUN_004b89ac
// address: 0x4b89ac
// body: available
// range: 0x4b89ac-0x4b89ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b89ac(int *param_1,int param_2)

{
  int iVar1;

  FUN_0043ee80(param_1,param_2);
  FUN_0043b100(param_1[0x13],param_2,0xffffffff);
  param_2 = param_2 + 1;
  iVar1 = (**(code **)(*param_1 + 0x14))();
  if (param_2 <= iVar1) {
    iVar1 = (iVar1 - param_2) + 1;
    do {
      FUN_004b8a08(param_1,param_2);
      param_2 = param_2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}
