// rea decompile_all
// name: FUN_004befd4
// address: 0x4befd4
// body: available
// range: 0x4befd4-0x4bf015 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004befd4(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;

  if (*(short *)(param_1 + 0x3ca) != 0) {
    iVar1 = (**(code **)(**(int **)(param_2 + 8) + 0x14))();
    if ((param_3 < iVar1) && (-1 < param_3)) {
      (**(code **)(param_1 + 0x3c8))
                (*(undefined4 *)(param_1 + 0x3cc),param_1,param_2,param_4,param_3);
    }
  }
  return;
}
