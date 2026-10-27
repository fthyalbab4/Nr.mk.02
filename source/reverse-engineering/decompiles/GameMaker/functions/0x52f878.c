// rea decompile_all
// name: FUN_0052f878
// address: 0x52f878
// body: available
// range: 0x52f878-0x52fa1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052f878(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte local_113 [259];

  FUN_00404788();
  iVar8 = 0;
  pbVar3 = local_113;
  do {
    *pbVar3 = (byte)iVar8;
    iVar8 = iVar8 + 1;
    pbVar3 = pbVar3 + 1;
  } while (iVar8 != 0x100);
  iVar8 = 0x100;
  pbVar3 = local_113;
  do {
    bVar1 = *pbVar3;
    iVar4 = FUN_004047b0(0xff);
    *pbVar3 = local_113[iVar4];
    local_113[iVar4] = bVar1;
    pbVar3 = pbVar3 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  iVar8 = FUN_004047b0(500);
  iVar8 = iVar8 + 100;
  iVar4 = FUN_004047b0(500);
  iVar4 = iVar4 + 100;
  FUN_0052f12c(param_1,iVar8);
  FUN_0052f12c(param_1,iVar4);
  if (0 < iVar8) {
    do {
      uVar5 = FUN_004047b0(0xfffffff);
      FUN_0052f12c(param_1,uVar5);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  (**(code **)(*param_1 + 0x10))(param_1,local_113,0x100);
  if (0 < iVar4) {
    do {
      uVar5 = FUN_004047b0(0xfffffff);
      FUN_0052f12c(param_1,uVar5);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_0043f254(param_2);
  iVar8 = param_2[1];
  iVar4 = (**(code **)*param_2)();
  if (-1 < iVar4 + -1) {
    uVar9 = 0;
    do {
      uVar6 = uVar9 & 0x800000ff;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xffffff00) + 1;
      }
      iVar7 = uVar9 - local_113[uVar6];
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      uVar2 = *(undefined1 *)(iVar8 + uVar9);
      *(undefined1 *)(iVar8 + uVar9) = *(undefined1 *)(iVar8 + iVar7);
      *(undefined1 *)(iVar8 + iVar7) = uVar2;
      uVar9 = uVar9 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = (**(code **)*param_2)();
  iVar4 = iVar4 + -1;
  if (0 < iVar4) {
    iVar7 = 1;
    do {
      uVar9 = (uint)*(byte *)(iVar8 + iVar7) + (uint)*(byte *)(iVar8 + -1 + iVar7) + iVar7 &
              0x800000ff;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xffffff00) + 1;
      }
      *(byte *)(iVar8 + iVar7) = local_113[uVar9];
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_0043f254(param_2);
  uVar5 = (**(code **)*param_2)();
  FUN_0052f12c(param_1,uVar5);
  FUN_0043f4f8(param_1,param_2);
  return;
}
