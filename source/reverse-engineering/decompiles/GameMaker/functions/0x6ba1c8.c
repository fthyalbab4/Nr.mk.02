// rea decompile_all
// name: FUN_006ba1c8
// address: 0x6ba1c8
// body: available
// range: 0x6ba1c8-0x6ba288 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ba1c8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;

  iVar2 = FUN_0045bea4(*(undefined4 *)(param_1 + 0x270),&LAB_006ba298);
  iVar2 = iVar2 + 1;
  *(int *)(param_1 + 0x280) = iVar2;
  iVar3 = *(int *)(param_1 + 0x4c) / iVar2;
  *(int *)(param_1 + 0x27c) = iVar3;
  iVar2 = FUN_006ba050(param_1,*(int *)(param_1 + 0x4c) % iVar2);
  (**(code **)(**(int **)(param_1 + 0x278) + 0x74))(*(int **)(param_1 + 0x278),iVar3 < iVar2);
  cVar1 = (**(code **)(**(int **)(param_1 + 0x278) + 0x5c))();
  if (cVar1 != '\0') {
    iVar2 = FUN_006ba050(param_1);
    if ((iVar2 - *(int *)(param_1 + 0x27c)) + 1 < *(int *)(*(int *)(param_1 + 0x278) + 0x274)) {
      iVar2 = FUN_006ba050(param_1);
      FUN_00484e60(*(undefined4 *)(param_1 + 0x278),(iVar2 - *(int *)(param_1 + 0x27c)) + 1);
    }
    iVar2 = FUN_006ba050(param_1);
    FUN_00484ee4(*(undefined4 *)(param_1 + 0x278),iVar2 + -1);
    iVar2 = *(int *)(param_1 + 0x278);
    *(undefined2 *)(iVar2 + 0x28a) = *(undefined2 *)(param_1 + 0x27c);
    FUN_00484e74(iVar2,*(undefined4 *)(param_1 + 0x27c));
  }
  return;
}
