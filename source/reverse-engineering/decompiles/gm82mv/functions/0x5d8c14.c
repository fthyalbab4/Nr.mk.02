// rea decompile_all
// name: FUN_005d8c14
// address: 0x5d8c14
// body: available
// range: 0x5d8c14-0x5d8d63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d8c14(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int local_18;
  int local_14;

  local_14 = 0;
  local_18 = param_2;
  do {
    iVar2 = (param_2 + -1) - local_14;
    iVar1 = param_1 + -1;
    pbVar5 = (byte *)(iVar2 * param_3 + param_4 + iVar1);
    pbVar3 = (byte *)(iVar2 * 2 * param_3 + param_4 + iVar1 * 2);
    *pbVar3 = *pbVar5;
    pbVar3[1] = *pbVar5;
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      pbVar6 = pbVar5 + -1;
      pbVar3[-2] = *pbVar6;
      pbVar3[-1] = (byte)((uint)*pbVar6 + (uint)*pbVar5 + 1 >> 1);
      pbVar5 = pbVar6;
      pbVar3 = pbVar3 + -2;
    }
    local_14 = local_14 + 1;
    local_18 = local_18 + -1;
  } while (local_18 != 0);
  local_18 = param_2 + -1;
  local_14 = 0;
  do {
    pbVar3 = (byte *)(local_14 * 2 * param_3 + param_4);
    pbVar5 = pbVar3 + param_3;
    pbVar6 = pbVar5 + param_3;
    iVar1 = param_1 + -1;
    do {
      pbVar7 = pbVar3;
      pbVar4 = pbVar5;
      *pbVar4 = (byte)((uint)*pbVar7 + (uint)*pbVar6 + 1 >> 1);
      pbVar4[1] = (byte)((uint)*pbVar7 + (uint)pbVar7[2] + (uint)*pbVar6 + (uint)pbVar6[2] + 2 >> 2)
      ;
      pbVar6 = pbVar6 + 2;
      iVar1 = iVar1 + -1;
      pbVar5 = pbVar4 + 2;
      pbVar3 = pbVar7 + 2;
    } while (iVar1 != 0);
    pbVar4[2] = (byte)((uint)pbVar7[2] + (uint)*pbVar6 + 1 >> 1);
    pbVar4[3] = (byte)((uint)pbVar7[3] + (uint)*pbVar6 + 1 >> 1);
    local_14 = local_14 + 1;
    local_18 = local_18 + -1;
  } while (local_18 != 0);
  FUN_00404514((param_2 * 2 + -2) * param_3 + param_4,(param_2 * 2 + -1) * param_3 + param_4,
               param_1 * 2);
  return;
}
