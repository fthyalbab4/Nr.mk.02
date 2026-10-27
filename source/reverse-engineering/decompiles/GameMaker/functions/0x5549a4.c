// rea decompile_all
// name: FUN_005549a4
// address: 0x5549a4
// body: available
// range: 0x5549a4-0x554a7a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005549a4(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;

  iVar3 = param_1[0x73];
  param_1[0x22] = *(int *)(iVar3 + 0x10);
  param_1[0x21] = *(int *)(iVar3 + 0x14);
  iVar1 = param_1[0x16];
  if (iVar1 == 0) {
    if (param_1[0x1e] == 3) {
      *(code **)(iVar3 + 4) = FUN_005544e8;
    }
    else {
      *(code **)(iVar3 + 4) = FUN_00554448;
    }
  }
  else if (iVar1 == 1) {
    if (param_1[0x1e] == 3) {
      *(code **)(iVar3 + 4) = FUN_00554690;
    }
    else {
      *(code **)(iVar3 + 4) = FUN_00554584;
    }
    *(undefined4 *)(iVar3 + 0x30) = 0;
    if (*(int *)(iVar3 + 0x1c) == 0) {
      FUN_005541d0(param_1);
    }
    if (*(int *)(iVar3 + 0x34) == 0) {
      FUN_005543e0(param_1);
    }
  }
  else if (iVar1 == 2) {
    *(code **)(iVar3 + 4) = FUN_005547a8;
    *(undefined4 *)(iVar3 + 0x54) = 0;
    if (*(int *)(iVar3 + 0x44) == 0) {
      FUN_00554964(param_1);
    }
    iVar1 = param_1[0x1c];
    puVar2 = (undefined4 *)(iVar3 + 0x44);
    for (iVar3 = 0; iVar3 < param_1[0x1e]; iVar3 = iVar3 + 1) {
      FUN_0055af80(*puVar2,iVar1 * 2 + 4);
      puVar2 = puVar2 + 1;
    }
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x30;
    (**(code **)*param_1)();
  }
  return;
}
