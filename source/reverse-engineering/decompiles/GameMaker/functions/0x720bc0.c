// rea decompile_all
// name: FUN_00720bc0
// address: 0x720bc0
// body: available
// range: 0x720bc0-0x720c16 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00720bc0(int param_1)

{
  int iVar1;

  iVar1 = FUN_004d437c(L"Are you sure you want to clear the entire path?",3,3,0,0xffffffff,
                       0xffffffff,0);
  if (iVar1 == 6) {
    FUN_0071ff54(param_1);
    FUN_005358b0(*(undefined4 *)(param_1 + 0x444));
    FUN_007201f0(param_1);
    FUN_00720560(param_1);
    FUN_007229e8(*(undefined4 *)(param_1 + 0x458));
    *(undefined1 *)(param_1 + 0x450) = 1;
  }
  return;
}
