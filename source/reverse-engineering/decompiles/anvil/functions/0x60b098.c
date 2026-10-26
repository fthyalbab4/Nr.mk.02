// rea decompile_all
// name: FUN_0060b098
// address: 0x60b098
// body: available
// range: 0x60b098-0x60b0e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060b098(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;

  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x88))) {
    iVar2 = *(int *)(param_1 + 0x88) + -2;
    if (param_2 <= iVar2) {
      iVar2 = (iVar2 - param_2) + 1;
      do {
        puVar3 = (undefined4 *)(*(int *)(param_1 + 0x8c) + 0x60 + param_2 * 0x60);
        puVar4 = (undefined4 *)(*(int *)(param_1 + 0x8c) + param_2 * 0x60);
        for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        param_2 = param_2 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + -1;
  }
  return;
}
