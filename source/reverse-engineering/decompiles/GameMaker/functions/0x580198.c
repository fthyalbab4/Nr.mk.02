// rea decompile_all
// name: FUN_00580198
// address: 0x580198
// body: available
// range: 0x580198-0x5803e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00580198(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  int iStack_20;
  int *piStack_14;
  int *piStack_10;

  iVar1 = *(int *)(param_1 + 0x19e);
  uVar6 = *(int *)(param_1 + 0x14e) - 1;
  iVar2 = *(int *)(param_1 + 0x132);
  local_28 = *(int *)(iVar1 + 0x18);
  do {
    if (*(int *)(iVar1 + 0x1c) <= local_28) {
      *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
      *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
      if (*(uint *)(param_1 + 0x90) < *(uint *)(param_1 + 0x132)) {
        FUN_00580100(param_1);
        uVar9 = 3;
      }
      else {
        (**(code **)(*(int *)(param_1 + 0x1a6) + 0xc))();
        uVar9 = 4;
      }
      return uVar9;
    }
    for (uVar3 = *(uint *)(iVar1 + 0x14); uVar3 <= uVar6; uVar3 = uVar3 + 1) {
      FUN_00579424();
      iVar7 = (**(code **)(*(int *)(param_1 + 0x1ae) + 4))(param_1,iVar1 + 0x20);
      if (iVar7 == 0) {
        *(int *)(iVar1 + 0x18) = local_28;
        *(uint *)(iVar1 + 0x14) = uVar3;
        return 0;
      }
      iStack_34 = 0;
      piStack_14 = (int *)(param_1 + 0x13e);
      piStack_10 = param_2;
      for (iStack_30 = 0; iStack_30 < *(int *)(param_1 + 0x13a); iStack_30 = iStack_30 + 1) {
        iVar7 = *piStack_14;
        if (*(int *)(iVar7 + 0x30) == 0) {
          iStack_34 = iStack_34 + *(int *)(iVar7 + 0x3c);
        }
        else {
          pcVar4 = *(code **)(*(int *)(param_1 + 0x1b2) + 4 + *(int *)(iVar7 + 4) * 4);
          if (uVar3 < uVar6) {
            iVar8 = *(int *)(iVar7 + 0x34);
          }
          else {
            iVar8 = *(int *)(iVar7 + 0x44);
          }
          iStack_20 = *piStack_10 + local_28 * *(int *)(iVar7 + 0x24) * 4;
          iVar5 = *(int *)(iVar7 + 0x40);
          for (iStack_2c = 0; iStack_2c < *(int *)(iVar7 + 0x38); iStack_2c = iStack_2c + 1) {
            if (((*(uint *)(param_1 + 0x90) < iVar2 - 1U) ||
                (local_28 + iStack_2c < *(int *)(iVar7 + 0x48))) &&
               (iVar10 = 0, iVar11 = uVar3 * iVar5, 0 < iVar8)) {
              do {
                (*pcVar4)(param_1,iVar7,*(undefined4 *)(iVar1 + 0x20 + (iStack_34 + iVar10) * 4),
                          iVar11,iStack_20);
                iVar11 = iVar11 + *(int *)(iVar7 + 0x24);
                iVar10 = iVar10 + 1;
              } while (iVar10 < iVar8);
            }
            iStack_34 = iStack_34 + *(int *)(iVar7 + 0x34);
            iStack_20 = iStack_20 + *(int *)(iVar7 + 0x24) * 4;
          }
        }
        piStack_10 = piStack_10 + 1;
        piStack_14 = piStack_14 + 1;
      }
    }
    *(undefined4 *)(iVar1 + 0x14) = 0;
    local_28 = local_28 + 1;
  } while( true );
}
