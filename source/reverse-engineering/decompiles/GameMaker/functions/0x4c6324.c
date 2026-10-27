// rea decompile_all
// name: FUN_004c6324
// address: 0x4c6324
// body: available
// range: 0x4c6324-0x4c638b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_004c6324(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
                  ,undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  undefined4 uVar2;

  piVar1 = (int *)FUN_004c6318(param_1);
  (**(code **)(*piVar1 + 0x20))(piVar1,param_2);
  (**(code **)(*piVar1 + 0x28))(piVar1,param_3);
  (**(code **)(*piVar1 + 0x30))(piVar1,param_7);
  (**(code **)(*piVar1 + 0x2c))(piVar1,param_6);
  piVar1[9] = param_5;
  (**(code **)(*piVar1 + 0x24))(piVar1,param_4);
  uVar2 = FUN_0043c914(piVar1);
  (**(code **)(*param_1 + 0x30))(param_1,uVar2);
  return piVar1;
}
