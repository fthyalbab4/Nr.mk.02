// rea decompile_all
// name: FUN_004e3994
// address: 0x4e3994
// body: available
// range: 0x4e3994-0x4e3d3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e3994(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;

  if (((char)param_1[0xa8] != '\0') && (*(int *)(DAT_0068f2e8 + 0x44) != 0)) {
    local_38 = 0;
    if ((char)param_1[0xa8] == '\x02') {
      iVar1 = FUN_004e31a8(*(undefined4 *)(DAT_0068f2e8 + 0x44));
      local_38 = *(int *)(iVar1 + 4);
    }
    else if (((char)param_1[0xa8] == '\x03') && (*(int *)(DAT_0068f2ec + 100) != 0)) {
      iVar1 = FUN_004e31a8(*(undefined4 *)(DAT_0068f2ec + 100));
      local_38 = *(int *)(iVar1 + 4);
    }
    else if ((char)param_1[0xa8] == '\x01') {
      iVar1 = FUN_004e9a10(DAT_0068f2ec);
      local_38 = *(int *)(iVar1 + 4);
    }
    iVar1 = FUN_004e31a8(param_1);
    iVar1 = *(int *)(iVar1 + 4);
    local_24 = FUN_004e86fc(DAT_0068f2ec);
    if (-1 < local_24 + -1) {
      iVar10 = 0;
      do {
        iVar2 = FUN_004e86e8(DAT_0068f2ec,iVar10);
        if (*(int *)(iVar2 + 4) == local_38) {
          if (local_38 == iVar1) {
            if (*(char *)((int)param_1 + 0x29f) == '\x04') {
              uVar4 = FUN_004e86e8(DAT_0068f2ec,iVar10);
              FUN_004e82e4(uVar4,&local_20);
              uVar8 = (local_14 - local_1c) - param_1[0x13];
              iVar2 = (int)uVar8 >> 1;
              if (iVar2 < 0) {
                iVar2 = iVar2 + (uint)((uVar8 & 1) != 0);
              }
              uVar8 = (local_18 - local_20) - param_1[0x12];
              iVar3 = (int)uVar8 >> 1;
              if (iVar3 < 0) {
                iVar3 = iVar3 + (uint)((uVar8 & 1) != 0);
              }
              (**(code **)(*param_1 + 0x98))
                        (param_1,iVar3 + local_20,iVar2 + local_1c,param_1[0x13],param_1[0x12]);
            }
          }
          else {
            iVar2 = FUN_004e86fc(DAT_0068f2ec);
            if (-1 < iVar2 + -1) {
              local_30 = 0;
              do {
                iVar3 = FUN_004e86e8(DAT_0068f2ec,local_30);
                if (*(int *)(iVar3 + 4) == iVar1) {
                  if (*(char *)((int)param_1 + 0x29f) == '\x04') {
                    uVar4 = FUN_004e86e8(DAT_0068f2ec,iVar10);
                    FUN_004e82e4(uVar4,&local_20);
                    uVar8 = (local_14 - local_1c) - param_1[0x13];
                    iVar3 = (int)uVar8 >> 1;
                    if (iVar3 < 0) {
                      iVar3 = iVar3 + (uint)((uVar8 & 1) != 0);
                    }
                    uVar8 = (local_18 - local_20) - param_1[0x12];
                    iVar9 = (int)uVar8 >> 1;
                    if (iVar9 < 0) {
                      iVar9 = iVar9 + (uint)((uVar8 & 1) != 0);
                    }
                    (**(code **)(*param_1 + 0x98))
                              (param_1,iVar9 + local_20,iVar3 + local_1c,param_1[0x13],param_1[0x12]
                              );
                  }
                  else if (*(char *)((int)param_1 + 0x29f) == '\x06') {
                    FUN_004e86e8(DAT_0068f2ec,iVar10);
                    iVar3 = FUN_004e8280();
                    FUN_004e86e8(DAT_0068f2ec,iVar10);
                    iVar9 = FUN_004e8264();
                    iVar5 = iVar9 - param_1[0x13] >> 1;
                    if (iVar5 < 0) {
                      iVar5 = iVar5 + (uint)((iVar9 - param_1[0x13] & 1U) != 0);
                    }
                    FUN_004e86e8(DAT_0068f2ec,iVar10);
                    iVar9 = FUN_004e824c();
                    FUN_004e86e8(DAT_0068f2ec,iVar10);
                    iVar6 = FUN_004e8298();
                    iVar7 = iVar6 - param_1[0x12] >> 1;
                    if (iVar7 < 0) {
                      iVar7 = iVar7 + (uint)((iVar6 - param_1[0x12] & 1U) != 0);
                    }
                    (**(code **)(*param_1 + 0x98))(param_1,iVar9 + iVar7,iVar3 + iVar5);
                  }
                  else {
                    FUN_004e86e8(DAT_0068f2ec,iVar10);
                    iVar3 = FUN_004e824c();
                    iVar9 = FUN_004e1ad4(param_1);
                    FUN_004e86e8(DAT_0068f2ec,local_30);
                    local_2c = FUN_004e824c();
                    local_2c = (iVar3 + iVar9) - local_2c;
                    FUN_004e86e8(DAT_0068f2ec,iVar10);
                    iVar3 = FUN_004e824c();
                    FUN_004e86e8(DAT_0068f2ec,iVar10);
                    iVar9 = FUN_004e8298();
                    if (iVar3 + iVar9 < local_2c + param_1[0x12]) {
                      FUN_004e86e8(DAT_0068f2ec,iVar10);
                      iVar3 = FUN_004e824c();
                      FUN_004e86e8(DAT_0068f2ec,iVar10);
                      iVar9 = FUN_004e8298();
                      local_2c = (iVar3 + iVar9) - param_1[0x12];
                    }
                    FUN_004e86e8(DAT_0068f2ec,iVar10);
                    iVar3 = FUN_004e8280();
                    iVar9 = FUN_004e1af4(param_1);
                    FUN_004e86e8(DAT_0068f2ec,local_30);
                    local_28 = FUN_004e8280();
                    local_28 = (iVar3 + iVar9) - local_28;
                    FUN_004e86e8(DAT_0068f2ec,iVar10);
                    iVar3 = FUN_004e8280();
                    FUN_004e86e8(DAT_0068f2ec,iVar10);
                    iVar9 = FUN_004e8264();
                    if (iVar3 + iVar9 < local_28 + param_1[0x13]) {
                      FUN_004e86e8(DAT_0068f2ec,iVar10);
                      iVar3 = FUN_004e8280();
                      FUN_004e86e8(DAT_0068f2ec,iVar10);
                      iVar9 = FUN_004e8264();
                      local_28 = (iVar3 + iVar9) - param_1[0x13];
                    }
                    (**(code **)(*param_1 + 0x98))
                              (param_1,local_2c,local_28,param_1[0x13],param_1[0x12]);
                  }
                }
                local_30 = local_30 + 1;
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
            }
          }
        }
        iVar10 = iVar10 + 1;
        local_24 = local_24 + -1;
      } while (local_24 != 0);
    }
  }
  return;
}
