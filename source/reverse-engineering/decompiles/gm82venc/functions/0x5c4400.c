// rea decompile_all
// name: FUN_005c4400
// address: 0x5c4400
// body: available
// range: 0x5c4400-0x5c44db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c4400(int *param_1)

{
  int iVar1;
  int iVar2;

  iVar2 = *(int *)((int)param_1 + 0x1be);
  param_1[0x21] = *(int *)(iVar2 + 0x10);
  param_1[0x20] = *(int *)(iVar2 + 0x14);
  iVar1 = param_1[0x15];
  if (iVar1 == 0) {
    if (param_1[0x1d] == 3) {
      *(code **)(iVar2 + 4) = FUN_005c3f38;
    }
    else {
      *(code **)(iVar2 + 4) = FUN_005c3e98;
    }
  }
  else if (iVar1 == 1) {
    if (param_1[0x1d] == 3) {
      *(code **)(iVar2 + 4) = FUN_005c40e8;
    }
    else {
      *(code **)(iVar2 + 4) = FUN_005c3fd4;
    }
    *(undefined4 *)(iVar2 + 0x30) = 0;
    if (*(int *)(iVar2 + 0x1c) == 0) {
      FUN_005c3c20(param_1);
    }
    if (*(int *)(iVar2 + 0x34) == 0) {
      FUN_005c3e30(param_1);
    }
  }
  else if (iVar1 == 2) {
    *(code **)(iVar2 + 4) = FUN_005c4200;
    *(undefined4 *)(iVar2 + 0x54) = 0;
    if (*(int *)(iVar2 + 0x44) == 0) {
      FUN_005c43c0(param_1);
    }
    for (iVar2 = 0; iVar2 < param_1[0x1d]; iVar2 = iVar2 + 1) {
      FUN_005bf288();
    }
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x2f;
    (**(code **)*param_1)();
  }
  return;
}
