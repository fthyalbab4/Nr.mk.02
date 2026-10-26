// rea decompile_all
// name: FUN_006cfc98
// address: 0x6cfc98
// body: available
// range: 0x6cfc98-0x6cfcf1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006cfc98(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;

  if (*(int *)(param_1 + 0x10) <= *(int *)(param_1 + 8)) {
    FUN_006cf40c(param_1);
  }
  uVar1 = FUN_006cf4ac(param_1,param_2);
  uVar2 = FUN_006cf430(param_1,param_2,uVar1);
  if ((int)uVar2 < 0) {
    FUN_006cf524(param_1,uVar1,~uVar2,param_3,param_2);
  }
  else {
    FUN_006cf578(param_1,uVar2,param_3);
  }
  return;
}
