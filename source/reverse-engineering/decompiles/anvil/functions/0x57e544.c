// rea decompile_all
// name: FUN_0057e544
// address: 0x57e544
// body: available
// range: 0x57e544-0x57e576 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0057e544(int param_1,uint param_2)

{
  undefined4 uVar1;

  param_2 = param_2 & 0xff;
  if ((*(int *)(param_1 + 0x18) <= (int)param_2) && ((int)param_2 <= *(int *)(param_1 + 0x1c))) {
    return *(undefined4 *)(param_1 + 0x1024 + param_2 * 4);
  }
  if ((*(int *)(param_1 + 0x18) < 0x21) && (0x1f < *(int *)(param_1 + 0x1c))) {
    uVar1 = *(undefined4 *)(param_1 + 0x10a4);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x1024 + *(int *)(param_1 + 0x18) * 4);
  }
  return uVar1;
}
