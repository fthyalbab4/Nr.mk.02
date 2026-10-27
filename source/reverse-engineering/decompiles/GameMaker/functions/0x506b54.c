// rea decompile_all
// name: FUN_00506b54
// address: 0x506b54
// body: available
// range: 0x506b54-0x506b8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00506b54(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x34)) {
    *(int *)(param_1 + 0x34) = param_2;
    if (*(HIMAGELIST *)(param_1 + 0x40) != (HIMAGELIST)0x0) {
      ImageList_SetIconSize(*(HIMAGELIST *)(param_1 + 0x40),*(int *)(param_1 + 0x38),param_2);
    }
    FUN_0050752c(param_1);
    FUN_00506a10(param_1);
    FUN_00405d08(param_1);
  }
  return;
}
