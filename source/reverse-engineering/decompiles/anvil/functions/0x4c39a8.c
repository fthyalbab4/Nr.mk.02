// rea decompile_all
// name: FUN_004c39a8
// address: 0x4c39a8
// body: available
// range: 0x4c39a8-0x4c39e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c39a8(int param_1)

{
  char cVar1;
  BOOL BVar2;

  if (((*(byte *)(param_1 + 0x50) & 0x10) != 0) && (*(int *)(param_1 + 0x34) != 0)) {
    cVar1 = FUN_004c4988(param_1);
    if (cVar1 != '\0') {
      BVar2 = IsWindowVisible(*(HWND *)(param_1 + 600));
      if (BVar2 != 0) {
        FUN_004c44e0(param_1);
      }
    }
  }
  FUN_004c016c(param_1,0xb011);
  return;
}
