// rea decompile_all
// name: FUN_005b2aac
// address: 0x5b2aac
// body: available
// range: 0x5b2aac-0x5b2c3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b2aac(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 *local_38;
  int *local_34;
  int local_c;

  iVar10 = *(int *)(param_2 + 0x1c) * 8;
  FUN_005b24a0(param_3 + -1,*(int *)(param_1 + 0xe8) + 2,*(undefined4 *)(param_1 + 0x1c),iVar10);
  iVar8 = *(int *)(param_1 + 0xbc) * -0x200 + 0x10000;
  iVar5 = *(int *)(param_1 + 0xbc) * 0x40;
  local_34 = param_4;
  local_38 = param_3;
  for (local_c = 0; local_c < *(int *)(param_2 + 0xc); local_c = local_c + 1) {
    puVar4 = (undefined1 *)*local_34;
    uVar6 = (uint)*(byte *)*local_38;
    pbVar9 = (byte *)*local_38 + 1;
    pbVar1 = (byte *)local_38[1] + 1;
    pbVar2 = (byte *)local_38[-1] + 1;
    iVar11 = (uint)*(byte *)local_38[-1] + (uint)*(byte *)local_38[1] + uVar6;
    iVar12 = (uint)*pbVar2 + (uint)*pbVar1 + (uint)*pbVar9;
    *puVar4 = (char)(uVar6 * iVar8 + ((iVar11 * 2 - uVar6) + iVar12) * iVar5 + 0x8000 >> 0x10);
    for (iVar7 = iVar10 + -2; puVar4 = puVar4 + 1, iVar7 != 0; iVar7 = iVar7 + -1) {
      bVar3 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      pbVar2 = pbVar2 + 1;
      pbVar1 = pbVar1 + 1;
      iVar13 = (uint)*pbVar2 + (uint)*pbVar1 + (uint)*pbVar9;
      *puVar4 = (char)((uint)bVar3 * iVar8 + ((iVar12 - (uint)bVar3) + iVar11 + iVar13) * iVar5 +
                       0x8000 >> 0x10);
      iVar11 = iVar12;
      iVar12 = iVar13;
    }
    *puVar4 = (char)((uint)*pbVar9 * iVar8 + ((iVar12 * 2 - (uint)*pbVar9) + iVar11) * iVar5 +
                     0x8000 >> 0x10);
    local_38 = local_38 + 1;
    local_34 = local_34 + 1;
  }
  return;
}
