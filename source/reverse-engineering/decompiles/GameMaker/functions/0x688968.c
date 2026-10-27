// rea decompile_all
// name: FUN_00688968
// address: 0x688968
// body: available
// range: 0x688968-0x6889bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00688968(int param_1)

{
  undefined4 uVar1;

  if ((*(int *)(param_1 + 0x62c) != 0) && (*(int *)(param_1 + 0x61c) != 0)) {
    uVar1 = FUN_006577b8(&DAT_006564cc,1);
    FUN_00657994(uVar1,*(undefined4 *)(param_1 + 0x61c));
    FUN_00657994(*(undefined4 *)(param_1 + 0x61c),*(undefined4 *)(param_1 + 0x62c));
    FUN_00405a7c(*(undefined4 *)(param_1 + 0x62c));
    *(undefined4 *)(param_1 + 0x62c) = uVar1;
  }
  return;
}
