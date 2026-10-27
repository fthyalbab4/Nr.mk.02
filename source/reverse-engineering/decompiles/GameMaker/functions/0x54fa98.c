// rea decompile_all
// name: FUN_0054fa98
// address: 0x54fa98
// body: available
// range: 0x54fa98-0x54fb01 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0054fa98(int *param_1,int param_2)

{
  int iVar1;

  if ((param_1[5] != 200) && (param_1[5] != 0xc9)) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x14;
    *(int *)(iVar1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  iVar1 = FUN_0054fb04(param_1);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      iVar1 = 1;
    }
    else if (iVar1 == 2) {
      if (param_2 != 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0x33;
        (**(code **)*param_1)();
      }
      FUN_0055af90(param_1);
      iVar1 = 2;
    }
  }
  return iVar1;
}
