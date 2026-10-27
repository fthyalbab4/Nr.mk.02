// rea decompile_all
// name: FUN_0042c474
// address: 0x42c474
// body: available
// range: 0x42c474-0x42c4ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042c474(int param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  int *local_10;

  local_10 = param_3;
  cVar1 = FUN_0042c960((short)*param_3,&local_10);
  if (cVar1 == '\0') {
    FUN_0042c8e0(param_1);
  }
  else {
    (**(code **)(*local_10 + 0x1c))(local_10,param_2,param_3,*(undefined2 *)(param_1 + 4));
  }
  return;
}
