// rea decompile_all
// name: FUN_005b2764
// address: 0x5b2764
// body: available
// range: 0x5b2764-0x5b2819 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b2764(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  uint uVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  undefined4 *local_1c;
  int *local_18;
  uint local_10;
  int local_c;

  uVar6 = *(int *)(param_2 + 0x1c) * 8;
  FUN_005b24a0(param_3,*(undefined4 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0x1c),
               *(int *)(param_2 + 0x1c) << 4);
  local_18 = param_4;
  local_1c = param_3;
  for (local_c = 0; local_c < *(int *)(param_2 + 0xc); local_c = local_c + 1) {
    uVar10 = 1;
    puVar7 = (undefined1 *)*local_18;
    pbVar5 = (byte *)*local_1c;
    pbVar8 = (byte *)local_1c[1];
    local_10 = 0;
    if (uVar6 != 0) {
      do {
        pbVar1 = pbVar5 + 1;
        bVar3 = *pbVar5;
        pbVar5 = pbVar5 + 2;
        bVar4 = *pbVar8;
        pbVar2 = pbVar8 + 1;
        pbVar8 = pbVar8 + 2;
        iVar9 = (uint)bVar3 + (uint)*pbVar1 + (uint)bVar4 + (uint)*pbVar2 + uVar10;
        uVar10 = uVar10 ^ 3;
        *puVar7 = (char)(iVar9 >> 2);
        puVar7 = puVar7 + 1;
        local_10 = local_10 + 1;
      } while (local_10 < uVar6);
    }
    local_1c = local_1c + 2;
    local_18 = local_18 + 1;
  }
  return;
}
