// rea decompile_all
// name: FUN_0057e55c
// address: 0x57e55c
// body: available
// range: 0x57e55c-0x57e59b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057e55c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;

  iVar1 = *(int *)(param_1 + 0x6c);
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0x1be) + 0x44);
  for (iVar4 = 0; iVar4 < *(int *)(param_1 + 0x74); iVar4 = iVar4 + 1) {
    uVar2 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,iVar1 * 2 + 4);
    *puVar3 = uVar2;
    puVar3 = puVar3 + 1;
  }
  return;
}
