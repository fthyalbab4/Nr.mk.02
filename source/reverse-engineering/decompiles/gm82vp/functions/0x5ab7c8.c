// rea decompile_all
// name: FUN_005ab7c8
// address: 0x5ab7c8
// body: available
// range: 0x5ab7c8-0x5ab882 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ab7c8(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 *local_1c;
  int local_18;

  iVar2 = *param_4;
  uVar6 = (uint)*(byte *)(*(int *)(param_1 + 0x1c4) + 0x8c + *(int *)(param_2 + 4));
  uVar3 = (uint)*(byte *)(*(int *)(param_1 + 0x1c4) + 0x96 + *(int *)(param_2 + 4));
  local_1c = param_3;
  for (local_18 = 0; local_18 < *(int *)(param_1 + 0x138); local_18 = local_18 + uVar3) {
    puVar7 = (undefined1 *)*local_1c;
    puVar4 = *(undefined1 **)(iVar2 + local_18 * 4);
    puVar8 = puVar4 + *(int *)(param_1 + 0x70);
    while (puVar4 < puVar8) {
      uVar1 = *puVar7;
      puVar7 = puVar7 + 1;
      uVar5 = uVar6;
      if (uVar6 != 0) {
        do {
          *puVar4 = uVar1;
          puVar4 = puVar4 + 1;
          uVar5 = uVar5 - 1;
        } while (0 < (int)uVar5);
      }
    }
    if (1 < uVar3) {
      FUN_005aea68(iVar2,local_18,iVar2,*(undefined4 *)(param_1 + 0x70),uVar3 - 1,local_18 + 1);
    }
    local_1c = local_1c + 1;
  }
  return;
}
