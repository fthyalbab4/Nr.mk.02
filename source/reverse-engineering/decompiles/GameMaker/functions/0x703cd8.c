// rea decompile_all
// name: FUN_00703cd8
// address: 0x703cd8
// body: available
// range: 0x703cd8-0x703f96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00703cd8(int param_1,int *param_2,int param_3,char param_4,int param_5,int param_6,
                 uint param_7,uint param_8,int param_9,int param_10,int param_11)

{
  uint uVar1;
  uint uVar2;
  uint3 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int local_40;
  undefined4 local_3c;
  byte bStack_35;
  int local_2c;
  uint local_24;
  int local_18;
  int local_10;

  if (((((param_2 != (int *)0x0) && (cVar4 = FUN_00462b64(param_2), cVar4 == '\a')) && (0 < param_6)
       ) && ((0 < param_5 && (0 < param_10)))) &&
     ((0 < param_9 &&
      ((iVar5 = (**(code **)(*param_2 + 0x30))(), param_3 < iVar5 &&
       (iVar5 = (**(code **)(*param_2 + 0x24))(), param_11 < iVar5)))))) {
    if ((param_10 == param_6) && (param_9 == param_5)) {
      FUN_00703718(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_11);
    }
    else {
      iVar5 = (param_6 << 0x10) / param_10;
      iVar6 = (param_5 << 0x10) / param_9;
      param_8 = param_8 * 0x10000;
      param_7 = param_7 * 0x10000;
      local_2c = param_10 + param_3 + -1;
      iVar13 = param_9 + param_11 + -1;
      if (param_11 < 0) {
        param_7 = param_7 + -param_11 * iVar6;
        param_11 = 0;
      }
      iVar7 = (**(code **)(*param_2 + 0x24))();
      if (iVar7 <= iVar13) {
        iVar13 = (**(code **)(*param_2 + 0x24))();
        iVar13 = iVar13 + -1;
        if (iVar13 < param_11) {
          return;
        }
      }
      local_10 = param_3;
      if (param_3 < 0) {
        param_8 = param_8 + -param_3 * iVar5;
        local_10 = 0;
      }
      iVar7 = (**(code **)(*param_2 + 0x30))();
      if (iVar7 <= local_2c) {
        local_2c = (**(code **)(*param_2 + 0x30))();
        local_2c = local_2c + -1;
        if (local_2c < local_10) {
          return;
        }
      }
      local_18 = param_11;
      if (param_4 == '\0') {
        local_24 = param_7;
        if (param_11 <= iVar13) {
          local_40 = (iVar13 - param_11) + 1;
          do {
            iVar7 = FUN_00462be8(param_2,local_18);
            iVar13 = *(int *)(param_1 + 4);
            if (local_10 <= local_2c) {
              iVar8 = (local_2c - local_10) + 1;
              uVar11 = param_8;
              iVar12 = local_10;
              do {
                *(undefined4 *)(iVar7 + iVar12 * 4) =
                     *(undefined4 *)
                      (*(int *)(param_1 + 0xc) +
                      ((uVar11 >> 0x10) + (local_24 >> 0x10) * iVar13) * 4);
                uVar11 = uVar11 + iVar5;
                iVar12 = iVar12 + 1;
                iVar8 = iVar8 + -1;
              } while (iVar8 != 0);
            }
            local_24 = local_24 + iVar6;
            local_18 = local_18 + 1;
            local_40 = local_40 + -1;
          } while (local_40 != 0);
        }
      }
      else {
        local_24 = param_7;
        if (param_11 <= iVar13) {
          local_40 = (iVar13 - param_11) + 1;
          do {
            iVar7 = FUN_00462be8(param_2,local_18);
            iVar13 = *(int *)(param_1 + 4);
            if (local_10 <= local_2c) {
              iVar8 = (local_2c - local_10) + 1;
              uVar11 = param_8;
              iVar12 = local_10;
              do {
                uVar1 = *(uint *)(*(int *)(param_1 + 0xc) +
                                 ((uVar11 >> 0x10) + (local_24 >> 0x10) * iVar13) * 4);
                bStack_35 = (byte)(uVar1 >> 0x18);
                if (bStack_35 != 0) {
                  if (bStack_35 == 0xff) {
                    *(uint *)(iVar7 + iVar12 * 4) = uVar1;
                  }
                  else {
                    uVar9 = (uint)bStack_35;
                    iVar10 = 0xff - uVar9;
                    uVar2 = *(uint *)(iVar7 + iVar12 * 4);
                    local_3c._0_2_ =
                         CONCAT11((char)((uVar1 >> 8 & 0xff) * uVar9 + (uVar2 >> 8 & 0xff) * iVar10
                                        >> 8),(char)uVar2);
                    uVar3 = CONCAT12((char)((uVar1 >> 0x10 & 0xff) * uVar9 +
                                            (uVar2 >> 0x10 & 0xff) * iVar10 >> 8),
                                     (undefined2)local_3c);
                    local_3c = (uint)uVar3;
                    local_3c = CONCAT13(0xff,(int3)CONCAT31(uVar3 >> 8,
                                                            (char)((uVar1 & 0xff) * uVar9 +
                                                                   (local_3c & 0xff) * iVar10 >> 8))
                                       );
                    *(uint *)(iVar7 + iVar12 * 4) = local_3c;
                  }
                }
                uVar11 = uVar11 + iVar5;
                iVar12 = iVar12 + 1;
                iVar8 = iVar8 + -1;
              } while (iVar8 != 0);
            }
            local_24 = local_24 + iVar6;
            local_18 = local_18 + 1;
            local_40 = local_40 + -1;
          } while (local_40 != 0);
        }
      }
    }
  }
  return;
}
