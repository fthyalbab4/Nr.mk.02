// rea decompile_all
// name: FUN_00575bd8
// address: 0x575bd8
// body: available
// range: 0x575bd8-0x575c2a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00575bd8(int param_1)

{
  int iVar1;

  iVar1 = FUN_00572dcc(&PTR_LAB_0056af18,1,param_1);
  *(int *)(param_1 + 0x398) = iVar1;
  *(undefined4 *)(iVar1 + 0x2d8) = *(undefined4 *)(param_1 + 900);
  *(undefined4 *)(iVar1 + 0x2e8) = *(undefined4 *)(param_1 + 0x3a8);
  *(undefined4 *)(iVar1 + 0x2ec) = *(undefined4 *)(param_1 + 0x3ac);
  *(int *)(iVar1 + 0x2e4) = param_1;
  *(code **)(iVar1 + 0x2e0) = FUN_00576948;
  return iVar1;
}
