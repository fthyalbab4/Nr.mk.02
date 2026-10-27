// rea decompile_all
// name: FUN_00568aa8
// address: 0x568aa8
// body: available
// range: 0x568aa8-0x568c53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00568aa8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;

  puVar3 = PTR_DAT_00689570;
  (**(code **)(**(int **)PTR_DAT_00689570 + 0x98))();
  (**(code **)PTR_DAT_00688e6c)();
  (**(code **)PTR_DAT_00689630)();
  (**(code **)(**(int **)puVar3 + 0x94))();
  FUN_006212b0(param_2);
  uVar9 = 0x152;
  piVar8 = *(int **)puVar3;
  (**(code **)(*piVar8 + 0x130))();
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      FUN_005683d4(param_1 + 4,param_1 + 8,param_1 + 0xc,0xffffffff);
      uVar4 = FUN_00568728(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
      *(undefined4 *)(param_1 + 0x2c) = uVar4;
    }
    for (iVar1 = *(int *)(param_1 + 0x2c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      uVar7 = 0x24;
      uVar4 = *(undefined4 *)(iVar1 + 0xc);
      uVar6 = 0;
      piVar5 = *(int **)puVar3;
      (**(code **)(*piVar5 + 0x14c))();
      iVar2 = **(int **)puVar3;
      (**(code **)(iVar2 + 0x118))
                (iVar2,*(int *)(iVar1 + 8) % 3,3,*(int **)puVar3,4,0,*(int *)(iVar1 + 8) / 3,piVar5,
                 uVar6,uVar4,uVar7,piVar8,uVar9);
    }
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    if (*(int *)(param_1 + 0x30) == 0) {
      uVar9 = FUN_00568728(*(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
      *(undefined4 *)(param_1 + 0x30) = uVar9;
    }
    for (iVar1 = *(int *)(param_1 + 0x30); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      (**(code **)(**(int **)puVar3 + 0x14c))();
      (**(code **)(**(int **)puVar3 + 0x118))();
    }
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (*(int *)(param_1 + 0x34) == 0) {
      uVar9 = FUN_00568728(*(int *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x24));
      *(undefined4 *)(param_1 + 0x34) = uVar9;
    }
    for (iVar1 = *(int *)(param_1 + 0x34); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      (**(code **)(**(int **)puVar3 + 0x14c))();
      (**(code **)(**(int **)puVar3 + 0x118))();
    }
  }
  (**(code **)(**(int **)puVar3 + 0x94))();
  return;
}
