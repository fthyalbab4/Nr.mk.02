// rea decompile_all
// name: FUN_00491918
// address: 0x491918
// body: available
// range: 0x491918-0x491970 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00491918(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  piVar1 = (int *)FUN_00491a08(param_1,param_2,param_3,param_3);
  piVar2 = (int *)FUN_00491a08(param_1,param_3);
  FUN_00491a08(param_1,param_2);
  uVar3 = FUN_0043c914();
  FUN_00491a08(param_1,param_3);
  uVar4 = FUN_0043c914();
  (**(code **)(*piVar1 + 0x14))(piVar1,uVar4);
  (**(code **)(*piVar2 + 0x14))(piVar2,uVar3);
  return;
}
