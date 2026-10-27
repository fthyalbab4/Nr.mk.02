// rea decompile_all
// name: FUN_006596bc
// address: 0x6596bc
// body: available
// range: 0x6596bc-0x659767 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006596bc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_14;

  iVar3 = 0;
  local_14 = *(int *)(param_1 + 0x2f8);
  if (-1 < local_14 + -1) {
    iVar2 = 0;
    do {
      if ((((*(int *)(*(int *)(param_1 + 0x2fc) + iVar2 * 0x28) < *(int *)(param_1 + 0xc)) &&
           (0 < *(int *)(*(int *)(param_1 + 0x2fc) + iVar2 * 0x28) +
                *(int *)(*(int *)(param_1 + 0x2fc) + 0x14 + iVar2 * 0x28))) &&
          (*(int *)(*(int *)(param_1 + 0x2fc) + 4 + iVar2 * 0x28) < *(int *)(param_1 + 0x10))) &&
         (0 < *(int *)(*(int *)(param_1 + 0x2fc) + 4 + iVar2 * 0x28) +
              *(int *)(*(int *)(param_1 + 0x2fc) + 0x18 + iVar2 * 0x28))) {
        if (iVar3 < iVar2) {
          puVar4 = (undefined4 *)(*(int *)(param_1 + 0x2fc) + iVar2 * 0x28);
          puVar5 = (undefined4 *)(*(int *)(param_1 + 0x2fc) + iVar3 * 0x28);
          for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
        }
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar2 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  *(int *)(param_1 + 0x2f8) = iVar3;
  FUN_00657b48();
  return;
}
