// rea decompile_all
// name: FUN_004eb244
// address: 0x4eb244
// body: available
// range: 0x4eb244-0x4eb29e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004eb244(int param_1,undefined4 param_2)

{
  LPCWSTR lpString;
  undefined1 in_ZF;

  FUN_0040891c(*(undefined4 *)(param_1 + 0x8c),param_2);
  if (!(bool)in_ZF) {
    if (*(char *)(param_1 + 0xac) != '\0') {
      if (*(char *)(param_1 + 0xd3) == '\0') {
        lpString = (LPCWSTR)FUN_00408220(param_2);
        SetWindowTextW(*(HWND *)(param_1 + 0x170),lpString);
      }
      else {
        SetWindowTextW(*(HWND *)(param_1 + 0x170),(LPCWSTR)0x0);
      }
    }
    FUN_00408194(param_1 + 0x8c,param_2);
  }
  return;
}
