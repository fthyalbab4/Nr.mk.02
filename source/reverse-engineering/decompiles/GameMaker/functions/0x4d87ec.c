// rea decompile_all
// name: FUN_004d87ec
// address: 0x4d87ec
// body: available
// range: 0x4d87ec-0x4d8812 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004d87ec(int param_1)

{
  int iVar1;
  char cVar2;

  cVar2 = FUN_00449ce4(param_1);
  if ((cVar2 != '\0') &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x88),
     iVar1 == *(int *)(*(int *)(param_1 + 0x10) + 0x40))) {
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return 0;
}
