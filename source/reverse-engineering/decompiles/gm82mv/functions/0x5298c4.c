// rea decompile_all
// name: FUN_005298c4
// address: 0x5298c4
// body: available
// range: 0x5298c4-0x529906 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005298c4(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;

  uVar1 = (**(code **)(*param_2 + 0x24))();
  (**(code **)(*param_1 + 0x38))(param_1,uVar1);
  uVar1 = (**(code **)(*param_2 + 0x30))();
  (**(code **)(*param_1 + 0x44))(param_1,uVar1);
  FUN_0051f0e4(param_1,6);
  piVar2 = (int *)FUN_00463124(param_1);
  (**(code **)(*piVar2 + 0x3c))(piVar2,0,0,param_2);
  return;
}
