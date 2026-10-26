// rea decompile_all
// name: FUN_005c263c
// address: 0x5c263c
// body: available
// range: 0x5c263c-0x5c2748 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005c263c(undefined4 *param_1,uint param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  int local_10;

  pbVar4 = (byte *)*param_1;
  local_10 = param_1[1];
  for (; param_3 < 0x19; param_3 = param_3 + 8) {
    if (param_1[2] == 0) {
      if (local_10 == 0) {
        iVar2 = (**(code **)(*(int *)(param_1[5] + 0x14) + 0xc))();
        if (iVar2 == 0) {
          return 0;
        }
        pbVar4 = (byte *)**(undefined4 **)(param_1[5] + 0x14);
        local_10 = (*(undefined4 **)(param_1[5] + 0x14))[1];
      }
      local_10 = local_10 + -1;
      uVar3 = (uint)*pbVar4;
      pbVar4 = pbVar4 + 1;
      if (uVar3 == 0xff) {
        do {
          if (local_10 == 0) {
            iVar2 = (**(code **)(*(int *)(param_1[5] + 0x14) + 0xc))();
            if (iVar2 == 0) {
              return 0;
            }
            pbVar4 = (byte *)**(undefined4 **)(param_1[5] + 0x14);
            local_10 = (*(undefined4 **)(param_1[5] + 0x14))[1];
          }
          local_10 = local_10 + -1;
          uVar3 = (uint)*pbVar4;
          pbVar4 = pbVar4 + 1;
        } while (uVar3 == 0xff);
        if (uVar3 != 0) {
          param_1[2] = uVar3;
          goto LAB_005c26e0;
        }
        uVar3 = 0xff;
      }
    }
    else {
LAB_005c26e0:
      if (param_4 <= param_3) break;
      if (*(int *)param_1[6] == 0) {
        piVar1 = (int *)param_1[5];
        *(undefined4 *)(*piVar1 + 0x14) = 0x71;
        (**(code **)(*piVar1 + 4))(piVar1,0xffffffff);
        *(undefined4 *)param_1[6] = 1;
      }
      uVar3 = 0;
    }
    param_2 = uVar3 | param_2 << 8;
  }
  *param_1 = pbVar4;
  param_1[1] = local_10;
  param_1[3] = param_2;
  param_1[4] = param_3;
  return 1;
}
