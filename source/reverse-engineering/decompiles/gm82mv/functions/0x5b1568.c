// rea decompile_all
// name: FUN_005b1568
// address: 0x5b1568
// body: available
// range: 0x5b1568-0x5b160d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b1568(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;

  if (param_2 != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 4;
    (**(code **)*param_1)();
  }
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x40,param_3);
  param_1[0x54] = (int)puVar1;
  *puVar1 = FUN_005b10d4;
  if (*(int *)(param_1[0x58] + 8) == 0) {
    puVar1[1] = FUN_005b1148;
    puVar1 = puVar1 + 2;
    iVar3 = param_1[0x10];
    for (iVar4 = 0; iVar4 < param_1[0xe]; iVar4 = iVar4 + 1) {
      uVar2 = (**(code **)(param_1[1] + 8))
                        (param_1,1,
                         (*(int *)(iVar3 + 0x1c) * 8 * param_1[0x39]) / *(int *)(iVar3 + 8),
                         param_1[0x3a]);
      *puVar1 = uVar2;
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 + 0x54;
    }
  }
  else {
    puVar1[1] = FUN_005b12a8;
    FUN_005b1450(param_1);
  }
  return;
}
