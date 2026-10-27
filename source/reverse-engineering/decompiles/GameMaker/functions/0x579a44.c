// rea decompile_all
// name: FUN_00579a44
// address: 0x579a44
// body: available
// range: 0x579a44-0x579b72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00579a44(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;

  iVar1 = param_1[1];
  if (0x3b9ac9f4 < param_3) {
    FUN_00579a30(param_1,1);
  }
  if ((param_3 & 7) != 0) {
    param_3 = param_3 + (8 - (param_3 & 7));
  }
  if ((param_2 < 0) || (1 < param_2)) {
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x14) = 0xc;
    *(int *)(iVar2 + 0x18) = param_2;
    (**(code **)*param_1)();
  }
  puVar3 = (undefined4 *)0x0;
  for (puVar4 = *(undefined4 **)(iVar1 + 0x30 + param_2 * 4);
      (puVar4 != (undefined4 *)0x0 && ((uint)puVar4[2] < param_3)); puVar4 = (undefined4 *)*puVar4)
  {
    puVar3 = puVar4;
  }
  if (puVar4 == (undefined4 *)0x0) {
    iVar2 = param_3 + 0xc;
    if (puVar3 == (undefined4 *)0x0) {
      uVar5 = *(uint *)(&DAT_0077c0a4 + param_2 * 4);
    }
    else {
      uVar5 = *(uint *)(&DAT_0077c0ac + param_2 * 4);
    }
    if (1000000000U - iVar2 < uVar5) {
      uVar5 = 1000000000U - iVar2;
    }
    while (puVar4 = (undefined4 *)FUN_0057a64c(param_1,iVar2 + uVar5), puVar4 == (undefined4 *)0x0)
    {
      uVar5 = uVar5 / 2;
      if (uVar5 < 0x32) {
        FUN_00579a30(param_1,2);
      }
    }
    *(uint *)(iVar1 + 0x48) = iVar2 + uVar5 + *(int *)(iVar1 + 0x48);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = uVar5 + param_3;
    if (puVar3 == (undefined4 *)0x0) {
      *(undefined4 **)(iVar1 + 0x30 + param_2 * 4) = puVar4;
    }
    else {
      *puVar3 = puVar4;
    }
  }
  iVar1 = puVar4[1];
  puVar4[1] = puVar4[1] + param_3;
  puVar4[2] = puVar4[2] - param_3;
  return (int)puVar4 + iVar1 + 0xc;
}
