// rea decompile_all
// name: FUN_0057f358
// address: 0x57f358
// body: available
// range: 0x57f358-0x57f422 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057f358(int param_1,undefined4 *param_2,int *param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  short *psVar9;
  int *local_28;
  undefined4 *local_24;
  int local_18;

  iVar3 = *(int *)(*(int *)(param_1 + 0x1be) + 0x18);
  iVar4 = *(int *)(param_1 + 0x6c);
  local_18 = 0;
  local_28 = param_3;
  local_24 = param_2;
  if (0 < param_4) {
    do {
      pbVar8 = (byte *)*local_24;
      pcVar5 = (char *)*local_28;
      for (iVar1 = iVar4; iVar1 != 0; iVar1 = iVar1 + -1) {
        bVar2 = *pbVar8;
        pbVar6 = pbVar8 + 1;
        pbVar7 = pbVar8 + 2;
        pbVar8 = pbVar8 + 3;
        psVar9 = (short *)(*(int *)(iVar3 + ((int)(uint)bVar2 >> 3) * 4) +
                           ((int)(uint)*pbVar6 >> 2) * 0x40 + ((int)(uint)*pbVar7 >> 3) * 2);
        if (*psVar9 == 0) {
          FUN_0057f278(param_1,(int)(uint)bVar2 >> 3,(int)(uint)*pbVar6 >> 2,(int)(uint)*pbVar7 >> 3
                      );
        }
        *pcVar5 = (char)*psVar9 + -1;
        pcVar5 = pcVar5 + 1;
      }
      local_18 = local_18 + 1;
      local_28 = local_28 + 1;
      local_24 = local_24 + 1;
    } while (local_18 < param_4);
  }
  return;
}
