// rea decompile_all
// name: FUN_0058399c
// address: 0x58399c
// body: available
// range: 0x58399c-0x583c1d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0058399c(int *param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int local_2c;
  int iStack_28;
  byte *pbStack_24;
  byte bStack_20;
  char cStack_1f;
  char cStack_1e;
  char cStack_1d;
  char cStack_1c;
  byte bStack_1b;
  byte bStack_1a;
  undefined1 uStack_19;
  byte bStack_18;
  byte bStack_17;
  byte bStack_16;
  byte bStack_15;
  byte bStack_14;
  byte bStack_13;

  puVar3 = (undefined4 *)param_1[5];
  iVar5 = puVar3[1];
  pbVar6 = (byte *)*puVar3;
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
  local_2c = iVar1 + -2;
  if (local_2c < 0xe) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x4c;
    *(int *)(iVar1 + 0x18) = local_2c;
    (**(code **)(*param_1 + 4))(param_1,1);
  }
  else {
    pbStack_24 = &bStack_20;
    iStack_28 = 0;
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
      *pbStack_24 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      iStack_28 = iStack_28 + 1;
      pbStack_24 = pbStack_24 + 1;
    } while (iStack_28 < 0xe);
    local_2c = iVar1 + -0x10;
    if ((((bStack_20 == 0x4a) && (cStack_1f == 'F')) && (cStack_1e == 'I')) &&
       ((cStack_1d == 'F' && (cStack_1c == '\0')))) {
      if (bStack_1b == 1) {
        if (2 < bStack_1a) {
          iVar1 = *param_1;
          *(undefined4 *)(iVar1 + 0x14) = 0x58;
          *(undefined4 *)(iVar1 + 0x18) = 1;
          *(uint *)(iVar1 + 0x1c) = (uint)bStack_1a;
          (**(code **)(*param_1 + 4))(param_1,1);
        }
      }
      else {
        iVar1 = *param_1;
        *(undefined4 *)(iVar1 + 0x14) = 0x73;
        *(uint *)(iVar1 + 0x18) = (uint)bStack_1b;
        *(uint *)(iVar1 + 0x1c) = (uint)bStack_1a;
        (**(code **)(*param_1 + 4))(param_1,0xffffffff);
      }
      param_1[0x45] = 1;
      *(undefined1 *)(param_1 + 0x46) = uStack_19;
      *(ushort *)((int)param_1 + 0x119) = (ushort)bStack_18 * 0x100 + (ushort)bStack_17;
      *(ushort *)((int)param_1 + 0x11b) = (ushort)bStack_16 * 0x100 + (ushort)bStack_15;
      iVar1 = *param_1;
      *(uint *)(iVar1 + 0x18) = (uint)*(ushort *)((int)param_1 + 0x119);
      *(uint *)(iVar1 + 0x1c) = (uint)*(ushort *)((int)param_1 + 0x11b);
      *(uint *)(iVar1 + 0x20) = (uint)*(byte *)(param_1 + 0x46);
      *(undefined4 *)(*param_1 + 0x14) = 0x56;
      (**(code **)(*param_1 + 4))(param_1,1);
      if (bStack_14 != 0 || bStack_13 != 0) {
        iVar1 = *param_1;
        *(undefined4 *)(iVar1 + 0x14) = 0x59;
        *(uint *)(iVar1 + 0x18) = (uint)bStack_14;
        *(uint *)(iVar1 + 0x1c) = (uint)bStack_13;
        (**(code **)(*param_1 + 4))(param_1,1);
      }
      if ((uint)bStack_14 * (uint)bStack_13 * 3 != local_2c) {
        iVar1 = *param_1;
        *(undefined4 *)(iVar1 + 0x14) = 0x57;
        *(int *)(iVar1 + 0x18) = local_2c;
        (**(code **)(*param_1 + 4))(param_1,1);
      }
    }
    else {
      iVar4 = *param_1;
      *(undefined4 *)(iVar4 + 0x14) = 0x4c;
      *(int *)(iVar4 + 0x18) = iVar1 + -2;
      (**(code **)(*param_1 + 4))(param_1,1);
    }
  }
  *puVar3 = pbVar6;
  puVar3[1] = iVar5;
  if (0 < local_2c) {
    (**(code **)(param_1[5] + 0x10))(param_1,local_2c);
  }
  return 1;
}
