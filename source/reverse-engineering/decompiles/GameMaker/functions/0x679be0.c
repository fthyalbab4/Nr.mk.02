// rea decompile_all
// name: FUN_00679be0
// address: 0x679be0
// body: available
// range: 0x679be0-0x679d0c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00679be0(int param_1)

{
  byte bVar1;
  int iVar2;
  HDC pHVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;

  FUN_0045bda4(*(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x48),0);
  FUN_00679e90(param_1);
  iVar2 = FUN_00677f54();
  FUN_0045b850(*(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x44),*(undefined4 *)(iVar2 + 0x74));
  iVar2 = FUN_00679e90(param_1);
  bVar1 = *(byte *)(iVar2 + 0x28f);
  if (bVar1 < 2) {
    puVar8 = &DAT_005a0049;
    iVar7 = 2;
    iVar6 = 6;
    iVar5 = 0;
    iVar2 = 0;
    pHVar3 = (HDC)FUN_0045ce2c(*(undefined4 *)(param_1 + 0x1a8));
    PatBlt(pHVar3,iVar2,iVar5,iVar6,iVar7,(DWORD)puVar8);
    puVar8 = &DAT_005a0049;
    iVar2 = FUN_004edfcc(param_1);
    iVar2 = iVar2 + -4;
    iVar7 = 2;
    iVar6 = 2;
    iVar5 = 2;
    pHVar3 = (HDC)FUN_0045ce2c(*(undefined4 *)(param_1 + 0x1a8));
    PatBlt(pHVar3,iVar5,iVar6,iVar7,iVar2,(DWORD)puVar8);
    puVar8 = &DAT_005a0049;
    iVar2 = FUN_004edfcc(param_1);
    iVar7 = 6;
    iVar5 = FUN_004edfcc(param_1);
    iVar5 = iVar5 + -2;
    iVar6 = 0;
    pHVar3 = (HDC)FUN_0045ce2c(*(undefined4 *)(param_1 + 0x1a8));
    uVar4 = PatBlt(pHVar3,iVar6,iVar5,iVar7,iVar2,(DWORD)puVar8);
    return uVar4;
  }
  uVar4 = (uint)(byte)(bVar1 - 4);
  if ((byte)(bVar1 - 2) < 2) {
    puVar8 = &DAT_005a0049;
    iVar7 = 6;
    iVar6 = 2;
    iVar5 = 0;
    iVar2 = 0;
    pHVar3 = (HDC)FUN_0045ce2c(*(undefined4 *)(param_1 + 0x1a8));
    PatBlt(pHVar3,iVar2,iVar5,iVar6,iVar7,(DWORD)puVar8);
    puVar8 = &DAT_005a0049;
    iVar7 = 2;
    iVar2 = FUN_004edf8c(param_1);
    iVar2 = iVar2 + -6;
    iVar6 = 2;
    iVar5 = 2;
    pHVar3 = (HDC)FUN_0045ce2c(*(undefined4 *)(param_1 + 0x1a8));
    PatBlt(pHVar3,iVar5,iVar6,iVar2,iVar7,(DWORD)puVar8);
    puVar8 = &DAT_005a0049;
    iVar7 = 6;
    iVar6 = 2;
    iVar5 = 0;
    iVar2 = FUN_004edf8c(param_1);
    iVar2 = iVar2 + -4;
    pHVar3 = (HDC)FUN_0045ce2c(*(undefined4 *)(param_1 + 0x1a8));
    uVar4 = PatBlt(pHVar3,iVar2,iVar5,iVar6,iVar7,(DWORD)puVar8);
  }
  return uVar4;
}
