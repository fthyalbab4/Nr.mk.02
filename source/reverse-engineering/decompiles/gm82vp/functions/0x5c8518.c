// rea decompile_all
// name: FUN_005c8518
// address: 0x5c8518
// body: available
// range: 0x5c8518-0x5c8aeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c8518(int param_1,int param_2,short *param_3,int param_4,int *param_5)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_140 [16];
  int local_100 [8];
  int local_e0 [8];
  int local_c0 [8];
  int local_a0 [8];
  int local_80 [8];
  int local_60 [8];
  int *local_40;
  int local_3c;
  int local_38;
  undefined1 *local_34;
  int *local_30;
  short *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_38 = *(int *)(param_1 + 0x136) + 0x80;
  local_30 = *(int **)(param_2 + 0x50);
  piVar2 = local_140;
  local_3c = 8;
  local_2c = param_3;
  do {
    if ((((((local_2c[8] == 0 && local_2c[0x10] == 0) && local_2c[0x18] == 0) && local_2c[0x20] == 0
          ) && local_2c[0x28] == 0) && local_2c[0x30] == 0) && local_2c[0x38] == 0) {
      iVar3 = (int)*local_2c * *local_30 * 4;
      *piVar2 = iVar3;
      piVar2[8] = iVar3;
      piVar2[0x10] = iVar3;
      piVar2[0x18] = iVar3;
      piVar2[0x20] = iVar3;
      piVar2[0x28] = iVar3;
      piVar2[0x30] = iVar3;
      piVar2[0x38] = iVar3;
      local_2c = local_2c + 1;
      local_30 = local_30 + 1;
    }
    else {
      iVar3 = ((int)local_2c[0x10] * local_30[0x10] + (int)local_2c[0x30] * local_30[0x30]) * 0x1151
      ;
      iVar8 = (int)local_2c[0x30] * local_30[0x30] * -0x3b21 + iVar3;
      iVar3 = (int)local_2c[0x10] * local_30[0x10] * 0x187e + iVar3;
      iVar4 = ((int)*local_2c * *local_30 + (int)local_2c[0x20] * local_30[0x20]) * 0x2000;
      iVar6 = ((int)*local_2c * *local_30 - (int)local_2c[0x20] * local_30[0x20]) * 0x2000;
      local_10 = iVar4 + iVar3;
      local_1c = iVar4 - iVar3;
      local_14 = iVar6 + iVar8;
      local_18 = iVar6 - iVar8;
      iVar4 = (int)local_2c[0x38] * local_30[0x38];
      iVar3 = (int)local_2c[0x28] * local_30[0x28];
      iVar8 = (int)local_2c[0x18] * local_30[0x18];
      iVar7 = (int)local_2c[8] * local_30[8];
      iVar5 = (iVar4 + iVar7) * -0x1ccd;
      local_28 = (iVar3 + iVar7 + iVar4 + iVar8) * 0x25a1;
      local_20 = (iVar3 + iVar8) * -0x5203;
      iVar6 = (iVar4 + iVar8) * -0x3ec5 + local_28;
      local_24 = (iVar3 + iVar7) * -0xc7c + local_28;
      local_8 = iVar4 * 0x98e + iVar6 + iVar5;
      local_c = iVar3 * 0x41b3 + local_20 + local_24;
      iVar3 = iVar8 * 0x6254 + iVar6 + local_20;
      iVar8 = iVar7 * 0x300b + iVar5 + local_24;
      *piVar2 = local_10 + iVar8 + 0x400 >> 0xb;
      piVar2[0x38] = (local_10 - iVar8) + 0x400 >> 0xb;
      piVar2[8] = local_14 + iVar3 + 0x400 >> 0xb;
      piVar2[0x30] = (local_14 - iVar3) + 0x400 >> 0xb;
      piVar2[0x10] = local_18 + local_c + 0x400 >> 0xb;
      piVar2[0x28] = (local_18 - local_c) + 0x400 >> 0xb;
      piVar2[0x18] = local_1c + local_8 + 0x400 >> 0xb;
      piVar2[0x20] = (local_1c - local_8) + 0x400 >> 0xb;
      local_2c = local_2c + 1;
      local_30 = local_30 + 1;
    }
    piVar2 = piVar2 + 1;
    local_3c = local_3c + -1;
  } while (0 < local_3c);
  piVar2 = local_140;
  local_3c = 0;
  local_40 = param_5;
  do {
    local_34 = (undefined1 *)(*local_40 + param_4);
    if ((((((piVar2[1] == 0 && piVar2[2] == 0) && piVar2[3] == 0) && piVar2[4] == 0) &&
         piVar2[5] == 0) && piVar2[6] == 0) && piVar2[7] == 0) {
      uVar1 = *(undefined1 *)(local_38 + (*piVar2 + 0x10 >> 5 & 0x3ffU));
      *local_34 = uVar1;
      local_34[1] = uVar1;
      local_34[2] = uVar1;
      local_34[3] = uVar1;
      local_34[4] = uVar1;
      local_34[5] = uVar1;
      local_34[6] = uVar1;
      local_34[7] = uVar1;
    }
    else {
      local_20 = piVar2[2];
      local_1c = (local_20 + piVar2[6]) * 0x1151;
      local_18 = piVar2[6] * -0x3b21 + local_1c;
      local_1c = local_20 * 0x187e + local_1c;
      local_8 = (*piVar2 + piVar2[4]) * 0x2000;
      local_c = (*piVar2 - piVar2[4]) * 0x2000;
      local_10 = local_8 + local_1c;
      local_1c = local_8 - local_1c;
      local_14 = local_c + local_18;
      local_18 = local_c - local_18;
      local_8 = piVar2[7];
      local_c = piVar2[5];
      iVar3 = piVar2[3];
      iVar8 = piVar2[1];
      iVar6 = (local_8 + iVar8) * -0x1ccd;
      local_28 = (local_c + iVar8 + local_8 + iVar3) * 0x25a1;
      local_20 = (local_c + iVar3) * -0x5203;
      iVar4 = (local_8 + iVar3) * -0x3ec5 + local_28;
      local_24 = (local_c + iVar8) * -0xc7c + local_28;
      local_8 = local_8 * 0x98e + iVar4 + iVar6;
      local_c = local_c * 0x41b3 + local_20 + local_24;
      iVar3 = iVar3 * 0x6254 + iVar4 + local_20;
      iVar8 = iVar8 * 0x300b + iVar6 + local_24;
      *local_34 = *(undefined1 *)(local_38 + (local_10 + iVar8 + 0x20000 >> 0x12 & 0x3ffU));
      local_34[7] = *(undefined1 *)(local_38 + ((local_10 - iVar8) + 0x20000 >> 0x12 & 0x3ffU));
      local_34[1] = *(undefined1 *)(local_38 + (local_14 + iVar3 + 0x20000 >> 0x12 & 0x3ffU));
      local_34[6] = *(undefined1 *)(local_38 + ((local_14 - iVar3) + 0x20000 >> 0x12 & 0x3ffU));
      local_34[2] = *(undefined1 *)(local_38 + (local_18 + local_c + 0x20000 >> 0x12 & 0x3ffU));
      local_34[5] = *(undefined1 *)(local_38 + ((local_18 - local_c) + 0x20000 >> 0x12 & 0x3ffU));
      local_34[3] = *(undefined1 *)(local_38 + (local_1c + local_8 + 0x20000 >> 0x12 & 0x3ffU));
      local_34[4] = *(undefined1 *)(local_38 + ((local_1c - local_8) + 0x20000 >> 0x12 & 0x3ffU));
    }
    piVar2 = piVar2 + 8;
    local_3c = local_3c + 1;
    local_40 = local_40 + 1;
  } while (local_3c < 8);
  return;
}
