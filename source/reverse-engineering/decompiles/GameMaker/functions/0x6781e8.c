// rea decompile_all
// name: FUN_006781e8
// address: 0x6781e8
// body: available
// range: 0x6781e8-0x67846a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006781e8(int *param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uStack_40;
  uint uStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;

  if (param_1[0x6d] != 0) {
    (**(code **)(*param_1 + 0xd0))(param_1,&uStack_40);
    (**(code **)(**(int **)(param_1[0x6a] + 0x40) + 8))
              (*(int **)(param_1[0x6a] + 0x40),param_1[0x19]);
    FUN_00679ec8(param_1);
    uVar3 = param_1[0x12];
    uVar4 = param_1[0x13];
    bVar1 = *(byte *)((int)param_1 + 0x1b9);
    iVar5 = (int)uVar4 >> 1;
    if (bVar1 < 2) {
      iVar7 = (int)uStack_3c >> 1;
      if (bVar1 == 0) {
        iStack_38 = param_1[0x71];
        iStack_34 = iVar5;
        if (iVar5 < 0) {
          iStack_34 = iVar5 + (uint)((uVar4 & 1) != 0);
        }
        if (iVar7 < 0) {
          iVar7 = iVar7 + (uint)((uStack_3c & 1) != 0);
        }
        iStack_34 = iStack_34 - iVar7;
        param_1[0x6f] = iStack_38;
        param_1[0x70] = iStack_34;
        iVar6 = FUN_006781b8(param_1,&uStack_40);
        iVar7 = param_1[0x71];
        uVar3 = FUN_00678170(param_1);
        iVar8 = (int)uVar3 >> 1;
        if (iVar8 < 0) {
          iVar8 = iVar8 + (uint)((uVar3 & 1) != 0);
        }
        if (iVar5 < 0) {
          iVar5 = iVar5 + (uint)((uVar4 & 1) != 0);
        }
        FUN_0040c268(param_1 + 0x77,iVar6 + iVar7 + uStack_40,iVar5 - iVar8);
      }
      else {
        iStack_30 = (uVar3 - param_1[0x73]) - uStack_40;
        iStack_2c = iVar5;
        if (iVar5 < 0) {
          iStack_2c = iVar5 + (uint)((uVar4 & 1) != 0);
        }
        if (iVar7 < 0) {
          iVar7 = iVar7 + (uint)((uStack_3c & 1) != 0);
        }
        iStack_2c = iStack_2c - iVar7;
        param_1[0x6f] = iStack_30;
        param_1[0x70] = iStack_2c;
        uVar3 = FUN_00678170(param_1);
        iVar7 = (int)uVar3 >> 1;
        if (iVar7 < 0) {
          iVar7 = iVar7 + (uint)((uVar3 & 1) != 0);
        }
        if (iVar5 < 0) {
          iVar5 = iVar5 + (uint)((uVar4 & 1) != 0);
        }
        FUN_0040c268(param_1 + 0x77,param_1[0x71],iVar5 - iVar7);
      }
    }
    else if ((byte)(bVar1 - 2) < 2) {
      iVar7 = (int)uVar3 >> 1;
      if (bVar1 == 2) {
        cVar2 = (**(code **)(*param_1 + 0xac))();
        iVar6 = (int)uStack_40 >> 1;
        if (cVar2 == '\0') {
          iStack_20 = iVar7;
          if (iVar7 < 0) {
            iStack_20 = iVar7 + (uint)((uVar3 & 1) != 0);
          }
          if (iVar6 < 0) {
            iVar6 = iVar6 + (uint)((uStack_40 & 1) != 0);
          }
          iStack_20 = iStack_20 - iVar6;
          if (iVar5 < 0) {
            iVar5 = iVar5 + (uint)((uVar4 & 1) != 0);
          }
          iStack_1c = (int)uStack_3c >> 1;
          if (iStack_1c < 0) {
            iStack_1c = iStack_1c + (uint)((uStack_3c & 1) != 0);
          }
          iStack_1c = iVar5 - iStack_1c;
          param_1[0x6f] = iStack_20;
          param_1[0x70] = iStack_1c;
        }
        else {
          iStack_28 = iVar7;
          if (iVar7 < 0) {
            iStack_28 = iVar7 + (uint)((uVar3 & 1) != 0);
          }
          if (iVar6 < 0) {
            iVar6 = iVar6 + (uint)((uStack_40 & 1) != 0);
          }
          iStack_28 = iStack_28 - iVar6;
          iStack_24 = param_1[0x72];
          param_1[0x6f] = iStack_28;
          param_1[0x70] = iStack_24;
        }
        uVar4 = FUN_00678128(param_1);
        iVar5 = (int)uVar4 >> 1;
        if (iVar5 < 0) {
          iVar5 = iVar5 + (uint)((uVar4 & 1) != 0);
        }
        if (iVar7 < 0) {
          iVar7 = iVar7 + (uint)((uVar3 & 1) != 0);
        }
        FUN_0040c268(param_1 + 0x77,iVar7 - iVar5,param_1[0x70] + uStack_3c + param_1[0x76]);
      }
      else {
        uVar4 = FUN_00678128(param_1,bVar1 - 4);
        iVar5 = (int)uVar4 >> 1;
        if (iVar5 < 0) {
          iVar5 = iVar5 + (uint)((uVar4 & 1) != 0);
        }
        if (iVar7 < 0) {
          iVar7 = iVar7 + (uint)((uVar3 & 1) != 0);
        }
        FUN_0040c268(param_1 + 0x77,iVar7 - iVar5,param_1[0x72]);
        iVar5 = FUN_006781b8(param_1,&uStack_40);
        iVar6 = FUN_00678170(param_1);
        iVar8 = (int)uStack_40 >> 1;
        if (iVar8 < 0) {
          iVar8 = iVar8 + (uint)((uStack_40 & 1) != 0);
        }
        param_1[0x6f] = iVar7 - iVar8;
        param_1[0x70] = iVar5 + iVar6 + param_1[0x78];
      }
    }
  }
  return;
}
