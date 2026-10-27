// rea decompile_all
// name: FUN_0072f5c0
// address: 0x72f5c0
// body: available
// range: 0x72f5c0-0x72f60e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0072f5c0(int param_1,int param_2)

{
  int iVar1;

  if (param_2 < 0) {
    FUN_0041bfec(&PTR_LAB_004111bc,1,PTR_PTR_00782570);
    FUN_00406618();
  }
  iVar1 = FUN_0072f584(param_1);
  if (iVar1 < param_2) {
    FUN_0072f590(param_1,param_2);
  }
  if (param_2 < *(int *)(param_1 + 8)) {
    FUN_0072fc84(param_1,param_2,*(int *)(param_1 + 8) - param_2);
  }
  *(int *)(param_1 + 8) = param_2;
  return;
}
