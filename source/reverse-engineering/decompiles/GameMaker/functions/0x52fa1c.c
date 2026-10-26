// rea decompile_all
// name: FUN_0052fa1c
// address: 0x52fa1c
// body: available
// range: 0x52fa1c-0x52fb41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0052fa1c(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  int iStack_214;
  int iStack_210;
  byte abStack_20c [248];
  byte abStack_114 [8];
  undefined1 auStack_10c [256];

  iStack_210 = 0x52fa2e;
  iVar2 = FUN_0052f024(param_1);
  iStack_210 = 0x52fa37;
  iVar3 = FUN_0052f024(param_1);
  if (0 < iVar2) {
    do {
      iStack_210 = 0x52fa44;
      FUN_0052f024(param_1);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iStack_210 = 0x52fa55;
  pbVar5 = abStack_20c;
  (**(code **)(*param_1 + 0xc))(param_1,abStack_20c,0x100);
  if (0 < iVar3) {
    do {
      iStack_210 = 0x52fa62;
      FUN_0052f024(param_1);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar2 = 0;
  do {
    auStack_10c[*pbVar5] = (char)iVar2;
    iVar2 = iVar2 + 1;
    pbVar5 = pbVar5 + 1;
  } while (iVar2 != 0x100);
  iStack_210 = 0x52fa88;
  puVar4 = (undefined4 *)FUN_00405a4c(&LAB_00433630,CONCAT31((int3)((uint)pbVar5 >> 8),1));
  iStack_210 = 0x52fa91;
  iStack_214 = FUN_0052f024(param_1);
  iStack_210 = iStack_214 >> 0x1f;
  FUN_0043f4f8(puVar4,param_1);
  iVar2 = puVar4[1];
  iVar3 = (**(code **)*puVar4)();
  iVar3 = iVar3 + -1;
  if (0 < iVar3) {
    do {
      uVar6 = ((uint)abStack_114[*(byte *)(iVar2 + iVar3)] - (uint)*(byte *)(iVar2 + -1 + iVar3)) -
              iVar3 & 0x800000ff;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xffffff00) + 1;
      }
      if ((int)uVar6 < 0) {
        uVar6 = uVar6 + 0x100;
      }
      *(char *)(iVar2 + iVar3) = (char)uVar6;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = (**(code **)*puVar4)();
  uVar6 = iVar3 - 1;
  if (-1 < (int)uVar6) {
    do {
      uVar7 = uVar6 & 0x800000ff;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xffffff00) + 1;
      }
      iVar3 = uVar6 - *(byte *)((int)&iStack_214 + uVar7);
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      uVar1 = *(undefined1 *)(iVar2 + uVar6);
      *(undefined1 *)(iVar2 + uVar6) = *(undefined1 *)(iVar2 + iVar3);
      *(undefined1 *)(iVar2 + iVar3) = uVar1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0xffffffff);
  }
  FUN_0043f254(puVar4);
  return puVar4;
}
