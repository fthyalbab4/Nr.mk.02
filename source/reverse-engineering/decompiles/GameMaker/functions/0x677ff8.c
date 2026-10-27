// rea decompile_all
// name: FUN_00677ff8
// address: 0x677ff8
// body: available
// range: 0x677ff8-0x67801e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00677ff8(int param_1)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = *(int *)(param_1 + 0x27c);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0xe0) != 0)) {
    return *(undefined4 *)(iVar1 + 0xe0);
  }
  uVar2 = FUN_0067a47c(DAT_0078a1e8,0);
  return uVar2;
}
