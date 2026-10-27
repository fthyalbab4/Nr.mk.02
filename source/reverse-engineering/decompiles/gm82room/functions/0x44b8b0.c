// rea decompile_all
// name: FUN_0044b8b0
// address: 0x44b8b0
// body: available
// range: 0x44b8b0-0x44b91c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044b8b0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;

  FUN_0040b268(param_3);
  iVar1 = (**(code **)(*param_2 + 0x14))();
  if (iVar1 == 1) {
    iVar1 = (**(code **)(*param_2 + 0x18))(param_2,0);
    FUN_0040b280(param_3,*(undefined4 *)(iVar1 + 4));
  }
  else {
    iVar1 = (**(code **)(*param_2 + 0x14))();
    if ((0 < iVar1) && (*(int *)(param_1 + 0xc) != 0)) {
      (**(code **)(*param_2 + 0xa0))();
      uVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0x10))(*(int **)(param_1 + 0xc),param_2);
      iVar1 = (**(code **)(*param_2 + 0x18))(param_2,uVar2);
      FUN_0040b280(param_3,*(undefined4 *)(iVar1 + 4));
    }
  }
  return;
}
