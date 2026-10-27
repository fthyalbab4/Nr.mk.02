// rea decompile_all
// name: FUN_0055c8b0
// address: 0x55c8b0
// body: available
// range: 0x55c8b0-0x55c902 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055c8b0(int param_1)

{
  undefined4 *puVar1;

  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x20);
  *(undefined4 **)(param_1 + 0x158) = puVar1;
  *puVar1 = FUN_0055c654;
  puVar1[1] = FUN_0055c694;
  puVar1[2] = FUN_0055c76c;
  puVar1[3] = &LAB_0055c82c;
  puVar1[4] = FUN_0055c838;
  puVar1[5] = FUN_0055c614;
  puVar1[6] = &LAB_0055c64c;
  puVar1[7] = 0;
  return;
}
