// rea decompile_all
// name: FUN_005c4200
// address: 0x5c4200
// body: available
// range: 0x5c4200-0x5c43bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c4200(int param_1,int *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  short *psVar12;
  int iVar13;
  int *local_54;
  int *local_50;
  undefined4 *local_44;
  int local_34;
  int local_30;
  int local_2c;
  char *local_1c;
  byte *local_18;
  int local_10;
  int local_c;

  iVar3 = *(int *)(param_1 + 0x1be);
  iVar4 = *(int *)(param_1 + 0x74);
  iVar5 = *(int *)(param_1 + 0x6c);
  iVar6 = *(int *)(param_1 + 0x136);
  local_34 = 0;
  local_54 = param_2;
  local_44 = param_3;
  if (0 < param_4) {
    do {
      FUN_005bf288();
      local_30 = 0;
      local_50 = (int *)(iVar3 + 0x44);
      if (0 < iVar4) {
        do {
          local_18 = (byte *)(*local_54 + local_30);
          local_1c = (char *)*local_44;
          if (*(int *)(iVar3 + 0x54) == 0) {
            iVar13 = 1;
            psVar12 = (short *)*local_50;
            local_2c = iVar4;
          }
          else {
            iVar13 = -1;
            local_18 = local_18 + (iVar5 + -1) * iVar4;
            local_1c = local_1c + iVar5 + -1;
            psVar12 = (short *)(*local_50 + (iVar5 + 1) * 2);
            local_2c = -iVar4;
          }
          iVar7 = *(int *)(*(int *)(iVar3 + 0x18) + local_30 * 4);
          iVar8 = *(int *)(*(int *)(iVar3 + 0x10) + local_30 * 4);
          iVar9 = 0;
          local_10 = 0;
          local_c = 0;
          for (iVar1 = iVar5; iVar1 != 0; iVar1 = iVar1 + -1) {
            uVar10 = (uint)*(byte *)(iVar6 + (iVar9 + psVar12[iVar13] + 8 >> 4) + (uint)*local_18);
            bVar2 = *(byte *)(iVar7 + uVar10);
            *local_1c = *local_1c + bVar2;
            iVar11 = uVar10 - *(byte *)(iVar8 + (uint)bVar2);
            *psVar12 = (short)local_10 + (short)iVar11 * 3;
            local_10 = local_c + iVar11 * 5;
            iVar9 = iVar11 * 7;
            local_18 = local_18 + local_2c;
            local_1c = local_1c + iVar13;
            psVar12 = psVar12 + iVar13;
            local_c = iVar11;
          }
          *psVar12 = (short)local_10;
          local_30 = local_30 + 1;
          local_50 = local_50 + 1;
        } while (local_30 < iVar4);
      }
      *(uint *)(iVar3 + 0x54) = (uint)(*(int *)(iVar3 + 0x54) == 0);
      local_34 = local_34 + 1;
      local_54 = local_54 + 1;
      local_44 = local_44 + 1;
    } while (local_34 < param_4);
  }
  return;
}
