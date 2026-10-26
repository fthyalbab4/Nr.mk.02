// rea decompile_all
// name: FUN_004d3a58
// address: 0x4d3a58
// body: available
// range: 0x4d3a58-0x4d3aa8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d3a58(int param_1,int *param_2,int *param_3)

{
  char cVar1;

  FUN_004d4d68(param_1,param_2);
  if (param_2 == (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x54) + 0x70))();
  }
  else {
    cVar1 = FUN_004631a4(param_2);
    if (cVar1 == '\x01') {
      (**(code **)(*param_2 + 0x70))();
    }
    else {
      (**(code **)(*param_3 + 8))(param_3,param_2);
      (**(code **)(*param_3 + 0x78))(param_3,1);
      (**(code **)(*param_3 + 0x70))();
    }
  }
  return;
}
