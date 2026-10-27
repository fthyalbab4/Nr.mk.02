// rea decompile_all
// name: FUN_0055e70c
// address: 0x55e70c
// body: available
// range: 0x55e70c-0x55e7ae inclusive
// range: 0x55e7c7-0x55e954 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0055e70c(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  bool bVar4;

  puVar2 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0xc);
  param_1[0x57] = (int)puVar2;
  *puVar2 = &DAT_0055e708;
  iVar1 = param_1[10];
  if (iVar1 == 1) {
    uVar3 = 0;
    if (param_1[9] != 1) {
      *(undefined4 *)(*param_1 + 0x14) = 9;
      uVar3 = (**(code **)*param_1)();
    }
  }
  else {
    uVar3 = iVar1 - 4;
    if (iVar1 - 2U < 2) {
      if (param_1[9] != 3) {
        *(undefined4 *)(*param_1 + 0x14) = 9;
        uVar3 = (**(code **)*param_1)();
      }
    }
    else {
      bVar4 = uVar3 < 2;
      uVar3 = iVar1 - 6;
      if (bVar4) {
        if (param_1[9] != 4) {
          *(undefined4 *)(*param_1 + 0x14) = 9;
          uVar3 = (**(code **)*param_1)();
        }
      }
      else if (param_1[9] < 1) {
        *(undefined4 *)(*param_1 + 0x14) = 9;
        uVar3 = (**(code **)*param_1)();
      }
    }
  }
  switch(param_1[0xf]) {
  default:
    if ((param_1[0xf] != param_1[10]) || (uVar3 = param_1[0xe], uVar3 != param_1[9])) {
      *(undefined4 *)(*param_1 + 0x14) = 0x1b;
      uVar3 = (**(code **)*param_1)();
    }
    puVar2[1] = FUN_0055e694;
    return uVar3;
  case 1:
    break;
  case 2:
    if (param_1[0xe] != 3) {
      *(undefined4 *)(*param_1 + 0x14) = 10;
      uVar3 = (**(code **)*param_1)();
    }
    if (param_1[10] == 2) {
      puVar2[1] = FUN_0055e694;
      return uVar3;
    }
    *(undefined4 *)(*param_1 + 0x14) = 0x1b;
    uVar3 = (**(code **)*param_1)();
    return uVar3;
  case 3:
    if (param_1[0xe] != 3) {
      *(undefined4 *)(*param_1 + 0x14) = 10;
      uVar3 = (**(code **)*param_1)();
    }
    if (param_1[10] == 2) {
      *puVar2 = &LAB_0055e2d0;
      puVar2[1] = FUN_0055e370;
      return uVar3;
    }
    if (param_1[10] == 3) {
      puVar2[1] = FUN_0055e694;
      return uVar3;
    }
    *(undefined4 *)(*param_1 + 0x14) = 0x1b;
    uVar3 = (**(code **)*param_1)();
    return uVar3;
  case 4:
    if (param_1[0xe] != 4) {
      *(undefined4 *)(*param_1 + 0x14) = 10;
      uVar3 = (**(code **)*param_1)();
    }
    if (param_1[10] == 4) {
      puVar2[1] = FUN_0055e694;
      return uVar3;
    }
    *(undefined4 *)(*param_1 + 0x14) = 0x1b;
    uVar3 = (**(code **)*param_1)();
    return uVar3;
  case 5:
    if (param_1[0xe] != 4) {
      *(undefined4 *)(*param_1 + 0x14) = 10;
      uVar3 = (**(code **)*param_1)();
    }
    if (param_1[10] == 4) {
      *puVar2 = &LAB_0055e2d0;
      puVar2[1] = FUN_0055e504;
      return uVar3;
    }
    if (param_1[10] == 5) {
      puVar2[1] = FUN_0055e694;
      return uVar3;
    }
    *(undefined4 *)(*param_1 + 0x14) = 0x1b;
    uVar3 = (**(code **)*param_1)();
    return uVar3;
  }
  if (param_1[0xe] != 1) {
    *(undefined4 *)(*param_1 + 0x14) = 10;
    uVar3 = (**(code **)*param_1)();
  }
  if (param_1[10] == 1) {
    puVar2[1] = FUN_0055e648;
    return uVar3;
  }
  if (param_1[10] == 2) {
    *puVar2 = &LAB_0055e2d0;
    puVar2[1] = FUN_0055e478;
    return uVar3;
  }
  if (param_1[10] == 3) {
    puVar2[1] = FUN_0055e648;
    return uVar3;
  }
  *(undefined4 *)(*param_1 + 0x14) = 0x1b;
  uVar3 = (**(code **)*param_1)();
  return uVar3;
}
