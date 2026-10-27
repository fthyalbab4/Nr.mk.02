// rea decompile_all
// name: FUN_00415770
// address: 0x415770
// body: available
// range: 0x415770-0x415868 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00415770(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int local_14;
  int local_10;

  if (param_1 == 0) {
    uVar2 = 0;
    if (param_2 != 0) {
      uVar2 = -*(int *)(param_2 + -4);
    }
    return uVar2;
  }
  if (param_2 == 0) {
    return *(uint *)(param_1 + -4);
  }
  local_10 = 0;
  local_14 = 0;
  if (*(short *)(param_1 + -10) != 2) {
    FUN_004083c0(&local_14,param_1);
    param_1 = local_14;
  }
  if (*(short *)(param_2 + -10) != 2) {
    FUN_004083c0(&local_10);
    param_2 = local_10;
  }
  uVar2 = *(uint *)(param_2 + -4);
  uVar7 = *(uint *)(param_1 + -4) - uVar2;
  iVar4 = (-(uint)(*(uint *)(param_1 + -4) < uVar2) & uVar7) + uVar2;
  param_1 = param_1 + iVar4 * 2;
  param_2 = param_2 + iVar4 * 2;
  uVar2 = uVar7;
  iVar5 = -iVar4;
  if (-iVar4 != 0) {
    do {
      uVar3 = *(uint *)(param_1 + iVar5 * 2);
      uVar6 = *(uint *)(param_2 + iVar5 * 2);
      if (uVar3 != uVar6) {
        if ((short)uVar3 != (short)uVar6) {
          uVar3 = uVar3 & 0xffff;
          uVar6 = uVar6 & 0xffff;
          if ((0x60 < uVar3) && (uVar3 < 0x7b)) {
            uVar3 = uVar3 - 0x20;
          }
          if ((0x60 < uVar6) && (uVar6 < 0x7b)) {
            uVar6 = uVar6 - 0x20;
          }
          uVar2 = uVar3 - uVar6;
          if (uVar3 - uVar6 != 0) break;
          uVar3 = *(uint *)(param_1 + iVar5 * 2) & 0xffff0000;
          uVar6 = *(uint *)(param_2 + iVar5 * 2) & 0xffff0000;
          if (uVar3 == uVar6) goto LAB_00415844;
        }
        uVar3 = uVar3 >> 0x10;
        uVar6 = uVar6 >> 0x10;
        if ((0x60 < uVar3) && (uVar3 < 0x7b)) {
          uVar3 = uVar3 - 0x20;
        }
        if ((0x60 < uVar6) && (uVar6 < 0x7b)) {
          uVar6 = uVar6 - 0x20;
        }
        uVar2 = uVar3 - uVar6;
        if (uVar3 - uVar6 != 0) break;
      }
LAB_00415844:
      bVar1 = iVar5 < -2;
      uVar2 = uVar7;
      iVar5 = iVar5 + 2;
    } while (bVar1);
  }
  if (local_14 != 0 || local_10 != 0) {
    FUN_004072fc(&local_14,2);
  }
  return uVar2;
}
