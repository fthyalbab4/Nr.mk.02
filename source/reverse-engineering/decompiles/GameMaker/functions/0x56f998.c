// rea decompile_all
// name: FUN_0056f998
// address: 0x56f998
// body: available
// range: 0x56f998-0x56f9eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056f998(int *param_1,int param_2,int param_3)

{
  int iStack_14;
  int iStack_10;

  if ((param_2 != param_1[0xb2]) || (param_3 != param_1[0xb3])) {
    (**(code **)(*param_1 + 0x9c))();
    iStack_14 = param_1[0xb2];
    iStack_10 = param_1[0xb3];
    param_1[0xb2] = param_2;
    param_1[0xb3] = param_3;
    FUN_0056fce0(param_1,&iStack_14);
  }
  return;
}
