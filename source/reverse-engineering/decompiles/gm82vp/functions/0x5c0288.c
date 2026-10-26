// rea decompile_all
// name: FUN_005c0288
// address: 0x5c0288
// body: available
// range: 0x5c0288-0x5c038b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c0288(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;

  iVar1 = param_1[1];
  if ((param_2 < 0) || (1 < param_2)) {
    iVar4 = *param_1;
    *(undefined4 *)(iVar4 + 0x14) = 0xc;
    *(int *)(iVar4 + 0x18) = param_2;
    (**(code **)*param_1)();
  }
  if (param_2 == 1) {
    for (iVar4 = *(int *)(iVar1 + 0x40); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x2c)) {
      if (*(int *)(iVar4 + 0x28) != 0) {
        *(undefined4 *)(iVar4 + 0x28) = 0;
        (**(code **)(iVar4 + 0x38))(param_1,iVar4 + 0x30);
      }
    }
    *(undefined4 *)(iVar1 + 0x40) = 0;
    for (iVar4 = *(int *)(iVar1 + 0x44); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x2c)) {
      if (*(int *)(iVar4 + 0x28) != 0) {
        *(undefined4 *)(iVar4 + 0x28) = 0;
        (**(code **)(iVar4 + 0x38))(param_1,iVar4 + 0x30);
      }
    }
    *(undefined4 *)(iVar1 + 0x44) = 0;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x38 + param_2 * 4);
  *(undefined4 *)(iVar1 + 0x38 + param_2 * 4) = 0;
  while (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*puVar2;
    iVar4 = puVar2[1] + puVar2[2] + 0xc;
    FUN_005c04c8(param_1,puVar2,iVar4);
    *(int *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x48) - iVar4;
    puVar2 = puVar3;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x30 + param_2 * 4);
  *(undefined4 *)(iVar1 + 0x30 + param_2 * 4) = 0;
  while (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*puVar2;
    iVar4 = puVar2[1] + puVar2[2] + 0xc;
    FUN_005c04b8(param_1,puVar2,iVar4);
    *(int *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x48) - iVar4;
    puVar2 = puVar3;
  }
  return;
}
