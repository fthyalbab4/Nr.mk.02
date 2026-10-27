// rea decompile_all
// name: FUN_005a4f28
// address: 0x5a4f28
// body: available
// range: 0x5a4f28-0x5a5113 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a4f28(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;

  if (param_1[5] != 0xca) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x14;
    *(int *)(iVar1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  if ((uint)param_1[0xd] < (uint)(param_1[0xc] << 3)) {
    if ((uint)param_1[0xd] < (uint)(param_1[0xc] << 2)) {
      if ((uint)param_1[0xd] < (uint)(param_1[0xc] * 2)) {
        param_1[0x1c] = param_1[7];
        param_1[0x1d] = param_1[8];
        param_1[0x4f] = 8;
      }
      else {
        iVar1 = FUN_005aea40(param_1[7],2);
        param_1[0x1c] = iVar1;
        iVar1 = FUN_005aea40(param_1[8],2);
        param_1[0x1d] = iVar1;
        param_1[0x4f] = 4;
      }
    }
    else {
      iVar1 = FUN_005aea40(param_1[7],4);
      param_1[0x1c] = iVar1;
      iVar1 = FUN_005aea40(param_1[8],4);
      param_1[0x1d] = iVar1;
      param_1[0x4f] = 2;
    }
  }
  else {
    iVar1 = FUN_005aea40(param_1[7],8);
    param_1[0x1c] = iVar1;
    iVar1 = FUN_005aea40(param_1[8],8);
    param_1[0x1d] = iVar1;
    param_1[0x4f] = 1;
  }
  iVar1 = param_1[0x36];
  for (iVar5 = 0; iVar5 < param_1[9]; iVar5 = iVar5 + 1) {
    for (iVar2 = param_1[0x4f];
        ((iVar2 < 8 && (*(int *)(iVar1 + 8) * iVar2 * 2 <= param_1[0x4d] * param_1[0x4f])) &&
        (*(int *)(iVar1 + 0xc) * iVar2 * 2 <= param_1[0x4e] * param_1[0x4f])); iVar2 = iVar2 * 2) {
    }
    *(int *)(iVar1 + 0x24) = iVar2;
    iVar1 = iVar1 + 0x54;
  }
  iVar1 = param_1[0x36];
  for (iVar5 = 0; iVar5 < param_1[9]; iVar5 = iVar5 + 1) {
    uVar3 = FUN_005aea40(*(int *)(iVar1 + 8) * *(int *)(iVar1 + 0x24) * param_1[7],
                         param_1[0x4d] << 3);
    *(undefined4 *)(iVar1 + 0x28) = uVar3;
    uVar3 = FUN_005aea40(*(int *)(iVar1 + 0xc) * *(int *)(iVar1 + 0x24) * param_1[8],
                         param_1[0x4e] << 3);
    *(undefined4 *)(iVar1 + 0x2c) = uVar3;
    iVar1 = iVar1 + 0x54;
  }
  iVar1 = param_1[0xb];
  if (iVar1 == 1) {
    param_1[0x1e] = 1;
    uVar4 = 0;
  }
  else {
    uVar4 = iVar1 - 4;
    if (iVar1 - 2U < 2) {
      param_1[0x1e] = 3;
    }
    else {
      bVar6 = uVar4 < 2;
      uVar4 = iVar1 - 6;
      if (bVar6) {
        param_1[0x1e] = 4;
      }
      else {
        param_1[0x1e] = param_1[9];
      }
    }
  }
  if (param_1[0x15] == 0) {
    iVar1 = param_1[0x1e];
  }
  else {
    iVar1 = 1;
  }
  param_1[0x1f] = iVar1;
  iVar1 = FUN_005a4e98(param_1,iVar1,uVar4);
  if (iVar1 == 0) {
    param_1[0x20] = 1;
  }
  else {
    param_1[0x20] = param_1[0x4e];
  }
  return;
}
