// rea decompile_all
// name: FUN_0055c030
// address: 0x55c030
// body: available
// range: 0x55c030-0x55c0db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055c030(int *param_1)

{
  undefined4 uVar1;

  FUN_0055d36c(param_1,0);
  if (param_1[0x2b] == 0) {
    FUN_0055e70c(param_1);
    FUN_0055f0f8(param_1);
    FUN_0055da24(param_1,0);
  }
  FUN_0055f71c(param_1);
  if (param_1[0x2c] == 0) {
    if (param_1[0x38] == 0) {
      FUN_00561460(param_1);
    }
    else {
      FUN_00560228(param_1);
    }
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 1;
    (**(code **)*param_1)();
  }
  if ((param_1[0x29] < 2) && (param_1[0x2d] == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_0055e208(param_1,uVar1);
  FUN_0055d50c(param_1,0);
  FUN_0055c8b0(param_1);
  (**(code **)(param_1[1] + 0x18))();
  (**(code **)param_1[0x56])();
  return;
}
