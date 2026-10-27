// rea decompile_all
// name: FUN_005794fc
// address: 0x5794fc
// body: available
// range: 0x5794fc-0x5795c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005794fc(int *param_1,int param_2,int param_3)

{
  int iVar1;

  param_1[1] = 0;
  if (param_2 != 0x3d) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 10;
    *(undefined4 *)(iVar1 + 0x18) = 0x3d;
    *(int *)(iVar1 + 0x1c) = param_2;
    (**(code **)*param_1)();
  }
  if (param_3 != 0x1c2) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x13;
    *(undefined4 *)(iVar1 + 0x18) = 0x1c2;
    *(int *)(iVar1 + 0x1c) = param_3;
    (**(code **)*param_1)();
  }
  iVar1 = *param_1;
  FUN_00579424();
  *param_1 = iVar1;
  param_1[3] = 1;
  FUN_0057a560(param_1);
  param_1[2] = 0;
  param_1[5] = 0;
  FUN_00579424();
  FUN_00579424();
  FUN_00579424();
  FUN_00584d14(param_1);
  FUN_0057abb0(param_1);
  param_1[4] = 200;
  return;
}
