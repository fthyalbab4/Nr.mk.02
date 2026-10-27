// rea decompile_all
// name: FUN_005b0e54
// address: 0x5b0e54
// body: available
// range: 0x5b0e54-0x5b0eae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b0e54(int param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = *(int *)(param_1 + 0x148);
  (**(code **)(*(int *)(param_1 + 0x168) + 8))();
  iVar2 = *(int *)(iVar1 + 0x14);
  if (iVar2 == 0) {
    *(undefined4 *)(iVar1 + 0x14) = 2;
    if (*(int *)(param_1 + 0xb4) == 0) {
      *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
    }
  }
  else if (iVar2 == 1) {
    *(undefined4 *)(iVar1 + 0x14) = 2;
  }
  else if (iVar2 == 2) {
    if (*(int *)(param_1 + 0xb4) != 0) {
      *(undefined4 *)(iVar1 + 0x14) = 1;
    }
    *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  }
  *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
  return;
}
