// rea decompile_all
// name: FUN_0054fc18
// address: 0x54fc18
// body: available
// range: 0x54fc18-0x54fcc5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0054fc18(int *param_1)

{
  int iVar1;

  if (((param_1[5] == 0xcd) || (param_1[5] == 0xce)) && (param_1[0x10] == 0)) {
    if ((uint)param_1[0x23] < (uint)param_1[0x1d]) {
      *(undefined4 *)(*param_1 + 0x14) = 0x43;
      (**(code **)*param_1)();
    }
    (**(code **)(param_1[0x69] + 4))();
    param_1[5] = 0xd2;
  }
  else if (param_1[5] == 0xcf) {
    param_1[5] = 0xd2;
  }
  else if (param_1[5] != 0xd2) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x14;
    *(int *)(iVar1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  do {
    if (*(int *)(param_1[0x6d] + 0x14) != 0) {
      (**(code **)(param_1[6] + 0x18))();
      FUN_0055af90(param_1);
      return 1;
    }
    iVar1 = (**(code **)param_1[0x6d])();
  } while (iVar1 != 0);
  return 0;
}
