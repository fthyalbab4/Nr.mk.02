// rea decompile_all
// name: FUN_0060b0e8
// address: 0x60b0e8
// body: available
// range: 0x60b0e8-0x60b1e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060b0e8(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_74;
  undefined4 local_6c [24];

  bVar1 = true;
  if (-1 < *(int *)(param_1 + 0x88) + -2) {
    local_74 = *(int *)(param_1 + 0x88) + -1;
    iVar5 = 0;
    do {
      if (*(double *)(*(int *)(param_1 + 0x8c) + 0x28 + iVar5 * 0x60) <
          *(double *)(*(int *)(param_1 + 0x8c) + 0x88 + iVar5 * 0x60)) {
        bVar1 = false;
        break;
      }
      iVar5 = iVar5 + 1;
      local_74 = local_74 + -1;
    } while (local_74 != 0);
  }
  if ((!bVar1) && (local_74 = *(int *)(param_1 + 0x88) + -1, 0 < local_74)) {
    iVar5 = 1;
    do {
      iVar3 = iVar5;
      if (0 < iVar5) {
        do {
          if (*(double *)(*(int *)(param_1 + 0x8c) + 0x28 + iVar3 * 0x60) <=
              *(double *)(*(int *)(param_1 + 0x8c) + -0x38 + iVar3 * 0x60)) break;
          puVar4 = (undefined4 *)(*(int *)(param_1 + 0x8c) + iVar3 * 0x60);
          puVar6 = local_6c;
          for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar4 = (undefined4 *)(*(int *)(param_1 + 0x8c) + -0x60 + iVar3 * 0x60);
          puVar6 = (undefined4 *)(*(int *)(param_1 + 0x8c) + iVar3 * 0x60);
          for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar4 = local_6c;
          puVar6 = (undefined4 *)(*(int *)(param_1 + 0x8c) + -0x60 + iVar3 * 0x60);
          for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar5 = iVar5 + 1;
      local_74 = local_74 + -1;
    } while (local_74 != 0);
  }
  return;
}
