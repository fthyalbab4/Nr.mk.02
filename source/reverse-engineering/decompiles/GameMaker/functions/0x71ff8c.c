// rea decompile_all
// name: FUN_0071ff8c
// address: 0x71ff8c
// body: available
// range: 0x71ff8c-0x71ffe1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0071ff8c(int param_1)

{
  undefined4 uVar1;

  if ((*(int *)(param_1 + 0x454) != 0) && (*(int *)(param_1 + 0x444) != 0)) {
    uVar1 = FUN_005357b0(&DAT_00534924,1);
    FUN_00535828(uVar1,*(undefined4 *)(param_1 + 0x444));
    FUN_00535828(*(undefined4 *)(param_1 + 0x444),*(undefined4 *)(param_1 + 0x454));
    FUN_00405a7c(*(undefined4 *)(param_1 + 0x454));
    *(undefined4 *)(param_1 + 0x454) = uVar1;
  }
  return;
}
