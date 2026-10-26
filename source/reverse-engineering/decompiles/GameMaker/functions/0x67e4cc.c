// rea decompile_all
// name: FUN_0067e4cc
// address: 0x67e4cc
// body: available
// range: 0x67e4cc-0x67e4f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0067e4cc(undefined4 param_1)

{
  char cVar1;
  int iVar2;

  cVar1 = FUN_0067e530(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_0067e508(param_1);
    iVar2 = *(int *)(*(int *)(iVar2 + 8) + 8);
    return CONCAT31((int3)((uint)iVar2 >> 8),0 < iVar2);
  }
  return 0;
}
