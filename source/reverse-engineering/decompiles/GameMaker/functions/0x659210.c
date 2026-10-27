// rea decompile_all
// name: FUN_00659210
// address: 0x659210
// body: available
// range: 0x659210-0x659334 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00659210(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_3c;
  int local_38;
  undefined4 local_34 [10];

  bVar1 = false;
  local_38 = *(int *)(param_1 + 0x2f8);
  if (-1 < local_38 + -1) {
    local_3c = 0;
    do {
      if (((param_2 == 0) ||
          (*(int *)(*(int *)(param_1 + 0x2fc) + 0x1c + local_3c * 0x28) == param_3)) &&
         (iVar3 = local_3c, 0 < local_3c)) {
        do {
          if (param_2 == 0) {
            bVar1 = *(int *)(*(int *)(param_1 + 0x2fc) + -0xc + iVar3 * 0x28) <
                    *(int *)(*(int *)(param_1 + 0x2fc) + 0x1c + iVar3 * 0x28);
          }
          else if (param_2 == 1) {
            bVar1 = *(int *)(*(int *)(param_1 + 0x2fc) + iVar3 * 0x28) <
                    *(int *)(*(int *)(param_1 + 0x2fc) + -0x28 + iVar3 * 0x28);
          }
          else if (param_2 == 2) {
            bVar1 = *(int *)(*(int *)(param_1 + 0x2fc) + 4 + iVar3 * 0x28) <
                    *(int *)(*(int *)(param_1 + 0x2fc) + -0x24 + iVar3 * 0x28);
          }
          if (!bVar1) break;
          puVar4 = (undefined4 *)(*(int *)(param_1 + 0x2fc) + iVar3 * 0x28);
          puVar5 = local_34;
          for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          puVar4 = (undefined4 *)(*(int *)(param_1 + 0x2fc) + -0x28 + iVar3 * 0x28);
          puVar5 = (undefined4 *)(*(int *)(param_1 + 0x2fc) + iVar3 * 0x28);
          for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          puVar4 = local_34;
          puVar5 = (undefined4 *)(*(int *)(param_1 + 0x2fc) + -0x28 + iVar3 * 0x28);
          for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_3c = local_3c + 1;
      local_38 = local_38 + -1;
    } while (local_38 != 0);
  }
  return;
}
