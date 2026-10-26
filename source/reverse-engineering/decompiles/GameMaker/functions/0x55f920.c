// rea decompile_all
// name: FUN_0055f920
// address: 0x55f920
// body: available
// range: 0x55f920-0x55f94e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055f920(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;

  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x20) + 0x18);
  iVar3 = (*(code *)puVar1[3])();
  if (iVar3 == 0) {
    piVar2 = *(int **)(param_1 + 0x20);
    *(undefined4 *)(*piVar2 + 0x14) = 0x18;
    (**(code **)*piVar2)();
  }
  *(undefined4 *)(param_1 + 0x10) = *puVar1;
  *(undefined4 *)(param_1 + 0x14) = puVar1[1];
  return;
}
