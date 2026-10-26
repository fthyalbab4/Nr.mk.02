// rea decompile_all
// name: FUN_004df564
// address: 0x4df564
// body: available
// range: 0x4df564-0x4df5c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004df564(void)

{
  BOOL BVar1;
  uint uVar2;
  HWND in_stack_00000004;

  if ((in_stack_00000004 != DAT_00681ab4) && (in_stack_00000004 != *(HWND *)(DAT_0068f2e8 + 0x170)))
  {
    BVar1 = IsWindowVisible(in_stack_00000004);
    if (BVar1 != 0) {
      BVar1 = IsWindowEnabled(in_stack_00000004);
      if (BVar1 != 0) {
        uVar2 = GetWindowLongW(in_stack_00000004,-0x14);
        if ((uVar2 & 8) == 0) {
          if (DAT_00681ab8 == (HWND)0x0) {
            DAT_00681ab8 = in_stack_00000004;
          }
        }
        else if (DAT_00681abc == (HWND)0x0) {
          DAT_00681abc = in_stack_00000004;
        }
      }
    }
  }
  return 0xffffffff;
}
