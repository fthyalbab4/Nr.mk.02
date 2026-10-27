// rea decompile_all
// name: FUN_006cb918
// address: 0x6cb918
// body: available
// range: 0x6cb918-0x6cb97d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006cb918(int param_1)

{
  char cVar1;
  undefined4 uVar2;

  cVar1 = (**(code **)(**(int **)(param_1 + 0x3b0) + 0xec))();
  if (cVar1 != *(char *)(*(int *)(param_1 + 0x3d0) + 0x14)) {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x3b0) + 0xec))();
    cVar1 = FUN_006cabf4(*(int *)(param_1 + 0x3d0),*(undefined4 *)(*(int *)(param_1 + 0x3d0) + 8),
                         uVar2);
    if (cVar1 == '\0') {
      FUN_004d43f8(L"Cannot change setting because original file could not be found.");
    }
    (**(code **)(**(int **)(param_1 + 0x3b0) + 0xf0))
              (*(int **)(param_1 + 0x3b0),*(undefined1 *)(*(int *)(param_1 + 0x3d0) + 0x14));
  }
  return;
}
