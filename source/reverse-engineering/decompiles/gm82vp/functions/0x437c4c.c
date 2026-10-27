// rea decompile_all
// name: FUN_00437c4c
// address: 0x437c4c
// body: available
// range: 0x437c4c-0x437d1d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00437c4c(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int local_1c;
  int local_18;

  iVar2 = FUN_00437b20(param_1,param_3);
  if (iVar2 == 0) {
    FUN_00437bc8();
  }
  FUN_00437470(iVar2,param_2);
  local_1c = *(int *)(*(int *)(param_1 + 4) + 8);
  if (-1 < local_1c + -1) {
    local_18 = 0;
    do {
      iVar3 = FUN_00438ec4(*(undefined4 *)(param_1 + 4),local_18);
      if ((iVar3 != iVar2) && (*(int **)(iVar3 + 4) != (int *)0x0)) {
        iVar4 = (**(code **)(**(int **)(iVar3 + 4) + 0x14))();
        iVar4 = iVar4 + -1;
        if (-1 < iVar4) {
          do {
            uVar5 = (**(code **)(**(int **)(iVar3 + 4) + 0x18))(*(int **)(iVar3 + 4),iVar4);
            cVar1 = thunk_FUN_0040629c(uVar5,param_2);
            if ((cVar1 != '\0') && (iVar6 = FUN_00437b20(param_1,uVar5), iVar6 == iVar2)) {
              (**(code **)(**(int **)(iVar3 + 4) + 0x48))(*(int **)(iVar3 + 4),iVar4);
              FUN_0043773c(iVar2,uVar5);
            }
            iVar4 = iVar4 + -1;
          } while (iVar4 != -1);
        }
      }
      local_18 = local_18 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  return;
}
