// rea decompile_all
// name: FUN_00513264
// address: 0x513264
// body: available
// range: 0x513264-0x5132b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00513264(void)

{
  BOOL BVar1;
  undefined4 *puVar2;
  HWND in_stack_00000004;

  if (in_stack_00000004 != DAT_00778d1c) {
    BVar1 = IsWindowVisible(in_stack_00000004);
    if (BVar1 != 0) {
      BVar1 = IsWindowEnabled(in_stack_00000004);
      if (BVar1 != 0) {
        puVar2 = (undefined4 *)FUN_0040431c(8);
        *puVar2 = DAT_00778d2c;
        puVar2[1] = in_stack_00000004;
        DAT_00778d2c = puVar2;
        EnableWindow(in_stack_00000004,0);
      }
    }
  }
  return 0xffffffff;
}
