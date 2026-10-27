// rea decompile_all
// name: FUN_006802a8
// address: 0x6802a8
// body: available
// range: 0x6802a8-0x6802fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006802a8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;

  (**(code **)(**(int **)(param_1 + 0x290) + 8))(*(int **)(param_1 + 0x290),param_2);
  if (param_2 != 0) {
    (**(code **)(**(int **)(param_1 + 0x290) + 0x40))(*(int **)(param_1 + 0x290),1);
    iVar2 = (**(code **)(**(int **)(param_1 + 0x290) + 0x24))();
    uVar1 = *(undefined4 *)(param_1 + 0x290);
    piVar3 = (int *)FUN_00462a64(uVar1);
    uVar4 = (**(code **)(*piVar3 + 0x18))(piVar3,0,iVar2 + -1);
    FUN_00463f28(uVar1,uVar4);
  }
  return;
}
