// rea decompile_all
// name: FUN_00648020
// address: 0x648020
// body: available
// range: 0x648020-0x64808e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00648020(int param_1)

{
  int iVar1;

  iVar1 = *(int *)(param_1 + 0x5e0);
  if (*(int *)(iVar1 + 0x27c) < *(int *)(iVar1 + 0x274) + *(int *)(iVar1 + 0x280)) {
    FUN_00484e60(iVar1,*(int *)(iVar1 + 0x27c) - *(int *)(iVar1 + 0x280));
  }
  if (*(int *)(*(int *)(param_1 + 0x5e0) + 0x274) < 0) {
    FUN_00484e60(*(int *)(param_1 + 0x5e0),0);
  }
  *(undefined4 *)(param_1 + 0x6f4) = *(undefined4 *)(*(int *)(param_1 + 0x5e0) + 0x274);
  if (DAT_0077f19c != '\0') {
    FUN_00644e28(param_1);
    FUN_004eed28(*(undefined4 *)(param_1 + 0x5dc));
  }
  return;
}
