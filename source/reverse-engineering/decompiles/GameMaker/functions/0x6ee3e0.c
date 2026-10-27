// rea decompile_all
// name: FUN_006ee3e0
// address: 0x6ee3e0
// body: available
// range: 0x6ee3e0-0x6ee49a inclusive
// range: 0x6ee4c8-0x6ee674 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ee3e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_14;

  if (*(int *)(*(int *)(param_1 + 0x5e8) + 4) == 0) {
    FUN_006e68d8(*(int *)(param_1 + 0x5e8),param_2);
    return;
  }
  iVar1 = FUN_006e660c(param_2);
  iVar2 = FUN_006e660c(*(undefined4 *)(param_1 + 0x5e8));
  if (iVar1 == iVar2) {
    iVar1 = FUN_006e6624(param_2);
    iVar2 = FUN_006e6624(*(undefined4 *)(param_1 + 0x5e8));
    if (iVar1 != iVar2) goto LAB_006ee438;
  }
  else {
LAB_006ee438:
    if (*(int *)(param_1 + 0x608) == -2) {
      uVar3 = FUN_006e7b90();
      *(undefined4 *)(param_1 + 0x608) = uVar3;
    }
    iVar2 = FUN_006e660c(*(undefined4 *)(param_1 + 0x5e8));
    iVar1 = FUN_006e660c(param_2);
    if (iVar1 < iVar2) {
      iVar1 = iVar2;
    }
    iVar4 = FUN_006e6624(*(undefined4 *)(param_1 + 0x5e8));
    iVar2 = FUN_006e6624(param_2);
    if (iVar2 < iVar4) {
      iVar2 = iVar4;
    }
    switch(*(undefined4 *)(param_1 + 0x608)) {
    case 0:
      uVar6 = 7;
      uVar3 = FUN_006e6624(*(undefined4 *)(param_1 + 0x5e8));
      uVar5 = FUN_006e660c(*(undefined4 *)(param_1 + 0x5e8));
      FUN_006e6c50(param_2,uVar5,uVar3,uVar6);
      break;
    case 1:
      uVar6 = 5;
      uVar3 = FUN_006e6624(*(undefined4 *)(param_1 + 0x5e8));
      uVar5 = FUN_006e660c(*(undefined4 *)(param_1 + 0x5e8));
      FUN_006e6c50(param_2,uVar5,uVar3,uVar6);
      break;
    case 2:
      uVar6 = 3;
      uVar3 = FUN_006e6624(*(undefined4 *)(param_1 + 0x5e8));
      uVar5 = FUN_006e660c(*(undefined4 *)(param_1 + 0x5e8));
      FUN_006e6c98(param_2,uVar5,uVar3,uVar6);
      break;
    case 3:
      uVar6 = 7;
      uVar3 = FUN_006e6624(param_2);
      uVar5 = FUN_006e660c(param_2);
      FUN_006e6c50(*(undefined4 *)(param_1 + 0x5e8),uVar5,uVar3,uVar6);
      break;
    case 4:
      uVar6 = 5;
      uVar3 = FUN_006e6624(param_2);
      uVar5 = FUN_006e660c(param_2);
      FUN_006e6c50(*(undefined4 *)(param_1 + 0x5e8),uVar5,uVar3,uVar6);
      break;
    case 5:
      uVar6 = 3;
      uVar3 = FUN_006e6624(param_2);
      uVar5 = FUN_006e660c(param_2);
      FUN_006e6c98(*(undefined4 *)(param_1 + 0x5e8),uVar5,uVar3,uVar6);
      break;
    case 6:
      FUN_006e6c50(*(undefined4 *)(param_1 + 0x5e8),iVar1,iVar2,7);
      FUN_006e6c50(param_2,iVar1,iVar2,7);
      break;
    case 7:
      FUN_006e6c50(*(undefined4 *)(param_1 + 0x5e8),iVar1,iVar2,5);
      FUN_006e6c50(param_2,iVar1,iVar2,5);
      break;
    case 8:
      FUN_006e6c98(*(undefined4 *)(param_1 + 0x5e8),iVar1,iVar2,3);
      FUN_006e6c98(param_2,iVar1,iVar2,3);
      break;
    case 0xffffffff:
      goto switchD_006ee494_caseD_ffffffff;
    }
  }
  local_14 = param_3;
  if (param_3 < 0) {
    local_14 = 0;
  }
  if (local_14 < *(int *)(*(int *)(param_1 + 0x5e8) + 4)) {
    iVar1 = *(int *)(param_2 + 4);
    if (-1 < iVar1 + -1) {
      iVar2 = 0;
      do {
        uVar3 = FUN_006e663c(param_2,iVar2);
        FUN_006e6af0(*(undefined4 *)(param_1 + 0x5e8),local_14,uVar3);
        local_14 = local_14 + 1;
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
    if (-1 < iVar1 + -1) {
      iVar2 = 0;
      do {
        uVar3 = FUN_006e663c(param_2,iVar2);
        FUN_006e6aa0(*(undefined4 *)(param_1 + 0x5e8),uVar3);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
switchD_006ee494_caseD_ffffffff:
  return;
}
