// rea decompile_all
// name: FUN_0057abb0
// address: 0x57abb0
// body: available
// range: 0x57abb0-0x57abf6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057abb0(int param_1)

{
  undefined4 *puVar1;

  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x1c);
  *(undefined4 **)(param_1 + 0x1a6) = puVar1;
  *puVar1 = FUN_0057aac8;
  puVar1[1] = FUN_0057ab74;
  puVar1[2] = FUN_0057aa80;
  puVar1[3] = &LAB_0057aab8;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 1;
  return;
}
