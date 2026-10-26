// rea decompile_all
// name: FUN_00703fc4
// address: 0x703fc4
// body: available
// range: 0x703fc4-0x70436f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00703fc4(int param_1,int *param_2,int param_3,int param_4,int param_5,char param_6,
                 char param_7,char param_8,int param_9,int param_10,uint param_11,uint param_12,
                 float param_13,float param_14,int param_15)

{
  uint uVar1;
  uint uVar2;
  uint3 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int local_58;
  undefined4 local_48;
  byte bStack_41;
  uint local_24;
  int local_18;
  int local_10;

  if (((((param_2 != (int *)0x0) && (cVar4 = FUN_00462b64(param_2), cVar4 == '\a')) &&
       (0 < param_10)) && ((0 < param_9 && (0.0 < param_14)))) &&
     ((0.0 < param_13 &&
      ((iVar5 = (**(code **)(*param_2 + 0x30))(), param_3 < iVar5 &&
       (iVar5 = (**(code **)(*param_2 + 0x24))(), param_15 < iVar5)))))) {
    iVar5 = FUN_00410538();
    iVar6 = FUN_00410538();
    param_12 = param_12 * 0x10000;
    param_11 = param_11 * 0x10000;
    iVar7 = FUN_00410538();
    iVar8 = FUN_00410538();
    if (((param_6 != '\0') || (-1 < iVar8 + -1)) && ((param_7 != '\0' || (-1 < iVar7 + -1)))) {
      if (param_15 < 0) {
        param_11 = (int)(-param_15 * iVar6 + param_11) % (param_9 << 0x10);
        param_15 = 0;
      }
      if ((iVar8 + -1 < param_4) || (param_15 <= param_4 + -1)) {
        local_10 = param_3;
        if (param_3 < 0) {
          param_12 = (int)(param_12 + -param_3 * iVar5) % (param_10 << 0x10);
          local_10 = 0;
        }
        if ((iVar7 + -1 < param_5) || (local_10 <= param_5 + -1)) {
          local_18 = param_15;
          if (param_8 == '\0') {
            local_24 = param_11;
            if (param_15 <= param_4 + -1) {
              local_58 = ((param_4 + -1) - param_15) + 1;
              do {
                iVar8 = FUN_00462be8(param_2,local_18);
                iVar9 = (local_24 >> 0x10) * *(int *)(param_1 + 4);
                uVar12 = param_12;
                for (iVar7 = local_10; iVar7 < param_5 + -1; iVar7 = iVar7 + 1) {
                  iVar10 = (**(code **)(*param_2 + 0x30))();
                  if (iVar10 < iVar7) {
                    return;
                  }
                  if (param_10 * param_9 < (int)((uVar12 >> 0x10) + iVar9)) {
                    return;
                  }
                  *(undefined4 *)(iVar8 + iVar7 * 4) =
                       *(undefined4 *)(*(int *)(param_1 + 0xc) + ((uVar12 >> 0x10) + iVar9) * 4);
                  uVar12 = uVar12 + iVar5;
                  if (param_10 <= (int)(uVar12 >> 0x10)) {
                    if (param_7 == '\0') break;
                    uVar12 = 0;
                  }
                }
                local_24 = local_24 + iVar6;
                if (param_9 <= (int)(local_24 >> 0x10)) {
                  if (param_6 == '\0') {
                    return;
                  }
                  local_24 = local_24 + param_9 * -0x10000;
                }
                local_18 = local_18 + 1;
                local_58 = local_58 + -1;
              } while (local_58 != 0);
            }
          }
          else {
            local_24 = param_11;
            if (param_15 <= param_4 + -1) {
              local_58 = ((param_4 + -1) - param_15) + 1;
              do {
                iVar9 = FUN_00462be8(param_2,local_18);
                iVar7 = *(int *)(param_1 + 4);
                uVar12 = param_12;
                for (iVar8 = local_10; iVar8 < param_5; iVar8 = iVar8 + 1) {
                  uVar1 = *(uint *)(*(int *)(param_1 + 0xc) +
                                   ((uVar12 >> 0x10) + (local_24 >> 0x10) * iVar7) * 4);
                  bStack_41 = (byte)(uVar1 >> 0x18);
                  if (bStack_41 != 0) {
                    if (bStack_41 == 0xff) {
                      *(uint *)(iVar9 + iVar8 * 4) = uVar1;
                    }
                    else {
                      uVar11 = (uint)bStack_41;
                      iVar10 = 0xff - uVar11;
                      uVar2 = *(uint *)(iVar9 + iVar8 * 4);
                      local_48._0_2_ =
                           CONCAT11((char)((uVar1 >> 8 & 0xff) * uVar11 +
                                           (uVar2 >> 8 & 0xff) * iVar10 >> 8),(char)uVar2);
                      uVar3 = CONCAT12((char)((uVar1 >> 0x10 & 0xff) * uVar11 +
                                              (uVar2 >> 0x10 & 0xff) * iVar10 >> 8),
                                       (undefined2)local_48);
                      local_48 = (uint)uVar3;
                      local_48 = CONCAT13(0xff,(int3)CONCAT31(uVar3 >> 8,
                                                              (char)((uVar1 & 0xff) * uVar11 +
                                                                     (local_48 & 0xff) * iVar10 >> 8
                                                                    )));
                      *(uint *)(iVar9 + iVar8 * 4) = local_48;
                    }
                  }
                  uVar12 = uVar12 + iVar5;
                  if (param_10 <= (int)(uVar12 >> 0x10)) {
                    if (param_7 == '\0') break;
                    uVar12 = 0;
                  }
                }
                local_24 = local_24 + iVar6;
                if (param_9 <= (int)(local_24 >> 0x10)) {
                  if (param_6 == '\0') {
                    return;
                  }
                  local_24 = 0;
                }
                local_18 = local_18 + 1;
                local_58 = local_58 + -1;
              } while (local_58 != 0);
            }
          }
        }
      }
    }
  }
  return;
}
