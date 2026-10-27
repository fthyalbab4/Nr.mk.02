// rea decompile_all
// name: FUN_006250dc
// address: 0x6250dc
// body: available
// range: 0x6250dc-0x625236 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_006250dc(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 local_18;

  local_18 = 0;
  FUN_00624edc(param_1);
  iVar2 = FUN_0050bbe0(param_2);
  if ((iVar2 == 800) || (iVar2 == 0x32a)) {
    uVar3 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    uVar3 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
    uVar3 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 4) = uVar3;
    FUN_00409dfc(param_1 + 8,&DAT_00622864,1,uVar3);
    iVar5 = *(int *)(param_1 + 4);
    if (-1 < iVar5 + -1) {
      iVar4 = 0;
      do {
        uVar3 = FUN_005159cc(&DAT_00514cd4,1);
        *(undefined4 *)(*(int *)(param_1 + 8) + iVar4 * 4) = uVar3;
        FUN_00516300(*(undefined4 *)(*(int *)(param_1 + 8) + iVar4 * 4),param_2);
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (iVar2 == 0x32a) {
      FUN_0050bbe0(param_2);
    }
    uVar1 = FUN_0050bcd0(param_2);
    *(undefined1 *)(param_1 + 0x28) = uVar1;
    if (0 < *(int *)(param_1 + 4)) {
      if (*(char *)(param_1 + 0x28) == '\0') {
        FUN_00409dfc(param_1 + 0x24,&DAT_00622898,1,1);
        uVar3 = FUN_0051820c(&DAT_00517b1c,1);
        **(undefined4 **)(param_1 + 0x24) = uVar3;
        FUN_00518c20(uVar3,param_2);
      }
      else {
        FUN_00409dfc(param_1 + 0x24,&DAT_00622898,1,*(int *)(param_1 + 4));
        iVar2 = *(int *)(param_1 + 4);
        if (-1 < iVar2 + -1) {
          iVar5 = 0;
          do {
            uVar3 = FUN_0051820c(&DAT_00517b1c,1);
            *(undefined4 *)(*(int *)(param_1 + 0x24) + iVar5 * 4) = uVar3;
            FUN_00518c20(*(undefined4 *)(*(int *)(param_1 + 0x24) + iVar5 * 4),param_2);
            iVar5 = iVar5 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
    }
    FUN_00623b48(param_1);
    local_18 = 1;
  }
  return local_18;
}
