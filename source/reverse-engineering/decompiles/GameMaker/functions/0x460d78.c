// rea decompile_all
// name: FUN_00460d78
// address: 0x460d78
// body: available
// range: 0x460d78-0x460dfa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00460d78(int param_1,int *param_2)

{
  int iVar1;
  int iStack_18;
  int iStack_14;
  int local_10;

  if (*(int *)(param_1 + 0x28) != 0) {
    local_10 = 0;
    iStack_14 = 0x460d99;
    (**(code **)(*param_2 + 0x10))(param_2,&local_10,4);
    iStack_14 = 0x460da0;
    local_10 = FUN_0043f234(param_2);
    local_10 = local_10 + -4;
    if (*(char *)(param_1 + 0x2c) == '\0') {
      iStack_14 = 0x460dc0;
      FUN_00460e88(param_1,param_2);
    }
    else {
      iStack_14 = 0x460db5;
      FUN_00460dfc(param_1,param_2);
    }
    iStack_14 = local_10 >> 0x1f;
    iStack_18 = local_10;
    (**(code **)(*param_2 + 0x18))(param_2,0);
    iVar1 = (**(code **)*param_2)();
    iStack_18 = iVar1 - iStack_18;
    (**(code **)(*param_2 + 0x10))(param_2,&iStack_18,4);
    (**(code **)(*param_2 + 0x18))(param_2,2,*param_2,0,0);
  }
  return;
}
