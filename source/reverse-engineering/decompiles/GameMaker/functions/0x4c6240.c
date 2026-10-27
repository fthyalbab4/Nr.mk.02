// rea decompile_all
// name: FUN_004c6240
// address: 0x4c6240
// body: available
// range: 0x4c6240-0x4c6272 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c6240(int param_1)

{
  char cVar1;
  undefined4 uVar2;

  FUN_00491864(param_1);
  uVar2 = FUN_0043c914(param_1);
  (**(code **)(**(int **)(param_1 + 4) + 0x30))(*(int **)(param_1 + 4),uVar2);
  cVar1 = *(char *)(*(int *)(param_1 + 4) + 0x1d);
  if ((cVar1 == '\x01') || (cVar1 == '\x03')) {
    FUN_00491a34(*(int *)(param_1 + 4));
  }
  return;
}
