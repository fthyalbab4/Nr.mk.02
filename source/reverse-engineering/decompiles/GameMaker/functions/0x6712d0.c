// rea decompile_all
// name: FUN_006712d0
// address: 0x6712d0
// body: available
// range: 0x6712d0-0x6713a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006712d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  if (param_2 != *(int *)(param_1 + 0xe0)) {
    *(int *)(param_1 + 0xe0) = param_2;
    iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x6c) + 8) + 8);
    if (-1 < iVar4 + -1) {
      iVar3 = 0;
      do {
        iVar1 = FUN_00672aa4(*(undefined4 *)(param_1 + 0x6c),iVar3);
        if (*(int *)(iVar1 + 0xc) != 0) {
          iVar1 = FUN_00672aa4(*(undefined4 *)(param_1 + 0x6c),iVar3);
          (**(code **)(**(int **)(iVar1 + 0xc) + 0x168))();
          iVar1 = FUN_00672aa4(*(undefined4 *)(param_1 + 0x6c),iVar3);
          iVar1 = FUN_00677f54(*(undefined4 *)(iVar1 + 0xc));
          iVar2 = FUN_00672aa4(*(undefined4 *)(param_1 + 0x6c),iVar3);
          if (iVar1 == *(int *)(*(int *)(iVar2 + 0xc) + 0x2e0)) {
            iVar1 = FUN_00672aa4(*(undefined4 *)(param_1 + 0x6c),iVar3);
            (**(code **)(**(int **)(iVar1 + 0xc) + 0x148))(*(int **)(iVar1 + 0xc),0);
          }
          iVar1 = FUN_00672aa4(*(undefined4 *)(param_1 + 0x6c),iVar3);
          (**(code **)(**(int **)(iVar1 + 0xc) + 0x90))();
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (*(short *)(param_1 + 0xda) != 0) {
      (**(code **)(param_1 + 0xd8))(*(undefined4 *)(param_1 + 0xdc),param_1);
    }
    if ((*(byte *)(param_1 + 0x1c) & 0x10) != 0) {
      FUN_0066f614(0);
    }
  }
  return;
}
