// rea decompile_all
// name: FUN_005a9a30
// address: 0x5a9a30
// body: available
// range: 0x5a9a30-0x5a9b77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a9a30(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int local_2c;
  int local_28;
  int *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;

  iVar1 = *(int *)(param_1 + 0x1a8);
  iVar2 = *(int *)(param_1 + 0x13c);
  local_2c = 0;
  local_28 = *(int *)(param_1 + 0xd8);
  local_20 = (int *)(iVar1 + 8);
  for (; local_2c < *(int *)(param_1 + 0x24); local_2c = local_2c + 1) {
    iVar7 = (*(int *)(local_28 + 0xc) * *(int *)(local_28 + 0x24)) / *(int *)(param_1 + 0x13c);
    puVar3 = *(undefined4 **)(*(int *)(iVar1 + 0x38) + local_2c * 4);
    puVar4 = *(undefined4 **)(*(int *)(iVar1 + 0x3c) + local_2c * 4);
    puVar5 = (undefined4 *)*local_20;
    local_1c = puVar5;
    local_18 = puVar4;
    local_14 = puVar3;
    for (iVar8 = 0; iVar8 < (iVar2 + 2) * iVar7; iVar8 = iVar8 + 1) {
      uVar6 = *local_1c;
      *local_18 = uVar6;
      *local_14 = uVar6;
      local_14 = local_14 + 1;
      local_18 = local_18 + 1;
      local_1c = local_1c + 1;
    }
    for (iVar8 = 0; iVar8 < iVar7 * 2; iVar8 = iVar8 + 1) {
      puVar4[(iVar2 + -2) * iVar7 + iVar8] = puVar5[iVar7 * iVar2 + iVar8];
      puVar4[iVar7 * iVar2 + iVar8] = puVar5[(iVar2 + -2) * iVar7 + iVar8];
    }
    iVar8 = 0;
    if (0 < iVar7) {
      do {
        puVar3[iVar8 - iVar7] = *puVar3;
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar7);
    }
    local_20 = local_20 + 1;
    local_28 = local_28 + 0x54;
  }
  return;
}
