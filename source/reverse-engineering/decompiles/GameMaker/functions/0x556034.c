// rea decompile_all
// name: FUN_00556034
// address: 0x556034
// body: available
// range: 0x556034-0x55612f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00556034(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;

  iVar1 = *(int *)(param_1 + 0x1a8);
  iVar2 = *(int *)(param_1 + 0x13c);
  local_20 = 0;
  local_1c = *(int *)(param_1 + 0xd8);
  for (; local_20 < *(int *)(param_1 + 0x24); local_20 = local_20 + 1) {
    iVar5 = (*(int *)(local_1c + 0xc) * *(int *)(local_1c + 0x24)) / *(int *)(param_1 + 0x13c);
    puVar3 = *(undefined4 **)(*(int *)(iVar1 + 0x38) + local_20 * 4);
    puVar4 = *(undefined4 **)(*(int *)(iVar1 + 0x3c) + local_20 * 4);
    iVar6 = 0;
    local_18 = puVar3;
    local_14 = puVar4;
    if (0 < iVar5) {
      do {
        puVar3[iVar6 - iVar5] = puVar3[(iVar2 + 1) * iVar5 + iVar6];
        puVar4[iVar6 - iVar5] = puVar4[(iVar2 + 1) * iVar5 + iVar6];
        puVar3[(iVar2 + 2) * iVar5 + iVar6] = *local_18;
        puVar4[(iVar2 + 2) * iVar5 + iVar6] = *local_14;
        iVar6 = iVar6 + 1;
        local_14 = local_14 + 1;
        local_18 = local_18 + 1;
      } while (iVar6 < iVar5);
    }
    local_1c = local_1c + 0x54;
  }
  return;
}
