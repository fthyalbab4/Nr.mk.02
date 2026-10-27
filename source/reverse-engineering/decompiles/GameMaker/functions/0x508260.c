// rea decompile_all
// name: FUN_00508260
// address: 0x508260
// body: available
// range: 0x508260-0x5082a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00508260(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_EDX;
  int extraout_EDX_00;

  iVar2 = (**(code **)*param_1)();
  iVar3 = (**(code **)*param_2)();
  if (extraout_EDX_00 == extraout_EDX && iVar3 == iVar2) {
    uVar4 = (**(code **)*param_1)();
    cVar1 = FUN_00415890(param_1[1],param_2[1],uVar4);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}
