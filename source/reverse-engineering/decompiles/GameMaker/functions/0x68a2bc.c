// rea decompile_all
// name: FUN_0068a2bc
// address: 0x68a2bc
// body: available
// range: 0x68a2bc-0x68a410 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068a2bc(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;

  iVar7 = 0;
  if (-1 < *(int *)(param_1 + 0x634)) {
    cVar1 = FUN_0062ca9c(*(int *)(param_1 + 0x634));
    if (cVar1 != '\0') {
      iVar2 = FUN_0062cd94(*(undefined4 *)(param_1 + 0x634));
      if (iVar2 != 0) {
        iVar7 = FUN_006f5b30(*(undefined4 *)(iVar2 + 4));
      }
    }
  }
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x474),0);
  if (iVar7 != 0) {
    if (0 < *(int *)(iVar7 + 4)) {
      uVar3 = FUN_005b2edc(iVar7);
      uVar4 = FUN_005b2ec4(iVar7);
      uVar3 = FUN_005b5764(uVar4,uVar3);
      uVar4 = FUN_005b2ef4(iVar7,0);
      FUN_007034e0(uVar3,0,0,1,uVar4);
      uVar4 = FUN_0070399c(uVar3);
      FUN_00405a7c(uVar3);
      piVar6 = *(int **)(*(int *)(param_1 + 0x474) + 0x1b0);
      (**(code **)(*piVar6 + 8))(piVar6,uVar4);
      FUN_004ee5c0(*(undefined4 *)(param_1 + 0x474),1);
      FUN_00405a7c(uVar4);
    }
    iVar2 = *(int *)(iVar7 + 8);
    iVar7 = *(int *)(iVar7 + 0xc);
    uVar3 = FUN_0045f64c(*(undefined4 *)(*(int *)(param_1 + 0x474) + 0x1b0));
    iVar5 = FUN_00462a64(uVar3);
    FUN_0045b850(*(undefined4 *)(iVar5 + 0x44),0xffffff);
    iVar5 = FUN_00462a64(uVar3);
    FUN_0045b954(*(undefined4 *)(iVar5 + 0x44),0xe);
    iVar5 = FUN_00462a64(uVar3);
    FUN_0045b9a4(*(undefined4 *)(iVar5 + 0x44),1);
    piVar6 = (int *)FUN_00462a64(uVar3);
    (**(code **)(*piVar6 + 0x5c))(piVar6,iVar2 + -0x20,iVar7);
    piVar6 = (int *)FUN_00462a64(uVar3);
    (**(code **)(*piVar6 + 0x58))(piVar6,iVar2 + 0x20,iVar7);
    piVar6 = (int *)FUN_00462a64(uVar3);
    (**(code **)(*piVar6 + 0x5c))(piVar6,iVar2,iVar7 + -0x20);
    piVar6 = (int *)FUN_00462a64(uVar3);
    (**(code **)(*piVar6 + 0x58))(piVar6,iVar2,iVar7 + 0x20);
  }
  return;
}
