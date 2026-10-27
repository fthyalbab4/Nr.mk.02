// rea decompile_all
// name: FUN_005afb74
// address: 0x5afb74
// body: available
// range: 0x5afb74-0x5afc1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005afb74(int *param_1)

{
  undefined4 uVar1;

  FUN_005b0eb0(param_1,0);
  if (param_1[0x2b] == 0) {
    FUN_005b2250(param_1);
    FUN_005b2c3c(param_1);
    FUN_005b1568(param_1,0);
  }
  FUN_005b3260(param_1);
  if (param_1[0x2c] == 0) {
    if (param_1[0x38] == 0) {
      FUN_005b4fa4(param_1);
    }
    else {
      FUN_005b3d6c(param_1);
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
  FUN_005b1d4c(param_1,uVar1);
  FUN_005b1050(param_1,0);
  FUN_005b03f4(param_1);
  (**(code **)(param_1[1] + 0x18))();
  (**(code **)param_1[0x56])();
  return;
}
