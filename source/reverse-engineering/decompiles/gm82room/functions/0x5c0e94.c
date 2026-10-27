// rea decompile_all
// name: FUN_005c0e94
// address: 0x5c0e94
// body: available
// range: 0x5c0e94-0x5c1083 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c0e94(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  if (param_1[4] != 0xca) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x12;
    *(int *)(iVar1 + 0x18) = param_1[4];
    (**(code **)*param_1)();
  }
  if ((uint)param_1[0xc] < (uint)(param_1[0xb] << 3)) {
    if ((uint)param_1[0xc] < (uint)(param_1[0xb] << 2)) {
      if ((uint)param_1[0xc] < (uint)(param_1[0xb] * 2)) {
        param_1[0x1b] = param_1[6];
        param_1[0x1c] = param_1[7];
        *(undefined4 *)((int)param_1 + 0x12e) = 8;
      }
      else {
        iVar1 = (int)(param_1[6] + 1U) >> 1;
        if (iVar1 < 0) {
          iVar1 = iVar1 + (uint)((param_1[6] + 1U & 1) != 0);
        }
        param_1[0x1b] = iVar1;
        iVar1 = (int)(param_1[7] + 1U) >> 1;
        if (iVar1 < 0) {
          iVar1 = iVar1 + (uint)((param_1[7] + 1U & 1) != 0);
        }
        param_1[0x1c] = iVar1;
        *(undefined4 *)((int)param_1 + 0x12e) = 4;
      }
    }
    else {
      iVar1 = param_1[6] + 3;
      if (iVar1 < 0) {
        iVar1 = param_1[6] + 6;
      }
      param_1[0x1b] = iVar1 >> 2;
      iVar1 = param_1[7] + 3;
      if (iVar1 < 0) {
        iVar1 = param_1[7] + 6;
      }
      param_1[0x1c] = iVar1 >> 2;
      *(undefined4 *)((int)param_1 + 0x12e) = 2;
    }
  }
  else {
    iVar1 = param_1[6] + 7;
    if (iVar1 < 0) {
      iVar1 = param_1[6] + 0xe;
    }
    param_1[0x1b] = iVar1 >> 3;
    iVar1 = param_1[7] + 7;
    if (iVar1 < 0) {
      iVar1 = param_1[7] + 0xe;
    }
    param_1[0x1c] = iVar1 >> 3;
    *(undefined4 *)((int)param_1 + 0x12e) = 1;
  }
  iVar1 = param_1[0x35];
  for (iVar2 = 0; iVar2 < param_1[8]; iVar2 = iVar2 + 1) {
    for (iVar3 = *(int *)((int)param_1 + 0x12e);
        ((iVar3 < 8 &&
         (*(int *)(iVar1 + 8) * iVar3 * 2 <=
          *(int *)((int)param_1 + 0x126) * *(int *)((int)param_1 + 0x12e))) &&
        (*(int *)(iVar1 + 0xc) * iVar3 * 2 <=
         *(int *)((int)param_1 + 0x12a) * *(int *)((int)param_1 + 0x12e))); iVar3 = iVar3 * 2) {
    }
    *(int *)(iVar1 + 0x24) = iVar3;
    iVar1 = iVar1 + 0x54;
  }
  iVar1 = param_1[0x35];
  for (iVar2 = 0; iVar2 < param_1[8]; iVar2 = iVar2 + 1) {
    iVar3 = *(int *)((int)param_1 + 0x126) * 8;
    *(int *)(iVar1 + 0x28) =
         (*(int *)(iVar1 + 8) * *(int *)(iVar1 + 0x24) * param_1[6] + iVar3 + -1) / iVar3;
    iVar3 = *(int *)((int)param_1 + 0x12a) * 8;
    *(int *)(iVar1 + 0x2c) =
         (*(int *)(iVar1 + 0xc) * *(int *)(iVar1 + 0x24) * param_1[7] + iVar3 + -1) / iVar3;
    iVar1 = iVar1 + 0x54;
  }
  iVar1 = param_1[10];
  if (iVar1 == 1) {
    param_1[0x1d] = 1;
  }
  else if (iVar1 - 2U < 2) {
    param_1[0x1d] = 3;
  }
  else if (iVar1 - 4U < 2) {
    param_1[0x1d] = 4;
  }
  else {
    param_1[0x1d] = param_1[8];
  }
  if (param_1[0x14] == 0) {
    iVar1 = param_1[0x1d];
  }
  else {
    iVar1 = 1;
  }
  param_1[0x1e] = iVar1;
  iVar1 = FUN_005c0e04(param_1);
  if (iVar1 == 0) {
    param_1[0x1f] = 1;
  }
  else {
    param_1[0x1f] = *(int *)((int)param_1 + 0x12a);
  }
  return;
}
