// rea decompile_all
// name: FUN_006f9738
// address: 0x6f9738
// body: available
// range: 0x6f9738-0x6f985d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f9738(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
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
  if (((*(int *)(param_1 + 0x434) != 0) && (-1 < local_8)) &&
     (local_8 < *(int *)(*(int *)(param_1 + 0x434) + 8))) {
    local_c = 0;
    if (-1 < local_8) {
      iVar3 = local_8 + 1;
      iVar4 = 0;
      do {
        iVar1 = FUN_005a502c(*(undefined4 *)(param_1 + 0x434),iVar4);
        if (*(int *)(iVar1 + 0xc) == 1) {
          local_c = local_c + 0x10;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (-1 < local_8 + -1) {
      iVar4 = 0;
      iVar3 = local_8;
      do {
        iVar1 = FUN_005a502c(*(undefined4 *)(param_1 + 0x434),iVar4);
        if (*(int *)(iVar1 + 0xc) == 2) {
          local_c = local_c + -0x10;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (0x6f < local_c) {
      local_c = 0x70;
    }
    iVar3 = local_1c + 1;
    uVar2 = FUN_005a502c(*(undefined4 *)(param_1 + 0x434),local_8);
    FUN_00700174(uVar2,*(undefined4 *)(local_10 + 0x290),local_20 + 2 + local_c,iVar3);
    iVar3 = local_1c + 4;
    uVar2 = FUN_005a502c(*(undefined4 *)(param_1 + 0x434),local_8);
    FUN_007001a8(uVar2,*(undefined4 *)(local_10 + 0x290),local_20 + 0x1e + local_c,iVar3);
  }
  return;
}
