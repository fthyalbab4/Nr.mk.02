// rea decompile_all
// name: FUN_00647cc4
// address: 0x647cc4
// body: available
// range: 0x647cc4-0x647d12 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00647cc4(int param_1)

{
  int iVar1;
  int iVar2;

  FUN_00643eac(param_1);
  iVar1 = *(int *)(*(int *)(param_1 + 0x704) + 4);
  iVar2 = *(int *)(*(int *)(param_1 + 0x704) + 8);
  FUN_006446f0(param_1);
  if ((iVar1 != *(int *)(*(int *)(param_1 + 0x704) + 4)) ||
     (iVar2 != *(int *)(*(int *)(param_1 + 0x704) + 8))) {
    FUN_00644aa0(param_1);
  }
  FUN_00644e28(param_1);
  FUN_00645298(param_1);
  *(undefined1 *)(param_1 + 0x70d) = 1;
  return;
}
