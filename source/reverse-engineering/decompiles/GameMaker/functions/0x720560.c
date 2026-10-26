// rea decompile_all
// name: FUN_00720560
// address: 0x720560
// body: available
// range: 0x720560-0x720a60 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00720560(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iStack_40;
  undefined1 local_3c [12];
  undefined1 auStack_30 [4];
  int iStack_2c;
  undefined1 auStack_28 [24];

  iVar1 = FUN_00404878();
  piVar2 = (int *)FUN_0048d8ec(*(undefined4 *)(param_1 + 0x40c));
  FUN_0045bc24(piVar2[0x12],0xffffff);
  (**(code **)(*piVar2 + 0x10))(piVar2,local_3c);
  (**(code **)(*piVar2 + 0x4c))(piVar2,local_3c);
  if (*(int *)(param_1 + 0x46c) != 0) {
    (**(code **)(*piVar2 + 0x3c))(piVar2,0,0,*(int *)(param_1 + 0x46c));
  }
  FUN_0045b850(piVar2[0x11],0xffffff);
  FUN_0045b9a4(piVar2[0x11],1);
  FUN_0045b954(piVar2[0x11],0xe);
  if (*(char *)(param_1 + 0x468) != '\0') {
    iVar4 = *(int *)(*(int *)(param_1 + 0x444) + 0x2c);
    if (3 < iVar4) {
      iVar3 = *(int *)(param_1 + 0x460) / iVar4;
      iVar4 = (*(int *)(*(int *)(param_1 + 0x40c) + 0x48) + *(int *)(param_1 + 0x460)) / iVar4;
      if (iVar3 <= iVar4) {
        iStack_40 = (iVar4 - iVar3) + 1;
        do {
          (**(code **)(*piVar2 + 0x5c))
                    (piVar2,*(int *)(*(int *)(param_1 + 0x444) + 0x2c) * iVar3 -
                            *(int *)(param_1 + 0x460),0);
          (**(code **)(*piVar2 + 0x58))
                    (piVar2,*(int *)(*(int *)(param_1 + 0x444) + 0x2c) * iVar3 -
                            *(int *)(param_1 + 0x460),
                     *(undefined4 *)(*(int *)(param_1 + 0x40c) + 0x4c));
          iVar3 = iVar3 + 1;
          iStack_40 = iStack_40 + -1;
        } while (iStack_40 != 0);
      }
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0x444) + 0x30);
    if (3 < iVar4) {
      iVar3 = *(int *)(param_1 + 0x464) / iVar4;
      iVar4 = (*(int *)(*(int *)(param_1 + 0x40c) + 0x4c) + *(int *)(param_1 + 0x464)) / iVar4;
      if (iVar3 <= iVar4) {
        iStack_40 = (iVar4 - iVar3) + 1;
        do {
          (**(code **)(*piVar2 + 0x5c))
                    (piVar2,0,*(int *)(*(int *)(param_1 + 0x444) + 0x30) * iVar3 -
                              *(int *)(param_1 + 0x464));
          (**(code **)(*piVar2 + 0x58))
                    (piVar2,*(undefined4 *)(*(int *)(param_1 + 0x40c) + 0x48),
                     *(int *)(*(int *)(param_1 + 0x444) + 0x30) * iVar3 - *(int *)(param_1 + 0x464))
          ;
          iVar3 = iVar3 + 1;
          iStack_40 = iStack_40 + -1;
        } while (iStack_40 != 0);
      }
    }
  }
  FUN_0045b850(piVar2[0x11],0);
  FUN_0045b9a4(piVar2[0x11],3);
  FUN_0045b954(piVar2[0x11],4);
  FUN_00535f2c(*(undefined4 *)(param_1 + 0x444));
  uVar5 = FUN_00404878();
  FUN_00535efc(*(undefined4 *)(param_1 + 0x444));
  uVar6 = FUN_00404878();
  (**(code **)(*piVar2 + 0x5c))(piVar2,uVar6,uVar5);
  if (0 < iVar1) {
    iVar4 = 1;
    iStack_40 = iVar1;
    do {
      iStack_2c = iVar4;
      FUN_00535f2c(*(undefined4 *)(param_1 + 0x444));
      uVar5 = FUN_00404878();
      iStack_2c = iVar4;
      FUN_00535efc(*(undefined4 *)(param_1 + 0x444));
      uVar6 = FUN_00404878();
      (**(code **)(*piVar2 + 0x58))(piVar2,uVar6,uVar5);
      iVar4 = iVar4 + 1;
      iStack_40 = iStack_40 + -1;
    } while (iStack_40 != 0);
  }
  FUN_0045b850(piVar2[0x11],0xffff);
  FUN_0045b9a4(piVar2[0x11],1);
  FUN_00535f2c(*(undefined4 *)(param_1 + 0x444));
  uVar5 = FUN_00404878();
  FUN_00535efc(*(undefined4 *)(param_1 + 0x444));
  uVar6 = FUN_00404878();
  (**(code **)(*piVar2 + 0x5c))(piVar2,uVar6,uVar5);
  if (0 < iVar1) {
    iVar4 = 1;
    iStack_40 = iVar1;
    do {
      iStack_2c = iVar4;
      FUN_00535f2c(*(undefined4 *)(param_1 + 0x444));
      uVar5 = FUN_00404878();
      iStack_2c = iVar4;
      FUN_00535efc(*(undefined4 *)(param_1 + 0x444));
      uVar6 = FUN_00404878();
      (**(code **)(*piVar2 + 0x58))(piVar2,uVar6,uVar5);
      iVar4 = iVar4 + 1;
      iStack_40 = iStack_40 + -1;
    } while (iStack_40 != 0);
  }
  FUN_0045b850(piVar2[0x11],0);
  FUN_0045bc24(piVar2[0x12],0xff0000);
  iStack_40 = *(int *)(*(int *)(param_1 + 0x444) + 8);
  if (-1 < iStack_40 + -1) {
    iVar1 = 0;
    do {
      FUN_00535148(*(undefined4 *)(param_1 + 0x444),iVar1,auStack_28);
      iVar4 = FUN_00404878();
      FUN_00535148(*(undefined4 *)(param_1 + 0x444),iVar1,auStack_28);
      iVar3 = FUN_00404878();
      (**(code **)(*piVar2 + 0x48))(piVar2,iVar4 + -4,iVar3 + -4,iVar3 + 4,iVar4 + 4);
      iVar1 = iVar1 + 1;
      iStack_40 = iStack_40 + -1;
    } while (iStack_40 != 0);
  }
  FUN_0045bc24(piVar2[0x12],0x8000);
  FUN_00535efc(*(undefined4 *)(param_1 + 0x444));
  iVar1 = FUN_00404878();
  FUN_00535f2c(*(undefined4 *)(param_1 + 0x444));
  iVar4 = FUN_00404878();
  (**(code **)(*piVar2 + 0x74))(piVar2,iVar1 + -4,iVar4 + -4,iVar4 + 4,iVar1 + 4);
  FUN_0045bc24(piVar2[0x12],0xff);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x398) + 0xec))();
  if (-1 < iVar1) {
    uVar5 = (**(code **)(**(int **)(param_1 + 0x398) + 0xec))();
    FUN_00535148(*(undefined4 *)(param_1 + 0x444),uVar5,auStack_30);
    iVar1 = FUN_00404878();
    uVar5 = (**(code **)(**(int **)(param_1 + 0x398) + 0xec))();
    FUN_00535148(*(undefined4 *)(param_1 + 0x444),uVar5,auStack_30);
    iVar4 = FUN_00404878();
    (**(code **)(*piVar2 + 0x48))(piVar2,iVar1 + -4,iVar4 + -4,iVar4 + 4,iVar1 + 4);
  }
  FUN_004eed28(*(undefined4 *)(param_1 + 0x40c));
  return;
}
