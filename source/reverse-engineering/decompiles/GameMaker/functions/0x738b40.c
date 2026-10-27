// rea decompile_all
// name: FUN_00738b40
// address: 0x738b40
// body: available
// range: 0x738b40-0x738c93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00738b40(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *local_10;
  int local_8;

  local_8 = param_1;
  do {
    local_10 = (undefined4 *)FUN_00738b28((uint)(local_8 + param_2) >> 1);
    iVar8 = local_8;
    iVar9 = param_2;
    do {
      while( true ) {
        uVar4 = FUN_00738b28(iVar8);
        iVar5 = (**(code **)(param_4 + -0xc))(uVar4,local_10,param_4);
        if (-1 < iVar5) break;
        iVar8 = iVar8 + 1;
      }
      while( true ) {
        uVar4 = FUN_00738b28(iVar9);
        iVar5 = (**(code **)(param_4 + -0xc))(uVar4,local_10,param_4);
        if (iVar5 < 1) break;
        iVar9 = iVar9 + -1;
      }
      if (iVar8 <= iVar9) {
        puVar6 = (undefined4 *)FUN_00738b28(iVar8);
        puVar7 = (undefined4 *)FUN_00738b28(iVar9);
        iVar5 = *(int *)(param_4 + -8);
        if (iVar5 == 1) {
          uVar1 = *(undefined1 *)puVar6;
          *(undefined1 *)puVar6 = *(undefined1 *)puVar7;
          *(undefined1 *)puVar7 = uVar1;
        }
        else if (iVar5 == 2) {
          uVar2 = *(undefined2 *)puVar6;
          *(undefined2 *)puVar6 = *(undefined2 *)puVar7;
          *(undefined2 *)puVar7 = uVar2;
        }
        else if (iVar5 == 4) {
          uVar4 = *puVar6;
          *puVar6 = *puVar7;
          *puVar7 = uVar4;
        }
        else {
          FUN_0040450c(puVar6,*(undefined4 *)(param_4 + -0x10),*(undefined4 *)(param_4 + -8));
          FUN_0040450c(puVar7,puVar6,*(undefined4 *)(param_4 + -8));
          FUN_0040450c(*(undefined4 *)(param_4 + -0x10),puVar7,*(undefined4 *)(param_4 + -8));
        }
        puVar3 = puVar7;
        if ((puVar6 != local_10) && (puVar3 = local_10, local_10 == puVar7)) {
          puVar3 = puVar6;
        }
        local_10 = puVar3;
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + -1;
      }
    } while (iVar8 <= iVar9);
    if (local_8 < iVar9) {
      FUN_00738b40(local_8,iVar9);
    }
    local_8 = iVar8;
  } while (iVar8 < param_2);
  return;
}
