// rea decompile_all
// name: FUN_005ae260
// address: 0x5ae260
// body: available
// range: 0x5ae260-0x5ae372 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005ae260(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;

  puVar2 = (undefined4 *)param_1[6];
  pbVar5 = (byte *)*puVar2;
  iVar4 = puVar2[1];
  while( true ) {
    if (iVar4 == 0) {
      iVar4 = (*(code *)puVar2[3])(param_1);
      if (iVar4 == 0) {
        return 0;
      }
      pbVar5 = (byte *)*puVar2;
      iVar4 = puVar2[1];
    }
    bVar1 = *pbVar5;
    while( true ) {
      iVar4 = iVar4 + -1;
      pbVar5 = pbVar5 + 1;
      if (bVar1 == 0xff) break;
      *(int *)(param_1[0x6e] + 0x18) = *(int *)(param_1[0x6e] + 0x18) + 1;
      *puVar2 = pbVar5;
      puVar2[1] = iVar4;
      if (iVar4 == 0) {
        iVar4 = (*(code *)puVar2[3])(param_1);
        if (iVar4 == 0) {
          return 0;
        }
        pbVar5 = (byte *)*puVar2;
        iVar4 = puVar2[1];
      }
      bVar1 = *pbVar5;
    }
    do {
      if (iVar4 == 0) {
        iVar4 = (*(code *)puVar2[3])(param_1);
        if (iVar4 == 0) {
          return 0;
        }
        pbVar5 = (byte *)*puVar2;
        iVar4 = puVar2[1];
      }
      uVar6 = (uint)*pbVar5;
      pbVar5 = pbVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (uVar6 == 0xff);
    if (uVar6 != 0) break;
    *(int *)(param_1[0x6e] + 0x18) = *(int *)(param_1[0x6e] + 0x18) + 2;
    *puVar2 = pbVar5;
    puVar2[1] = iVar4;
  }
  if (*(int *)(param_1[0x6e] + 0x18) != 0) {
    iVar3 = *param_1;
    *(undefined4 *)(iVar3 + 0x14) = 0x74;
    *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(param_1[0x6e] + 0x18);
    *(uint *)(iVar3 + 0x1c) = uVar6;
    (**(code **)(*param_1 + 4))(param_1,0xffffffff);
    *(undefined4 *)(param_1[0x6e] + 0x18) = 0;
  }
  param_1[0x68] = uVar6;
  *puVar2 = pbVar5;
  puVar2[1] = iVar4;
  return 1;
}
