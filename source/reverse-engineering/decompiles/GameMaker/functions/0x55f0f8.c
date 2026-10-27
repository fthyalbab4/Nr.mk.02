// rea decompile_all
// name: FUN_0055f0f8
// address: 0x55f0f8
// body: available
// range: 0x55f0f8-0x55f27c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0055f0f8(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;

  bVar1 = true;
  puVar2 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x34);
  param_1[0x58] = (int)puVar2;
  *puVar2 = &DAT_0055e958;
  puVar2[1] = FUN_0055e9ac;
  puVar2[2] = 0;
  if (param_1[0x2e] != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x19;
    (**(code **)*param_1)();
  }
  iVar5 = param_1[0x10];
  puVar6 = puVar2 + 3;
  puVar3 = puVar2;
  for (iVar4 = 0; iVar4 < param_1[0xe]; iVar4 = iVar4 + 1) {
    puVar3 = *(undefined4 **)(iVar5 + 8);
    if ((puVar3 == (undefined4 *)param_1[0x39]) && (*(int *)(iVar5 + 0xc) == param_1[0x3a])) {
      if (param_1[0x2f] == 0) {
        *puVar6 = FUN_0055eb40;
      }
      else {
        *puVar6 = FUN_0055ef68;
        puVar2[2] = 1;
      }
    }
    else {
      puVar3 = (undefined4 *)(*(int *)(iVar5 + 8) * 2);
      if ((puVar3 == (undefined4 *)param_1[0x39]) && (*(int *)(iVar5 + 0xc) == param_1[0x3a])) {
        bVar1 = false;
        *puVar6 = FUN_0055eb8c;
      }
      else {
        puVar3 = (undefined4 *)(*(int *)(iVar5 + 8) * 2);
        if ((puVar3 == (undefined4 *)param_1[0x39]) && (*(int *)(iVar5 + 0xc) * 2 == param_1[0x3a]))
        {
          if (param_1[0x2f] == 0) {
            *puVar6 = FUN_0055ec20;
          }
          else {
            *puVar6 = FUN_0055ecd8;
            puVar2[2] = 1;
          }
        }
        else if ((param_1[0x39] % *(int *)(iVar5 + 8) == 0) &&
                (puVar3 = (undefined4 *)(param_1[0x3a] / *(int *)(iVar5 + 0xc)),
                param_1[0x3a] % *(int *)(iVar5 + 0xc) == 0)) {
          bVar1 = false;
          *puVar6 = FUN_0055ea30;
        }
        else {
          *(undefined4 *)(*param_1 + 0x14) = 0x26;
          puVar3 = (undefined4 *)(**(code **)*param_1)();
        }
      }
    }
    puVar6 = puVar6 + 1;
    iVar5 = iVar5 + 0x54;
  }
  if ((param_1[0x2f] != 0) && (!bVar1)) {
    *(undefined4 *)(*param_1 + 0x14) = 99;
    puVar3 = (undefined4 *)(**(code **)(*param_1 + 4))(param_1,0);
  }
  return puVar3;
}
