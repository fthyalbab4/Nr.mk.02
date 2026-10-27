// rea decompile_all
// name: FUN_0055824c
// address: 0x55824c
// body: available
// range: 0x55824c-0x55867e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055824c(int param_1,int param_2,short *param_3,int param_4,int *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  undefined1 *puVar7;
  int iVar8;
  float local_154 [16];
  float local_114 [8];
  float local_f4 [8];
  float local_d4 [8];
  float local_b4 [8];
  float local_94 [8];
  float local_74 [8];
  int *local_54;
  float local_50;
  int local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;

  iVar8 = 8;
  pfVar6 = local_154;
  local_4c = *(int *)(param_1 + 0x144) + 0x80;
  pfVar5 = *(float **)(param_2 + 0x50);
  do {
    if ((((param_3[8] == 0) && (param_3[0x10] == 0)) && (param_3[0x18] == 0)) &&
       (((param_3[0x20] == 0 && (param_3[0x28] == 0)) &&
        ((param_3[0x30] == 0 && (param_3[0x38] == 0)))))) {
      local_50 = (float)*param_3 * *pfVar5;
      *pfVar6 = (float)*param_3 * *pfVar5;
      pfVar6[8] = local_50;
      pfVar6[0x10] = local_50;
      pfVar6[0x18] = local_50;
      pfVar6[0x20] = local_50;
      pfVar6[0x28] = local_50;
      pfVar6[0x30] = local_50;
      pfVar6[0x38] = local_50;
    }
    else {
      fVar1 = (float)*param_3 * *pfVar5 + (float)param_3[0x20] * pfVar5[0x20];
      fVar2 = (float)*param_3 * *pfVar5 - (float)param_3[0x20] * pfVar5[0x20];
      local_34 = (float)param_3[0x10] * pfVar5[0x10] + (float)param_3[0x30] * pfVar5[0x30];
      fVar3 = ((float)param_3[0x10] * pfVar5[0x10] - (float)param_3[0x30] * pfVar5[0x30]) *
              1.4142135 - local_34;
      local_8 = fVar1 + local_34;
      local_14 = fVar1 - local_34;
      local_c = fVar2 + fVar3;
      local_10 = fVar2 - fVar3;
      local_48 = (float)param_3[0x28] * pfVar5[0x28] + (float)param_3[0x18] * pfVar5[0x18];
      local_3c = (float)param_3[0x28] * pfVar5[0x28] - (float)param_3[0x18] * pfVar5[0x18];
      local_40 = (float)param_3[8] * pfVar5[8] + (float)param_3[0x38] * pfVar5[0x38];
      local_44 = (float)param_3[8] * pfVar5[8] - (float)param_3[0x38] * pfVar5[0x38];
      local_24 = local_40 + local_48;
      local_2c = (local_40 - local_48) * 1.4142135;
      local_38 = (local_3c + local_44) * 1.847759;
      local_28 = local_44 * 1.0823922 - local_38;
      local_30 = local_3c * -2.613126 + local_38;
      local_20 = local_30 - local_24;
      local_1c = local_2c - local_20;
      local_18 = local_28 + local_1c;
      *pfVar6 = local_8 + local_24;
      pfVar6[0x38] = local_8 - local_24;
      pfVar6[8] = local_c + local_20;
      pfVar6[0x30] = local_c - local_20;
      pfVar6[0x10] = local_10 + local_1c;
      pfVar6[0x28] = local_10 - local_1c;
      pfVar6[0x20] = local_14 + local_18;
      pfVar6[0x18] = local_14 - local_18;
    }
    pfVar6 = pfVar6 + 1;
    pfVar5 = pfVar5 + 1;
    param_3 = param_3 + 1;
    iVar8 = iVar8 + -1;
  } while (0 < iVar8);
  pfVar6 = local_154;
  iVar8 = 0;
  local_54 = param_5;
  do {
    local_28 = *pfVar6 + pfVar6[4];
    puVar7 = (undefined1 *)(*local_54 + param_4);
    local_2c = *pfVar6 - pfVar6[4];
    local_34 = pfVar6[2] + pfVar6[6];
    local_30 = (pfVar6[2] - pfVar6[6]) * 1.4142135 - local_34;
    local_8 = local_28 + local_34;
    local_14 = local_28 - local_34;
    local_c = local_2c + local_30;
    local_10 = local_2c - local_30;
    local_48 = pfVar6[5] + pfVar6[3];
    local_3c = pfVar6[5] - pfVar6[3];
    local_40 = pfVar6[1] + pfVar6[7];
    local_44 = pfVar6[1] - pfVar6[7];
    local_24 = local_40 + local_48;
    local_2c = (local_40 - local_48) * 1.4142135;
    local_38 = (local_3c + local_44) * 1.847759;
    local_28 = local_44 * 1.0823922 - local_38;
    local_30 = local_3c * -2.613126 + local_38;
    local_20 = local_30 - local_24;
    local_1c = local_2c - local_20;
    local_18 = local_28 + local_1c;
    iVar4 = FUN_0054e238();
    *puVar7 = *(undefined1 *)(local_4c + (iVar4 + 4 >> 3 & 0x3ffU));
    iVar4 = FUN_0054e238();
    puVar7[7] = *(undefined1 *)(local_4c + (iVar4 + 4 >> 3 & 0x3ffU));
    iVar4 = FUN_0054e238();
    puVar7[1] = *(undefined1 *)(local_4c + (iVar4 + 4 >> 3 & 0x3ffU));
    iVar4 = FUN_0054e238();
    puVar7[6] = *(undefined1 *)(local_4c + (iVar4 + 4 >> 3 & 0x3ffU));
    iVar4 = FUN_0054e238();
    puVar7[2] = *(undefined1 *)(local_4c + (iVar4 + 4 >> 3 & 0x3ffU));
    iVar4 = FUN_0054e238();
    puVar7[5] = *(undefined1 *)(local_4c + (iVar4 + 4 >> 3 & 0x3ffU));
    iVar4 = FUN_0054e238();
    puVar7[4] = *(undefined1 *)(local_4c + (iVar4 + 4 >> 3 & 0x3ffU));
    iVar4 = FUN_0054e238();
    pfVar6 = pfVar6 + 8;
    iVar8 = iVar8 + 1;
    puVar7[3] = *(undefined1 *)(local_4c + (iVar4 + 4 >> 3 & 0x3ffU));
    local_54 = local_54 + 1;
  } while (iVar8 < 8);
  return;
}
