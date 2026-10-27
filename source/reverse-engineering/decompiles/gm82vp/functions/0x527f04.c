// rea decompile_all
// name: FUN_00527f04
// address: 0x527f04
// body: available
// range: 0x527f04-0x527f52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00527f04(int param_1)

{
  FUN_00524da8(*(undefined4 *)(param_1 + 0x30));
  FUN_00524320(*(undefined4 *)(param_1 + 0x20));
  FUN_00528100(param_1);
  FUN_005281e0(param_1,4,0);
  FUN_005281e0(param_1,3,0);
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  FUN_0052815c(param_1);
  FUN_00528174(param_1);
  return;
}
