// rea decompile_all
// name: FUN_004b736c
// address: 0x4b736c
// body: available
// range: 0x4b736c-0x4b73be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b736c(int *param_1,int param_2)

{
  int iVar1;

  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  if (*(short *)(param_2 + 4) == 4) {
    iVar1 = param_1[0xa3];
    if (iVar1 < *(short *)(param_2 + 6)) {
      FUN_00405d08(param_1,0);
    }
    else if (*(short *)(param_2 + 6) < iVar1) {
      FUN_00405d08(param_1,CONCAT31((int3)((uint)iVar1 >> 8),1));
    }
    param_1[0xa3] = (int)*(short *)(param_2 + 6);
  }
  return;
}
