// rea decompile_all
// name: FUN_00670e04
// address: 0x670e04
// body: available
// range: 0x670e04-0x670ee3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00670e04(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_14;

  iVar5 = *(int *)(param_1 + 0xa4);
  if ((param_2 == iVar5) || ((*(byte *)(param_1 + 0x1c) & 8) != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (iVar5 != 0) {
    FUN_00508208(iVar5,*(undefined4 *)(param_1 + 0xa0));
  }
  *(int *)(param_1 + 0xa4) = param_2;
  if (param_2 != 0) {
    FUN_0050824c(param_2,*(undefined4 *)(param_1 + 0xa0));
    FUN_00448f68(*(undefined4 *)(param_1 + 0xa4),param_1);
  }
  if ((bVar1) &&
     (local_14 = *(int *)(*(int *)(*(int *)(param_1 + 0x6c) + 8) + 8), -1 < local_14 + -1)) {
    iVar5 = 0;
    do {
      FUN_00672aa4(*(undefined4 *)(param_1 + 0x6c),iVar5);
      iVar2 = FUN_0067236c();
      iVar2 = *(int *)(*(int *)(iVar2 + 8) + 8);
      if (-1 < iVar2 + -1) {
        iVar6 = 0;
        do {
          FUN_00672aa4(*(undefined4 *)(param_1 + 0x6c),iVar5);
          uVar3 = FUN_0067236c();
          iVar4 = FUN_00672cc0(uVar3,iVar6);
          if (*(int *)(iVar4 + 0x44) != 0) {
            FUN_00672aa4(*(undefined4 *)(param_1 + 0x6c),iVar5);
            uVar3 = FUN_0067236c();
            iVar4 = FUN_00672cc0(uVar3,iVar6);
            (**(code **)(**(int **)(iVar4 + 0x44) + 0xf8))();
          }
          iVar6 = iVar6 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar5 = iVar5 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}
