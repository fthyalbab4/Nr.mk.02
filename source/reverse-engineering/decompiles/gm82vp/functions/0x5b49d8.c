// rea decompile_all
// name: FUN_005b49d8
// address: 0x5b49d8
// body: available
// range: 0x5b49d8-0x5b4ae4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005b49d8(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  byte bVar7;
  int local_3c;
  int *local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c [6];
  int local_14;

  bVar7 = 0;
  iVar1 = *(int *)(param_1 + 0x168);
  local_34 = **(undefined4 **)(param_1 + 0x18);
  local_30 = (*(undefined4 **)(param_1 + 0x18))[1];
  piVar5 = (int *)(iVar1 + 0xc);
  piVar6 = local_2c;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = *piVar5;
    piVar5 = piVar5 + 1;
    piVar6 = piVar6 + 1;
  }
  local_14 = param_1;
  if (((*(int *)(param_1 + 0xc4) != 0) && (*(int *)(iVar1 + 0x24) == 0)) &&
     (iVar4 = FUN_005b4964(&local_34,*(undefined4 *)(iVar1 + 0x28)), iVar4 == 0)) {
    return 0;
  }
  local_3c = 0;
  local_38 = (int *)(param_1 + 0x110);
  while( true ) {
    if (*(int *)(param_1 + 0x10c) <= local_3c) {
      puVar2 = *(undefined4 **)(param_1 + 0x18);
      *puVar2 = local_34;
      puVar2[1] = local_30;
      piVar5 = local_2c;
      piVar6 = (int *)(iVar1 + 0xc);
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar6 = *piVar5;
        piVar5 = piVar5 + (uint)bVar7 * -2 + 1;
        piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
      }
      if (*(int *)(param_1 + 0xc4) != 0) {
        if (*(int *)(iVar1 + 0x24) == 0) {
          *(int *)(iVar1 + 0x24) = *(int *)(param_1 + 0xc4);
          *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + 1;
          *(uint *)(iVar1 + 0x28) = *(uint *)(iVar1 + 0x28) & 7;
        }
        *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + -1;
      }
      return 1;
    }
    iVar4 = *local_38;
    iVar3 = *(int *)(param_1 + 0xf4 + iVar4 * 4);
    iVar3 = FUN_005b47d0(&local_34,*param_2,local_2c[iVar4 + 2],
                         *(undefined4 *)(iVar1 + 0x3c + *(int *)(iVar3 + 0x18) * 4),
                         *(undefined4 *)(iVar1 + 0x2c + *(int *)(iVar3 + 0x14) * 4));
    if (iVar3 == 0) break;
    local_2c[iVar4 + 2] = (int)*(short *)*param_2;
    local_3c = local_3c + 1;
    param_2 = param_2 + 1;
    local_38 = local_38 + 1;
  }
  return 0;
}
