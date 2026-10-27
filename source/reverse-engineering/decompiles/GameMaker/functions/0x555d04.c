// rea decompile_all
// name: FUN_00555d04
// address: 0x555d04
// body: available
// range: 0x555d04-0x555e23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00555d04(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;

  puVar2 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x2c);
  param_1[0x73] = (int)puVar2;
  *puVar2 = FUN_00555be8;
  puVar2[3] = &LAB_00555cf4;
  puVar2[8] = 0;
  puVar2[10] = 0;
  if (param_1[0x1e] != 3) {
    *(undefined4 *)(*param_1 + 0x14) = 0x2f;
    (**(code **)*param_1)();
  }
  uVar3 = (**(code **)param_1[1])(param_1,1,0x80);
  puVar2[6] = uVar3;
  iVar4 = 0;
  do {
    uVar3 = (**(code **)(param_1[1] + 4))(param_1,1,0x1000);
    *(undefined4 *)(puVar2[6] + iVar4 * 4) = uVar3;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x20);
  puVar2[7] = 1;
  if (param_1[0x1b] == 0) {
    puVar2[4] = 0;
  }
  else {
    iVar4 = param_1[0x18];
    if (iVar4 < 8) {
      iVar1 = *param_1;
      *(undefined4 *)(iVar1 + 0x14) = 0x38;
      *(undefined4 *)(iVar1 + 0x18) = 8;
      (**(code **)*param_1)();
    }
    if (0x100 < iVar4) {
      iVar1 = *param_1;
      *(undefined4 *)(iVar1 + 0x14) = 0x39;
      *(undefined4 *)(iVar1 + 0x18) = 0x100;
      (**(code **)*param_1)();
    }
    uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,iVar4,3);
    puVar2[4] = uVar3;
    puVar2[5] = iVar4;
  }
  if (param_1[0x16] != 0) {
    param_1[0x16] = 2;
  }
  if (param_1[0x16] == 2) {
    uVar3 = (**(code **)(param_1[1] + 4))(param_1,1,param_1[0x1c] * 6 + 0xc);
    puVar2[8] = uVar3;
    FUN_00555b2c(param_1);
  }
  return;
}
