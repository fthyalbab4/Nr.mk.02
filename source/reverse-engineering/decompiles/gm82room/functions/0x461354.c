// rea decompile_all
// name: FUN_00461354
// address: 0x461354
// body: available
// range: 0x461354-0x4613b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00461354(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined2 extraout_var;
  int aiStack_70 [10];
  int iStack_48;

  iVar1 = (**(code **)*param_2)();
  iVar2 = FUN_0043c834(param_2);
  if (100 < iVar1 - iVar2) {
    (**(code **)(*param_2 + 0xc))(param_2,aiStack_70,100);
    (**(code **)(*param_2 + 0x14))(param_2,0xffffff9c,CONCAT22(extraout_var,1));
    if ((aiStack_70[0] == 1) && (iStack_48 == 0x464d4520)) {
      return 1;
    }
  }
  return 0;
}
