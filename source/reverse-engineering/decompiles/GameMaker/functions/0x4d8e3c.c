// rea decompile_all
// name: FUN_004d8e3c
// address: 0x4d8e3c
// body: available
// range: 0x4d8e3c-0x4d8eaa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d8e3c(int param_1)

{
  char cVar1;

  if ((*(int *)(param_1 + 0x70) != 0) &&
     (cVar1 = FUN_00405c98(*(int *)(param_1 + 0x70),&PTR_FUN_004d73ac), cVar1 != '\0')) {
    FUN_004dcaa4(param_1,0);
    FUN_004dd2c4(param_1,0);
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    FUN_004de108(*(int *)(param_1 + 0x70));
  }
  FUN_004d84c8(&LAB_004d8e1c,*(undefined4 *)(param_1 + 0x68),param_1);
  return;
}
