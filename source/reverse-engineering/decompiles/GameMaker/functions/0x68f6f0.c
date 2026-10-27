// rea decompile_all
// name: FUN_0068f6f0
// address: 0x68f6f0
// body: available
// range: 0x68f6f0-0x68f9f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068f6f0(int param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined1 *puVar9;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined1 local_50 [8];
  int iStack_48;
  int aiStack_40 [3];
  undefined4 uStack_34;
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  int iStack_24;
  undefined1 auStack_20 [4];
  int iStack_1c;
  undefined4 uStack_18;

  local_60 = *param_2;
  iStack_5c = param_2[1];
  iStack_58 = param_2[2];
  iStack_54 = param_2[3];
  FUN_0045f64c(*(undefined4 *)(*(int *)(param_1 + 0x3c4) + 0x1b0));
  piVar2 = (int *)FUN_00462a64();
  piVar8 = *(int **)(param_1 + 0x618);
  if (piVar8 == (int *)0x0) {
LAB_0068f77c:
    if (*(int *)(param_1 + 0x618) != 0) {
      FUN_00405a7c();
    }
    uVar5 = FUN_00462144(&PTR_FUN_004587d4,1);
    *(undefined4 *)(param_1 + 0x618) = uVar5;
    FUN_00463dc0(uVar5,7);
    (**(code **)(**(int **)(param_1 + 0x618) + 0x44))
              (*(int **)(param_1 + 0x618),(iStack_58 - local_60) + 1);
    (**(code **)(**(int **)(param_1 + 0x618) + 0x38))
              (*(int **)(param_1 + 0x618),(iStack_54 - iStack_5c) + 1);
  }
  else {
    (**(code **)(*piVar2 + 0x10))(piVar2,local_50);
    (**(code **)(*piVar2 + 0x10))(piVar2,aiStack_40);
    iVar3 = (**(code **)(*piVar8 + 0x30))();
    if ((iStack_48 - aiStack_40[0]) + 1 != iVar3) goto LAB_0068f77c;
    (**(code **)(*piVar2 + 0x10))(piVar2,auStack_30);
    iVar3 = iStack_24;
    (**(code **)(*piVar2 + 0x10))(piVar2,auStack_20);
    iVar4 = (**(code **)(**(int **)(param_1 + 0x618) + 0x24))();
    if ((iVar3 - iStack_1c) + 1 != iVar4) goto LAB_0068f77c;
  }
  piVar6 = (int *)FUN_00462144(&PTR_FUN_004587d4,1);
  FUN_00463dc0(piVar6,7);
  (**(code **)(*piVar6 + 0x44))(piVar6,(iStack_58 - local_60) + 1);
  (**(code **)(*piVar6 + 0x38))(piVar6,(iStack_54 - iStack_5c) + 1);
  (**(code **)(*piVar2 + 0x10))(piVar2,aiStack_40);
  puVar9 = local_50;
  (**(code **)(*piVar2 + 0x10))(piVar2,auStack_30,*piVar2,puVar9,uStack_34);
  FUN_00438c38(0,0,uStack_28,puVar9,uStack_34);
  puVar9 = local_50;
  (**(code **)(*piVar2 + 0x10))(piVar2,auStack_30,*piVar2,puVar9);
  piVar8 = aiStack_40;
  (**(code **)(*piVar2 + 0x10))(piVar2,auStack_20,*piVar2,piVar8,iStack_24);
  FUN_00438c38(0,0,uStack_18,piVar8,iStack_24);
  piVar8 = aiStack_40;
  uVar5 = FUN_00462a64(*(undefined4 *)(param_1 + 0x1684));
  uVar7 = FUN_00462a64(piVar6);
  FUN_0045c400(uVar7,piVar8,uVar5,puVar9);
  if (*(char *)(param_1 + 0x162d) == '\0') {
    if (*(int *)(*(int *)(param_1 + 0x38c) + 0x2d4) == *(int *)(param_1 + 0x3d0)) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x430) + 0xec))();
      if (cVar1 == '\0') goto LAB_0068f8b2;
    }
  }
  else {
LAB_0068f8b2:
    FUN_0068e484(param_1,piVar6,0,&local_60);
  }
  FUN_0068e818(param_1,piVar6,&local_60);
  if (*(char *)(param_1 + 0x162e) == '\0') {
    if (*(int *)(*(int *)(param_1 + 0x38c) + 0x2d4) != *(int *)(param_1 + 0x3d0)) goto LAB_0068f904;
    cVar1 = (**(code **)(**(int **)(param_1 + 0x430) + 0xec))();
    if (cVar1 == '\0') goto LAB_0068f904;
  }
  FUN_0068e484(param_1,piVar6,1,&local_60);
LAB_0068f904:
  if ((*(char *)(param_1 + 0x162c) != '\0') || (*(char *)(*(int *)(param_1 + 0x61c) + 0x1c) != '\0')
     ) {
    FUN_0068efa4(param_1,piVar6,&local_60);
  }
  if ((*(char *)(param_1 + 0x1631) != '\0') ||
     (*(int *)(*(int *)(param_1 + 0x38c) + 0x2d4) == *(int *)(param_1 + 0x3d4))) {
    FUN_0068f3cc(param_1,piVar6,&local_60);
  }
  if (*(char *)(param_1 + 0x1661) != '\0') {
    FUN_0045f64c(*(undefined4 *)(*(int *)(param_1 + 0x3c4) + 0x1b0));
    iVar3 = FUN_00462a64();
    FUN_0045bc24(*(undefined4 *)(iVar3 + 0x48),0);
    FUN_0045f64c(*(undefined4 *)(*(int *)(param_1 + 0x3c4) + 0x1b0));
    piVar8 = (int *)FUN_00462a64();
    (**(code **)(*piVar8 + 0x10))(piVar8,local_50);
    puVar9 = local_50;
    FUN_0045f64c(*(undefined4 *)(*(int *)(param_1 + 0x3c4) + 0x1b0));
    piVar8 = (int *)FUN_00462a64();
    (**(code **)(*piVar8 + 0x4c))(piVar8,puVar9);
    *(undefined1 *)(param_1 + 0x1661) = 0;
  }
  piVar8 = piVar6;
  FUN_0045f64c(*(undefined4 *)(*(int *)(param_1 + 0x3c4) + 0x1b0));
  piVar2 = (int *)FUN_00462a64();
  (**(code **)(*piVar2 + 0x3c))(piVar2,0,0,piVar8);
  FUN_004eed28(*(undefined4 *)(param_1 + 0x3c4));
  FUN_00405a7c(piVar6);
  return;
}
