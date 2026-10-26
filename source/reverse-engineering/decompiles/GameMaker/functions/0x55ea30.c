// rea decompile_all
// name: FUN_0055ea30
// address: 0x55ea30
// body: available
// range: 0x55ea30-0x55eb3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055ea30(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *local_38;
  undefined1 *local_34;
  int local_2c;
  uint local_28;
  int local_14;
  int local_10;

  uVar6 = *(int *)(param_2 + 0x1c) * 8;
  iVar1 = *(int *)(param_1 + 0xe4) / *(int *)(param_2 + 8);
  iVar2 = *(int *)(param_1 + 0xe8) / *(int *)(param_2 + 0xc);
  uVar3 = iVar1 * iVar2;
  iVar7 = (int)uVar3 >> 1;
  if (iVar7 < 0) {
    iVar7 = iVar7 + (uint)((uVar3 & 1) != 0);
  }
  FUN_0055e95c(param_3,*(int *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0x1c),uVar6 * iVar1);
  local_10 = 0;
  local_38 = param_4;
  for (local_14 = 0; local_14 < *(int *)(param_2 + 0xc); local_14 = local_14 + 1) {
    local_34 = (undefined1 *)*local_38;
    local_28 = 0;
    local_2c = 0;
    if (uVar6 != 0) {
      do {
        iVar5 = 0;
        iVar9 = 0;
        if (0 < iVar2) {
          do {
            iVar8 = 0;
            pbVar4 = (byte *)(*(int *)(param_3 + (local_10 + iVar9) * 4) + local_2c);
            if (0 < iVar1) {
              do {
                iVar5 = iVar5 + (uint)*pbVar4;
                pbVar4 = pbVar4 + 1;
                iVar8 = iVar8 + 1;
              } while (iVar8 < iVar1);
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar2);
        }
        *local_34 = (char)((iVar7 + iVar5) / (int)uVar3);
        local_34 = local_34 + 1;
        local_28 = local_28 + 1;
        local_2c = local_2c + iVar1;
      } while (local_28 < uVar6);
    }
    local_10 = local_10 + iVar2;
    local_38 = local_38 + 1;
  }
  return;
}
