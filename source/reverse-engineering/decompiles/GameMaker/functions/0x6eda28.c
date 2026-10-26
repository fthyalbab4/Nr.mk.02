// rea decompile_all
// name: FUN_006eda28
// address: 0x6eda28
// body: available
// range: 0x6eda28-0x6edbec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006eda28(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uStack_34;
  undefined8 uStack_2c;

  if (*(int *)(param_1 + 0x5e8) == 0) {
    return;
  }
  cVar2 = (**(code **)(**(int **)(param_1 + 0x450) + 0xec))();
  if (cVar2 != '\0') {
    uVar3 = FUN_006e6624(*(undefined4 *)(param_1 + 0x5e8));
    uVar4 = FUN_005a540c(*(undefined4 *)(param_1 + 0x5f8),0xff);
    uVar5 = FUN_006e660c(*(undefined4 *)(param_1 + 0x5e8));
    uVar3 = FUN_00701c94(&DAT_00700d94,1,uVar5,uVar4,uVar3);
    piVar6 = (int *)FUN_0070399c(uVar3);
    cVar2 = FUN_0064de18(*(undefined4 *)(param_1 + 0x600));
    if (cVar2 != '\0') {
      uVar4 = FUN_0064e048(*(undefined4 *)(param_1 + 0x600));
      if (((*(char *)(param_1 + 0x604) == '\0') || (iVar7 = FUN_0062db94(uVar4), iVar7 < 1)) ||
         (iVar7 = FUN_0062db9c(uVar4), iVar7 < 1)) {
        uStack_34 = 1.0;
        uStack_2c = 1.0;
      }
      else {
        iVar7 = (**(code **)(*piVar6 + 0x30))();
        iVar8 = FUN_0062db94(uVar4);
        uStack_34 = (double)iVar7 / (double)iVar8;
        iVar7 = (**(code **)(*piVar6 + 0x24))();
        iVar8 = FUN_0062db9c(uVar4);
        uStack_2c = (double)iVar7 / (double)iVar8;
      }
      uVar10 = 0;
      uVar5 = (**(code **)(*piVar6 + 0x30))();
      uVar9 = (**(code **)(*piVar6 + 0x24))();
      FUN_0062deb4(uVar4,piVar6,0,0x3f800000,(undefined4)uStack_2c,uStack_2c._4_4_,
                   (undefined4)uStack_34,uStack_34._4_4_,1,1,0,0,uVar9,uVar5,uVar10);
    }
    iVar7 = *(int *)(*(int *)(param_1 + 0x5e8) + 4);
    if (0 < iVar7) {
      if (iVar7 <= *(int *)(param_1 + 0x5fc)) {
        *(undefined4 *)(param_1 + 0x5fc) = 0;
      }
      uVar9 = 0;
      uVar5 = 1;
      uVar4 = FUN_006e663c(*(undefined4 *)(param_1 + 0x5e8),*(undefined4 *)(param_1 + 0x5fc));
      FUN_00703978(uVar4,piVar6,0,uVar5,uVar9);
      *(int *)(param_1 + 0x5fc) = *(int *)(param_1 + 0x5fc) + 1;
    }
    piVar1 = *(int **)(*(int *)(param_1 + 0x458) + 0x1b0);
    (**(code **)(*piVar1 + 8))(piVar1,piVar6);
    FUN_00405a7c(piVar6);
    FUN_00405a7c(uVar3);
    return;
  }
  return;
}
