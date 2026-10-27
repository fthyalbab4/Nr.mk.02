// rea decompile_all
// name: FUN_0064cbf8
// address: 0x64cbf8
// body: available
// range: 0x64cbf8-0x64cdb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064cbf8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iStack_24;
  int iStack_20;
  int iStack_18;
  int iStack_14;

  uVar1 = FUN_0062db9c(*(undefined4 *)(param_1 + 0x3f0));
  uVar2 = FUN_0062db94(*(undefined4 *)(param_1 + 0x3f0));
  uVar1 = FUN_005b5764(uVar2,uVar1);
  FUN_007034e0(uVar1,0,0,1,*(undefined4 *)(*(int *)(param_1 + 0x3f0) + 4));
  uVar2 = FUN_0070399c(uVar1);
  FUN_00405a7c(uVar1);
  piVar3 = *(int **)(*(int *)(param_1 + 0x394) + 0x1b0);
  (**(code **)(*piVar3 + 8))(piVar3,uVar2);
  iVar4 = *(int *)(param_1 + 0x3f0);
  if (((*(char *)(iVar4 + 8) != '\0') && (2 < *(int *)(iVar4 + 0xc))) &&
     (2 < *(int *)(iVar4 + 0x10))) {
    piVar3 = (int *)FUN_0045f64c(*(undefined4 *)(*(int *)(param_1 + 0x394) + 0x1b0));
    iVar4 = FUN_00462a64(piVar3);
    FUN_0045b850(*(undefined4 *)(iVar4 + 0x44),0xffffff);
    iVar4 = FUN_00462a64(piVar3);
    FUN_0045b954(*(undefined4 *)(iVar4 + 0x44),0xe);
    iVar4 = FUN_00462a64(piVar3);
    FUN_0045b9a4(*(undefined4 *)(iVar4 + 0x44),1);
    iVar4 = FUN_00462a64(piVar3);
    FUN_0045bda4(*(undefined4 *)(iVar4 + 0x48),1);
    iStack_18 = (**(code **)(*piVar3 + 0x30))();
    iStack_18 = iStack_18 / *(int *)(*(int *)(param_1 + 0x3f0) + 0xc);
    if (-1 < iStack_18 + 1) {
      iStack_18 = iStack_18 + 2;
      iStack_24 = 0;
      do {
        iStack_14 = (**(code **)(*piVar3 + 0x24))();
        iStack_14 = iStack_14 / *(int *)(*(int *)(param_1 + 0x3f0) + 0x10);
        if (-1 < iStack_14 + 1) {
          iStack_14 = iStack_14 + 2;
          iStack_20 = 0;
          do {
            iVar4 = *(int *)(param_1 + 0x3f0);
            iVar7 = (*(int *)(iVar4 + 0xc) + *(int *)(iVar4 + 0x1c)) * iStack_24 +
                    *(int *)(iVar4 + 0x14);
            iVar8 = (*(int *)(iVar4 + 0x10) + *(int *)(iVar4 + 0x20)) * iStack_20 +
                    *(int *)(iVar4 + 0x18);
            iVar4 = *(int *)(*(int *)(param_1 + 0x3f0) + 0xc) + iVar7;
            iVar5 = *(int *)(*(int *)(param_1 + 0x3f0) + 0x10) + iVar8;
            piVar6 = (int *)FUN_00462a64(piVar3);
            (**(code **)(*piVar6 + 0x74))(piVar6,iVar7,iVar8,iVar5,iVar4);
            iStack_20 = iStack_20 + 1;
            iStack_14 = iStack_14 + -1;
          } while (iStack_14 != 0);
        }
        iStack_24 = iStack_24 + 1;
        iStack_18 = iStack_18 + -1;
      } while (iStack_18 != 0);
    }
  }
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x394),1);
  FUN_00405a7c(uVar2);
  return;
}
