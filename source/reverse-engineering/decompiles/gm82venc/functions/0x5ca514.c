// rea decompile_all
// name: FUN_005ca514
// address: 0x5ca514
// body: available
// range: 0x5ca514-0x5ca626 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005ca514(int *param_1)

{
  int *piVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;

  puVar3 = (undefined4 *)param_1[5];
  pbVar6 = (byte *)*puVar3;
  iVar5 = puVar3[1];
  while( true ) {
    if (iVar5 == 0) {
      iVar5 = (*(code *)puVar3[3])(param_1);
      if (iVar5 == 0) {
        return 0;
      }
      pbVar6 = (byte *)*puVar3;
      iVar5 = puVar3[1];
    }
    bVar2 = *pbVar6;
    while( true ) {
      iVar5 = iVar5 + -1;
      pbVar6 = pbVar6 + 1;
      if (bVar2 == 0xff) break;
      piVar1 = (int *)(*(int *)((int)param_1 + 0x1aa) + 0x5c);
      *piVar1 = *piVar1 + 1;
      *puVar3 = pbVar6;
      puVar3[1] = iVar5;
      if (iVar5 == 0) {
        iVar5 = (*(code *)puVar3[3])(param_1);
        if (iVar5 == 0) {
          return 0;
        }
        pbVar6 = (byte *)*puVar3;
        iVar5 = puVar3[1];
      }
      bVar2 = *pbVar6;
    }
    do {
      if (iVar5 == 0) {
        iVar5 = (*(code *)puVar3[3])(param_1);
        if (iVar5 == 0) {
          return 0;
        }
        pbVar6 = (byte *)*puVar3;
        iVar5 = puVar3[1];
      }
      uVar7 = (uint)*pbVar6;
      pbVar6 = pbVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (uVar7 == 0xff);
    if (uVar7 != 0) break;
    piVar1 = (int *)(*(int *)((int)param_1 + 0x1aa) + 0x5c);
    *piVar1 = *piVar1 + 2;
    *puVar3 = pbVar6;
    puVar3[1] = iVar5;
  }
  if (*(int *)(*(int *)((int)param_1 + 0x1aa) + 0x5c) != 0) {
    iVar4 = *param_1;
    *(undefined4 *)(iVar4 + 0x14) = 0x70;
    *(undefined4 *)(iVar4 + 0x18) = *(undefined4 *)(*(int *)((int)param_1 + 0x1aa) + 0x5c);
    *(uint *)(iVar4 + 0x1c) = uVar7;
    (**(code **)(*param_1 + 4))(param_1,0xffffffff);
    *(undefined4 *)(*(int *)((int)param_1 + 0x1aa) + 0x5c) = 0;
  }
  *(uint *)((int)param_1 + 0x192) = uVar7;
  *puVar3 = pbVar6;
  puVar3[1] = iVar5;
  return 1;
}
