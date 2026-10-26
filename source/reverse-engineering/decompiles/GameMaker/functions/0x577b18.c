// rea decompile_all
// name: FUN_00577b18
// address: 0x577b18
// body: available
// range: 0x577b18-0x577b42 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00577b18(int param_1)

{
  int iVar1;

  if (*(int *)(param_1 + 0x10) == 0) {
    iVar1 = FUN_0043f190(&PTR_FUN_00432364,1);
    *(int *)(param_1 + 0x10) = iVar1;
    *(int *)(iVar1 + 0x34) = param_1;
    *(code **)(iVar1 + 0x30) = FUN_00577b94;
  }
  return *(undefined4 *)(param_1 + 0x10);
}
