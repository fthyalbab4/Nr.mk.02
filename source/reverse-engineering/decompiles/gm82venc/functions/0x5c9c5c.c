// rea decompile_all
// name: FUN_005c9c5c
// address: 0x5c9c5c
// body: available
// range: 0x5c9c5c-0x5c9dec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005c9c5c(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;

  puVar2 = (undefined4 *)param_1[5];
  iVar5 = puVar2[1];
  pbVar8 = (byte *)*puVar2;
  if (iVar5 == 0) {
    iVar5 = (*(code *)puVar2[3])(param_1);
    if (iVar5 == 0) {
      return 0;
    }
    iVar5 = puVar2[1];
    pbVar8 = (byte *)*puVar2;
  }
  iVar5 = iVar5 + -1;
  bVar4 = *pbVar8;
  pbVar8 = pbVar8 + 1;
  if (iVar5 == 0) {
    iVar5 = (*(code *)puVar2[3])(param_1);
    if (iVar5 == 0) {
      return 0;
    }
    iVar5 = puVar2[1];
    pbVar8 = (byte *)*puVar2;
  }
  iVar1 = (uint)bVar4 * 0x100 + (uint)*pbVar8;
  do {
    iVar1 = iVar1 + -2;
    pbVar8 = pbVar8 + 1;
    iVar5 = iVar5 + -1;
    if (iVar1 < 1) {
      *puVar2 = pbVar8;
      puVar2[1] = iVar5;
      return 1;
    }
    if (iVar5 == 0) {
      iVar5 = (*(code *)puVar2[3])(param_1);
      if (iVar5 == 0) {
        return 0;
      }
      iVar5 = puVar2[1];
      pbVar8 = (byte *)*puVar2;
    }
    uVar7 = (uint)*pbVar8;
    pbVar8 = pbVar8 + 1;
    iVar5 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar5 = (*(code *)puVar2[3])(param_1);
      if (iVar5 == 0) {
        return 0;
      }
      iVar5 = puVar2[1];
      pbVar8 = (byte *)*puVar2;
    }
    bVar4 = *pbVar8;
    uVar6 = (uint)bVar4;
    iVar3 = *param_1;
    *(undefined4 *)(iVar3 + 0x14) = 0x4e;
    *(uint *)(iVar3 + 0x18) = uVar7;
    *(uint *)(iVar3 + 0x1c) = uVar6;
    (**(code **)(*param_1 + 4))(param_1,1);
    if (0x1f < uVar7) {
      iVar3 = *param_1;
      *(undefined4 *)(iVar3 + 0x14) = 0x1a;
      *(uint *)(iVar3 + 0x18) = uVar7;
      (**(code **)*param_1)();
    }
    if (uVar7 < 0x10) {
      *(byte *)((int)param_1 + uVar7 + 0xe0) = bVar4 & 0xf;
      bVar4 = (byte)((int)uVar6 >> 4);
      *(byte *)((int)param_1 + uVar7 + 0xf0) = bVar4;
      if (bVar4 < *(byte *)((int)param_1 + uVar7 + 0xe0)) {
        iVar3 = *param_1;
        *(undefined4 *)(iVar3 + 0x14) = 0x1b;
        *(uint *)(iVar3 + 0x18) = uVar6;
        (**(code **)*param_1)();
      }
    }
    else {
      *(byte *)((int)param_1 + uVar7 + 0xf0) = bVar4;
    }
  } while( true );
}
