// rea decompile_all
// name: FUN_006c7668
// address: 0x6c7668
// body: available
// range: 0x6c7668-0x6c77ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c7668(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_20;
  int local_1c;
  int iStack_18;
  int iStack_14;
  int local_10;
  int local_c;
  int local_8;

  local_20 = *param_5;
  local_1c = param_5[1];
  iStack_18 = param_5[2];
  iStack_14 = param_5[3];
  local_8 = param_3;
  local_10 = FUN_00405cbc(param_2,&PTR_LAB_00479ab8);
  (**(code **)(**(int **)(local_10 + 0x290) + 0x4c))(*(int **)(local_10 + 0x290),&local_20);
  if ((((*(int *)(param_1 + 0x817c) != 0) && (-1 < local_8)) &&
      (local_8 < *(int *)(*(int *)(param_1 + 0x817c) + 8))) &&
     (iVar1 = FUN_005a502c(*(undefined4 *)(param_1 + 0x817c),local_8), iVar1 != 0)) {
    local_c = 0;
    if (-1 < local_8) {
      iVar4 = local_8 + 1;
      iVar1 = 0;
      do {
        iVar2 = FUN_005a502c(*(undefined4 *)(param_1 + 0x817c),iVar1);
        if ((iVar2 != 0) &&
           (iVar2 = FUN_005a502c(*(undefined4 *)(param_1 + 0x817c),iVar1),
           *(int *)(iVar2 + 0xc) == 1)) {
          local_c = local_c + 0x10;
        }
        iVar1 = iVar1 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (-1 < local_8 + -1) {
      iVar4 = 0;
      iVar1 = local_8;
      do {
        iVar2 = FUN_005a502c(*(undefined4 *)(param_1 + 0x817c),iVar4);
        if ((iVar2 != 0) &&
           (iVar2 = FUN_005a502c(*(undefined4 *)(param_1 + 0x817c),iVar4),
           *(int *)(iVar2 + 0xc) == 2)) {
          local_c = local_c + -0x10;
        }
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    if (0x6f < local_c) {
      local_c = 0x70;
    }
    if (DAT_0077f410 == '\0') {
      iVar1 = local_1c + 1;
      uVar3 = FUN_005a502c(*(undefined4 *)(param_1 + 0x817c),local_8);
      FUN_00700174(uVar3,*(undefined4 *)(local_10 + 0x290),local_20 + 2 + local_c,iVar1);
    }
    iVar1 = local_1c + 4;
    uVar3 = FUN_005a502c(*(undefined4 *)(param_1 + 0x817c),local_8);
    FUN_007001a8(uVar3,*(undefined4 *)(local_10 + 0x290),local_20 + 0x1e + local_c,iVar1);
  }
  return;
}
