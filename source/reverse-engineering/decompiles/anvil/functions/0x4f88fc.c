// rea decompile_all
// name: FUN_004f88fc
// address: 0x4f88fc
// body: available
// range: 0x4f88fc-0x4f8963 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004f88fc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  FUN_004f2178(param_1,9);
  uVar1 = FUN_004f16d8(*(undefined4 *)(param_1 + 0x14));
  **(undefined4 **)(param_1 + 4) = uVar1;
  uVar1 = FUN_004f16d8(*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(*(int *)(param_1 + 4) + 4) = uVar1;
  *(undefined1 *)(*(int *)(param_1 + 4) + 8) = *(undefined1 *)(param_1 + 0x1c);
  uVar1 = FUN_004f24a4(param_1,param_2);
  return uVar1;
}
