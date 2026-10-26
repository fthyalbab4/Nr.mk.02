// rea decompile_all
// name: FUN_0055ddbc
// address: 0x55ddbc
// body: available
// range: 0x55ddbc-0x55e03d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055ddbc(int param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined2 *puVar10;
  uint uStack_3c;
  int local_38;
  uint uStack_34;
  uint uStack_30;
  int local_2c;
  undefined2 *puStack_24;
  undefined4 *local_20;
  int *piStack_1c;
  undefined4 *local_14;
  int *piStack_10;

  iVar2 = *(int *)(param_1 + 0x154);
  uVar5 = *(int *)(param_1 + 0xec) - 1;
  local_38 = 0;
  local_2c = *(int *)(param_1 + 0x40);
  local_20 = (undefined4 *)(iVar2 + 0x40);
  local_14 = param_2;
  while( true ) {
    if (*(int *)(param_1 + 0x38) <= local_38) break;
    piStack_10 = (int *)(**(code **)(*(int *)(param_1 + 4) + 0x20))
                                  (param_1,*local_20,*(int *)(iVar2 + 8) * *(int *)(local_2c + 0xc),
                                   1,*(int *)(local_2c + 0xc));
    if (*(uint *)(iVar2 + 8) < uVar5) {
      uStack_30 = *(uint *)(local_2c + 0xc);
    }
    else {
      uStack_30 = *(uint *)(local_2c + 0x20) % *(uint *)(local_2c + 0xc);
      if (uStack_30 == 0) {
        uStack_30 = *(uint *)(local_2c + 0xc);
      }
    }
    uVar3 = *(uint *)(local_2c + 0x1c);
    uVar4 = *(uint *)(local_2c + 8);
    uVar9 = uVar3 % uVar4;
    if (0 < (int)uVar9) {
      uVar9 = uVar4 - uVar9;
    }
    uStack_34 = 0;
    piStack_1c = piStack_10;
    if (0 < (int)uStack_30) {
      do {
        iVar6 = *piStack_1c;
        (**(code **)(*(int *)(param_1 + 0x164) + 4))
                  (param_1,local_2c,*local_14,uVar3,0,uStack_34 << 3,iVar6);
        if (0 < (int)uVar9) {
          puVar10 = (undefined2 *)(iVar6 + uVar3 * 0x80);
          FUN_0055af80(puVar10,uVar9 << 7);
          iVar6 = 0;
          uVar1 = puVar10[-0x40];
          if (0 < (int)uVar9) {
            do {
              *puVar10 = uVar1;
              iVar6 = iVar6 + 1;
              puVar10 = puVar10 + 0x40;
            } while (iVar6 < (int)uVar9);
          }
        }
        uStack_34 = uStack_34 + 1;
        piStack_1c = piStack_1c + 1;
      } while ((int)uStack_34 < (int)uStack_30);
    }
    if (*(uint *)(iVar2 + 8) == uVar5) {
      uVar7 = (uVar3 + uVar9) / uVar4;
      piStack_10 = piStack_10 + uStack_30;
      for (uStack_34 = uStack_30; (int)uStack_34 < *(int *)(local_2c + 0xc);
          uStack_34 = uStack_34 + 1) {
        puStack_24 = (undefined2 *)*piStack_10;
        iVar6 = piStack_10[-1];
        FUN_0055af80(puStack_24,(uVar3 + uVar9) * 0x80);
        uStack_3c = 0;
        if (uVar7 != 0) {
          do {
            iVar8 = 0;
            uVar1 = *(undefined2 *)(iVar6 + -0x80 + uVar4 * 0x80);
            puVar10 = puStack_24;
            if (0 < (int)uVar4) {
              do {
                *puVar10 = uVar1;
                iVar8 = iVar8 + 1;
                puVar10 = puVar10 + 0x40;
              } while (iVar8 < (int)uVar4);
            }
            puStack_24 = puStack_24 + uVar4 * 0x40;
            iVar6 = iVar6 + uVar4 * 0x80;
            uStack_3c = uStack_3c + 1;
          } while (uStack_3c < uVar7);
        }
        piStack_10 = piStack_10 + 1;
      }
    }
    local_20 = local_20 + 1;
    local_14 = local_14 + 1;
    local_38 = local_38 + 1;
    local_2c = local_2c + 0x54;
  }
  FUN_0055e040(param_1,param_2);
  return;
}
