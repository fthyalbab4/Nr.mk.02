// rea decompile_all
// name: FUN_0055c904
// address: 0x55c904
// body: available
// range: 0x55c904-0x55cac6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0055c964) */

void FUN_0055c904(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;

  if ((((param_1[8] == 0) || (param_1[7] == 0)) || (param_1[0xe] < 1)) || (param_1[9] < 1)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x20;
    (**(code **)*param_1)();
  }
  if ((0xffdc < param_1[8]) || (0xffdc < param_1[7])) {
    iVar3 = *param_1;
    *(undefined4 *)(iVar3 + 0x14) = 0x29;
    *(undefined4 *)(iVar3 + 0x18) = 0xffdc;
    (**(code **)*param_1)();
  }
  if (param_1[0xd] != 8) {
    iVar3 = *param_1;
    *(undefined4 *)(iVar3 + 0x14) = 0xf;
    *(int *)(iVar3 + 0x18) = param_1[0xd];
    (**(code **)*param_1)();
  }
  if (10 < param_1[0xe]) {
    iVar3 = *param_1;
    *(undefined4 *)(iVar3 + 0x14) = 0x1a;
    *(int *)(iVar3 + 0x18) = param_1[0xe];
    *(undefined4 *)(iVar3 + 0x1c) = 10;
    (**(code **)*param_1)();
  }
  param_1[0x39] = 1;
  param_1[0x3a] = 1;
  iVar3 = param_1[0x10];
  for (iVar4 = 0; iVar4 < param_1[0xe]; iVar4 = iVar4 + 1) {
    if (((*(int *)(iVar3 + 8) < 1) || (4 < *(int *)(iVar3 + 8))) ||
       ((*(int *)(iVar3 + 0xc) < 1 || (4 < *(int *)(iVar3 + 0xc))))) {
      *(undefined4 *)(*param_1 + 0x14) = 0x12;
      (**(code **)*param_1)();
    }
    if (*(int *)(iVar3 + 8) < param_1[0x39]) {
      iVar1 = param_1[0x39];
    }
    else {
      iVar1 = *(int *)(iVar3 + 8);
    }
    param_1[0x39] = iVar1;
    if (*(int *)(iVar3 + 0xc) < param_1[0x3a]) {
      iVar1 = param_1[0x3a];
    }
    else {
      iVar1 = *(int *)(iVar3 + 0xc);
    }
    param_1[0x3a] = iVar1;
    iVar3 = iVar3 + 0x54;
  }
  iVar3 = param_1[0x10];
  for (iVar4 = 0; iVar4 < param_1[0xe]; iVar4 = iVar4 + 1) {
    *(int *)(iVar3 + 4) = iVar4;
    *(undefined4 *)(iVar3 + 0x24) = 8;
    uVar2 = FUN_0055aefc(param_1[7] * *(int *)(iVar3 + 8),param_1[0x39] << 3);
    *(undefined4 *)(iVar3 + 0x1c) = uVar2;
    uVar2 = FUN_0055aefc(param_1[8] * *(int *)(iVar3 + 0xc),param_1[0x3a] << 3);
    *(undefined4 *)(iVar3 + 0x20) = uVar2;
    uVar2 = FUN_0055aefc(param_1[7] * *(int *)(iVar3 + 8),param_1[0x39]);
    *(undefined4 *)(iVar3 + 0x28) = uVar2;
    uVar2 = FUN_0055aefc(param_1[8] * *(int *)(iVar3 + 0xc),param_1[0x3a]);
    *(undefined4 *)(iVar3 + 0x2c) = uVar2;
    *(undefined4 *)(iVar3 + 0x30) = 1;
    iVar3 = iVar3 + 0x54;
  }
  iVar3 = FUN_0055aefc(param_1[8],param_1[0x3a] << 3);
  param_1[0x3b] = iVar3;
  return;
}
