// rea decompile_all
// name: FUN_00460d80
// address: 0x460d80
// body: available
// range: 0x460d80-0x460dea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00460d80(int *param_1,int *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iStack_10;

  iStack_10 = param_3;
  (**(code **)(*param_2 + 0xc))(param_2,&iStack_10,4);
  if (iStack_10 < 5) {
    (**(code **)(*param_1 + 8))(param_1,0);
  }
  else {
    cVar1 = FUN_00461354(param_1,param_2);
    if (cVar1 == '\0') {
      FUN_00460ebc(param_1,param_2,iStack_10 + -4);
    }
    else {
      FUN_00460dec(param_1,param_2);
    }
  }
  iVar2 = (**(code **)(*param_1 + 0x28))();
  *(bool *)((int)param_1 + 0x22) = iVar2 != 0;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}
