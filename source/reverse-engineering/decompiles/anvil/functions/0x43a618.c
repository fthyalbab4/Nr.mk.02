// rea decompile_all
// name: FUN_0043a618
// address: 0x43a618
// body: available
// range: 0x43a618-0x43a67e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043a618(int *param_1,int param_2)

{
  char cVar1;

  cVar1 = FUN_004061f8(param_2,param_1[1]);
  if (cVar1 == '\0') {
    FUN_00438e00(&PTR_LAB_0042e000,PTR_LAB_006890e4,0);
  }
  FUN_00438d04(param_1[2],param_2);
  *(int **)(param_2 + 4) = param_1;
  *(int *)(param_2 + 8) = param_1[4];
  param_1[4] = param_1[4] + 1;
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  (**(code **)(*param_1 + 0x14))(param_1,param_2,0);
  FUN_0043a2d8(param_1);
  FUN_00439edc(param_1,param_2,0);
  return;
}
