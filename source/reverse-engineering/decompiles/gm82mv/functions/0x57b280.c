// rea decompile_all
// name: FUN_0057b280
// address: 0x57b280
// body: available
// range: 0x57b280-0x57b2bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057b280(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;

  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 8))) {
    iVar2 = *(int *)(param_1 + 8) + -2;
    if (param_2 <= iVar2) {
      iVar2 = (iVar2 - param_2) + 1;
      do {
        puVar3 = (undefined4 *)(*(int *)(param_1 + 4) + 0x18 + param_2 * 0x18);
        puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + param_2 * 0x18);
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        param_2 = param_2 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    FUN_0057af28();
  }
  return;
}
