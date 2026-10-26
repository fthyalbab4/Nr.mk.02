// rea decompile_all
// name: FUN_005aba24
// address: 0x5aba24
// body: available
// range: 0x5aba24-0x5abb77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005aba24(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *local_30;
  int *local_2c;
  int local_24;
  int local_20;
  byte *local_14;

  iVar2 = *param_4;
  local_20 = 0;
  local_30 = param_3;
  while (local_20 < *(int *)(param_1 + 0x138)) {
    local_24 = 0;
    local_2c = (int *)(iVar2 + local_20 * 4);
    do {
      pbVar3 = (byte *)*local_30;
      if (local_24 == 0) {
        local_14 = (byte *)local_30[-1];
      }
      else {
        local_14 = (byte *)local_30[1];
      }
      puVar4 = (undefined1 *)*local_2c;
      local_20 = local_20 + 1;
      local_2c = local_2c + 1;
      iVar7 = (uint)*pbVar3 * 3 + (uint)*local_14;
      iVar8 = (uint)pbVar3[1] * 3 + (uint)local_14[1];
      local_14 = local_14 + 2;
      pbVar3 = pbVar3 + 2;
      *puVar4 = (char)(iVar7 * 4 + 8 >> 4);
      puVar4[1] = (char)(iVar7 * 3 + iVar8 + 7 >> 4);
      for (iVar6 = *(int *)(param_2 + 0x28) + -2; puVar5 = puVar4 + 2, iVar6 != 0;
          iVar6 = iVar6 + -1) {
        bVar1 = *local_14;
        local_14 = local_14 + 1;
        iVar9 = (uint)*pbVar3 * 3 + (uint)bVar1;
        pbVar3 = pbVar3 + 1;
        *puVar5 = (char)(iVar8 * 3 + iVar7 + 8 >> 4);
        puVar4[3] = (char)(iVar8 * 3 + iVar9 + 7 >> 4);
        iVar7 = iVar8;
        iVar8 = iVar9;
        puVar4 = puVar5;
      }
      *puVar5 = (char)(iVar8 * 3 + iVar7 + 8 >> 4);
      puVar4[3] = (char)(iVar8 * 4 + 7 >> 4);
      local_24 = local_24 + 1;
    } while (local_24 < 2);
    local_30 = local_30 + 1;
  }
  return;
}
