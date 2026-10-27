// rea decompile_all
// name: FUN_005c9a84
// address: 0x5c9a84
// body: available
// range: 0x5c9a84-0x5c9c5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005c9a84(int *param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int local_38;
  int iStack_34;
  byte *pbStack_20;
  byte bStack_1c;
  char cStack_1b;
  char cStack_1a;
  char cStack_19;
  char cStack_18;
  byte bStack_17;
  byte bStack_16;
  byte bStack_15;
  byte bStack_14;
  byte bStack_13;
  byte bStack_12;
  byte bStack_11;

  puVar3 = (undefined4 *)param_1[5];
  pbVar6 = (byte *)*puVar3;
  iVar5 = puVar3[1];
  if (iVar5 == 0) {
    iVar5 = (*(code *)puVar3[3])(param_1);
    if (iVar5 == 0) {
      return 0;
    }
    pbVar6 = (byte *)*puVar3;
    iVar5 = puVar3[1];
  }
  iVar5 = iVar5 + -1;
  bVar2 = *pbVar6;
  pbVar6 = pbVar6 + 1;
  if (iVar5 == 0) {
    iVar5 = (*(code *)puVar3[3])(param_1);
    if (iVar5 == 0) {
      return 0;
    }
    pbVar6 = (byte *)*puVar3;
    iVar5 = puVar3[1];
  }
  iVar5 = iVar5 + -1;
  iVar1 = (uint)bVar2 * 0x100 + (uint)*pbVar6;
  pbVar6 = pbVar6 + 1;
  local_38 = iVar1 + -2;
  if (local_38 < 0xc) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x4d;
    *(int *)(iVar1 + 0x18) = local_38;
    (**(code **)(*param_1 + 4))(param_1,1);
  }
  else {
    pbStack_20 = &bStack_1c;
    iStack_34 = 0;
    do {
      if (iVar5 == 0) {
        iVar5 = (*(code *)puVar3[3])(param_1);
        if (iVar5 == 0) {
          return 0;
        }
        pbVar6 = (byte *)*puVar3;
        iVar5 = puVar3[1];
      }
      iVar5 = iVar5 + -1;
      *pbStack_20 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      iStack_34 = iStack_34 + 1;
      pbStack_20 = pbStack_20 + 1;
    } while (iStack_34 < 0xc);
    local_38 = iVar1 + -0xe;
    if ((((bStack_1c == 0x41) && (cStack_1b == 'd')) && (cStack_1a == 'o')) &&
       ((cStack_19 == 'b' && (cStack_18 == 'e')))) {
      iVar1 = *param_1;
      *(uint *)(iVar1 + 0x18) = (uint)bStack_17 * 0x100 + (uint)bStack_16;
      *(uint *)(iVar1 + 0x1c) = (uint)bStack_15 * 0x100 + (uint)bStack_14;
      *(uint *)(iVar1 + 0x20) = (uint)bStack_13 * 0x100 + (uint)bStack_12;
      *(uint *)(iVar1 + 0x24) = (uint)bStack_11;
      *(undefined4 *)(*param_1 + 0x14) = 0x4b;
      (**(code **)(*param_1 + 4))(param_1,1);
      *(undefined4 *)((int)param_1 + 0x11d) = 1;
      *(byte *)((int)param_1 + 0x121) = bStack_11;
    }
    else {
      iVar4 = *param_1;
      *(undefined4 *)(iVar4 + 0x14) = 0x4d;
      *(int *)(iVar4 + 0x18) = iVar1 + -2;
      (**(code **)(*param_1 + 4))(param_1,1);
    }
  }
  *puVar3 = pbVar6;
  puVar3[1] = iVar5;
  if (0 < local_38) {
    (**(code **)(param_1[5] + 0x10))(param_1,local_38);
  }
  return 1;
}
