// rea decompile_all
// name: FUN_005c0a14
// address: 0x5c0a14
// body: available
// range: 0x5c0a14-0x5c0a5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c0a14(int param_1)

{
  undefined4 *puVar1;

  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x1c);
  *(undefined4 **)(param_1 + 0x1a6) = puVar1;
  *puVar1 = FUN_005c092c;
  puVar1[1] = FUN_005c09d8;
  puVar1[2] = FUN_005c08e4;
  puVar1[3] = &LAB_005c091c;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 1;
  return;
}
