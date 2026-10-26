// rea decompile_all
// name: FUN_005c04f4
// address: 0x5c04f4
// body: available
// range: 0x5c04f4-0x5c06bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c04f4(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  if ((0xffdc < param_1[7]) || (0xffdc < param_1[6])) {
    iVar3 = *param_1;
    *(undefined4 *)(iVar3 + 0x14) = 0x28;
    *(undefined4 *)(iVar3 + 0x18) = 0xffdc;
    (**(code **)*param_1)();
  }
  if (param_1[0x34] != 8) {
    iVar3 = *param_1;
    *(undefined4 *)(iVar3 + 0x14) = 0xd;
    *(int *)(iVar3 + 0x18) = param_1[0x34];
    (**(code **)*param_1)();
  }
  if (10 < param_1[8]) {
    iVar3 = *param_1;
    *(undefined4 *)(iVar3 + 0x14) = 0x18;
    *(int *)(iVar3 + 0x18) = param_1[8];
    *(undefined4 *)(iVar3 + 0x1c) = 10;
    (**(code **)*param_1)();
  }
  *(undefined4 *)((int)param_1 + 0x126) = 1;
  *(undefined4 *)((int)param_1 + 0x12a) = 1;
  iVar3 = param_1[0x35];
  for (iVar4 = 0; iVar4 < param_1[8]; iVar4 = iVar4 + 1) {
    if ((((*(int *)(iVar3 + 8) < 1) || (4 < *(int *)(iVar3 + 8))) || (*(int *)(iVar3 + 0xc) < 1)) ||
       (4 < *(int *)(iVar3 + 0xc))) {
      *(undefined4 *)(*param_1 + 0x14) = 0x10;
      (**(code **)*param_1)();
    }
    if (*(int *)(iVar3 + 8) < *(int *)((int)param_1 + 0x126)) {
      uVar1 = *(undefined4 *)((int)param_1 + 0x126);
    }
    else {
      uVar1 = *(undefined4 *)(iVar3 + 8);
    }
    *(undefined4 *)((int)param_1 + 0x126) = uVar1;
    if (*(int *)(iVar3 + 0xc) < *(int *)((int)param_1 + 0x12a)) {
      uVar1 = *(undefined4 *)((int)param_1 + 0x12a);
    }
    else {
      uVar1 = *(undefined4 *)(iVar3 + 0xc);
    }
    *(undefined4 *)((int)param_1 + 0x12a) = uVar1;
    iVar3 = iVar3 + 0x54;
  }
  *(undefined4 *)((int)param_1 + 0x12e) = 8;
  iVar3 = param_1[0x35];
  for (iVar4 = 0; iVar4 < param_1[8]; iVar4 = iVar4 + 1) {
    *(undefined4 *)(iVar3 + 0x24) = 8;
    iVar2 = *(int *)((int)param_1 + 0x126) * 8;
    *(int *)(iVar3 + 0x1c) = (param_1[6] * *(int *)(iVar3 + 8) + iVar2 + -1) / iVar2;
    iVar2 = *(int *)((int)param_1 + 0x12a) * 8;
    *(int *)(iVar3 + 0x20) = (param_1[7] * *(int *)(iVar3 + 0xc) + iVar2 + -1) / iVar2;
    *(int *)(iVar3 + 0x28) =
         (param_1[6] * *(int *)(iVar3 + 8) + *(int *)((int)param_1 + 0x126) + -1) /
         *(int *)((int)param_1 + 0x126);
    *(int *)(iVar3 + 0x2c) =
         (param_1[7] * *(int *)(iVar3 + 0xc) + *(int *)((int)param_1 + 0x12a) + -1) /
         *(int *)((int)param_1 + 0x12a);
    *(undefined4 *)(iVar3 + 0x30) = 1;
    *(undefined4 *)(iVar3 + 0x4c) = 0;
    iVar3 = iVar3 + 0x54;
  }
  iVar3 = *(int *)((int)param_1 + 0x12a) * 8;
  *(int *)((int)param_1 + 0x132) = (iVar3 + param_1[7] + -1) / iVar3;
  if ((*(int *)((int)param_1 + 0x13a) < param_1[8]) || (param_1[0x36] != 0)) {
    *(undefined4 *)(*(int *)((int)param_1 + 0x1a6) + 0x10) = 1;
  }
  else {
    *(undefined4 *)(*(int *)((int)param_1 + 0x1a6) + 0x10) = 0;
  }
  return;
}
