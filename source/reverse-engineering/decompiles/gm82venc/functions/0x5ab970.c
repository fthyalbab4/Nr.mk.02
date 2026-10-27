// rea decompile_all
// name: FUN_005ab970
// address: 0x5ab970
// body: available
// range: 0x5ab970-0x5aba22 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ab970(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *local_14;
  int local_10;

  local_14 = (undefined4 *)*param_4;
  for (local_10 = 0; local_10 < *(int *)(param_1 + 0x138); local_10 = local_10 + 1) {
    pbVar2 = (byte *)*local_14;
    bVar1 = *(byte *)*param_3;
    pbVar4 = (byte *)*param_3 + 1;
    *pbVar2 = bVar1;
    pbVar2[1] = (byte)((int)((uint)bVar1 * 3 + (uint)*pbVar4 + 2) >> 2);
    for (iVar5 = *(int *)(param_2 + 0x28) + -2; pbVar3 = pbVar2 + 2, iVar5 != 0; iVar5 = iVar5 + -1)
    {
      bVar1 = *pbVar4;
      *pbVar3 = (byte)((int)((uint)pbVar4[-1] + (uint)bVar1 * 3 + 1) >> 2);
      pbVar2[3] = (byte)((int)((uint)bVar1 * 3 + (uint)pbVar4[1] + 2) >> 2);
      pbVar4 = pbVar4 + 1;
      pbVar2 = pbVar3;
    }
    bVar1 = *pbVar4;
    *pbVar3 = (byte)((int)((uint)bVar1 * 3 + (uint)pbVar4[-1] + 1) >> 2);
    pbVar2[3] = bVar1;
    local_14 = local_14 + 1;
    param_3 = param_3 + 1;
  }
  return;
}
