// rea decompile_all
// name: FUN_005b16f0
// address: 0x5b16f0
// body: available
// range: 0x5b16f0-0x5b18ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005b16f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_18;
  int *local_10;

  iVar1 = *(int *)(param_1 + 0x154);
  uVar7 = *(int *)(param_1 + 0x104) - 1;
  iVar2 = *(int *)(param_1 + 0xec);
  local_20 = *(int *)(iVar1 + 0x10);
  do {
    if (*(int *)(iVar1 + 0x14) <= local_20) {
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
      FUN_005b1610(param_1);
      return 1;
    }
    for (uVar3 = *(uint *)(iVar1 + 0xc); uVar3 <= uVar7; uVar3 = uVar3 + 1) {
      local_2c = 0;
      local_10 = (int *)(param_1 + 0xf4);
      for (local_28 = 0; local_28 < *(int *)(param_1 + 0xf0); local_28 = local_28 + 1) {
        iVar6 = *local_10;
        if (uVar3 < uVar7) {
          iVar8 = *(int *)(iVar6 + 0x34);
        }
        else {
          iVar8 = *(int *)(iVar6 + 0x44);
        }
        iVar4 = *(int *)(iVar6 + 0x40);
        local_18 = local_20 << 3;
        for (local_24 = 0; local_24 < *(int *)(iVar6 + 0x38); local_24 = local_24 + 1) {
          if ((*(uint *)(iVar1 + 8) < iVar2 - 1U) || (local_20 + local_24 < *(int *)(iVar6 + 0x48)))
          {
            (**(code **)(*(int *)(param_1 + 0x164) + 4))
                      (param_1,iVar6,*(undefined4 *)(param_2 + *(int *)(iVar6 + 4) * 4),iVar8,
                       uVar3 * iVar4,local_18,*(undefined4 *)(iVar1 + 0x18 + local_2c * 4));
            if (iVar8 < *(int *)(iVar6 + 0x34)) {
              FUN_005aeac4(*(undefined4 *)(iVar1 + 0x18 + (local_2c + iVar8) * 4),
                           (*(int *)(iVar6 + 0x34) - iVar8) * 0x80);
              for (iVar5 = iVar8; iVar5 < *(int *)(iVar6 + 0x34); iVar5 = iVar5 + 1) {
                **(undefined2 **)(iVar1 + 0x18 + (local_2c + iVar5) * 4) =
                     **(undefined2 **)(iVar1 + 0x14 + (local_2c + iVar5) * 4);
              }
            }
          }
          else {
            FUN_005aeac4(*(undefined4 *)(iVar1 + 0x18 + local_2c * 4),*(int *)(iVar6 + 0x34) << 7);
            for (iVar5 = 0; iVar5 < *(int *)(iVar6 + 0x34); iVar5 = iVar5 + 1) {
              **(undefined2 **)(iVar1 + 0x18 + (local_2c + iVar5) * 4) =
                   **(undefined2 **)(iVar1 + 0x14 + local_2c * 4);
            }
          }
          local_2c = local_2c + *(int *)(iVar6 + 0x34);
          local_18 = local_18 + 8;
        }
        local_10 = local_10 + 1;
      }
      iVar6 = (**(code **)(*(int *)(param_1 + 0x168) + 4))(param_1,iVar1 + 0x18);
      if (iVar6 == 0) {
        *(int *)(iVar1 + 0x10) = local_20;
        *(uint *)(iVar1 + 0xc) = uVar3;
        return 0;
      }
    }
    *(undefined4 *)(iVar1 + 0xc) = 0;
    local_20 = local_20 + 1;
  } while( true );
}
