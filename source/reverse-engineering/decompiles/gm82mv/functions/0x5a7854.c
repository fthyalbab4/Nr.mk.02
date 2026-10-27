// rea decompile_all
// name: FUN_005a7854
// address: 0x5a7854
// body: available
// range: 0x5a7854-0x5a7a1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_005a7854(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  bool bVar4;

  puVar2 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x18);
  param_1[0x72] = (int)puVar2;
  *puVar2 = &DAT_005a7850;
  iVar1 = param_1[10];
  if (iVar1 == 1) {
    uVar3 = 0;
    if (param_1[9] != 1) {
      *(undefined4 *)(*param_1 + 0x14) = 10;
      uVar3 = (**(code **)*param_1)();
    }
  }
  else {
    uVar3 = iVar1 - 4;
    if (iVar1 - 2U < 2) {
      if (param_1[9] != 3) {
        *(undefined4 *)(*param_1 + 0x14) = 10;
        uVar3 = (**(code **)*param_1)();
      }
    }
    else {
      bVar4 = uVar3 < 2;
      uVar3 = iVar1 - 6;
      if (bVar4) {
        if (param_1[9] != 4) {
          *(undefined4 *)(*param_1 + 0x14) = 10;
          uVar3 = (**(code **)*param_1)();
        }
      }
      else if (param_1[9] < 1) {
        *(undefined4 *)(*param_1 + 0x14) = 10;
        uVar3 = (**(code **)*param_1)();
      }
    }
  }
  iVar1 = param_1[0xb];
  if (iVar1 == 1) {
    param_1[0x1e] = 1;
    if ((param_1[10] == 1) || (param_1[10] == 3)) {
      puVar2[1] = FUN_005a76a8;
      for (uVar3 = 1; (int)uVar3 < param_1[9]; uVar3 = uVar3 + 1) {
        *(undefined4 *)(param_1[0x36] + 0x30 + uVar3 * 0x54) = 0;
      }
    }
    else {
      *(undefined4 *)(*param_1 + 0x14) = 0x1b;
      uVar3 = (**(code **)*param_1)();
    }
  }
  else if (iVar1 == 2) {
    param_1[0x1e] = 3;
    if (param_1[10] == 3) {
      puVar2[1] = FUN_005a7530;
      uVar3 = FUN_005a7478(param_1);
    }
    else if (param_1[10] == 1) {
      puVar2[1] = FUN_005a76c8;
    }
    else if (param_1[10] == 2) {
      puVar2[1] = FUN_005a7638;
    }
    else {
      *(undefined4 *)(*param_1 + 0x14) = 0x1b;
      uVar3 = (**(code **)*param_1)();
    }
  }
  else if (iVar1 == 4) {
    param_1[0x1e] = 4;
    if (param_1[10] == 5) {
      puVar2[1] = FUN_005a7710;
      uVar3 = FUN_005a7478(param_1);
    }
    else if (param_1[10] == 4) {
      puVar2[1] = FUN_005a7638;
    }
    else {
      *(undefined4 *)(*param_1 + 0x14) = 0x1b;
      uVar3 = (**(code **)*param_1)();
    }
  }
  else if (param_1[0xb] == param_1[10]) {
    uVar3 = param_1[9];
    param_1[0x1e] = uVar3;
    puVar2[1] = FUN_005a7638;
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x1b;
    uVar3 = (**(code **)*param_1)();
  }
  if (param_1[0x15] == 0) {
    param_1[0x1f] = param_1[0x1e];
    return uVar3;
  }
  param_1[0x1f] = 1;
  return uVar3;
}
