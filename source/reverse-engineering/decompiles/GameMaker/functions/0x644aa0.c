// rea decompile_all
// name: FUN_00644aa0
// address: 0x644aa0
// body: available
// range: 0x644aa0-0x644d0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00644aa0(int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  iVar7 = *(int *)(param_1 + 0x704);
  iVar8 = *(int *)(param_1 + 0x710);
  lVar1 = (longlong)*(int *)(iVar7 + 4) * (longlong)iVar8;
  iVar2 = FUN_00404878((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
  lVar1 = (longlong)*(int *)(iVar7 + 8) * (longlong)iVar8;
  iVar3 = FUN_00404878((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
  iVar7 = *(int *)(*(int *)(param_1 + 0x5d8) + 0x48) + -4;
  iVar8 = *(int *)(*(int *)(param_1 + 0x5d8) + 0x4c) + -4;
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x5e0),iVar7 < iVar2);
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x5e4),iVar8 < iVar3);
  if (*(char *)(*(int *)(param_1 + 0x5e4) + 0x59) != '\0') {
    iVar7 = (iVar7 - *(int *)(*(int *)(param_1 + 0x5e4) + 0x48)) + -2;
  }
  iVar6 = *(int *)(param_1 + 0x5e0);
  if (*(char *)(iVar6 + 0x59) != '\0') {
    iVar8 = (iVar8 - *(int *)(iVar6 + 0x4c)) + -2;
  }
  FUN_004ee5c0(iVar6,iVar7 < iVar2);
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x5e4),iVar8 < iVar3);
  if (iVar2 < iVar7) {
    iVar7 = iVar2;
  }
  if (iVar3 < iVar8) {
    iVar8 = iVar3;
  }
  FUN_004edce0(*(undefined4 *)(param_1 + 0x5dc),iVar7);
  FUN_004edd14(*(undefined4 *)(param_1 + 0x5dc),iVar8);
  piVar4 = (int *)FUN_0045f64c(*(undefined4 *)(*(int *)(param_1 + 0x5dc) + 0x1b0));
  (**(code **)(*piVar4 + 0x44))(piVar4,*(undefined4 *)(*(int *)(param_1 + 0x5dc) + 0x48));
  piVar4 = (int *)FUN_0045f64c(*(undefined4 *)(*(int *)(param_1 + 0x5dc) + 0x1b0));
  (**(code **)(*piVar4 + 0x38))(piVar4,*(undefined4 *)(*(int *)(param_1 + 0x5dc) + 0x4c));
  if (*(int *)(param_1 + 0x708) != 0) {
    FUN_00405a7c();
  }
  uVar5 = FUN_005b57c0(*(undefined4 *)(*(int *)(param_1 + 0x5dc) + 0x48),
                       *(undefined4 *)(*(int *)(param_1 + 0x5dc) + 0x4c));
  *(undefined4 *)(param_1 + 0x708) = uVar5;
  DAT_0077f19c = 0;
  *(undefined4 *)(param_1 + 0x6f4) = 0;
  if (iVar2 < *(int *)(*(int *)(param_1 + 0x5e0) + 0x274) + iVar7) {
    iVar6 = iVar2 - iVar7;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    FUN_00484e60(*(int *)(param_1 + 0x5e0),iVar6);
  }
  FUN_00484e74(*(undefined4 *)(param_1 + 0x5e0),0);
  FUN_00484ee4(*(undefined4 *)(param_1 + 0x5e0),iVar2);
  FUN_00484e74(*(undefined4 *)(param_1 + 0x5e0),iVar7);
  iVar2 = iVar7;
  if (0x10 < iVar7) {
    iVar2 = 0x10;
  }
  iVar6 = *(int *)(param_1 + 0x5e0);
  *(short *)(iVar6 + 0x288) = (short)iVar2;
  *(short *)(iVar6 + 0x28a) = (short)iVar7;
  *(undefined4 *)(param_1 + 0x6f4) = *(undefined4 *)(iVar6 + 0x274);
  *(undefined4 *)(param_1 + 0x6f8) = 0;
  if (iVar3 < *(int *)(*(int *)(param_1 + 0x5e4) + 0x274) + iVar8) {
    iVar2 = iVar3 - iVar8;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    FUN_00484e60(*(int *)(param_1 + 0x5e4),iVar2);
  }
  FUN_00484e74(*(undefined4 *)(param_1 + 0x5e4),0);
  FUN_00484ee4(*(undefined4 *)(param_1 + 0x5e4),iVar3);
  FUN_00484e74(*(undefined4 *)(param_1 + 0x5e4),iVar8);
  iVar2 = iVar8;
  if (0x10 < iVar8) {
    iVar2 = 0x10;
  }
  iVar3 = *(int *)(param_1 + 0x5e4);
  *(short *)(iVar3 + 0x288) = (short)iVar2;
  *(short *)(iVar3 + 0x28a) = (short)iVar8;
  *(undefined4 *)(param_1 + 0x6f8) = *(undefined4 *)(iVar3 + 0x274);
  DAT_0077f19c = 1;
  *(int *)(param_1 + 0x788) = iVar7;
  *(int *)(param_1 + 0x78c) = iVar8;
  return;
}
