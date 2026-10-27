// rea decompile_all
// name: FUN_005c3fd4
// address: 0x5c3fd4
// body: available
// range: 0x5c3fd4-0x5c40e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c3fd4(int param_1,int *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  byte *pbVar10;
  int iVar11;
  int *local_38;
  int *local_34;
  undefined4 *local_28;
  int local_20;
  int local_1c;

  iVar2 = *(int *)(param_1 + 0x1be);
  iVar3 = *(int *)(param_1 + 0x74);
  iVar4 = *(int *)(param_1 + 0x6c);
  local_20 = 0;
  local_38 = param_2;
  local_28 = param_3;
  if (0 < param_4) {
    do {
      FUN_005bf288();
      iVar5 = *(int *)(iVar2 + 0x30);
      local_1c = 0;
      local_34 = (int *)(iVar2 + 0x34);
      if (0 < iVar3) {
        do {
          pcVar9 = (char *)*local_28;
          pbVar10 = (byte *)(*local_38 + local_1c);
          iVar6 = *(int *)(*(int *)(iVar2 + 0x18) + local_1c * 4);
          iVar7 = *local_34;
          uVar8 = 0;
          for (iVar11 = iVar4; iVar11 != 0; iVar11 = iVar11 + -1) {
            iVar1 = uVar8 * 4;
            uVar8 = uVar8 + 1 & 0xf;
            *pcVar9 = *pcVar9 + *(char *)(iVar6 + (uint)*pbVar10 +
                                         *(int *)(iVar7 + iVar5 * 0x40 + iVar1));
            pcVar9 = pcVar9 + 1;
            pbVar10 = pbVar10 + iVar3;
          }
          local_1c = local_1c + 1;
          local_34 = local_34 + 1;
        } while (local_1c < iVar3);
      }
      *(uint *)(iVar2 + 0x30) = iVar5 + 1U & 0xf;
      local_20 = local_20 + 1;
      local_38 = local_38 + 1;
      local_28 = local_28 + 1;
    } while (local_20 < param_4);
  }
  return;
}
