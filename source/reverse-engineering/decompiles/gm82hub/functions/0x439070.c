// rea decompile_all
// name: FUN_00439070
// address: 0x439070
// body: available
// range: 0x439070-0x4390c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00439070(int *param_1,int param_2,int param_3)

{
  int iVar1;

  if ((param_2 < 0) || (param_1[2] <= param_2)) {
    FUN_00438e00(*param_1,PTR_LAB_00689324,param_2);
  }
  iVar1 = *(int *)(param_1[1] + param_2 * 4);
  if (param_3 != iVar1) {
    *(int *)(param_1[1] + param_2 * 4) = param_3;
    if ((undefined **)*param_1 != &PTR_LAB_0042e000) {
      if (iVar1 != 0) {
        (**(code **)(*param_1 + 4))(param_1,iVar1,CONCAT31((int3)((uint)*param_1 >> 8),2));
      }
      if (param_3 != 0) {
        (**(code **)(*param_1 + 4))(param_1,param_3,0);
      }
    }
  }
  return;
}
