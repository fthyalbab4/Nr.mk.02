// rea decompile_all
// name: FUN_0057bc30
// address: 0x57bc30
// body: available
// range: 0x57bc30-0x57becf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0057bc30(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int local_3c;
  int local_38;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;

  iVar1 = *(int *)(param_1 + 0x1ae);
  iVar8 = *(int *)(param_1 + 0x186);
  uVar6 = *(undefined4 *)(param_1 + 0x18e);
  if (((*(int *)(param_1 + 0x110) == 0) || (*(int *)(iVar1 + 0x28) != 0)) ||
     (iVar5 = FUN_0057b978(param_1), iVar5 != 0)) {
    if (*(int *)(iVar1 + 0x14) == 0) {
      local_2c = **(undefined4 **)(param_1 + 0x14);
      local_28 = (*(undefined4 **)(param_1 + 0x14))[1];
      local_24 = *(undefined4 *)(param_1 + 0x192);
      iVar5 = *(int *)(iVar1 + 0xc);
      iVar9 = *(int *)(iVar1 + 8);
      local_14 = iVar1 + 0x10;
      iVar2 = *param_2;
      iVar3 = *(int *)(iVar1 + 0x3c);
      local_18 = param_1;
      for (local_3c = *(int *)(param_1 + 0x182); local_38 = 0, local_3c <= iVar8;
          local_3c = local_3c + 1) {
        if (iVar5 < 8) {
          iVar5 = FUN_0057c7d8(&local_2c,iVar9,iVar5,0);
          if (iVar5 == 0) {
            return 0;
          }
          iVar5 = local_1c;
          iVar9 = local_20;
          if (7 < local_1c) goto LAB_0057bd46;
          uVar10 = 1;
LAB_0057bd76:
          uVar7 = FUN_0057c8e8(&local_2c,iVar9,iVar5,uVar10,iVar3);
          iVar5 = local_1c;
          iVar9 = local_20;
          if ((int)uVar7 < 0) {
            return 0;
          }
        }
        else {
LAB_0057bd46:
          uVar7 = iVar9 >> ((char)iVar5 - 8U & 0x1f) & 0xff;
          iVar11 = *(int *)(iVar3 + 0xd4 + uVar7 * 4);
          if (iVar11 == 0) {
            uVar10 = 9;
            goto LAB_0057bd76;
          }
          uVar7 = (uint)*(byte *)(iVar3 + 0x4d4 + uVar7);
          iVar5 = iVar5 - iVar11;
        }
        iVar11 = (int)uVar7 >> 4;
        uVar7 = uVar7 & 0xf;
        if (uVar7 == 0) {
          if (iVar11 != 0xf) {
            local_38 = 1 << ((byte)iVar11 & 0x1f);
            if (iVar11 != 0) {
              if ((iVar5 < iVar11) &&
                 (iVar8 = FUN_0057c7d8(&local_2c,iVar9,iVar5,iVar11), iVar5 = local_1c,
                 iVar9 = local_20, iVar8 == 0)) {
                return 0;
              }
              iVar5 = iVar5 - iVar11;
              local_38 = local_38 + (iVar9 >> ((byte)iVar5 & 0x1f) & local_38 - 1U);
            }
            local_38 = local_38 + -1;
            break;
          }
          local_3c = local_3c + 0xf;
        }
        else {
          local_3c = local_3c + iVar11;
          if ((iVar5 < (int)uVar7) &&
             (iVar11 = FUN_0057c7d8(&local_2c,iVar9,iVar5,uVar7), iVar5 = local_1c, iVar9 = local_20
             , iVar11 == 0)) {
            return 0;
          }
          iVar5 = iVar5 - uVar7;
          uVar12 = iVar9 >> ((byte)iVar5 & 0x1f) & (1 << (sbyte)uVar7) - 1U;
          if ((int)uVar12 < *(int *)(&DAT_0077c0b4 + uVar7 * 4)) {
            uVar12 = *(int *)(&DAT_0077c0f4 + uVar7 * 4) + uVar12;
          }
          *(short *)(iVar2 + *(int *)(&DAT_0077c380 + local_3c * 4) * 2) =
               (short)uVar12 << ((byte)uVar6 & 0x1f);
        }
      }
      puVar4 = *(undefined4 **)(param_1 + 0x14);
      *puVar4 = local_2c;
      puVar4[1] = local_28;
      *(undefined4 *)(param_1 + 0x192) = local_24;
      *(int *)(iVar1 + 8) = iVar9;
      *(int *)(iVar1 + 0xc) = iVar5;
    }
    else {
      local_38 = *(int *)(iVar1 + 0x14) + -1;
    }
    *(int *)(iVar1 + 0x14) = local_38;
    *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + -1;
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}
