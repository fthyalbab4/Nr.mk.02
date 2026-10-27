// rea decompile_all
// name: FUN_00582c88
// address: 0x582c88
// body: available
// range: 0x582c88-0x58301a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00582c88(int param_1,int param_2,short *param_3,int param_4,int *param_5)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int local_ac [16];
  int local_6c [8];
  int local_4c [8];
  int *local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_24 = *(int *)(param_1 + 0x136) + 0x80;
  local_20 = *(int **)(param_2 + 0x50);
  piVar2 = local_ac;
  local_28 = 8;
  do {
    if (local_28 != 4) {
      if (((((param_3[8] == 0 && param_3[0x10] == 0) && param_3[0x18] == 0) && param_3[0x28] == 0)
          && param_3[0x30] == 0) && param_3[0x38] == 0) {
        iVar3 = (int)*param_3 * *local_20 * 4;
        *piVar2 = iVar3;
        piVar2[8] = iVar3;
        piVar2[0x10] = iVar3;
        piVar2[0x18] = iVar3;
      }
      else {
        iVar4 = (int)*param_3 * *local_20 * 0x4000;
        iVar3 = (int)param_3[0x10] * local_20[0x10] * 0x3b21 +
                (int)param_3[0x30] * local_20[0x30] * -0x187e;
        local_8 = iVar3 + iVar4;
        local_c = iVar4 - iVar3;
        local_10 = (int)param_3[0x38] * local_20[0x38];
        local_14 = (int)param_3[0x28] * local_20[0x28];
        local_18 = (int)param_3[0x18] * local_20[0x18];
        local_1c = (int)param_3[8] * local_20[8];
        iVar4 = local_10 * -0x6c2 + local_14 * 0x2e75 + local_18 * -0x4587 + local_1c * 0x21f9;
        iVar3 = local_10 * -0x1050 + local_14 * -0x133e + local_18 * 0x1ccd + local_1c * 0x5203;
        *piVar2 = local_8 + iVar3 + 0x800 >> 0xc;
        piVar2[0x18] = (local_8 - iVar3) + 0x800 >> 0xc;
        piVar2[8] = local_c + iVar4 + 0x800 >> 0xc;
        piVar2[0x10] = (local_c - iVar4) + 0x800 >> 0xc;
      }
    }
    param_3 = param_3 + 1;
    local_20 = local_20 + 1;
    piVar2 = piVar2 + 1;
    local_28 = local_28 + -1;
  } while (0 < local_28);
  piVar2 = local_ac;
  local_28 = 0;
  local_2c = param_5;
  do {
    puVar5 = (undefined1 *)(*local_2c + param_4);
    if (((((piVar2[1] == 0 && piVar2[2] == 0) && piVar2[3] == 0) && piVar2[5] == 0) &&
        piVar2[6] == 0) && piVar2[7] == 0) {
      uVar1 = *(undefined1 *)(local_24 + (*piVar2 + 0x10 >> 5 & 0x3ffU));
      *puVar5 = uVar1;
      puVar5[1] = uVar1;
      puVar5[2] = uVar1;
      puVar5[3] = uVar1;
    }
    else {
      local_c = piVar2[2] * 0x3b21 + piVar2[6] * -0x187e;
      local_8 = local_c + *piVar2 * 0x4000;
      local_c = *piVar2 * 0x4000 - local_c;
      local_10 = piVar2[7];
      local_14 = piVar2[5];
      local_18 = piVar2[3];
      local_1c = piVar2[1];
      iVar4 = local_10 * -0x6c2 + local_14 * 0x2e75 + local_18 * -0x4587 + local_1c * 0x21f9;
      iVar3 = local_10 * -0x1050 + local_14 * -0x133e + local_18 * 0x1ccd + local_1c * 0x5203;
      *puVar5 = *(undefined1 *)(local_24 + (local_8 + iVar3 + 0x40000 >> 0x13 & 0x3ffU));
      puVar5[3] = *(undefined1 *)(local_24 + ((local_8 - iVar3) + 0x40000 >> 0x13 & 0x3ffU));
      puVar5[1] = *(undefined1 *)(local_24 + (local_c + iVar4 + 0x40000 >> 0x13 & 0x3ffU));
      puVar5[2] = *(undefined1 *)(local_24 + ((local_c - iVar4) + 0x40000 >> 0x13 & 0x3ffU));
    }
    piVar2 = piVar2 + 8;
    local_28 = local_28 + 1;
    local_2c = local_2c + 1;
  } while (local_28 < 4);
  return;
}
