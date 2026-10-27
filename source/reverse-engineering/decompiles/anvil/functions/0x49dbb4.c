// rea decompile_all
// name: FUN_0049dbb4
// address: 0x49dbb4
// body: available
// range: 0x49dbb4-0x49dbcd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0049dbb4(int param_1)

{
  bool bVar1;
  int iVar2;

  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 8) + -1;
  bVar1 = *(int *)(param_1 + 4) < iVar2;
  if (bVar1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),bVar1);
}
