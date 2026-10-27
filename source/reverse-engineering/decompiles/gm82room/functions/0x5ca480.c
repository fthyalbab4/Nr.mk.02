// rea decompile_all
// name: FUN_005ca480
// address: 0x5ca480
// body: available
// range: 0x5ca480-0x5ca511 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005ca480(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;

  puVar1 = (undefined4 *)param_1[5];
  iVar3 = puVar1[1];
  pbVar5 = (byte *)*puVar1;
  if (iVar3 == 0) {
    iVar3 = (*(code *)puVar1[3])(param_1,param_2,param_3,param_3);
    if (iVar3 == 0) {
      return 0;
    }
    pbVar5 = (byte *)*puVar1;
    iVar3 = puVar1[1];
  }
  iVar3 = iVar3 + -1;
  pbVar6 = pbVar5 + 1;
  iVar4 = (uint)*pbVar5 << 8;
  if (iVar3 == 0) {
    iVar3 = (*(code *)puVar1[3])(param_1);
    if (iVar3 == 0) {
      return 0;
    }
    pbVar6 = (byte *)*puVar1;
    iVar3 = puVar1[1];
  }
  iVar4 = iVar4 + (uint)*pbVar6;
  iVar2 = *param_1;
  *(undefined4 *)(iVar2 + 0x14) = 0x5a;
  *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)((int)param_1 + 0x192);
  *(int *)(iVar2 + 0x1c) = iVar4;
  (**(code **)(*param_1 + 4))(param_1,1);
  *puVar1 = pbVar6 + 1;
  puVar1[1] = iVar3 + -1;
  (**(code **)(param_1[5] + 0x10))(param_1,iVar4 + -2);
  return 1;
}
