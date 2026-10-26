// rea decompile_all
// name: FUN_0055b4bc
// address: 0x55b4bc
// body: available
// range: 0x55b4bc-0x55b4ff inclusive
// range: 0x55b518-0x55b870 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055b4bc(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;

  if (param_1[5] != 100) {
    iVar3 = *param_1;
    *(undefined4 *)(iVar3 + 0x14) = 0x14;
    *(int *)(iVar3 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  param_1[0xf] = param_2;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  switch(param_2) {
  case 0:
    param_1[0xe] = param_1[9];
    if ((param_1[0xe] < 1) || (10 < param_1[0xe])) {
      iVar3 = *param_1;
      *(undefined4 *)(iVar3 + 0x14) = 0x1a;
      *(int *)(iVar3 + 0x18) = param_1[0xe];
      *(undefined4 *)(iVar3 + 0x1c) = 10;
      (**(code **)*param_1)();
    }
    for (iVar3 = 0; iVar3 < param_1[0xe]; iVar3 = iVar3 + 1) {
      piVar2 = (int *)(iVar3 * 0x54 + param_1[0x10]);
      *piVar2 = iVar3;
      piVar2[2] = 1;
      piVar2[3] = 1;
      piVar2[4] = 0;
      piVar2[5] = 0;
      piVar2[6] = 0;
    }
    return;
  case 1:
    param_1[0x33] = 1;
    param_1[0xe] = 1;
    puVar1 = (undefined4 *)param_1[0x10];
    *puVar1 = 1;
    puVar1[2] = 1;
    puVar1[3] = 1;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    return;
  case 2:
    param_1[0x36] = 1;
    param_1[0xe] = 3;
    puVar1 = (undefined4 *)param_1[0x10];
    *puVar1 = 0x52;
    puVar1[2] = 1;
    puVar1[3] = 1;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    iVar3 = param_1[0x10];
    *(undefined4 *)(iVar3 + 0x54) = 0x47;
    *(undefined4 *)(iVar3 + 0x5c) = 1;
    *(undefined4 *)(iVar3 + 0x60) = 1;
    *(undefined4 *)(iVar3 + 100) = 0;
    *(undefined4 *)(iVar3 + 0x68) = 0;
    *(undefined4 *)(iVar3 + 0x6c) = 0;
    iVar3 = param_1[0x10];
    *(undefined4 *)(iVar3 + 0xa8) = 0x42;
    *(undefined4 *)(iVar3 + 0xb0) = 1;
    *(undefined4 *)(iVar3 + 0xb4) = 1;
    *(undefined4 *)(iVar3 + 0xb8) = 0;
    *(undefined4 *)(iVar3 + 0xbc) = 0;
    *(undefined4 *)(iVar3 + 0xc0) = 0;
    return;
  case 3:
    param_1[0x33] = 1;
    param_1[0xe] = 3;
    puVar1 = (undefined4 *)param_1[0x10];
    *puVar1 = 1;
    puVar1[2] = 2;
    puVar1[3] = 2;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    iVar3 = param_1[0x10];
    *(undefined4 *)(iVar3 + 0x54) = 2;
    *(undefined4 *)(iVar3 + 0x5c) = 1;
    *(undefined4 *)(iVar3 + 0x60) = 1;
    *(undefined4 *)(iVar3 + 100) = 1;
    *(undefined4 *)(iVar3 + 0x68) = 1;
    *(undefined4 *)(iVar3 + 0x6c) = 1;
    iVar3 = param_1[0x10];
    *(undefined4 *)(iVar3 + 0xa8) = 3;
    *(undefined4 *)(iVar3 + 0xb0) = 1;
    *(undefined4 *)(iVar3 + 0xb4) = 1;
    *(undefined4 *)(iVar3 + 0xb8) = 1;
    *(undefined4 *)(iVar3 + 0xbc) = 1;
    *(undefined4 *)(iVar3 + 0xc0) = 1;
    return;
  case 4:
    param_1[0x36] = 1;
    param_1[0xe] = 4;
    puVar1 = (undefined4 *)param_1[0x10];
    *puVar1 = 0x43;
    puVar1[2] = 1;
    puVar1[3] = 1;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    iVar3 = param_1[0x10];
    *(undefined4 *)(iVar3 + 0x54) = 0x4d;
    *(undefined4 *)(iVar3 + 0x5c) = 1;
    *(undefined4 *)(iVar3 + 0x60) = 1;
    *(undefined4 *)(iVar3 + 100) = 0;
    *(undefined4 *)(iVar3 + 0x68) = 0;
    *(undefined4 *)(iVar3 + 0x6c) = 0;
    iVar3 = param_1[0x10];
    *(undefined4 *)(iVar3 + 0xa8) = 0x59;
    *(undefined4 *)(iVar3 + 0xb0) = 1;
    *(undefined4 *)(iVar3 + 0xb4) = 1;
    *(undefined4 *)(iVar3 + 0xb8) = 0;
    *(undefined4 *)(iVar3 + 0xbc) = 0;
    *(undefined4 *)(iVar3 + 0xc0) = 0;
    iVar3 = param_1[0x10];
    *(undefined4 *)(iVar3 + 0xfc) = 0x4b;
    *(undefined4 *)(iVar3 + 0x104) = 1;
    *(undefined4 *)(iVar3 + 0x108) = 1;
    *(undefined4 *)(iVar3 + 0x10c) = 0;
    *(undefined4 *)(iVar3 + 0x110) = 0;
    *(undefined4 *)(iVar3 + 0x114) = 0;
    return;
  case 5:
    param_1[0x36] = 1;
    param_1[0xe] = 4;
    puVar1 = (undefined4 *)param_1[0x10];
    *puVar1 = 1;
    puVar1[2] = 2;
    puVar1[3] = 2;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    iVar3 = param_1[0x10];
    *(undefined4 *)(iVar3 + 0x54) = 2;
    *(undefined4 *)(iVar3 + 0x5c) = 1;
    *(undefined4 *)(iVar3 + 0x60) = 1;
    *(undefined4 *)(iVar3 + 100) = 1;
    *(undefined4 *)(iVar3 + 0x68) = 1;
    *(undefined4 *)(iVar3 + 0x6c) = 1;
    iVar3 = param_1[0x10];
    *(undefined4 *)(iVar3 + 0xa8) = 3;
    *(undefined4 *)(iVar3 + 0xb0) = 1;
    *(undefined4 *)(iVar3 + 0xb4) = 1;
    *(undefined4 *)(iVar3 + 0xb8) = 1;
    *(undefined4 *)(iVar3 + 0xbc) = 1;
    *(undefined4 *)(iVar3 + 0xc0) = 1;
    iVar3 = param_1[0x10];
    *(undefined4 *)(iVar3 + 0xfc) = 4;
    *(undefined4 *)(iVar3 + 0x104) = 2;
    *(undefined4 *)(iVar3 + 0x108) = 2;
    *(undefined4 *)(iVar3 + 0x10c) = 0;
    *(undefined4 *)(iVar3 + 0x110) = 0;
    *(undefined4 *)(iVar3 + 0x114) = 0;
    return;
  default:
    *(undefined4 *)(*param_1 + 0x14) = 10;
    (**(code **)*param_1)();
    return;
  }
}
