// rea decompile_all
// name: FUN_004fa9e4
// address: 0x4fa9e4
// body: available
// range: 0x4fa9e4-0x4faa5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004fa9e4(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;

  FUN_004fa970(param_1);
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),param_2);
  if (param_2 != (int *)0x0) {
    iVar1 = (**(code **)(*param_2 + 0x24))();
    if (0 < iVar1) {
      uVar2 = FUN_004634ec(param_2);
      *(undefined4 *)(param_1 + 0x1c) = uVar2;
      iVar3 = (**(code **)(*param_2 + 0x30))();
      iVar4 = (**(code **)(*param_2 + 0x24))();
      iVar1 = iVar3 / iVar4;
      if (iVar3 % iVar4 == 0) {
        iVar3 = (**(code **)(*param_2 + 0x30))();
        iVar1 = (**(code **)(*param_2 + 0x24))();
        iVar3 = iVar3 / iVar1;
        if (4 < iVar3) {
          iVar3 = 1;
        }
        iVar1 = FUN_004faa5c(param_1,iVar3);
      }
    }
  }
  return iVar1;
}
