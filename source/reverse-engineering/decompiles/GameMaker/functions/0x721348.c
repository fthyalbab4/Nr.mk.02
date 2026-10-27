// rea decompile_all
// name: FUN_00721348
// address: 0x721348
// body: available
// range: 0x721348-0x7213d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00721348(int param_1)

{
  FUN_0071ff54(param_1);
  FUN_00535b14(*(undefined4 *)(param_1 + 0x444));
  FUN_007201f0(param_1);
  (**(code **)(**(int **)(param_1 + 0x398) + 0xf0))
            (*(int **)(param_1 + 0x398),*(int *)(*(int *)(param_1 + 0x444) + 8) + -1);
  FUN_00720128(param_1);
  FUN_00720560(param_1);
  FUN_007229e8(*(undefined4 *)(param_1 + 0x458));
  *(undefined1 *)(param_1 + 0x450) = 1;
  return;
}
