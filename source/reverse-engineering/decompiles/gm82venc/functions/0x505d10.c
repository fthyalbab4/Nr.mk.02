// rea decompile_all
// name: FUN_00505d10
// address: 0x505d10
// body: available
// range: 0x505d10-0x505ea6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00505d10(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;

  bVar7 = 0;
  if (((param_2 == (undefined4 *)0x0) || (param_1 == (undefined4 *)0x0)) || (param_2[7] == 0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    puVar1 = (undefined4 *)param_2[7];
    puVar3 = param_1;
    for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar3 = (undefined4 *)(*(code *)param_1[8])(param_1[10],1,0x16b8);
    if (puVar3 == (undefined4 *)0x0) {
      uVar2 = 0xfffffffc;
    }
    else {
      param_1[7] = puVar3;
      puVar5 = puVar1;
      puVar6 = puVar3;
      for (iVar4 = 0x5ae; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      *puVar3 = param_1;
      uVar2 = (*(code *)param_1[8])(param_1[10],puVar3[9],2);
      puVar3[0xc] = uVar2;
      uVar2 = (*(code *)param_1[8])(param_1[10],puVar3[9],2);
      puVar3[0xe] = uVar2;
      uVar2 = (*(code *)param_1[8])(param_1[10],puVar3[0x11],2);
      puVar3[0xf] = uVar2;
      iVar4 = (*(code *)param_1[8])(param_1[10],puVar3[0x5a5],4);
      puVar3[2] = iVar4;
      if (((puVar3[0xc] == 0) || (puVar3[0xe] == 0)) || ((puVar3[0xf] == 0 || (puVar3[2] == 0)))) {
        FUN_00505c70(param_1);
        uVar2 = 0xfffffffc;
      }
      else {
        FUN_00505260();
        FUN_00505260();
        FUN_00505260();
        FUN_00505260();
        puVar3[4] = (puVar1[4] - puVar1[2]) + puVar3[2];
        puVar3[0x5a7] = iVar4 + (puVar3[0x5a5] & 0xfffffffe);
        puVar3[0x5a4] = puVar3[0x5a5] * 3 + puVar3[2];
        puVar3[0x2c4] = puVar3 + 0x23;
        puVar3[0x2c7] = puVar3 + 0x260;
        puVar3[0x2ca] = puVar3 + 0x29d;
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}
