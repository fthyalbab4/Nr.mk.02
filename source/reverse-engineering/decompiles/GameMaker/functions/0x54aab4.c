// rea decompile_all
// name: FUN_0054aab4
// address: 0x54aab4
// body: available
// range: 0x54aab4-0x54abd6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054aab4(int param_1,char param_2,byte param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  byte local_115;
  int local_114;
  byte abStack_110 [256];

  local_114 = *(int *)(*(int *)(param_1 + 0x10) + 8);
  if (-1 < local_114 + -1) {
    iVar8 = 0;
    do {
      iVar3 = FUN_0043b048(*(undefined4 *)(param_1 + 0x10),iVar8);
      bVar1 = *(byte *)(iVar3 + 8);
      iVar3 = FUN_0043b048(*(undefined4 *)(param_1 + 0x10),iVar8);
      abStack_110[*(int *)(iVar3 + 4)] = bVar1;
      iVar8 = iVar8 + 1;
      local_114 = local_114 + -1;
    } while (local_114 != 0);
  }
  local_114 = *(int *)(*(int *)(param_1 + 0x14) + 8);
  if (-1 < local_114 + -1) {
    iVar8 = 0;
    do {
      iVar4 = FUN_0043b048(*(undefined4 *)(param_1 + 0x14),iVar8);
      pbVar7 = *(byte **)(iVar4 + 0x18);
      uVar5 = FUN_005449dc(iVar4,3);
      uVar6 = FUN_005449dc(iVar4,4);
      iVar3 = (uVar5 & 0xffff) * (uVar6 & 0xffff);
      if ((*(char *)(iVar4 + 0x34) == '\0') || (param_2 == '\0')) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        local_115 = FUN_00547e88(*(undefined4 *)(iVar4 + 0x38));
        FUN_00547e90(*(undefined4 *)(iVar4 + 0x38),param_3);
      }
      else {
        local_115 = 0;
      }
      for (; 0 < iVar3; iVar3 = iVar3 + -1) {
        if ((bVar2) && (*pbVar7 == local_115)) {
          *pbVar7 = param_3;
        }
        else {
          *pbVar7 = abStack_110[*pbVar7];
        }
        pbVar7 = pbVar7 + 1;
      }
      iVar8 = iVar8 + 1;
      local_114 = local_114 + -1;
    } while (local_114 != 0);
  }
  return;
}
