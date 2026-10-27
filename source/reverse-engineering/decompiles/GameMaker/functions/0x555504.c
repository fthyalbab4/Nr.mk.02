// rea decompile_all
// name: FUN_00555504
// address: 0x555504
// body: available
// range: 0x555504-0x55567b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00555504(int param_1,int param_2,int param_3,undefined1 *param_4,byte *param_5,int param_6,
                 int param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_240 [128];
  byte *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 *local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  local_1c = 0x7f;
  piVar3 = local_240;
  do {
    *piVar3 = 0x7fffffff;
    piVar3 = piVar3 + 1;
    local_1c = local_1c + -1;
  } while (-1 < local_1c);
  local_1c = 0;
  local_40 = param_5;
  if (0 < param_6) {
    do {
      local_20 = (uint)*local_40;
      piVar3 = *(int **)(local_8 + 0x88);
      iVar1 = local_c - (uint)*(byte *)(*piVar3 + local_20);
      iVar5 = local_10 - (uint)*(byte *)(piVar3[1] + local_20);
      iVar4 = iVar5 * 3;
      iVar2 = param_7 - (uint)*(byte *)(piVar3[2] + local_20);
      iVar6 = iVar2 * 2;
      local_28 = iVar1 * iVar1 + iVar4 * iVar4 + iVar6 * iVar6;
      local_38 = iVar5 * 0x48 + 0x90;
      local_3c = iVar2 * 0x40 + 0x100;
      piVar3 = local_240;
      local_24 = param_4;
      local_30 = iVar1 * 0x10 + 0x40;
      local_14 = 3;
      do {
        local_2c = local_28;
        local_34 = local_38;
        local_18 = 7;
        do {
          iVar1 = 3;
          iVar4 = local_3c;
          iVar6 = local_2c;
          do {
            if (iVar6 < *piVar3) {
              *piVar3 = iVar6;
              *local_24 = (undefined1)local_20;
            }
            iVar6 = iVar6 + iVar4;
            iVar4 = iVar4 + 0x200;
            piVar3 = piVar3 + 1;
            local_24 = local_24 + 1;
            iVar1 = iVar1 + -1;
          } while (-1 < iVar1);
          local_2c = local_2c + local_34;
          local_34 = local_34 + 0x120;
          local_18 = local_18 + -1;
        } while (-1 < local_18);
        local_28 = local_28 + local_30;
        local_30 = local_30 + 0x80;
        local_14 = local_14 + -1;
      } while (-1 < local_14);
      local_1c = local_1c + 1;
      local_40 = local_40 + 1;
    } while (local_1c < param_6);
  }
  return;
}
