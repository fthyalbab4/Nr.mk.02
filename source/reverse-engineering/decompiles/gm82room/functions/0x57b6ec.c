// rea decompile_all
// name: FUN_0057b6ec
// address: 0x57b6ec
// body: available
// range: 0x57b6ec-0x57b76c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057b6ec(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_28 [6];

  if (1 < *(int *)(param_1 + 8)) {
    uVar3 = *(int *)(param_1 + 8) - 1;
    iVar4 = (int)uVar3 >> 1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + (uint)((uVar3 & 1) != 0);
    }
    if (-1 < iVar4) {
      iVar4 = iVar4 + 1;
      iVar2 = 0;
      do {
        puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + iVar2 * 0x18);
        puVar6 = local_28;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        puVar6 = (undefined4 *)
                 (*(int *)(param_1 + 4) + ((*(int *)(param_1 + 8) + -1) - iVar2) * 0x18);
        puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + iVar2 * 0x18);
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar5 = puVar5 + 1;
        }
        puVar6 = local_28;
        puVar5 = (undefined4 *)
                 (*(int *)(param_1 + 4) + ((*(int *)(param_1 + 8) + -1) - iVar2) * 0x18);
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar5 = puVar5 + 1;
        }
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_0057af28();
  }
  return;
}
