// rea decompile_all
// name: FUN_004391a4
// address: 0x4391a4
// body: available
// range: 0x4391a4-0x439244 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004391a4(int *param_1,int param_2)

{
  int iVar1;
  int local_14;
  int local_10;

  if ((param_2 < 0) || (0x7ffffff < param_2)) {
    FUN_00438e00(*param_1,PTR_LAB_00688e30,param_2);
  }
  if (param_2 != param_1[2]) {
    if (param_1[3] < param_2) {
      FUN_00439168(param_1,param_2);
    }
    local_14 = param_1[2];
    if (local_14 < param_2) {
      FUN_00404f38(param_1[1] + local_14 * 4,(param_2 - local_14) * 4,0);
    }
    else if ((undefined **)*param_1 != &PTR_LAB_0042e000) {
      local_14 = local_14 + -1;
      if (param_2 - local_14 == 0 || param_2 < local_14) {
        local_10 = (param_2 - local_14) + -1;
        do {
          param_1[2] = param_1[2] + -1;
          iVar1 = *(int *)(param_1[1] + local_14 * 4);
          if (iVar1 != 0) {
            (**(code **)(*param_1 + 4))(param_1,iVar1,2);
          }
          local_14 = local_14 + -1;
          local_10 = local_10 + 1;
        } while (local_10 != 0);
      }
    }
    param_1[2] = param_2;
  }
  return;
}
