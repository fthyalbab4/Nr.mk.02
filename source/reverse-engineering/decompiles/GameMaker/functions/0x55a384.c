// rea decompile_all
// name: FUN_0055a384
// address: 0x55a384
// body: available
// range: 0x55a384-0x55a67d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0055a384(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  undefined4 *local_24;
  uint local_20;
  uint local_1c;
  uint uStack_14;

  iVar2 = param_1[0x6e];
  local_24 = *(undefined4 **)(iVar2 + 0xa4);
  local_1c = 0;
  puVar3 = (undefined4 *)param_1[6];
  pbVar8 = (byte *)*puVar3;
  iVar5 = puVar3[1];
  if (local_24 == (undefined4 *)0x0) {
    if (iVar5 == 0) {
      iVar5 = (*(code *)puVar3[3])(param_1);
      if (iVar5 == 0) {
        return 0;
      }
      iVar5 = puVar3[1];
      pbVar8 = (byte *)*puVar3;
    }
    iVar5 = iVar5 + -1;
    bVar1 = *pbVar8;
    pbVar7 = pbVar8 + 1;
    if (iVar5 == 0) {
      iVar5 = (*(code *)puVar3[3])(param_1);
      if (iVar5 == 0) {
        return 0;
      }
      iVar5 = puVar3[1];
      pbVar7 = (byte *)*puVar3;
    }
    iVar5 = iVar5 + -1;
    pbVar8 = pbVar7 + 1;
    local_1c = ((uint)bVar1 * 0x100 + (uint)*pbVar7) - 2;
    if ((int)local_1c < 0) {
      local_20 = 0;
      uVar9 = 0;
      pbVar7 = (byte *)0x0;
    }
    else {
      if (param_1[0x68] == 0xfe) {
        uStack_14 = *(uint *)(iVar2 + 0x60);
      }
      else {
        uStack_14 = *(uint *)(iVar2 + -0x31c + param_1[0x68] * 4);
      }
      if (local_1c < uStack_14) {
        uStack_14 = local_1c;
      }
      local_24 = (undefined4 *)(**(code **)(param_1[1] + 4))(param_1,1,uStack_14 + 0x14);
      *local_24 = 0;
      *(char *)(local_24 + 1) = (char)param_1[0x68];
      local_24[2] = local_1c;
      local_24[3] = uStack_14;
      pbVar7 = (byte *)(local_24 + 5);
      local_24[4] = pbVar7;
      *(undefined4 **)(iVar2 + 0xa4) = local_24;
      uVar9 = 0;
      *(undefined4 *)(iVar2 + 0xa8) = 0;
      local_20 = uStack_14;
    }
  }
  else {
    uVar9 = *(uint *)(iVar2 + 0xa8);
    local_20 = local_24[3];
    pbVar7 = (byte *)(local_24[4] + uVar9);
  }
  do {
    if (local_20 <= uVar9) {
      if (local_24 != (undefined4 *)0x0) {
        if (param_1[0x4c] == 0) {
          param_1[0x4c] = (int)local_24;
        }
        else {
          puVar4 = (undefined4 *)param_1[0x4c];
          do {
            puVar6 = puVar4;
            puVar4 = (undefined4 *)*puVar6;
          } while (puVar4 != (undefined4 *)0x0);
          *puVar6 = local_24;
        }
        pbVar7 = (byte *)local_24[4];
        local_1c = local_24[2] - local_20;
      }
      *(undefined4 *)(iVar2 + 0xa4) = 0;
      if (param_1[0x68] == 0xe0) {
        FUN_00559ed4(param_1,pbVar7,local_20,local_1c);
      }
      else if (param_1[0x68] == 0xee) {
        FUN_0055a138(param_1,pbVar7,local_20,local_1c);
      }
      else {
        iVar2 = *param_1;
        *(undefined4 *)(iVar2 + 0x14) = 0x5b;
        *(int *)(iVar2 + 0x18) = param_1[0x68];
        *(uint *)(iVar2 + 0x1c) = local_20 + local_1c;
        (**(code **)(*param_1 + 4))(param_1,1);
      }
      *puVar3 = pbVar8;
      puVar3[1] = iVar5;
      if (0 < (int)local_1c) {
        (**(code **)(param_1[6] + 0x10))(param_1,local_1c);
      }
      return 1;
    }
    *puVar3 = pbVar8;
    puVar3[1] = iVar5;
    *(uint *)(iVar2 + 0xa8) = uVar9;
    if (iVar5 == 0) {
      iVar5 = (*(code *)puVar3[3])(param_1);
      if (iVar5 == 0) {
        return 0;
      }
      iVar5 = puVar3[1];
      pbVar8 = (byte *)*puVar3;
    }
    for (; (uVar9 < local_20 && (iVar5 != 0)); iVar5 = iVar5 + -1) {
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      *pbVar7 = bVar1;
      pbVar7 = pbVar7 + 1;
      uVar9 = uVar9 + 1;
    }
  } while( true );
}
